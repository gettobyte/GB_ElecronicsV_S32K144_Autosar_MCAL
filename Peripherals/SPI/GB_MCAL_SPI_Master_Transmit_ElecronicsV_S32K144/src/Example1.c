/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : S32K14X
*   Dependencies         : none
*
*   Autosar Version      : 4.4.0
*   Autosar Revision     : ASR_REL_4_4_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 1.0.0
*   Build Version        : S32K1_RTD_1_0_0_D2108_ASR_REL_4_4_REV_0000_20210810
*
*   (c) Copyright 2020-2021 NXP Semiconductors
*   All Rights Reserved.
*
*   NXP Confidential. This software is owned or controlled by NXP and may only be
*   used strictly in accordance with the applicable license terms. By expressly
*   accepting such terms or by downloading, installing, activating and/or otherwise
*   using the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms. If you do not agree to be
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
==================================================================================================*/

/**
*   @file main.c
*
*   @addtogroup main_module main module documentation
*   @{
*/

/* Including necessary configuration files. */
#include "Mcal.h"
#include "Clock_Ip.h"
#include "Port.h"
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


#define JEDECID 0x9F

//#define gb_W25_CS_pin_low()  Dio_WriteChannel(DioConf_DioChannel_G2B_W25_CE, 0);
//#define gb_W25_CS_pin_high() Dio_WriteChannel(DioConf_DioChannel_G2B_W25_CE, 1);

uint8_t rx_buf[40];
uint8_t tran_buff[40] = "The STM32 H7-series is a group of high ";


//uint8_t tx_buff[10];
//uint8_t rx_buff[10];

#define spi_channel0 0
#define sequencu0 0
volatile int exit_code = 0;
/* User includes */

/*!
  \brief The main function for the project.
  \details The startup initialization sequence is the following:
 * - startup asm routine
 * - main()
*/

Std_ReturnType x = 0;
Std_ReturnType y = 0;

uint8_t z = 0;

int main(void)
{
	Clock_Ip_StatusType clockStatus;

	    //Clock Configuration

		clockStatus = Clock_Ip_Init(&Mcu_aClockConfigPB[0]);
		while (clockStatus != CLOCK_IP_SUCCESS)
		{
			clockStatus = Clock_Ip_Init(&Mcu_aClockConfigPB[0]);
		}

	#if defined (FEATURE_CLOCK_IP_HAS_SPLL_CLK)
		/* Busy wait until the System PLL is locked */
		while (CLOCK_IP_PLL_LOCKED != Clock_Ip_GetPllStatus());
		Clock_Ip_DistributePll();
	#endif

		/* Initialize all pins using the Port driver */
		Port_Init(NULL_PTR);

//		tx_buff[0] = JEDECID;
//

		Spi_Init(&Spi_Config_BOARD_InitPeripherals);

		W25_Read_ID();
		erase_sector4KB(read_addr2);
		 if((ReadSR(ReadSR1) & BUSY_BIT) == 0x01)
		  {
		  erase_sector4KB(read_addr1);
		  }

		 TestDelay(700000);

		 z = ReadSR(ReadSR1);

		W25_Write_Data(read_addr2,tran_buff);
		TestDelay(500000);
		W25_Read_Data(read_addr2,rx_buf);
		TestDelay(50000);

//		gb_W25_CS_pin_low();
//		x = Spi_WriteIB(spi_channel0, tx_buff);
//		y = Spi_SyncTransmit(sequencu0);
//
//		x = Spi_ReadIB(spi_channel0, rx_buff);
//
//		y = Spi_GetSequenceResult(sequencu0);
//		gb_W25_CS_pin_high();
//

    for(;;)
    {
        if(exit_code != 0)
        {
            break;
        }
    }
    return exit_code;
}

/** @} */
