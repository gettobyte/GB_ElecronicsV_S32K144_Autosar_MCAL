/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : ADC
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

#ifndef ADC_IPW_CFG_H
#define ADC_IPW_CFG_H

/**
*   @file
*
*   @addtogroup adc_ipw_config Adc Ipw Configuration
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/

#include "Adc_Ipw_Types.h"
#include "Adc_Ipw_BOARD_InitPeripherals_PBcfg.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define ADC_VENDOR_ID_IPW_CFG_H                      43
#define ADC_AR_RELEASE_MAJOR_VERSION_IPW_CFG_H       4
#define ADC_AR_RELEASE_MINOR_VERSION_IPW_CFG_H       4
#define ADC_AR_RELEASE_REVISION_VERSION_IPW_CFG_H    0
#define ADC_SW_MAJOR_VERSION_IPW_CFG_H               1
#define ADC_SW_MINOR_VERSION_IPW_CFG_H               0
#define ADC_SW_PATCH_VERSION_IPW_CFG_H               0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Adc_Ipw_Cfg.h file and Adc_Ipw_Types.h file are of the same vendor */
#if (ADC_VENDOR_ID_IPW_CFG_H != ADC_VENDOR_ID_IPW_TYPES_H)
    #error "Adc_Ipw_Cfg.h and Adc_Ipw_Types.h have different vendor ids"
#endif

/* Check if Adc_Ipw_Cfg.h file and Adc_Ipw_Types.h file are of the same Autosar version */
#if ((ADC_AR_RELEASE_MAJOR_VERSION_IPW_CFG_H != ADC_AR_RELEASE_MAJOR_VERSION_IPW_TYPES_H) || \
     (ADC_AR_RELEASE_MINOR_VERSION_IPW_CFG_H != ADC_AR_RELEASE_MINOR_VERSION_IPW_TYPES_H) || \
     (ADC_AR_RELEASE_REVISION_VERSION_IPW_CFG_H != ADC_AR_RELEASE_REVISION_VERSION_IPW_TYPES_H) \
    )
    #error "AutoSar Version Numbers of Adc_Ipw_Cfg.h and Adc_Ipw_Types.h are different"
#endif

/* Check if Adc_Ipw_Cfg.h file and Adc_Ipw_Types.h file are of the same Software version */
#if ((ADC_SW_MAJOR_VERSION_IPW_CFG_H != ADC_SW_MAJOR_VERSION_IPW_TYPES_H) || \
     (ADC_SW_MINOR_VERSION_IPW_CFG_H != ADC_SW_MINOR_VERSION_IPW_TYPES_H) || \
     (ADC_SW_PATCH_VERSION_IPW_CFG_H != ADC_SW_PATCH_VERSION_IPW_TYPES_H) \
    )
  #error "Software Version Numbers of Adc_Ipw_Cfg.h and Adc_Ipw_Types.h are different"
#endif

/* Check if Adc_Ipw_Cfg.h file and Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.h file are of the same vendor */
#if (ADC_VENDOR_ID_IPW_CFG_H != ADC_VENDOR_ID_IPW_BOARD_INITPERIPHERALS_PBCFG_H)
    #error "Adc_Ipw_Cfg.h and Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.h have different vendor ids"
#endif

/* Check if Adc_Ipw_Cfg.h file and Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.h file are of the same Autosar version */
#if ((ADC_AR_RELEASE_MAJOR_VERSION_IPW_CFG_H != ADC_AR_RELEASE_MAJOR_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_H) || \
     (ADC_AR_RELEASE_MINOR_VERSION_IPW_CFG_H != ADC_AR_RELEASE_MINOR_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_H) || \
     (ADC_AR_RELEASE_REVISION_VERSION_IPW_CFG_H != ADC_AR_RELEASE_REVISION_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_H) \
    )
    #error "AutoSar Version Numbers of Adc_Ipw_Cfg.h and Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.h are different"
#endif

/* Check if Adc_Ipw_Cfg.h file and Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.h file are of the same Software version */
#if ((ADC_SW_MAJOR_VERSION_IPW_CFG_H != ADC_SW_MAJOR_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_H) || \
     (ADC_SW_MINOR_VERSION_IPW_CFG_H != ADC_SW_MINOR_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_H) || \
     (ADC_SW_PATCH_VERSION_IPW_CFG_H != ADC_SW_PATCH_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_H) \
    )
  #error "Software Version Numbers of Adc_Ipw_Cfg.h and Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.h are different"
#endif

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */

#endif /* ADC_IPW_CFG_H */

