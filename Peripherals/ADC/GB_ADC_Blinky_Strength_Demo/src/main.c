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

volatile int exit_code = 0;
/* User includes */

/*!
  \brief The main function for the project.
  \details The startup initialization sequence is the following:
 * - startup asm routine
 * - main()
*/
int main(void)
{
    /* Write your code here */
	/*
	*   (c) Copyright 2021 NXP
	*
	*   NXP Confidential. This software is owned or controlled by NXP and may only be used strictly
	*   in accordance with the applicable license terms.  By expressly accepting
	*   such terms or by downloading, installing, activating and/or otherwise using
	*   the software, you are agreeing that you have read, and that you agree to
	*   comply with and are bound by, such license terms.  If you do not agree to
	*   be bound by the applicable license terms, then you may not retain,
	*   install, activate or otherwise use the software.
	*
	*   This file contains sample code only. It is not part of the production code deliverables.
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

	uint32_t adc_timedelay(){
		/* Checks whether ADC conversion is in progress */
	//	   Gb_ADC_Conversion_Status = Adc_Ip_GetConvActiveFlag(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE);
			Adc_Ip_GetConvActiveFlag(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE);

		   /* Checks whether ADC conversion is completed or not */
	//	   Gb_ADC_Conversion_Status = Adc_Ip_GetConvCompleteFlag(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE,ADC_IP_INPUTCHAN_EXT12);
		   Adc_Ip_GetConvCompleteFlag(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE,ADC_IP_INPUTCHAN_EXT12);

		   /* Reads the converted ADC data */
		   return (Adc_Ip_GetConvData(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE,0)*490);
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
			TestDelay(adc_timedelay());
			Dio_WriteChannel(DioConf_DioChannel_Green_LED, STD_HIGH);
			TestDelay(adc_timedelay());
		}

	}

	/* END main */
	/*!
	** @}
	*/

    for(;;)
    {
        if(exit_code != 0)
        {
            break;
        }
    }
    return exit_code;
}

/** @} */
