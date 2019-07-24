/*
 * Si5340 Rev D Configuration Register Export Header File
 *
 * This file represents a series of Silicon Labs Si5340 Rev D
 * register writes that can be performed to load a single configuration
 * on a device. It was created by a Silicon Labs ClockBuilder Pro
 * export tool.
 *
 * Part:		                                       Si5340 Rev D
 * Design ID:
 * Includes Pre/Post Download Control Register Writes: Yes
 * Created By:                                         ClockBuilder Pro v2.35 [2019-06-18]
 * Timestamp:                                          2019-07-22 17:32:04 GMT+02:00
 *
 * A complete design report corresponding to this export is included at the end
 * of this header file.
 *
 */

#ifndef SI5340_REVD_REG_CONFIG_HEADER
#define SI5340_REVD_REG_CONFIG_HEADER

#define SI5340_REVD_REG_CONFIG_NUM_REGS				326

typedef struct
{
	unsigned int address; /* 16-bit register address */
	unsigned char value; /* 8-bit register data */

} si5340_revd_register_t;

si5340_revd_register_t const si5340_revd_registers[SI5340_REVD_REG_CONFIG_NUM_REGS] =
{

	/* Start configuration preamble */
	{ 0x0B24, 0xC0 },
	{ 0x0B25, 0x00 },
	/* Rev D stuck divider fix */
	{ 0x0502, 0x01 },
	{ 0x0505, 0x03 },
	{ 0x0957, 0x17 },
	{ 0x0B4E, 0x1A },
	/* End configuration preamble */

	/* Delay 300 msec */
	/*    Delay is worst case time for device to complete any calibration */
	/*    that is running due to device state change previous to this script */
	/*    being processed. */

	/* Start configuration registers */
	{ 0x0006, 0x00 },
	{ 0x0007, 0x00 },
	{ 0x0008, 0x00 },
	{ 0x000B, 0x74 },
	{ 0x0017, 0xD0 },
	{ 0x0018, 0xFF },
	{ 0x0021, 0x0F },
	{ 0x0022, 0x00 },
	{ 0x002B, 0x02 },
	{ 0x002C, 0x20 },
	{ 0x002D, 0x00 },
	{ 0x002E, 0x00 },
	{ 0x002F, 0x00 },
	{ 0x0030, 0x00 },
	{ 0x0031, 0x00 },
	{ 0x0032, 0x00 },
	{ 0x0033, 0x00 },
	{ 0x0034, 0x00 },
	{ 0x0035, 0x00 },
	{ 0x0036, 0x00 },
	{ 0x0037, 0x00 },
	{ 0x0038, 0x00 },
	{ 0x0039, 0x00 },
	{ 0x003A, 0x00 },
	{ 0x003B, 0x00 },
	{ 0x003C, 0x00 },
	{ 0x003D, 0x00 },
	{ 0x0041, 0x00 },
	{ 0x0042, 0x00 },
	{ 0x0043, 0x00 },
	{ 0x0044, 0x00 },
	{ 0x009E, 0x00 },
	{ 0x0102, 0x01 },
	{ 0x0112, 0x02 },
	{ 0x0113, 0x09 },
	{ 0x0114, 0x3E },
	{ 0x0115, 0x18 },
	{ 0x0117, 0x01 },
	{ 0x0118, 0x09 },
	{ 0x0119, 0x3B },
	{ 0x011A, 0x28 },
	{ 0x0126, 0x01 },
	{ 0x0127, 0x09 },
	{ 0x0128, 0x3B },
	{ 0x0129, 0x28 },
	{ 0x012B, 0x01 },
	{ 0x012C, 0x09 },
	{ 0x012D, 0x3B },
	{ 0x012E, 0x28 },
	{ 0x013F, 0x00 },
	{ 0x0140, 0x00 },
	{ 0x0141, 0x40 },
	{ 0x0206, 0x00 },
	{ 0x0208, 0x00 },
	{ 0x0209, 0x00 },
	{ 0x020A, 0x00 },
	{ 0x020B, 0x00 },
	{ 0x020C, 0x00 },
	{ 0x020D, 0x00 },
	{ 0x020E, 0x00 },
	{ 0x020F, 0x00 },
	{ 0x0210, 0x00 },
	{ 0x0211, 0x00 },
	{ 0x0212, 0x00 },
	{ 0x0213, 0x00 },
	{ 0x0214, 0x00 },
	{ 0x0215, 0x00 },
	{ 0x0216, 0x00 },
	{ 0x0217, 0x00 },
	{ 0x0218, 0x00 },
	{ 0x0219, 0x00 },
	{ 0x021A, 0x00 },
	{ 0x021B, 0x00 },
	{ 0x021C, 0x00 },
	{ 0x021D, 0x00 },
	{ 0x021E, 0x00 },
	{ 0x021F, 0x00 },
	{ 0x0220, 0x00 },
	{ 0x0221, 0x00 },
	{ 0x0222, 0x00 },
	{ 0x0223, 0x00 },
	{ 0x0224, 0x00 },
	{ 0x0225, 0x00 },
	{ 0x0226, 0x00 },
	{ 0x0227, 0x00 },
	{ 0x0228, 0x00 },
	{ 0x0229, 0x00 },
	{ 0x022A, 0x00 },
	{ 0x022B, 0x00 },
	{ 0x022C, 0x00 },
	{ 0x022D, 0x00 },
	{ 0x022E, 0x00 },
	{ 0x022F, 0x00 },
	{ 0x0235, 0x00 },
	{ 0x0236, 0x00 },
	{ 0x0237, 0x00 },
	{ 0x0238, 0x80 },
	{ 0x0239, 0x89 },
	{ 0x023A, 0x00 },
	{ 0x023B, 0x00 },
	{ 0x023C, 0x00 },
	{ 0x023D, 0x00 },
	{ 0x023E, 0x80 },
	{ 0x0250, 0x03 },
	{ 0x0251, 0x00 },
	{ 0x0252, 0x00 },
	{ 0x0253, 0x00 },
	{ 0x0254, 0x00 },
	{ 0x0255, 0x00 },
	{ 0x025C, 0x00 },
	{ 0x025D, 0x00 },
	{ 0x025E, 0x00 },
	{ 0x025F, 0x00 },
	{ 0x0260, 0x00 },
	{ 0x0261, 0x00 },
	{ 0x026B, 0x00 },
	{ 0x026C, 0x00 },
	{ 0x026D, 0x00 },
	{ 0x026E, 0x00 },
	{ 0x026F, 0x00 },
	{ 0x0270, 0x00 },
	{ 0x0271, 0x00 },
	{ 0x0272, 0x00 },
	{ 0x0302, 0x00 },
	{ 0x0303, 0x00 },
	{ 0x0304, 0x00 },
	{ 0x0305, 0x00 },
	{ 0x0306, 0x72 },
	{ 0x0307, 0x06 },
	{ 0x0308, 0x00 },
	{ 0x0309, 0x00 },
	{ 0x030A, 0x00 },
	{ 0x030B, 0x80 },
	{ 0x030C, 0x00 },
	{ 0x030D, 0x00 },
	{ 0x030E, 0x00 },
	{ 0x030F, 0x00 },
	{ 0x0310, 0x00 },
	{ 0x0311, 0x00 },
	{ 0x0312, 0x00 },
	{ 0x0313, 0x00 },
	{ 0x0314, 0x00 },
	{ 0x0315, 0x00 },
	{ 0x0316, 0x00 },
	{ 0x0317, 0x00 },
	{ 0x0318, 0x00 },
	{ 0x0319, 0x00 },
	{ 0x031A, 0x00 },
	{ 0x031B, 0x00 },
	{ 0x031C, 0x00 },
	{ 0x031D, 0x00 },
	{ 0x031E, 0x00 },
	{ 0x031F, 0x00 },
	{ 0x0320, 0x00 },
	{ 0x0321, 0x00 },
	{ 0x0322, 0x00 },
	{ 0x0323, 0x00 },
	{ 0x0324, 0x00 },
	{ 0x0325, 0x00 },
	{ 0x0326, 0x00 },
	{ 0x0327, 0x00 },
	{ 0x0328, 0x00 },
	{ 0x0329, 0x00 },
	{ 0x032A, 0x00 },
	{ 0x032B, 0x00 },
	{ 0x032C, 0x00 },
	{ 0x032D, 0x00 },
	{ 0x0338, 0x00 },
	{ 0x0339, 0x1F },
	{ 0x033B, 0x00 },
	{ 0x033C, 0x00 },
	{ 0x033D, 0x00 },
	{ 0x033E, 0x00 },
	{ 0x033F, 0x00 },
	{ 0x0340, 0x00 },
	{ 0x0341, 0x00 },
	{ 0x0342, 0x00 },
	{ 0x0343, 0x00 },
	{ 0x0344, 0x00 },
	{ 0x0345, 0x00 },
	{ 0x0346, 0x00 },
	{ 0x0347, 0x00 },
	{ 0x0348, 0x00 },
	{ 0x0349, 0x00 },
	{ 0x034A, 0x00 },
	{ 0x034B, 0x00 },
	{ 0x034C, 0x00 },
	{ 0x034D, 0x00 },
	{ 0x034E, 0x00 },
	{ 0x034F, 0x00 },
	{ 0x0350, 0x00 },
	{ 0x0351, 0x00 },
	{ 0x0352, 0x00 },
	{ 0x0359, 0x00 },
	{ 0x035A, 0x00 },
	{ 0x035B, 0x00 },
	{ 0x035C, 0x00 },
	{ 0x035D, 0x00 },
	{ 0x035E, 0x00 },
	{ 0x035F, 0x00 },
	{ 0x0360, 0x00 },
	{ 0x0802, 0x00 },
	{ 0x0803, 0x00 },
	{ 0x0804, 0x00 },
	{ 0x0805, 0x00 },
	{ 0x0806, 0x00 },
	{ 0x0807, 0x00 },
	{ 0x0808, 0x00 },
	{ 0x0809, 0x00 },
	{ 0x080A, 0x00 },
	{ 0x080B, 0x00 },
	{ 0x080C, 0x00 },
	{ 0x080D, 0x00 },
	{ 0x080E, 0x00 },
	{ 0x080F, 0x00 },
	{ 0x0810, 0x00 },
	{ 0x0811, 0x00 },
	{ 0x0812, 0x00 },
	{ 0x0813, 0x00 },
	{ 0x0814, 0x00 },
	{ 0x0815, 0x00 },
	{ 0x0816, 0x00 },
	{ 0x0817, 0x00 },
	{ 0x0818, 0x00 },
	{ 0x0819, 0x00 },
	{ 0x081A, 0x00 },
	{ 0x081B, 0x00 },
	{ 0x081C, 0x00 },
	{ 0x081D, 0x00 },
	{ 0x081E, 0x00 },
	{ 0x081F, 0x00 },
	{ 0x0820, 0x00 },
	{ 0x0821, 0x00 },
	{ 0x0822, 0x00 },
	{ 0x0823, 0x00 },
	{ 0x0824, 0x00 },
	{ 0x0825, 0x00 },
	{ 0x0826, 0x00 },
	{ 0x0827, 0x00 },
	{ 0x0828, 0x00 },
	{ 0x0829, 0x00 },
	{ 0x082A, 0x00 },
	{ 0x082B, 0x00 },
	{ 0x082C, 0x00 },
	{ 0x082D, 0x00 },
	{ 0x082E, 0x00 },
	{ 0x082F, 0x00 },
	{ 0x0830, 0x00 },
	{ 0x0831, 0x00 },
	{ 0x0832, 0x00 },
	{ 0x0833, 0x00 },
	{ 0x0834, 0x00 },
	{ 0x0835, 0x00 },
	{ 0x0836, 0x00 },
	{ 0x0837, 0x00 },
	{ 0x0838, 0x00 },
	{ 0x0839, 0x00 },
	{ 0x083A, 0x00 },
	{ 0x083B, 0x00 },
	{ 0x083C, 0x00 },
	{ 0x083D, 0x00 },
	{ 0x083E, 0x00 },
	{ 0x083F, 0x00 },
	{ 0x0840, 0x00 },
	{ 0x0841, 0x00 },
	{ 0x0842, 0x00 },
	{ 0x0843, 0x00 },
	{ 0x0844, 0x00 },
	{ 0x0845, 0x00 },
	{ 0x0846, 0x00 },
	{ 0x0847, 0x00 },
	{ 0x0848, 0x00 },
	{ 0x0849, 0x00 },
	{ 0x084A, 0x00 },
	{ 0x084B, 0x00 },
	{ 0x084C, 0x00 },
	{ 0x084D, 0x00 },
	{ 0x084E, 0x00 },
	{ 0x084F, 0x00 },
	{ 0x0850, 0x00 },
	{ 0x0851, 0x00 },
	{ 0x0852, 0x00 },
	{ 0x0853, 0x00 },
	{ 0x0854, 0x00 },
	{ 0x0855, 0x00 },
	{ 0x0856, 0x00 },
	{ 0x0857, 0x00 },
	{ 0x0858, 0x00 },
	{ 0x0859, 0x00 },
	{ 0x085A, 0x00 },
	{ 0x085B, 0x00 },
	{ 0x085C, 0x00 },
	{ 0x085D, 0x00 },
	{ 0x085E, 0x00 },
	{ 0x085F, 0x00 },
	{ 0x0860, 0x00 },
	{ 0x0861, 0x00 },
	{ 0x090E, 0x02 },
	{ 0x091C, 0x04 },
	{ 0x0943, 0x01 },
	{ 0x0949, 0x00 },
	{ 0x094A, 0x00 },
	{ 0x094E, 0x49 },
	{ 0x094F, 0x02 },
	{ 0x095E, 0x00 },
	{ 0x0A02, 0x00 },
	{ 0x0A03, 0x01 },
	{ 0x0A04, 0x01 },
	{ 0x0A05, 0x01 },
	{ 0x0A14, 0x00 },
	{ 0x0A1A, 0x00 },
	{ 0x0A20, 0x00 },
	{ 0x0A26, 0x00 },
	{ 0x0B44, 0x0F },
	{ 0x0B4A, 0x0E },
	{ 0x0B57, 0x0E },
	{ 0x0B58, 0x01 },
	/* End configuration registers */

	/* Start configuration postamble */
	{ 0x001C, 0x01 },
	{ 0x0B24, 0xC3 },
	{ 0x0B25, 0x02 },
	/* End configuration postamble */

};

