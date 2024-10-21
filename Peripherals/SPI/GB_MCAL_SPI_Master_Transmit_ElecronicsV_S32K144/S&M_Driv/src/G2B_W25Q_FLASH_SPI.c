/*
 * G2B_W25Q_FLASH_SPI.c
 *
 *  Created on: 21-Oct-2024
 *      Author: gettobyte_kunal
 */


#include "Spi.h"
#include "Dio.h"
#include "G2B_W25Q_FLASH_SPI.h"

static void TestDelay(uint32 delay);
static void TestDelay(uint32 delay)
{
   static volatile uint32 DelayTimer = 0;
   while(DelayTimer<delay)
   {
       DelayTimer++;
   }
   DelayTimer=0;
}

#define gb_W25_CS_pin_low()  Dio_WriteChannel(DioConf_DioChannel_G2B_W25_CE, 0);
#define gb_W25_CS_pin_high() Dio_WriteChannel(DioConf_DioChannel_G2B_W25_CE, 1);

uint8_t tx_buff[10];
uint8_t rx_buff[10];

//SPI Jobs

#define G2B_W25Q_Flash_Reset_Job 2
#define G2B_W25Q_Flash_WrEn_Job 3
#define G2B_W25Q_Flash_ReData_Job 4
#define G2B_W25Q_Flash_WrCommand_Channel 5
#define G2B_W25Q_Flash_ReJedID_Job 6
#define G2B_W25Q_Flash_WrData_Channel 7

#define G2B_W25Q_Flash_ErSec4kb_Job 8
#define G2B_W25Q_Flash_ErSec32kb_Job 9
#define G2B_W25Q_Flash_ErSec64kb_Job 10
#define G2B_W25Q_Flash_ChiEra_Job 11
#define G2B_W25Q_Flash_WrSR_Job 12
#define G2B_W25Q_Flash_ReSRCommand_Job 13
#define G2B_W25Q_Flash_ReSRData_Job 14


// SPI Sequence

#define G2B_W25Q_Flash_Reset_Seq 2
#define G2B_W25Q_Flash_WrEn_Seq 3
#define G2B_W25Q_Flash_ReData_Seq 4
#define G2B_W25Q_Flash_WrCommand_Seq 5
#define G2B_W25Q_Flash_ReJedID_Seq 6
#define G2B_W25Q_Flash_WrData_Seq 7

#define G2B_W25Q_Flash_ErSec4kb_Seq 8
#define G2B_W25Q_Flash_ErSec32kb_Seq 9
#define G2B_W25Q_Flash_ErSec64kb_Seq 10
#define G2B_W25Q_Flash_ChiEra_Seq 11
#define G2B_W25Q_Flash_WrSR_Seq 12
#define G2B_W25Q_Flash_ReSRCommand_Seq 13
#define G2B_W25Q_Flash_ReSRData_Seq 14

uint8_t p = 0;

Std_ReturnType SPI_Exchange(   Spi_ChannelType Channel,
        const Spi_DataBufferType *DataBufferPtrTran, Spi_DataBufferType *DataBufferPtrRevc,  Spi_SequenceType Sequence )
{
	Std_ReturnType g2b_spi_status;

	g2b_spi_status = Spi_WriteIB(Channel, DataBufferPtrTran);
	g2b_spi_status = Spi_SyncTransmit(Sequence);

	g2b_spi_status = Spi_ReadIB(Channel, DataBufferPtrRevc);


	return g2b_spi_status;
}


//void W25_Reset(void)
//{
//
//	tx_buff[0] = reset1;
//	tx_buff[0] = reset2;
//
//	gb_W25_CS_pin_low();
//
//	SPI_Exchange(G2B_W25Q_Flash_Reset_Job, tx_buff, NULL_PTR,  G2B_W25Q_Flash_Reset_Sequence);
//
//	gb_W25_CS_pin_high();
//}

