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
#include "Dio.h"
/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
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
volatile boolean notif_triggered = FALSE;
volatile int exit_code = 0;
volatile uint16 data;

void AdcConversionCompleteNotif(const uint8 ControlChanIdx)
{
	notif_triggered = TRUE;
	data = Adc_Ip_GetConvData(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE, ControlChanIdx);
	/* Checks the measured ADC data conversion */
	while (ADC_TOLERANCE(data, ADC_BANDGAP) > RESULT_TOLERANCE);
}

//Custom function for making a delay function(This is not optimized way)
//Just a temporary solution
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


int main(void)
{
	Clock_Ip_StatusType clockStatus;
	Adc_Ip_StatusType adcStatus;

	boolean Gb_ADC_Conversion_Status;
	uint32_t Gb_ADC_Value;

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

	/**** Part 1: Start ADC software trigger conversions ****/
	Adc_Ip_Init(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE, &AdcHwUnit_0_BOARD_INITPERIPHERALS);
	adcStatus = Adc_Ip_DoCalibration(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE);
	while (adcStatus != ADC_IP_STATUS_SUCCESS)
	{
		adcStatus = Adc_Ip_DoCalibration(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE);
	}

	/* Start a software trigger conversion */
   Adc_Ip_StartConversion(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE, ADC_IP_INPUTCHAN_EXT12, FALSE);

	for(;;)
	{
		Dio_WriteChannel(DioConf_DioChannel_Green_LED, STD_LOW);
		TestDelay((Adc_Ip_GetConvData(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE,0)*940));
		Dio_WriteChannel(DioConf_DioChannel_Green_LED, STD_HIGH);
		TestDelay((Adc_Ip_GetConvData(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE,0)*940));
	}

}

/* END main */
/*!
** @}
*/
