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
*   @file    Adc.c
*   @implements      Adc.c_Artifact
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
#include "Adc.h"
#include "Adc_Ipw.h"
#include "Det.h"
#include "SchM_Adc.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define ADC_VENDOR_ID_C                         43
#define ADC_AR_RELEASE_MAJOR_VERSION_C          4
#define ADC_AR_RELEASE_MINOR_VERSION_C          4
#define ADC_AR_RELEASE_REVISION_VERSION_C       0
#define ADC_SW_MAJOR_VERSION_C                  1
#define ADC_SW_MINOR_VERSION_C                  0
#define ADC_SW_PATCH_VERSION_C                  0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Adc.c and Adc.h are of the same vendor */
#if (ADC_VENDOR_ID_C != ADC_VENDOR_ID)
#error "Adc.c and Adc.h have different vendor ids"
#endif

/* Check if Adc.c and Adc.h are of the same Autosar version */
#if ((ADC_AR_RELEASE_MAJOR_VERSION_C != ADC_AR_RELEASE_MAJOR_VERSION) || \
     (ADC_AR_RELEASE_MINOR_VERSION_C != ADC_AR_RELEASE_MINOR_VERSION) || \
     (ADC_AR_RELEASE_REVISION_VERSION_C != ADC_AR_RELEASE_REVISION_VERSION) \
    )
#error "AutoSar Version Numbers of Adc.c and Adc.h are different"
#endif

/* Check if Adc.c and Adc.h are of the same Software version */
#if ((ADC_SW_MAJOR_VERSION_C != ADC_SW_MAJOR_VERSION) || \
     (ADC_SW_MINOR_VERSION_C != ADC_SW_MINOR_VERSION) || \
     (ADC_SW_PATCH_VERSION_C != ADC_SW_PATCH_VERSION) \
    )
#error "Software Version Numbers of Adc.c and Adc.h are different"
#endif

/* Check if Adc.c and Adc_Ipw.h are of the same vendor */
#if (ADC_VENDOR_ID_C != ADC_VENDOR_ID_IPW_H)
    #error "Adc.c and Adc_Ipw.h have different vendor ids"
#endif

/* Check if Adc.c and Adc_Ipw.h are of the same Autosar version */
#if ((ADC_AR_RELEASE_MAJOR_VERSION_C != ADC_AR_RELEASE_MAJOR_VERSION_IPW_H) || \
     (ADC_AR_RELEASE_MINOR_VERSION_C != ADC_AR_RELEASE_MINOR_VERSION_IPW_H) || \
     (ADC_AR_RELEASE_REVISION_VERSION_C != ADC_AR_RELEASE_REVISION_VERSION_IPW_H) \
    )
#error "AutoSar Version Numbers of Adc.c and Adc_Ipw.h are different"
#endif

/* Check if Adc.c and Adc_Ipw.h are of the same Software version */
#if ((ADC_SW_MAJOR_VERSION_C != ADC_SW_MAJOR_VERSION_IPW_H) || \
     (ADC_SW_MINOR_VERSION_C != ADC_SW_MINOR_VERSION_IPW_H) || \
     (ADC_SW_PATCH_VERSION_C != ADC_SW_PATCH_VERSION_IPW_H) \
    )
#error "Software Version Numbers of Adc.c and Adc_Ipw.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if Adc.c and SchM_Adc.h are of the same Autosar version */
#if ((ADC_AR_RELEASE_MAJOR_VERSION_C != SCHM_ADC_AR_RELEASE_MAJOR_VERSION) || \
     (ADC_AR_RELEASE_MINOR_VERSION_C != SCHM_ADC_AR_RELEASE_MINOR_VERSION) \
    )
#error "AutoSar Version Numbers of Adc.c and SchM_Adc.h are different"
#endif

/* Check if Adc.c and Det.h are of the same Autosar version */
#if ((ADC_AR_RELEASE_MAJOR_VERSION_C != DET_AR_RELEASE_MAJOR_VERSION) || \
     (ADC_AR_RELEASE_MINOR_VERSION_C != DET_AR_RELEASE_MINOR_VERSION) \
    )
#error "AutoSar Version Numbers of Adc.c and Det.h are different"
#endif
#endif /* DISABLE_MCAL_INTERMODULE_ASR_CHECK */

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
/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

#define ADC_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "Adc_MemMap.h"

/**
* @brief          Global Configuration Pointer.
* @details        Data structure containing the set of configuration parameters required for
*                 initializing the ADC Driver and ADC HW Unit(s).
*
*/
const Adc_ConfigType * Adc_pCfgPtr[ADC_MAX_PARTITIONS];

#if (ADC_VALIDATE_GLOBAL_CALL == STD_ON)
/**
* @brief          Global Driver Status.
* @details        Data structure containing the ADC driver status
*                 uninit, during init or already init.
*
*/
static Adc_GlobalStateType Adc_eGlobalState[ADC_MAX_PARTITIONS];
#endif /* ADC_VALIDATE_GLOBAL_CALL == STD_ON */

#if (ADC_DUAL_CLOCK_MODE == STD_ON)
#if (ADC_SET_ADC_CONV_TIME_ONCE == STD_OFF)
/**
* @brief          Clock mode in use
* @details        The current used clock mode: normal or alternate clock.
*/
Adc_SelectPrescalerType Adc_eClockMode[ADC_MAX_PARTITIONS];
#endif /*if (ADC_SET_ADC_CONV_TIME_ONCE == STD_OFF)*/
#endif /*if (ADC_DUAL_CLOCK_MODE == STD_ON)*/

/**
* @brief          Group status array structure
* @details        Array to hold all the groups status information are indexed by group id.
*/
Adc_GroupStatusType Adc_aGroupStatus[ADC_MAX_GROUPS];

/**
* @brief          Unit status structure
* @details        Structure for the units status are indexed by logical id.
*/
Adc_UnitStatusType Adc_aUnitStatus[ADC_MAX_HW_UNITS];

/**
* @brief          Runtime group channels array
* @details        Hold the runtime group channels.
*/
#if (ADC_SETCHANNEL_API == STD_ON)
Adc_RuntimeGroupChannelType Adc_aRuntimeGroupChannel[ADC_MAX_GROUPS];
#endif /* (ADC_SETCHANNEL_API == STD_ON) */

#if (ADC_POWER_STATE_SUPPORTED == STD_ON)
static Adc_PowerStateType Adc_eCurrentState[ADC_MAX_PARTITIONS];
static Adc_PowerStateType Adc_eTargetState[ADC_MAX_PARTITIONS];
#endif /* (ADC_POWER_STATE_SUPPORTED == STD_ON) */

#if (ADC_ENABLE_CH_DISABLE_CH_NONAUTO_API == STD_ON)
/**
* @brief          Unit status structure
* @details        Structure for the unit status.
*
*/
Adc_ChansIdxMaskType Adc_aNCMRxMask[ADC_NO_OF_ENABLE_CH_DISABLE_CH_GROUPS]; /* TODO: rename to Adc_aRuntimeChansEnMask */
#endif /* ADC_ENABLE_CH_DISABLE_CH_NONAUTO_API == STD_ON */

#define ADC_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "Adc_MemMap.h"

#if (ADC_ENABLE_CTUTRIG_NONAUTO_API == STD_ON)
#define ADC_START_SEC_VAR_CLEARED_8
#include "Adc_MemMap.h"
/**
* @brief          Active BCTU triggers for the group in the HW queue
* @details        This array is used in Adc_Ipw_EnableCtuTrigger. For the group currently in the HW queue,
*                 if an element is 1 in this array, the corresponding trigger from the group's configuration structure
*                 has been activated.
*/
static uint8 Adc_au8CtuGroupTriggersActive[ADC_MAX_HW_UNITS][ADC_MAX_HARDWARE_TRIGGERS];

#define ADC_STOP_SEC_VAR_CLEARED_8
#include "Adc_MemMap.h"
#endif /* (ADC_ENABLE_CTUTRIG_NONAUTO_API == STD_ON) */

#if (ADC_ENABLE_TEMPSENSE_API == STD_ON)
#define ADC_START_SEC_VAR_CLEARED_BOOLEAN
#include "Adc_MemMap.h"

/**
* @brief          Temperature channel is on-going conversion or not
* @details        Temperature channel is on-going conversion or not
*/
static boolean bTempsenseInUsed;

#define ADC_STOP_SEC_VAR_CLEARED_BOOLEAN
#include "Adc_MemMap.h"
#endif /* (ADC_ENABLE_TEMPSENSE_API == STD_ON) */

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define ADC_START_SEC_CODE
#include "Adc_MemMap.h"

#if ((ADC_VALIDATE_PARAMS == STD_ON) && \
     ((ADC_ENABLE_START_STOP_GROUP_API == STD_ON) || \
      (ADC_HW_TRIGGER_API == STD_ON) || \
      (ADC_ENABLE_CTUTRIG_NONAUTO_API ==STD_ON) || \
      (ADC_ENABLE_CH_DISABLE_CH_NONAUTO_API == STD_ON) \
     ) \
    )
static inline Std_ReturnType Adc_ValidateExtraParams
(
    uint8 u8ServiceId,
    uint32 u32ErrorIdList,
    Adc_GroupType Group,
    uint32 u32CoreId
);
#endif

#if (ADC_VALIDATE_CALL_AND_GROUP == STD_ON)
static inline Std_ReturnType Adc_ValidateCallAndGroup
(
    uint8 u8ServiceId,
    Adc_GroupType Group,
    uint32 u32CoreId
);
#endif

#if (ADC_GRP_NOTIF_CAPABILITY == STD_ON)
#if (ADC_VALIDATE_NOTIFY_CAPABILITY == STD_ON)
static inline Std_ReturnType Adc_NotifyCapablity
(
    uint8 u8ServiceId,
    Adc_GroupType Group,
    uint32 u32CoreId
);
#endif
#endif

#if (ADC_DEV_ERROR_DETECT == STD_ON)
static inline void Adc_ReportDetError
(
    uint8 u8ServiceId,
    uint8 u8ErrorId
);

#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */
static inline void Adc_ReportDetRuntimeError
(
    uint8 u8ServiceId,
    uint8 u8ErrorId
);

#if ((ADC_DEV_ERROR_DETECT == STD_ON) && \
     ((ADC_ENABLE_START_STOP_GROUP_API == STD_ON) || \
      (ADC_HW_TRIGGER_API == STD_ON) || \
      (ADC_ENABLE_CTUTRIG_NONAUTO_API ==STD_ON) || \
      (ADC_ENABLE_CH_DISABLE_CH_NONAUTO_API == STD_ON) \
     ) \
    )
static void Adc_ReportValidationError
(
    Adc_ValidationResultType * pResult,
    uint8 u8ServiceId,
    uint8 u8ErrorId
);
#endif

#if (ADC_VALIDATE_GLOBAL_CALL == STD_ON)
static inline Std_ReturnType Adc_ValidateGloballCall
(
    uint8 u8ServiceId,
    uint32 u32CoreId
);
#endif

#if (ADC_VALIDATE_PARAMS == STD_ON)
static inline Std_ReturnType Adc_ValidatePtrInit
(
    const Adc_ConfigType * pConfigPtr
);

static inline Std_ReturnType Adc_ValidatePtr
(
    uint8 u8ServiceId,
    const void * pPtrVal
);

#if ((ADC_ENABLE_START_STOP_GROUP_API == STD_ON) || (ADC_HW_TRIGGER_API == STD_ON))
static inline void Adc_ValidateBufferUninit
(
    Adc_ValidationResultType * pReturnValue,
    uint8 u8ServiceId,
    Adc_GroupType Group,
    uint32 u32CoreId
);
#endif

#if ((ADC_ENABLE_START_STOP_GROUP_API == STD_ON) || \
     (ADC_HW_TRIGGER_API == STD_ON) || \
     (ADC_ENABLE_CTUTRIG_NONAUTO_API ==STD_ON) || \
     (ADC_ENABLE_CH_DISABLE_CH_NONAUTO_API == STD_ON) \
    )
static inline void Adc_ValidateTriggerSrc
(
    Adc_ValidationResultType * pReturnValue,
    uint8 u8ServiceId,
    Adc_GroupType Group,
    uint32 u32CoreId
);
#endif

#if (ADC_ENABLE_START_STOP_GROUP_API == STD_ON)
static inline void Adc_ValidateQueueNotFull
(
    Adc_ValidationResultType * pReturnValue,
    uint8 u8ServiceId,
    Adc_GroupType Group,
    uint32 u32CoreId
);
#endif /* (ADC_ENABLE_START_STOP_GROUP_API == STD_ON) */


#if (ADC_ENABLE_CH_DISABLE_CH_NONAUTO_API == STD_ON) || (ADC_HW_TRIGGER_API == STD_ON) || \
    (ADC_ENABLE_CTUTRIG_NONAUTO_API == STD_ON)
static inline void Adc_ValidateConvMode
(
    Adc_ValidationResultType * pReturnValue,
    uint8 u8ServiceId,
    Adc_GroupType Group,
    uint32 u32CoreId
);
#endif

#if (ADC_ENABLE_CH_DISABLE_CH_NONAUTO_API == STD_ON)
static inline void Adc_ValidateEnableDisbleGroupList
(
    Adc_ValidationResultType * pReturnValue,
    uint8 u8ServiceId,
    Adc_GroupType Group,
    uint32 u32CoreId
);

static inline Std_ReturnType Adc_ValidateEnableDisbleIdList
(
    uint8 u8ServiceId,
    Adc_GroupType Group,
    Adc_ChannelType Channel,
    uint32 u32CoreId
);
#endif

#if (ADC_CTU_CONTROL_MODE_EXTRA_APIS == STD_ON)
static inline Std_ReturnType Adc_ValidateCallAndTrigger
(
    uint8 u8ServiceId,
    uint8 u8Trigger,
    uint32 u32CoreId
);
#endif
#endif /* ADC_VALIDATE_PARAMS == STD_ON */

#if (ADC_SET_HW_UNIT_POWER_MODE_API == STD_ON)
static inline Std_ReturnType Adc_ValidateSetHwUnitPowerMode
(
    Adc_SetPowerModeType eSetHwUnitPowerMode,
    uint32 u32CoreId
);
#endif

#if (ADC_VALIDATE_GLOBAL_CALL == STD_ON)
static inline void Adc_EndValidateGloballCall
(
    Std_ReturnType ValidCall,
    uint8 u8ServiceId,
    uint32 u32CoreId
);
#endif

#if (ADC_DEINIT_API == STD_ON)
static inline Std_ReturnType Adc_ValidateDeInitNotBusy
(
    uint32 u32CoreId
);
#endif /* (ADC_DEINIT_API == STD_ON) */

static inline Std_ReturnType Adc_ValidateSetupBufferNotBusy
(
    Adc_GroupType Group
);

#if (ADC_ENABLE_START_STOP_GROUP_API == STD_ON)
static inline Std_ReturnType Adc_ValidateStateStartGroupConvNotBusy
(
    Adc_GroupType Group,
    uint32 u32CoreId
);
#endif /* (ADC_ENABLE_START_STOP_GROUP_API == STD_ON) */

#if ((ADC_HW_TRIGGER_API == STD_ON))
static inline Std_ReturnType Adc_ValidateStateEnableHwTriggNotBusy
(
    Adc_GroupType Group,
    uint32 u32CoreId
);
#endif /* ((ADC_HW_TRIGGER_API == STD_ON)) */

static inline Std_ReturnType Adc_ValidateStateNotIdle
(
    uint8 u8ServiceId,
    Adc_GroupType Group,
    uint32 u32CoreId
);

#if ((ADC_PRIORITY_IMPLEMENTATION != ADC_PRIORITY_NONE) && ((ADC_ENABLE_START_STOP_GROUP_API == STD_ON)))
static inline Std_ReturnType Adc_ValidateNotBusyWithPrio
(
    Adc_GroupType Group,
    boolean bImplicitly,
    uint32 u32CoreId
);
#endif /* ((ADC_PRIORITY_IMPLEMENTATION != ADC_PRIORITY_NONE) && ((ADC_ENABLE_START_STOP_GROUP_API == STD_ON))) */

#if ((ADC_HW_TRIGGER_API == STD_ON) || (ADC_ENABLE_CTUTRIG_NONAUTO_API == STD_ON))
static inline Std_ReturnType Adc_ValidateNotBusyEnableHwTrig
(
    uint8 u8ServiceId,
    Adc_GroupType Group,
    uint32 u32CoreId
);
#endif /* (ADC_HW_TRIGGER_API == STD_ON) */

#if ((ADC_PRIORITY_IMPLEMENTATION == ADC_PRIORITY_NONE) && (ADC_ENABLE_START_STOP_GROUP_API == STD_ON))
static inline Std_ReturnType Adc_ValidateNotBusyNoPrio
(
    Adc_GroupType Group,
    boolean bImplicitly,
    uint32 u32CoreId
);
#endif /* ((ADC_PRIORITY_IMPLEMENTATION == ADC_PRIORITY_NONE) && (ADC_ENABLE_START_STOP_GROUP_API == STD_ON)) */

#if (((ADC_HW_TRIGGER_API == STD_ON) && (ADC_ENABLE_QUEUING == STD_OFF)) \
      || ((ADC_DEINIT_API == STD_ON))        \
      ||  (ADC_CALIBRATION == STD_ON) || (ADC_DUAL_CLOCK_MODE == STD_ON) \
      || (ADC_SET_HW_UNIT_POWER_MODE_API == STD_ON) || (ADC_POWER_STATE_SUPPORTED == STD_ON) \
      || ((ADC_PRIORITY_IMPLEMENTATION == ADC_PRIORITY_NONE) && (ADC_ENABLE_START_STOP_GROUP_API == STD_ON) && (ADC_ENABLE_QUEUING == STD_OFF)) \
      || (ADC_ENABLE_CTU_CONTROL_MODE_API == STD_ON) || (ADC_POWER_STATE_SUPPORTED == STD_ON) \
      || (ADC_ENABLE_TEMPSENSE_API == STD_ON) || ((ADC_ENABLE_CTUTRIG_NONAUTO_API == STD_ON) && (ADC_ENABLE_QUEUING == STD_OFF)) \
    )
static inline Std_ReturnType Adc_ValidateNotBusyNoQueue
(
    Adc_HwUnitType Unit,
    uint8 u8ServiceId
);
#endif /* (((ADC_HW_TRIGGER_API == STD_ON) && ...  */

#if (((ADC_DEINIT_API == STD_ON)) \
      || (ADC_CALIBRATION == STD_ON) || (ADC_DUAL_CLOCK_MODE == STD_ON) || (ADC_SET_HW_UNIT_POWER_MODE_API == STD_ON) \
      || (ADC_ENABLE_TEMPSENSE_API == STD_ON) \
    )
static inline Std_ReturnType Adc_ValidateCheckGroupNotConversion
(
    uint8 u8ServiceId,
    uint32 u32CoreId
);
#endif /* (((ADC_DEINIT_API == STD_ON) ... */

#if (((ADC_ENABLE_READ_RAW_DATA_API == STD_ON) || (ADC_CALIBRATION == STD_ON) \
   || (ADC_GET_INJECTED_CONVERSION_STATUS_API == STD_ON) || defined(__DOXYGEN__) \
   || (ADC_ENABLE_CONFIGURE_THRESHOLD_NONAUTO_API == STD_ON) || (ADC_SELF_TEST == STD_ON) \
   || (ADC_ENABLE_CTU_CONTROL_MODE_API == STD_ON) || defined(ADC_WDG_SUPPORTED) \
   || (ADC_ENABLE_TEMPSENSE_API == STD_ON)) && (ADC_VALIDATE_CALL_AND_UNIT == STD_ON))
static inline Std_ReturnType Adc_ValidateCallAndUnit
(
    uint8 u8ServiceId,
    Adc_HwUnitType Unit,
    uint32 u32CoreId
);
#endif /* (ADC_VALIDATE_CALL_AND_UNIT == STD_ON) ... */

static inline void Adc_InitGroupsStatus
(
    uint32 u32CoreId
);

static inline void Adc_InitUnitStatus
(
    uint32 u32CoreId
);

#if ((ADC_ENABLE_START_STOP_GROUP_API == STD_ON) && (ADC_PRIORITY_IMPLEMENTATION != ADC_PRIORITY_NONE))
static inline Std_ReturnType Adc_InsertIntoQueue
(
    const Adc_HwUnitType Unit,
    Adc_GroupType Group,
    uint32 u32CoreId
);
#endif

#if (ADC_ENABLE_START_STOP_GROUP_API == STD_ON)
static inline void Adc_UpdateStatusStartConversion
(
    const Adc_GroupType Group,
    const Adc_HwUnitType Unit,
    uint32 u32CoreId
);

static inline Std_ReturnType Adc_StopSwGroupConversion
(
#if (ADC_ENABLE_QUEUING == STD_ON)
    Adc_QueueIndexType * RemovedPos,
#endif /* (ADC_ENABLE_QUEUING == STD_ON) */
    Adc_GroupType Group,
    Adc_HwUnitType Unit,
    uint32 u32CoreId
);

static inline void Adc_UpdateStatusStopConversion
(
    Adc_GroupType Group,
    Adc_HwUnitType Unit,
    uint32 u32CoreId
);
#endif

#if (ADC_READ_GROUP_API == STD_ON)
static inline void Adc_UpdateStatusReadGroup
(
    const Adc_GroupType Group,
    const boolean bFlag,
    uint32 u32CoreId
);

static inline void Adc_UpdateStatusReadGroupNoInt
(
    const Adc_GroupType Group,
    const boolean bFlag,
    uint32 u32CoreId
);

static inline void Adc_UpdateSwQueueIndexNoInt
(
    const Adc_GroupType Group,
    uint32 u32CoreId
);

static inline void Adc_UpdateStatusReadGroupInt
(
    const Adc_GroupType Group,
    uint32 u32CoreId
);
#endif

#if (ADC_HW_TRIGGER_API == STD_ON)
static inline void Adc_UpdateStatusEnableHardware
(
    Adc_GroupType Group,
    Adc_HwUnitType Unit
);

static inline void Adc_UpdateStatusDisableHardware
(
    Adc_GroupType Group,
    Adc_HwUnitType Unit
);
#endif

static inline void Adc_UpdateStatusAfterGetStream
(
    Adc_GroupType Group,
    uint32 u32CoreId
);

#if (ADC_ENABLE_CTU_CONTROL_MODE_API == STD_ON)
#if (ADC_DEV_ERROR_DETECT == STD_ON)
static inline Std_ReturnType Adc_ValidateUnitActive
(
    uint8 u8ServiceId,
    Adc_HwUnitType Unit,
    uint32 u32CoreId
);
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */
static inline Std_ReturnType Adc_ValidateStateCtuControlMode
(
    uint8 u8ServiceId,
    Adc_HwUnitType Unit
);
#endif /* (ADC_ENABLE_CTU_CONTROL_MODE_API == STD_ON) */

#if (ADC_POWER_STATE_SUPPORTED == STD_ON)
static inline Std_ReturnType Adc_ValidateStateAndPtr
(
    uint8 u8ServiceId,
    Adc_PowerStateRequestResultType * pResult,
    uint32 u32CoreId
);
static inline Std_ReturnType Adc_ValidateIdleState
(
    uint8 u8ServiceId,
    Adc_PowerStateRequestResultType * pResult,
    uint32 u32CoreId
);
static inline Std_ReturnType Adc_ValidatePowerStateSupport
(
    uint8 u8ServiceId,
    Adc_PowerStateType ePowerState,
    Adc_PowerStateRequestResultType * pResult
);
static inline Std_ReturnType Adc_ValidatePowerStatePrepare
(
    uint8 u8ServiceId,
    Adc_PowerStateRequestResultType * pResult,
    uint32 u32CoreId
);
#endif /* (ADC_POWER_STATE_SUPPORTED == STD_ON) */

static inline Std_ReturnType Adc_CheckCurrentCoreId
(
    const Adc_ConfigType * pCfgPtr,
    uint32 u32CoreId
);

#if (ADC_ENABLE_CTUTRIG_NONAUTO_API == STD_ON) || defined(__DOXYGEN__)
#if (ADC_DEV_ERROR_DETECT == STD_ON)
static inline Std_ReturnType Adc_CheckTriggerSourceRange
(
    uint8 u8ServiceId,
    Adc_HwTriggerTimerType TriggerSource,
    boolean bTriggFound
);
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */
#endif /* (ADC_ENABLE_CTUTRIG_NONAUTO_API == STD_ON) || defined(__DOXYGEN__) */

#if (ADC_SETCHANNEL_API == STD_ON)
#if (ADC_DEV_ERROR_DETECT == STD_ON)
static inline Std_ReturnType Adc_CheckSetChannelParams
(
    const Adc_GroupType Group,
#if (ADC_DELAY_AVAILABLE == STD_ON)
    const uint16 * Delays,
    const uint32 ChannelUpdateMask,
#endif /* (ADC_DELAY_AVAILABLE == STD_ON) */
    const Adc_ChannelIndexType NumberOfChannel
);
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */
#if ((ADC_HW_TRIGGER_API == STD_ON) && (ADC_CTU_TRIGGER_MODE_SUPPORTED == STD_ON))
static inline Std_ReturnType Adc_CheckSetChannelCtuTriggers
(
    const Adc_GroupType GroupIndex,
    const Adc_HwUnitType LogicalHwUnitId,
    const Adc_ChannelIndexType NumberOfChannel,
    const uint32 u32CoreId
);
#endif /* ((ADC_HW_TRIGGER_API == STD_ON) && (ADC_CTU_TRIGGER_MODE_SUPPORTED == STD_ON)) */
#endif /* (ADC_SETCHANNEL_API == STD_ON) */

#if ((ADC_DUAL_CLOCK_MODE == STD_ON) && (ADC_DEV_ERROR_DETECT == STD_ON))
static inline boolean Adc_CheckSetClockModeCoreAndParam
(
    const Adc_SelectPrescalerType Prescaler,
    const uint32 u32CoreId
);
#endif /* ((ADC_DUAL_CLOCK_MODE == STD_ON) && (ADC_DEV_ERROR_DETECT == STD_ON)) */

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
#if (ADC_DEV_ERROR_DETECT == STD_ON)
/**
* @brief      This function reports an development error to the Det module and records the failure in the local structure.
* @details    This function reports an development error to the Det module and records the failure in the local structure.
*
* @param[in]  u8ServiceId       The service id of the caller function
* @param[in]  u8ErrorId         The error id to be reported
*
* @return     void
* SWS_Adc_00377
*/
static inline void Adc_ReportDetError
(
    uint8 u8ServiceId,
    uint8 u8ErrorId
)
{
    (void)Det_ReportError((uint16)ADC_MODULE_ID, (uint8)0U, u8ServiceId, u8ErrorId);
}

#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */

/**
* @brief      This function reports an runtime error to the Det module and records the failure in the local structure.
* @details    This function reports an runtime error to the Det module and records the failure in the local structure.
*
* @param[in]  u8ServiceId       The service id of the caller function
* @param[in]  u8ErrorId         The error id to be reported
*
* @return     void
* SWS_Adc_00530
*/
static inline void Adc_ReportDetRuntimeError
(
    uint8 u8ServiceId,
    uint8 u8ErrorId
)
{
    (void)Det_ReportRuntimeError((uint16)ADC_MODULE_ID, (uint8)0U, u8ServiceId, u8ErrorId);
}

#if ((ADC_DEV_ERROR_DETECT == STD_ON) && \
     ((ADC_ENABLE_START_STOP_GROUP_API == STD_ON) || \
      (ADC_HW_TRIGGER_API == STD_ON) || \
      (ADC_ENABLE_CTUTRIG_NONAUTO_API ==STD_ON) || \
      (ADC_ENABLE_CH_DISABLE_CH_NONAUTO_API == STD_ON) \
     ) \
    )
/**
* @brief      This function reports an error to the Det module and records the failure in the local structure.
* @details    This function reports an error to the Det module and records the failure in the local structure.
*
* @param[in]  u8ServiceId       The service id of the caller function
* @param[in]  u8ErrorId         The error id to be reported
* @param[in]  pResult           Pointer to the structure where the failure must be recorded
*
* @return     void
*/
static void Adc_ReportValidationError
(
    Adc_ValidationResultType * pResult,
    uint8 u8ServiceId,
    uint8 u8ErrorId
)
{
    pResult->bEndValidations = TRUE;
    pResult->ValidParams = (Std_ReturnType)E_NOT_OK;

    Adc_ReportDetError(u8ServiceId, u8ErrorId);
}
#endif

#if (ADC_VALIDATE_GLOBAL_CALL == STD_ON)
/**
* @brief      This function validates the global call parameters.
* @details    This service is a non reentrant function used for validating the calls for functions
*               like Adc_Init, Adc_DeInit.
*
* @param[in]  u8ServiceId       The service id of the caller function
* @param[in]  u32CoreId         Current CoreID
*
* @return     Std_ReturnType  Standard return type.
* @retval     E_OK:           Valid call
* @retval     E_NOT_OK:       Invalid call
*
* @api
*
* @note       Non Re-entrant function.
* @implements  Adc_ValidateGlobalCall_Activity
*
*/
static inline Std_ReturnType Adc_ValidateGloballCall
(
    uint8 u8ServiceId,
    uint32 u32CoreId
)
{
    Std_ReturnType ValidState = (Std_ReturnType)E_NOT_OK;

    if (ADC_STATE_UNINIT == Adc_eGlobalState[u32CoreId])
    {
        if (ADC_INIT_ID == u8ServiceId)
        {
            ValidState = (Std_ReturnType)E_OK;
        }
        else
        {
            /* SWS_Adc_00154 */
            Adc_ReportDetError(u8ServiceId, (uint8)ADC_E_UNINIT);
        }
    }
    else
    {
        if (ADC_INIT_ID == u8ServiceId)
        {
            /* Error: ADC already initialized */
            /* SWS_Adc_00107 */
            Adc_ReportDetError(u8ServiceId, (uint8)ADC_E_ALREADY_INITIALIZED);
        }
        else
        {
            ValidState = (Std_ReturnType)E_OK;
        }
    }

    return ValidState;
}
#endif /* ADC_VALIDATE_GLOBAL_CALL == STD_ON */

#if (ADC_VALIDATE_PARAMS == STD_ON)
/**
* @brief      This function validates the global call parameters.
* @details    This service is a non reentrant function used for validating parameters
*               for Adc_Init.
*
* @param[in]  pConfigPtr   Pointer to configuration set in Variant PB
*                         (Variant PC requires a NULL_PTR).
*
* @return     Std_ReturnType  Standard return type.
* @retval     E_OK:           Valid parameter
* @retval     E_NOT_OK:       Invalid parameter
*
* @api
*
* @note       Non Reentrant function.
*
*/
static inline Std_ReturnType Adc_ValidatePtrInit
(
    const Adc_ConfigType * pConfigPtr
)
{
    Std_ReturnType ValidPtr = (Std_ReturnType)E_OK;

#if (ADC_PRECOMPILE_SUPPORT == STD_ON)
    /* ADC344 */
    if (NULL_PTR != pConfigPtr)
#else
    /* ADC343 */
    if (NULL_PTR == pConfigPtr)
#endif /* (ADC_PRECOMPILE_SUPPORT == STD_ON) */
    {
        ValidPtr = (Std_ReturnType)E_NOT_OK;
        Adc_ReportDetError((uint8)ADC_INIT_ID, (uint8) ADC_E_PARAM_POINTER);
    }
    return ValidPtr;
}