/*
 * Design Report
 *
 * Overview
 * ========
 * Part:               Si5340ABCD Rev D
 * Design ID:          <none>
 * Created By:         ClockBuilder Pro v2.35 [2019-06-18]
 * Timestamp:          2019-07-22 17:32:04 GMT+02:00
 *
 * Design Rule Check
 * =================
 * Errors:
 * - No errors
 *
 * Warnings:
 * - No warnings
 *
 * Device Grade
 * ============
 * Maximum Output Frequency: 500 kHz
 * Frequency Synthesis Mode: Integer
 * Frequency Plan Grade:     D
 * Minimum Base OPN:         Si5340D*
 *
 * Base       Output Clock         Supported Frequency Synthesis Modes
 * OPN Grade  Frequency Range      (Typical Jitter)
 * ---------  -------------------  --------------------------------------------
 * Si5340A    100 Hz to 1.028 GHz  Integer (< 100 fs) and fractional (< 150 fs)
 * Si5340B    100 Hz to 350 MHz    "
 * Si5340C    100 Hz to 1.028 GHz  Integer only (< 100 fs)
 * Si5340D*   100 Hz to 350 MHz    "
 *
 * * Based on your calculated frequency plan, a Si5340D grade device is
 * sufficient for your design. For more in-system configuration flexibility
 * (higher frequencies and/or to enable fractional synthesis), consider
 * selecting device grade Si5340A when specifying an ordering part number (OPN)
 * for your application. See the datasheet Ordering Guide for more information.
 *
 * Design
 * ======
 * Host Interface:
 *    I/O Power Supply: VDDA (3.3V)
 *    SPI Mode: 4-Wire
 *    I2C Address Range: 116d to 119d / 0x74 to 0x77 (selected via A0/A1 pins)
 *
 * Inputs:
 *    XAXB: 48 MHz
 *          Crystal Mode
 *     IN0: Unused
 *     IN1: Unused
 *     IN2: Unused
 *   FB_IN: Unused
 *
 * Outputs:
 *    OUT0: 500 kHz
 *          Enabled, LVDS 1.8 V
 *    OUT1: Unused
 *    OUT2: Unused
 *    OUT3: Unused
 *
 * Frequency Plan
 * ==============
 * Priority: maximize the number of low jitter outputs
 *
 * Fpfd = 48 MHz
 * Fvco = 13.2 GHz
 * Fms0 = 4 MHz
 *
 * P dividers:
 *    P0  = Unused
 *    P1  = Unused
 *    P2  = Unused
 *    P3  = Unused
 *    Pxaxb = 1
 *
 * M = 275
 * N dividers:
 *    N0:
 *       Value: 3300
 *       OUT0: 500 kHz
 *    N1:
 *       Unused
 *    N2:
 *       Unused
 *    N3:
 *       Unused
 *
 * R dividers:
 *    R0 = 8
 *    R1 = Unused
 *    R2 = Unused
 *    R3 = Unused
 *
 * Dividers listed above show effective values. These values are translated to register settings by ClockBuilder Pro. For the actual register values, see below. Refer to the Family Reference Manual for information on registers related to frequency plan.
 *
 * Digitally Controlled Oscillator (DCO)
 * =====================================
 * Mode: FINC/FDEC
 *
 * N0: DCO Disabled
 *
 * N1: DCO Disabled
 *
 * N2: DCO Disabled
 *
 * N3: DCO Disabled
 *
 * Estimated Power & Junction Temperature
 * ======================================
 * Assumptions:
 *
 * Revision: D
 * VDD:      1.8 V
 * Ta:       25 \B0C
 * Theta-JA: 18.4 \B0C/W
 * Airflow:  2 m/s
 *
 * Total Power: 566 mW, On Chip Power: 560 mW, Tj: 35 \B0C
 *
 *         Frequency  Format   Voltage   Current     Power
 *         ---------  ------  --------  --------  --------
 * VDD                           1.8 V   92.8 mA    167 mW
 * VDDA                          3.3 V  112.8 mA    372 mW
 * VDDO0     500 kHz  LVDS       1.8 V   15.0 mA     27 mW
 * VDDO1      Unused
 * VDDO2      Unused
 * VDDO3      Unused
 *                                      --------  --------
 *                               Total  220.6 mA    566 mW
 *
 * Note:
 *
 * -Tj is junction temperature. Tj must be less than 125 \B0C (on Si5340 Revision D) for device to comply with datasheet specifications. Tj = Ta + Theta_JA*On_Chip_Power.
 * -Overall power includes on-chip power dissipation and adds differential load power dissipation to estimate total power requirements.
 * -Above are estimates only: power and temperature should be measured on your PCB.
 * -Selection of appropriate Theta-JA is required for most accurate estimate. Ideally, select 'User Specified Theta-JA' and enter a Theta-JA value based on the thermal properties of your PCB.
 *
 * Settings
 * ========
 *
 * Location      Setting Name         Decimal Value      Hex Value
 * ------------  -------------------  -----------------  -----------------
 * 0x0006[23:0]  TOOL_VERSION         0                  0x000000
 * 0x000B[6:0]   I2C_ADDR             116                0x74
 * 0x0017[0]     SYSINCAL_INTR_MSK    0                  0x0
 * 0x0017[1]     LOSXAXB_INTR_MSK     0                  0x0
 * 0x0017[2]     LOSREF_INTR_MSK      0                  0x0
 * 0x0017[3]     LOL_INTR_MSK         0                  0x0
 * 0x0017[5]     SMB_TMOUT_INTR_MSK   0                  0x0
 * 0x0018[3:0]   LOSIN_INTR_MSK       15                 0xF
 * 0x0021[0]     IN_SEL_REGCTRL       1                  0x1
 * 0x0021[2:1]   IN_SEL               3                  0x3
 * 0x0022[1]     OE                   0                  0x0
 * 0x002B[3]     SPI_3WIRE            0                  0x0
 * 0x002B[5]     AUTO_NDIV_UPDATE     0                  0x0
 * 0x002C[3:0]   LOS_EN               0                  0x0
 * 0x002C[4]     LOSXAXB_DIS          0                  0x0
 * 0x002D[1:0]   LOS0_VAL_TIME        0                  0x0
 * 0x002D[3:2]   LOS1_VAL_TIME        0                  0x0
 * 0x002D[5:4]   LOS2_VAL_TIME        0                  0x0
 * 0x002D[7:6]   LOS3_VAL_TIME        0                  0x0
 * 0x002E[15:0]  LOS0_TRG_THR         0                  0x0000
 * 0x0030[15:0]  LOS1_TRG_THR         0                  0x0000
 * 0x0032[15:0]  LOS2_TRG_THR         0                  0x0000
 * 0x0034[15:0]  LOS3_TRG_THR         0                  0x0000
 * 0x0036[15:0]  LOS0_CLR_THR         0                  0x0000
 * 0x0038[15:0]  LOS1_CLR_THR         0                  0x0000
 * 0x003A[15:0]  LOS2_CLR_THR         0                  0x0000
 * 0x003C[15:0]  LOS3_CLR_THR         0                  0x0000
 * 0x0041[4:0]   LOS0_DIV_SEL         0                  0x00
 * 0x0042[4:0]   LOS1_DIV_SEL         0                  0x00
 * 0x0043[4:0]   LOS2_DIV_SEL         0                  0x00
 * 0x0044[4:0]   LOS3_DIV_SEL         0                  0x00
 * 0x009E[7:4]   LOL_SET_THR          0                  0x0
 * 0x0102[0]     OUTALL_DISABLE_LOW   1                  0x1
 * 0x0112[0]     OUT0_PDN             0                  0x0
 * 0x0112[1]     OUT0_OE              1                  0x1
 * 0x0112[2]     OUT0_RDIV_FORCE2     0                  0x0
 * 0x0113[2:0]   OUT0_FORMAT          1                  0x1
 * 0x0113[3]     OUT0_SYNC_EN         1                  0x1
 * 0x0113[5:4]   OUT0_DIS_STATE       0                  0x0
 * 0x0113[7:6]   OUT0_CMOS_DRV        0                  0x0
 * 0x0114[3:0]   OUT0_CM              14                 0xE
 * 0x0114[6:4]   OUT0_AMPL            3                  0x3
 * 0x0115[2:0]   OUT0_MUX_SEL         0                  0x0
 * 0x0115[5:4]   OUT0_VDD_SEL         1                  0x1
 * 0x0115[3]     OUT0_VDD_SEL_EN      1                  0x1
 * 0x0115[7:6]   OUT0_INV             0                  0x0
 * 0x0117[0]     OUT1_PDN             1                  0x1
 * 0x0117[1]     OUT1_OE              0                  0x0
 * 0x0117[2]     OUT1_RDIV_FORCE2     0                  0x0
 * 0x0118[2:0]   OUT1_FORMAT          1                  0x1
 * 0x0118[3]     OUT1_SYNC_EN         1                  0x1
 * 0x0118[5:4]   OUT1_DIS_STATE       0                  0x0
 * 0x0118[7:6]   OUT1_CMOS_DRV        0                  0x0
 * 0x0119[3:0]   OUT1_CM              11                 0xB
 * 0x0119[6:4]   OUT1_AMPL            3                  0x3
 * 0x011A[2:0]   OUT1_MUX_SEL         0                  0x0
 * 0x011A[5:4]   OUT1_VDD_SEL         2                  0x2
 * 0x011A[3]     OUT1_VDD_SEL_EN      1                  0x1
 * 0x011A[7:6]   OUT1_INV             0                  0x0
 * 0x0126[0]     OUT2_PDN             1                  0x1
 * 0x0126[1]     OUT2_OE              0                  0x0
 * 0x0126[2]     OUT2_RDIV_FORCE2     0                  0x0
 * 0x0127[2:0]   OUT2_FORMAT          1                  0x1
 * 0x0127[3]     OUT2_SYNC_EN         1                  0x1
 * 0x0127[5:4]   OUT2_DIS_STATE       0                  0x0
 * 0x0127[7:6]   OUT2_CMOS_DRV        0                  0x0
 * 0x0128[3:0]   OUT2_CM              11                 0xB
 * 0x0128[6:4]   OUT2_AMPL            3                  0x3
 * 0x0129[2:0]   OUT2_MUX_SEL         0                  0x0
 * 0x0129[5:4]   OUT2_VDD_SEL         2                  0x2
 * 0x0129[3]     OUT2_VDD_SEL_EN      1                  0x1
 * 0x0129[7:6]   OUT2_INV             0                  0x0
 * 0x012B[0]     OUT3_PDN             1                  0x1
 * 0x012B[1]     OUT3_OE              0                  0x0
 * 0x012B[2]     OUT3_RDIV_FORCE2     0                  0x0
 * 0x012C[2:0]   OUT3_FORMAT          1                  0x1
 * 0x012C[3]     OUT3_SYNC_EN         1                  0x1
 * 0x012C[5:4]   OUT3_DIS_STATE       0                  0x0
 * 0x012C[7:6]   OUT3_CMOS_DRV        0                  0x0
 * 0x012D[3:0]   OUT3_CM              11                 0xB
 * 0x012D[6:4]   OUT3_AMPL            3                  0x3
 * 0x012E[2:0]   OUT3_MUX_SEL         0                  0x0
 * 0x012E[5:4]   OUT3_VDD_SEL         2                  0x2
 * 0x012E[3]     OUT3_VDD_SEL_EN      1                  0x1
 * 0x012E[7:6]   OUT3_INV             0                  0x0
 * 0x013F[11:0]  OUTX_ALWAYS_ON       0                  0x000
 * 0x0141[5]     OUT_DIS_LOL_MSK      0                  0x0
 * 0x0141[7]     OUT_DIS_MSK_LOS_PFD  0                  0x0
 * 0x0206[1:0]   PXAXB                0                  0x0
 * 0x0208[47:0]  P0                   0                  0x000000000000
 * 0x020E[31:0]  P0_SET               0                  0x00000000
 * 0x0212[47:0]  P1                   0                  0x000000000000
 * 0x0218[31:0]  P1_SET               0                  0x00000000
 * 0x021C[47:0]  P2                   0                  0x000000000000
 * 0x0222[31:0]  P2_SET               0                  0x00000000
 * 0x0226[47:0]  P3                   0                  0x000000000000
 * 0x022C[31:0]  P3_SET               0                  0x00000000
 * 0x0235[43:0]  M_NUM                590558003200       0x08980000000
 * 0x023B[31:0]  M_DEN                2147483648         0x80000000
 * 0x0250[23:0]  R0_REG               3                  0x000003
 * 0x0253[23:0]  R1_REG               0                  0x000000
 * 0x025C[23:0]  R2_REG               0                  0x000000
 * 0x025F[23:0]  R3_REG               0                  0x000000
 * 0x026B[7:0]   DESIGN_ID0           0                  0x00
 * 0x026C[7:0]   DESIGN_ID1           0                  0x00
 * 0x026D[7:0]   DESIGN_ID2           0                  0x00
 * 0x026E[7:0]   DESIGN_ID3           0                  0x00
 * 0x026F[7:0]   DESIGN_ID4           0                  0x00
 * 0x0270[7:0]   DESIGN_ID5           0                  0x00
 * 0x0271[7:0]   DESIGN_ID6           0                  0x00
 * 0x0272[7:0]   DESIGN_ID7           0                  0x00
 * 0x0302[43:0]  N0_NUM               7086696038400      0x67200000000
 * 0x0308[31:0]  N0_DEN               2147483648         0x80000000
 * 0x030C[0]     N0_UPDATE            0                  0x0
 * 0x030D[43:0]  N1_NUM               0                  0x00000000000
 * 0x0313[31:0]  N1_DEN               0                  0x00000000
 * 0x0317[0]     N1_UPDATE            0                  0x0
 * 0x0318[43:0]  N2_NUM               0                  0x00000000000
 * 0x031E[31:0]  N2_DEN               0                  0x00000000
 * 0x0322[0]     N2_UPDATE            0                  0x0
 * 0x0323[43:0]  N3_NUM               0                  0x00000000000
 * 0x0329[31:0]  N3_DEN               0                  0x00000000
 * 0x032D[0]     N3_UPDATE            0                  0x0
 * 0x0338[1]     N_UPDATE             0                  0x0
 * 0x0339[4:0]   N_FSTEP_MSK          31                 0x1F
 * 0x033B[43:0]  N0_FSTEPW            0                  0x00000000000
 * 0x0341[43:0]  N1_FSTEPW            0                  0x00000000000
 * 0x0347[43:0]  N2_FSTEPW            0                  0x00000000000
 * 0x034D[43:0]  N3_FSTEPW            0                  0x00000000000
 * 0x0359[15:0]  N0_DELAY             0                  0x0000
 * 0x035B[15:0]  N1_DELAY             0                  0x0000
 * 0x035D[15:0]  N2_DELAY             0                  0x0000
 * 0x035F[15:0]  N3_DELAY             0                  0x0000
 * 0x0802[15:0]  FIXREGSA0            0                  0x0000
 * 0x0804[7:0]   FIXREGSD0            0                  0x00
 * 0x0805[15:0]  FIXREGSA1            0                  0x0000
 * 0x0807[7:0]   FIXREGSD1            0                  0x00
 * 0x0808[15:0]  FIXREGSA2            0                  0x0000
 * 0x080A[7:0]   FIXREGSD2            0                  0x00
 * 0x080B[15:0]  FIXREGSA3            0                  0x0000
 * 0x080D[7:0]   FIXREGSD3            0                  0x00
 * 0x080E[15:0]  FIXREGSA4            0                  0x0000
 * 0x0810[7:0]   FIXREGSD4            0                  0x00
 * 0x0811[15:0]  FIXREGSA5            0                  0x0000
 * 0x0813[7:0]   FIXREGSD5            0                  0x00
 * 0x0814[15:0]  FIXREGSA6            0                  0x0000
 * 0x0816[7:0]   FIXREGSD6            0                  0x00
 * 0x0817[15:0]  FIXREGSA7            0                  0x0000
 * 0x0819[7:0]   FIXREGSD7            0                  0x00
 * 0x081A[15:0]  FIXREGSA8            0                  0x0000
 * 0x081C[7:0]   FIXREGSD8            0                  0x00
 * 0x081D[15:0]  FIXREGSA9            0                  0x0000
 * 0x081F[7:0]   FIXREGSD9            0                  0x00
 * 0x0820[15:0]  FIXREGSA10           0                  0x0000
 * 0x0822[7:0]   FIXREGSD10           0                  0x00
 * 0x0823[15:0]  FIXREGSA11           0                  0x0000
 * 0x0825[7:0]   FIXREGSD11           0                  0x00
 * 0x0826[15:0]  FIXREGSA12           0                  0x0000
 * 0x0828[7:0]   FIXREGSD12           0                  0x00
 * 0x0829[15:0]  FIXREGSA13           0                  0x0000
 * 0x082B[7:0]   FIXREGSD13           0                  0x00
 * 0x082C[15:0]  FIXREGSA14           0                  0x0000
 * 0x082E[7:0]   FIXREGSD14           0                  0x00
 * 0x082F[15:0]  FIXREGSA15           0                  0x0000
 * 0x0831[7:0]   FIXREGSD15           0                  0x00
 * 0x0832[15:0]  FIXREGSA16           0                  0x0000
 * 0x0834[7:0]   FIXREGSD16           0                  0x00
 * 0x0835[15:0]  FIXREGSA17           0                  0x0000
 * 0x0837[7:0]   FIXREGSD17           0                  0x00
 * 0x0838[15:0]  FIXREGSA18           0                  0x0000
 * 0x083A[7:0]   FIXREGSD18           0                  0x00
 * 0x083B[15:0]  FIXREGSA19           0                  0x0000
 * 0x083D[7:0]   FIXREGSD19           0                  0x00
 * 0x083E[15:0]  FIXREGSA20           0                  0x0000
 * 0x0840[7:0]   FIXREGSD20           0                  0x00
 * 0x0841[15:0]  FIXREGSA21           0                  0x0000
 * 0x0843[7:0]   FIXREGSD21           0                  0x00
 * 0x0844[15:0]  FIXREGSA22           0                  0x0000
 * 0x0846[7:0]   FIXREGSD22           0                  0x00
 * 0x0847[15:0]  FIXREGSA23           0                  0x0000
 * 0x0849[7:0]   FIXREGSD23           0                  0x00
 * 0x084A[15:0]  FIXREGSA24           0                  0x0000
 * 0x084C[7:0]   FIXREGSD24           0                  0x00
 * 0x084D[15:0]  FIXREGSA25           0                  0x0000
 * 0x084F[7:0]   FIXREGSD25           0                  0x00
 * 0x0850[15:0]  FIXREGSA26           0                  0x0000
 * 0x0852[7:0]   FIXREGSD26           0                  0x00
 * 0x0853[15:0]  FIXREGSA27           0                  0x0000
 * 0x0855[7:0]   FIXREGSD27           0                  0x00
 * 0x0856[15:0]  FIXREGSA28           0                  0x0000
 * 0x0858[7:0]   FIXREGSD28           0                  0x00
 * 0x0859[15:0]  FIXREGSA29           0                  0x0000
 * 0x085B[7:0]   FIXREGSD29           0                  0x00
 * 0x085C[15:0]  FIXREGSA30           0                  0x0000
 * 0x085E[7:0]   FIXREGSD30           0                  0x00
 * 0x085F[15:0]  FIXREGSA31           0                  0x0000
 * 0x0861[7:0]   FIXREGSD31           0                  0x00
 * 0x090E[0]     XAXB_EXTCLK_EN       0                  0x0
 * 0x090E[1]     XAXB_PDNB            1                  0x1
 * 0x091C[2:0]   ZDM_EN               4                  0x4
 * 0x0943[0]     IO_VDD_SEL           1                  0x1
 * 0x0949[3:0]   IN_EN                0                  0x0
 * 0x0949[7:4]   IN_PULSED_CMOS_EN    0                  0x0
 * 0x094A[7:4]   INX_TO_PFD_EN        0                  0x0
 * 0x094E[11:0]  REFCLK_HYS_SEL       585                0x249
 * 0x095E[0]     M_INTEGER            0                  0x0
 * 0x0A02[4:0]   N_ADD_0P5            0                  0x00
 * 0x0A03[4:0]   N_CLK_TO_OUTX_EN     1                  0x01
 * 0x0A04[4:0]   N_PIBYP              1                  0x01
 * 0x0A05[4:0]   N_PDNB               1                  0x01
 * 0x0A14[3]     N0_HIGH_FREQ         0                  0x0
 * 0x0A1A[3]     N1_HIGH_FREQ         0                  0x0
 * 0x0A20[3]     N2_HIGH_FREQ         0                  0x0
 * 0x0A26[3]     N3_HIGH_FREQ         0                  0x0
 * 0x0B44[3:0]   PDIV_ENB             15                 0xF
 * 0x0B4A[4:0]   N_CLK_DIS            14                 0x0E
 * 0x0B57[11:0]  VCO_RESET_CALCODE    270                0x10E
 *
 *
 */

#endif
