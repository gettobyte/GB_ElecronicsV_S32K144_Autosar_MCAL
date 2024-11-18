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
#include "IntCtrl_Ip.h"
#include "Port.h"
#include "Pwm.h"
#include "Icu.h"
volatile int exit_code = 0;
/* User includes */

void FTM_0_CH_0_CH_1_ISR(void);
void FTM_0_OVF_ISR(void);
void FTM_1_CH_0_CH_1_ISR(void);
void FTM_1_OVF_ISR(void);

#define channel0 0
#define instance0 0
#define icu_channel0 0

Icu_ValueType HighTime ;
Icu_ValueType Pulse_width;

Icu_DutyCycleType Signal_parameters;

Pwm_OutputStateType pwm_signal_state;
uint16 pwm_signal_duty;
void switch_detect_callback(void)
{

}
void pwm_callback(void)
{
	pwm_signal_state = Pwm_GetOutputState(channel0);
}


void input_capture_callback(void)
{
	Icu_GetDutyCycleValues(icu_channel0, &Signal_parameters );
}


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
uint8_t IntrPriority;

uint16_t pwm_duty_cycle(uint8_t duty_cycle_percent)
{

	uint16_t period = ((32768 * duty_cycle_percent)/100);

	return (period);

}


uint16_t zyz;
int main(void)
{
	 Clock_Ip_StatusType clockStatus;

			clockStatus = Clock_Ip_Init(&Mcu_aClockConfigPB_BOARD_InitPeripherals[0]);
			while (clockStatus != CLOCK_IP_SUCCESS)
			{
				clockStatus = Clock_Ip_Init(&Mcu_aClockConfigPB_BOARD_InitPeripherals[0]);
			}
			/* Busy wait until the System PLL is locked */
			while (CLOCK_IP_PLL_LOCKED != Clock_Ip_GetPllStatus());
			Clock_Ip_DistributePll();

			/* Initialize all pins using the Port driver */
			Port_Init(NULL_PTR);

		    /* Install and enable interrupt handlers */
		    IntCtrl_Ip_InstallHandler(FTM0_Ch0_Ch1_IRQn, FTM_0_CH_0_CH_1_ISR, NULL_PTR);
		    IntCtrl_Ip_EnableIrq(FTM0_Ch0_Ch1_IRQn);

		    /* Install and enable interrupt handlers */
		    IntCtrl_Ip_InstallHandler(FTM0_Ovf_Reload_IRQn, FTM_0_OVF_ISR, NULL_PTR);
		    IntCtrl_Ip_EnableIrq(FTM0_Ovf_Reload_IRQn);

		    IntCtrl_Ip_InstallHandler(FTM1_Ch0_Ch1_IRQn, FTM_1_CH_0_CH_1_ISR, NULL_PTR);
		    IntCtrl_Ip_EnableIrq(FTM1_Ch0_Ch1_IRQn);

		    IntCtrl_Ip_InstallHandler(FTM1_Ovf_Reload_IRQn, FTM_1_OVF_ISR, NULL_PTR);
		    IntCtrl_Ip_EnableIrq(FTM1_Ovf_Reload_IRQn);

		    Icu_Init(&Icu_Config_BOARD_InitPeripherals);

		    Icu_StartSignalMeasurement(icu_channel0);
		    Icu_EnableNotification(icu_channel0);



		    Pwm_Init(&Pwm_Config_BOARD_InitPeripherals);

		    //When we want to use the Interrupts, so that call back function can be hit on every time PWM signal edge changes
		    Pwm_EnableNotification(channel0, PWM_BOTH_EDGES);

		    /*Duty cycle update*/
		    Pwm_SetDutyCycle(channel0,pwm_duty_cycle(56));
		    TestDelay(7000000);


		  //  show by changing frequnecy to : 5000, 25000, 15000, 50000
		    Pwm_SetPeriodAndDuty(channel0,50000,pwm_duty_cycle(50));
		    TestDelay(700000);





    for(;;)
    {

    }
    return exit_code;
}

/** @} */
