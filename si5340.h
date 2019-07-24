#ifndef __SI5340_H_
#define __SI5340_H_

int si5340_init();
u8 si5340_read(u16 register_address);
int si5340_write(u16 register_address, u8 data);
int si5340_program();

#endif
