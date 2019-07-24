#include "xiicps.h"
#include "sleep.h"

#include "Si5340-RevD-Registers.h"

#define IIC_SCLK_RATE		100000 // 400KHz
#define IIC_SI5340_SLAVE_ADDR 0x76

XIicPs i2c1;

//see https://www.google.com/url?sa=t&rct=j&q=&esrc=s&source=web&cd=4&ved=2ahUKEwiprZ_tiMbjAhWD_qQKHeSZC5EQFjADegQIAxAB&url=https%3A%2F%2Fforums.xilinx.com%2Fxlnx%2Fattachments%2Fxlnx%2F7Series%2F19515%2F1%2Fmain.c&usg=AOvVaw3itr1TXAegD6Bw5rI-3Ht1

int si5340_init() {
	/*
	 * Initialize the IIC driver so that it's ready to use
	 * Look up the configuration in the config table, then initialize it.
	 */
	XIicPs_Config * config = XIicPs_LookupConfig(XPAR_XIICPS_1_DEVICE_ID);
	if (config == NULL) {
		return XST_FAILURE;
	}

	int status = XIicPs_CfgInitialize(&i2c1, config, config->BaseAddress);
	if (status != XST_SUCCESS) {
		return XST_FAILURE;
	}

	//Set the IIC serial clock rate.
	XIicPs_SetSClk(&i2c1, IIC_SCLK_RATE);

	return XST_SUCCESS;
}


int si5340_write(u16 register_address, u8 data) {
	u8 slave = IIC_SI5340_SLAVE_ADDR;
	u8 page_byte;
	page_byte = (register_address >> 8);

	int status;

	u8 page_select_send_buff[2] = {0x01,page_byte};
	status = XIicPs_MasterSendPolled(&i2c1, page_select_send_buff, 2, slave);
	xil_printf("(write) page %02X select status: %d\n\r", page_byte, status);

	u8 reg_byte;
	reg_byte = (register_address & 0xff);
	u8 write_reg_send_buff[2] = {reg_byte,data};
	status = XIicPs_MasterSendPolled(&i2c1, write_reg_send_buff, 2, slave);
	xil_printf("(write) register write register %02X data %02X - status: %d\n\r", reg_byte, data, status);

	return status;
}

const char *bit_rep[16] = {
    [ 0] = "0000", [ 1] = "0001", [ 2] = "0010", [ 3] = "0011",
    [ 4] = "0100", [ 5] = "0101", [ 6] = "0110", [ 7] = "0111",
    [ 8] = "1000", [ 9] = "1001", [10] = "1010", [11] = "1011",
    [12] = "1100", [13] = "1101", [14] = "1110", [15] = "1111",
};

/*
 * Example: Read register 0x052A.
 * The first step is to write the PAGE register to 0x05.
 * Then, write Register 0x2A and then read thedata out.
 * Note that a read sequence always consists of first writing the register and then reading the data.
 * It is advised to handle the paging with a separate function and compare when the page has changed.
 * The following example includes the paging.
 * 1.Write the Page Address (0x01) to a value of 0x05:
 * S/SlaveAddress/0/Ack/Reg_Address=0x01/Ack/Data=0x05/Ack/P
 * 2.Read Address 0x2A.
 * The read sequence requires first writing the register, then reading out the data.
 * S/Slave Address/0/Ack/Reg_Address=0x2A/Ack/P
 * //First Write the Register Address
 * S/Slave Address/1/Ack/DATA_RETURNED/N/P
 * //Then Read out the Data
 */
u8 si5340_read(u16 register_address) {
	u8 slave = IIC_SI5340_SLAVE_ADDR;
	u8 page_byte;
	u8 reg_byte;
	page_byte = register_address >> 8;
	reg_byte = register_address;

	int status;

	u8 page_select_send_buff[2] = {0x01,page_byte};
	status = XIicPs_MasterSendPolled(&i2c1, page_select_send_buff, 2, slave);
	xil_printf("(read) page %02X select status: %d\n\r", page_byte, status);

	status = XIicPs_MasterSendPolled(&i2c1, &reg_byte, 1, slave);
	xil_printf("(read) register %02X select - status: %d\n\r", reg_byte, status);

	u8 data;
	status = XIicPs_MasterRecvPolled(&i2c1, &data, 1, slave);
	xil_printf("(read) register read value:%s%s - status: %d\n\r", bit_rep[data >> 4], bit_rep[data & 0x0F], status);

	return data;
}


int si5340_program() {

	xil_printf("programming...\n\r");
	for(int i=0; i<SI5340_REVD_REG_CONFIG_NUM_REGS;i++) {
		if (i == 6) {
			xil_printf("wait 300ms...\n\r");
			/* Delay 300 msec */
			/*    Delay is worst case time for device to complete any calibration */
			/*    that is running due to device state change previous to this script */
			/*    being processed. */
			usleep(500*1000);
			xil_printf("...done\n\r");
		}
		si5340_write(si5340_revd_registers[i].address, si5340_revd_registers[i].value);
	}
	xil_printf("...done\n\r");

	return 0;
}

//https://www.silabs.com/documents/public/reference-manuals/Si5338-RM.pdf
/*
int si5338_program(unsigned char slave_address) {

	int status;

	//disable outputs
	//Set OEB_ALL = 1; reg230[4]
	//00010000
	unsigned char reg230 = si5338_readregister(230);
	reg230 |= 0x10;
	si5338_writeregister(230, reg230);



	for(int i=0;i<NUM_REGS_MAX;i++) {
		// ignore registers with masks of 0x00
		if(Reg_Store[i].Reg_Mask == 0x00) {
			//read only, ignore it
			continue;
		}



		// do a regular I2C write to the register
		// at addr with the desired data value
		if(Reg_Store[i].Reg_Mask == 0xFF) {
			status = XIicPs_MasterSendPolled(&i2c1, &(Reg_Store[i].Reg_Val), 1, 0x70);
			if (status != XST_SUCCESS) {
				return XST_FAILURE;
			}

			continue;
		}

		// do a read-modify-write using I2C and
		// bit-wise operations
		// get the current value from the device at the
		// register located at addr

		unsigned char curr_val = 0x00;

		XIicPs_MasterRecvPolled(&i2c1, &curr_val, 1, 0x70);
		if (status != XST_SUCCESS) {
			return XST_FAILURE;
		}

		// clear the bits that are allowed to be
		// accessed in the current value of the register
		//clear_curr_val = curr_val AND (NOT mask);

		unsigned char clear_curr_val = curr_val & (~Reg_Store[i].Reg_Mask);

		// clear the bits in the desired data that
		// are not allowed to be accessed
		unsigned char clear_new_val = Reg_Store[i].Reg_Val & Reg_Store[i].Reg_Mask;

		// combine the cleared values to get the new
		// value to write to the desired register
		unsigned char combined = clear_curr_val | clear_new_val;

		status = XIicPs_MasterSendPolled(&i2c1, &(Reg_Store[i].Reg_Val), 1, 0x70);
		if (status != XST_SUCCESS) {
			return XST_FAILURE;
		}
	}

	return 1;

}

*/
