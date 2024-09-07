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
#include "Trgmux_Ip.h"

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
Adc_ValueGroupType    *LastBuffer[8];
Adc_ValueGroupType    ResultBuffer_2[8];



uint8 AdcFlag = FALSE;

Adc_StreamNumSampleType x =0;
void IoHwAb_AdcNotification_0( void )
{
    /*Read ready convertion*/
    AdcFlag = TRUE;

//   StdReturn = Adc_ReadGroup(AdcGroup_6_Streaming_Mode, Result);
   x = Adc_GetStreamLastPointer(AdcGroup_6_Streaming_Mode, LastBuffer);
	//Adc_ReadRawData(AdcHwUnit_0, adc_Channel, 2, Result);

}

void IoHwAb_AdcNotification_6( void )
{
    /*Read ready convertion*/
    AdcFlag = TRUE;

//   StdReturn = Adc_ReadGroup(AdcGroup_6_Streaming_Mode, Result);
   x = Adc_GetStreamLastPointer(AdcGroup_6_Streaming_Mode, LastBuffer);
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

    Trgmux_Ip_Init(&Trgmux_Ip_xTrgmuxInitPB_BOARD_INITPERIPHERALS);
    /*******************************************************************************************************/
        Adc_Calibrate(AdcHwUnit_0, &CalibStatus);
        if(CalibStatus.Adc_UnitSelfTestStatus == E_NOT_OK)
        {
            bStatus = FALSE;
        }

        /*Set the memory buffer to store convertions*/
        Adc_SetupResultBuffer( AdcGroup_6_Streaming_Mode, ResultBuffer_2 );

        Adc_EnableGroupNotification(AdcGroup_6_Streaming_Mode);


    for(;;)
    {

        Adc_EnableGroupNotification(AdcGroup_6_Streaming_Mode);

        // This API for Hardware Trigger
        Adc_EnableHardwareTrigger(AdcGroup_6_Streaming_Mode);

        // This API for Software trigger
    	//Adc_StartGroupConversion(AdcGroup_5_HW_WI_OS_PDB_B2B);

        /*wait until the convertion is done*/
    //   while( Adc_GetGroupStatus( AdcGroup_5_HW_WI_OS_PDB_B2B ) == ADC_BUSY );

    	TestDelay(200000);

    	Adc_DisableHardwareTrigger(AdcGroup_6_Streaming_Mode);
     //   Adc_StopGroupConversion(AdcGroup_0);

    }
}

/** @} */
