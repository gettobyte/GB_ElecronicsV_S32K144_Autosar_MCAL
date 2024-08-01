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



/*!
  \brief The main function for the project.
  \details The startup initialization sequence is the following:
 * - startup asm routine
 * - main()
*/
int main(void)
{
    Clock_Ip_StatusType clockStatus;
    Adc_Ip_StatusType adcStatus;

    boolean Gb_ADC_Conversion_Status;
    uint32_t Gb_ADC_Value;
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

    /**** Part 1: Start ADC software trigger conversions ****/
    Adc_Ip_Init(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE, &AdcHwUnit_0_BOARD_INITPERIPHERALS);
    adcStatus = Adc_Ip_DoCalibration(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE);
    while (adcStatus != ADC_IP_STATUS_SUCCESS)
    {
        adcStatus = Adc_Ip_DoCalibration(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE);
    }


for(;;)
{
	/* Start a software trigger conversion */
   Adc_Ip_StartConversion(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE, ADC_IP_INPUTCHAN_EXT12, FALSE);
   /* Checks whether ADC conversion is in progress */
   Gb_ADC_Conversion_Status = Adc_Ip_GetConvActiveFlag(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE);

   /* Checks whether ADC conversion is completed or not */
   Gb_ADC_Conversion_Status = Adc_Ip_GetConvCompleteFlag(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE,0);
   /* Reads the converted ADC data */
   Gb_ADC_Value = Adc_Ip_GetConvData(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE,0);


   Adc_Ip_SetResolution(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE, ADC_IP_RESOLUTION_8BIT);

	/* Start a software trigger conversion */
  Adc_Ip_StartConversion(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE, ADC_IP_INPUTCHAN_EXT12, FALSE);
  /* Checks whether ADC conversion is in progress */
  Gb_ADC_Conversion_Status = Adc_Ip_GetConvActiveFlag(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE);

  /* Checks whether ADC conversion is completed or not */
  Gb_ADC_Conversion_Status = Adc_Ip_GetConvCompleteFlag(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE,0);
  /* Reads the converted ADC data */
  Gb_ADC_Value = Adc_Ip_GetConvData(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE,0);

  Adc_Ip_SetResolution(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE, ADC_IP_RESOLUTION_10BIT);

	/* Start a software trigger conversion */
  Adc_Ip_StartConversion(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE, ADC_IP_INPUTCHAN_EXT12, FALSE);
  /* Checks whether ADC conversion is in progress */
  Gb_ADC_Conversion_Status = Adc_Ip_GetConvActiveFlag(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE);

  /* Checks whether ADC conversion is completed or not */
  Gb_ADC_Conversion_Status = Adc_Ip_GetConvCompleteFlag(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE,0);
  /* Reads the converted ADC data */
  Gb_ADC_Value = Adc_Ip_GetConvData(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE,0);


}


}

/* END main */
/*!
** @}
*/
