/*
 * Gettobyte Technologies Pvt Ltd 2024
 * brief@: ADC Functional Demo code via software trigger using Autosar MCAL Layer RTD
 */

/* Including necessary configuration files. */
#include "Mcal.h"
#include "Clock_Ip.h"
#include "IntCtrl_Ip.h"
#include "Adc.h"
#include "Port.h"

extern void Adc_0_Isr(void);

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
Adc_ValueGroupType    Resultx[NUM_RESULTS];

Adc_ChannelType adc_Channel[2] = { ADC_IP_INPUTCHAN_EXT12, ADC_IP_INPUTCHAN_EXT1};

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

Std_ReturnType StdReturn = E_NOT_OK;

uint8 AdcFlag = FALSE;
void IoHwAb_AdcNotification_0( void )
{
    /*Read ready convertion*/
    AdcFlag = TRUE;

    StdReturn = Adc_ReadGroup(AdcGroup_0, Result);
	//Adc_ReadRawData(AdcHwUnit_0, adc_Channel, 2, Result);

}


Adc_ValueGroupType    AdcReadGroupBuffer[2];
Adc_ValueGroupType    ResultBuffer[2];

int main(void)
{

	 Clock_Ip_StatusType clockStatus;
	 Adc_Ip_StatusType adcStatus;
	 boolean Gb_ADC_Conversion_Status;
	 boolean bLocalStatus = TRUE;
	 volatile boolean bStatus = TRUE;

	    /* Write your code here */
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

	    IntCtrl_Ip_InstallHandler(ADC0_IRQn, Adc_0_Isr, NULL_PTR);
	    IntCtrl_Ip_EnableIrq(ADC0_IRQn);


    Adc_CalibrationStatusType CalibStatus;
    Adc_Init(&Adc_Config_BOARD_INITPERIPHERALS);

    /*******************************************************************************************************/
        Adc_Calibrate(AdcHwUnit_0, &CalibStatus);
        if(CalibStatus.Adc_UnitSelfTestStatus == E_NOT_OK)
        {
            bStatus = FALSE;
        }

        /*Set the memory buffer to store convertions*/
        Adc_SetupResultBuffer( AdcGroup_1_WNT, ResultBuffer );

        Adc_EnableGroupNotification(AdcGroup_1_WNT);


    for(;;)
    {

    	/*
    	 * This is without interrupt example, so in this no ISR would be invoked meaning no ISR callback would be called.
    	 * Now first doubt is that whether. group notification callback would only be called by ISR callback?
    	 *
    	 * Another is in case of no interrupts, we have to use ADC ReadGRoup API() directly in application so as per the function definations of
    	 * ADC ReadGroup API(), when no interrupt group is being invoked then this API itself checks the ADC COCO bits for ADC conversion. as per
    	 * the Adc_ReadGroup() state machine. But though COCO bit is set to 1 but it still COCO bits are read as 0. Why???????
    	 */



        Adc_EnableGroupNotification(AdcGroup_1_WNT);

    	Adc_StartGroupConversion(AdcGroup_1_WNT);

        /*wait until the convertion is done*/

    	StdReturn = Adc_ReadGroup(AdcGroup_1_WNT, Result);

        while( Adc_GetGroupStatus( AdcGroup_1_WNT ) == ADC_BUSY );

    	TestDelay(200000);

        Adc_StopGroupConversion(AdcGroup_0);

    }
}

/** @} */
