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
#include "Ftm_Icu_Ip.h"
#include "Ftm_Pwm_Ip_Irq.h"
#include "Clock_Ip.h"
#include "Port.h"

volatile int exit_code = 0;
/* User includes */
extern void FTM_0_CH_0_CH_1_ISR(void);
extern void FTM_1_CH_0_CH_1_ISR(void);
extern void FTM_1_OVF_ISR(void);
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
#define channel1 1

#define icu_instance 1
#define icu_channel 0


Ftm_Icu_Ip_DutyCycleType x;
uint16 period;
uint16 activeperiod;

void PwmFtmChInterruptCallback(void)
{



}

void input_capture_callback(void)
{

	//Ftm_Icu_Ip_StartSignalMeasurement(icu_instance, icu_channel);

//	Ftm_Icu_Ip_GetDutyCycleValues(icu_instance, icu_channel, &x);

	Ftm_Icu_Ip_GetPWandPeriod(icu_instance, icu_channel, &activeperiod, &period );
}


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

    IntCtrl_Ip_InstallHandler(FTM0_Ovf_Reload_IRQn, FTM_0_OVF_ISR, NULL_PTR);
    IntCtrl_Ip_EnableIrq(FTM0_Ovf_Reload_IRQn);

    IntCtrl_Ip_InstallHandler(FTM1_Ch0_Ch1_IRQn, FTM_1_CH_0_CH_1_ISR, NULL_PTR);
    IntCtrl_Ip_EnableIrq(FTM1_Ch0_Ch1_IRQn);

    IntCtrl_Ip_InstallHandler(FTM1_Ovf_Reload_IRQn, FTM_1_OVF_ISR, NULL_PTR);
    IntCtrl_Ip_EnableIrq(FTM1_Ovf_Reload_IRQn);



    Ftm_Icu_Ip_Init(icu_instance, &Ftm_Icu_Ip_1_Config_PB_BOARD_InitPeripherals);

	Ftm_Icu_Ip_StartSignalMeasurement(icu_instance, icu_channel);

	Ftm_Icu_Ip_EnableInterrupt(icu_instance, icu_channel);
	Ftm_Icu_Ip_EnableNotification(icu_instance, icu_channel);


    /* Initialize PWM driver */
	Ftm_Pwm_Ip_Init(FTM_INSTANCE_0, &Ftm_Pwm_Ip_BOARD_InitPeripherals_UserCfg0);

	Ftm_Pwm_Ip_UpdatePwmDutyCycleChannel(FTM_INSTANCE_0, channel0, 35000, TRUE);

	Ftm_Pwm_Ip_UpdatePwmPeriodAndDuty(FTM_INSTANCE_0, channel0, 45000, 32000, TRUE);


	Ftm_Pwm_Ip_EnableNotification(FTM_INSTANCE_0, channel0 ,FTM_PWM_IP_BOTH_EDGES );


//	Ftm_Icu_Ip_StartSignalMeasurement(icu_instance, icu_channel);
//	Ftm_Icu_Ip_EnableInterrupt(icu_instance, icu_channel);
//	Ftm_Icu_Ip_EnableEdgeCount();
//	Ftm_Icu_Ip_EnableEdgeDetection();
	//Ftm_Icu_Ip_EnableNotification(icu_instance, icu_channel);
//
//	Ftm_Icu_Ip_GetDutyCycleValues(icu_instance, icu_channel, &x);
//	Ftm_Icu_Ip_GetPWandPeriod();
//	Ftm_Icu_Ip_StopSignalMeasurement();
//
//
//	Ftm_Pwm_Ip_UpdatePwmDutyCycleChannel(FTM_INSTANCE_0, channel0, 35000, TRUE);

//	for(;;)
    {

//		TestDelay(200000);
//
//		Ftm_Pwm_Ip_UpdatePwmDutyCycleChannel(FTM_INSTANCE_0, channel0, 35000, TRUE);

//		TestDelay(200000);
//
//		Ftm_Pwm_Ip_UpdatePwmPeriodAndDuty(FTM_INSTANCE_0, channel0, 35000, 12000, TRUE );
//
//		TestDelay(200000);
//		Ftm_Pwm_Ip_UpdatePwmPeriodAndDuty(FTM_INSTANCE_0, channel1, 45000, 32000, TRUE );
//
		Ftm_Icu_Ip_GetDutyCycleValues(icu_instance, icu_channel, &x);

		TestDelay(200000);




    }
    return exit_code;
}