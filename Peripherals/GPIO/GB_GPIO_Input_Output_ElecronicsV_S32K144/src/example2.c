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

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Mcu.h"
#include "Port.h"
#include "Dio.h"


/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

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

volatile int exit_code = 0;
/* User includes */
Dio_LevelType Switch1_Level, Switch2_Level;
/*!
  \brief The main function for the project.
  \details The startup initialization sequence is the following:
 * - startup asm routine
 * - main()
*/
int main(void)
{
	  /* Initialize the Mcu driver */
	#if (MCU_PRECOMPILE_SUPPORT == STD_ON)
	    Mcu_Init(NULL_PTR);
	#elif (MCU_PRECOMPILE_SUPPORT == STD_OFF)
	    Mcu_Init(&Mcu_Config_BOARD_InitPeripherals);
	#endif /* (MCU_PRECOMPILE_SUPPORT == STD_ON) */

	    /* Initialize the clock tree and apply PLL as system clock */
	    Mcu_InitClock(McuClockSettingConfig_0);
	#if (MCU_NO_PLL == STD_OFF)
	    while ( MCU_PLL_LOCKED != Mcu_GetPllStatus() )
	    {
	        /* Busy wait until the System PLL is locked */
	    }

	    Mcu_DistributePllClock();
	#endif
	    Mcu_SetMode(McuModeSettingConf_0);

	    /* Initialize all pins using the Port driver */
	    Port_Init(NULL_PTR);


    for(;;)
    {
        Switch1_Level = Dio_ReadChannel(DioConf_DioChannel_Switch1);
        if(Switch1_Level == 1)
        {
            Dio_WriteChannel(DioConf_DioChannel_BLUE_LED, STD_HIGH);
        }else
        {
        	Dio_WriteChannel(DioConf_DioChannel_BLUE_LED, STD_LOW);
        }

        Switch2_Level = Dio_ReadChannel(DioConf_DioChannel_Switch2);
        if(Switch2_Level == 1)
        {
           Dio_WriteChannel(DioConf_DioChannel_GREEN_LED, STD_HIGH);
        }else
        {
           Dio_WriteChannel(DioConf_DioChannel_GREEN_LED, STD_LOW);
        }




    }
    return exit_code;
}

/** @} */
