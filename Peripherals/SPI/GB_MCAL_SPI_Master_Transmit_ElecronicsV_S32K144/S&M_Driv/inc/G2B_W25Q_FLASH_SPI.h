/*
 * G2B_W25Q_FLASH_SPI.h
 *
 *  Created on: 21-Oct-2024
 *      Author: gettobyte_kunal
 */

#ifndef INC_G2B_W25Q_FLASH_SPI_H_
#define INC_G2B_W25Q_FLASH_SPI_H_

#define WriteEnable 0x06
#define WriteDisable 0x04
#define Dummybyte 0xA5

#define ReadSR1 0x05
#define WriteSR1 0x01
#define ReadSR2 0x35  //0x35: 00110101
#define WriteSR2 0x31
#define ReadSR3 0x15
#define WriteSR3 0x11


#define Write_Enab_for_Vol_status_regist 0x50

#define ReadData 0x03
#define WriteData 0x02
#define ReadDataFast 0x0B


#define JEDECID 0x9F
#define UinqueID 0x4B

#define SectErase4KB 0x20
#define SectErase32KB 0x52
#define SectErase64KB 0xD8
#define chiperase 0xC7

#define reset1 0x66
#define reset2 0x99

#define read_addr1 0x020000
#define read_addr2 0x030000
#define read_addr3 0x040000
#define BUSY_BIT 0x01

void W25_Reset (void);
void WriteEnable_flash(void);
void W25_Read_Data(uint32_t addr, uint8_t* data);
void W25_Write_Data(uint32_t addr, uint8_t* data);
uint32_t W25_Read_ID(void);
void W25_Ini(void);
void erase_sector4KB(uint32_t addr);
void erase_sector32KB(uint32_t addr);
void erase_sector64KB(uint32_t addr);
void chip_erase(void);
void Uinque_ID(uint8_t uinque[]);
void WriteSR(uint8_t SR_address, uint8_t SR_data);
uint8_t ReadSR(uint8_t SR_address);
void WaitForWriteEnd(void);

#endif /* INC_G2B_W25Q_FLASH_SPI_H_ */
