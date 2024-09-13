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
extern void FTM_0_CH_0_CH_1_ISR();
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
#define channel0 0
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
    IntCtrl_Ip_InstallHandler(FTM0_Ch0_Ch1_IRQn, FTM_0_CH_0_CH_1_ISR, NULL_PTR);
    IntCtrl_Ip_EnableIrq(FTM0_Ch0_Ch1_IRQn);

	/* Initialize PWM driver */
	Ftm_Pwm_Ip_Init(FTM_INSTANCE_0, &Ftm_Pwm_Ip_BOARD_InitPeripherals_UserCfg0);

	Ftm_Pwm_Ip_EnableNotification(FTM_INSTANCE_0, channel0 ,FTM_PWM_IP_BOTH_EDGES );


	for(;;)
    {
        if(exit_code != 0)
        {
            break;
        }
    }
    return exit_code;
}