/**
* @brief      This function validates the pointer is NULL or not
* @details    This service is a reentrant function used for validating parameters
*
* @param[in]  PtrVal          Pointer to validate
* @param[in]  u8ServiceId     The service id of the caller function
*
* @return     Std_ReturnType  Standard return type.
* @retval     E_OK:           Valid parameter
* @retval     E_NOT_OK:       Invalid parameter
*
* @api
*
* @note       ...
* ADC_VALUEREADGROUP_ID
*/
static inline Std_ReturnType Adc_ValidatePtr
(
    uint8 u8ServiceId,
    const void * pPtrVal
)
{
    Std_ReturnType ValidPtr = (Std_ReturnType)E_OK;

    /* SWS_Adc_00458, SWS_Adc_00457, CPR_RTD_00264.adc */
    if (NULL_PTR == pPtrVal)
    {
        ValidPtr = (Std_ReturnType)E_NOT_OK;
        Adc_ReportDetError(u8ServiceId, (uint8)ADC_E_PARAM_POINTER);
    }

    return ValidPtr;
}

#if ((ADC_ENABLE_START_STOP_GROUP_API == STD_ON) || (ADC_HW_TRIGGER_API == STD_ON))
static inline void Adc_ValidateBufferUninit
(
    Adc_ValidationResultType * pReturnValue,
    uint8 u8ServiceId,
    Adc_GroupType Group,
    uint32 u32CoreId
)
{
    Adc_GroupType GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group];

    switch (u8ServiceId)
    {
        case ADC_STARTGROUPCONVERSION_ID:
#if (ADC_HW_TRIGGER_API == STD_ON)
        case ADC_ENABLEHARDWARETRIGGER_ID:
#endif /* ADC_HW_TRIGGER_API == STD_ON */
        {
            if (NULL_PTR == Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].pResultsBufferPtr[Group])
            {
                /* SWS_Adc_00425, SWS_Adc_00424 */
                Adc_ReportValidationError(pReturnValue, u8ServiceId, (uint8)ADC_E_BUFFER_UNINIT);
            }
            break;
        }
        default:
        {
            ; /* no-op */
            break;
        }
    }
}
#endif

#if ((ADC_ENABLE_START_STOP_GROUP_API == STD_ON) || \
     (ADC_HW_TRIGGER_API == STD_ON) || \
     (ADC_ENABLE_CTUTRIG_NONAUTO_API ==STD_ON) || \
     (ADC_ENABLE_CH_DISABLE_CH_NONAUTO_API == STD_ON) \
    )
static inline void Adc_ValidateTriggerSrc
(
    Adc_ValidationResultType * pReturnValue,
    uint8 u8ServiceId,
    Adc_GroupType Group,
    uint32 u32CoreId
)
{
    /* Get the mapping index of group in the current partition */
    Adc_GroupType GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group];

    switch (u8ServiceId)
    {
        case ADC_STARTGROUPCONVERSION_ID:
        case ADC_STOPGROUPCONVERSION_ID:
#if (ADC_ENABLE_CH_DISABLE_CH_NONAUTO_API == STD_ON)
        case ADC_ENABLE_CHANNEL_ID:
        case ADC_DISABLE_CHANNEL_ID:
#endif /* ADC_ENABLE_CH_DISABLE_CH_NONAUTO_API == STD_ON */
        {
            if (ADC_TRIGG_SRC_SW != Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].eTriggerSource)
            {
                /* SWS_Adc_00164, SWS_Adc_00133 */
                Adc_ReportValidationError(pReturnValue, u8ServiceId, (uint8)ADC_E_WRONG_TRIGG_SRC);
            }
            break;
        }
#if (ADC_HW_TRIGGER_API == STD_ON)
        case ADC_ENABLEHARDWARETRIGGER_ID:
        case ADC_DISABLEHARDWARETRIGGER_ID:
#if (ADC_ENABLE_CTUTRIG_NONAUTO_API == STD_ON)
        case ADC_ENABLECTUTRIGGER_ID:
        case ADC_DISABLECTUTRIGGER_ID:
#endif /* ADC_ENABLE_CTUTRIG_NONAUTO_API == STD_ON */
        {
            if (ADC_TRIGG_SRC_SW == (Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].eTriggerSource))
            {
                /* SWS_Adc_00136, SWS_Adc_00137 */
                Adc_ReportValidationError(pReturnValue, u8ServiceId, (uint8)ADC_E_WRONG_TRIGG_SRC);
            }
            break;
        }
#endif /* ADC_HW_TRIGGER_API == STD_ON */
        default:
        {
            ; /* no-op */
            break;
        }
    }
}
#endif

#if (ADC_ENABLE_START_STOP_GROUP_API == STD_ON)
static inline void Adc_ValidateQueueNotFull
(
    Adc_ValidationResultType * pReturnValue,
    uint8 u8ServiceId,
    Adc_GroupType Group,
    uint32 u32CoreId
)
{
    Adc_GroupType GroupIndex;
    Adc_HwUnitType LogicalHwUnitId = 0U;

    /* Get the mapping index of group in the current partition */
    GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group];
    LogicalHwUnitId = Adc_pCfgPtr[u32CoreId]->pGroups[(GroupIndex)].AdcLogicalUnitId;

    switch (u8ServiceId)
    {
        case ADC_STARTGROUPCONVERSION_ID:
        {
            if (ADC_CONV_TYPE_NORMAL == Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].eType)
            {
                if (Adc_aUnitStatus[LogicalHwUnitId].SwNormalQueueIndex >= ADC_QUEUE_MAX_DEPTH_MAX)
                {
                    Adc_ReportValidationError(pReturnValue, u8ServiceId, (uint8)ADC_E_QUEUE_FULL);
                }
            }
            break;
        }

        default:
        {
            ; /* no-op */
            break;
        }
    }
}
#endif /* (ADC_ENABLE_START_STOP_GROUP_API == STD_ON) */

#if (ADC_ENABLE_CH_DISABLE_CH_NONAUTO_API == STD_ON) || (ADC_HW_TRIGGER_API == STD_ON) || \
    (ADC_ENABLE_CTUTRIG_NONAUTO_API == STD_ON)
static inline void Adc_ValidateConvMode
(
    Adc_ValidationResultType * pReturnValue,
    uint8 u8ServiceId,
    Adc_GroupType Group,
    uint32 u32CoreId
)
{
    Adc_GroupType GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group];

    switch (u8ServiceId)
    {
#if (ADC_HW_TRIGGER_API == STD_ON)
        case ADC_ENABLEHARDWARETRIGGER_ID:
        case ADC_DISABLEHARDWARETRIGGER_ID:
#if (ADC_ENABLE_CTUTRIG_NONAUTO_API == STD_ON)
        case ADC_ENABLECTUTRIGGER_ID:
        case ADC_DISABLECTUTRIGGER_ID:
#endif /* ADC_ENABLE_CTUTRIG_NONAUTO_API == STD_ON */
        {
            if (ADC_CONV_MODE_CONTINUOUS == (Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].eMode))
            {
                /* SWS_Adc_00282, SWS_Adc_00281 */
                Adc_ReportValidationError(pReturnValue, u8ServiceId, (uint8)ADC_E_WRONG_CONV_MODE);
            }
            break;
        }
#endif /* ADC_HW_TRIGGER_API == STD_ON */
#if (ADC_ENABLE_CH_DISABLE_CH_NONAUTO_API == STD_ON)
        case ADC_ENABLE_CHANNEL_ID:
        case ADC_DISABLE_CHANNEL_ID:
        {
            if(ADC_CONV_TYPE_INJECTED == Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].eType)
            {
                Adc_ReportValidationError(pReturnValue, u8ServiceId, (uint8)ADC_E_WRONG_CONV_MODE);
            }
            break;
        }
#endif /* ADC_ENABLE_CH_DISABLE_CH_NONAUTO_API == STD_ON */

        default:
        {
            ; /* no-op */
            break;
        }
    }
}
#endif

#if (ADC_ENABLE_CH_DISABLE_CH_NONAUTO_API == STD_ON)
/** @brief @implements Adc_ValidateEnableDisbleGroupList_Activity */
static inline void Adc_ValidateEnableDisbleGroupList
(
    Adc_ValidationResultType * pReturnValue,
    uint8 u8ServiceId,
    Adc_GroupType Group,
    uint32 u32CoreId
)
{
    Adc_GroupType GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group];

    switch (u8ServiceId)
    {
        case ADC_ENABLE_CHANNEL_ID:
        case ADC_DISABLE_CHANNEL_ID:
        {
            if((Adc_GroupType)ADC_ENABLE_CH_DISABLE_CH_INVALID_GROUP_INDEX == \
               Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].EnableChDisableChGroupIndex
              )
            {
                Adc_ReportValidationError(pReturnValue, u8ServiceId, (uint8)ADC_E_WRONG_ENABLE_CH_DISABLE_CH_GROUP);
            }
            break;
        }
        default:
        {
            ; /* no-op */
            break;
        }
    }
}
#endif /* ADC_ENABLE_CH_DISABLE_CH_NONAUTO_API == STD_ON */

#if (ADC_ENABLE_CH_DISABLE_CH_NONAUTO_API == STD_ON)
/** @brief @implements Adc_ValidateEnableDisbleIdList_Activity */
static inline Std_ReturnType Adc_ValidateEnableDisbleIdList
(
    uint8 u8ServiceId,
    Adc_GroupType Group,
    Adc_ChannelType Channel,
    uint32 u32CoreId
)
{
    Adc_GroupType GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group];
    const Adc_GroupDefType * pGroupChIndexPtr;
    Adc_ChannelIndexType Index = 0U;
    boolean bChannelFound = FALSE;
    Std_ReturnType ReturnValue = (Std_ReturnType)E_NOT_OK;

    switch (u8ServiceId)
    {
        case ADC_ENABLE_CHANNEL_ID:
        case ADC_DISABLE_CHANNEL_ID:
        {
            pGroupChIndexPtr = Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].pAssignment;
            /* Check if ChannelId is valid: assigned to that group */
            for (Index = 0U; Index < Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].AssignedChannelCount; Index++)
            {
                if ((Adc_ChannelType)Channel == (Adc_ChannelType)pGroupChIndexPtr[Index])
                {
                    bChannelFound = TRUE;
                    break;
                }
            }
            if (TRUE == bChannelFound)
            {
                ReturnValue = (Std_ReturnType)E_OK;
            }
            else
            {
                Adc_ReportDetError(u8ServiceId, (uint8)ADC_E_WRONG_ENABLE_CH_DISABLE_CH_ID);
            }
            break;
        }

        default:
        {
            ; /* no-op */
            break;
        }
    }
    return ReturnValue;
}
#endif /* ADC_ENABLE_CH_DISABLE_CH_NONAUTO_API == STD_ON */

#if ((ADC_ENABLE_START_STOP_GROUP_API == STD_ON) || \
     (ADC_HW_TRIGGER_API == STD_ON) || \
     (ADC_ENABLE_CTUTRIG_NONAUTO_API ==STD_ON) || \
     (ADC_ENABLE_CH_DISABLE_CH_NONAUTO_API == STD_ON) \
    )
static inline Std_ReturnType Adc_ValidateExtraParams
(
    uint8 u8ServiceId,
    uint32 u32ErrorIdList,
    Adc_GroupType Group,
    uint32 u32CoreId
)
{
    Adc_ValidationResultType ValidationStatus;

    ValidationStatus.bEndValidations = FALSE;
    ValidationStatus.ValidParams = (Std_ReturnType)E_OK;

#if ((ADC_ENABLE_START_STOP_GROUP_API == STD_ON) || (ADC_HW_TRIGGER_API == STD_ON))
    if ((0U != (u32ErrorIdList&ADC_E_BUFFER_UNINIT_LIST)) && (FALSE == ValidationStatus.bEndValidations))
    {
        Adc_ValidateBufferUninit(&ValidationStatus, u8ServiceId, Group, u32CoreId);
    }
#endif
    if ((0U != (u32ErrorIdList&ADC_E_WRONG_TRIGG_SRC_LIST)) && (FALSE == ValidationStatus.bEndValidations))
    {
       Adc_ValidateTriggerSrc(&ValidationStatus, u8ServiceId, Group, u32CoreId);
    }
#if (ADC_ENABLE_START_STOP_GROUP_API == STD_ON)
    if ((0U != (u32ErrorIdList&ADC_E_QUEUE_FULL_LIST)) && (FALSE == ValidationStatus.bEndValidations))
    {
        Adc_ValidateQueueNotFull(&ValidationStatus, u8ServiceId, Group, u32CoreId);
    }
#endif
#if ((ADC_ENABLE_CH_DISABLE_CH_NONAUTO_API == STD_ON) || (ADC_HW_TRIGGER_API == STD_ON) || (ADC_ENABLE_CTUTRIG_NONAUTO_API == STD_ON))
    if ((0U != (u32ErrorIdList&ADC_E_WRONG_CONV_MODE_LIST)) && (FALSE == ValidationStatus.bEndValidations))
    {
        Adc_ValidateConvMode(&ValidationStatus, u8ServiceId, Group, u32CoreId);
    }
#endif

#if (ADC_ENABLE_CH_DISABLE_CH_NONAUTO_API == STD_ON)
    if ((0U != (u32ErrorIdList&ADC_E_WRONG_ENABLE_CH_DISABLE_CH_GROUP_LIST)) && (FALSE == ValidationStatus.bEndValidations))
    {
        Adc_ValidateEnableDisbleGroupList(&ValidationStatus, u8ServiceId, Group, u32CoreId);
    }
#endif /* ADC_ENABLE_CH_DISABLE_CH_NONAUTO_API == STD_ON */

    return ValidationStatus.ValidParams;
}
#endif

#if (ADC_CTU_CONTROL_MODE_EXTRA_APIS == STD_ON)
/** @brief @implements Adc_ValidateCallAndTrigger_Activity */
static inline Std_ReturnType Adc_ValidateCallAndTrigger
(
    uint8 u8ServiceId,
    uint8 u8Trigger,
    uint32 u32CoreId
)
{
    Std_ReturnType ReturnValue = (Std_ReturnType)E_OK;
    Std_ReturnType ValidCoreId = (Std_ReturnType)E_NOT_OK;

    if (NULL_PTR == Adc_pCfgPtr[u32CoreId])
    {
        Adc_ReportDetError(u8ServiceId, (uint8)ADC_E_UNINIT);
        ReturnValue = (Std_ReturnType)E_NOT_OK;
        (void)ValidCoreId;
    }
    else
    {
        ValidCoreId = Adc_CheckCurrentCoreId(Adc_pCfgPtr[u32CoreId], u32CoreId);
        if((Std_ReturnType)E_OK == ValidCoreId)
        {
            if ((uint8)ADC_IPW_MAX_CTU_TRIG_SOURCE_ID < u8Trigger)
            {
                Adc_ReportDetError(u8ServiceId, (uint8)ADC_E_WRONG_CTU_TRIGGER);
                ReturnValue = (Std_ReturnType)E_NOT_OK;
            }
            else
            {
                /* no-op*/
            }
        }
        else
        {
            /* CPR_RTD_00420.adc */
            Adc_ReportDetError(u8ServiceId, (uint8)ADC_E_PARAM_CONFIG);
            ReturnValue = (Std_ReturnType)E_NOT_OK;
        }
    }
    return ReturnValue;
}
#endif /* ADC_CTU_CONTROL_MODE_EXTRA_APIS == STD_ON */
#endif /* ADC_VALIDATE_PARAMS == STD_ON */

#if (ADC_SET_HW_UNIT_POWER_MODE_API == STD_ON)
/**
* @brief      This function validates the Adc_SetHwUnitPowerMode call.
* @details    This function validates the Adc_SetHwUnitPowerMode call.
*
* @param[in]  u8ServiceId   The service id of the caller function
* @param[in]  u32CoreId     Current CoreID
*
* @return     Std_ReturnType  Standard return type.
* @retval     E_OK:           The Adc_SetHwUnitPowerMode call is valid
* @retval     E_NOT_OK:       The Adc_SetHwUnitPowerMode call is not valid
*/
static inline Std_ReturnType Adc_ValidateSetHwUnitPowerMode
(
    Adc_SetPowerModeType eSetHwUnitPowerMode,
    uint32 u32CoreId
)
{
    Std_ReturnType SleepModeStatus = (Std_ReturnType)E_OK;
    Std_ReturnType ValidCoreId;

    if(NULL_PTR == Adc_pCfgPtr[u32CoreId])
    {
#if (ADC_DEV_ERROR_DETECT == STD_ON)
        /* Report error to DET */
        Adc_ReportDetError((uint8)ADC_SET_HW_UNIT_POWER_MODE_ID, (uint8)ADC_E_UNINIT);
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */
        SleepModeStatus = (Std_ReturnType)E_NOT_OK;
    }
    else
    {
        ValidCoreId = Adc_CheckCurrentCoreId(Adc_pCfgPtr[u32CoreId], u32CoreId);
        if((Std_ReturnType)E_OK == ValidCoreId)
        {
            if ((ADC_NORMAL_MODE != eSetHwUnitPowerMode) && (ADC_POWER_DOWN_MODE != eSetHwUnitPowerMode))
            {
                SleepModeStatus = (Std_ReturnType)E_NOT_OK;
                #if (ADC_DEV_ERROR_DETECT == STD_ON)
                Adc_ReportDetError((uint8)ADC_SET_HW_UNIT_POWER_MODE_ID, (uint8)ADC_E_SET_HW_UNIT_POWER_MODE);
                #endif
            }
        }
        else
        {
#if (ADC_DEV_ERROR_DETECT == STD_ON)
            /* CPR_RTD_00420.adc */
            Adc_ReportDetError((uint8)ADC_SET_HW_UNIT_POWER_MODE_ID, (uint8)ADC_E_PARAM_CONFIG);
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */
            SleepModeStatus = (Std_ReturnType)E_NOT_OK;
        }
    }
    return SleepModeStatus;
}
#endif /* ADC_SET_HW_UNIT_POWER_MODE_API == STD_ON */


#if (ADC_VALIDATE_GLOBAL_CALL == STD_ON)
/**
* @brief        This function ends the validation of the global call parameters.
* @details      This service is a non reentrant function used for end the validation the calls
*               for functions like Adc_Init, Adc_DeInit.
*
* @param[in]    ValidCall validity of the call
* @param[in]    u8ServiceId The service id of the caller function
* @param[in]    u32CoreId    Current CoreID
*
* @return void
*/
static inline void Adc_EndValidateGloballCall
(
    Std_ReturnType ValidCall,
    uint8 u8ServiceId,
    uint32 u32CoreId
)
{
    if ((Std_ReturnType)E_OK == ValidCall)
    {
        if (ADC_DEINIT_ID == u8ServiceId)
        {
            Adc_eGlobalState[u32CoreId] = ADC_STATE_UNINIT;
        }
        else
        {
            Adc_eGlobalState[u32CoreId] = ADC_STATE_IDLE;
        }
    }
}
#endif /* ADC_VALIDATE_GLOBAL_CALL == STD_ON */

#if ((ADC_PRIORITY_IMPLEMENTATION != ADC_PRIORITY_NONE) && ((ADC_ENABLE_START_STOP_GROUP_API == STD_ON)))
/**
* @brief        This function validates the state of a group when priorities are used.
* @details      This service is a non reentrant function used for validating the state of a group
*                when priorities are used
*
* @param[in]    Group         The group id
* @param[in]    bImplicitly    Indicates if the group can be implicitly stopped
* @param[in]    u32CoreId    Current CoreID
*
* @return     Std_ReturnType  Standard return type.
* @retval     E_OK:           The call is valid
* @retval     E_NOT_OK:       The call is not valid
*/
static inline Std_ReturnType Adc_ValidateNotBusyWithPrio
(
    Adc_GroupType Group,
    boolean bImplicitly,
    uint32 u32CoreId
)
{
    boolean bFlag = FALSE;
    Adc_QueueIndexType Index = 0U;
    Std_ReturnType ValidState = (Std_ReturnType)E_NOT_OK;
    Adc_GroupType GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group];
    Adc_HwUnitType LogicalHwUnitId = Adc_pCfgPtr[u32CoreId]->pGroups[(GroupIndex)].AdcLogicalUnitId;
    Adc_QueueIndexType SwNormalQueueIndex;
    Adc_StatusType eConversion;

    if (Adc_aUnitStatus[LogicalHwUnitId].SwNormalQueueIndex > (Adc_QueueIndexType)0U)
    {
        for (Index = 0U; Index < Adc_aUnitStatus[LogicalHwUnitId].SwNormalQueueIndex; Index++)
        {
            if (Group == Adc_aUnitStatus[LogicalHwUnitId].SwNormalQueue[Index])
            {
                bFlag = TRUE;
                break;
            }
        }
    }
    SwNormalQueueIndex = Adc_aUnitStatus[LogicalHwUnitId].SwNormalQueueIndex;
    eConversion = Adc_aGroupStatus[Group].eConversion;
    /* SWS_Adc_00348 */
    if ((((Group == Adc_aUnitStatus[LogicalHwUnitId].SwNormalQueue[0U]) && (SwNormalQueueIndex > (Adc_QueueIndexType)0U)) || (TRUE == bFlag)) && \
        (FALSE == bImplicitly) \
       )
    {
        Adc_ReportDetRuntimeError((uint8)ADC_STARTGROUPCONVERSION_ID, (uint8)ADC_E_BUSY);
    }
    /* SWS_Adc_00427 */
    else if (((eConversion != ADC_IDLE) && (eConversion != ADC_STREAM_COMPLETED)) && \
             (TRUE == bImplicitly) \
            )
    {
        Adc_ReportDetRuntimeError((uint8)ADC_STARTGROUPCONVERSION_ID, (uint8)ADC_E_BUSY);
    }
    else
    {
        ValidState = (Std_ReturnType)E_OK;
    }
    return ValidState;
}
#endif /*(ADC_PRIORITY_IMPLEMENTATION != ADC_PRIORITY_NONE) && ((ADC_ENABLE_START_STOP_GROUP_API == STD_ON)) */

#if (((ADC_HW_TRIGGER_API == STD_ON) && (ADC_ENABLE_QUEUING == STD_OFF)) \
      || ((ADC_DEINIT_API == STD_ON))        \
      ||  (ADC_CALIBRATION == STD_ON) || (ADC_DUAL_CLOCK_MODE == STD_ON) \
      || (ADC_SET_HW_UNIT_POWER_MODE_API == STD_ON) || (ADC_POWER_STATE_SUPPORTED == STD_ON) \
      || ((ADC_PRIORITY_IMPLEMENTATION == ADC_PRIORITY_NONE) && (ADC_ENABLE_START_STOP_GROUP_API == STD_ON) && (ADC_ENABLE_QUEUING == STD_OFF)) \
      || (ADC_ENABLE_CTU_CONTROL_MODE_API == STD_ON) || (ADC_POWER_STATE_SUPPORTED == STD_ON) \
      || (ADC_ENABLE_TEMPSENSE_API == STD_ON) || ((ADC_ENABLE_CTUTRIG_NONAUTO_API == STD_ON) && (ADC_ENABLE_QUEUING == STD_OFF)) \
    )
/**
* @brief        This function validates the state of a group when the queue is not used.
* @details      This service is a non reentrant function used for validating the state of a group
*                when the queue is not used
*
* @param[in]    Unit          The Logical Unit Id
* @param[in]    Group         The group id
*
* @return     Std_ReturnType  Standard return type.
* @retval     E_OK:           The call means that unit is not busy
* @retval     E_NOT_OK:       The call means that unit is busy
*/
static inline Std_ReturnType Adc_ValidateNotBusyNoQueue
(
    Adc_HwUnitType Unit,
    uint8 u8ServiceId
)
{
    Std_ReturnType ErrorFound = (Std_ReturnType)E_OK;
#if (ADC_HW_TRIGGER_API == STD_ON)
    Adc_GroupType OngoingHwGroupId;
#endif /* (ADC_HW_TRIGGER_API == STD_ON) */
    Adc_GroupType NoGroupsInSwNormalQueue;
#if (ADC_SOFTWARE_INJECTED_CONVERSIONS_USED == STD_ON)
    Adc_GroupType NoGroupsInSwInjectedQueue;

    NoGroupsInSwInjectedQueue = Adc_aUnitStatus[Unit].SwInjectedQueueIndex;
#endif /* (ADC_SOFTWARE_INJECTED_CONVERSIONS_USED == STD_ON) */
    /* Get HW and SW queue sizes */
    NoGroupsInSwNormalQueue = Adc_aUnitStatus[Unit].SwNormalQueueIndex;
#if (ADC_HW_TRIGGER_API == STD_ON)
    OngoingHwGroupId = Adc_aUnitStatus[Unit].OngoingHwGroup;
#endif /* (ADC_HW_TRIGGER_API == STD_ON) */
    /* CPR_RTD_00035.adc, CPR_RTD_00325.adc, CPR_RTD_00326.adc, CPR_RTD_00327.adc */
    /* Check for ongoing conversions */
    if ((NoGroupsInSwNormalQueue > (Adc_QueueIndexType)0U)
#if (ADC_SOFTWARE_INJECTED_CONVERSIONS_USED == STD_ON)
        || (NoGroupsInSwInjectedQueue > (Adc_QueueIndexType)0U)
#endif /* (ADC_SOFTWARE_INJECTED_CONVERSIONS_USED == STD_ON) */
#if (ADC_HW_TRIGGER_API == STD_ON)
        || (OngoingHwGroupId != ADC_INVALID_HW_GROUP_ID)
#endif /* (ADC_HW_TRIGGER_API == STD_ON) */
       )
    {
        /* SWS_Adc_00321, SWS_Adc_00346, SWS_Adc_00426 */
        Adc_ReportDetRuntimeError(u8ServiceId, (uint8)ADC_E_BUSY);
        ErrorFound = (Std_ReturnType)E_NOT_OK;
    }
    return ErrorFound;
}
#endif

#if ((ADC_HW_TRIGGER_API == STD_ON) || (ADC_ENABLE_CTUTRIG_NONAUTO_API == STD_ON))
/**
* @brief        This function validates the state of a group when the hardware trigger is enabled.
* @details      This service is a non reentrant function used for validating the state of a group
*                when the hardware trigger is enabled.
*
* @param[in]    Group         The group id
* @param[in]    u32CoreId     Current CoreID
*
* @return     Std_ReturnType  Standard return type.
* @retval     E_OK:           The call is valid
* @retval     E_NOT_OK:       The call is not valid
*/
static inline Std_ReturnType Adc_ValidateNotBusyEnableHwTrig
(
    uint8 u8ServiceId,
    Adc_GroupType Group,
    uint32 u32CoreId
)
{
    Adc_GroupType GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group];
    Std_ReturnType ValidState = (Std_ReturnType)E_NOT_OK;
    Adc_HwUnitType LogicalHwUnitId = Adc_pCfgPtr[u32CoreId]->pGroups[(GroupIndex)].AdcLogicalUnitId;
#if (ADC_ENABLE_QUEUING == STD_ON)
    Adc_QueueIndexType NoGroupsInSwNormalQueue;
    Adc_GroupConvType eGroupType;
    Adc_GroupType OngoingHwGroupId;
#if (ADC_SOFTWARE_INJECTED_CONVERSIONS_USED == STD_ON)
    Adc_QueueIndexType NoGroupsInSwInjectedQueue;

    NoGroupsInSwInjectedQueue = Adc_aUnitStatus[LogicalHwUnitId].SwInjectedQueueIndex;
#endif /* (ADC_SOFTWARE_INJECTED_CONVERSIONS_USED == STD_ON) */
    /* Get HW and SW queue sizes */
    NoGroupsInSwNormalQueue = Adc_aUnitStatus[LogicalHwUnitId].SwNormalQueueIndex;
    eGroupType = Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].eType;
    OngoingHwGroupId = Adc_aUnitStatus[LogicalHwUnitId].OngoingHwGroup;
#endif /* ADC_ENABLE_QUEUING == STD_ON  */

#if (ADC_ENABLE_QUEUING == STD_OFF)
    ValidState = Adc_ValidateNotBusyNoQueue(LogicalHwUnitId, u8ServiceId);
#else
    switch (u8ServiceId)
    {
        case ADC_ENABLEHARDWARETRIGGER_ID:
        {
            /* It's possible to run (normal HW - injected SW) or (injected HW - normal SW) combination */
            if ((ADC_INVALID_HW_GROUP_ID == OngoingHwGroupId) &&
                (
#if (ADC_SOFTWARE_INJECTED_CONVERSIONS_USED == STD_ON)
                    ((ADC_CONV_TYPE_INJECTED == eGroupType) && (0U == NoGroupsInSwInjectedQueue)) ||
#endif /* (ADC_SOFTWARE_INJECTED_CONVERSIONS_USED == STD_ON) */
                    ((ADC_CONV_TYPE_NORMAL == eGroupType) && (0U == NoGroupsInSwNormalQueue)) \
                ) \
            )
            {
                ValidState = (Std_ReturnType)E_OK;
            }
            break;
        }
#if (ADC_ENABLE_CTUTRIG_NONAUTO_API == STD_ON)
        case ADC_ENABLECTUTRIGGER_ID:
        {
            /* CTU trigger is injected conversion so can be run with normal SW groups */
            /* It allows to have multiple BCTU trigger source enabled for one group */
#if (ADC_SOFTWARE_INJECTED_CONVERSIONS_USED == STD_ON)
            if (0U == NoGroupsInSwInjectedQueue)
            {
#endif /* (ADC_SOFTWARE_INJECTED_CONVERSIONS_USED == STD_ON) */
                if (ADC_INVALID_HW_GROUP_ID == OngoingHwGroupId)
                {
                    ValidState = (Std_ReturnType)E_OK;
                }
                else if ((Group == OngoingHwGroupId) && (ADC_HWTRIGGER_ENABLED != Adc_aGroupStatus[OngoingHwGroupId].eHwTriggering))
                {
                    ValidState = (Std_ReturnType)E_OK;
                }
                else
                {
                    ; /* Empty else branch to avoid MISRA */
                }
#if (ADC_SOFTWARE_INJECTED_CONVERSIONS_USED == STD_ON)
            }
#endif /* (ADC_SOFTWARE_INJECTED_CONVERSIONS_USED == STD_ON) */
            break;
        }
#endif /* ADC_ENABLE_CTUTRIG_NONAUTO_API == STD_ON */
        default:
        {
            ; /* no-op */
            break;
        }
    }

    if ((Std_ReturnType) E_NOT_OK == ValidState)
    {
        /* SWS_Adc_00353 */
        Adc_ReportDetRuntimeError((uint8)u8ServiceId, (uint8)ADC_E_BUSY);
    }
#endif /* ADC_ENABLE_QUEUING == STD_OFF  */

    return ValidState;
}
#endif /* (ADC_HW_TRIGGER_API == STD_ON)*/

#if ((ADC_PRIORITY_IMPLEMENTATION == ADC_PRIORITY_NONE) && (ADC_ENABLE_START_STOP_GROUP_API == STD_ON))
/**
* @brief        This function validates the state of a group when priorities are not used.
* @details      This service is a non reentrant function used for validating the state of a group
*                when priorities are not used
*
* @param[in]    Unit          The hardware unit
* @param[in]    Group         The group id
* @param[in]    bImplicitly   Indicates if the group can be implicitly stopped
* @param[in]    u32CoreId     Current CoreID
*
* @return     Std_ReturnType  Standard return type.
* @retval     E_OK:           The call is valid
* @retval     E_NOT_OK:       The call is not valid
*/
static inline Std_ReturnType Adc_ValidateNotBusyNoPrio
(
    Adc_GroupType Group,
    boolean bImplicitly,
    uint32 u32CoreId
)
{
    Std_ReturnType ValidState = (Std_ReturnType)E_NOT_OK;
#if (ADC_ENABLE_QUEUING == STD_OFF)
    Adc_GroupType GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group];
    Adc_HwUnitType LogicalHwUnitId = Adc_pCfgPtr[u32CoreId]->pGroups[(GroupIndex)].AdcLogicalUnitId;