uint32_t W25_Read_ID(void)
{
  uint8_t dt[4];
  tx_buff[0] = JEDECID;
  gb_W25_CS_pin_low();

  SPI_Exchange(G2B_W25Q_Flash_ReJedID_Job, tx_buff, dt,  G2B_W25Q_Flash_ReJedID_Seq);

  gb_W25_CS_pin_high();
  return (dt[0] << 16) | (dt[1] << 8) | dt[2];
}

void WriteEnable_flash()
{
	tx_buff[0] = WriteEnable;

	gb_W25_CS_pin_low();
	SPI_Exchange(G2B_W25Q_Flash_WrEn_Job, tx_buff, NULL_PTR, G2B_W25Q_Flash_WrEn_Seq);

	gb_W25_CS_pin_high();
	   for(int i = 0; i < 10; i++) {
	        tx_buff[i] = 0;
	    }

}
void W25_Read_Data(uint32_t addr, uint8_t* data)
{
	 tx_buff[0] = ReadData;
	 tx_buff[1] = (addr >> 16) & 0xFF;
	 tx_buff[2] = (addr >> 8) & 0xFF;
	 tx_buff[3] = addr & 0xFF;

	 gb_W25_CS_pin_low();

	 SPI_Exchange(G2B_W25Q_Flash_ReData_Job, tx_buff, data, G2B_W25Q_Flash_ReData_Seq);

	 gb_W25_CS_pin_high();

	   for(int i = 0; i < 10; i++) {
	        tx_buff[i] = 0;
	    }

}
Std_ReturnType g2b_spi_status;
void W25_Write_Data(uint32_t addr, uint8_t* data)
{
	WriteEnable_flash();
	TestDelay(10000);

	 p = ReadSR(ReadSR1);

	tx_buff[0] = WriteData;
	tx_buff[1] = (addr >> 16) & 0xFF;
	tx_buff[2] = (addr >> 8) & 0xFF;
	tx_buff[3] = addr & 0xFF;

	gb_W25_CS_pin_low();

	g2b_spi_status = Spi_WriteIB(G2B_W25Q_Flash_WrCommand_Channel, tx_buff);
	g2b_spi_status = Spi_WriteIB(G2B_W25Q_Flash_WrData_Channel, data);
	g2b_spi_status = Spi_SyncTransmit(G2B_W25Q_Flash_WrCommand_Seq);

//	SPI_Exchange(G2B_W25Q_Flash_WrCommand_Job, tx_buff, NULL_PTR, G2B_W25Q_Flash_WrCommand_Seq);
//	SPI_Exchange(G2B_W25Q_Flash_WrData_Job, data, NULL_PTR, G2B_W25Q_Flash_WrData_Seq);

	gb_W25_CS_pin_high();

	   for(int i = 0; i < 10; i++) {
	        tx_buff[i] = 0;
	    }

		 p = ReadSR(ReadSR1);
}

void erase_sector4KB(uint32_t addr)
{

	WriteEnable_flash();
	TestDelay(10000);

	 p = ReadSR(ReadSR1);

	tx_buff[0] = SectErase4KB;
	tx_buff[1] = (addr >> 16) & 0xFF;
	tx_buff[2] = (addr >> 8) & 0xFF;
	tx_buff[3] = addr & 0xFF;

	gb_W25_CS_pin_low();

	SPI_Exchange(G2B_W25Q_Flash_ErSec4kb_Job, tx_buff, NULL_PTR, G2B_W25Q_Flash_ErSec4kb_Seq);

	gb_W25_CS_pin_high();

	   for(int i = 0; i < 10; i++) {
	        tx_buff[i] = 0;
	    }
	 p = ReadSR(ReadSR1);


}

uint8_t ReadSR(uint8_t SR_address)
{
	uint8_t RSR[2] = {0};
	gb_W25_CS_pin_low();

	tx_buff[0] =  SR_address;

	SPI_Exchange(G2B_W25Q_Flash_ReSRCommand_Job, tx_buff, RSR, G2B_W25Q_Flash_ReSRCommand_Seq);
	gb_W25_CS_pin_high();
	return RSR[1];
}
