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

#ifndef ADC_TYPES_H
#define ADC_TYPES_H

/**
*   @file
*
*   @addtogroup adc_driver
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
#include "Adc_CfgDefines.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define ADC_VENDOR_ID_TYPES_H                         43
#define ADC_AR_RELEASE_MAJOR_VERSION_TYPES_H          4
#define ADC_AR_RELEASE_MINOR_VERSION_TYPES_H          4
#define ADC_AR_RELEASE_REVISION_VERSION_TYPES_H       0
#define ADC_SW_MAJOR_VERSION_TYPES_H                  1
#define ADC_SW_MINOR_VERSION_TYPES_H                  0
#define ADC_SW_PATCH_VERSION_TYPES_H                  0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Adc_Types.h file and Adc_Ipw_Types.h file are of the same vendor */
#if (ADC_VENDOR_ID_TYPES_H != ADC_VENDOR_ID_IPW_TYPES_H)
    #error "Adc_Types.h and Adc_Ipw_Types.h have different vendor ids"
#endif

/* Check if Adc_Types.h file and Adc_Ipw_Types.h file are of the same Autosar version */
#if ((ADC_AR_RELEASE_MAJOR_VERSION_TYPES_H != ADC_AR_RELEASE_MAJOR_VERSION_IPW_TYPES_H) || \
     (ADC_AR_RELEASE_MINOR_VERSION_TYPES_H != ADC_AR_RELEASE_MINOR_VERSION_IPW_TYPES_H) || \
     (ADC_AR_RELEASE_REVISION_VERSION_TYPES_H != ADC_AR_RELEASE_REVISION_VERSION_IPW_TYPES_H) \
    )
    #error "AutoSar Version Numbers of Adc_Types.h and Adc_Ipw_Types.h are different"
#endif

/* Check if Adc_Types.h file and Adc_Ipw_Types.h file are of the same Software version */
#if ((ADC_SW_MAJOR_VERSION_TYPES_H != ADC_SW_MAJOR_VERSION_IPW_TYPES_H) || \
     (ADC_SW_MINOR_VERSION_TYPES_H != ADC_SW_MINOR_VERSION_IPW_TYPES_H) || \
     (ADC_SW_PATCH_VERSION_TYPES_H != ADC_SW_PATCH_VERSION_IPW_TYPES_H) \
    )
  #error "Software Version Numbers of Adc_Types.h and Adc_Ipw_Types.h are different"
#endif

/* Check if Adc_Types.h file and Adc_CfgDefines.h file are of the same vendor */
#if (ADC_VENDOR_ID_TYPES_H != ADC_VENDOR_ID_CFGDEFINES_H)
    #error "Adc_Types.h and Adc_CfgDefines.h have different vendor ids"
#endif

/* Check if Adc_Types.h file and Adc_CfgDefines.h file are of the same Autosar version */
#if ((ADC_AR_RELEASE_MAJOR_VERSION_TYPES_H != ADC_AR_RELEASE_MAJOR_VERSION_CFGDEFINES_H) || \
     (ADC_AR_RELEASE_MINOR_VERSION_TYPES_H != ADC_AR_RELEASE_MINOR_VERSION_CFGDEFINES_H) || \
     (ADC_AR_RELEASE_REVISION_VERSION_TYPES_H != ADC_AR_RELEASE_REVISION_VERSION_CFGDEFINES_H) \
    )
    #error "AutoSar Version Numbers of Adc_Types.h and Adc_CfgDefines.h are different"
#endif

/* Check if Adc_Types.h file and Adc_CfgDefines.h file are of the same Software version */
#if ((ADC_SW_MAJOR_VERSION_TYPES_H != ADC_SW_MAJOR_VERSION_CFGDEFINES_H) || \
     (ADC_SW_MINOR_VERSION_TYPES_H != ADC_SW_MINOR_VERSION_CFGDEFINES_H) || \
     (ADC_SW_PATCH_VERSION_TYPES_H != ADC_SW_PATCH_VERSION_CFGDEFINES_H) \
    )
  #error "Software Version Numbers of Adc_Types.h and Adc_CfgDefines.h are different"
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
/**
* @brief          ADC driver status
* @details        Used to differentiate if ADC driver is already uninit, during init or already
*                 initialized or not.
*
*/
typedef enum
{
    ADC_STATE_UNINIT = 0U,  /**< @brief Adc driver uninitialized */
    ADC_STATE_BUSY,         /**< @brief Adc driver busy */
    ADC_STATE_IDLE          /**< @brief Adc driver idle */
} Adc_GlobalStateType;


