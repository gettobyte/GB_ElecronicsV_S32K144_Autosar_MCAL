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

#include "Adc_Ipw_CfgDefines.h"
#include "Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.h"
#include "Adc_Ip_BOARD_INITPERIPHERALS_PBcfg.h"
#include "Pdb_Adc_Ip_BOARD_INITPERIPHERALS_PBcfg.h"


/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define ADC_VENDOR_ID_IPW_BOARD_INITPERIPHERALS_PBCFG_C                      43
#define ADC_AR_RELEASE_MAJOR_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_C       4
#define ADC_AR_RELEASE_MINOR_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_C       4
#define ADC_AR_RELEASE_REVISION_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_C    0
#define ADC_SW_MAJOR_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_C               1
#define ADC_SW_MINOR_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_C               0
#define ADC_SW_PATCH_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_C               0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/* Check if Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.c file and Adc_Ipw_CfgDefines.h file are of the same vendor */
#if (ADC_VENDOR_ID_IPW_BOARD_INITPERIPHERALS_PBCFG_C != ADC_VENDOR_ID_IPW_CFGDEFINES_H)
    #error "Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.c and Adc_Ipw_CfgDefines.h have different vendor ids"
#endif

/* Check if Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.c file and Adc_Ipw_CfgDefines.h file are of the same Autosar version */
#if ((ADC_AR_RELEASE_MAJOR_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_C != ADC_AR_RELEASE_MAJOR_VERSION_IPW_CFGDEFINES_H) || \
     (ADC_AR_RELEASE_MINOR_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_C != ADC_AR_RELEASE_MINOR_VERSION_IPW_CFGDEFINES_H) || \
     (ADC_AR_RELEASE_REVISION_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_C != ADC_AR_RELEASE_REVISION_VERSION_IPW_CFGDEFINES_H) \
    )
    #error "AutoSar Version Numbers of Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.c and Adc_Ipw_CfgDefines.h are different"
#endif

/* Check if Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.c file and Adc_Ipw_CfgDefines.h file are of the same Software version */
#if ((ADC_SW_MAJOR_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_C != ADC_SW_MAJOR_VERSION_IPW_CFGDEFINES_H) || \
     (ADC_SW_MINOR_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_C != ADC_SW_MINOR_VERSION_IPW_CFGDEFINES_H) || \
     (ADC_SW_PATCH_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_C != ADC_SW_PATCH_VERSION_IPW_CFGDEFINES_H) \
    )
  #error "Software Version Numbers of Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.c and Adc_Ipw_CfgDefines.h are different"
#endif

/* Check if Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.c file and Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.h file are of the same vendor */
#if (ADC_VENDOR_ID_IPW_BOARD_INITPERIPHERALS_PBCFG_C != ADC_VENDOR_ID_IPW_BOARD_INITPERIPHERALS_PBCFG_H)
    #error "Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.c and Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.h have different vendor ids"
#endif

/* Check if Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.c file and Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.h file are of the same Autosar version */
#if ((ADC_AR_RELEASE_MAJOR_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_C != ADC_AR_RELEASE_MAJOR_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_H) || \
     (ADC_AR_RELEASE_MINOR_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_C != ADC_AR_RELEASE_MINOR_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_H) || \
     (ADC_AR_RELEASE_REVISION_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_C != ADC_AR_RELEASE_REVISION_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_H) \
    )
    #error "AutoSar Version Numbers of Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.c and Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.h are different"
#endif

/* Check if Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.c file and Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.h file are of the same Software version */
#if ((ADC_SW_MAJOR_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_C != ADC_SW_MAJOR_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_H) || \
     (ADC_SW_MINOR_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_C != ADC_SW_MINOR_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_H) || \
     (ADC_SW_PATCH_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_C != ADC_SW_PATCH_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_H) \
    )
  #error "Software Version Numbers of Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.c and Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.h are different"
#endif

/* Check if Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.c file and Adc_Ip_BOARD_INITPERIPHERALS_PBcfg.h file are of the same vendor */
#if (ADC_VENDOR_ID_IPW_BOARD_INITPERIPHERALS_PBCFG_C != ADC_IP_VENDOR_ID_BOARD_INITPERIPHERALS_PBCFG_H)
    #error "Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.c and Adc_Ip_BOARD_INITPERIPHERALS_PBcfg.h have different vendor ids"
#endif

