/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : 
*   Dependencies         : none
*
*   Autosar Version      : 4.4.0
*   Autosar Revision     : ASR_REL_4_4_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 1.0.0
*   Build Version        : S32K1_RTD_1_0_0_ASR_REL_4_4_REV_0000_20210810
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
#include "Ftm_Pwm_Ip.h"
#include "Ftm_Pwm_Ip_Irq.h"
#include "Clock_Ip.h"
#include "Port.h"

volatile int exit_code = 0;
/* User includes */

/*!
  \brief The main function for the project.
  \details The startup initialization sequence is the following:
 * - startup asm routine
 * - main()
*/
#define FTM_INSTANCE_0    (uint8)0U /* FTM_0 */
#define FTM_CH_0          (uint8)0U /* Channel_0*/

void TestDelay(uint32 delay);
/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
void TestDelay(uint32 delay)
{
    static volatile uint32 DelayTimer = 0;
    while(DelayTimer<delay)
    {
        DelayTimer++;
    }
    DelayTimer=0;
}


uint32_t FTM_Clk = 0;
int main(void)
{
    /* Write your code here */

	Clock_Ip_StatusType clockStatus;

		 clockStatus = Clock_Ip_Init(&Clock_Ip_aClockConfig[0]);
		    while (clockStatus != CLOCK_IP_SUCCESS)
		    {
		        clockStatus = Clock_Ip_Init(&Clock_Ip_aClockConfig[0]);
		    }
		#if defined (FEATURE_CLOCK_IP_HAS_SPLL_CLK)
		    /* Busy wait until the System PLL is locked */
		    while (CLOCK_IP_PLL_LOCKED != Clock_Ip_GetPllStatus());
		    Clock_Ip_DistributePll();
		#endif

		    /* Initialize all pins using the Port driver */
		    Port_Init(NULL_PTR);

		    /* Initialize PWM driver */
		    Ftm_Pwm_Ip_Init(FTM_INSTANCE_0, &Ftm_Pwm_Ip_BOARD_InitPeripherals_UserCfg0);

		    FTM_Clk = Clock_Ip_GetClockFrequency(FTM0_CLK);
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
