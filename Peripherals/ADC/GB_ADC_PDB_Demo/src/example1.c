/*
 * Gettobyte Technologies Pvt Ltd 2024
 * brief@: ADC triggering using PDB(which is software triggered) on single channel control *
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

/*==================================================================================================
*                                      EXTERN DECLARATIONS
==================================================================================================*/
extern void Adc_0_Isr(void);

extern void Pdb_0_Isr(void);
/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/
volatile uint32 data;
void AdcConversionCompleteNotif(const uint8 ControlChanIdx)
{
    data = Adc_Ip_GetConvData(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE, ControlChanIdx);
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

    /* Install and enable interrupt handlers */
    IntCtrl_Ip_InstallHandler(PDB0_IRQn, Pdb_0_Isr, NULL_PTR);
    IntCtrl_Ip_EnableIrq(PDB0_IRQn);


	/* Initialize all pins using the Port driver */
	Port_Init(NULL_PTR);

//	ADC initialization
	Adc_Ip_Init(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE, &AdcHwUnit_0_BOARD_INITPERIPHERALS);
	adcStatus = Adc_Ip_DoCalibration(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE);

	while (adcStatus != ADC_IP_STATUS_SUCCESS)
	{
		adcStatus = Adc_Ip_DoCalibration(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE);
	}

//	PDB initialization
	Pdb_Adc_Ip_Init(PDBHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE, &PdbHwUnit_0_BOARD_INITPERIPHERALS);

//	Starting a hardware trigger by software trigger
	Pdb_Adc_Ip_SwTrigger(PDBHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE);

	data = Adc_Ip_GetConvData(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE, 4);

	for(;;)
	{
//	    Stop and Check Data Result Register "RE' for ADC value as well as value of "i"
//			data = Adc_Ip_GetConvData(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE, 4);
//
			Pdb_Adc_Ip_SwTrigger(PDBHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE);
			TestDelay(20000000);

			data = Adc_Ip_GetConvData(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE, 4);


			Pdb_Adc_Ip_SwTrigger(PDBHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE);
			TestDelay(20000000);

			data = Adc_Ip_GetConvData(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE, 4);


	}

}
