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
#include "Adc_BOARD_INITPERIPHERALS_PBcfg.h"
#include "Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define ADC_VENDOR_ID_BOARD_INITPERIPHERALS_PBCFG_C                    43
#define ADC_AR_RELEASE_MAJOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_C     4
#define ADC_AR_RELEASE_MINOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_C     4
#define ADC_AR_RELEASE_REVISION_VERSION_BOARD_INITPERIPHERALS_PBCFG_C  0
#define ADC_SW_MAJOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_C             1
#define ADC_SW_MINOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_C             0
#define ADC_SW_PATCH_VERSION_BOARD_INITPERIPHERALS_PBCFG_C             0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/* Check if Adc_BOARD_INITPERIPHERALS_PBcfg.c file and Adc_BOARD_INITPERIPHERALS_PBcfg.h file are of the same vendor */
#if (ADC_VENDOR_ID_BOARD_INITPERIPHERALS_PBCFG_C != ADC_VENDOR_ID_BOARD_INITPERIPHERALS_PBCFG_H)
    #error "Adc_BOARD_INITPERIPHERALS_PBcfg.c and Adc_BOARD_INITPERIPHERALS_PBcfg.h have different vendor ids"
#endif

/* Check if Adc_BOARD_INITPERIPHERALS_PBcfg.c file and Adc_BOARD_INITPERIPHERALS_PBcfg.h file are of the same Autosar version */
#if ((ADC_AR_RELEASE_MAJOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_C != ADC_AR_RELEASE_MAJOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_H) || \
     (ADC_AR_RELEASE_MINOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_C != ADC_AR_RELEASE_MINOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_H) || \
     (ADC_AR_RELEASE_REVISION_VERSION_BOARD_INITPERIPHERALS_PBCFG_C != ADC_AR_RELEASE_REVISION_VERSION_BOARD_INITPERIPHERALS_PBCFG_H) \
    )
    #error "AutoSar Version Numbers of Adc_BOARD_INITPERIPHERALS_PBcfg.c and Adc_BOARD_INITPERIPHERALS_PBcfg.h are different"
#endif

/* Check if Adc_BOARD_INITPERIPHERALS_PBcfg.c file and Adc_BOARD_INITPERIPHERALS_PBcfg.h file are of the same Software version */
#if ((ADC_SW_MAJOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_C != ADC_SW_MAJOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_H) || \
     (ADC_SW_MINOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_C != ADC_SW_MINOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_H) || \
     (ADC_SW_PATCH_VERSION_BOARD_INITPERIPHERALS_PBCFG_C != ADC_SW_PATCH_VERSION_BOARD_INITPERIPHERALS_PBCFG_H) \
    )
  #error "Software Version Numbers of Adc_BOARD_INITPERIPHERALS_PBcfg.c and Adc_BOARD_INITPERIPHERALS_PBcfg.h are different"
#endif

/* Check if Adc_BOARD_INITPERIPHERALS_PBcfg.c file and Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.h file are of the same vendor */
#if (ADC_VENDOR_ID_BOARD_INITPERIPHERALS_PBCFG_C != ADC_VENDOR_ID_IPW_BOARD_INITPERIPHERALS_PBCFG_H)
    #error "Adc_BOARD_INITPERIPHERALS_PBcfg.c and Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.h have different vendor ids"
#endif

/* Check if Adc_BOARD_INITPERIPHERALS_PBcfg.c file and Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.h file are of the same Autosar version */
#if ((ADC_AR_RELEASE_MAJOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_C != ADC_AR_RELEASE_MAJOR_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_H) || \
     (ADC_AR_RELEASE_MINOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_C != ADC_AR_RELEASE_MINOR_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_H) || \
     (ADC_AR_RELEASE_REVISION_VERSION_BOARD_INITPERIPHERALS_PBCFG_C != ADC_AR_RELEASE_REVISION_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_H) \
    )
    #error "AutoSar Version Numbers of Adc_BOARD_INITPERIPHERALS_PBcfg.c and Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.h are different"
#endif

/* Check if Adc_BOARD_INITPERIPHERALS_PBcfg.c file and Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.h file are of the same Software version */
#if ((ADC_SW_MAJOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_C != ADC_SW_MAJOR_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_H) || \
     (ADC_SW_MINOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_C != ADC_SW_MINOR_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_H) || \
     (ADC_SW_PATCH_VERSION_BOARD_INITPERIPHERALS_PBCFG_C != ADC_SW_PATCH_VERSION_IPW_BOARD_INITPERIPHERALS_PBCFG_H) \
    )
  #error "Software Version Numbers of Adc_BOARD_INITPERIPHERALS_PBcfg.c and Adc_Ipw_BOARD_INITPERIPHERALS_PBcfg.h are different"