#else /* ADC_ENABLE_QUEUING == STD_ON */
    Adc_StatusType eConversion;
#endif

#if (ADC_ENABLE_QUEUING == STD_OFF)
    /* All queue need to be empty */
    ValidState =  Adc_ValidateNotBusyNoQueue(LogicalHwUnitId, ADC_STARTGROUPCONVERSION_ID);

    (void)bImplicitly;
    (void)Group;
#else /* ADC_ENABLE_QUEUING == STD_ON */
    eConversion = Adc_aGroupStatus[Group].eConversion;
    /* SWS_Adc_00351 */
    if ((FALSE == bImplicitly) && (ADC_IDLE != eConversion))
    {
        Adc_ReportDetRuntimeError((uint8)ADC_STARTGROUPCONVERSION_ID, (uint8)ADC_E_BUSY);
    }
    /* SWS_Adc_00428 */
    else if ((TRUE == bImplicitly) && (ADC_IDLE != eConversion) && \
             (ADC_STREAM_COMPLETED != eConversion) \
            )
    {
        Adc_ReportDetRuntimeError((uint8)ADC_STARTGROUPCONVERSION_ID, (uint8)ADC_E_BUSY);
    }
    else
    {
        ValidState = (Std_ReturnType)E_OK;
    }
    (void)u32CoreId;
#endif /* ADC_ENABLE_QUEUING */

    return ValidState;
}
#endif /* (ADC_PRIORITY_IMPLEMENTATION == ADC_PRIORITY_NONE) */

#if (((ADC_DEINIT_API == STD_ON)) \
      || (ADC_CALIBRATION == STD_ON) || (ADC_DUAL_CLOCK_MODE == STD_ON) || (ADC_SET_HW_UNIT_POWER_MODE_API == STD_ON) \
      || (ADC_ENABLE_TEMPSENSE_API == STD_ON) \
    )
/**
* @brief        This function validates the state of all group.
* @details      This service is a non reentrant function used for validating the state of all group
*
* @param[in]    u8ServiceId     The service id of the caller function
* @param[in]    u32CoreId       Current CoreID
*
* @return       Std_ReturnType  Standard return type.
* @retval       E_OK:           The call means that at least one group is not busy
* @retval       E_NOT_OK:       The call means that at least one group is busy
*/
static inline Std_ReturnType Adc_ValidateCheckGroupNotConversion
(
    uint8 u8ServiceId,
    uint32 u32CoreId
)
{
    Adc_StatusType eConversion;
    Adc_GroupType GroupIter;
    Adc_GroupType GroupId;
    Std_ReturnType ErrorFound = (Std_ReturnType)E_OK;

    for (GroupIter = 0U; GroupIter < (Adc_GroupType)Adc_pCfgPtr[u32CoreId]->GroupCount; GroupIter++)
    {
        GroupId = Adc_pCfgPtr[u32CoreId]->pGroups[GroupIter].GroupId;
        eConversion = Adc_aGroupStatus[GroupId].eConversion;
        /*  Check if ADC is still converting */
        /* SWS_Adc_00112 */
        if((ADC_IDLE != eConversion) && (ADC_STREAM_COMPLETED != eConversion))
        {
            Adc_ReportDetRuntimeError(u8ServiceId, (uint8)ADC_E_BUSY);
            ErrorFound = (Std_ReturnType)E_NOT_OK;
        }
    }
    return ErrorFound;
}
#endif /* (((ADC_DEINIT_API == STD_ON)) ... */

#if (ADC_DEINIT_API == STD_ON)
/**
* @brief        This function validates the state of a group when De-init (should not be busy).
* @details      This service is a non reentrant function used for validating the state of a group
*
* @param[in]    void
*
* @return     Std_ReturnType  Standard return type.
* @retval     E_OK:           The call is valid
* @retval     E_NOT_OK:       The call is not valid
*/
static inline Std_ReturnType Adc_ValidateDeInitNotBusy
(
    uint32 u32CoreId
)
{
    Std_ReturnType ErrorFound = (Std_ReturnType)E_OK;
    Std_ReturnType ValidState = (Std_ReturnType)E_NOT_OK;
    Adc_HwUnitType LogicalHwUnitId = 0U;

    for(LogicalHwUnitId = 0U; LogicalHwUnitId < ADC_MAX_HW_UNITS; LogicalHwUnitId++)
    {
        if(Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->Mapping.au8Adc_HwUnit[LogicalHwUnitId] == (uint8)STD_ON) /* HW unit enabled on current partition */
        {
            ErrorFound = Adc_ValidateNotBusyNoQueue(LogicalHwUnitId, ADC_DEINIT_ID);
            if ((Std_ReturnType)E_NOT_OK == ErrorFound)
            {
                break;
            }
        }
    }
    if ((Std_ReturnType)E_OK == ErrorFound)
    {
        if ((Std_ReturnType)E_OK == Adc_ValidateCheckGroupNotConversion(ADC_DEINIT_ID, u32CoreId))
        {
            ValidState = (Std_ReturnType)E_OK;
        }
    }

    return ValidState;
}

#endif /* (ADC_DEINIT_API == STD_ON) */
/**
* @brief        This function validates the state of a group when Setup result buffer (should not be busy).
* @details      This service is a non reentrant function used for validating the state of a group
*
* @param[in]    Group         The group id
*
* @return     Std_ReturnType  Standard return type.
* @retval     E_OK:           The call is valid
* @retval     E_NOT_OK:       The call is not valid
*/
static inline Std_ReturnType Adc_ValidateSetupBufferNotBusy
(
    Adc_GroupType Group
)
{
    Std_ReturnType ValidState = (Std_ReturnType)E_NOT_OK;

    if (ADC_IDLE != Adc_aGroupStatus[Group].eConversion)
    {
        /* SWS_Adc_00433 */
        Adc_ReportDetRuntimeError(ADC_SETUPRESULTBUFFER_ID, (uint8)ADC_E_BUSY);
    }
    else
    {
        ValidState = (Std_ReturnType)E_OK;
    }
    return ValidState;
}

#if (ADC_ENABLE_START_STOP_GROUP_API == STD_ON)
/**
* @brief        This function validates the state of a group when start group conversion (should not be busy).
* @details      This service is a non reentrant function used for validating the state of a group
*
* @param[in]    Group         The group id
* @param[in]    u32CoreId       Current CoreID
*
* @return     Std_ReturnType  Standard return type.
* @retval     E_OK:           The call is valid
* @retval     E_NOT_OK:       The call is not valid
*/
static inline Std_ReturnType Adc_ValidateStateStartGroupConvNotBusy
(
    Adc_GroupType Group,
    uint32 u32CoreId
)
{
    Adc_GroupType GroupIndex;
    Std_ReturnType ValidState = (Std_ReturnType)E_OK;
    boolean bImplicitly = FALSE;
#if ((STD_ON == ADC_HW_TRIGGER_API) || (ADC_SOFTWARE_INJECTED_CONVERSIONS_USED == STD_ON) || \
    (ADC_ENABLE_CTU_CONTROL_MODE_API == STD_ON))
    Adc_HwUnitType LogicalHwUnitId = 0U;
#endif /* ((STD_ON == ADC_HW_TRIGGER_API) || ... */
#if (STD_ON == ADC_HW_TRIGGER_API)
    Adc_GroupConvType eTypeSwGroup;
    Adc_GroupType OngoingHwGroupId;
    Adc_GroupType HwGroupId;
    Adc_GroupConvType eTypeHwGroup;
#endif /* (STD_ON == ADC_HW_TRIGGER_API) */

    /* Get the mapping index of group in the current partition */
    GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group];
    if ((ADC_CONV_MODE_ONESHOT == Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].eMode) || \
        ((ADC_CONV_MODE_CONTINUOUS == Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].eMode) && \
        (ADC_ACCESS_MODE_STREAMING == Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].eAccessMode) && \
        (ADC_STREAM_BUFFER_LINEAR == Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].eBufferMode)
        )
       )
    {
        /* The current group can be implicitly stopped */
        bImplicitly = TRUE;
    }

#if ((STD_ON == ADC_HW_TRIGGER_API) || (ADC_SOFTWARE_INJECTED_CONVERSIONS_USED == STD_ON) || \
    (ADC_ENABLE_CTU_CONTROL_MODE_API == STD_ON))
    /* Get the unit to which the group belongs to */
    LogicalHwUnitId = Adc_pCfgPtr[u32CoreId]->pGroups[(GroupIndex)].AdcLogicalUnitId;
#endif /* ((STD_ON == ADC_HW_TRIGGER_API) || ... */

#if (STD_ON == ADC_HW_TRIGGER_API)
    OngoingHwGroupId = Adc_aUnitStatus[LogicalHwUnitId].OngoingHwGroup;
#endif /* (STD_ON==ADC_HW_TRIGGER_API) */

#if (ADC_SOFTWARE_INJECTED_CONVERSIONS_USED == STD_ON)
    /* Check for ongoing injected conversion */
    if (Adc_aUnitStatus[LogicalHwUnitId].SwInjectedQueueIndex != (Adc_QueueIndexType)0U)
    {
        ValidState = (Std_ReturnType)E_NOT_OK;
    }
#endif /* (ADC_SOFTWARE_INJECTED_CONVERSIONS_USED == STD_ON) */
#if (STD_ON == ADC_HW_TRIGGER_API)
    if (ADC_INVALID_HW_GROUP_ID != OngoingHwGroupId)
    {
        eTypeSwGroup = Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].eType;
        HwGroupId = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[OngoingHwGroupId];
        eTypeHwGroup = Adc_pCfgPtr[u32CoreId]->pGroups[HwGroupId].eType;
        /* SW Injected conversions should be entertained only if there are no other HW or CTU injected chains enabled, same as Sw normal conversions */
        if (((ADC_CONV_TYPE_INJECTED == eTypeSwGroup) && (ADC_CONV_TYPE_INJECTED == eTypeHwGroup)) || \
            ((ADC_CONV_TYPE_NORMAL == eTypeSwGroup) && (ADC_CONV_TYPE_NORMAL == eTypeHwGroup)) \
           )
        {
            ValidState = (Std_ReturnType)E_NOT_OK;
        }
    }
#endif /* (STD_ON==ADC_HW_TRIGGER_API) */
#if (ADC_ENABLE_CTU_CONTROL_MODE_API == STD_ON)
    if (TRUE == Adc_aUnitStatus[LogicalHwUnitId].bCtuControlOngoing)
    {
        ValidState = (Std_ReturnType)E_NOT_OK;
    }
#endif /* (ADC_ENABLE_CTU_CONTROL_MODE_API == STD_ON) */

    if ((Std_ReturnType)E_NOT_OK == ValidState)
    {
        Adc_ReportDetRuntimeError(ADC_STARTGROUPCONVERSION_ID, (uint8)ADC_E_BUSY);
    }
    else
    {
#if (ADC_PRIORITY_IMPLEMENTATION == ADC_PRIORITY_NONE)
        ValidState = Adc_ValidateNotBusyNoPrio(Group, bImplicitly, u32CoreId);
#else /* ADC_PRIORITY_IMPLEMENTATION != ADC_PRIORITY_NONE */
        ValidState = Adc_ValidateNotBusyWithPrio(Group, bImplicitly, u32CoreId);
#endif  /* ADC_PRIORITY_IMPLEMENTATION != ADC_PRIORITY_NONE */
    }
    return ValidState;
}
#endif /* (ADC_ENABLE_START_STOP_GROUP_API == STD_ON) */

#if ((ADC_HW_TRIGGER_API == STD_ON))
/**
* @brief        This function validates the state of a group when enable hw trigger (should not be busy).
* @details      This service is a non reentrant function used for validating the state of a group
*
* @param[in]    Group         The group id
* @param[in]    u32CoreId       Current CoreID
*
* @return     Std_ReturnType  Standard return type.
* @retval     E_OK:           The call is valid
* @retval     E_NOT_OK:       The call is not valid
*/
static inline Std_ReturnType Adc_ValidateStateEnableHwTriggNotBusy
(
    Adc_GroupType Group,
    uint32 u32CoreId
)
{
    Std_ReturnType ValidState = (Std_ReturnType)E_NOT_OK;
#if (ADC_ENABLE_CTU_CONTROL_MODE_API == STD_ON)
    Adc_GroupType GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group];
    Adc_HwUnitType LogicalHwUnitId = 0U;
#endif /* (ADC_ENABLE_CTU_CONTROL_MODE_API == STD_ON) */

#if (ADC_ENABLE_CTU_CONTROL_MODE_API == STD_ON)
    LogicalHwUnitId = Adc_pCfgPtr[u32CoreId]->pGroups[(GroupIndex)].AdcLogicalUnitId;
    /* SWS_Adc_00349 */
    if (TRUE == Adc_aUnitStatus[LogicalHwUnitId].bCtuControlOngoing)
    {
        Adc_ReportDetRuntimeError(ADC_ENABLEHARDWARETRIGGER_ID, (uint8)ADC_E_BUSY);
    }
    else
#endif /* (ADC_ENABLE_CTU_CONTROL_MODE_API == STD_ON) */
#if (ADC_HW_TRIGGER_API == STD_ON)
    {
        ValidState = Adc_ValidateNotBusyEnableHwTrig(ADC_ENABLEHARDWARETRIGGER_ID, Group, u32CoreId);
    }
#endif /* (ADC_HW_TRIGGER_API == STD_ON) */
    return ValidState;
}
#endif /* (ADC_HW_TRIGGER_API == STD_ON) */


/**
* @brief        This function validates the state of a group (should not be idle).
* @details      This service is a non reentrant function used for validating the state of a group
*
* @param[in]    u8ServiceId     The service id of the caller function
* @param[in]    Group         The group id
* @param[in]    u32CoreId       Current CoreID
*
* @return     Std_ReturnType  Standard return type.
* @retval     E_OK:           The call is valid
* @retval     E_NOT_OK:       The call is not valid
*/
static inline Std_ReturnType Adc_ValidateStateNotIdle
(
    uint8 u8ServiceId,
    Adc_GroupType Group,
    uint32 u32CoreId
)
{
    Std_ReturnType ValidState = (Std_ReturnType)E_OK;
#if (ADC_SOFTWARE_INJECTED_CONVERSIONS_USED == STD_ON)
    Adc_HwUnitType LogicalHwUnitId = 0U;
    Adc_QueueIndexType SwNormalQueueIndex;
    Adc_QueueIndexType SwInjectedQueueIndex;
    Adc_GroupType GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group];

    LogicalHwUnitId = Adc_pCfgPtr[u32CoreId]->pGroups[(GroupIndex)].AdcLogicalUnitId;
    SwNormalQueueIndex = Adc_aUnitStatus[LogicalHwUnitId].SwNormalQueueIndex;
    SwInjectedQueueIndex = Adc_aUnitStatus[LogicalHwUnitId].SwInjectedQueueIndex;
#else
    (void)u32CoreId;
#endif /* (ADC_SOFTWARE_INJECTED_CONVERSIONS_USED == STD_ON) */

    switch (u8ServiceId)
    {
#if (ADC_READ_GROUP_API == STD_ON)
        case ADC_VALUEREADGROUP_ID:
        {
            if (ADC_IDLE == Adc_aGroupStatus[Group].eConversion)
            {
                if(ADC_NOT_YET_CONVERTED == Adc_aGroupStatus[Group].eAlreadyConverted)
                {
                    /* SWS_Adc_00388 */
                    Adc_ReportDetRuntimeError(u8ServiceId, (uint8)ADC_E_IDLE);
                    ValidState = (Std_ReturnType)E_NOT_OK;
                }
            }
            break;
        }
#endif /* ADC_READ_GROUP_API == STD_ON */
        case ADC_STOPGROUPCONVERSION_ID:
        {
            if (ADC_IDLE == Adc_aGroupStatus[Group].eConversion)
            {
                /* SWS_Adc_00241 */
                Adc_ReportDetRuntimeError(u8ServiceId, (uint8)ADC_E_IDLE);
                ValidState = (Std_ReturnType)E_NOT_OK;
            }
            else
            {
#if (ADC_SOFTWARE_INJECTED_CONVERSIONS_USED == STD_ON)
                /* This condition happens when injected SW is available */
                if ((Group == Adc_aUnitStatus[LogicalHwUnitId].SwNormalQueue[0U])
                    && (SwNormalQueueIndex > 0U)
                    && (SwInjectedQueueIndex > 0U)
                   )
                {
                    Adc_ReportDetRuntimeError(u8ServiceId, (uint8)ADC_E_BUSY);
                    ValidState = (Std_ReturnType)E_NOT_OK;
                }
#endif /* (ADC_SOFTWARE_INJECTED_CONVERSIONS_USED == STD_ON) */
            }
            break;
        }
#if (ADC_HW_TRIGGER_API == STD_ON)
        case ADC_DISABLEHARDWARETRIGGER_ID:
        {
            /* SWS_Adc_00304 */
            /* HW trigger streaming linear group will be removed in OngoingHwGroup when all conversion samples finished,
            so eHwTriggering remains the status of the group was previously enabled by Adc_EnableHardwareTrigger. */
            if (ADC_HWTRIGGER_DISABLED == Adc_aGroupStatus[Group].eHwTriggering)
            {
                Adc_ReportDetRuntimeError(u8ServiceId, (uint8)ADC_E_IDLE);
                ValidState = (Std_ReturnType)E_NOT_OK;
            }
            break;
        }
#endif /* ADC_HW_TRIGGER_API == STD_ON */
        case ADC_GETSTREAMLASTPOINTER_ID:
        {
             if (ADC_IDLE == Adc_aGroupStatus[Group].eConversion)
             {
                 /* SWS_Adc_00215 */
                 Adc_ReportDetRuntimeError(u8ServiceId, (uint8)ADC_E_IDLE);
                 ValidState = (Std_ReturnType)E_NOT_OK;
             }
            break;
        }
        default:
        {
            ; /* no-op */
            break;
        }
    }

    return ValidState;
}

#if (ADC_VALIDATE_CALL_AND_GROUP == STD_ON)
/**
* @brief        This function validates the call for a specific group
* @details      This function checks for Uninit, valid CoreID, and that Group is in range.
*
* @param[in]    u8ServiceId     The service id of the caller function
* @param[in]    Group         The group id
* @param[in]    u32CoreId       Current CoreID
*
* @return     Std_ReturnType  Standard return type.
* @retval     E_OK:           Valid call and group
* @retval     E_NOT_OK:       Invalid call or group
*
* @api
* @implements     Adc_ValidateCallAndGroup_Activity
*/
static inline Std_ReturnType Adc_ValidateCallAndGroup
(
    uint8 u8ServiceId,
    Adc_GroupType Group,
    uint32 u32CoreId
)
{
    Std_ReturnType ValidCallAndGroup = (Std_ReturnType)E_NOT_OK;
    Std_ReturnType ValidCoreId = (Std_ReturnType)E_NOT_OK;
    Adc_GroupType GroupIndex = 0U;

    if (NULL_PTR == Adc_pCfgPtr[u32CoreId])
    {
        /* SWS_Adc_00300, SWS_Adc_00301, SWS_Adc_00302, SWS_Adc_00299, SWS_Adc_00298, SWS_Adc_00297, SWS_Adc_00296, SWS_Adc_00295, SWS_Adc_00294, SWS_Adc_00434 */
        Adc_ReportDetError(u8ServiceId, (uint8)ADC_E_UNINIT);
        (void)GroupIndex;
        (void)ValidCoreId;
    }
    else
    {
        ValidCoreId = Adc_CheckCurrentCoreId(Adc_pCfgPtr[u32CoreId], u32CoreId);
        if((Std_ReturnType)E_OK == ValidCoreId)
        {
            if (Group >= ADC_MAX_GROUPS)
            {
                /* SWS_Adc_00218, SWS_Adc_00225, SWS_Adc_00131, SWS_Adc_00130, SWS_Adc_00129, SWS_Adc_00128, SWS_Adc_00152, SWS_Adc_00126, SWS_Adc_00125, SWS_Adc_00423 */
                Adc_ReportDetError(u8ServiceId, (uint8)ADC_E_PARAM_GROUP);
                (void)GroupIndex;
            }
            else
            {
                /* Get the mapping index of group in the current partition */
                GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group];
                if (Group != Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].GroupId)
                {
                    /* Group doesn't belong to current core */
                    Adc_ReportDetError(u8ServiceId, (uint8)ADC_E_PARAM_CONFIG);
                }
                else
                {
                    ValidCallAndGroup = (Std_ReturnType)E_OK;
                }
            }
        }
        else
        {
            /* CPR_RTD_00420.adc */
            Adc_ReportDetError(u8ServiceId, (uint8)ADC_E_PARAM_CONFIG);
        }
    }

    return ValidCallAndGroup;
}
#endif /* ADC_VALIDATE_CALL_AND_GROUP == STD_ON */

#if (((ADC_ENABLE_READ_RAW_DATA_API == STD_ON) || (ADC_CALIBRATION == STD_ON) \
   || (ADC_GET_INJECTED_CONVERSION_STATUS_API == STD_ON) || defined(__DOXYGEN__) \
   || (ADC_ENABLE_CONFIGURE_THRESHOLD_NONAUTO_API == STD_ON) || (ADC_SELF_TEST == STD_ON) \
   || (ADC_ENABLE_CTU_CONTROL_MODE_API == STD_ON) || defined(ADC_WDG_SUPPORTED) \
   || (ADC_ENABLE_TEMPSENSE_API == STD_ON)) && (ADC_VALIDATE_CALL_AND_UNIT == STD_ON))
/**
* @brief        This function validates the call for a specific unit
* @details      This service is non reentrant function on channel used for validating the calls
*               for functions that use a unit
*
* @param[in]    u8ServiceId   The service id of the caller function
* @param[in]    Unit          The Logical Unit id
* @param[in]    u32CoreId     Current CoreID
*
* @return     Std_ReturnType  Standard return type.
* @retval     E_OK:           Valid call and group
* @retval     E_NOT_OK:       Invalid call or group
*
* @api
* @implements     Adc_ValidateCallAndUnit_Activity
*/
static inline Std_ReturnType Adc_ValidateCallAndUnit
(
    uint8 u8ServiceId,
    Adc_HwUnitType Unit,
    uint32 u32CoreId
)
{
    Std_ReturnType ValidCallAndUnit = (Std_ReturnType)E_NOT_OK;
    Std_ReturnType ValidCoreId;

    if (NULL_PTR == Adc_pCfgPtr[u32CoreId])
    {
        /* CPR_RTD_00272.adc, CPR_RTD_00273.adc */
        Adc_ReportDetError(u8ServiceId, (uint8)ADC_E_UNINIT);
    }
    else if (Unit >= ADC_MAX_HW_UNITS_CFG)
    {
        Adc_ReportDetError(u8ServiceId, (uint8)ADC_E_PARAM_UNIT);
    }
    else
    {
        ValidCoreId = Adc_CheckCurrentCoreId(Adc_pCfgPtr[u32CoreId], u32CoreId);
        if((Std_ReturnType)E_OK == ValidCoreId)
        {
            if(Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->Mapping.au8Adc_HwUnit[Unit] == (uint8)STD_ON) /* HW unit enabled on current partition */
            {
                ValidCallAndUnit = (Std_ReturnType)E_OK;
            }
            else
            {
                Adc_ReportDetError(u8ServiceId, (uint8)ADC_E_PARAM_CONFIG);
            }
        }
        else
        {
            /* CPR_RTD_00420.adc */
            Adc_ReportDetError(u8ServiceId, (uint8)ADC_E_PARAM_CONFIG);
        }
    }

    return ValidCallAndUnit;
}
#endif /* (ADC_VALIDATE_CALL_AND_UNIT == STD_ON) ... */

#if (ADC_GRP_NOTIF_CAPABILITY == STD_ON)
#if (ADC_VALIDATE_NOTIFY_CAPABILITY == STD_ON)
/**
* @brief        This function checks the notification capability of a group.
* @details      This service is non reentrant function on channel used for validating the
*               notification capability of a group.
*
* @param[in]    u8ServiceId     The service id of the caller function
* @param[in]    Group         The group id
* @param[in]    u32CoreId       Current CoreID
*
* @return     Std_ReturnType  Standard return type.
* @retval     E_OK:           Valid notification capability
* @retval     E_NOT_OK:       Invalid notification capability
*/
static inline Std_ReturnType Adc_NotifyCapablity
(
    uint8 u8ServiceId,
    Adc_GroupType Group,
    uint32 u32CoreId
)
{
    Adc_GroupType GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group];
    Std_ReturnType ValidCapability = (Std_ReturnType)E_OK;

    switch (u8ServiceId)
    {
        case ADC_ENABLEGROUPNOTIFICATION_ID:
        case ADC_DISABLEGROUPNOTIFICATION_ID:
        {
            if (NULL_PTR == Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].Notification)
            {
                ValidCapability = (Std_ReturnType)E_NOT_OK;
                /* SWS_Adc_00166, SWS_Adc_00165 */
                Adc_ReportDetError(u8ServiceId, (uint8)ADC_E_NOTIF_CAPABILITY);
            }
            break;
        }
        default:
        {
            ; /* no-op */
            break;
        }
    }
    return ValidCapability;
}
#endif /* ADC_VALIDATE_NOTIFY_CAPABILITY == STD_ON */
#endif /* ADC_GRP_NOTIF_CAPABILITY == STD_ON */

/**
* @brief          Initializes the group status structures.
* @details        Initializes the group status structures with the default values.
*
* @param[in]      u32CoreId       Current CoreID
*
* @return         void
*
* @pre            Driver must be initialized.
*/
static inline void Adc_InitGroupsStatus
(
    uint32 u32CoreId
)
{
    Adc_GroupType u16GroupCnt = 0U;
    Adc_GroupType GroupId = 0U;

    /* Initialize Group Status structures to beginning values */
    for (u16GroupCnt = 0U; u16GroupCnt < Adc_pCfgPtr[u32CoreId]->GroupCount; u16GroupCnt++)
    {
        GroupId = Adc_pCfgPtr[u32CoreId]->pGroups[u16GroupCnt].GroupId;
        /* SWS_Adc_00221, SWS_Adc_00307 */
        Adc_aGroupStatus[GroupId].eConversion = ADC_IDLE;
        /* this group was not converted yet */
        Adc_aGroupStatus[GroupId].eAlreadyConverted = ADC_NOT_YET_CONVERTED;

        Adc_aGroupStatus[GroupId].ResultIndex = 0U;
#ifdef ADC_CURRENT_CHANNEL_USED
        Adc_aGroupStatus[GroupId].CurrentChannel = 0U;
#endif /* ADC_CURRENT_CHANNEL_USED */
#if (ADC_ENABLE_LIMIT_CHECK == STD_ON)
        Adc_aGroupStatus[GroupId].bLimitCheckFailed = FALSE;
#endif /* ADC_ENABLE_LIMIT_CHECK == STD_ON */

        /* SWS_Adc_00077 */
#if (ADC_HW_TRIGGER_API == STD_ON)
        Adc_aGroupStatus[GroupId].eHwTriggering = ADC_HWTRIGGER_DISABLED;
#endif /* (ADC_HW_TRIGGER_API == STD_ON) */
#if (ADC_GRP_NOTIF_CAPABILITY == STD_ON)
        Adc_aGroupStatus[GroupId].eNotification = ADC_NOTIFICATION_DISABLED;
#endif /* (ADC_GRP_NOTIF_CAPABILITY == STD_ON) */

#if (ADC_SETCHANNEL_API == STD_ON)
        Adc_aRuntimeGroupChannel[GroupId].pChannel = Adc_pCfgPtr[u32CoreId]->pGroups[u16GroupCnt].pAssignment;
        Adc_aRuntimeGroupChannel[GroupId].ChannelCount = Adc_pCfgPtr[u32CoreId]->pGroups[u16GroupCnt].AssignedChannelCount;
        Adc_aRuntimeGroupChannel[GroupId].bRuntimeUpdated = FALSE;
#if (ADC_ENABLE_LIMIT_CHECK == STD_ON)
        Adc_aRuntimeGroupChannel[GroupId].bAdcRuntimeGroupLimitcheck = FALSE;
#endif /* (ADC_ENABLE_LIMIT_CHECK == STD_ON) */
#if (ADC_PDB_AVAILABLE == STD_ON)
        Adc_aRuntimeGroupChannel[GroupId].pu16Delays = Adc_pCfgPtr[u32CoreId]->pGroups[u16GroupCnt].pAdcIpwGroupConfig->pDelay;
        Adc_aRuntimeGroupChannel[GroupId].u32Mask = 0xFFFFFFFFUL;
#endif /* (ADC_PDB_AVAILABLE == STD_ON) */
#endif /* (ADC_SETCHANNEL_API == STD_ON) */

    }
}

/**
* @brief          Initializes the Unit status structures.
* @details        Initializes the Unit status structures with the default values.
*
* @param[in]      u32CoreId       Current CoreID
*
* @return         void
*
* @pre            Driver must be initialized.
*/
static inline void Adc_InitUnitStatus
(
    uint32 u32CoreId
)
{
    Adc_HwUnitType LogicalHwUnitId = 0U;
    Adc_QueueIndexType QueueIdx = 0U;

    /* Loop for all configured hardware units in current partition */
    for (LogicalHwUnitId = 0U; LogicalHwUnitId < ADC_MAX_HW_UNITS; LogicalHwUnitId++)
    {
        if(Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->Mapping.au8Adc_HwUnit[LogicalHwUnitId] == (uint8)STD_ON) /* HW unit enabled on current partition */
        {
            /* Filled slots in the queue */
            Adc_aUnitStatus[LogicalHwUnitId].SwNormalQueueIndex = 0U;
            /* Mark all the queue slots as "empty" */
            for(QueueIdx = 0U; QueueIdx < ADC_QUEUE_MAX_DEPTH_MAX; QueueIdx++)
            {
                Adc_aUnitStatus[LogicalHwUnitId].SwNormalQueue[QueueIdx] = 0U;
            }

#if (ADC_SOFTWARE_INJECTED_CONVERSIONS_USED == STD_ON)
            /* SW Injected queue initialization */
            Adc_aUnitStatus[LogicalHwUnitId].SwInjectedQueue[0U] = 0U;
            /* Filled slots in the sw injected queue */
            Adc_aUnitStatus[LogicalHwUnitId].SwInjectedQueueIndex = 0U;
#endif /* (ADC_SOFTWARE_INJECTED_CONVERSIONS_USED == STD_ON) */

#if (ADC_HW_TRIGGER_API == STD_ON)
            /* SWS_Adc_00077 */
            /* If there is no ongoing HW group then HW trigger capability is disabled */
            Adc_aUnitStatus[LogicalHwUnitId].OngoingHwGroup = ADC_INVALID_HW_GROUP_ID;
#endif /* (ADC_HW_TRIGGER_API == STD_ON) */

#if (ADC_PDB_AVAILABLE == STD_ON)
            Adc_aUnitStatus[LogicalHwUnitId].u8Sc1Used = 0U;
#endif /* (ADC_PDB_AVAILABLE == STD_ON) */
        }
    }
#if (ADC_POWER_STATE_SUPPORTED == STD_ON)
    Adc_eCurrentState[u32CoreId] = ADC_FULL_POWER;
    Adc_eTargetState[u32CoreId] = ADC_NODEFINE_POWER;
#endif /* (ADC_POWER_STATE_SUPPORTED == STD_ON) */

#if (ADC_DUAL_CLOCK_MODE == STD_ON)
#if (ADC_SET_ADC_CONV_TIME_ONCE == STD_OFF)
    Adc_eClockMode[u32CoreId] = ADC_NORMAL;
#endif /* (ADC_SET_ADC_CONV_TIME_ONCE == STD_OFF) */
#endif /* (ADC_DUAL_CLOCK_MODE == STD_ON) */
}

