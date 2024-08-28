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
#include "Lpspi_Ip.h"
#include "Dio.h"
#include "ST7789_low_level.h"
#include "fonts.h"

volatile int exit_code = 0;
/* User includes */

uint8 txBuffer[1] = {0x36};
uint8 rxBuffer[1];
uint16 numberOfBytes = 1u;
uint32 timeOut = 1000000u;

#define gb_ST7789_DC_pin_low()  Dio_WriteChannel(DioConf_DioChannel_GB_ST7789_DC, 0);
#define gb_ST7789_DC_pin_high() Dio_WriteChannel(DioConf_DioChannel_GB_ST7789_DC, 1);

#define gb_ST7789_CS_pin_low()  Dio_WriteChannel(DioConf_DioChannel_GB_ST7789_CS, 0);
#define gb_ST7789_CS_pin_high() Dio_WriteChannel(DioConf_DioChannel_GB_ST7789_CS, 1);

#define gb_ST7789_Reset_pin_low()  Dio_WriteChannel(DioConf_DioChannel_GB_ST7789_Reset, 0);
#define gb_ST7789_Reset_pin_high() Dio_WriteChannel(DioConf_DioChannel_GB_ST7789_Reset, 1);


/*!
  \brief The main function for the project.
  \details The startup initialization sequence is the following:
 * - startup asm routine
 * - main()
*/

void TestDelay(uint32 delay);
void TestDelay(uint32 delay)
{
   static volatile uint32 DelayTimer = 0;
   while(DelayTimer<delay)
   {
       DelayTimer++;
   }
   DelayTimer=0;
}

int main(void)
{
	Clock_Ip_StatusType clockStatus;

	Lpspi_Ip_StatusType x;

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

    Lpspi_Ip_Init(&Lpspi_Ip_PhyUnitConfig_SpiPhyUnit_0_BOARD_InitPeripherals);


	GB_ST7789_Init();

	TestDelay(700000);
	ST7789_SetAddressWindow(ST7789_XStart,ST7789_YStart, ST7789_XEnd, ST7789_YEnd);
	ST7789_Fill_Color(ST77XX_BLACK);
	TestDelay(700000);

	ST7789_SetAddressWindow(ST7789_XStart,ST7789_YStart, ST7789_XEnd, ST7789_YEnd);
    ST7789_Fill_Color(ST77XX_RED);

    TestDelay(700000);


    for(;;)
    {

    }
    return exit_code;
}

/** @} */