/**
* @brief          ADC group already converted type.
* @details        Used to differentiate if group is already converted or not.
*
*/
typedef enum
{
    ADC_NOT_YET_CONVERTED = 0U, /**< @brief Group not yet converted */
    ADC_ALREADY_CONVERTED       /**< @brief Group is already converted */
} Adc_GroupConversionStateType;

/**
* @brief          Adc group access Mode.
* @details        Used for value received by Tressos interface configuration.
*
* @implements     Adc_GroupAccessModeType_enum
* SWS_Adc_00528
*/
typedef enum
{
    ADC_ACCESS_MODE_SINGLE = 0U, /**< @brief Single access mode */
    ADC_ACCESS_MODE_STREAMING    /**< @brief Streaming access mode */
} Adc_GroupAccessModeType;

/**
* @brief          Adc group replacement.
* @details        Used for value received by Tressos interface configuration.
*
* @implements     Adc_GroupReplacementType_enum
* SWS_Adc_00523
*/
typedef enum
{
    ADC_GROUP_REPL_ABORT_RESTART, /**< @brief Abort and restart of group*/
    ADC_GROUP_REPL_SUSPEND_RESUME /**< @brief Suspend and resuming of group*/
}Adc_GroupReplacementType;

/**
* @brief          Adc group streaming buffer mode.
* @details        Used for value received by Tressos interface configuration.
*
* @implements     Adc_StreamBufferModeType_enum
* SWS_Adc_00519
*/
typedef enum
{
    ADC_STREAM_BUFFER_LINEAR = 0U, /**< @brief Linear streaming*/
    ADC_STREAM_BUFFER_CIRCULAR     /**< @brief Circular streaming*/
} Adc_StreamBufferModeType;

/**
* @brief          ADC group status.
* @details        ADC group enumeration type.
*
* @implements     Adc_StatusType_enum
* SWS_Adc_00513
*/
typedef enum
{
    ADC_IDLE = 0U,       /**< @brief Group is in IDLE state*/
    ADC_BUSY,            /**< @brief Group is in BUSY state */
    ADC_COMPLETED,       /**< @brief Group is in COMPLETED state*/
    ADC_STREAM_COMPLETED /**< @brief Group is in STREAM_COMPLETED state*/
} Adc_StatusType;

/**
* @brief          ADC group notification.
* @details        Indicates if notification is enabled for the group.
*
*/
typedef enum
{
    ADC_NOTIFICATION_DISABLED = 0U, /**< @brief Notification is disabled */
    ADC_NOTIFICATION_ENABLED        /**< @brief Notification is enabled */
} Adc_NotificationType;

/**
* @brief          Adc hardware trigger edge.
* @details        Used for value received by Tressos interface configuration.
*
* @implements     Adc_HwTriggerSignalType_enum
* SWS_Adc_00520
*/

typedef enum
{
    ADC_HW_TRIG_RISING_EDGE = 0U, /**< @brief Rising edge */
    ADC_HW_TRIG_FALLING_EDGE,     /**< @brief Falling edge */
    ADC_HW_TRIG_BOTH_EDGES        /**< @brief falling and rising edge */
} Adc_HwTriggerSignalType;

/**
* @brief          Adc hardware trigger source.
* @details        Used for value received by Tressos interface configuration.
*
* @implements     Adc_TriggerSourceType_enum
* SWS_Adc_00514
*/
typedef enum
{
    ADC_TRIGG_SRC_SW = 0U /**< @brief Software triggered */
#if (ADC_HW_TRIGGER_API == STD_ON)
,
    ADC_TRIGG_SRC_HW      /**< @brief Hardware triggered */
#endif /* (ADC_HW_TRIGGER_API == STD_ON) */
} Adc_TriggerSourceType;

#if (STD_ON == ADC_HW_TRIGGER_API)
/**
* @brief          Adc Hardware trigger.
* @details        Indicates if hardware trigger is enabled for group.
*
*/
typedef enum
{
    ADC_HWTRIGGER_DISABLED = 0U, /**< @brief Hardware trigger is disabled */
    ADC_HWTRIGGER_ENABLED        /**< @brief Hardware trigger is enabled */
} Adc_HwTriggeringType;

