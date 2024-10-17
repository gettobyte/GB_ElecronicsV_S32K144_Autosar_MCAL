/**
*   @file example1.c
*
*   Edge Aligned Demo code, with FTM input clock frequency of fixed clock of 8Mhz and
*   prescaler to FTM instance 0 are divided by 1, meaning FTM instance 0 clock frequency for FTM0 is 8Mhz and period is 0.125us
*
*
*   FTM period is calculated by (FTM Instance Period) * (MOD-CNTIN) value.
*   FTM frequency is = 1/FTM period
*
*   FTM Duty cycle is = (CnV/MOD)*100
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

void FTM_0_CH_0_CH_1_ISR(void);
void FTM_0_OVF_ISR(void);
#define channel0 0
#define channel1 1
#define channel2 2
#define instance0 0

Pwm_OutputStateType pwm_signal_state;
uint16 pwm_signal_duty;
void pwm_callback(void)
{

	// returns the output state of PWM signal whether high or low
	pwm_signal_state = Pwm_GetOutputState(channel0);

}
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
uint8_t IntrPriority;

uint16_t pwm_duty_cycle(uint8_t duty_cycle_percent)
{

	uint16_t period = ((32768 * duty_cycle_percent)/100);

	return (period);

}

uint16_t zyz;
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

		//IntCtrl_Ip_Init(&IntCtrlConfig_0);

	    /* Install and enable interrupt handlers */
	    IntCtrl_Ip_InstallHandler(FTM0_Ch0_Ch1_IRQn, FTM_0_CH_0_CH_1_ISR, NULL_PTR);
	    IntCtrl_Ip_EnableIrq(FTM0_Ch0_Ch1_IRQn);

	    /* Install and enable interrupt handlers */
	    IntCtrl_Ip_InstallHandler(FTM0_Ovf_Reload_IRQn, FTM_0_OVF_ISR, NULL_PTR);
	    IntCtrl_Ip_EnableIrq(FTM0_Ovf_Reload_IRQn);

	    IntrPriority = IntCtrl_Ip_GetPriority(FTM0_Ch0_Ch1_IRQn);
	    IntrPriority = IntCtrl_Ip_GetPriority(FTM0_Ovf_Reload_IRQn);

	    Pwm_Init(&Pwm_Config_BOARD_InitPeripherals);


	    //When we want to use the Interrupts, so that call back function can be hit on every time PWM signal edge changes
	    Pwm_EnableNotification(channel0, PWM_BOTH_EDGES);

	    //zyz =  pwm_duty_cycle(56);
        /*Duty cycle update*/
	    Pwm_SetDutyCycle(channel0,pwm_duty_cycle(56));
	    TestDelay(700000);

	    Pwm_SetDutyCycle(channel0, pwm_duty_cycle(73));
	    TestDelay(700000);

	    zyz =  pwm_duty_cycle(56);
	    /*Duty cycle update*/
		Pwm_SetDutyCycle(channel1, 19000);
		TestDelay(700000);

	    /* duty cycle and frequency update*/
	    Pwm_SetPeriodAndDuty(channel0,40000,pwm_duty_cycle(50));
	    TestDelay(700000);

	    Pwm_SetPeriodAndDuty(channel1,23000,21384);
	    TestDelay(700000);


	    /*  to off the pwm signals*/
	    Pwm_SetOutputToIdle(channel0);
	    TestDelay(700000);

		/*  to off the pwm signals*/
		Pwm_SetOutputToIdle(channel1);
		TestDelay(700000);





	    /****when multiple channels are configured in edge aligned and show the feature of sync update*******/
	   // Pwm_SetDutyCycle_NoUpdate(channel0, 13000);

	    Pwm_SetPeriodAndDuty_NoUpdate(channel0,30000,pwm_duty_cycle(66));

	    Pwm_SetPeriodAndDuty_NoUpdate(channel1,30000,6384);

	    Pwm_SyncUpdate(instance0);


    for(;;)
    {


    }
    return exit_code;
}

/** @} */