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

#ifndef ADC_CFG_H
#define ADC_CFG_H

/**
*   @file
*
*   @addtogroup adc_driver_config Adc Driver Configuration
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
#include "Adc_CfgDefines.h"
#include "Adc_Types.h"
#include "Adc_BOARD_InitPeripherals_PBcfg.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define ADC_VENDOR_ID_CFG                       43
#define ADC_AR_RELEASE_MAJOR_VERSION_CFG        4
#define ADC_AR_RELEASE_MINOR_VERSION_CFG        4
#define ADC_AR_RELEASE_REVISION_VERSION_CFG     0
#define ADC_SW_MAJOR_VERSION_CFG                1
#define ADC_SW_MINOR_VERSION_CFG                0
#define ADC_SW_PATCH_VERSION_CFG                0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/* Check if header file and Adc_CfgDefines header file are of the same vendor */
#if (ADC_VENDOR_ID_CFG != ADC_VENDOR_ID_CFGDEFINES_H)
    #error "Adc_Cfg.h and Adc_CfgDefines.h have different vendor ids"
#endif

/* Check if header file and Adc_CfgDefines header file are of the same Autosar version */
#if ((ADC_AR_RELEASE_MAJOR_VERSION_CFG != ADC_AR_RELEASE_MAJOR_VERSION_CFGDEFINES_H) || \
     (ADC_AR_RELEASE_MINOR_VERSION_CFG != ADC_AR_RELEASE_MINOR_VERSION_CFGDEFINES_H) || \
     (ADC_AR_RELEASE_REVISION_VERSION_CFG != ADC_AR_RELEASE_REVISION_VERSION_CFGDEFINES_H) \
    )
    #error "AutoSar Version Numbers of Adc_Cfg.h and Adc_CfgDefines.h are different"
#endif

/* Check if header file and Adc Cfg header file are of the same Software version */
#if ((ADC_SW_MAJOR_VERSION_CFG != ADC_SW_MAJOR_VERSION_CFGDEFINES_H) || \
     (ADC_SW_MINOR_VERSION_CFG != ADC_SW_MINOR_VERSION_CFGDEFINES_H) || \
     (ADC_SW_PATCH_VERSION_CFG != ADC_SW_PATCH_VERSION_CFGDEFINES_H) \
    )
    #error "Software Version Numbers of Adc_Cfg.h and Adc_CfgDefines.h are different"
#endif

/* Check if Adc_Cfg.h file and Adc_Types.h file are of the same vendor */
#if (ADC_VENDOR_ID_CFG != ADC_VENDOR_ID_TYPES_H)
    #error "Adc_Cfg.h and Adc_Types.h have different vendor ids"
#endif

/* Check if Adc_Cfg.h file and Adc_Types.h file are of the same Autosar version */
#if ((ADC_AR_RELEASE_MAJOR_VERSION_CFG != ADC_AR_RELEASE_MAJOR_VERSION_TYPES_H) || \
     (ADC_AR_RELEASE_MINOR_VERSION_CFG != ADC_AR_RELEASE_MINOR_VERSION_TYPES_H) || \
     (ADC_AR_RELEASE_REVISION_VERSION_CFG != ADC_AR_RELEASE_REVISION_VERSION_TYPES_H) \
    )
    #error "AutoSar Version Numbers of Adc_Cfg.h and Adc_Types.h are different"
#endif

/* Check if Adc_Cfg.h file and Adc_Types.h file are of the same Software version */
#if ((ADC_SW_MAJOR_VERSION_CFG != ADC_SW_MAJOR_VERSION_TYPES_H) || \
     (ADC_SW_MINOR_VERSION_CFG != ADC_SW_MINOR_VERSION_TYPES_H) || \
     (ADC_SW_PATCH_VERSION_CFG != ADC_SW_PATCH_VERSION_TYPES_H) \
    )
  #error "Software Version Numbers of Adc_Cfg.h and Adc_Types.h are different"
#endif

/* Check if source file and Adc configuration header file are of the same vendor */
#if (ADC_VENDOR_ID_BOARD_INITPERIPHERALS_PBCFG_H != ADC_VENDOR_ID_CFG)
    #error "Adc_BOARD_INITPERIPHERALS_PBcfg.h and Adc_Cfg.h have different vendor IDs"
#endif
/* Check if header file and Adc configuration header file are of the same Autosar version */
#if ((ADC_AR_RELEASE_MAJOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_H != ADC_AR_RELEASE_MAJOR_VERSION_CFG) || \
     (ADC_AR_RELEASE_MINOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_H != ADC_AR_RELEASE_MINOR_VERSION_CFG) || \
     (ADC_AR_RELEASE_REVISION_VERSION_BOARD_INITPERIPHERALS_PBCFG_H != ADC_AR_RELEASE_REVISION_VERSION_CFG) \
    )
    #error "AutoSar Version Numbers of Adc_BOARD_INITPERIPHERALS_PBcfg.h and Adc_Cfg.h are different"
#endif
/* Check if header file and Adc configuration header file are of the same software version */
#if ((ADC_SW_MAJOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_H != ADC_SW_MAJOR_VERSION_CFG) || \
     (ADC_SW_MINOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_H != ADC_SW_MINOR_VERSION_CFG) || \
     (ADC_SW_PATCH_VERSION_BOARD_INITPERIPHERALS_PBCFG_H != ADC_SW_PATCH_VERSION_CFG) \
    )
    #error "Software Version Numbers of Adc_BOARD_INITPERIPHERALS_PBcfg.h and Adc_Cfg.h are different"
#endif

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
#define ADC_CONFIG_EXT \
 ADC_CONFIG_BOARD_INITPERIPHERALS_PB \

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

#endif /* ADC_CFG_H */

