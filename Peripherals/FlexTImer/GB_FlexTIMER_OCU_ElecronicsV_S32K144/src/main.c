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
#include "Ftm_Ocu_Ip.h"
#include "Ftm_Ocu_Ip_Irq.h"
#include "Clock_Ip.h"
#include "IntCtrl_Ip.h"
#include "Port.h"

volatile int exit_code = 0;
/* User includes */

extern void FTM_0_CH_0_CH_1_ISR(void);
#define FTM_0       (0U)
#define CHANNEL_0   (0U)

/*!
  \brief The main function for the project.
  \details The startup initialization sequence is the following:
 * - startup asm routine
 * - main()
*/

/* Global flag updated in irq */
static volatile boolean Toggle_Led = FALSE;
uint32 count = 0U;

void OcuNotification(void);
/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

/**
* @brief    Ftm notification periodically called by the configured channel
* @details  Used to blink a led
*/
void OcuNotification()
{
    if(count++ >= 14000U)
    {
        Toggle_Led = TRUE;
        count = 0;
    }
}


int main(void)
{
    /* Write your code here */

	 Clock_Ip_StatusType clockStatus;

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

	    IntCtrl_Ip_EnableIrq(FTM0_Ch0_Ch1_IRQn);
	    IntCtrl_Ip_InstallHandler(FTM0_Ch0_Ch1_IRQn, FTM_0_CH_0_CH_1_ISR, NULL_PTR);
//	    /* set FTM 1 interupt */
//	      IntCtrl_Ip_Init(&IntCtrlConfig_0);
//	      IntCtrl_Ip_ConfigIrqRouting(&intRouteConfig);

	      /* init channel Ftm_Ocu*/
	      Ftm_Ocu_Ip_Init(&Ftm_Ocu_Ip_ModuleCfgPB_BOARD_INITPERIPHERALS);

	      /* Start channel and enable interrupt */
	      Ftm_Ocu_Ip_StartChannel(FTM_0,CHANNEL_0);
	      Ftm_Ocu_Ip_EnableNotification(FTM_0,CHANNEL_0);

    while(1)
    {
    	   /* Toggle the LED when the Ocu notification is called */
    	        if (TRUE == Toggle_Led)
    	        {
    	            Toggle_Led = FALSE;
    	        //    Gpio_Dio_Ip_TogglePins(LED_PORT, (1<<LED_PIN));
    	        }
    }
}

/** @} */