/**
* @brief        This function check CoreId is used.
* @details      This function check CoreId is used.
*
* @param[in]      pCfgPtr           Configuration data pointer.
* @param[in]      u32CoreId         Current CoreID
*
* @return       Std_ReturnType  Standard return type.
* @retval       E_OK:           CoreId is valid
* @retval       E_NOT_OK:       CoreId is not valid
*/
static inline Std_ReturnType Adc_CheckCurrentCoreId
(
    const Adc_ConfigType * pCfgPtr,
    uint32 u32CoreId
)
{
    uint8 Index = 0U;
    Std_ReturnType ValidCoreId = (Std_ReturnType)E_NOT_OK;

    if(u32CoreId == pCfgPtr->u32CoreId)
    {
        for(Index = 0U; Index < pCfgPtr->AssignedPartitionCount; Index++)
        {
            if(u32CoreId == pCfgPtr->pAssignmentPartition[Index])
            {
                ValidCoreId = (Std_ReturnType)E_OK;
                break;
            }
        }
    }

    return ValidCoreId;
}

#if (ADC_ENABLE_QUEUING == STD_ON)
/**
* @brief          This function performs the dequeue operation on the internal ADC queue.
* @details        This function performs the dequeue operation on the internal ADC queue.
*
* @param[in]      Unit            Adc unit used. Recommended to use generated define for Adc Logical Unit Id.
* @param[in]      CurQueueIndex   The current queue index.
*
* @return         void
*
* @pre This function must be called from a critical region. It is not protecting itself against interruptions.
*/
void Adc_RemoveFromQueue
(
    const Adc_HwUnitType Unit,
    const Adc_QueueIndexType CurQueueIndex
)
{
    Adc_QueueIndexType PositionIndex = 0U;
    Adc_QueueIndexType CurrentIndex = 0U;

    SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_00();
    CurrentIndex = Adc_aUnitStatus[Unit].SwNormalQueueIndex;
    if((Adc_QueueIndexType)1U >= CurrentIndex)
    {
        /* Zero or one element present in the queue */
        Adc_aUnitStatus[Unit].SwNormalQueueIndex = 0U;
    }
    else
    {
        /* More than one element in the queue */
        /* Move all elements after the one to remove (from CurQueueIndex position) one place to the left */
        for(PositionIndex = (CurQueueIndex + 1U); PositionIndex < CurrentIndex; PositionIndex++)
        {
            Adc_aUnitStatus[Unit].SwNormalQueue[PositionIndex - 1U] = (Adc_GroupType)Adc_aUnitStatus[Unit].SwNormalQueue[PositionIndex];
        }
        Adc_aUnitStatus[Unit].SwNormalQueueIndex--;
    }
    SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_00();
}
#endif /* (ADC_ENABLE_QUEUING == STD_ON) */

#if ((ADC_ENABLE_START_STOP_GROUP_API == STD_ON) && (ADC_PRIORITY_IMPLEMENTATION != ADC_PRIORITY_NONE))
/**
* @brief          This function inserts a group into the queue.
* @details        This function inserts a group into the queue.
*
* @param[in]      Unit      The hardware Unit.
* @param[in]      Group     The group id.
* @param[in]      u32CoreId       Current CoreID
*
* @return         void
* SWS_Adc_00311, SWS_Adc_00310
*/
static inline Std_ReturnType Adc_InsertIntoQueue
(
    const Adc_HwUnitType Unit,
    Adc_GroupType Group,
    uint32 u32CoreId
)
{
    Adc_GroupType GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group];
#if (ADC_QUEUE_MAX_DEPTH_MAX != 1U)
    /* Temporary index in the Queue */
    Adc_QueueIndexType QueueTemp = 0U;
#endif /* (ADC_QUEUE_MAX_DEPTH_MAX != 1U) */
    /* Position of the new Group in the Queue */
    Adc_QueueIndexType Pos = 0U;
    Adc_GroupPriorityType gPri = Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].Priority;
    Adc_QueueIndexType qPtr = Adc_aUnitStatus[Unit].SwNormalQueueIndex;
    Std_ReturnType TimeOutStatus = (Std_ReturnType)E_OK;

    /* Find the right place in Queue (SWS_Adc_00332, SWS_Adc_00417) */
    while(Adc_pCfgPtr[u32CoreId]->pGroups[(Adc_aUnitStatus[Unit].SwNormalQueue[Pos])].Priority >= gPri)
    {
        Pos++;
        if (Pos >= qPtr)
        {
            break;
        }
    }
    if(0U == Pos)
    {
        /* Highest priority group detected */
        TimeOutStatus = Adc_Ipw_StopCurrentConversion(Unit, Adc_aUnitStatus[Unit].SwNormalQueue[0U], u32CoreId);
    }
#if (ADC_QUEUE_MAX_DEPTH_MAX != 1U)
    /* Make space for the new Group */
    if(qPtr > Pos)
    {
        for(QueueTemp = qPtr; QueueTemp > Pos; QueueTemp--)
        {
            /* Move elements to the right */
            Adc_aUnitStatus[Unit].SwNormalQueue[QueueTemp] = (Adc_GroupType)Adc_aUnitStatus[Unit].SwNormalQueue[QueueTemp- 1U];
        }
    }
#endif /* (ADC_QUEUE_MAX_DEPTH_MAX != 1U) */
    /* Place the Group in the Queue */
    Adc_aUnitStatus[Unit].SwNormalQueue[Pos] = Group;
    /* Increase the Queue Index */
    Adc_aUnitStatus[Unit].SwNormalQueueIndex++;

    return TimeOutStatus;
}
#endif  /* (ADC_PRIORITY_IMPLEMENTATION != ADC_PRIORITY_NONE) */

#if (ADC_ENABLE_START_STOP_GROUP_API == STD_ON)
/**
* @brief          This function update queue before start a group conversion.
* @details        This function update queue before start a group conversion.
*
* @param[in]      Group         The Group Id.
* @param[in]      Unit          The Logical Unit Id.
* @param[in]      u32CoreId     Current CoreID
*
* @return         void
*
* SWS_Adc_00335
*/
static inline void Adc_UpdateStatusStartConversion
(
    const Adc_GroupType Group,
    const Adc_HwUnitType Unit,
    uint32 u32CoreId
)
{
#if (ADC_SOFTWARE_INJECTED_CONVERSIONS_USED == STD_ON)
    Adc_GroupType GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group];
#endif /* ADC_SOFTWARE_INJECTED_CONVERSIONS_USED == STD_ON */
    /* First available slot in the Queue */
#if ((ADC_PRIORITY_IMPLEMENTATION != ADC_PRIORITY_NONE) || ((ADC_ENABLE_QUEUING == STD_ON) && (ADC_QUEUE_MAX_DEPTH_MAX != 1U)))
    Adc_QueueIndexType qPtr = 0U;
#endif
#if (ADC_ENABLE_QUEUING == STD_ON)
    Adc_QueueIndexType SwNormalQueueIndex;
#endif /* (ADC_ENABLE_QUEUING == STD_ON) */
    Std_ReturnType TimeOutStatus = (Std_ReturnType)E_OK;

    /* Mark the Group as BUSY when the Group goes to the Queue or gets started */
    /* SWS_Adc_00222 */
    Adc_aGroupStatus[Group].eConversion = ADC_BUSY;
    /* SWS_Adc_00431 */
    Adc_aGroupStatus[Group].ResultIndex = 0U;

#if (ADC_SOFTWARE_INJECTED_CONVERSIONS_USED == STD_ON)
    /* Injected conversion mode */
    if (ADC_CONV_TYPE_INJECTED == Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].eType)
    {
        SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_01();
#ifdef ADC_DMA_SUPPORTED
        if ((ADC_DMA == Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->Mapping.u8Adc_DmaInterruptSoftware[Unit]) || \
            ((uint8)STD_ON == Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].u8AdcExtDMAChanEnable) \
           )
        {
            if (Adc_aUnitStatus[Unit].SwNormalQueueIndex > (Adc_QueueIndexType)0U)
            {
                /* Queue is NOT Empty */
                TimeOutStatus = Adc_Ipw_StopCurrentConversion(Unit, Adc_aUnitStatus[Unit].SwNormalQueue[0U], u32CoreId);

                if ((Std_ReturnType)E_NOT_OK == TimeOutStatus)
                {
                    /* Timeout is expired.*/
                    Adc_ReportDetRuntimeError((uint8)ADC_STARTGROUPCONVERSION_ID, (uint8)ADC_E_TIMEOUT);
                }
            }
        }
#endif /* ADC_DMA_SUPPORTED */
        /* Place the Group in the SW Inj Queue */
        Adc_aUnitStatus[Unit].SwInjectedQueue[0U] = Group;
        /* Increase the Queue Index */
        Adc_aUnitStatus[Unit].SwInjectedQueueIndex++;
        SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_01();

        Adc_Ipw_StartInjectedConversion(Unit, u32CoreId);

    }
    else
#endif /* ADC_SOFTWARE_INJECTED_CONVERSIONS_USED == STD_ON */
    {
        /* Normal conversion */
#if (ADC_PRIORITY_IMPLEMENTATION != ADC_PRIORITY_NONE)
        SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_01();
        qPtr = Adc_aUnitStatus[Unit].SwNormalQueueIndex;
        if (qPtr > (Adc_QueueIndexType)0U)
        {
            /* Queue is NOT Empty */
            TimeOutStatus = Adc_InsertIntoQueue(Unit, Group, u32CoreId);

            if ((Std_ReturnType)E_NOT_OK == TimeOutStatus)
            {
                /* Timeout is expired.*/
                Adc_ReportDetRuntimeError((uint8)ADC_STARTGROUPCONVERSION_ID, (uint8)ADC_E_TIMEOUT);
            }
        }
        SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_01();
#else /* ADC_PRIORITY_IMPLEMENTATION == ADC_PRIORITY_NONE */
#if (ADC_ENABLE_QUEUING == STD_ON) && (ADC_QUEUE_MAX_DEPTH_MAX != 1U)
        SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_01();
        qPtr = Adc_aUnitStatus[Unit].SwNormalQueueIndex;
        if (qPtr > (Adc_QueueIndexType)0U)
        {
            /* Place the Group in the Queue */
            Adc_aUnitStatus[Unit].SwNormalQueue[qPtr] = Group;
            /* Increase the Queue Index */
            Adc_aUnitStatus[Unit].SwNormalQueueIndex++;
        }
        SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_01();
#else /* ADC_ENABLE_QUEUING == STD_OFF*/
    /* In this case all the StartConversion should be rejected by DET */
#endif /* (ADC_ENABLE_QUEUING == STD_ON) */
#endif /* ADC_PRIORITY_IMPLEMENTATION == ADC_PRIORITY_NONE */

        SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_01();
#if (ADC_ENABLE_QUEUING == STD_ON)
        SwNormalQueueIndex = Adc_aUnitStatus[Unit].SwNormalQueueIndex;
        /* SWS_Adc_00338, SWS_Adc_00417 */
        if((Adc_aUnitStatus[Unit].SwNormalQueue[0U] == Group) || (0U == SwNormalQueueIndex))
        {
            /* No_priorities OR Queue_is_empty */
            /* Indicate a new group was added to the queue */
#endif /* (ADC_ENABLE_QUEUING == STD_ON) */
            if (0U == Adc_aUnitStatus[Unit].SwNormalQueueIndex)
            {
                /* Place the Group in the Queue */
                Adc_aUnitStatus[Unit].SwNormalQueue[0U] = Group;
                Adc_aUnitStatus[Unit].SwNormalQueueIndex++;
            }
            /* exit critical region */
            SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_01();
            /* ADC will not be running - no ISR can occur now */
            Adc_Ipw_StartNormalConversion(Unit, u32CoreId);

#if (ADC_ENABLE_QUEUING == STD_ON)
        }
        else
        {
        /* exit critical region */
        SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_01();
        }
#endif /* (ADC_ENABLE_QUEUING == STD_ON) */
    }
    (void)TimeOutStatus;
}

/**
* @brief          This function stop the current sofware group conversion.
* @details        This function stop the current sofware group conversion.
*
* @param[out]     RemovedPos The removed position in queue.
* @param[in]      Group      The group id.
* @param[in]      Unit       The hardware Unit.
* @param[in]      u32CoreId  Current CoreID
*
* @return         Std_ReturnType
*
*/
static inline Std_ReturnType Adc_StopSwGroupConversion
(
#if (ADC_ENABLE_QUEUING == STD_ON)
    Adc_QueueIndexType * RemovedPos,
#endif /* (ADC_ENABLE_QUEUING == STD_ON) */
    Adc_GroupType Group,
    Adc_HwUnitType Unit,
    uint32 u32CoreId
)
{
    Std_ReturnType TimeOutStatus = (Std_ReturnType)E_OK;
#if (ADC_ENABLE_QUEUING == STD_ON)
    Adc_QueueIndexType SwNormalQueueIndex;
    Adc_QueueIndexType NumOfSwNormalQueue;
#endif /* (ADC_ENABLE_QUEUING == STD_ON) */

#if (ADC_SOFTWARE_INJECTED_CONVERSIONS_USED == STD_ON)
    Adc_GroupType GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group];
    if (ADC_CONV_TYPE_INJECTED == Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].eType)
    {
        SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_02();
        if (Group == Adc_aUnitStatus[Unit].SwInjectedQueue[0U])
        {
            /* SWS_Adc_00386, SWS_Adc_00385 */
            TimeOutStatus = Adc_Ipw_StopCurrentConversion(Unit, Group, u32CoreId);
            /* zero elements in the sw injected queue */
            Adc_aUnitStatus[Unit].SwInjectedQueueIndex = 0U;
        }
        SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_02();
    }
    else
#endif /* ADC_SOFTWARE_INJECTED_CONVERSIONS_USED == STD_ON */
    {
#if (ADC_ENABLE_QUEUING == STD_ON)
        /* SWS_Adc_00437 */
        /* Find the Group in the Queue */
        *RemovedPos = Adc_aUnitStatus[Unit].SwNormalQueueIndex;  /* initialize with something invalid */
        NumOfSwNormalQueue = Adc_aUnitStatus[Unit].SwNormalQueueIndex;
        for (SwNormalQueueIndex = 0U; SwNormalQueueIndex < NumOfSwNormalQueue; SwNormalQueueIndex++)
        {
            if (Group == Adc_aUnitStatus[Unit].SwNormalQueue[SwNormalQueueIndex])
            {
                /* The group is found in the Queue */
                /* Store the position of the group to be removed */
                *RemovedPos = SwNormalQueueIndex;

                /* Stop the conversion of all channels belonging to this group */
                if((Adc_QueueIndexType)0U == SwNormalQueueIndex) /* In this case the group might be under conversion */
#endif /* (ADC_ENABLE_QUEUING == STD_ON) */
                {
                    /* SWS_Adc_00386 */
                    TimeOutStatus = Adc_Ipw_StopCurrentConversion(Unit, Group, u32CoreId);
                }
#if (ADC_ENABLE_QUEUING == STD_ON)
                /* SWS_Adc_00438 */
                /* Remove group from Queue */
                Adc_RemoveFromQueue(Unit, SwNormalQueueIndex);
            }
        }
#else
        /* No element will be present in the queue */
        Adc_aUnitStatus[Unit].SwNormalQueueIndex = 0U;
#endif /* (ADC_ENABLE_QUEUING == STD_ON) */
    }

    return TimeOutStatus;
}

/**
* @brief          This function update queue before start a group conversion.
* @details        This function update queue before start a group conversion.
*
* @param[in]      Group     The group id.
* @param[in]      Unit      The hardware Unit.
* @param[in]      u32CoreId       Current CoreID
*
* @return         void
*
* SWS_Adc_00437
*/
static inline void Adc_UpdateStatusStopConversion
(
    Adc_GroupType Group,
    Adc_HwUnitType Unit,
    uint32 u32CoreId
)
{
    Adc_GroupType GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group];
#if (ADC_ENABLE_QUEUING == STD_ON)
    Adc_QueueIndexType RemovedPos = 0U;
#endif /* (ADC_ENABLE_QUEUING == STD_ON) */
    Std_ReturnType TimeOutStatus = (Std_ReturnType)E_OK;
    Adc_GroupConvModeType eMode;
    Adc_GroupAccessModeType eAccessMode;
    Adc_StreamBufferModeType eBufferMode;
    Adc_StatusType eConversion;

#if (ADC_ENABLE_LIMIT_CHECK == STD_ON)
    Adc_aGroupStatus[Group].bLimitCheckFailed = FALSE;
#endif /* ADC_ENABLE_LIMIT_CHECK == STD_ON */

    eMode = Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].eMode;
    eAccessMode = Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].eAccessMode;
    eBufferMode = Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].eBufferMode;
    eConversion = Adc_aGroupStatus[Group].eConversion;

     /* FD reset number of samples completed */
     Adc_aGroupStatus[Group].ResultIndex = 0U;
#if (ADC_GRP_NOTIF_CAPABILITY == STD_ON)
     /* disable group notification (SWS_Adc_00155) */
     Adc_aGroupStatus[Group].eNotification = ADC_NOTIFICATION_DISABLED;
#endif /* (ADC_GRP_NOTIF_CAPABILITY == STD_ON) */
#if ((ADC_SETCHANNEL_API == STD_ON) && (ADC_PDB_AVAILABLE == STD_ON))
     Adc_aRuntimeGroupChannel[Group].u32Mask = 0xFFFFFFFFUL;
#endif /* ((ADC_SETCHANNEL_API == STD_ON) && (ADC_PDB_AVAILABLE == STD_ON)) */
    if(((ADC_CONV_MODE_ONESHOT == eMode) || \
        ((ADC_ACCESS_MODE_STREAMING == eAccessMode) && (ADC_STREAM_BUFFER_LINEAR == eBufferMode)) \
       ) && (ADC_STREAM_COMPLETED == eConversion) \
      )
    {
        /* SWS_Adc_00221, SWS_Adc_00360 */
        /* group is stopped, change its status to IDLE  */
        Adc_aGroupStatus[Group].eConversion = ADC_IDLE;
    }
    else /* Continuous single or streaming circular */
    {
#if (ADC_ENABLE_QUEUING == STD_ON)
        TimeOutStatus = Adc_StopSwGroupConversion(&RemovedPos, Group, Unit, u32CoreId);
#else
        TimeOutStatus = Adc_StopSwGroupConversion(Group, Unit, u32CoreId);
#endif /* ADC_ENABLE_LIMIT_CHECK == STD_ON */

        /* SWS_Adc_00221, SWS_Adc_00360 */
        /* group is stopped, change its status to IDLE  */
        Adc_aGroupStatus[Group].eConversion = ADC_IDLE;

    #if (ADC_ENABLE_QUEUING == STD_ON)
        /* Start the next group in the Queue (if any) */
        if((Adc_QueueIndexType)0U == RemovedPos)
        {
            if(Adc_aUnitStatus[Unit].SwNormalQueueIndex > (Adc_QueueIndexType)0U)
            {
                /* Structures and pointers will be initialized when the next Group starts */
                Adc_Ipw_StartNormalConversion(Unit, u32CoreId);
            }
        }
    #endif /* (ADC_ENABLE_QUEUING == STD_ON) */
        if ((Std_ReturnType)E_NOT_OK == TimeOutStatus)
        {
            /* Timeout is expired.*/
            Adc_ReportDetRuntimeError((uint8)ADC_STOPGROUPCONVERSION_ID, (uint8)ADC_E_TIMEOUT);
        }
    }
}
#endif /* (ADC_ENABLE_START_STOP_GROUP_API == STD_ON) */

#if (ADC_READ_GROUP_API == STD_ON)
/**
* @brief          This function updates the status variables after the read group operation.
* @details        This function updates the status variables after the read group operation.
*
* @param[in]      Group       The group of which conversion will be started.
* @param[in]      bFlag       Indicates if the values are in the configured limit range.
* @param[in]      u32CoreId   Current CoreID
*
* @return         void
*
*/
static inline void Adc_UpdateStatusReadGroup
(
    const Adc_GroupType Group,
    const boolean bFlag,
    uint32 u32CoreId
)
{
    Adc_GroupType GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group];
    if((uint8)STD_ON == Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].u8AdcWithoutInterrupt)
    {
        Adc_UpdateStatusReadGroupNoInt(Group, bFlag, u32CoreId);
    }
    else
    {
        Adc_UpdateStatusReadGroupInt(Group, u32CoreId);
    }
}

static inline void Adc_UpdateStatusReadGroupNoInt
(
    const Adc_GroupType Group,
    const boolean bFlag,
    uint32 u32CoreId
)
{
    Adc_GroupType GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group];

    /* at least once the group was converted */
    Adc_aGroupStatus[Group].eAlreadyConverted = ADC_ALREADY_CONVERTED;
    /* Update conversion status*/
    /* Conversion values are not in the configured range */
    if (TRUE == bFlag)
    {
        /* NOTE: Streaming groups are NOT allowed without interrupts in configuration */
        if(ADC_CONV_MODE_CONTINUOUS == Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].eMode)
        {
            Adc_aGroupStatus[Group].eConversion = ADC_BUSY;
        }
        /* Case of software - one shot mode */
        else
        {
            /* CPR_RTD_00265.adc */
            if(ADC_TRIGG_SRC_SW == Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].eTriggerSource)
            {
                /* SWS_Adc_00221 */
                Adc_aGroupStatus[Group].eConversion = ADC_IDLE;
                /* Update queue index status */
                Adc_UpdateSwQueueIndexNoInt(Group, u32CoreId);
            }
        }
    }
    #if (ADC_ENABLE_LIMIT_CHECK == STD_ON)
    else
    {
        if(ADC_CONV_MODE_ONESHOT == Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].eMode)
        {
            /* SWS_Adc_00449, SWS_Adc_00450 */
            Adc_aGroupStatus[Group].eConversion = ADC_BUSY;
        }
    }
    #endif /* (ADC_ENABLE_LIMIT_CHECK == STD_ON) */
}

static inline void Adc_UpdateSwQueueIndexNoInt
(
    const Adc_GroupType Group,
    uint32 u32CoreId
)
{
    Adc_GroupType GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group];
    Adc_HwUnitType LogicalHwUnitId = Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].AdcLogicalUnitId;
#if (ADC_ENABLE_QUEUING == STD_ON)
    Adc_QueueIndexType SwNormalQueueIndex;
    Adc_QueueIndexType NumOfSwNormalQueue;
#endif

#if (ADC_SOFTWARE_INJECTED_CONVERSIONS_USED == STD_ON)
    if (ADC_CONV_TYPE_INJECTED == Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].eType)
    {
        SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_03();
        if (Adc_aUnitStatus[LogicalHwUnitId].SwInjectedQueueIndex > (Adc_QueueIndexType)0U)
        {
            /* empty queue of  SW injected conversions */
            Adc_aUnitStatus[LogicalHwUnitId].SwInjectedQueueIndex--;
        }
        SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_03();
    }
    else /* SW NORMAL CONVERSION */
#endif /* ADC_SOFTWARE_INJECTED_CONVERSIONS_USED == STD_ON */
    {
        if (Adc_aUnitStatus[LogicalHwUnitId].SwNormalQueueIndex > (Adc_QueueIndexType)0U)
        {
#if (ADC_ENABLE_QUEUING == STD_ON)
            /* remove group without interrupts from queue  */
            NumOfSwNormalQueue = Adc_aUnitStatus[LogicalHwUnitId].SwNormalQueueIndex;
            for (SwNormalQueueIndex = 0U; SwNormalQueueIndex < NumOfSwNormalQueue; SwNormalQueueIndex++)
            {
                if (Group == Adc_aUnitStatus[LogicalHwUnitId].SwNormalQueue[SwNormalQueueIndex])
                {
                    /* The group is found in the Queue */
                    Adc_RemoveFromQueue(LogicalHwUnitId, SwNormalQueueIndex);
                    break;
                }
            }
#if (ADC_ENABLE_START_STOP_GROUP_API == STD_ON)
            /* Start / restore next conversion in the queue*/
            if (0U == SwNormalQueueIndex)
            {
                if(Adc_aUnitStatus[LogicalHwUnitId].SwNormalQueueIndex > 0U)
                {
                    Adc_Ipw_StartNormalConversion(LogicalHwUnitId, u32CoreId);
                }
            }
#endif /* (ADC_ENABLE_START_STOP_GROUP_API == STD_ON) */
#else
            Adc_aUnitStatus[LogicalHwUnitId].SwNormalQueueIndex--;
#endif
        }
    }
}

static inline void Adc_UpdateStatusReadGroupInt
(
    const Adc_GroupType Group,
    uint32 u32CoreId
)
{
    Adc_GroupType GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group];

    /* The following code has been added to respect the State Diagram of Streaming Access Mode */
    if (ADC_COMPLETED == Adc_aGroupStatus[Group].eConversion)
    {
        /* SWS_Adc_00331 -- SWS_Adc_00222 */
        Adc_aGroupStatus[Group].eConversion = ADC_BUSY;
    }
    else if (ADC_STREAM_COMPLETED == Adc_aGroupStatus[Group].eConversion)
    {
        /* Compliance with State Diagram */
        if (ADC_TRIGG_SRC_SW == Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].eTriggerSource)
        {
            if((ADC_CONV_MODE_ONESHOT == Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].eMode)|| \
               ((ADC_CONV_MODE_CONTINUOUS == Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].eMode) && \
                (ADC_ACCESS_MODE_STREAMING == Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].eAccessMode) && \
                (ADC_STREAM_BUFFER_LINEAR == Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].eBufferMode) \
               )
              )
            {
                /* SWS_Adc_00330 - SWS_Adc_00221 */
                Adc_aGroupStatus[Group].eConversion = ADC_IDLE;
            }
            else
            {
                /* Continuous single access or circular streaming buffer mode */
                /* SWS_Adc_00329 -- SWS_Adc_00222 */
                Adc_aGroupStatus[Group].eConversion = ADC_BUSY;
            }
        }
#if (ADC_HW_TRIGGER_API == STD_ON)
        else
        {
            if((ADC_ACCESS_MODE_STREAMING == Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].eAccessMode)&& \
               (ADC_STREAM_BUFFER_LINEAR == Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].eBufferMode)
              )
            {
                /* SWS_Adc_00330 - SWS_Adc_00221 */
                Adc_aGroupStatus[Group].eConversion = ADC_IDLE;
            }
            else
            { /* Simple One-shot mode, in other words in single access mode*/
                /* SWS_Adc_00329 -- SWS_Adc_00222 */
                Adc_aGroupStatus[Group].eConversion = ADC_BUSY;
            }
        }
#endif /* (ADC_HW_TRIGGER_API == STD_ON) */
    }
    else
    {
        ; /* Empty else branch to avoid MISRA */
    }
}

#endif /* (ADC_READ_GROUP_API == STD_ON) */

#if (ADC_HW_TRIGGER_API == STD_ON)
static inline void Adc_UpdateStatusEnableHardware
(
    Adc_GroupType Group,
    Adc_HwUnitType Unit
)
{
    /* Save enabled hardware group ID */
    Adc_aUnitStatus[Unit].OngoingHwGroup = Group;

    /* Mark the Group as BUSY */
    /* SWS_Adc_00222 */
    Adc_aGroupStatus[Group].eConversion = ADC_BUSY;

    /* if HW trigger is enabled for a group, its HW trigger status becomes ENABLED */
    Adc_aGroupStatus[Group].eHwTriggering = ADC_HWTRIGGER_ENABLED;

    /* SWS_Adc_00432 */
    /* Put the conversion results from Results Buffer Base Address */
    Adc_aGroupStatus[Group].ResultIndex = 0U;
}

static inline void Adc_UpdateStatusDisableHardware
(
    Adc_GroupType Group,
    Adc_HwUnitType Unit
)
{
#if (ADC_GRP_NOTIF_CAPABILITY == STD_ON)
    /* [SWS_Adc_00157] If enabled, the function Adc_DisableHardwareTrigger shall disable the notification mechanism for the requested group */
    Adc_aGroupStatus[Group].eNotification = ADC_NOTIFICATION_DISABLED;
#endif /* (ADC_GRP_NOTIF_CAPABILITY == STD_ON) */
#if ((ADC_SETCHANNEL_API == STD_ON) && (ADC_PDB_AVAILABLE == STD_ON))
     Adc_aRuntimeGroupChannel[Group].u32Mask = 0xFFFFFFFFUL;
#endif /* ((ADC_SETCHANNEL_API == STD_ON) && (ADC_PDB_AVAILABLE == STD_ON)) */

    /* SWS_Adc_00361, SWS_Adc_00221 */
    /* Mark the Group status as IDLE */
    Adc_aGroupStatus[Group].eConversion = ADC_IDLE;

    /* Hardware trigger is disabled */
    Adc_aGroupStatus[Group].eHwTriggering = ADC_HWTRIGGER_DISABLED;

    /* Remove hardware group ID */
    Adc_aUnitStatus[Unit].OngoingHwGroup = ADC_INVALID_HW_GROUP_ID;

}
#endif /* (ADC_HW_TRIGGER_API == STD_ON) */

/**
* @brief          This function updates the status variables after the getstreamlastpointer operation.
* @details        This function updates the status variables after the getstreamlastpointer operation.
*
* @param[in]      Group       The group of which conversion will be started.
* @param[in]      u32CoreId       Current CoreID
*
* @return         void
*
*/
static inline void Adc_UpdateStatusAfterGetStream
(
    Adc_GroupType Group,
    uint32 u32CoreId
)
{
    Adc_GroupType GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group];

    /* The following code has been added to respect the State Diagram of Streaming Access Mode */
    if (ADC_COMPLETED == Adc_aGroupStatus[Group].eConversion)
    {
        /* SWS_Adc_00328 -- SWS_Adc_00222 */
        Adc_aGroupStatus[Group].eConversion = ADC_BUSY;
    }

    if (ADC_STREAM_COMPLETED == Adc_aGroupStatus[Group].eConversion)
    {
        /* Compliance with State Diagram */
        if (ADC_TRIGG_SRC_SW == Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].eTriggerSource)
        {
            if((ADC_CONV_MODE_ONESHOT == Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].eMode) || \
               ((ADC_CONV_MODE_CONTINUOUS == Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].eMode) && \
                (ADC_ACCESS_MODE_STREAMING == Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].eAccessMode) && \
                (ADC_STREAM_BUFFER_LINEAR == Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].eBufferMode) \
               )
              )
            {
                /* SWS_Adc_00327 -- SWS_Adc_00221 */
                Adc_aGroupStatus[Group].eConversion = ADC_IDLE;
            }
            else
            {
                /* Continuous single access or circular streaming buffer mode */
                /* SWS_Adc_00326 -- SWS_Adc_00222 */
                Adc_aGroupStatus[Group].eConversion = ADC_BUSY;
            }
        }
