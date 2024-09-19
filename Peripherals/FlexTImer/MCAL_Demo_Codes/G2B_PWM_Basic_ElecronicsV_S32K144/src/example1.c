/**
*   @file example1.c
*
*   Edge Aligned Demo code, with FTM input clock frequency of fixed clock of 8Mhz and
*   prescaler to FTM are divided by 1, meaning FTM clock frequency for FTM0 is 8Mhz and period is 0.125us
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
volatile int exit_code = 0;
/* User includes */

void FTM_0_CH_0_CH_1_ISR();

void pwm_callback(void)
{

}
/*!
  \brief The main function for the project.
  \details The startup initialization sequence is the following:
 * - startup asm routine
 * - main()
*/

#define channel0 0
int main(void)
{
    /* Write your code here */

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

	    Pwm_Init(&Pwm_Config_BOARD_InitPeripherals);


	    //When when to use the Interrupts
	    Pwm_EnableNotification(channel0, PWM_FALLING_EDGE);


	    Pwm_SetPeriodAndDuty(channel0,40000,16384);

    for(;;)
    {


    }
    return exit_code;
}

/** @} */