#endif /* (STD_ON==ADC_HW_TRIGGER_API) */


/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
typedef void (*Adc_NotifyType)(void);     /**< @brief Notification function pointer definition */

/* SWS_Adc_00512 */
/** @implements     Adc_ResolutionType_uint */
typedef uint8 Adc_ResolutionType;         /**< @brief channel resolution in number of bits */

#if (ADC_PRIORITY_IMPLEMENTATION != ADC_PRIORITY_NONE)
/* SWS_Adc_00516 */
/** @implements     Adc_GroupPriorityType_uint */
typedef uint8 Adc_GroupPriorityType;      /**< @brief ADC Channel group priority */
#endif /* (ADC_PRIORITY_IMPLEMENTATION != ADC_PRIORITY_NONE) */

/* SWS_Adc_00517 */
/** @implements     Adc_GroupDefType_uint */
typedef Adc_ChannelType Adc_GroupDefType; /**< @brief definition of channels in a group */

/* SWS_Adc_00509 */
/** @implements     Adc_PrescaleType_uint */
typedef uint8 Adc_PrescaleType;           /**< @brief clock prescaler factor */

/* SWS_Adc_00511 */
/** @implements     Adc_SamplingTimeType_uint */
typedef uint8 Adc_SamplingTimeType;       /**< @brief sampling time */

/* SWS_Adc_00518 */
/** @implements     Adc_StreamNumSampleType_uint */
typedef uint16 Adc_StreamNumSampleType;   /**< @brief Number of samples of a streaming conversion buffer */

/**
* @brief          Structure for validation results
* @details        This structure contains the validation information
*
*/
typedef struct
{
    boolean bEndValidations; /**< @brief Signal if validation ended */
    Std_ReturnType ValidParams; /**< @brief Return status */
} Adc_ValidationResultType;

/**
* @brief          Structure for group status.
* @details        This structure contains the group status information.
*
*/
typedef struct
{
    volatile Adc_StatusType eConversion;   /**< @brief Group status */
    volatile Adc_GroupConversionStateType eAlreadyConverted;     /**< @brief Group was previously converted or not */
#if (ADC_HW_TRIGGER_API == STD_ON)
    Adc_HwTriggeringType eHwTriggering;   /**< @brief hw trigger enabled/disabled */
#endif /* ADC_HW_TRIGGER_API == STD_ON */
#if (ADC_GRP_NOTIF_CAPABILITY == STD_ON)
    Adc_NotificationType eNotification;   /**< @brief notification enabled/disabled */
#endif /* ADC_GRP_NOTIF_CAPABILITY == STD_ON */
    volatile Adc_StreamNumSampleType ResultIndex;  /**< @brief index into streaming buffer that is currently being filled */
#ifdef ADC_CURRENT_CHANNEL_USED
    Adc_ChannelIndexType CurrentChannel;  /**< @brief Current channel in use */
#endif /* ADC_CURRENT_CHANNEL_USED */
#if (ADC_ENABLE_LIMIT_CHECK == STD_ON)
    volatile boolean bLimitCheckFailed;   /**< @brief check limit check fail */
#endif /* ADC_ENABLE_LIMIT_CHECK == STD_ON */
} Adc_GroupStatusType;

/**
* @brief          Structure for hardware unit status.
* @details        This structure contains the HW unit status information.
*
*/
typedef struct
{
    /** @brief Filled slots in the queue */
    volatile Adc_QueueIndexType SwNormalQueueIndex;
    /** @brief Queued groups indexes, always executing Queue[0] */
    volatile Adc_GroupType SwNormalQueue[ADC_QUEUE_MAX_DEPTH_MAX];
#if (ADC_HW_TRIGGER_API == STD_ON)
    /** @brief Ongoing hardware group ID */
    volatile Adc_GroupType OngoingHwGroup;
#endif /* ADC_HW_TRIGGER_API == STD_ON */
#if (ADC_SOFTWARE_INJECTED_CONVERSIONS_USED == STD_ON)
    /** @brief The depth of the software injected queue */
    volatile Adc_GroupType SwInjectedQueue[1U];
    /** @brief Filled slots in the Sw injected queue */
    volatile Adc_QueueIndexType SwInjectedQueueIndex;
#endif /* (ADC_SOFTWARE_INJECTED_CONVERSIONS_USED == STD_ON) */
#if (ADC_ENABLE_CTU_CONTROL_MODE_API == STD_ON)
    /** @brief Indicates Ctu control mode is ongoing */
    boolean bCtuControlOngoing;
#endif /* ADC_ENABLE_CTU_CONTROL_MODE_API == STD_ON */
#if (ADC_PDB_AVAILABLE == STD_ON)
    uint8 u8Sc1Used;
#endif /* (ADC_PDB_AVAILABLE == STD_ON) */
} Adc_UnitStatusType;

