#include "xiicps.h"
#include "sleep.h"

#include "Si5340-RevD-Registers.h"

#define IIC_SCLK_RATE		100000 // 100KHz
#define IIC_SI5340_SLAVE_ADDR 0x76

XIicPs i2c1;

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

	u8 reg_byte;
	reg_byte = (register_address & 0xFF);
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
	page_byte = (register_address >> 8);

	int status;

	u8 page_select_send_buff[2] = {0x01,page_byte};
	status = XIicPs_MasterSendPolled(&i2c1, page_select_send_buff, 2, slave);

	u8 reg_byte;
	reg_byte = (register_address & 0xFF);
	status = XIicPs_MasterSendPolled(&i2c1, &reg_byte, 1, slave);

	u8 data;
	status = XIicPs_MasterRecvPolled(&i2c1, &data, 1, slave);
	xil_printf("(read) register %02X read value:[%s %s]b [%02X]h - status: %d\n\r", reg_byte, bit_rep[data >> 4], bit_rep[data & 0x0F], data, status);

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
			usleep(300*1000);
			xil_printf("...done\n\r");
		}
		si5340_write(si5340_revd_registers[i].address, si5340_revd_registers[i].value);
	}
	xil_printf("...done\n\r");
	
	//needs a reset at the end
	si5340_write(0x001C, 1);

	//reads final status
	si5340_read(0x000C);

	return 0;
}
