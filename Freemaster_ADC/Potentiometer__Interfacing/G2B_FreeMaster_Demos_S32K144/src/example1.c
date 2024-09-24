/*
 * Gettobyte Technologies Pvt Ltd 2024
 * brief@: ADC Functional Demo code via software trigger using Autosar MCAL Layer RTD
 */

/* Including necessary configuration files. */
#include "Mcal.h"
#include "Mcl.h"
#include "Platform.h"
#include "Clock_Ip.h"
#include "Adc.h"
#include "Port.h"
#include "Uart.h"
#include "Mcu.h"
#include "Lpuart_Uart_Ip_Irq.h"
#include "Platform.h"
#include "freemaster.h"
#include "Pwm.h"
#include "IntCtrl_Ip.h"

#define channel0 0
#define channel1 1
#define channel2 2
#define instance0 0
extern void Adc_0_Isr(void);

void FTM_0_CH_0_CH_1_ISR(void);
void FTM_0_OVF_ISR(void);
Pwm_OutputStateType pwm_signal;
void pwm_callback(void)
{

	// returns the output state of PWM signal whether high or low
	pwm_signal = Pwm_GetOutputState(channel0);

	// returns the duty cycle of PWM signal
	Pwm_GetChannelState(channel0);
}
/* User includes */

/*!
  \brief The main function for the project.
  \details The startup initialization sequence is the following:
 * - startup asm routine
 * - main()
*/
#define NUM_RESULTS 2
Adc_ValueGroupType    ResultBuffer[NUM_RESULTS];
Adc_ValueGroupType    Result[NUM_RESULTS];


/* Variables used for processing FreeMASATER application commands */
static FMSTR_APPCMD_CODE cmd;


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
void IoHwAb_AdcNotification_0( void )
{
	Std_ReturnType StdReturn ;
    StdReturn = Adc_ReadGroup(AdcGroup_0_WI_OS_PDB_B2B, Result);

}

int main(void)
{

	 Clock_Ip_StatusType clockStatus;

	    clockStatus = Clock_Ip_Init(&Mcu_aClockConfigPB[0]);
	    while (clockStatus != CLOCK_IP_SUCCESS)
	    {
	        clockStatus = Clock_Ip_Init(&Mcu_aClockConfigPB[0]);
	    }
	    /* Busy wait until the System PLL is locked */
	    while (CLOCK_IP_PLL_LOCKED != Clock_Ip_GetPllStatus());
	    Clock_Ip_DistributePll();

		/*-------------------Clock_Configuration via MCU Peripheral---------------*/

		Std_ReturnType Mcu_Status;
		Mcu_Init(&Mcu_Config_BOARD_InitPeripherals);

		Mcu_Status = Mcu_InitClock(McuClockSettingConfig_0);

		#if (MCU_NO_PLL == STD_OFF)

			while ( MCU_PLL_LOCKED != Mcu_GetPllStatus() )
			{
				/* Busy wait until the System PLL is locked */
			}

			Mcu_DistributePllClock();
		#endif

		Mcu_SetMode(McuModeSettingConf_0);

		Mcu_Init(&Mcu_Config_BOARD_InitPeripherals);

	    /* Initialize all pins using the Port driver */
	    Port_Init(NULL_PTR);

	    /* Initialize Platform Driver */
	    Platform_Init(NULL_PTR);
	    Platform_InstallIrqHandler(ADC0_IRQn, Adc_0_Isr, NULL_PTR);
	    Platform_InstallIrqHandler(LPUART1_RxTx_IRQn, FMSTR_Isr, NULL_PTR);
	    Platform_SetIrq(ADC0_IRQn, TRUE);


	    /* Install and enable interrupt handlers */
	    IntCtrl_Ip_InstallHandler(FTM0_Ch0_Ch1_IRQn, FTM_0_CH_0_CH_1_ISR, NULL_PTR);
	    IntCtrl_Ip_EnableIrq(FTM0_Ch0_Ch1_IRQn);

	    /* Install and enable interrupt handlers */
	    IntCtrl_Ip_InstallHandler(FTM0_Ovf_Reload_IRQn, FTM_0_OVF_ISR, NULL_PTR);
	    IntCtrl_Ip_EnableIrq(FTM0_Ovf_Reload_IRQn);


		/*------------------------------------------------------------------------*/
#ifdef TRGMUX_IP_IS_AVAILABLE
		Mcl_Init(NULL_PTR);
#endif
		/*-------------------------------UART Configuration-----------------------*/

			Uart_Init(NULL_PTR);


		/*------------------------------------------------------------------------*/

    Adc_CalibrationStatusType CalibStatus;
    Adc_Init(&Adc_Config_BOARD_INITPERIPHERALS);

    /*******************************************************************************************************/
        Adc_Calibrate(AdcHwUnit_0, &CalibStatus);
        while(CalibStatus.Adc_UnitSelfTestStatus == E_NOT_OK)
        {
        	Adc_Calibrate(AdcHwUnit_0, &CalibStatus);
        }

        /*Set the memory buffer to store conversions*/
        Adc_SetupResultBuffer( AdcGroup_0_WI_OS_PDB_B2B, ResultBuffer );

        Adc_EnableGroupNotification(AdcGroup_0_WI_OS_PDB_B2B);



	    Pwm_Init(&Pwm_Config_BOARD_InitPeripherals);
//
//
//	   	    //When we want to use the Interrupts, so that call back function can be hit on every time PWM signal edge changes
	   	   Pwm_EnableNotification(channel0, PWM_BOTH_EDGES);
//
//


        TestDelay(2000000);

	FMSTR_Init();


    for(;;)
    {

        Adc_EnableGroupNotification(AdcGroup_0_WI_OS_PDB_B2B);

    	Adc_StartGroupConversion(AdcGroup_0_WI_OS_PDB_B2B);

        /*wait until the conversion is done*/
        while( Adc_GetGroupStatus( AdcGroup_0_WI_OS_PDB_B2B ) == ADC_BUSY );

    	TestDelay(200000);

//        /*Duty cycle update*/
//	    Pwm_SetDutyCycle(channel0, 10000);
//	    TestDelay(700000);

//	    Pwm_SetPeriodAndDuty(channel0,40000,6384);
//	    TestDelay(700000);


        /* Process FreeMASTER application commands */
        cmd = FMSTR_GetAppCmd();

    	FMSTR_Poll();

     //   Adc_StopGroupConversion(AdcGroup_0);

    }
}

/** @} */
