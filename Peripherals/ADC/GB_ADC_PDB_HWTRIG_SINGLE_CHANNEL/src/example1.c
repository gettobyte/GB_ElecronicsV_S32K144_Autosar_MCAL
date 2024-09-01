/*
 * Gettobyte Technologies Pvt Ltd 2024
 * brief@: Doing ADC conversion by hardware trigger through button press using PDB and TRGMUX
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
#include "Pdb_Adc_Ip.h"
#include "Trgmux_Ip.h"
/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

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
    data = Adc_Ip_GetConvData(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE, ControlChanIdx);
    /* Checks the measured ADC data conversion */
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

    /* Install and enable interrupt handlers */
    IntCtrl_Ip_InstallHandler(ADC0_IRQn, Adc_0_Isr, NULL_PTR);
    IntCtrl_Ip_EnableIrq(ADC0_IRQn);


	/* Initialize all pins using the Port driver */
	Port_Init(NULL_PTR);

    //TRGMUX is intialised with GUI configured parameters
	trgmuxStatus = Trgmux_Ip_Init(&Trgmux_Ip_xTrgmuxInitPB);

    //ADC initialization
	Adc_Ip_Init(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE, &AdcHwUnit_0_BOARD_INITPERIPHERALS);
	adcStatus = Adc_Ip_DoCalibration(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE);

	while (adcStatus != ADC_IP_STATUS_SUCCESS)
	{
		adcStatus = Adc_Ip_DoCalibration(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE);
	}

    //PDB initialization
	Pdb_Adc_Ip_Init(PDBHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE, &PdbHwUnit_0_BOARD_INITPERIPHERALS);

	Pdb_Adc_Ip_ConfigAdcPretriggers(PDBHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE, PdbHwUnit_0_BOARD_INITPERIPHERALS.ChanConfigs->ChnIdx, &PdbHwUnit_0_BOARD_INITPERIPHERALS.ChanConfigs->PretriggersConfig);
		for(;;)
		{

	//	        Stop and Check Data Result Register "RE' for ADC value as well as value of "i"
				data = Adc_Ip_GetConvData(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE, 4);

				TestDelay(20000000);    // delay has to be increased in one shot mode to trigger both the channels. take the account of prescaler clock values

//				data = Adc_Ip_GetConvData(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE, 4);
//
//
//				TestDelay(20000000);



		}

}
