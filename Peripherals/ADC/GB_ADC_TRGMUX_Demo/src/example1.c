/*
 * Gettobyte Technologies Pvt Ltd 2024
 * brief@: (ADC triggering using TRGMUX(which is hardware triggered by PTB5) on single channel control)
 *
 */



#ifdef __cplusplus
extern "C" {
#endif


/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Clock_Ip.h"
#include "IntCtrl_Ip.h"
#include "Adc_Ip.h"
#include "Port.h"
#include "Trgmux_Ip.h"
/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
//Not used in this demo
#define ADC_CONTROL_CH         (0U)
#define ADC_BANDGAP            (819U) /* Vbandgap ~ 1.15V at 5.0V reference */
#define ADC_TOLERANCE(x,y)     ((x > y) ? (x - y) : (y - x))
#define RESULT_TOLERANCE       (150U)

/*==================================================================================================
*                                      EXTERN DECLARATIONS
==================================================================================================*/
extern void Adc_0_Isr(void);

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/
volatile uint32 data;
volatile boolean notif_triggered = FALSE;

void AdcConversionCompleteNotif(const uint8 ControlChanIdx)
{
    notif_triggered = TRUE;
    data = Adc_Ip_GetConvData(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE, ControlChanIdx);
    /* Checks the measured ADC data conversion */
//  Code might get stuck on below hold function but you can still read ADC values providing pulse on PTB5 and seeing RA
//	Data Register
    while (ADC_TOLERANCE(data, ADC_BANDGAP) > RESULT_TOLERANCE);
}


int main(void)
{
	Clock_Ip_StatusType clockStatus;
	Adc_Ip_StatusType adcStatus;
	Trgmux_Ip_StatusType trgmuxStatus;

//    Clock Configuration
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

//	TRGMUX is intialised with GUI configured parameters
	trgmuxStatus = Trgmux_Ip_Init(&Trgmux_Ip_xTrgmuxInitPB);

//	ADC initialization
	Adc_Ip_Init(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE, &AdcHwUnit_0_BOARD_INITPERIPHERALS);

//	This specific function configures the Software Pretrigger linked to it's specified channel
	Adc_Ip_SetSoftwarePretrigger(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE, ADC_IP_SOFTWARE_PRETRIGGER_0);

//	ADC calibration
	adcStatus = Adc_Ip_DoCalibration(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE);
	while (adcStatus != ADC_IP_STATUS_SUCCESS)
	{
		adcStatus = Adc_Ip_DoCalibration(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE);
	}

	for(;;)
	{
//	    Stop and Check Data Result Register "RE' for ADC value
			data = Adc_Ip_GetConvData(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE, 4);
	}

}