#if (ADC_SETCHANNEL_API == STD_ON)
typedef struct
{
    /** @brief Run time assigned channels to group */
    const Adc_GroupDefType * pChannel;
    /** @brief Run time number of channels */
    Adc_ChannelIndexType ChannelCount;
    /** @brief Indicates whether the configuration has been updated or not */
    boolean bRuntimeUpdated;
#if (ADC_ENABLE_LIMIT_CHECK == STD_ON)
    /* @brief Indicates whether pChannel has channel with limit checking enabled */
    boolean bAdcRuntimeGroupLimitcheck;
#endif /* (ADC_ENABLE_LIMIT_CHECK == STD_ON) */
#if (ADC_PDB_AVAILABLE == STD_ON)
    /** @brief Run time assigned delay of channels group */
    const uint16 * pu16Delays;
    /** @brief Mask per channel - to be updated or not */
    uint32 u32Mask;
#endif /* (ADC_PDB_AVAILABLE == STD_ON) */
} Adc_RuntimeGroupChannelType;
#endif /* (ADC_SETCHANNEL_API == STD_ON) */

typedef struct
{
    const Adc_GroupType GroupId;                                /**< @brief Index of group */
    const Adc_HwUnitType AdcLogicalUnitId;                      /**< @brief The ADC Logical Unit Id that the group belongs to */
    const Adc_GroupAccessModeType eAccessMode;                  /**< @brief Access Mode */
    const Adc_GroupConvModeType eMode;                          /**< @brief Conversion Mode (OneShot/Continuous) */
    const Adc_GroupConvType eType;                              /**< @brief Conversion type (Normal/Injected) */
#if (ADC_PRIORITY_IMPLEMENTATION != ADC_PRIORITY_NONE)
    const Adc_GroupPriorityType Priority;                      /**< @brief Priority of group */
#endif /* (ADC_PRIORITY_IMPLEMENTATION != ADC_PRIORITY_NONE) */
    const Adc_GroupReplacementType eReplacementMode;           /**< @brief Replacement Mode */
    const Adc_TriggerSourceType eTriggerSource;                /**< @brief Hw/Sw trigger */
#if (STD_ON == ADC_HW_TRIGGER_API)
    const Adc_HwTriggerTimerType HwTriggerSource;               /**< @brief Hardware trigger source for the group */
    const Adc_HwTriggerSignalType eTriggerEdge;                 /**< @brief Hardware trigger edge */
    #if (ADC_CTU_AVAILABLE == STD_ON)
    const Adc_HwTriggerTimerType HwTriggerCompareValue;         /**< @brief Counter Compare Value to reload CTU Trigger */
    #endif /* (ADC_CTU_AVAILABLE == STD_ON) */
#endif /* (STD_ON == ADC_HW_TRIGGER_API) */
#if (STD_ON == ADC_GRP_NOTIF_CAPABILITY)
    /* SWS_Adc_00104 */
    const Adc_NotifyType Notification;                         /**< @brief Pointer to notification function */
#endif /* (STD_ON==ADC_GRP_NOTIF_CAPABILITY) */
#if (ADC_ENABLE_INITIAL_NOTIFICATION == STD_ON)
    /* CPR-MCAL-797.adc */
    const Adc_NotifyType ExtraNotification;                    /**< @brief Pointer to extra notification function */
#endif /* (ADC_ENABLE_INITIAL_NOTIFICATION == STD_ON) */

    /* SWS_Adc_00319, SWS_Adc_00318 */
    Adc_ValueGroupType ** pResultsBufferPtr; /**< @brief pointer to user result buffer array */
    const Adc_StreamBufferModeType eBufferMode;                /**< @brief Buffer Mode */
#if (ADC_ENABLE_CH_DISABLE_CH_NONAUTO_API == STD_ON)
    const Adc_GroupType EnableChDisableChGroupIndex;            /**< @brief Group's index if it has the support to enable/disable channel */
#endif /* (ADC_ENABLE_CH_DISABLE_CH_NONAUTO_API == STD_ON) */
    const Adc_StreamNumSampleType NumSamples;                  /**< @brief  Number of samples */
#if (ADC_ENABLE_GROUP_STREAMING_RESULTS_REORDER == STD_ON)
    const boolean bStreamResultGroupMultiSets;                 /**< @brief Arrange the results as multiple sets of group result buffer */
#endif /* (ADC_ENABLE_GROUP_STREAMING_RESULTS_REORDER == STD_ON) */
    const Adc_GroupDefType * pAssignment;                      /**< @brief Assigned channels to group */
    const Adc_ChannelIndexType AssignedChannelCount;           /**< @brief Number of channels */

    const Adc_ChannelType LastCh;                              /**< @brief Last channel configured */
    const Adc_ChannelType FirstCh;                             /**< @brief First channel configured */
    /* PR-MCAL-3229.adc */
    const uint8 u8AdcWithoutInterrupt;                         /**< @brief Enables or Disables the ADC and DMA interrupts */
    const uint8 u8AdcExtDMAChanEnable;                         /**< @brief Enables or Disables configuring external DMA channel in the group */
    const boolean u8AdcWithoutDma;                             /**< @brief When true, disables completely DMA configuration done by ADC driver for the group */
#if (STD_ON == ADC_OPTIMIZE_DMA_STREAMING_GROUPS)
    const boolean bAdcOptimizeDmaStream;                         /**< @brief Enables or Disables the ADC optimize DMA streaming groups feature */
    const boolean bHalfInterrupt;                              /**< @brief Enable half interrupt for optimize DMA streaming groups feature */
#endif
#if (ADC_ENABLE_LIMIT_CHECK == STD_ON)
    const boolean bAdcGroupLimitcheck;                          /**< @brief Enables or disables the usage of limit checking for an ADC group. */
#endif /* (ADC_ENABLE_LIMIT_CHECK == STD_ON) */
#ifndef ADC_CMR_REGISTER_NOT_SUPPORTED
    Adc_ChansIdxMaskType AssignedChannelMask;
#endif /* ADC_CMR_REGISTER_NOT_SUPPORTED */
#if (ADC_CTU_HW_TRIGGER_OPTIMIZATION == STD_ON)
    const uint8 u8CtuTrigListPos;                               /**< @brief First position of channel in BCTU channel list or CTU command list. */
#endif /* (ADC_CTU_HW_TRIGGER_OPTIMIZATION == STD_ON) */
#if ((ADC_SET_ADC_CONV_TIME_ONCE == STD_OFF) || (ADC_PDB_AVAILABLE == STD_ON))
    Adc_Ipw_GroupConfig const * pAdcIpwGroupConfig;
#endif /* ((ADC_SET_ADC_CONV_TIME_ONCE == STD_OFF) || (ADC_PDB_AVAILABLE == STD_ON)) */
} Adc_GroupConfigurationType;


/**
* @brief          Structure for ADC configuration.
* @details        Data structure containing the set of configuration parameters required
*                 for initializing the ADC Driver.
* @api
* @implements     Adc_ConfigType_struct
* SWS_Adc_00505
*/
typedef struct
{
    Adc_Ipw_Config const * pAdcIpwConfig;

    /** @brief Group configurations */
    const Adc_GroupConfigurationType * pGroups;
    /** @brief Total number of groups */
    Adc_GroupType GroupCount;
    /** @brief Miscellaneous configuration parameters */
    const uint16 * pGroupIdToIndexMap;
    /** @brief Configuration CoreID */
    uint32 u32CoreId;
    /**< @brief Assigned Partition*/
    const uint8 * pAssignmentPartition; /* generated from ECUC partition reference. TODO: check can be moved in configurator (check that core from AdcHwUnitEcucPartitionRef is among AdcEcucPartitionRef). TBD */
    /**< @brief Number of Partition */
    const uint8 AssignedPartitionCount; /* remove if pAssignmentPartition is removed */
} Adc_ConfigType;

/*==================================================================================================
                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/


/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */

#endif /* ADC_TYPES_H */
