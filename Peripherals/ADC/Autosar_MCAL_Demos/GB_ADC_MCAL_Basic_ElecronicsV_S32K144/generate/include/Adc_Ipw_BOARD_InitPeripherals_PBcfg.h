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

#ifndef ADC_IPW_BOARD_INITPERIPHERALS_PBCFG_H
#define ADC_IPW_BOARD_INITPERIPHERALS_PBCFG_H

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

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define ADC_VENDOR_ID_IPW_BOARD_INITPERIPHERALS_PBCFG_H                       43
#define ADC_AR_RELEASE_MAJOR_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_H        4
#define ADC_AR_RELEASE_MINOR_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_H        4
#define ADC_AR_RELEASE_REVISION_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_H     0
#define ADC_SW_MAJOR_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_H                1
#define ADC_SW_MINOR_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_H                0
#define ADC_SW_PATCH_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_H                0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check vendor id */
#if (ADC_VENDOR_ID_IPW_BOARD_INITPERIPHERALS_PBCFG_H != ADC_VENDOR_ID_IPW_TYPES_H)
    #error "Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.h and Adc_Ipw_Types.h have different vendor ids"
#endif

/* Check Autosar version */
#if ((ADC_AR_RELEASE_MAJOR_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_H != ADC_AR_RELEASE_MAJOR_VERSION_IPW_TYPES_H) || \
     (ADC_AR_RELEASE_MINOR_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_H != ADC_AR_RELEASE_MINOR_VERSION_IPW_TYPES_H) || \
     (ADC_AR_RELEASE_REVISION_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_H != ADC_AR_RELEASE_REVISION_VERSION_IPW_TYPES_H) \
    )
    #error "AutoSar Version Numbers of Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.h and Adc_Ipw_Types.h are different"
#endif

/* Check Software version */
#if ((ADC_SW_MAJOR_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_H != ADC_SW_MAJOR_VERSION_IPW_TYPES_H) || \
     (ADC_SW_MINOR_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_H != ADC_SW_MINOR_VERSION_IPW_TYPES_H) || \
     (ADC_SW_PATCH_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_H != ADC_SW_PATCH_VERSION_IPW_TYPES_H) \
    )
  #error "Software Version Numbers of Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.h and Adc_Ipw_Types.h are different"
#endif

/*==================================================================================================
*                              STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

#define ADC_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Adc_MemMap.h"

/**
* @brief          Adc Ipw Config configuration variant BOARD_INITPERIPHERALS.
*/
extern const Adc_Ipw_Config AdcIpwCfg_BOARD_INITPERIPHERALS;

/**
* @brief          ADC Ipw Group 0 Config BOARD_INITPERIPHERALS.
*/
extern const Adc_Ipw_GroupConfig AdcIpwGroupConfig_0_BOARD_INITPERIPHERALS;

/**
* @brief          ADC Ipw Group 1 Config BOARD_INITPERIPHERALS.
*/
extern const Adc_Ipw_GroupConfig AdcIpwGroupConfig_1_BOARD_INITPERIPHERALS;

/**
* @brief          ADC Ipw Group 2 Config BOARD_INITPERIPHERALS.
*/
extern const Adc_Ipw_GroupConfig AdcIpwGroupConfig_2_BOARD_INITPERIPHERALS;

/**
* @brief          ADC Ipw Group 3 Config BOARD_INITPERIPHERALS.
*/
extern const Adc_Ipw_GroupConfig AdcIpwGroupConfig_3_BOARD_INITPERIPHERALS;

/**
* @brief          ADC Ipw Group 4 Config BOARD_INITPERIPHERALS.
*/
extern const Adc_Ipw_GroupConfig AdcIpwGroupConfig_4_BOARD_INITPERIPHERALS;

/**
* @brief          ADC Ipw Group 5 Config BOARD_INITPERIPHERALS.
*/
extern const Adc_Ipw_GroupConfig AdcIpwGroupConfig_5_BOARD_INITPERIPHERALS;

/**
* @brief          ADC Ipw Group 6 Config BOARD_INITPERIPHERALS.
*/
extern const Adc_Ipw_GroupConfig AdcIpwGroupConfig_6_BOARD_INITPERIPHERALS;


#define ADC_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Adc_MemMap.h"

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

#define ADC_START_SEC_CODE
#include "Adc_MemMap.h"


/**
* @brief         ADC Notification functions.
* @details       ADC Nofification functions defined inside the Plugin.
*
*/
extern void IoHwAb_AdcNotification_0(void);
extern void IoHwAb_AdcNotification_0(void);
extern void IoHwAb_AdcNotification_0(void);
extern void IoHwAb_AdcNotification_0(void);
extern void IoHwAb_AdcNotification_0(void);
extern void IoHwAb_AdcNotification_0(void);
extern void IoHwAb_AdcNotification_0(void);

#define ADC_STOP_SEC_CODE
#include "Adc_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */

#endif /* ADC_IPW_BOARD_INITPERIPHERALS_PBCFG_H */

