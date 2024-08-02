/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : S32K14X
*   Dependencies         : none
*
*   Autosar Version      : 4.4.0
*   Autosar Revision     : ASR_REL_4_4_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 1.0.0
*   Build Version        : S32K1_RTD_1_0_0_D2108_ASR_REL_4_4_REV_0000_20210810
*
*   (c) Copyright 2020-2021 NXP Semiconductors
*   All Rights Reserved.
*
*   NXP Confidential. This software is owned or controlled by NXP and may only be
*   used strictly in accordance with the applicable license terms. By expressly
*   accepting such terms or by downloading, installing, activating and/or otherwise
*   using the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms. If you do not agree to be
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
==================================================================================================*/

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

Adc_ChannelType adc_Channel[2] = { ADC_IP_INPUTCHAN_EXT12, ADC_IP_INPUTCHAN_EXT1};

int main(void)
{
	 Std_ReturnType StdReturn = E_NOT_OK;

	 Clock_Ip_StatusType clockStatus;
	    Adc_Ip_StatusType adcStatus;

	    boolean Gb_ADC_Conversion_Status;
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
    boolean bLocalStatus = TRUE;
    volatile boolean bStatus = TRUE;

#if (ADC_PRECOMPILE_SUPPORT == STD_ON)
    Adc_Init(NULL_PTR);
#else
    Adc_Init(&Adc_Config_BOARD_INITPERIPHERALS);
#endif /* ADC_PRECOMPILE_SUPPORT == STD_ON */

    /*******************************************************************************************************/
        Adc_Calibrate(AdcHwUnit_0, &CalibStatus);
        if(CalibStatus.Adc_UnitSelfTestStatus == E_NOT_OK)
        {
            bStatus = FALSE;
        }


      //  Adc_SetupResultBuffer(AdcGroup_0, ResultBuffer);
//        Adc_StartGroupConversion(AdcGroup_0);
//
//
//        StdReturn = Adc_ReadGroup(AdcGroup_0, Result);
//
//        Adc_ReadRawData(AdcHwUnit_0, adc_Channel, 1, Result);

    for(;;)
    {
    //	   Adc_SetupResultBuffer(AdcGroup_0, ResultBuffer);

    	Adc_StartGroupConversion(AdcGroup_0);

    	       // Adc_Ipw_CheckValidConversion //
//    	        Adc_ReadRawData
    	        // Adc_SetChannel()

    	     Adc_ReadRawData(AdcHwUnit_0, adc_Channel, 2, Result);

//    	     Adc_ReadRawData(AdcHwUnit_0, adc_Channel, 1, Result);


    	        // Adc_SetChannel

//    	        StdReturn = Adc_ReadGroup(AdcGroup_0, Result);


    }
}

/** @} */