#endif

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

#define ADC_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "Adc_MemMap.h"

/**
* @brief          Adc Result Buffer RAM initializations.
* @details        Array for all ADC group result ram buffers.
*/
static Adc_ValueGroupType * Adc_aResultsBufferPtr[1];

#define ADC_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "Adc_MemMap.h"

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

#define ADC_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Adc_MemMap.h"

/**
* @brief          Group Assignments on ADC0 BOARD_INITPERIPHERALS.
*
*/
static const Adc_ChannelType Adc_Group0_Assignment_0_BOARD_INITPERIPHERALS[ADC_CFGSET_BOARD_INITPERIPHERALS_GROUP_0_CHANNELS] =
{
    0U,
    1U
};

/**
* @brief          Definition of all ADC groups for configuration variant BOARD_INITPERIPHERALS.
*/
static const Adc_GroupConfigurationType Adc_GroupsCfg_BOARD_INITPERIPHERALS[] =
{
    /**< @brief Group0 -- Logical Unit Id 0 -- Hardware Unit ADC0 */
    {
        /**< @brief Index of group */
        0, /* GroupId */
        /**< @brief ADC Logical Unit Id that the group belongs to */
        (Adc_HwUnitType)0, /* AdcLogicalUnitId */
        /**< @brief Access mode */
        ADC_ACCESS_MODE_SINGLE, /* eAccessMode */
        /**< @brief Conversion mode */
        ADC_CONV_MODE_CONTINUOUS, /* eMode */
        /**< @brief Conversion type */
        ADC_CONV_TYPE_NORMAL, /* eType */
#if (ADC_PRIORITY_IMPLEMENTATION != ADC_PRIORITY_NONE)
        /**< @brief Priority configured */
        (Adc_GroupPriorityType)ADC_GROUP_PRIORITY, /* Priority */
#endif /* ADC_PRIORITY_IMPLEMENTATION != ADC_PRIORITY_NONE */
        /**< @brief Replacement mode */
        ADC_GROUP_REPL_ABORT_RESTART, /* eReplacementMode */
        /**< @brief Trigger source configured */
        ADC_TRIGG_SRC_SW, /* eTriggerSource */
#if (STD_ON == ADC_HW_TRIGGER_API)
        /**< @brief Hardware trigger source for the group */
        PDB_ADC_IP_SOFTWARE_TRIGGER, /* HwTriggerSource */
        /**< @brief Hardware trigger signal */
        ADC_HW_TRIG_RISING_EDGE, /* eTriggerEdge */
#endif /* (STD_ON == ADC_HW_TRIGGER_API) */
#if (STD_ON == ADC_GRP_NOTIF_CAPABILITY)
        /**< @brief Notification function */
        NULL_PTR, /* Notification */
#endif /* (STD_ON == ADC_GRP_NOTIF_CAPABILITY) */
#if (ADC_ENABLE_INITIAL_NOTIFICATION == STD_ON)
        /**< @brief Extra notification function */
        NULL_PTR, /* ExtraNotification */
#endif /* (ADC_ENABLE_INITIAL_NOTIFICATION == STD_ON) */
        /**< @brief ADC Group Result Buffers RAM array */
        Adc_aResultsBufferPtr, /* pResultsBufferPtr */
        /**< @brief Group Streaming Buffer Mode */
        ADC_STREAM_BUFFER_LINEAR, /* eBufferMode */
#if (ADC_ENABLE_CH_DISABLE_CH_NONAUTO_API == STD_ON)
        /**< @brief Index of the group with AdcEnableChDisableChGroup enabled */
        (Adc_GroupType)ADC_ENABLE_CH_DISABLE_CH_INVALID_GROUP_INDEX, /* EnableChDisableChGroupIndex */
#endif /* (ADC_ENABLE_CH_DISABLE_CH_NONAUTO_API == STD_ON) */
        /**< @brief Number of streaming samples */
        (Adc_StreamNumSampleType)ADC_STREAMING_NUM_SAMPLES(1), /* NumSamples */
#if (ADC_ENABLE_GROUP_STREAMING_RESULTS_REORDER == STD_ON)
        /**< @brief Arrange the adc results as multiple sets of group result buffer */
        (boolean)FALSE, /* bStreamResultGroupMultiSets */
#endif /* (ADC_ENABLE_GROUP_STREAMING_RESULTS_REORDER == STD_ON) */
        /**< @brief Channels assigned to the group*/
        Adc_Group0_Assignment_0_BOARD_INITPERIPHERALS, /* pAssignment */
        /**< @brief Number of channels in the group*/
        (Adc_ChannelIndexType)ADC_CFGSET_BOARD_INITPERIPHERALS_GROUP_0_CHANNELS, /* AssignedChannelCount */
        /**< @brief Last Channel configured */
        (Adc_ChannelType)(ADC_ID_CHANNEL_U8(12)), /* LastCh */
        /**< @brief First Channel configured */
        (Adc_ChannelType)(ADC_ID_CHANNEL_U8(1)), /* FirstCh */
        /**< @brief Enables or Disables the ADC and DMA interrupts */
        (uint8)(STD_OFF), /* u8AdcWithoutInterrupt */
        /**< @brief Enables or Disables configuring external DMA channel in the group */
        (uint8)(STD_OFF), /* u8AdcExtDMAChanEnable */
        /**< @brief When true, disables completely DMA configuration done by ADC driver for the group */
        (boolean)FALSE, /* u8AdcWithoutDma */
#if (STD_ON == ADC_OPTIMIZE_DMA_STREAMING_GROUPS)
        /**< @brief Enables or Disables the ADC optimize DMA streaming groups feature */
        (boolean)FALSE, /* bAdcOptimizeDmaStream */
        /**< @brief Enable/disable half interrupt for group with optimize DMA streaming groups */
        (boolean)FALSE, /* bHalfInterrupt */
#endif /* (STD_ON == ADC_OPTIMIZE_DMA_STREAMING_GROUPS) */
#if (ADC_ENABLE_LIMIT_CHECK == STD_ON)
        /**< @brief Enables or disables the usage of limit checking for an ADC group. */
        (boolean)FALSE, /* bAdcGroupLimitcheck */
#endif /* (STD_ON == ADC_ENABLE_LIMIT_CHECK) */
        &AdcIpwGroupConfig_0_BOARD_INITPERIPHERALS /* pAdcIpwGroupConfig */
    }
};