/* Check if Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.c file and Adc_Ip_BOARD_INITPERIPHERALS_PBcfg.h file are of the same Autosar version */
#if ((ADC_AR_RELEASE_MAJOR_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_C != ADC_IP_AR_RELEASE_MAJOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_H) || \
     (ADC_AR_RELEASE_MINOR_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_C != ADC_IP_AR_RELEASE_MINOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_H) || \
     (ADC_AR_RELEASE_REVISION_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_C != ADC_IP_AR_RELEASE_REVISION_VERSION_BOARD_INITPERIPHERALS_PBCFG_H) \
    )
    #error "AutoSar Version Numbers of Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.c and Adc_Ip_BOARD_INITPERIPHERALS_PBcfg.h are different"
#endif

/* Check if Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.c file and Adc_Ip_BOARD_INITPERIPHERALS_PBcfg.h file are of the same Software version */
#if ((ADC_SW_MAJOR_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_C != ADC_IP_SW_MAJOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_H) || \
     (ADC_SW_MINOR_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_C != ADC_IP_SW_MINOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_H) || \
     (ADC_SW_PATCH_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_C != ADC_IP_SW_PATCH_VERSION_BOARD_INITPERIPHERALS_PBCFG_H) \
    )
  #error "Software Version Numbers of Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.c and Adc_Ip_BOARD_INITPERIPHERALS_PBcfg.h are different"
#endif

/* Check if Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.c file and Pdb_Adc_Ip_BOARD_INITPERIPHERALS_PBcfg.h file are of the same vendor */
#if (ADC_VENDOR_ID_IPW_BOARD_INITPERIPHERALS_PBCFG_C != PDB_ADC_IP_VENDOR_ID_BOARD_INITPERIPHERALS_PBCFG_H)
    #error "Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.c and Pdb_Adc_Ip_BOARD_INITPERIPHERALS_PBcfg.h have different vendor ids"
#endif

/* Check if Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.c file and Pdb_Adc_Ip_BOARD_INITPERIPHERALS_PBcfg.h file are of the same Autosar version */
#if ((ADC_AR_RELEASE_MAJOR_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_C != PDB_ADC_IP_AR_RELEASE_MAJOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_H) || \
     (ADC_AR_RELEASE_MINOR_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_C != PDB_ADC_IP_AR_RELEASE_MINOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_H) || \
     (ADC_AR_RELEASE_REVISION_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_C != PDB_ADC_IP_AR_RELEASE_REVISION_VERSION_BOARD_INITPERIPHERALS_PBCFG_H) \
    )
    #error "AutoSar Version Numbers of Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.c and Pdb_Adc_Ip_BOARD_INITPERIPHERALS_PBcfg.h are different"
#endif

/* Check if Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.c file and Pdb_Adc_Ip_BOARD_INITPERIPHERALS_PBcfg.h file are of the same Software version */
#if ((ADC_SW_MAJOR_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_C != PDB_ADC_IP_SW_MAJOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_H) || \
     (ADC_SW_MINOR_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_C != PDB_ADC_IP_SW_MINOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_H) || \
     (ADC_SW_PATCH_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_C != PDB_ADC_IP_SW_PATCH_VERSION_BOARD_INITPERIPHERALS_PBCFG_H) \
    )
  #error "Software Version Numbers of Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.c and Pdb_Adc_Ip_BOARD_INITPERIPHERALS_PBcfg.h are different"
#endif


/*==================================================================================================
*                                   GLOBAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/


/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

#define ADC_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Adc_MemMap.h"


#if (ADC_ENABLE_LIMIT_CHECK == STD_ON)
/**
* @brief          Definition of Adc Ipw Channel limits for Logical Unit Id 0 configuration variant BOARD_INITPERIPHERALS.
*/
static const Adc_ChannelLimitCheckingType ChannelLimitCheckingConfig_0_BOARD_INITPERIPHERALS[] =
{
    {
        /**< @brief range for limit check */
        (boolean)FALSE, /* bChannelLimitCheckEnabled */
        /**< @brief range for limit check */
        ADC_RANGE_ALWAYS, /* eChannelRange */
        /**< @brief high limit value */
        4095U, /* ChannelHighLimit */
        /**< @brief low limit value */
        0U /* ChannelLowLimit */
    }
};
#endif /* (ADC_ENABLE_LIMIT_CHECK == STD_ON) */


#define ADC_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Adc_MemMap.h"