#if (STD_ON == ADC_HW_TRIGGER_API)
        else
        {
            /* Hw Trigger */
            if((ADC_ACCESS_MODE_STREAMING == Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].eAccessMode) && \
               (ADC_STREAM_BUFFER_LINEAR == Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].eBufferMode)
              )
            {
                /* SWS_Adc_00327 -- SWS_Adc_00221 */
                Adc_aGroupStatus[Group].eConversion = ADC_IDLE;
            }
            else
            {
                /* Single access mode or circular streaming buffer mode */
                /* SWS_Adc_00326 -- SWS_Adc_00222 */
                Adc_aGroupStatus[Group].eConversion = ADC_BUSY;
            }
        }
#endif /* (STD_ON == ADC_HW_TRIGGER_API) */
    }
}

#if (ADC_ENABLE_CTU_CONTROL_MODE_API == STD_ON)
#if (ADC_DEV_ERROR_DETECT == STD_ON)

/**
* @brief        This function validates the Adc unit is activated for Ctu control mode.
* @details      This service is a non reentrant function used for validating the Adc unit when
*               Ctu control mode is used.
*
* @param[in]    u8ServiceId     Service id
* @param[in]    Unit            The unit id
* @param[in]    u32CoreId       Current CoreID
*
* @return       Std_ReturnType  Standard return type.
* @retval       E_OK:           The call is valid
* @retval       E_NOT_OK:       The call is not valid
*/
static inline Std_ReturnType Adc_ValidateUnitActive
(
    uint8 u8ServiceId,
    Adc_HwUnitType Unit,
    uint32 u32CoreId
)
{
    Std_ReturnType Return = (Std_ReturnType)E_OK;

    if (0u == Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->aAdcUnitSupportCtuControlMode[Unit])
    {
        /* CPR_RTD_00272.adc */
        Adc_ReportDetError(u8ServiceId, (uint8)ADC_E_PARAM_UNIT);
        Return = (Std_ReturnType)E_NOT_OK;
    }

    return Return;
}
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */

/**
* @brief        This function validates the state of s unit when the Ctu Control is enabled.
* @details      This service is a non reentrant function used for validating the state of a unit
*               when the ctu control is enabled.
*
* @param[in]    Unit            The unit id
*
* @return       Std_ReturnType  Standard return type.
* @retval       E_OK:           The call is valid
* @retval       E_NOT_OK:       The call is not valid
*/
static inline Std_ReturnType Adc_ValidateStateCtuControlMode
(
    uint8 u8ServiceId,
    Adc_HwUnitType Unit
)
{
    Std_ReturnType ValidState = (Std_ReturnType)E_OK;

    switch(u8ServiceId)
    {
        case ADC_ENABLE_CTU_CONTROL_MODE_ID:
        {
            ValidState = Adc_ValidateNotBusyNoQueue(Unit, ADC_ENABLE_CTU_CONTROL_MODE_ID);

            /* Check for ongoing conversions */
            if (((Std_ReturnType)E_NOT_OK == ValidState) ||
                (TRUE == Adc_aUnitStatus[Unit].bCtuControlOngoing)
               )
            {
                /* CPR_RTD_00272.adc */
                ValidState = (Std_ReturnType)E_NOT_OK;
                Adc_ReportDetRuntimeError((uint8)ADC_ENABLE_CTU_CONTROL_MODE_ID, (uint8)ADC_E_BUSY);
            }
            break;
        }
        case ADC_DISABLE_CTU_CONTROL_MODE_ID:
        {
            /* Ctu control mode is not already enabled for this unit */
            if(FALSE == Adc_aUnitStatus[Unit].bCtuControlOngoing)
            {
                /* CPR_RTD_00273.adc */
                ValidState = (Std_ReturnType)E_NOT_OK;
                Adc_ReportDetRuntimeError((uint8)ADC_DISABLE_CTU_CONTROL_MODE_ID, (uint8)ADC_E_IDLE);
            }
            break;
        }
        default:
        {
            ; /* no-op */
            break;
        }
    }
    return ValidState;
}

#if (ADC_DEV_ERROR_DETECT == STD_ON)
static inline Std_ReturnType Adc_ValidateCtuControlModeApi
(
    uint8 u8ServiceId,
    uint32 u32CoreId
)
{
    Std_ReturnType Status = E_OK;
    uint8 AdcHwUnit = 0u;
    boolean CtuControlModeEnabled = FALSE;

    if (Adc_pCfgPtr[u32CoreId] == NULL_PTR)
    {
        Adc_ReportDetError(u8ServiceId, (uint8)ADC_E_UNINIT);
        Status = E_NOT_OK;
    }
    else
    {
        for (AdcHwUnit = 0u; AdcHwUnit < ADC_MAX_HW_UNITS; AdcHwUnit++)
        {
            if (Adc_aUnitStatus[AdcHwUnit].bCtuControlOngoing)
            {
                CtuControlModeEnabled = TRUE; /* CtuControl Mode is considered enabled, if it is enabled for at least one AdcHwUnit */
            }
        }
    }
    if (CtuControlModeEnabled == FALSE)
    {
        Adc_ReportDetError(u8ServiceId, (uint8)ADC_E_CONTROL_MODE_DISABLED);
        Status = E_NOT_OK;
    }

    return Status;
}
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */

#endif /* (ADC_ENABLE_CTU_CONTROL_MODE_API == STD_ON) */

#if (ADC_POWER_STATE_SUPPORTED == STD_ON)
static inline Std_ReturnType Adc_ValidateStateAndPtr
(
    uint8 u8ServiceId,
    Adc_PowerStateRequestResultType * pResult,
    uint32 u32CoreId
)
{
    Std_ReturnType RetVal = (Std_ReturnType)E_OK;
    Std_ReturnType ValidCoreId = (Std_ReturnType)E_NOT_OK;

    if (NULL_PTR == pResult)
    {
#if (ADC_DEV_ERROR_DETECT == STD_ON)
        Adc_ReportDetError(u8ServiceId, (uint8)ADC_E_PARAM_POINTER);
#else
        (void)u8ServiceId;
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */
        RetVal = (Std_ReturnType)E_NOT_OK;
        (void)ValidCoreId;
    }
    else if(NULL_PTR == Adc_pCfgPtr[u32CoreId])
    {
        /* Adc module is not initialized */
#if (ADC_DEV_ERROR_DETECT == STD_ON)
        /* SWS_Adc_00496, SWS_Adc_00493, SWS_Adc_00491, SWS_Adc_00486 */
        Adc_ReportDetError(u8ServiceId, (uint8)ADC_E_UNINIT);
#else
        (void)u8ServiceId;
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */

        *pResult = ADC_NOT_INIT;
        RetVal = (Std_ReturnType)E_NOT_OK;
        (void)ValidCoreId;
    }
    else
    {
        ValidCoreId = Adc_CheckCurrentCoreId(Adc_pCfgPtr[u32CoreId], u32CoreId);
        if((Std_ReturnType)E_NOT_OK == ValidCoreId)
        {
#if (ADC_DEV_ERROR_DETECT == STD_ON)
            /* CPR_RTD_00420.adc */
            Adc_ReportDetError(u8ServiceId, (uint8)ADC_E_PARAM_CONFIG);
#else
            (void)u8ServiceId;
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */

            *pResult = ADC_NOT_INIT;
            RetVal = (Std_ReturnType)E_NOT_OK;
        }
    }
    return RetVal;
}

static inline Std_ReturnType Adc_ValidateIdleState
(
    uint8 u8ServiceId,
    Adc_PowerStateRequestResultType * pResult,
    uint32 u32CoreId
)
{
    Std_ReturnType RetVal = (Std_ReturnType)E_OK;
    Adc_HwUnitType LogicalHwUnitId;

    for (LogicalHwUnitId = 0U; LogicalHwUnitId < ADC_MAX_HW_UNITS; LogicalHwUnitId++)
    {
        if(Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->Mapping.au8Adc_HwUnit[LogicalHwUnitId] == (uint8)STD_ON) /* HW unit enabled on current partition */
        {
            if (((Std_ReturnType)E_NOT_OK == Adc_ValidateNotBusyNoQueue(LogicalHwUnitId, u8ServiceId))
#if (ADC_ENABLE_CTU_CONTROL_MODE_API == STD_ON)
               || (TRUE == Adc_aUnitStatus[LogicalHwUnitId].bCtuControlOngoing)
#endif /* if (ADC_ENABLE_CTU_CONTROL_MODE_API == STD_ON) */
               )
            {
                /* Adc conversion is ongoing */
                /* SWS_Adc_00487 */
                Adc_ReportDetRuntimeError(u8ServiceId, ADC_E_NOT_DISENGAGED);
                *pResult = ADC_SEQUENCE_ERROR;
                RetVal = (Std_ReturnType)E_NOT_OK;
                break;
            }
        }
    }
    return RetVal;
}

static inline Std_ReturnType Adc_ValidatePowerStateSupport
(
    uint8 u8ServiceId,
    Adc_PowerStateType ePowerState,
    Adc_PowerStateRequestResultType * pResult
)
{
    Std_ReturnType RetVal = (Std_ReturnType)E_OK;

    /* If the power state is not supported or low power state is not supported at all */
    if(ePowerState >= ADC_NODEFINE_POWER)
    {
        /* The state is not supported */
        #if (ADC_DEV_ERROR_DETECT == STD_ON)
        Adc_ReportDetError(u8ServiceId, ADC_E_POWER_STATE_NOT_SUPPORTED);
        #else
        (void)u8ServiceId;
        #endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */

        *pResult = ADC_POWER_STATE_NOT_SUPP;
        RetVal = (Std_ReturnType)E_NOT_OK;
    }
    return RetVal;
}

static inline Std_ReturnType Adc_ValidatePowerStatePrepare
(
    uint8 u8ServiceId,
    Adc_PowerStateRequestResultType * pResult,
    uint32 u32CoreId
)
{
    Std_ReturnType RetVal = (Std_ReturnType)E_OK;

    /* If the terget state is invalid state */
    if(Adc_eTargetState[u32CoreId] >= ADC_NODEFINE_POWER)
    {
        /* The target power state is not prepared */
        #if (ADC_DEV_ERROR_DETECT == STD_ON)
        /* SWS_Adc_00490 */
        Adc_ReportDetError(u8ServiceId, ADC_E_PERIPHERAL_NOT_PREPARED);
        #else
        (void)u8ServiceId;
        #endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */

        *pResult = ADC_SEQUENCE_ERROR;
        RetVal = (Std_ReturnType)E_NOT_OK;
    }
    return RetVal;
}
#endif /* (ADC_POWER_STATE_SUPPORTED == STD_ON) */

#if (ADC_ENABLE_CTUTRIG_NONAUTO_API == STD_ON) || defined(__DOXYGEN__)
#if (ADC_DEV_ERROR_DETECT == STD_ON)
static inline Std_ReturnType Adc_CheckTriggerSourceRange
(
    uint8 u8ServiceId,
    Adc_HwTriggerTimerType TriggerSource,
    boolean bTriggFound
)
{
    Std_ReturnType Status = E_OK;

    if ((TriggerSource > (Adc_HwTriggerTimerType)ADC_IPW_MAX_CTU_TRIG_SOURCE_ID) || (bTriggFound == FALSE))
    {
        Adc_ReportDetError(u8ServiceId, (uint8)ADC_E_WRONG_TRIGG_SRC);
        Status = (Std_ReturnType)E_NOT_OK;
    }

    return Status;
}
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */
#endif /* (ADC_ENABLE_CTUTRIG_NONAUTO_API == STD_ON) || defined(__DOXYGEN__) */

#if (ADC_SETCHANNEL_API == STD_ON)
#if (ADC_DEV_ERROR_DETECT == STD_ON)
static inline Std_ReturnType Adc_CheckSetChannelParams
(
    const Adc_GroupType Group,
#if (ADC_DELAY_AVAILABLE == STD_ON)
    const uint16 * Delays,
    const uint32 ChannelUpdateMask,
#endif /* (ADC_DELAY_AVAILABLE == STD_ON) */
    const Adc_ChannelIndexType NumberOfChannel
)
{
    volatile uint32 u32CoreId = (uint32)Adc_GetCoreID();
    const uint32 u32CoreIdTemp = u32CoreId; /* Used to avoid MISRA */
    Std_ReturnType StatusChecks = (Std_ReturnType)E_OK;
    const Adc_GroupType GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group];
    if(0U == NumberOfChannel)
    {
        Adc_ReportDetError(ADC_SETCHANNEL_ID, (uint8)ADC_E_PARAM_CHANNEL);
        StatusChecks = (Std_ReturnType)E_NOT_OK;
    }
#if (ADC_DELAY_AVAILABLE == STD_ON)
    else if ((0U == ((1UL << (NumberOfChannel - 1U)) & ChannelUpdateMask))
                && (NumberOfChannel != Adc_pCfgPtr[u32CoreIdTemp]->pGroups[GroupIndex].AssignedChannelCount)
            )
    {
        /* Last channel bit must be enabled for having interrupt */
        Adc_ReportDetError(ADC_SETCHANNEL_ID, (uint8)ADC_E_PARAM_CHANNEL);
    }
    else if (((Std_ReturnType)E_NOT_OK == Adc_ValidatePtr(ADC_SETCHANNEL_ID, Delays))
                && (TRUE == Adc_pCfgPtr[u32CoreIdTemp]->pGroups[GroupIndex].pAdcIpwGroupConfig->AdcGroupEnableChannelDelays)
                && (NumberOfChannel != Adc_pCfgPtr[u32CoreIdTemp]->pGroups[GroupIndex].AssignedChannelCount)
            )
    {
        /* If NumberOfChannel is different from number already configured, Delays pointer != NULL. */
        Adc_ReportDetError(ADC_SETCHANNEL_ID, (uint8)ADC_E_PARAM_POINTER);
    }
    else if ( \
                ((uint8)STD_ON == Adc_pCfgPtr[u32CoreIdTemp]->pGroups[GroupIndex].u8AdcWithoutInterrupt)
#if (STD_ON == ADC_OPTIMIZE_DMA_STREAMING_GROUPS)
                || (TRUE == Adc_pCfgPtr[u32CoreIdTemp]->pGroups[GroupIndex].bAdcOptimizeDmaStream)
#endif /* (STD_ON == ADC_OPTIMIZE_DMA_STREAMING_GROUPS) */
            )
    {
        /* Number of channels won't be greater than maximum number of SC1 registers */
        if(ADC_MAX_CHAN_COUNT < NumberOfChannel)
        {
            Adc_ReportDetError(ADC_SETCHANNEL_ID, (uint8)ADC_E_PARAM_CHANNEL);
            StatusChecks = (Std_ReturnType)E_NOT_OK;
        }
    }
#if (ADC_OPTIMIZE_ONESHOT_HW_TRIGGER == STD_ON)
    else
    {
        /* Number of channels won't be greater than maximum number of SC1 registers */
        if(ADC_MAX_CHAN_COUNT < NumberOfChannel)
        {
            Adc_ReportDetError(ADC_SETCHANNEL_ID, (uint8)ADC_E_PARAM_CHANNEL);
            StatusChecks = (Std_ReturnType)E_NOT_OK;
        }
    }
#else
    else
    {
        ; /* Empty else branch to avoid MISRA */
    }
#endif /* (ADC_OPTIMIZE_ONESHOT_HW_TRIGGER == STD_ON) */
#endif /* (ADC_DELAY_AVAILABLE == STD_ON) */

    return StatusChecks;
}
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */
#if ((ADC_HW_TRIGGER_API == STD_ON) && (ADC_CTU_TRIGGER_MODE_SUPPORTED == STD_ON))
static inline Std_ReturnType Adc_CheckSetChannelCtuTriggers
(
    const Adc_GroupType GroupIndex,
    const Adc_HwUnitType LogicalHwUnitId,
    const Adc_ChannelIndexType NumberOfChannel,
    const uint32 u32CoreId
)
{
    Std_ReturnType StatusChecks = (Std_ReturnType)E_OK;
    if (Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].eTriggerSource == ADC_TRIGG_SRC_HW)
    {
        /* Check number of channel in the list if the HW trigger source comes from CTU or BCTU */
        if (Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].HwTriggerSource <= (Adc_HwTriggerTimerType)ADC_IPW_MAX_CTU_TRIG_SOURCE_ID)
        {
#if (ADC_CTU_HW_TRIGGER_OPTIMIZATION == STD_OFF)
            /* Number channel should be less than maximum element of the CTU or BCTU List */
            if(NumberOfChannel > Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->CtuListMaxNumElems[LogicalHwUnitId])
            {
                Adc_ReportDetError(ADC_SETCHANNEL_ID, (uint8)ADC_E_PARAM_CHANNEL);
                StatusChecks = (Std_ReturnType)E_NOT_OK;
            }
#else
            /* Adc_SetChannel doesn't support ADC_CTU_HW_TRIGGER_OPTIMIZATION feature */
            Adc_ReportDetError(ADC_SETCHANNEL_ID, (uint8)ADC_E_PARAM_GROUP);
            StatusChecks = (Std_ReturnType)E_NOT_OK;
#endif /* (ADC_CTU_HW_TRIGGER_OPTIMIZATION == STD_OFF) */
            /* TODO: in case of CTU Trigger, need to check Channel ID is not greater than 15 due to limitation of CTU Hardware */
        }
    }
    return StatusChecks;
}
#endif /* ((ADC_HW_TRIGGER_API == STD_ON) && (ADC_CTU_TRIGGER_MODE_SUPPORTED == STD_ON)) */
#endif /* (ADC_SETCHANNEL_API == STD_ON) */

#if ((ADC_DUAL_CLOCK_MODE == STD_ON) && (ADC_DEV_ERROR_DETECT == STD_ON))
static inline boolean Adc_CheckSetClockModeCoreAndParam
(
    const Adc_SelectPrescalerType Prescaler,
    const uint32 u32CoreId
)
{
    boolean Valid = FALSE;
    Std_ReturnType ValidCoreId = (Std_ReturnType)E_NOT_OK;

    if (NULL_PTR == Adc_pCfgPtr[u32CoreId])
    {
        Adc_ReportDetError((uint8)ADC_SETCLOCKMODE_ID, (uint8)ADC_E_UNINIT);
    }
    else
    {
        ValidCoreId = Adc_CheckCurrentCoreId(Adc_pCfgPtr[u32CoreId], u32CoreId);
        if((Std_ReturnType)E_NOT_OK == ValidCoreId)
        {
            /* CPR_RTD_00420.adc */
            Adc_ReportDetError((uint8)ADC_SETCLOCKMODE_ID, (uint8)ADC_E_PARAM_CONFIG);
        }
        else if ((ADC_NORMAL != Prescaler) && (ADC_ALTERNATE != Prescaler))
        {
            Adc_ReportDetError((uint8)ADC_SETCLOCKMODE_ID, (uint8)ADC_E_INVALID_CLOCK_MODE);
        }
        else
        {
            Valid = TRUE;
        }
    }

    return Valid;
}
#endif /* ((ADC_DUAL_CLOCK_MODE == STD_ON) && (ADC_DEV_ERROR_DETECT == STD_ON)) */

/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/
/* SWS_Adc_00365, SWS_Adc_00246, SWS_Adc_00056 */
/** @implements      Adc_Init_Activity */
void Adc_Init
(
    const Adc_ConfigType * ConfigPtr
)
{
    volatile uint32 u32CoreId;
    uint32 u32CoreIdTemp;
    Std_ReturnType ValidCoreId;
    Std_ReturnType TimeOutStatus;
#if (ADC_DEV_ERROR_DETECT == STD_ON) && ((ADC_VALIDATE_GLOBAL_CALL == STD_ON) || (ADC_VALIDATE_PARAMS == STD_ON))
    Std_ReturnType ValidStatus;
#endif

    u32CoreId = (uint32)Adc_GetCoreID();
    u32CoreIdTemp = u32CoreId; /* Used to avoid MISRA */
#if (ADC_DEV_ERROR_DETECT == STD_ON) && (ADC_VALIDATE_GLOBAL_CALL == STD_ON)
        ValidStatus = Adc_ValidateGloballCall(ADC_INIT_ID, u32CoreId);
        if ((Std_ReturnType)E_OK == ValidStatus)
        {
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) && (ADC_VALIDATE_GLOBAL_CALL == STD_ON) */

#if (ADC_DEV_ERROR_DETECT == STD_ON) && (ADC_VALIDATE_PARAMS == STD_ON)
            ValidStatus = Adc_ValidatePtrInit(ConfigPtr);
            if ((Std_ReturnType)E_OK == ValidStatus)
            {
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) && (ADC_VALIDATE_PARAMS == STD_ON) */
#if (ADC_PRECOMPILE_SUPPORT == STD_ON)
                ValidCoreId = Adc_CheckCurrentCoreId(Adc_ConfigVariantPredefined[u32CoreId], u32CoreIdTemp);
#else
                ValidCoreId = Adc_CheckCurrentCoreId(ConfigPtr, u32CoreId);
#endif /* (ADC_PRECOMPILE_SUPPORT == STD_ON) */
                if((Std_ReturnType)E_OK == ValidCoreId)
                {
#if (ADC_PRECOMPILE_SUPPORT == STD_ON)
                    (void)ConfigPtr;
                    /* ADC342 */
                    const Adc_ConfigType * predefined = Adc_ConfigVariantPredefined[u32CoreId];
                    Adc_pCfgPtr[u32CoreId] = predefined;
#else
                    /* SWS_Adc_00054 */
                    Adc_pCfgPtr[u32CoreId] = ConfigPtr;
#endif /* (ADC_PRECOMPILE_SUPPORT == STD_ON) */
                    /* Initialize the unit status for all units */
                    Adc_InitUnitStatus(u32CoreId);
                    /* Initialize the group status for all groups */
                    Adc_InitGroupsStatus(u32CoreId);
                    /* Call the low level function to initialize driver */
                    TimeOutStatus = Adc_Ipw_Init(Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig, u32CoreIdTemp);

                    if ((Std_ReturnType)E_NOT_OK == TimeOutStatus)
                    {
                        /* Timeout is expired.*/
                        Adc_ReportDetRuntimeError((uint8)ADC_INIT_ID, (uint8)ADC_E_TIMEOUT);
                    }
#if ((ADC_ENABLE_TEMPSENSE_API == STD_ON) && (ADC_POWER_ON_TEMPSENSE == STD_ON))
                    else
                    {
                        (void)Adc_TempSenseSetPowerMode(ADC_NORMAL_MODE);
                    }
#endif /* ((ADC_ENABLE_TEMPSENSE_API == STD_ON) && (ADC_POWER_ON_TEMPSENSE == STD_ON)) */
                }
#if (ADC_DEV_ERROR_DETECT == STD_ON)
                else
                {
                    ValidStatus = (Std_ReturnType)E_NOT_OK;
                    /* CPR_RTD_00420.adc */
                    Adc_ReportDetError((uint8)ADC_INIT_ID, (uint8)ADC_E_PARAM_CONFIG);
                }
#endif /* ADC_DEV_ERROR_DETECT == STD_ON */
#if (ADC_VALIDATE_PARAMS == STD_ON)
            }
#endif /* ADC_VALIDATE_PARAMS == STD_ON */

#if (ADC_DEV_ERROR_DETECT == STD_ON) && (ADC_VALIDATE_GLOBAL_CALL == STD_ON)
        }
        if((Std_ReturnType)E_OK == ValidStatus)
        {
            Adc_EndValidateGloballCall(ValidStatus, ADC_INIT_ID, u32CoreId);
        }
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) && (ADC_VALIDATE_GLOBAL_CALL == STD_ON) */
}

/* SWS_Adc_00419 */
/** @implements      Adc_SetupResultBuffer_Activity */
Std_ReturnType Adc_SetupResultBuffer
(
    Adc_GroupType Group,
    Adc_ValueGroupType * const DataBufferPtr
)
{
    volatile uint32 u32CoreId;
    Adc_GroupType GroupIndex;
    Std_ReturnType TempReturn = (Std_ReturnType)E_NOT_OK;
    const Adc_GroupConfigurationType * pGroupPtr = NULL_PTR;

    u32CoreId = (uint32)Adc_GetCoreID();
#if (ADC_VALIDATE_CALL_AND_GROUP == STD_ON)
    if ((Std_ReturnType)E_OK == Adc_ValidateCallAndGroup(ADC_SETUPRESULTBUFFER_ID, Group, u32CoreId))
    {
#endif /* ADC_VALIDATE_CALL_AND_GROUP == STD_ON */
        /* Get the mapping index of group in the current partition */
        GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group];

#if (ADC_VALIDATE_PARAMS == STD_ON)
        if ((Std_ReturnType)E_OK == Adc_ValidatePtr(ADC_SETUPRESULTBUFFER_ID, DataBufferPtr))
        {
#endif /* ADC_VALIDATE_PARAMS == STD_ON */
            if ((Std_ReturnType)E_OK == Adc_ValidateSetupBufferNotBusy(Group))
            {
                pGroupPtr = &Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex];
                /* SWS_Adc_00420 */
                (pGroupPtr->pResultsBufferPtr[Group]) = DataBufferPtr;
#ifdef ADC_DMA_SUPPORTED
                if(((uint8)STD_ON == pGroupPtr->u8AdcExtDMAChanEnable) && ((uint8)STD_ON == pGroupPtr->u8AdcWithoutInterrupt))
                {
                    /* Need to reset last buffer to invalid value before starting conversion. Because since External Dma Channel is used,
                    last buffer will be used to check by Adc_ReadGroup to make sure the results of all channel was available. */
                    DataBufferPtr[(pGroupPtr->AssignedChannelCount - 1U)] = ADC_IPW_INVALID_DATA_RESULT_DMA;
                }
#endif /* ADC_DMA_SUPPORTED */
                TempReturn = (Std_ReturnType)E_OK;
            }
#if (ADC_VALIDATE_PARAMS == STD_ON)
        }
#endif /* ADC_VALIDATE_PARAMS == STD_ON */

#if (ADC_VALIDATE_CALL_AND_GROUP == STD_ON)
    }
#endif /* ADC_VALIDATE_CALL_AND_GROUP == STD_ON */

    return TempReturn;
}

#if (ADC_DEINIT_API == STD_ON)
/* SWS_Adc_00366, SWS_Adc_00111 */
/** @implements      Adc_DeInit_Activity */
void Adc_DeInit(void)
{
    volatile uint32 u32CoreId;
#if (ADC_PDB_AVAILABLE == STD_ON)
    Adc_HwUnitType LogicalHwUnitId = 0U;
#endif /* (ADC_PDB_AVAILABLE == STD_ON) */
    Std_ReturnType ValidCoreId;
    uint32 u32CoreIdTemp;
    Std_ReturnType TempReturn;

    Std_ReturnType ValidStatus;

    u32CoreId = (uint32)Adc_GetCoreID();
    u32CoreIdTemp = u32CoreId; /* Used to avoid MISRA */
#if (ADC_VALIDATE_GLOBAL_CALL == STD_ON)
    ValidStatus = Adc_ValidateGloballCall(ADC_DEINIT_ID, u32CoreId);
    if ((Std_ReturnType)E_OK == ValidStatus)
    {
#endif /* ADC_VALIDATE_GLOBAL_CALL == STD_ON */
        ValidCoreId = Adc_CheckCurrentCoreId(Adc_pCfgPtr[u32CoreId], u32CoreIdTemp);
        if((Std_ReturnType)E_OK == ValidCoreId)
        {
            ValidStatus = Adc_ValidateDeInitNotBusy(u32CoreId);
            if ((Std_ReturnType)E_OK == ValidStatus)
            {

                TempReturn = Adc_Ipw_DeInit(u32CoreId);
                if ((Std_ReturnType)E_NOT_OK == TempReturn)
                {
                    Adc_ReportDetRuntimeError((uint8)ADC_DEINIT_ID, (uint8)ADC_E_TIMEOUT);
                }
#if (ADC_PDB_AVAILABLE == STD_ON)
                for (LogicalHwUnitId = 0U; LogicalHwUnitId < ADC_MAX_HW_UNITS; LogicalHwUnitId++)
                {
                    if(Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->Mapping.au8Adc_HwUnit[LogicalHwUnitId] == (uint8)STD_ON) /* HW unit enabled on current partition */
                    {
                        Adc_aUnitStatus[LogicalHwUnitId].u8Sc1Used = 0U;
                    }
                }
#endif /* (ADC_PDB_AVAILABLE == STD_ON) */
                /* Undefined the global pointer to the configuration */
                Adc_pCfgPtr[u32CoreId] = NULL_PTR;

            }
        }
#if (ADC_VALIDATE_GLOBAL_CALL == STD_ON)
        else
        {
            /* CPR_RTD_00420.adc */
            Adc_ReportDetError(ADC_DEINIT_ID, (uint8)ADC_E_PARAM_CONFIG);
        }
    }
    Adc_EndValidateGloballCall(ValidStatus, ADC_DEINIT_ID, u32CoreId);
#endif /* ADC_VALIDATE_GLOBAL_CALL == STD_ON */
}
#endif /* (ADC_DEINIT_API == STD_ON) */

#if (ADC_ENABLE_START_STOP_GROUP_API == STD_ON)
/* SWS_Adc_00367, SWS_Adc_00356, SWS_Adc_00156, SWS_Adc_00061, SWS_Adc_00413 */
/** @implements      Adc_StartGroupConversion_Activity */
void Adc_StartGroupConversion
(
    Adc_GroupType Group
)
{
    volatile uint32 u32CoreId;
    Adc_GroupType GroupIndex = 0U;
    /* ADC Hardware unit on which the requested group will run */
    Adc_HwUnitType LogicalHwUnitId = 0U;

    u32CoreId = (uint32)Adc_GetCoreID();
#if (ADC_VALIDATE_CALL_AND_GROUP == STD_ON)
    if ((Std_ReturnType)E_OK == Adc_ValidateCallAndGroup(ADC_STARTGROUPCONVERSION_ID, Group, u32CoreId))
    {
#endif /* ADC_VALIDATE_CALL_AND_GROUP == STD_ON */
        /* Get the mapping index of group in the current partition */
        GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group];

        if ((Std_ReturnType)E_OK == Adc_ValidateStateStartGroupConvNotBusy(Group, u32CoreId))
        {
#if (ADC_VALIDATE_PARAMS == STD_ON)
            if ((Std_ReturnType)E_OK == Adc_ValidateExtraParams(ADC_STARTGROUPCONVERSION_ID,
                                                                ADC_E_BUFFER_UNINIT_LIST | \
                                                                ADC_E_WRONG_TRIGG_SRC_LIST | \
                                                                ADC_E_QUEUE_FULL_LIST,
                                                                Group,
                                                                u32CoreId
                                                               )
               )
            {
#endif /* ADC_VALIDATE_PARAMS == STD_ON */

                /* Get the unit to which the group belongs to */
                LogicalHwUnitId = Adc_pCfgPtr[u32CoreId]->pGroups[(GroupIndex)].AdcLogicalUnitId;
                /* Update queue */
                Adc_UpdateStatusStartConversion(Group, LogicalHwUnitId, u32CoreId);

#if (ADC_VALIDATE_PARAMS == STD_ON)
            }
#endif /* ADC_VALIDATE_PARAMS == STD_ON */
        }
#if (ADC_VALIDATE_CALL_AND_GROUP == STD_ON)
    }
#endif /* ADC_VALIDATE_CALL_AND_GROUP == STD_ON */
}

/* SWS_Adc_00368, SWS_Adc_00356, SWS_Adc_00413 */
/** @implements      Adc_StopGroupConversion_Activity */
void Adc_StopGroupConversion
(
    Adc_GroupType Group
)
{
    /* ADC Logical Unit Id on which the requested group will run */
    Adc_HwUnitType LogicalHwUnitId = 0U;
    volatile uint32 u32CoreId;
    Adc_GroupType GroupIndex = 0U;

    u32CoreId = (uint32)Adc_GetCoreID();
#if (ADC_VALIDATE_CALL_AND_GROUP == STD_ON)
    if ((Std_ReturnType)E_OK == Adc_ValidateCallAndGroup(ADC_STOPGROUPCONVERSION_ID, Group, u32CoreId))
    {
#endif /* ADC_VALIDATE_CALL_AND_GROUP == STD_ON */

        if ((Std_ReturnType)E_OK == Adc_ValidateStateNotIdle(ADC_STOPGROUPCONVERSION_ID, Group, u32CoreId))
        {
#if (ADC_VALIDATE_PARAMS == STD_ON)
            if ((Std_ReturnType)E_OK == Adc_ValidateExtraParams(ADC_STOPGROUPCONVERSION_ID,
                                                                ADC_E_WRONG_TRIGG_SRC_LIST,
                                                                Group,
                                                                u32CoreId
                                                               )
               )
            {
#endif /* ADC_VALIDATE_PARAMS == STD_ON */
                GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group];
                /* Get the unit to which the group belongs to */
                LogicalHwUnitId = Adc_pCfgPtr[u32CoreId]->pGroups[(GroupIndex)].AdcLogicalUnitId;
                Adc_UpdateStatusStopConversion(Group, LogicalHwUnitId, u32CoreId);

#if (ADC_VALIDATE_PARAMS == STD_ON)
            }
#endif /* ADC_VALIDATE_PARAMS == STD_ON */
        }

#if (ADC_VALIDATE_CALL_AND_GROUP == STD_ON)
    }
#endif /* ADC_VALIDATE_CALL_AND_GROUP == STD_ON */
}
#endif /* (ADC_ENABLE_START_STOP_GROUP_API == STD_ON) */

#if (ADC_READ_GROUP_API == STD_ON)
/* SWS_Adc_00369, SWS_Adc_00383, SWS_Adc_00503 */
/** @implements      Adc_ReadGroup_Activity */
Std_ReturnType Adc_ReadGroup
(
    Adc_GroupType Group,
    Adc_ValueGroupType * DataBufferPtr
)
{
    volatile uint32 u32CoreId;
    /* Return Value */
    Std_ReturnType GroupRet = (Std_ReturnType)E_NOT_OK;
    boolean bFlag = TRUE;

    u32CoreId = (uint32)Adc_GetCoreID();
#if (ADC_VALIDATE_CALL_AND_GROUP == STD_ON)
    if ((Std_ReturnType)E_OK == Adc_ValidateCallAndGroup(ADC_VALUEREADGROUP_ID, Group, u32CoreId))
    {
#endif /* ADC_VALIDATE_CALL_AND_GROUP == STD_ON */

#if (ADC_VALIDATE_PARAMS == STD_ON)
        if ((Std_ReturnType)E_OK == Adc_ValidatePtr(ADC_VALUEREADGROUP_ID, DataBufferPtr))
        {
#endif /* ADC_VALIDATE_PARAMS == STD_ON */

            if ((Std_ReturnType)E_OK == Adc_ValidateStateNotIdle(ADC_VALUEREADGROUP_ID, Group, u32CoreId))
            {
                /* SWS_Adc_00447 */
                GroupRet = Adc_Ipw_ReadGroup(Group, DataBufferPtr, &bFlag, u32CoreId);
                /*if the conversion is finished or if the limit checking was failed for the group without interrupts*/
                if(((Std_ReturnType)E_OK == GroupRet) || (FALSE == bFlag))
                {
                    Adc_UpdateStatusReadGroup(Group, bFlag, u32CoreId);
                }
            }
#if (ADC_VALIDATE_PARAMS == STD_ON)
        }
#endif /* ADC_VALIDATE_PARAMS == STD_ON */

#if (ADC_VALIDATE_CALL_AND_GROUP == STD_ON)
    }
#endif /* ADC_VALIDATE_CALL_AND_GROUP == STD_ON */

    return(GroupRet);
}
#endif /* (ADC_READ_GROUP_API == STD_ON) */

#if (ADC_HW_TRIGGER_API == STD_ON)
/* SWS_Adc_00370, SWS_Adc_00114, SWS_Adc_00114, SWS_Adc_00413 */
/** @implements      Adc_EnableHardwareTrigger_Activity */
void Adc_EnableHardwareTrigger
(
    Adc_GroupType Group
)
{
    volatile uint32 u32CoreId;
    Adc_GroupType GroupIndex = 0U;
    /* ADC Logical Unit Id on which the requested group will run */
    Adc_HwUnitType LogicalHwUnitId = 0U;
    Std_ReturnType ValidStatus;

    u32CoreId = (uint32)Adc_GetCoreID();
#if (ADC_VALIDATE_CALL_AND_GROUP == STD_ON)
    if ((Std_ReturnType)E_OK == Adc_ValidateCallAndGroup(ADC_ENABLEHARDWARETRIGGER_ID, Group, u32CoreId))
    {
#endif /* ADC_VALIDATE_CALL_AND_GROUP == STD_ON */
        /* Get the mapping index of group in the current partition */
        GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group];

        if ((Std_ReturnType)E_OK == Adc_ValidateStateEnableHwTriggNotBusy(Group, u32CoreId))
        {
#if (ADC_VALIDATE_PARAMS == STD_ON)
            if ((Std_ReturnType)E_OK == Adc_ValidateExtraParams(ADC_ENABLEHARDWARETRIGGER_ID,
                                                                ADC_E_BUFFER_UNINIT_LIST | \
                                                                ADC_E_WRONG_TRIGG_SRC_LIST | \
                                                                ADC_E_WRONG_CONV_MODE_LIST,
                                                                Group,
                                                                u32CoreId
                                                               )
               )
            {
#endif /* ADC_VALIDATE_PARAMS == STD_ON */

                /* Get the unit to which the group belongs to */
                LogicalHwUnitId = Adc_pCfgPtr[u32CoreId]->pGroups[(GroupIndex)].AdcLogicalUnitId;
                Adc_UpdateStatusEnableHardware(Group, LogicalHwUnitId);

                ValidStatus = Adc_Ipw_EnableHardwareTrigger(Group, LogicalHwUnitId, u32CoreId);
                if ((Std_ReturnType)E_NOT_OK == ValidStatus)
                {
                    /* There is a running conversion.*/
                    Adc_ReportDetRuntimeError((uint8)ADC_ENABLEHARDWARETRIGGER_ID, (uint8)ADC_E_BUSY);
                }
#if (ADC_VALIDATE_PARAMS == STD_ON)
            }
#endif /* ADC_VALIDATE_PARAMS == STD_ON */
        }

#if (ADC_VALIDATE_CALL_AND_GROUP == STD_ON)
    }
#endif /* ADC_VALIDATE_CALL_AND_GROUP == STD_ON */
}

/* SWS_Adc_00371, SWS_Adc_00413, SWS_Adc_00145 */
/** @implements      Adc_DisableHardwareTrigger_Activity */
void Adc_DisableHardwareTrigger
(
    Adc_GroupType Group
)
{
    volatile uint32 u32CoreId;
    Adc_GroupType GroupIndex = 0U;
    /* ADC Logical Unit Id on which the requested group will run */
    Adc_HwUnitType LogicalHwUnitId = 0U;

    u32CoreId = (uint32)Adc_GetCoreID();
#if (ADC_VALIDATE_CALL_AND_GROUP == STD_ON)
    if ((Std_ReturnType)E_OK == Adc_ValidateCallAndGroup(ADC_DISABLEHARDWARETRIGGER_ID, Group, u32CoreId))
    {
#endif /* ADC_VALIDATE_CALL_AND_GROUP == STD_ON */

        if ((Std_ReturnType)E_OK == Adc_ValidateStateNotIdle(ADC_DISABLEHARDWARETRIGGER_ID, Group, u32CoreId))
        {

#if (ADC_VALIDATE_PARAMS == STD_ON)
            if ((Std_ReturnType)E_OK == Adc_ValidateExtraParams(ADC_DISABLEHARDWARETRIGGER_ID,
                                                                ADC_E_WRONG_TRIGG_SRC_LIST | \
                                                                ADC_E_WRONG_CONV_MODE_LIST,
                                                                Group,
                                                                u32CoreId
                                                               )
               )
            {
#endif /* ADC_VALIDATE_PARAMS == STD_ON */

                GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group];
                /* Get the unit to which the group belongs to */
                LogicalHwUnitId = Adc_pCfgPtr[u32CoreId]->pGroups[(GroupIndex)].AdcLogicalUnitId;
                Adc_UpdateStatusDisableHardware(Group, LogicalHwUnitId);

                Adc_Ipw_DisableHardwareTrigger(Group, LogicalHwUnitId, u32CoreId);

#if (ADC_VALIDATE_PARAMS == STD_ON)
            }
#endif /* ADC_VALIDATE_PARAMS == STD_ON */
        }

#if (ADC_VALIDATE_CALL_AND_GROUP == STD_ON)
    }
#endif /* ADC_VALIDATE_CALL_AND_GROUP == STD_ON */
}
#endif /* (ADC_HW_TRIGGER_API == STD_ON) */

#if (ADC_GRP_NOTIF_CAPABILITY == STD_ON)
/* SWS_Adc_00372, SWS_Adc_00413 */
/** @implements      Adc_EnableGroupNotification_Activity */
void Adc_EnableGroupNotification
(
    Adc_GroupType Group
)
{
#if (ADC_DEV_ERROR_DETECT == STD_ON)
    volatile uint32 u32CoreId;

    u32CoreId = (uint32)Adc_GetCoreID();
#endif /* ADC_DEV_ERROR_DETECT == STD_ON */

#if (ADC_VALIDATE_CALL_AND_GROUP == STD_ON)
    if ((Std_ReturnType)E_OK == Adc_ValidateCallAndGroup(ADC_ENABLEGROUPNOTIFICATION_ID, Group, u32CoreId))
    {
#endif /* ADC_VALIDATE_CALL_AND_GROUP == STD_ON */

#if (ADC_VALIDATE_NOTIFY_CAPABILITY == STD_ON)
        if ((Std_ReturnType)E_OK == Adc_NotifyCapablity(ADC_ENABLEGROUPNOTIFICATION_ID, Group, u32CoreId))
        {
#endif /* ADC_VALIDATE_NOTIFY_CAPABILITY == STD_ON */
            /* SWS_Adc_00057 */
            Adc_aGroupStatus[Group].eNotification = ADC_NOTIFICATION_ENABLED;

#if (ADC_VALIDATE_NOTIFY_CAPABILITY == STD_ON)
        }
#endif /* ADC_VALIDATE_NOTIFY_CAPABILITY == STD_ON */

#if (ADC_VALIDATE_CALL_AND_GROUP == STD_ON)
    }
#endif /* ADC_VALIDATE_CALL_AND_GROUP == STD_ON */
}

/* SWS_Adc_00373, SWS_Adc_00413, SWS_Adc_00416 */
/** @implements      Adc_DisableGroupNotification_Activity */
void Adc_DisableGroupNotification
(
    Adc_GroupType Group
)
{
#if (ADC_DEV_ERROR_DETECT == STD_ON)
    volatile uint32 u32CoreId;

    u32CoreId = (uint32)Adc_GetCoreID();
#endif /* ADC_DEV_ERROR_DETECT == STD_ON */

#if (ADC_VALIDATE_CALL_AND_GROUP == STD_ON)
    if ((Std_ReturnType)E_OK == Adc_ValidateCallAndGroup(ADC_DISABLEGROUPNOTIFICATION_ID, Group, u32CoreId))
    {
#endif /* ADC_VALIDATE_CALL_AND_GROUP == STD_ON */

#if (ADC_VALIDATE_NOTIFY_CAPABILITY == STD_ON)
        if ((Std_ReturnType)E_OK == Adc_NotifyCapablity(ADC_DISABLEGROUPNOTIFICATION_ID, Group, u32CoreId))
        {
#endif /* ADC_VALIDATE_NOTIFY_CAPABILITY == STD_ON */
            /* SWS_Adc_00058 */
            Adc_aGroupStatus[Group].eNotification = ADC_NOTIFICATION_DISABLED;

#if (ADC_VALIDATE_NOTIFY_CAPABILITY == STD_ON)
        }
#endif /* ADC_VALIDATE_NOTIFY_CAPABILITY == STD_ON */

#if (ADC_VALIDATE_CALL_AND_GROUP == STD_ON)
    }
#endif /* ADC_VALIDATE_CALL_AND_GROUP == STD_ON */
}
#endif /* (ADC_GRP_NOTIF_CAPABILITY == STD_ON) */

/* SWS_Adc_00374, SWS_Adc_00140, SWS_Adc_00503, SWS_Adc_00413 */
/** @implements      Adc_GetGroupStatus_Activity */
Adc_StatusType Adc_GetGroupStatus
(
    Adc_GroupType Group
)
{
#if (ADC_VALIDATE_CALL_AND_GROUP == STD_ON)
    volatile uint32 u32CoreId;
#endif /* ADC_VALIDATE_CALL_AND_GROUP == STD_ON */
    Adc_StatusType eTempReturn = ADC_IDLE;

#if (ADC_VALIDATE_CALL_AND_GROUP == STD_ON)
    u32CoreId = (uint32)Adc_GetCoreID();
    if ((Std_ReturnType)E_OK == Adc_ValidateCallAndGroup(ADC_GETGROUPSTATUS_ID, Group, u32CoreId))
    {
#endif /* ADC_VALIDATE_CALL_AND_GROUP == STD_ON */
        /* SWS_Adc_00220 */
        eTempReturn = Adc_aGroupStatus[Group].eConversion;
#if (ADC_VALIDATE_CALL_AND_GROUP == STD_ON)
    }
#endif /* ADC_VALIDATE_CALL_AND_GROUP == STD_ON */

    return(eTempReturn);
}

/* SWS_Adc_00375, SWS_Adc_00382 */
/** @implements      Adc_GetStreamLastPointer_Activity */
Adc_StreamNumSampleType Adc_GetStreamLastPointer
(
    Adc_GroupType Group,
    Adc_ValueGroupType ** PtrToSamplePtr
)
{
    volatile uint32 u32CoreId = (uint32)Adc_GetCoreID();
    Adc_GroupType GroupIndex = 0U;
    const Adc_GroupConfigurationType * pGroupPtr;
    /* Number of samples to return */
    Adc_StreamNumSampleType NumberOfResults = 0U;
    Adc_StreamNumSampleType ResultIndex = 0U;
#if (ADC_ENABLE_GROUP_STREAMING_RESULTS_REORDER == STD_ON)
    Adc_ChannelIndexType ChannelCount;
#endif /* (ADC_ENABLE_GROUP_STREAMING_RESULTS_REORDER == STD_ON) */

#if (ADC_VALIDATE_CALL_AND_GROUP == STD_ON)
    Std_ReturnType ValidStatus = Adc_ValidateCallAndGroup(ADC_GETSTREAMLASTPOINTER_ID, Group, u32CoreId);
    if (ValidStatus == (Std_ReturnType)E_OK)
    {
#endif /* ADC_VALIDATE_CALL_AND_GROUP == STD_ON */
        pGroupPtr = &(Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex]);
#if (ADC_ENABLE_GROUP_STREAMING_RESULTS_REORDER == STD_ON)
#if (ADC_SETCHANNEL_API == STD_ON)
        /* Get channel count at runtime */
        ChannelCount = Adc_aRuntimeGroupChannel[Group].ChannelCount;
#else
        /* Get channel count from configuration */
        ChannelCount = pGroupPtr->AssignedChannelCount;
#endif
#endif /* (ADC_ENABLE_GROUP_STREAMING_RESULTS_REORDER == STD_ON) */

        if ((Std_ReturnType)E_OK == Adc_ValidateStateNotIdle(ADC_GETSTREAMLASTPOINTER_ID, Group, u32CoreId))
        {
            *PtrToSamplePtr = NULL_PTR;

            if ((ADC_IDLE != Adc_aGroupStatus[Group].eConversion) && \
                (ADC_BUSY != Adc_aGroupStatus[Group].eConversion)) /* SWS_Adc_00216 */
            {
                GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group];
                if ((Adc_StreamNumSampleType)0U == Adc_aGroupStatus[Group].ResultIndex)
                {
                    ResultIndex = Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].NumSamples - (Adc_StreamNumSampleType)1U;
                    /* SWS_Adc_00387 */
                    NumberOfResults = Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].NumSamples;
                }
                else
                {
                    ResultIndex = Adc_aGroupStatus[Group].ResultIndex - (Adc_StreamNumSampleType)1U;
                    /* SWS_Adc_00387 */
                    NumberOfResults = Adc_aGroupStatus[Group].ResultIndex;
                }

#if (ADC_ENABLE_GROUP_STREAMING_RESULTS_REORDER == STD_ON)
                /* SWS_Adc_00214 -- SWS_Adc_00418 -- ADC382 */
                if (FALSE == pGroupPtr->bStreamResultGroupMultiSets)
#endif /* (ADC_ENABLE_GROUP_STREAMING_RESULTS_REORDER == STD_ON) */
                {
                    *PtrToSamplePtr = (Adc_ValueGroupType *)(&(pGroupPtr->pResultsBufferPtr[Group][ResultIndex]));
                }
#if (ADC_ENABLE_GROUP_STREAMING_RESULTS_REORDER == STD_ON)
                else
                {
                    *PtrToSamplePtr = (Adc_ValueGroupType *)(&(pGroupPtr->pResultsBufferPtr[Group][ResultIndex * ChannelCount]));
                }
#endif /* (ADC_ENABLE_GROUP_STREAMING_RESULTS_REORDER == STD_ON) */
                Adc_UpdateStatusAfterGetStream(Group, u32CoreId);
            }
        }
        else
        {
            *PtrToSamplePtr = NULL_PTR;
        }

#if (ADC_VALIDATE_CALL_AND_GROUP == STD_ON)
    }
    else
    {
        /* SWS_Adc_00302, SWS_Adc_00218 */
        *PtrToSamplePtr = NULL_PTR;
    }
#endif /* ADC_VALIDATE_CALL_AND_GROUP == STD_ON */

    return (NumberOfResults);
}

#if (ADC_VERSION_INFO_API == STD_ON)
/* SWS_Adc_00376 */
/** @implements      Adc_GetVersionInfo_Activity */
void Adc_GetVersionInfo
(
    Std_VersionInfoType * versioninfo
)
{
#if (ADC_VALIDATE_PARAMS == STD_ON)
    if ((Std_ReturnType)E_OK == Adc_ValidatePtr(ADC_GETVERSIONINFO_ID, versioninfo))
    {
#endif /* ADC_VALIDATE_PARAMS == STD_ON */

        (versioninfo)->vendorID = (uint16)ADC_VENDOR_ID;
        (versioninfo)->moduleID = (uint16)ADC_MODULE_ID;
        (versioninfo)->sw_major_version = (uint8)ADC_SW_MAJOR_VERSION;
        (versioninfo)->sw_minor_version = (uint8)ADC_SW_MINOR_VERSION;
        (versioninfo)->sw_patch_version = (uint8)ADC_SW_PATCH_VERSION;

#if (ADC_VALIDATE_PARAMS == STD_ON)
    }
#endif /* ADC_VALIDATE_PARAMS == STD_ON */
}
#endif /* (ADC_VERSION_INFO_API == STD_ON) */

#if (ADC_POWER_STATE_SUPPORTED == STD_ON)
/* SWS_Adc_00475, SWS_Adc_00481 */
/** @implements      Adc_SetPowerState_Activity */
Std_ReturnType Adc_SetPowerState
(
    Adc_PowerStateRequestResultType * Result
)
{
    volatile uint32 u32CoreId;
    uint32 u32CoreIdTemp;
    Adc_PowerStateType StateTemp;
    Std_ReturnType RetVal = (Std_ReturnType)E_NOT_OK;

    u32CoreId = (uint32)Adc_GetCoreID();
    u32CoreIdTemp = u32CoreId; /* Used to avoid MISRA */
    if((Std_ReturnType)E_OK == Adc_ValidateStateAndPtr(ADC_SETPOWERSTATE_ID, Result, u32CoreId))
    {
        if((Std_ReturnType)E_OK == Adc_ValidatePowerStatePrepare(ADC_SETPOWERSTATE_ID, Result, u32CoreId))
        {
            if((Std_ReturnType)E_OK == Adc_ValidatePowerStateSupport(ADC_SETPOWERSTATE_ID, Adc_eTargetState[u32CoreId], Result))
            {
                RetVal = Adc_ValidateIdleState(ADC_SETPOWERSTATE_ID, Result, u32CoreId);
            }
        }
    }

    if((Std_ReturnType)E_OK == RetVal)
    {
        RetVal = Adc_Ipw_SetPowerState(Adc_eTargetState[u32CoreId], u32CoreIdTemp);
        if((Std_ReturnType)E_OK == RetVal)
        {
            /* SWS_Adc_00482 */
            /* Everything is ok */
            *Result = ADC_SERVICE_ACCEPTED;
            /* Use StateTemp and u32CoreIdTemp to avoid IAR warning */
            StateTemp = Adc_eTargetState[u32CoreIdTemp];
            Adc_eCurrentState[u32CoreId] = StateTemp;
            Adc_eTargetState[u32CoreId] = ADC_NODEFINE_POWER;
        }
        else
        {
            /* Hardware failure */
            *Result = ADC_HW_FAILURE;
        }
    }

    return RetVal;
}

/* SWS_Adc_00476 */
/** @implements      Adc_GetCurrentPowerState_Activity */
Std_ReturnType Adc_GetCurrentPowerState
(
    Adc_PowerStateType * CurrentPowerState,
    Adc_PowerStateRequestResultType * Result
)
{
    volatile uint32 u32CoreId;
    Std_ReturnType RetVal = (Std_ReturnType)E_NOT_OK;

    u32CoreId = (uint32)Adc_GetCoreID();
    if((Std_ReturnType)E_OK == Adc_ValidateStateAndPtr(ADC_GETCURRENTPOWERSTATE_ID, Result, u32CoreId))
    {
#if (ADC_VALIDATE_PARAMS == STD_ON)
        if ((Std_ReturnType)E_OK == Adc_ValidatePtr(ADC_GETCURRENTPOWERSTATE_ID, CurrentPowerState))
#endif /* (ADC_VALIDATE_PARAMS == STD_ON) */
        {
            *CurrentPowerState = Adc_eCurrentState[u32CoreId];
            *Result = ADC_SERVICE_ACCEPTED;
            RetVal = (Std_ReturnType)E_OK;
        }
    }
    return RetVal;
}

/* SWS_Adc_00477 */
/** @implements      Adc_GetTargetPowerState_Activity */
Std_ReturnType Adc_GetTargetPowerState
(
    Adc_PowerStateType * TargetPowerState,
    Adc_PowerStateRequestResultType * Result
)
{
    volatile uint32 u32CoreId;
    Std_ReturnType RetVal = (Std_ReturnType)E_NOT_OK;

    u32CoreId = (uint32)Adc_GetCoreID();
    if((Std_ReturnType)E_OK == Adc_ValidateStateAndPtr(ADC_GETTARGETPOWERSTATE_ID, Result, u32CoreId))
    {
#if (ADC_VALIDATE_PARAMS == STD_ON)
        if ((Std_ReturnType)E_OK == Adc_ValidatePtr(ADC_GETTARGETPOWERSTATE_ID, TargetPowerState))
#endif /* (ADC_VALIDATE_PARAMS == STD_ON) */
        {
            /* SWS_Adc_00492 */
            if(Adc_eTargetState[u32CoreId] < ADC_NODEFINE_POWER)
            {
                /* A transition is ongoing */
                *TargetPowerState = Adc_eTargetState[u32CoreId];
            }
            else
            {
                /* No transition is ongoing */
                *TargetPowerState = Adc_eCurrentState[u32CoreId];
            }
            *Result = ADC_SERVICE_ACCEPTED;
            RetVal = (Std_ReturnType)E_OK;
        }
    }
    return RetVal;
}

/* SWS_Adc_00478 */
/** @implements      Adc_PreparePowerState_Activity */
Std_ReturnType Adc_PreparePowerState
(
    Adc_PowerStateType PowerState,
    Adc_PowerStateRequestResultType * Result
)
{
    volatile uint32 u32CoreId;
    Adc_HwUnitType LogicalHwUnitId;
    Std_ReturnType RetVal = (Std_ReturnType)E_NOT_OK;

    u32CoreId = (uint32)Adc_GetCoreID();
    if ((Std_ReturnType)E_OK == Adc_ValidateStateAndPtr(ADC_PREPAREPOWERSTATE_ID, Result, u32CoreId))
    {
        if ((Std_ReturnType)E_OK == Adc_ValidatePowerStateSupport(ADC_PREPAREPOWERSTATE_ID, PowerState, Result))
        {
            RetVal = (Std_ReturnType)E_OK;
            for (LogicalHwUnitId = 0U; LogicalHwUnitId < ADC_MAX_HW_UNITS; LogicalHwUnitId++)
            {
                if (Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->Mapping.au8Adc_HwUnit[LogicalHwUnitId] == (uint8)STD_ON) /* HW unit enabled on current partition */
                {
                    RetVal = (Std_ReturnType)Adc_ValidateNotBusyNoQueue(LogicalHwUnitId, ADC_PREPAREPOWERSTATE_ID);
                }
                if ((Std_ReturnType)E_NOT_OK == RetVal)
                {
                    /* Break the loop to avoid overwriting RetVal */
                    break;
                }
            }
            if ((Std_ReturnType)E_NOT_OK == RetVal)
            {
                *Result = ADC_TRANS_NOT_POSSIBLE;
            }
            else
            {
                /* SWS_Adc_00495 */
                /* Everything is ok */
                Adc_eTargetState[u32CoreId] = PowerState;
                *Result = ADC_SERVICE_ACCEPTED;
            }
        }
    }
    return RetVal;
}

#if (ADC_POWER_STATE_ASYNCH_MODE_SUPPORTED == STD_ON)
void Adc_Main_PowerTransitionManager(void)
{

}
#endif /* (ADC_POWER_STATE_ASYNCH_MODE_SUPPORTED == STD_ON) */
#endif /* (ADC_POWER_STATE_SUPPORTED == STD_ON) */

#if (ADC_SET_HW_UNIT_POWER_MODE_API == STD_ON)
/* CPR_RTD_00034.adc */
/** @implements      Adc_SetHwUnitPowerMode_Activity */
Std_ReturnType Adc_SetHwUnitPowerMode
(
    Adc_HwUnitType Unit,
    Adc_SetPowerModeType SetPowerMode
)
{
    /* TODO: update to use logical Unit ID */
    volatile uint32 u32CoreId;
    /* Return standard value */
    Std_ReturnType TempReturn = (Std_ReturnType)E_NOT_OK;

    u32CoreId = (uint32)Adc_GetCoreID();
    if ((Std_ReturnType)E_OK == Adc_ValidateSetHwUnitPowerMode(SetPowerMode, u32CoreId))
    {
        TempReturn = Adc_ValidateNotBusyNoQueue(Unit, ADC_SET_HW_UNIT_POWER_MODE_ID);

        if ((Std_ReturnType)E_OK == TempReturn)
        {
            if ((Std_ReturnType)E_OK == Adc_ValidateCheckGroupNotConversion(ADC_SET_HW_UNIT_POWER_MODE_ID, u32CoreId))
            {
                TempReturn = Adc_Ipw_SetHwUnitPowerMode(Unit, SetPowerMode, u32CoreId);
                if ((Std_ReturnType)E_NOT_OK == TempReturn)
                {
                    Adc_ReportDetRuntimeError((uint8)ADC_SET_HW_UNIT_POWER_MODE_ID, (uint8)ADC_E_TIMEOUT);
                }
            }
        }
    }
    return TempReturn;
}

#if (ADC_BCTU_AVAILABLE == STD_ON)
/* The next condition is true if CTU/BCTU Unit is used */
#if ((ADC_ENABLE_CTU_CONTROL_MODE_API == STD_ON) || (ADC_ENABLE_CTUTRIG_NONAUTO_API == STD_ON) || (ADC_HW_TRIGGER_API == STD_ON))
/* CPR_RTD_00453.adc, CPR_RTD_00454.adc */
/** @implements      Adc_CtuSetPowerMode */
Std_ReturnType Adc_CtuSetPowerMode
(
    Adc_HwUnitType CtuUnit,
    Adc_PowerStateType State
)
{
    volatile uint32 u32CoreId;
    Std_ReturnType TempReturn = (Std_ReturnType)E_NOT_OK;
    u32CoreId = (uint32)Adc_GetCoreID();

#if (ADC_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == Adc_pCfgPtr[u32CoreId])
    {
        Adc_ReportDetError((uint8)ADC_CTU_SET_POWER_MODE_ID, (uint8)ADC_E_UNINIT);
    }
    else
    {
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */
        TempReturn = Adc_ValidateCheckGroupNotConversion(ADC_CTU_SET_POWER_MODE_ID, u32CoreId);
        if ((Std_ReturnType)E_OK == TempReturn)
        {
            if ((Std_ReturnType)E_OK != Adc_Ipw_CtuSetPowerMode(CtuUnit, State))
            {
                /* CTU unit out of range */
                Adc_ReportDetRuntimeError((uint8)ADC_CTU_SET_POWER_MODE_ID, (uint8)ADC_E_PARAM_CONFIG);
            }
        }
#if (ADC_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* ADC_DEV_ERROR_DETECT == STD_ON */

    return TempReturn;
}
#endif /* (ADC_ENABLE_CTU_CONTROL_MODE_API == STD_ON) || */
#endif /* (ADC_BCTU_AVAILABLE == STD_ON) */
#endif /* (ADC_SET_HW_UNIT_POWER_MODE_API == STD_ON) */

#if (ADC_ENABLE_CTUTRIG_NONAUTO_API == STD_ON)
/** @implements      Adc_EnableCTUTrigger_Activity */
void Adc_EnableCTUTrigger
(
    Adc_GroupType Group,
    Adc_HwTriggerTimerType TriggerSource
)
{
    const volatile uint32 u32CoreId = Adc_GetCoreID();
    const Adc_GroupConfigurationType * pGroupConfig;
    Adc_GroupType GroupIndex;
    Adc_HwUnitType LogicalHwUnitId;
    Std_ReturnType ValidStatus;
    uint8 u8TrigIdx = 0U;
    boolean bTriggFound;

#if (ADC_VALIDATE_CALL_AND_GROUP  == STD_ON)
    boolean isValidateOK = FALSE;
    ValidStatus = Adc_ValidateCallAndGroup((uint8)ADC_ENABLECTUTRIGGER_ID, Group, u32CoreId);
    if (ValidStatus == (Std_ReturnType)E_OK)
    {
#endif /* (ADC_VALIDATE_CALL_AND_GROUP  == STD_ON) */
        /* Map TriggerSource to TriggerIndex */
        bTriggFound = Adc_Ipw_MapCTUTriggerIndex(TriggerSource, u32CoreId, &u8TrigIdx);
        (void)bTriggFound;
#if (ADC_VALIDATE_CALL_AND_GROUP  == STD_ON)
        /* Check that TriggerSource is in range */
        Std_ReturnType TriggSrcStatus = Adc_CheckTriggerSourceRange((uint8)ADC_ENABLECTUTRIGGER_ID, TriggerSource, bTriggFound);
        if (TriggSrcStatus == (Std_ReturnType)E_OK)
        {
#endif /* (ADC_VALIDATE_CALL_AND_GROUP  == STD_ON) */
            GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group];
            pGroupConfig = &(Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex]);
            LogicalHwUnitId = pGroupConfig->AdcLogicalUnitId;

            if ((Std_ReturnType)E_OK == Adc_ValidateNotBusyEnableHwTrig(ADC_ENABLECTUTRIGGER_ID, Group, u32CoreId))
            {
#if (ADC_VALIDATE_PARAMS == STD_ON)
                if ((Std_ReturnType)E_OK == Adc_ValidateExtraParams(ADC_ENABLECTUTRIGGER_ID,
                                                                    ADC_E_WRONG_TRIGG_SRC_LIST | ADC_E_WRONG_CONV_MODE_LIST,
                                                                    Group,
                                                                    u32CoreId))
                {
                    isValidateOK = TRUE;
                }
#endif /* ADC_VALIDATE_PARAMS == STD_ON */
            }
#if (ADC_VALIDATE_CALL_AND_GROUP  == STD_ON)
        }
    }
#endif /* (ADC_VALIDATE_CALL_AND_GROUP  == STD_ON) */

#if (ADC_VALIDATE_PARAMS == STD_ON)
    if (isValidateOK == TRUE)
    {
#endif /* ADC_VALIDATE_PARAMS == STD_ON */
        SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_04();
#if (ADC_VALIDATE_PARAMS == STD_ON)
        /* Check if trigger already enabled */
        if (0U == Adc_au8CtuGroupTriggersActive[LogicalHwUnitId][u8TrigIdx])
        {
#endif /* ADC_VALIDATE_PARAMS == STD_ON */
            boolean bFirstTrigger = TRUE;
            uint8 TriggerIndex;
            for(TriggerIndex = 0U; TriggerIndex < ADC_MAX_HARDWARE_TRIGGERS; TriggerIndex++)
            {
                if(0U != Adc_au8CtuGroupTriggersActive[LogicalHwUnitId][TriggerIndex])
                {
                    bFirstTrigger = FALSE;
                    break;
                }
            }
            /* Mark trigger as enabled */
            Adc_au8CtuGroupTriggersActive[LogicalHwUnitId][u8TrigIdx] = 1U;
            SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_04();
            ValidStatus = Adc_Ipw_EnableCtuTrigger(Group, TriggerSource, bFirstTrigger, u32CoreId);
            if ((Std_ReturnType)E_NOT_OK == ValidStatus)
            {
                /* There is a running conversion.*/
                Adc_ReportDetRuntimeError((uint8)ADC_ENABLECTUTRIGGER_ID, (uint8)ADC_E_BUSY);
            }
#if (ADC_VALIDATE_PARAMS == STD_ON)
        }
        else
        {
            SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_04();
            /* This trigger has already been enabled for this group */
            Adc_ReportDetError(ADC_ENABLECTUTRIGGER_ID, (uint8)ADC_E_PARAM_TRIGGER);
        }
    }
#endif /* ADC_VALIDATE_PARAMS == STD_ON */
}

/** @implements      Adc_DisableCTUTrigger_Activity */
void Adc_DisableCTUTrigger
(
    Adc_GroupType Group,
    Adc_HwTriggerTimerType TriggerSource
)
{
    const volatile uint32 u32CoreId = Adc_GetCoreID();
    const Adc_GroupConfigurationType * pGroupConfig;
    Adc_GroupType GroupIndex;
    Adc_HwUnitType LogicalHwUnitId;
    boolean bLastTrigger = TRUE;
    uint8 u8TrigIdx = 0U;
    boolean bTriggFound;

#if (ADC_VALIDATE_CALL_AND_GROUP  == STD_ON)
    boolean isValidateOK = FALSE;
    Std_ReturnType ValidStatus = Adc_ValidateCallAndGroup((uint8)ADC_DISABLECTUTRIGGER_ID, Group, u32CoreId);
    if (ValidStatus == (Std_ReturnType)E_OK)
    {
#endif /* (ADC_VALIDATE_CALL_AND_GROUP  == STD_ON) */
        /* Map TriggerSource to TriggerIndex */
        bTriggFound = Adc_Ipw_MapCTUTriggerIndex(TriggerSource, u32CoreId, &u8TrigIdx);
        (void)bTriggFound;
#if (ADC_VALIDATE_CALL_AND_GROUP  == STD_ON)
        /* Check that TriggerSource is in range */
        Std_ReturnType TriggSrcStatus = Adc_CheckTriggerSourceRange((uint8)ADC_DISABLECTUTRIGGER_ID, TriggerSource, bTriggFound);
        if (TriggSrcStatus == (Std_ReturnType)E_OK)
        {
#endif /* (ADC_VALIDATE_CALL_AND_GROUP  == STD_ON) */
            GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group];
            pGroupConfig = &(Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex]);
            LogicalHwUnitId = pGroupConfig->AdcLogicalUnitId;
#if (ADC_VALIDATE_PARAMS == STD_ON)
            if ((Std_ReturnType)E_OK == Adc_ValidateExtraParams(ADC_DISABLECTUTRIGGER_ID,
                                                                ADC_E_WRONG_TRIGG_SRC_LIST | ADC_E_WRONG_CONV_MODE_LIST,
                                                                Group,
                                                                u32CoreId))
            {
                isValidateOK = TRUE;
            }
#endif /* ADC_VALIDATE_PARAMS == STD_ON */

#if (ADC_VALIDATE_CALL_AND_GROUP  == STD_ON)
        }
    }
#endif /* (ADC_VALIDATE_CALL_AND_GROUP  == STD_ON) */

#if (ADC_VALIDATE_PARAMS == STD_ON)
    if (isValidateOK == TRUE)
    {
#endif /* ADC_VALIDATE_PARAMS == STD_ON */
        SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_05();
#if (ADC_VALIDATE_PARAMS == STD_ON)
        /* Check if trigger already disabled */
        if (0U != Adc_au8CtuGroupTriggersActive[LogicalHwUnitId][u8TrigIdx])
        {
#endif /* ADC_VALIDATE_PARAMS == STD_ON */
            /* Mark trigger as disabled */
            Adc_au8CtuGroupTriggersActive[LogicalHwUnitId][u8TrigIdx] = 0U;
            /* Check the trigger is last or not */
            uint8 TriggerIndex;
            for (TriggerIndex = 0U; TriggerIndex < ADC_MAX_HARDWARE_TRIGGERS; TriggerIndex++)
            {
                if (0U != Adc_au8CtuGroupTriggersActive[LogicalHwUnitId][TriggerIndex])
                {
                    bLastTrigger = FALSE;
                    break;
                }
            }
            /* Mark trigger as disabled */
            Adc_au8CtuGroupTriggersActive[LogicalHwUnitId][u8TrigIdx] = 0U;
            SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_05();

            Adc_Ipw_DisableCtuTrigger(Group, TriggerSource, bLastTrigger, u32CoreId);
#if (ADC_VALIDATE_PARAMS == STD_ON)
        }
        else
        {
            SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_05();
            /* This trigger has already been disabled for this group */
            Adc_ReportDetError(ADC_DISABLECTUTRIGGER_ID, (uint8)ADC_E_PARAM_TRIGGER);
        }
    }
#endif /* ADC_VALIDATE_PARAMS == STD_ON */
}

/** @implements      Adc_HwResultReadGroup_Activity */
Std_ReturnType Adc_HwResultReadGroup
(
    Adc_GroupType Group,
    Adc_ValueGroupType * DataPtr
)
{
    const volatile uint32 u32CoreId = Adc_GetCoreID();
    /* Standard return value */
    Std_ReturnType GroupRet = (Std_ReturnType)E_NOT_OK;

#if (ADC_VALIDATE_CALL_AND_GROUP == STD_ON)
    if ((Std_ReturnType)E_OK == Adc_ValidateCallAndGroup(ADC_HWRESULTREADGROUP_ID, Group, u32CoreId))
    {
#endif /* ADC_VALIDATE_CALL_AND_GROUP == STD_ON */

#if (ADC_VALIDATE_PARAMS == STD_ON)
        if (NULL_PTR == DataPtr)
        {
            GroupRet = (Std_ReturnType)E_NOT_OK;
        }
        else
#endif
        {
            GroupRet = Adc_Ipw_HwResultReadGroup(Group, DataPtr, u32CoreId);
        }
#if (ADC_VALIDATE_CALL_AND_GROUP == STD_ON)
    }
#endif /* ADC_VALIDATE_CALL_AND_GROUP == STD_ON */
    return(GroupRet);
}
#endif /* (ADC_ENABLE_CTUTRIG_NONAUTO_API == STD_ON) */

#if (ADC_ENABLE_READ_RAW_DATA_API == STD_ON)
/** @implements      Adc_ReadRawData_Activity */
void Adc_ReadRawData
(
    Adc_HwUnitType Unit,
    const Adc_ChannelType * const ChansArray,
    uint8 NumItems,
    Adc_ValueGroupType * const DataBufferPtr
)
{
    uint8 i;
    const volatile uint32 u32CoreId = Adc_GetCoreID();
    Std_ReturnType Status;

#if (ADC_VALIDATE_CALL_AND_UNIT == STD_ON)
    if ((Std_ReturnType)E_OK == Adc_ValidateCallAndUnit(ADC_ENABLE_READ_RAW_DATA_ID, Unit, u32CoreId))
    {
#endif /* ADC_VALIDATE_CALL_AND_UNIT == STD_ON */
#if (ADC_VALIDATE_PARAMS == STD_ON)
        if ((Std_ReturnType)E_OK == Adc_ValidatePtr(ADC_ENABLE_READ_RAW_DATA_ID, DataBufferPtr))
        {
            if ((Std_ReturnType)E_OK == Adc_ValidatePtr(ADC_ENABLE_READ_RAW_DATA_ID, ChansArray))
            {
                /* Check input channel id if it's greater than maximum number of available channels */
                if (NumItems <= ADC_IPW_RES_REG_NUM)
                {
    #endif /* ADC_VALIDATE_PARAMS == STD_ON */
                    for (i = 0U; i < NumItems; i++)
                    {
                        Status = (Std_ReturnType)E_OK;
                        if (ChansArray[i] < (Adc_ChannelType)ADC_IPW_MAX_CHN_ID)
                        {
                            Status = Adc_Ipw_GetConvData(Unit, ChansArray[i], u32CoreId, &DataBufferPtr[i]);
                        }
    #if (ADC_VALIDATE_PARAMS == STD_ON)
                        else
                        {
                            Status = (Std_ReturnType)E_NOT_OK;
                        }

                        if ((Std_ReturnType)E_NOT_OK == Status)
                        {
                            Adc_ReportDetError(ADC_ENABLE_READ_RAW_DATA_ID, (uint8)ADC_E_PARAM_CONFIG);
                        }
    #else
                        (void)Status;
    #endif /* ADC_VALIDATE_PARAMS == STD_ON */
                    }
    #if (ADC_VALIDATE_PARAMS == STD_ON)
                }
                else
                {
                    Adc_ReportDetError(ADC_ENABLE_READ_RAW_DATA_ID, (uint8)ADC_E_PARAM_CONFIG);
                }
            }
        }
#endif /* ADC_VALIDATE_PARAMS == STD_ON */
#if (ADC_VALIDATE_CALL_AND_UNIT == STD_ON)
    }
#endif /* ADC_VALIDATE_CALL_AND_UNIT == STD_ON */
}
#endif /* (ADC_ENABLE_READ_RAW_DATA_API == STD_ON) */

#if (ADC_ENABLE_CH_DISABLE_CH_NONAUTO_API == STD_ON)
/* CPR_RTD_00050.adc, SWS_Adc_00413 */
void Adc_EnableChannel
(
   Adc_GroupType Group,
   Adc_ChannelType Channel
)
{
    volatile uint32 u32CoreId;
    Adc_GroupType GroupIndex = 0U;
    Adc_HwUnitType LogicalHwUnitId = 0U;
    Adc_ChannelType LogicalChannelId;
    Adc_ChannelType PhysicalChannelId;
    Adc_GroupType GroupId = ADC_ENABLE_CH_DISABLE_CH_INVALID_GROUP_INDEX;
    Adc_ChansIdxMaskType CmrMask;
    uint8 i;

    u32CoreId = (uint32)Adc_GetCoreID();
#if (ADC_VALIDATE_CALL_AND_GROUP == STD_ON)
    if ((Std_ReturnType)E_OK == Adc_ValidateCallAndGroup(ADC_ENABLE_CHANNEL_ID, Group, u32CoreId))
    {
#endif /* ADC_VALIDATE_CALL_AND_GROUP == STD_ON */

    LogicalChannelId = Channel & ADC_CHANNEL_SYMBOLIC_NAME_MASK_CHANNEL_ID_U16;
#if (ADC_VALIDATE_PARAMS == STD_ON)
        if ((Std_ReturnType)E_OK == Adc_ValidateExtraParams(ADC_ENABLE_CHANNEL_ID,
                                                            ADC_E_WRONG_TRIGG_SRC_LIST | \
                                                            ADC_E_WRONG_CONV_MODE_LIST | \
                                                            ADC_E_WRONG_ENABLE_CH_DISABLE_CH_GROUP_LIST | \
                                                            ADC_E_WRONG_ENABLE_CH_DISABLE_CH_ID_LIST, \
                                                            Group, \
                                                            u32CoreId \
                                                           )
           )
        {
            if ((Std_ReturnType)E_OK == Adc_ValidateEnableDisbleIdList(ADC_ENABLE_CHANNEL_ID, Group, LogicalChannelId, u32CoreId))
            {
#endif /* ADC_VALIDATE_PARAMS == STD_ON */
                /* Get the unit to which the group belongs to */
                GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group];
                LogicalHwUnitId = Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].AdcLogicalUnitId;
                PhysicalChannelId = Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->apAdcConfig[LogicalHwUnitId]->pChannelConfigs[LogicalChannelId].u8ChannelIndex;
                GroupId = (Adc_GroupType)Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].EnableChDisableChGroupIndex;

                Adc_GetCmrRegister(LogicalHwUnitId, Group, &CmrMask, u32CoreId);
                for (i = 0; i < ADC_SAR_NUM_GROUP_CHAN; i++)
                {
                    Adc_aNCMRxMask[GroupId].aChanMask[i] = CmrMask.aChanMask[i];
                }
                Adc_Ipw_SetChansMask(&(Adc_aNCMRxMask[GroupId]), PhysicalChannelId);
#if (ADC_VALIDATE_PARAMS == STD_ON)
            }
        }
#endif /* ADC_VALIDATE_PARAMS == STD_ON */

#if (ADC_VALIDATE_CALL_AND_GROUP == STD_ON)
    }
#endif /* ADC_VALIDATE_CALL_AND_GROUP == STD_ON */
}

/* CPR_RTD_00050.adc, SWS_Adc_00413 */
void Adc_DisableChannel
(
    Adc_GroupType Group,
    Adc_ChannelType Channel
)
{
    volatile uint32 u32CoreId;
    Adc_GroupType GroupIndex = 0U;
    Adc_HwUnitType LogicalHwUnitId = 0U;
    Adc_ChannelType LogicalChannelId;
    Adc_ChannelType PhysicalChannelId;
    Adc_GroupType GroupId = ADC_ENABLE_CH_DISABLE_CH_INVALID_GROUP_INDEX;
    Adc_ChansIdxMaskType CmrMask;
    uint8 i;

    u32CoreId = (uint32)Adc_GetCoreID();
#if (ADC_VALIDATE_CALL_AND_GROUP == STD_ON)
    if ((Std_ReturnType)E_OK == Adc_ValidateCallAndGroup(ADC_DISABLE_CHANNEL_ID, Group, u32CoreId))
    {
#endif /* ADC_VALIDATE_CALL_AND_GROUP == STD_ON */

    LogicalChannelId = Channel & ADC_CHANNEL_SYMBOLIC_NAME_MASK_CHANNEL_ID_U16;
#if (ADC_VALIDATE_PARAMS == STD_ON)
        if ((Std_ReturnType)E_OK == Adc_ValidateExtraParams(ADC_DISABLE_CHANNEL_ID,
                                                            ADC_E_WRONG_TRIGG_SRC_LIST | \
                                                            ADC_E_WRONG_CONV_MODE_LIST | \
                                                            ADC_E_WRONG_ENABLE_CH_DISABLE_CH_GROUP_LIST | \
                                                            ADC_E_WRONG_ENABLE_CH_DISABLE_CH_ID_LIST, \
                                                            Group, \
                                                            u32CoreId \
                                                           )
           )
        {
            if ((Std_ReturnType)E_OK == Adc_ValidateEnableDisbleIdList(ADC_DISABLE_CHANNEL_ID, Group, LogicalChannelId, u32CoreId))
            {
#endif /* ADC_VALIDATE_PARAMS == STD_ON */
                GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group];
                LogicalHwUnitId = Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].AdcLogicalUnitId;
                PhysicalChannelId = Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->apAdcConfig[LogicalHwUnitId]->pChannelConfigs[LogicalChannelId].u8ChannelIndex;
                GroupId = (Adc_GroupType)Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].EnableChDisableChGroupIndex;

                Adc_GetCmrRegister(LogicalHwUnitId, Group, &CmrMask, u32CoreId);
                for (i = 0; i < ADC_SAR_NUM_GROUP_CHAN; i++)
                {
                    Adc_aNCMRxMask[GroupId].aChanMask[i] = CmrMask.aChanMask[i];
                }
                Adc_Ipw_ClearChansMask(&(Adc_aNCMRxMask[GroupId]), PhysicalChannelId);
#if (ADC_VALIDATE_PARAMS == STD_ON)
            }
        }
#endif /* ADC_VALIDATE_PARAMS == STD_ON */

#if (ADC_VALIDATE_CALL_AND_GROUP == STD_ON)
    }
#endif /* ADC_VALIDATE_CALL_AND_GROUP == STD_ON */
}
#endif /* (ADC_ENABLE_CH_DISABLE_CH_NONAUTO_API == STD_ON) */

#if (ADC_GET_INJECTED_CONVERSION_STATUS_API == STD_ON)
/* CPR_RTD_00275.adc, SWS_Adc_00413 */
/** @implements      Adc_GetInjectedConversionStatus_Activity */
Adc_StatusType Adc_GetInjectedConversionStatus
(
    Adc_HwUnitType Unit
)
{
#if (ADC_VALIDATE_CALL_AND_UNIT == STD_ON)
    volatile uint32 u32CoreId;
#endif /* ADC_VALIDATE_CALL_AND_UNIT == STD_ON */
    Adc_StatusType eTempReturn = ADC_IDLE;

#if (ADC_VALIDATE_CALL_AND_UNIT == STD_ON)
    u32CoreId = (uint32)Adc_GetCoreID();
    if ((Std_ReturnType)E_OK == Adc_ValidateCallAndUnit(ADC_GETINJECTEDCONVERSIONSTATUS_ID, Unit, u32CoreId))
    {
#endif /* ADC_VALIDATE_CALL_AND_UNIT == STD_ON */

#if (ADC_SOFTWARE_INJECTED_CONVERSIONS_USED == STD_ON)
        if (Adc_aUnitStatus[Unit].SwInjectedQueueIndex > (Adc_QueueIndexType)0U)
        {
            eTempReturn = ADC_BUSY;
        }
#endif /* ADC_SOFTWARE_INJECTED_CONVERSIONS_USED == STD_ON */
#if (ADC_HW_TRIGGER_API == STD_ON)
        if (ADC_INVALID_HW_GROUP_ID != Adc_aUnitStatus[Unit].OngoingHwGroup)
        {
            eTempReturn = ADC_BUSY;
        }
#endif /* (ADC_HW_TRIGGER_API == STD_ON) */

#if (ADC_VALIDATE_CALL_AND_UNIT == STD_ON)
    }
#endif /* ADC_VALIDATE_CALL_AND_UNIT == STD_ON */

    return (eTempReturn);
}
#endif /* (ADC_GET_INJECTED_CONVERSION_STATUS_API) */

#if (ADC_CALIBRATION == STD_ON)
/* CPR_RTD_00014.adc, CPR_RTD_00029.adc */
/** @implements      Adc_Calibrate_Activity */
void Adc_Calibrate
(
    Adc_HwUnitType Unit,
    Adc_CalibrationStatusType * pStatus
)
{
    volatile uint32 u32CoreId;
    boolean isCalibrateCalled = FALSE;

    u32CoreId = (uint32)Adc_GetCoreID();
#if (ADC_VALIDATE_CALL_AND_UNIT == STD_ON)
    if ((Std_ReturnType)E_OK == Adc_ValidateCallAndUnit(ADC_CALIBRATE_ID, Unit, u32CoreId))
    {
#endif /* ADC_VALIDATE_CALL_AND_UNIT == STD_ON */

#if (ADC_VALIDATE_PARAMS == STD_ON)
        if ((Std_ReturnType)E_OK == Adc_ValidatePtr(ADC_CALIBRATE_ID, pStatus))
        {
#endif /* ADC_VALIDATE_PARAMS == STD_ON */
            /* Reset Status before executing the calibration */
            pStatus->Adc_UnitSelfTestStatus = E_NOT_OK;
            if ((Std_ReturnType)E_OK == Adc_ValidateNotBusyNoQueue(Unit, ADC_CALIBRATE_ID))
            {
                if ((Std_ReturnType)E_OK == Adc_ValidateCheckGroupNotConversion(ADC_CALIBRATE_ID, u32CoreId))
                {
                    Adc_Ipw_Calibrate(Unit, pStatus, u32CoreId);
                    isCalibrateCalled = TRUE;
                }
            }
            if (TRUE == isCalibrateCalled)
            {
                if ((Std_ReturnType)E_NOT_OK == pStatus->Adc_UnitSelfTestStatus)
                {
                    Adc_ReportDetRuntimeError((uint8)ADC_CALIBRATE_ID, (uint8)ADC_E_TIMEOUT);
                }
            }
#if (ADC_VALIDATE_PARAMS == STD_ON)
        }
#endif /* ADC_VALIDATE_PARAMS == STD_ON */

#if (ADC_VALIDATE_CALL_AND_UNIT == STD_ON)
    }
#endif /* ADC_VALIDATE_CALL_AND_UNIT == STD_ON */
}
#endif /* ADC_CALIBRATION == STD_ON */

#if (ADC_SELF_TEST == STD_ON)
/** @implements      Adc_SelfTest_Activity */
Std_ReturnType Adc_SelfTest
(
    Adc_HwUnitType Unit
)
{
    volatile uint32 u32CoreId;
    Std_ReturnType ReturnValue = (Std_ReturnType)E_NOT_OK;

    u32CoreId = (uint32)Adc_GetCoreID();
#if (ADC_VALIDATE_CALL_AND_UNIT == STD_ON)
    if ((Std_ReturnType)E_OK == Adc_ValidateCallAndUnit(ADC_SELFTEST_ID , Unit, u32CoreId))
    {
#endif /* ADC_VALIDATE_CALL_AND_UNIT == STD_ON */

        ReturnValue = Adc_Ipw_SelfTest(Unit, u32CoreId);
        if ((Std_ReturnType)E_NOT_OK == ReturnValue)
        {
            Adc_ReportDetRuntimeError((uint8)ADC_SELFTEST_ID, (uint8)ADC_E_TIMEOUT);
        }
#if (ADC_VALIDATE_CALL_AND_UNIT == STD_ON)
    }
#endif /* ADC_VALIDATE_CALL_AND_UNIT == STD_ON */
    return ReturnValue;
}
#endif

#if (ADC_ENABLE_CONFIGURE_THRESHOLD_NONAUTO_API == STD_ON)
void Adc_ConfigureThreshold
(
    Adc_ThresholdControlIndexType ThresholdControlIndex,
    Adc_WdgThresholdValueType LowValue,
    Adc_WdgThresholdValueType HighValue
)
{
    Std_ReturnType Status;
#if (ADC_DEV_ERROR_DETECT == STD_ON)
    Adc_HwUnitType LogicalHwUnitId = 0U;
    Adc_WdgThresholdValueType MaxHighThreshold = ((Adc_WdgThresholdValueType)1U << ADC_MAX_RESOLUTION) - 1U;
    Adc_WdgThresholdValueType MaxLowThreshold = ((Adc_WdgThresholdValueType)1U << ADC_MAX_RESOLUTION) - 1U;
#endif /* if (ADC_DEV_ERROR_DETECT == STD_ON) */
    volatile uint32 u32CoreId;

    u32CoreId = (uint32)Adc_GetCoreID();
#if (ADC_DEV_ERROR_DETECT == STD_ON)
    LogicalHwUnitId = (uint8)(ThresholdControlIndex >> ADC_THRESHOLD_SYMBOLIC_NAME_SHIFT_HW_UNIT_ID_U16);
    if ((Std_ReturnType)E_OK == Adc_ValidateCallAndUnit(ADC_CONFIGURE_THRESHOLD_ID, LogicalHwUnitId, u32CoreId))
    {
        if ((HighValue < LowValue) || (HighValue > MaxHighThreshold) || (LowValue > MaxLowThreshold))
        {
            /* Error if High Threshold value is less than Low Threshold value or value > register size */
            Adc_ReportDetError((uint8)ADC_CONFIGURE_THRESHOLD_ID, (uint8)ADC_E_WRONG_CONF_THRHLD_VALUE);
        }
        else
        {
#endif /* if (ADC_DEV_ERROR_DETECT == STD_ON) */

            Status = Adc_Ipw_ConfigureThreshold(ThresholdControlIndex, LowValue, HighValue, u32CoreId);

#if (ADC_DEV_ERROR_DETECT == STD_ON)
            if ((Std_ReturnType)E_NOT_OK == Status)
            {
                Adc_ReportDetError((uint8)ADC_CONFIGURE_THRESHOLD_ID, (uint8)ADC_E_WRONG_CONF_THRHLD_VALUE);
            }
        }
    }
#endif /* if (ADC_DEV_ERROR_DETECT == STD_ON) */
    (void)Status;
}
#endif /* ADC_ENABLE_CONFIGURE_THRESHOLD_NONAUTO_API == STD_ON */

#ifdef ADC_WDG_SUPPORTED
/* CPR_RTD_00449.adc */
void Adc_EnableWdgNotification
(
    Adc_ChannelType ChannelId
)
{
    /* update enable/disable channel */
    Std_ReturnType Status;
    Adc_HwUnitType LogicalHwUnitId = 0U;
    volatile uint32 u32CoreId;

    u32CoreId = (uint32)Adc_GetCoreID();
    LogicalHwUnitId = (Adc_HwUnitType)(ChannelId >> ADC_CHANNEL_SYMBOLIC_NAME_SHIFT_HW_UNIT_ID_U16);
#if (ADC_DEV_ERROR_DETECT == STD_ON)
    if ((Std_ReturnType)E_OK == Adc_ValidateCallAndUnit(ADC_ENABLEWDGNOTIFICATION_ID, LogicalHwUnitId, u32CoreId))
    {
#endif /* if (ADC_DEV_ERROR_DETECT == STD_ON) */

        Status = Adc_Ipw_EnableWdgNotification(LogicalHwUnitId, ChannelId, u32CoreId);

#if (ADC_DEV_ERROR_DETECT == STD_ON)
        if ((Std_ReturnType)E_NOT_OK == Status)
        {
            Adc_ReportDetError((uint8)ADC_ENABLEWDGNOTIFICATION_ID, (uint8)ADC_E_PARAM_CONFIG);
        }
    }
#endif /* if (ADC_DEV_ERROR_DETECT == STD_ON) */
    (void)Status;
}

/* CPR_RTD_00451.adc */
void Adc_DisableWdgNotification
(
    Adc_ChannelType ChannelId
)
{
    /* update enable/disable channel */
    Std_ReturnType Status;
    Adc_HwUnitType LogicalHwUnitId = 0U;
    volatile uint32 u32CoreId;

    u32CoreId = (uint32)Adc_GetCoreID();
    LogicalHwUnitId = (Adc_HwUnitType)(ChannelId >> ADC_CHANNEL_SYMBOLIC_NAME_SHIFT_HW_UNIT_ID_U16);
#if (ADC_DEV_ERROR_DETECT == STD_ON)
    if ((Std_ReturnType)E_OK == Adc_ValidateCallAndUnit(ADC_DISABLEWDGNOTIFICATION_ID, LogicalHwUnitId, u32CoreId))
    {
#endif /* if (ADC_DEV_ERROR_DETECT == STD_ON) */

        Status = Adc_Ipw_DisableWdgNotification(LogicalHwUnitId, ChannelId, u32CoreId);

#if (ADC_DEV_ERROR_DETECT == STD_ON)
        if ((Std_ReturnType)E_NOT_OK == Status)
        {
            Adc_ReportDetError((uint8)ADC_DISABLEWDGNOTIFICATION_ID, (uint8)ADC_E_PARAM_CONFIG);
        }
    }
#endif /* if (ADC_DEV_ERROR_DETECT == STD_ON) */
    (void)Status;
}
#endif /* ADC_WDG_SUPPORTED */

#if (ADC_DUAL_CLOCK_MODE == STD_ON)
/* CPR_RTD_00044.adc */
/** @implements      Adc_SetClockMode_Activity */
Std_ReturnType Adc_SetClockMode
(
    Adc_SelectPrescalerType Prescaler
)
{
    volatile uint32 u32CoreId;
    Std_ReturnType Ret = (Std_ReturnType)E_NOT_OK;
    Adc_HwUnitType LogicalHwUnitId;
    Std_ReturnType ErrorFound = (Std_ReturnType)E_OK;
#if (ADC_DEV_ERROR_DETECT == STD_ON)
    uint32 u32CoreIdTemp;
#endif /* ADC_DEV_ERROR_DETECT == STD_ON */

    u32CoreId = (uint32)Adc_GetCoreID();
#if (ADC_DEV_ERROR_DETECT == STD_ON) 
    u32CoreIdTemp = u32CoreId; /* Used to avoid MISRA */
    if (TRUE == Adc_CheckSetClockModeCoreAndParam(Prescaler, u32CoreIdTemp))
    {
#endif /* ADC_DEV_ERROR_DETECT == STD_ON */
        for (LogicalHwUnitId = 0U; LogicalHwUnitId < ADC_MAX_HW_UNITS; LogicalHwUnitId++)
        {
            /* HW unit enabled on current partition */
            if(Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->Mapping.au8Adc_HwUnit[LogicalHwUnitId] == (uint8)STD_ON)
            {
                ErrorFound = Adc_ValidateNotBusyNoQueue(LogicalHwUnitId, ADC_SETCLOCKMODE_ID);
                if ((Std_ReturnType)E_NOT_OK == ErrorFound)
                {
                    break;
                }
            }
        }
        if ((Std_ReturnType)E_OK == ErrorFound)
        {
            if ((Std_ReturnType)E_OK == Adc_ValidateCheckGroupNotConversion(ADC_SETCLOCKMODE_ID, u32CoreId))
            {

                Ret = Adc_Ipw_SetClockMode(Prescaler, u32CoreId);
#if (ADC_SET_ADC_CONV_TIME_ONCE == STD_OFF)
                Adc_eClockMode[u32CoreId] = Prescaler;
#endif
            }
        }
#if (ADC_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* ADC_DEV_ERROR_DETECT == STD_ON */
    return Ret;
}
#endif /* (ADC_DUAL_CLOCK_MODE == STD_ON) */

#if (ADC_CTU_CONTROL_MODE_EXTRA_APIS == STD_ON)
/* CPR_RTD_00056.adc */
/** @implements      Adc_CtuWriteTriggerEnableMask_Activity */
Std_ReturnType Adc_CtuWriteTriggerEnableMask
(
    uint8 u8Trigger,
    uint8 u8ThcrValue
)
{
    Std_ReturnType Ret = (Std_ReturnType)E_OK;

#if (ADC_DEV_ERROR_DETECT == STD_ON)
    volatile uint32 u32CoreId = (uint32)Adc_GetCoreID();

    Ret = Adc_ValidateCallAndTrigger(CTU_SET_WRITE_TRIG_EN_MASK_ID, u8Trigger, u32CoreId);
    if((Std_ReturnType)E_OK == Ret)
#endif
    {
        Adc_Ipw_SetCtuWriteTriggerEnableMask(0U, u8Trigger, u8ThcrValue);
    }
    return Ret;
}

/* CPR_RTD_00059.adc */
/** @implements      Adc_CtuSetTriggerEnable_Activity */
Std_ReturnType Adc_CtuSetTriggerEnable
(
    uint8 u8Trigger,
    boolean bEnable
)
{
    Std_ReturnType Ret = (Std_ReturnType)E_OK;

#if (ADC_DEV_ERROR_DETECT == STD_ON)
    volatile uint32 u32CoreId = (uint32)Adc_GetCoreID();

    Ret = Adc_ValidateCallAndTrigger(CTU_SET_TRIGGER_ENABLE_ID, u8Trigger, u32CoreId);
    if((Std_ReturnType)E_OK == Ret)
#endif
    {
        Adc_Ipw_CtuSetTriggerEnable(0U, u8Trigger, bEnable);
    }
    return Ret;
}

/* CPR_RTD_00057.adc */
/** @implements      Adc_CtuSetTriggerAdcCmdAddress_Activity */
Std_ReturnType Adc_CtuSetTriggerAdcCmdAddress
(
    uint8 u8Trigger,
    uint8 u8ClcrValue
)
{
    Std_ReturnType Ret = (Std_ReturnType)E_OK;

#if (ADC_DEV_ERROR_DETECT == STD_ON)
    volatile uint32 u32CoreId = (uint32)Adc_GetCoreID();

    Ret = Adc_ValidateCallAndTrigger(CTU_SET_TRIGGER_ADC_CMD_ADDRESS_ID, u8Trigger, u32CoreId);
    if((Std_ReturnType)E_OK == Ret)
    {
        if ((uint32)u8ClcrValue > 24u) /* TODO: Update hardcoded value */
        {
            Adc_ReportDetError(CTU_SET_TRIGGER_ADC_CMD_ADDRESS_ID, ADC_E_WRONG_CTU_CLCR_TRIGGER);
            Ret = (Std_ReturnType)E_NOT_OK;
        }
    }
    if((Std_ReturnType)E_OK == Ret)
#endif
    {
        Adc_Ipw_SetCtuTrigAdcCmd(0U, u8Trigger, u8ClcrValue);
    }
    return Ret;
}

/* CPR_RTD_00058.adc */
/** @implements      Adc_CtuSetTriggerCompare_Activity */
Std_ReturnType Adc_CtuSetTriggerCompare
(
    uint8 u8Trigger,
    uint16 u16CompareValue
)
{
    Std_ReturnType Ret = (Std_ReturnType)E_OK;

#if (ADC_DEV_ERROR_DETECT == STD_ON)
    volatile uint32 u32CoreId = (uint32)Adc_GetCoreID();

    Ret = Adc_ValidateCallAndTrigger(CTU_SET_TRIGGER_COMPARE_ID, u8Trigger, u32CoreId);
    if((Std_ReturnType)E_OK == Ret)
#endif
    {
        Adc_Ipw_SetCtuTriggerCompare(0U, u8Trigger, u16CompareValue);
    }
    return Ret;
}
#endif /* if (ADC_CTU_CONTROL_MODE_EXTRA_APIS == STD_ON)  */

#if (ADC_SETCHANNEL_API == STD_ON)
/** @implements      Adc_SetChannel_Activity */
void Adc_SetChannel
(
    const Adc_GroupType Group,
    const Adc_GroupDefType * Channel,
#if (ADC_DELAY_AVAILABLE == STD_ON)
    const uint16 * Delays,
    const uint32 ChannelUpdateMask,
#endif /* (ADC_DELAY_AVAILABLE == STD_ON) */
    const Adc_ChannelIndexType NumberOfChannel
)
{
#if ((ADC_DEV_ERROR_DETECT == STD_ON) || (ADC_ENABLE_LIMIT_CHECK == STD_ON))
    volatile uint32 u32CoreId = (uint32)Adc_GetCoreID();
    Adc_HwUnitType LogicalHwUnitId = 0U;
    Adc_GroupType GroupIndex = 0U;
#endif /* ((ADC_DEV_ERROR_DETECT == STD_ON) || (ADC_ENABLE_LIMIT_CHECK == STD_ON)) */
#if (ADC_DEV_ERROR_DETECT == STD_ON)
    uint32 u32CoreIdTemp = u32CoreId; /* Used to avoid MISRA */
    uint32 Index = 0u;
    Std_ReturnType StatusChecks = Adc_ValidateCallAndGroup(ADC_SETCHANNEL_ID, Group, u32CoreId);

    if (StatusChecks == (Std_ReturnType)E_OK)
    {
        GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group];
        LogicalHwUnitId = Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].AdcLogicalUnitId;
        if ((Std_ReturnType)E_OK == Adc_ValidatePtr(ADC_SETCHANNEL_ID, Channel))
        {
#if (ADC_DELAY_AVAILABLE == STD_ON)
            StatusChecks = Adc_CheckSetChannelParams(Group, Delays, ChannelUpdateMask, NumberOfChannel);
#else
            StatusChecks = Adc_CheckSetChannelParams(Group, NumberOfChannel);
#endif /* (ADC_DELAY_AVAILABLE == STD_ON) */

            for (Index = 0; Index < NumberOfChannel; Index++)
            {
                /* Check if input channel is configured at initialization */
                if (
                    (Channel[Index] >= Adc_pCfgPtr[u32CoreIdTemp]->pAdcIpwConfig->Mapping.aAdc_Channels[LogicalHwUnitId])
#if (ADC_ENABLE_LIMIT_CHECK == STD_ON)
                    || ((NumberOfChannel > 1U) && (TRUE == Adc_pCfgPtr[u32CoreIdTemp]->pAdcIpwConfig->ChannelLimitCheckingConfigs[LogicalHwUnitId][Channel[Index]].bChannelLimitCheckEnabled))
#endif /* (ADC_ENABLE_LIMIT_CHECK == STD_ON) */
                   )
                {
                    Adc_ReportDetError(ADC_SETCHANNEL_ID, (uint8)ADC_E_PARAM_CHANNEL);
                    StatusChecks = (Std_ReturnType)E_NOT_OK;
                    break;
                }
            }
        }
    }

#if ((ADC_HW_TRIGGER_API == STD_ON) && (ADC_CTU_TRIGGER_MODE_SUPPORTED == STD_ON))
    if (StatusChecks == (Std_ReturnType)E_OK)
    {
        StatusChecks = Adc_CheckSetChannelCtuTriggers(GroupIndex, LogicalHwUnitId, NumberOfChannel, u32CoreId);
    }
#endif /* ((ADC_HW_TRIGGER_API == STD_ON) && (ADC_CTU_TRIGGER_MODE_SUPPORTED == STD_ON)) */

    if (StatusChecks == (Std_ReturnType)E_OK)
    {
#endif /* ADC_DEV_ERROR_DETECT == STD_ON */
        Adc_aRuntimeGroupChannel[Group].pChannel = Channel;
        Adc_aRuntimeGroupChannel[Group].ChannelCount = NumberOfChannel;
        Adc_aRuntimeGroupChannel[Group].bRuntimeUpdated = TRUE;
#if (ADC_ENABLE_LIMIT_CHECK == STD_ON)
#if (ADC_DEV_ERROR_DETECT == STD_OFF)
        GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group];
        LogicalHwUnitId = Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].AdcLogicalUnitId;
#endif /* (ADC_DEV_ERROR_DETECT == STD_OFF) */
        Adc_aRuntimeGroupChannel[Group].bAdcRuntimeGroupLimitcheck = Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->ChannelLimitCheckingConfigs[LogicalHwUnitId][Channel[0U]].bChannelLimitCheckEnabled;
#endif /* (ADC_ENABLE_LIMIT_CHECK == STD_ON) */
#if (ADC_DELAY_AVAILABLE == STD_ON)
        Adc_aRuntimeGroupChannel[Group].pu16Delays = Delays;
        if (NumberOfChannel <= ADC_MAX_CHAN_COUNT)
        {
            Adc_aRuntimeGroupChannel[Group].u32Mask = ChannelUpdateMask;
        }
        else
        {
            Adc_aRuntimeGroupChannel[Group].u32Mask = 0xFFFFFFFFUL;
        }
#endif /* (ADC_DELAY_AVAILABLE == STD_ON) */
#if (ADC_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* ADC_DEV_ERROR_DETECT == STD_ON */
}
#endif /* ADC_SETCHANNEL_API == STD_ON */

#ifndef ADC_CMR_REGISTER_NOT_SUPPORTED
void Adc_GetCmrRegister /* TODO: rename and move to IPW */
(
    Adc_HwUnitType Unit,
    Adc_GroupType Group,
    Adc_ChansIdxMaskType * pCmrMask,
    uint32 u32CoreId
)
{
#if ((ADC_ENABLE_CH_DISABLE_CH_NONAUTO_API == STD_ON) || (ADC_SETCHANNEL_API == STD_OFF))
    Adc_GroupType GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group];
    const Adc_GroupConfigurationType * pGroupPtr = &(Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex]);
#endif /* (ADC_ENABLE_CH_DISABLE_CH_NONAUTO_API == STD_ON) || (ADC_SETCHANNEL_API == STD_OFF) */
#if (ADC_ENABLE_CH_DISABLE_CH_NONAUTO_API == STD_ON)
    Adc_GroupType Adc_IndividualGroupId;
#endif /* (ADC_ENABLE_CH_DISABLE_CH_NONAUTO_API == STD_ON) */
#if (ADC_SETCHANNEL_API == STD_ON)
    Adc_ChannelType ChId;
    Adc_ChannelIndexType Ch;
#endif /* (ADC_SETCHANNEL_API == STD_ON) */

    (void)Unit;

    uint8 i;

        for (i = 0; i < ADC_SAR_NUM_GROUP_CHAN; i++)
        {
            pCmrMask->aChanMask[i] = 0UL;
        }

    /* If the Individual group channel enable capability is ON*/
#if (ADC_ENABLE_CH_DISABLE_CH_NONAUTO_API == STD_ON)
    Adc_IndividualGroupId = pGroupPtr->EnableChDisableChGroupIndex;
    if(ADC_ENABLE_CH_DISABLE_CH_INVALID_GROUP_INDEX != Adc_IndividualGroupId)
    {
        for (i = 0; i < ADC_SAR_NUM_GROUP_CHAN; i++)
        {
            pCmrMask->aChanMask[i] = Adc_aNCMRxMask[Adc_IndividualGroupId].aChanMask[i];
        }
    }
    else
#endif /* (ADC_ENABLE_CH_DISABLE_CH_NONAUTO_API == STD_ON) */
    {
#if (ADC_SETCHANNEL_API == STD_ON)
        for(Ch = 0U; Ch < Adc_aRuntimeGroupChannel[Group].ChannelCount; Ch++)
        {
            ChId = Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->apAdcConfig[Unit]->pChannelConfigs[Adc_aRuntimeGroupChannel[Group].pChannel[Ch]].u8ChannelIndex;
            Adc_Ipw_SetChansMask(pCmrMask, ChId);
        }
#else
        /* Program the mask registers */
        for (i = 0; i < ADC_SAR_NUM_GROUP_CHAN; i++)
        {
            pCmrMask->aChanMask[i] = pGroupPtr->AssignedChannelMask.aChanMask[i];
        }
#endif /* (ADC_SETCHANNEL_API == STD_ON) */
    }
}
#endif /* ADC_CMR_REGISTER_NOT_SUPPORTED */


#if (ADC_ENABLE_CTU_CONTROL_MODE_API == STD_ON)
/* CPR_RTD_00271.adc */
/** @implements      Adc_EnableCtuControlMode_Activity */
void Adc_EnableCtuControlMode
(
    Adc_HwUnitType Unit
)
{
    volatile uint32 u32CoreId = (uint32)Adc_GetCoreID();

#if (ADC_VALIDATE_CALL_AND_UNIT == STD_ON)
    if ((Std_ReturnType)E_OK == Adc_ValidateCallAndUnit(ADC_ENABLE_CTU_CONTROL_MODE_ID, Unit, u32CoreId))
#endif /* ADC_VALIDATE_CALL_AND_UNIT == STD_ON */
#if (ADC_DEV_ERROR_DETECT == STD_ON)
    {
        if ((Std_ReturnType)E_OK == Adc_ValidateUnitActive(ADC_ENABLE_CTU_CONTROL_MODE_ID, Unit, u32CoreId))
        {
#endif /* ADC_DEV_ERROR_DETECT == STD_ON */
            if ((Std_ReturnType)E_OK == Adc_ValidateStateCtuControlMode(ADC_ENABLE_CTU_CONTROL_MODE_ID, Unit))
            {
                Adc_Ipw_EnableCtuControlMode(Unit, u32CoreId);
            }
#if (ADC_DEV_ERROR_DETECT == STD_ON)
        }
    }
#endif /* ADC_DEV_ERROR_DETECT == STD_ON */
}

/* CPR_RTD_00271.adc */
/** @implements      Adc_DisableCtuControlMode_Activity */
void Adc_DisableCtuControlMode
(
    Adc_HwUnitType Unit
)
{
    volatile uint32 u32CoreId = (uint32)Adc_GetCoreID();

#if (ADC_VALIDATE_CALL_AND_UNIT == STD_ON)
    if ((Std_ReturnType)E_OK == Adc_ValidateCallAndUnit(ADC_DISABLE_CTU_CONTROL_MODE_ID, Unit, u32CoreId))
#endif /* ADC_VALIDATE_CALL_AND_UNIT == STD_ON */
#if (ADC_DEV_ERROR_DETECT == STD_ON)
    {
        if ((Std_ReturnType)E_OK == Adc_ValidateUnitActive(ADC_DISABLE_CTU_CONTROL_MODE_ID, Unit, u32CoreId))
        {
#endif /* ADC_DEV_ERROR_DETECT == STD_ON */
            if ((Std_ReturnType)E_OK == Adc_ValidateStateCtuControlMode(ADC_DISABLE_CTU_CONTROL_MODE_ID, Unit))
            {
                Adc_Ipw_DisableCtuControlMode(Unit, u32CoreId);
            }
#if (ADC_DEV_ERROR_DETECT == STD_ON)
        }
    }
#endif /* ADC_DEV_ERROR_DETECT == STD_ON */
}

/* CPR_RTD_00455.adc */
/** @implements      Adc_CtuEnableHwTrigger_Activity */
void Adc_CtuEnableHwTrigger
(
    Adc_CtuTrigSrcType TrigSource
)
{
#if (ADC_DEV_ERROR_DETECT == STD_ON)
    uint32 u32CoreId = (uint32)Adc_GetCoreID();
    const uint8 u8ServiceId = ADC_CTU_ENABLE_HW_TRIGGER_ID;

    if (Adc_ValidateCtuControlModeApi(u8ServiceId, u32CoreId) == (Std_ReturnType)E_OK)
    {
        if(TrigSource > ADC_IPW_MAX_CTU_TRIG_SOURCE_ID)
        {
            Adc_ReportDetError(u8ServiceId, ADC_E_WRONG_TRIGG_SRC);
        }
        else
        {
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */

            Adc_Ipw_CtuEnableHwTrigger(0u, (uint8)TrigSource);

#if (ADC_DEV_ERROR_DETECT == STD_ON)
        }
    }
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */
}

/** @implements      Adc_CtuDisableHwTrigger_Activity */
void Adc_CtuDisableHwTrigger
(
    Adc_CtuTrigSrcType TrigSource
)
{
#if (ADC_DEV_ERROR_DETECT == STD_ON)
    uint32 u32CoreId = (uint32)Adc_GetCoreID();
    const uint8 u8ServiceId = ADC_CTU_DISABLE_HW_TRIGGER_ID;

    if (Adc_ValidateCtuControlModeApi(u8ServiceId, u32CoreId) == (Std_ReturnType)E_OK)
    {
        if(TrigSource > ADC_IPW_MAX_CTU_TRIG_SOURCE_ID)
        {
            Adc_ReportDetError(u8ServiceId, ADC_E_WRONG_TRIGG_SRC);
        }
        else
        {
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */

            Adc_Ipw_CtuDisableHwTrigger(0u, (uint8)TrigSource);

#if (ADC_DEV_ERROR_DETECT == STD_ON)
        }
    }
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */
}

/** @implements      Adc_CtuStartConversion_Activity */
void Adc_CtuStartConversion
(
    Adc_CtuTrigSrcType TrigSource
)
{
#if (ADC_DEV_ERROR_DETECT == STD_ON)
    uint32 u32CoreId = (uint32)Adc_GetCoreID();
    const uint8 u8ServiceId = ADC_CTU_START_CONVERSION_ID;

    if (Adc_ValidateCtuControlModeApi(u8ServiceId, u32CoreId) == (Std_ReturnType)E_OK)
    {
        if(TrigSource > ADC_IPW_MAX_CTU_TRIG_SOURCE_ID)
        {
            Adc_ReportDetError(u8ServiceId, ADC_E_WRONG_TRIGG_SRC);
        }
        else
        {
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */

            Adc_Ipw_CtuStartConversion(0u, (uint8)TrigSource);

#if (ADC_DEV_ERROR_DETECT == STD_ON)
        }
    }
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */
}

#if (ADC_CTU_AVAILABLE == STD_ON)
/** @implements      Adc_CtuMasterReload_Activity */
void Adc_CtuMasterReload
(
    Adc_HwUnitType CtuUnit
)
{
#if (ADC_DEV_ERROR_DETECT == STD_ON)
    uint32 u32CoreId = (uint32)Adc_GetCoreID();
    const uint8 u8ServiceId = ADC_CTU_MASTER_RELOAD_ID;

    if (Adc_ValidateCtuControlModeApi(u8ServiceId, u32CoreId) == (Std_ReturnType)E_OK)
    {
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */

        Adc_Ipw_CtuMasterReload(CtuUnit);

#if (ADC_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */
}
#endif /* (ADC_CTU_AVAILABLE == STD_ON) */

#if (ADC_BCTU_AVAILABLE == STD_ON)
/** @implements      Adc_CtuReadConvData_Activity */
Adc_ValueGroupType Adc_CtuReadConvData
(
    Adc_HwUnitType AdcUnit
)
{
    Adc_ValueGroupType ConvData = 0u;

#if (ADC_DEV_ERROR_DETECT == STD_ON)
    uint32 u32CoreId = (uint32)Adc_GetCoreID();
    const uint8 u8ServiceId = ADC_CTU_READ_CONV_DATA_ID;

    if (Adc_ValidateCtuControlModeApi(u8ServiceId, u32CoreId) == (Std_ReturnType)E_OK)
    {
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */

        ConvData = Adc_Ipw_CtuReadConvData(0u, AdcUnit);

#if (ADC_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */

    return ConvData;
}

/** @implements      Adc_CtuReadConvResult_Activity */
void Adc_CtuReadConvResult
(
    Adc_HwUnitType AdcUnit,
    Adc_CtuResultType * pResult
)
{
#if (ADC_DEV_ERROR_DETECT == STD_ON)
    uint32 u32CoreId = (uint32)Adc_GetCoreID();
    const uint8 u8ServiceId = ADC_CTU_READ_CONV_RESULT_ID;

    if (Adc_ValidateCtuControlModeApi(u8ServiceId, u32CoreId) == (Std_ReturnType)E_OK)
    {
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */

        Adc_Ipw_CtuReadConvResult(0u, AdcUnit, pResult);

#if (ADC_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */
}

/** @implements      Adc_CtuStopLoopConversions_Activity */
void Adc_CtuStopLoopConversions
(
    Adc_CtuTrigSrcType TrigSource
)
{
#if (ADC_DEV_ERROR_DETECT == STD_ON)
    uint32 u32CoreId = (uint32)Adc_GetCoreID();
    const uint8 u8ServiceId = ADC_CTU_STOP_LOOP_CONVERSION_ID;

    if (Adc_ValidateCtuControlModeApi(u8ServiceId, u32CoreId) == (Std_ReturnType)E_OK)
    {
        if(TrigSource > ADC_IPW_MAX_CTU_TRIG_SOURCE_ID)
        {
            Adc_ReportDetError(u8ServiceId, ADC_E_WRONG_TRIGG_SRC);
        }
        else
        {
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */

            Adc_Ipw_CtuStopLoopConversions(0u, (uint8)TrigSource);

#if (ADC_DEV_ERROR_DETECT == STD_ON)
        }
    }
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */
}
#endif /* (ADC_BCTU_AVAILABLE == STD_ON) */

/** @implements      Adc_CtuReadFifoData_Activity */
void Adc_CtuReadFifoData
(
    Adc_CtuFifoIdxType FifoIdx,
    uint16 * pu16Data,
    uint8 u8DataLength
)
{
    uint8 Index;

#if (ADC_DEV_ERROR_DETECT == STD_ON)
    uint32 u32CoreId = (uint32)Adc_GetCoreID();
    const uint8 u8ServiceId = ADC_CTU_READ_FIFO_DATA_ID;

    if (Adc_ValidateCtuControlModeApi(u8ServiceId, u32CoreId) == (Std_ReturnType)E_OK)
    {
        if(FifoIdx >= ADC_IPW_NUM_CTU_FIFO)
        {
            Adc_ReportDetError(u8ServiceId, ADC_E_WRONG_TRIGG_SRC); /* TODO update error code. Add rest of DET checks. */
        }
        else
        {
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */
           for(Index = 0u; Index < u8DataLength; Index++)
           {
               pu16Data[Index] = Adc_Ipw_CtuReadFifoData(0u, FifoIdx);
           }
#if (ADC_DEV_ERROR_DETECT == STD_ON)
        }
    }
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */
}

/** @implements      Adc_CtuReadFifoResult_Activity */
void Adc_CtuReadFifoResult
(
    Adc_CtuFifoIdxType FifoIdx,
    Adc_CtuFifoResultType * pResult,
    uint8 u8ResultLength
)
{
    uint8 Index;

#if (ADC_DEV_ERROR_DETECT == STD_ON)
    uint32 u32CoreId = (uint32)Adc_GetCoreID();
    const uint8 u8ServiceId = ADC_CTU_READ_FIFO_RESULT_ID;

    if (Adc_ValidateCtuControlModeApi(u8ServiceId, u32CoreId) == (Std_ReturnType)E_OK)
    {
        if(FifoIdx >= ADC_IPW_NUM_CTU_FIFO)
        {
            Adc_ReportDetError(u8ServiceId, ADC_E_WRONG_TRIGG_SRC); /* TODO update error code. Add rest of DET checks. */
        }
        else
        {
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */
            for(Index = 0u; Index < u8ResultLength; Index++)
            {
                Adc_Ipw_CtuReadFifoResult(0u, FifoIdx, &(pResult[Index]));
            }
#if (ADC_DEV_ERROR_DETECT == STD_ON)
        }
    }
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */
}

/** @implements      Adc_CtuSetFifoWatermark_Activity */
void Adc_CtuSetFifoWatermark
(
    Adc_CtuFifoIdxType FifoIdx,
    uint8 u8Watermark
)
{
#if (ADC_DEV_ERROR_DETECT == STD_ON)
    uint32 u32CoreId = (uint32)Adc_GetCoreID();
    const uint8 u8ServiceId = ADC_CTU_SET_FIFO_WATERMARK_ID;

    if (Adc_ValidateCtuControlModeApi(u8ServiceId, u32CoreId) == (Std_ReturnType)E_OK)
    {
        if(FifoIdx >= ADC_IPW_NUM_CTU_FIFO)
        {
            Adc_ReportDetError(u8ServiceId, ADC_E_WRONG_TRIGG_SRC); /* TODO update error code. Add rest of DET checks. */
        }
        else
        {
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */
            Adc_Ipw_CtuSetFifoWatermark(0u, FifoIdx, u8Watermark);
#if (ADC_DEV_ERROR_DETECT == STD_ON)
        }
    }
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */
}

/** @implements      Adc_CtuEnableNotification_Activity */
void Adc_CtuEnableNotification
(
    Adc_CtuNotificationType Notification
)
{
#if (ADC_DEV_ERROR_DETECT == STD_ON)
    uint32 u32CoreId = (uint32)Adc_GetCoreID();
    const uint8 u8ServiceId = ADC_CTU_ENABLE_NOTIFICATION_ID;

    if (Adc_ValidateCtuControlModeApi(u8ServiceId, u32CoreId) == (Std_ReturnType)E_OK)
    {
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */
            Adc_Ipw_CtuEnableNotification(0u, Notification);
#if (ADC_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */
}

/** @implements      Adc_CtuDisableNotification_Activity */
void Adc_CtuDisableNotification
(
    Adc_CtuNotificationType Notification
)
{
#if (ADC_DEV_ERROR_DETECT == STD_ON)
    uint32 u32CoreId = (uint32)Adc_GetCoreID();
    const uint8 u8ServiceId = ADC_CTU_DISABLE_NOTIFICATION_ID;

    if (Adc_ValidateCtuControlModeApi(u8ServiceId, u32CoreId) == (Std_ReturnType)E_OK)
    {
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */
            Adc_Ipw_CtuDisableNotification(0u, Notification);
#if (ADC_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */
}

/** @implements      Adc_CtuSetList_Activity */
void Adc_CtuSetList
(
    const Adc_CtuListItemType * const ListItemsArray,
    const uint8 NumItems,
    const uint8 ListStartPosition
)
{
#if (ADC_DEV_ERROR_DETECT == STD_ON)
    uint32 u32CoreId = (uint32)Adc_GetCoreID();
    const uint8 u8ServiceId = ADC_CTU_SET_LIST_ID;

    if (Adc_ValidateCtuControlModeApi(u8ServiceId, u32CoreId) == (Std_ReturnType)E_OK)
    {
        if(ListItemsArray == NULL_PTR)
        {
            Adc_ReportDetError(u8ServiceId, ADC_E_PARAM_POINTER);
        }
        else
        {
            if((NumItems >= ADC_IPW_NUM_CTU_LIST_ELEMS) || (ListStartPosition >= ADC_IPW_NUM_CTU_LIST_ELEMS))
            {
                Adc_ReportDetError(u8ServiceId, ADC_E_WRONG_TRIGG_SRC);
            }
            else
            {
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */
               Adc_Ipw_CtuSetList(0u, ListStartPosition, ListItemsArray, NumItems);
#if (ADC_DEV_ERROR_DETECT == STD_ON)
            }
        }
    }
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */
}

/** @implements      Adc_CtuSetListPointer_Activity */
void Adc_CtuSetListPointer
(
    Adc_CtuTrigSrcType TrigSource,
    Adc_CtuListPtrType ListPtr
)
{
#if (ADC_DEV_ERROR_DETECT == STD_ON)
    uint32 u32CoreId = (uint32)Adc_GetCoreID();
    const uint8 u8ServiceId = ADC_CTU_SET_LIST_POINTER_ID;

    if (Adc_ValidateCtuControlModeApi(u8ServiceId, u32CoreId) == (Std_ReturnType)E_OK)
    {
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */
        Adc_Ipw_CtuSetListPointer(0u, TrigSource, ListPtr);
#if (ADC_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */
}
#endif /* ADC_ENABLE_CTU_CONTROL_MODE_API == STD_ON */

#if (ADC_ENABLE_TEMPSENSE_API == STD_ON)
/** @implements      Adc_TempSenseCalculateTemp_Activity */
uint16 Adc_TempSenseCalculateTemp
(
    Adc_HwUnitType Unit,
    const uint16 TempSenseAdcConvData
)
{
    uint16 TempSenseVal;
#if (ADC_DEV_ERROR_DETECT == STD_ON)
    if (TempSenseAdcConvData >= TEMPSENSE_RESOLUTION_12B)
    {
        /* The data conversion must be converted to 12bit resolution */
        Adc_ReportDetError(ADC_TEMPSENSE_CALCULATE_TEMP_ID, ADC_E_PARAM_CONFIG);
        TempSenseVal = 0u; /* Invalid value */
    }
    else
    {
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */
        TempSenseVal = Adc_Ipw_TempSenseCalculateTemp(Unit, 0u, TempSenseAdcConvData);
#if (ADC_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* (ADC_DEV_ERROR_DETECT == STD_ON) */

    return TempSenseVal;
}

/** @implements      Adc_TempSenseGetTemp_Activity */
Std_ReturnType Adc_TempSenseGetTemp
(
    Adc_HwUnitType Unit,
    uint16 * const TempSenseVal
)
{
    Std_ReturnType RetVal;
    boolean isGetTempCalled = FALSE;
    bTempsenseInUsed = TRUE;
    const volatile uint32 u32CoreId = Adc_GetCoreID();
#if (ADC_VALIDATE_CALL_AND_UNIT == STD_ON)
    if ((Std_ReturnType)E_OK == Adc_ValidateCallAndUnit(ADC_TEMPSENSE_GET_TEMP_ID, Unit, u32CoreId))
    {
#endif /* ADC_VALIDATE_CALL_AND_UNIT == STD_ON */
        if ((Std_ReturnType)E_OK == Adc_ValidateNotBusyNoQueue(Unit, ADC_TEMPSENSE_GET_TEMP_ID))
        {
            if ((Std_ReturnType)E_OK == Adc_ValidateCheckGroupNotConversion(ADC_TEMPSENSE_GET_TEMP_ID, u32CoreId))
            {
                RetVal = Adc_Ipw_TempSenseGetTemp(Unit, 0u, TempSenseVal, u32CoreId);
                isGetTempCalled = TRUE;
            }
        }
        if (FALSE == isGetTempCalled)
        {
            RetVal = (Std_ReturnType)E_NOT_OK;
        }
#if (ADC_VALIDATE_CALL_AND_UNIT == STD_ON)
    }
    else
    {
        RetVal = (Std_ReturnType)E_NOT_OK;
    }
#endif /* ADC_VALIDATE_CALL_AND_UNIT == STD_ON */
    bTempsenseInUsed = FALSE;

    return RetVal;
}

/** @implements      Adc_TempSenseSetPowerMode_Activity */
Std_ReturnType Adc_TempSenseSetPowerMode
(
    Adc_SetPowerModeType SetPowerMode
)
{
    Std_ReturnType ReturnStatus = (Std_ReturnType)E_OK;

    if (ADC_POWER_DOWN_MODE == SetPowerMode)
    {
        if (bTempsenseInUsed == FALSE)
        {
            Adc_Ipw_TempSenseDisable(0u);
        }
        else
        {
            ReturnStatus = (Std_ReturnType)E_NOT_OK;
        }
    }
    else
    {
        Adc_Ipw_TempSenseEnable(0u);
    }

    return ReturnStatus;
}

#endif /* (ADC_ENABLE_TEMPSENSE_API == STD_ON) */

#define ADC_STOP_SEC_CODE
#include "Adc_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
