/*
 * example2.c
 *
 *  Created on: 11-Sep-2024
 *      Author: gettobyte_kunal
 */


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
#include "Ftm_Pwm_Ip.h"
#include "Ftm_Pwm_Ip_Irq.h"
#include "Clock_Ip.h"
#include "Port.h"

volatile int exit_code = 0;
/* User includes */
extern void FTM_0_CH_2_CH_3_ISR();
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

void PwmFtmChInterruptCallback(void)
{

}

#define channel2 2
int main(void)
{
    /* Write your code here */

	Clock_Ip_StatusType clockStatus;

	clockStatus = Clock_Ip_Init(&Clock_Ip_aClockConfig[0]);
	while (clockStatus != CLOCK_IP_SUCCESS)
	{
		clockStatus = Clock_Ip_Init(&Clock_Ip_aClockConfig[0]);
	}

	/* Initialize all pins using the Port driver */
	Port_Init(NULL_PTR);

    /* Install and enable interrupt handlers */
    IntCtrl_Ip_InstallHandler(FTM0_Ch2_Ch3_IRQn, FTM_0_CH_2_CH_3_ISR, NULL_PTR);
    IntCtrl_Ip_EnableIrq(FTM0_Ch2_Ch3_IRQn);

	/* Initialize PWM driver */
	Ftm_Pwm_Ip_Init(FTM_INSTANCE_0, &Ftm_Pwm_Ip_BOARD_InitPeripherals_UserCfg0);

	Ftm_Pwm_Ip_EnableNotification(FTM_INSTANCE_0, channel2 ,FTM_PWM_IP_BOTH_EDGES );


	for(;;)
    {

    }
    return exit_code;
}