#define ADC_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Adc_MemMap.h"

#define ADC_START_SEC_CONFIG_DATA_16
#include "Adc_MemMap.h"

/**
* @brief         Array of index for mapping the groups.
* @details       Array of index for mapping the groups in each partition.
*
*/
static const uint16 au16Adc_GroupIdToIndexMap_BOARD_INITPERIPHERALS[ADC_MAX_GROUPS] =
{
    0
};


#define ADC_STOP_SEC_CONFIG_DATA_16
#include "Adc_MemMap.h"

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/
#define ADC_START_SEC_CONFIG_DATA_8
#include "Adc_MemMap.h"

/**
* @brief         Array contains coreId used for BOARD_INITPERIPHERALS.
* @details       Array contains coreId used for BOARD_INITPERIPHERALS.
*
*/
static const uint8 Adc_Partition_Assignment_BOARD_INITPERIPHERALS[1] =
{
    (uint8)(0UL)
};

#define ADC_STOP_SEC_CONFIG_DATA_8
#include "Adc_MemMap.h"

#define ADC_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Adc_MemMap.h"

/* VariantPostBuild or more than 1 configured variant */
/* No ADC configured Ecuc Partitions */

/**
* @brief          ADC driver Configuration structure BOARD_INITPERIPHERALS.
*/
const Adc_ConfigType Adc_Config_BOARD_INITPERIPHERALS =
{
    &AdcIpwCfg_BOARD_INITPERIPHERALS, /* pAdcIpwConfig */
    /** @brief Group configurations */
    Adc_GroupsCfg_BOARD_INITPERIPHERALS, /* pGroups */
    ADC_GROUPS_BOARD_INITPERIPHERALS, /* GroupCount */
    /**< @brief Array for mapping the groups */
    au16Adc_GroupIdToIndexMap_BOARD_INITPERIPHERALS, /* pGroupIdToIndexMap */
    /** @brief Configuration CoreID */
    (uint32)(0UL), /* u32CoreId */
    /**< @brief Array contains CoreId */
    Adc_Partition_Assignment_BOARD_INITPERIPHERALS, /* pAssignmentPartition */
    /**< @brief Number of Partitions */
    (uint8)1UL /* AssignedPartitionCount */
};


#define ADC_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Adc_MemMap.h"

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */

