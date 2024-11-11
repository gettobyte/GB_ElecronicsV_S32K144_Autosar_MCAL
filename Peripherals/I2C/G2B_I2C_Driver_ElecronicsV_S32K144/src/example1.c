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
#include "Port_Ci_Port_Ip.h"
#include "CDD_I2c.h"
#define LPI2C_Instance_0 0
volatile int exit_code = 0;
uint8_t txbuff[1] = {0x01};
Lpi2c_Ip_StatusType x,y;


#define I2C_Channel0 0
/* User includes */

/*!
  \brief The main function for the project.
  \details The startup initialization sequence is the following:
 * - startup asm routine
 * - main()
*/

uint8_t tx_buff[10] = "Kunal Gupta";
I2c_RequestType Bno055 = {
		0x28,
		false,
		false,
		false,
		true,
		10,
		I2C_SEND_DATA,
		tx_buff
};
Std_ReturnType p;
int main(void)
{
    /* Write your code here */

	Clock_Ip_StatusType clockStatus;

	//    Clock Configuration
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

	    Port_Ci_Port_Ip_Init(2U,g_pin_mux_InitConfigArr0);

	    I2c_Init(&I2c_Config_BOARD_InitPeripherals);

	    p = I2c_SyncTransmit(I2C_Channel0,&Bno055);

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