#define ADC_START_SEC_CONFIG_DATA_16
#include "Adc_MemMap.h"
/**
* @brief          Group Channel Delays for configuration variant BOARD_INITPERIPHERALS.
*
*/


#define ADC_STOP_SEC_CONFIG_DATA_16
#include "Adc_MemMap.h"

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

#define ADC_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Adc_MemMap.h"

/**
* @brief          Adc Ipw Config configuration variant BOARD_INITPERIPHERALS.
*/
const Adc_Ipw_Config AdcIpwCfg_BOARD_INITPERIPHERALS =
{
    { &AdcIpConfig_0_BOARD_INITPERIPHERALS, NULL_PTR }, /* apAdcConfig */
    { &PdbAdcIpConfig_0_BOARD_INITPERIPHERALS, NULL_PTR }, /* apPdbConfig */
    { 0U, ADC_IPW_INVALID_LOGICAL_UNIT_ID }, /* aAdcPhysicalId */
#if (ADC_DUAL_CLOCK_MODE == STD_ON)
    { NULL_PTR, NULL_PTR }, /* apAdcAltClockConfig */
#endif /* (ADC_DUAL_CLOCK_MODE == STD_ON) */
#if (ADC_ENABLE_LIMIT_CHECK == STD_ON)
    { ChannelLimitCheckingConfig_0_BOARD_INITPERIPHERALS, NULL_PTR }, /* ChannelLimitCheckingConfigs */
#endif /* (ADC_ENABLE_LIMIT_CHECK == STD_ON) */
    /* Mapping */
    {
        { ADC_INTERRUPT, ADC_IPW_INVALID_TRANSFER_TYPE /* Unit not used */ }, /* u8Adc_DmaInterruptSoftware */
        /**< @brief number of groups per hw unit > */
        { 1U, 0U }, /* aAdc_Groups */
        /**< @brief number of channels per hw unit > */
        { 1U, 0U }, /* aAdc_Channels */
        { ADC_IPW_INVALID_DMA_CHANNEL_ID, ADC_IPW_INVALID_DMA_CHANNEL_ID }, /* au8Adc_DmaChannel */
#if (STD_ON == ADC_OPTIMIZE_DMA_STREAMING_GROUPS) || (ADC_ENABLE_GROUP_STREAMING_RESULTS_REORDER == STD_ON)
        { ADC_IPW_INVALID_DMA_CHANNEL_ID, ADC_IPW_INVALID_DMA_CHANNEL_ID }, /* au8Adc_CountingDmaChannel */
#endif /* (STD_ON == ADC_OPTIMIZE_DMA_STREAMING_GROUPS) || (ADC_ENABLE_GROUP_STREAMING_RESULTS_REORDER == STD_ON) */
        { STD_ON, STD_OFF }, /* au8Adc_HwUnit */
        { 0U, ADC_IPW_INVALID_LOGICAL_UNIT_ID } /* aHwLogicalId */
    }
};

/**
* @brief          ADC Ipw Group 0 Config BOARD_INITPERIPHERALS.
*/
const Adc_Ipw_GroupConfig AdcIpwGroupConfig_0_BOARD_INITPERIPHERALS =
{
#if (ADC_SET_ADC_CONV_TIME_ONCE == STD_OFF)
    /**< @brief Main Average enable status of group */
    STD_OFF, /* u8GroupAvgEnable */
    /**< @brief Main Average selection of group */
    ADC_IP_AVG_4_CONV, /* GroupAvgSelect */
    ADC_IP_DEFAULT_SAMPLE_TIME, /* ConvTime */
#if (ADC_DUAL_CLOCK_MODE == STD_ON)
    /**< @brief Alternate Average enable status of group */
    STD_OFF, /* u8GroupAvgEnableAlternate */
    /**< @brief Alternate Average selection of group */
    ADC_IP_AVG_4_CONV, /* GroupAvgSelectAlternate */
    ADC_IP_DEFAULT_SAMPLE_TIME, /* AlternateConvTime */
#endif /* (ADC_DUAL_CLOCK_MODE == STD_ON) */
#endif /* (ADC_SET_ADC_CONV_TIME_ONCE == STD_OFF) */
    0U, /* PdbPeriod */
    0U, /* PdbDelay */
    (boolean)TRUE, /* AdcGroupEnableBackToBack */
    (boolean)FALSE, /* AdcGroupEnableChannelDelays */
    NULL_PTR /* pDelay */
};


#define ADC_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Adc_MemMap.h"

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */

