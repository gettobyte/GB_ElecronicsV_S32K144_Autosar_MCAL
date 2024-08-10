/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : 
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
*   @file    Clock_Ip_Private.h
*   @version    1.0.0
*
*   @brief   CLOCK IP driver private header file.
*   @details CLOCK IP driver private header file.

*   @addtogroup CLOCK_DRIVER Clock Ip Driver
*   @{
*/

#if !defined(CLOCK_IP_PRIVATE_H)
#define CLOCK_IP_PRIVATE_H

#include "Clock_Ip.h"

#if defined(CLOCK_IP_PLATFORM_S32R45)
    #include "Clock_Ip_Specific1.h"
#else
    #include "Clock_Ip_Specific.h"
#endif

#ifdef CLOCK_IP_DEV_ERROR_DETECT
#if (STD_ON == CLOCK_IP_DEV_ERROR_DETECT)
    #include "Devassert.h"
#endif /* (STD_ON == CLOCK_IP_DEV_ERROR_DETECT) */
#endif /* #ifdef CLOCK_IP_DEV_ERROR_DETECT */

/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define CLOCK_IP_PRIVATE_VENDOR_ID                    43
#define CLOCK_IP_PRIVATE_AR_RELEASE_MAJOR_VERSION     4
#define CLOCK_IP_PRIVATE_AR_RELEASE_MINOR_VERSION     4
#define CLOCK_IP_PRIVATE_AR_RELEASE_REVISION_VERSION  0
#define CLOCK_IP_PRIVATE_SW_MAJOR_VERSION             1
#define CLOCK_IP_PRIVATE_SW_MINOR_VERSION             0
#define CLOCK_IP_PRIVATE_SW_PATCH_VERSION             0


/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if Clock_Ip_Private.h file and Clock_Ip.h file are of the same Autosar version */
#if ((CLOCK_IP_PRIVATE_AR_RELEASE_MAJOR_VERSION    != CLOCK_IP_AR_RELEASE_MAJOR_VERSION) || \
     (CLOCK_IP_PRIVATE_AR_RELEASE_MINOR_VERSION    != CLOCK_IP_AR_RELEASE_MINOR_VERSION) || \
     (CLOCK_IP_PRIVATE_AR_RELEASE_REVISION_VERSION != CLOCK_IP_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Clock_Ip_Private.h and Clock_Ip.h are different"
#endif

/* Check if Clock_Ip_Private.h file and Clock_Ip.h file have same versions */
#if (CLOCK_IP_PRIVATE_VENDOR_ID  != CLOCK_IP_VENDOR_ID)
    #error "Clock_Ip_Private.h and Clock_Ip.h have different vendor IDs"
#endif

/* Check if Clock_Ip_Private.h file and Clock_Ip.h file are of the same Software version */
#if ((CLOCK_IP_PRIVATE_SW_MAJOR_VERSION != CLOCK_IP_SW_MAJOR_VERSION) || \
     (CLOCK_IP_PRIVATE_SW_MINOR_VERSION != CLOCK_IP_SW_MINOR_VERSION) || \
     (CLOCK_IP_PRIVATE_SW_PATCH_VERSION != CLOCK_IP_SW_PATCH_VERSION))
    #error "Software Version Numbers of Clock_Ip_Private.h and Clock_Ip.h are different"
#endif

#if defined(CLOCK_IP_PLATFORM_S32R45)
/* Check if Clock_Ip_Private.h file and Clock_Ip_Specific1.h file are of the same Autosar version */
#if ((CLOCK_IP_PRIVATE_AR_RELEASE_MAJOR_VERSION    != CLOCK_IP_SPECIFIC1_AR_RELEASE_MAJOR_VERSION) || \
     (CLOCK_IP_PRIVATE_AR_RELEASE_MINOR_VERSION    != CLOCK_IP_SPECIFIC1_AR_RELEASE_MINOR_VERSION) || \
     (CLOCK_IP_PRIVATE_AR_RELEASE_REVISION_VERSION != CLOCK_IP_SPECIFIC1_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Clock_Ip_Private.h and Clock_Ip_Specific1.h are different"
#endif

/* Check if Clock_Ip_Private.h file and Clock_Ip_Specific1.h file have same versions */
#if (CLOCK_IP_PRIVATE_VENDOR_ID  != CLOCK_IP_SPECIFIC1_VENDOR_ID)
    #error "Clock_Ip_Private.h and Clock_Ip_Specific1.h have different vendor IDs"
#endif

/* Check if Clock_Ip_Private.h file and Clock_Ip_Specific1.h file are of the same Software version */
#if ((CLOCK_IP_PRIVATE_SW_MAJOR_VERSION != CLOCK_IP_SPECIFIC1_SW_MAJOR_VERSION) || \
     (CLOCK_IP_PRIVATE_SW_MINOR_VERSION != CLOCK_IP_SPECIFIC1_SW_MINOR_VERSION) || \
     (CLOCK_IP_PRIVATE_SW_PATCH_VERSION != CLOCK_IP_SPECIFIC1_SW_PATCH_VERSION))
    #error "Software Version Numbers of Clock_Ip_Private.h and Clock_Ip_Specific1.h are different"
#endif

#else
/* Check if Clock_Ip_Private.h file and Clock_Ip_Specific.h file are of the same Autosar version */
#if ((CLOCK_IP_PRIVATE_AR_RELEASE_MAJOR_VERSION    != CLOCK_IP_SPECIFIC_AR_RELEASE_MAJOR_VERSION) || \
     (CLOCK_IP_PRIVATE_AR_RELEASE_MINOR_VERSION    != CLOCK_IP_SPECIFIC_AR_RELEASE_MINOR_VERSION) || \
     (CLOCK_IP_PRIVATE_AR_RELEASE_REVISION_VERSION != CLOCK_IP_SPECIFIC_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Clock_Ip_Private.h and Clock_Ip_Specific.h are different"
#endif

/* Check if Clock_Ip_Private.h file and Clock_Ip_Specific.h file have same versions */
#if (CLOCK_IP_PRIVATE_VENDOR_ID  != CLOCK_IP_SPECIFIC_VENDOR_ID)
    #error "Clock_Ip_Private.h and Clock_Ip_Specific.h have different vendor IDs"
#endif

/* Check if Clock_Ip_Private.h file and Clock_Ip_Specific.h file are of the same Software version */
#if ((CLOCK_IP_PRIVATE_SW_MAJOR_VERSION != CLOCK_IP_SPECIFIC_SW_MAJOR_VERSION) || \
     (CLOCK_IP_PRIVATE_SW_MINOR_VERSION != CLOCK_IP_SPECIFIC_SW_MINOR_VERSION) || \
     (CLOCK_IP_PRIVATE_SW_PATCH_VERSION != CLOCK_IP_SPECIFIC_SW_PATCH_VERSION))
    #error "Software Version Numbers of Clock_Ip_Private.h and Clock_Ip_Specific.h are different"
#endif

#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
#ifdef CLOCK_IP_DEV_ERROR_DETECT
#if (STD_ON == CLOCK_IP_DEV_ERROR_DETECT)
/* Check if Clock_Ip_Private.h file and Devassert.h file are of the same Autosar version */
#if ((CLOCK_IP_PRIVATE_AR_RELEASE_MAJOR_VERSION    != DEVASSERT_AR_RELEASE_MAJOR_VERSION) || \
     (CLOCK_IP_PRIVATE_AR_RELEASE_MINOR_VERSION    != DEVASSERT_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Clock_Ip_Private.h and Devassert.h are different"
#endif
#endif /* (STD_ON == CLOCK_IP_DEV_ERROR_DETECT) */
#endif /* #ifdef CLOCK_IP_DEV_ERROR_DETECT */
#endif


#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus*/



/* Total number of clocks */
#define CLOCK_NAMES_NO                    FEATURE_CLOCKS_NO
/* Total number of producer clocks */
#define CLOCK_PRODUCERS_NO                FEATURE_CLOCK_PRODUCERS_NO

/* Define clock features */
#define CLOCK_MODULE_INSTANCE       0U              /* Instance of the module where clock element is implemented. */
#define CLOCK_CALLBACK              1U              /* Actions to be done for different implementations of a clock element. */
#define EXTENSION_INDEX             2U              /* Specific clock feature extension */
#define POWER_MODE_INDEX            3U              /* Index of power mode for multiplexed clock option */
#define SELECTOR_INDEX              4U              /* Selector index. */
#define DIVIDER_INDEX               5U              /* Divider index. */
#define GATE_INDEX                  6U              /* Gate index */
#define PCFS_INDEX                  7U              /* Pcfs index */
#define CMU_INDEX                   8U              /* Cmu index */




/* Maximum number of clock features for each clock name */
#define CLOCK_FEATURES_NO           9U

#if (defined (CLOCK_IP_S32K3))
#define INV_VAL                     255U            /* Invalid value */
#define NO_TRIGGER                  0U              /* No trigger is supported by divider. */
#define TRIGGER                     1U              /* Trigger is supported by divider. */
#define TRIGGER_VALUE               0xFFFFFFFFU     /* Trigger value. */
#endif

#if (defined(CLOCK_IP_DEV_ERROR_DETECT))
    #if (CLOCK_IP_DEV_ERROR_DETECT == STD_ON)
#define IRCOSC_OBJECT                 (1UL << 0U)
#define XOSC_OBJECT                   (1UL << 1U)
#define PLL_OBJECT                    (1UL << 2U)
#define SELECTOR_OBJECT               (1UL << 3U)
#define DIVIDER_OBJECT                (1UL << 4U)
#define DIVIDER_TRIGGER_OBJECT        (1UL << 5U)
#define FRAC_DIV_OBJECT               (1UL << 6U)
#define EXT_SIG_OBJECT                (1UL << 7U)
#define GATE_OBJECT                   (1UL << 8U)
#define PCFS_OBJECT                   (1UL << 9U)
#define CMU_OBJECT                    (1UL << 10U)
    #endif
#endif /* CLOCK_IP_DEV_ERROR_DETECT */

#if (defined(CLOCK_IP_DEV_ERROR_DETECT))
  #if (CLOCK_IP_DEV_ERROR_DETECT == STD_ON)
    #define CLOCK_DEV_ASSERT(x)      DevAssert(x)
  #else
    #define CLOCK_DEV_ASSERT(x)
  #endif
#else
    #define CLOCK_DEV_ASSERT(x)
#endif

/*! @brief Clock ip source type.
 */
typedef enum
{
    /* Generic error codes */
    UKNOWN_TYPE                                    = 0x00U,    /*!< Clock path from source to this clock name has at least one selector. */
    IRCOSC_TYPE                                    = 0x01U,    /*!< Source is an internal oscillator. */
    XOSC_TYPE                                      = 0x02U,    /*!< Source is an external oscillator. */
    PLL_TYPE                                       = 0x03U,    /*!< Source is a pll. */
    EXT_CLK_TYPE                                   = 0x04U,    /*!< Source is an external clock. */
    SERDES_TYPE                                    = 0x04U,    /*!< Source is a SERDES. */

} clock_name_source_type;

/*! @brief Clock pll status return codes.
 */
typedef enum
{
    STATUS_PLL_NOT_ENABLED                         = 0x00U,    /*!< Not enabled */
    STATUS_PLL_UNLOCKED                            = 0x01U,    /*!< Unlocked */
    STATUS_PLL_LOCKED                              = 0x02U,    /*!< Locked */

} clock_pll_status_t;

/*! @brief Clock dfs status return codes.
 */
typedef enum
{
    STATUS_DFS_NOT_ENABLED                         = 0x00U,    /*!< Not enabled */
    STATUS_DFS_UNLOCKED                            = 0x01U,    /*!< Unlocked */
    STATUS_DFS_LOCKED                              = 0x02U,    /*!< Locked */

} clock_dfs_status_t;

typedef void (*intOscSetCallback)(Clock_Ip_IrcoscConfigType const * config);
typedef void (*intOscDisableCallback)(Clock_Ip_NameType IrcoscName);
typedef void (*intOscEnableCallback)(Clock_Ip_IrcoscConfigType const * config);
typedef struct
{
    intOscSetCallback Set;
    intOscEnableCallback Enable;
    intOscDisableCallback Disable;

}intOscCallback;

typedef void (*extOscSetCallback)(Clock_Ip_XoscConfigType const * config);
typedef void (*extOscResetCallback)(Clock_Ip_XoscConfigType const * config);
typedef void (*extOscDisableCallback)(Clock_Ip_NameType ExtoscName);
typedef void (*extOscEnableCallback)(Clock_Ip_XoscConfigType const * config);

typedef struct
{
    extOscResetCallback Reset;
    extOscSetCallback Set;
    extOscSetCallback Complete;
    extOscDisableCallback Disable;
    extOscEnableCallback Enable;

}extOscCallback;


typedef void (*dividerSetCallback)(Clock_Ip_DividerConfigType const * config);
typedef struct
{
    dividerSetCallback Set;

}dividerCallback;

typedef void (*dividerConfigureCallback)(Clock_Ip_DividerTriggerConfigType const * config);
typedef void (*dividerTriggerUpdateCallback)(Clock_Ip_DividerTriggerConfigType const * config);
typedef struct
{
    dividerConfigureCallback Configure;
    dividerTriggerUpdateCallback TriggerUpdate;

}dividerTriggerCallback;


typedef void (*fracDivSetCallback)(Clock_Ip_FracDivConfigType const * config);
typedef void (*fracDivResetCallback)(Clock_Ip_FracDivConfigType const * config);
typedef clock_dfs_status_t (*fracDivCompleteCallback)(Clock_Ip_NameType DfsName);
typedef struct
{
    fracDivResetCallback Reset;
    fracDivSetCallback Set;
    fracDivCompleteCallback Complete;

}fracDivCallback;

typedef void (*pllSetCallback)(Clock_Ip_PllConfigType const * config);
typedef void (*pllResetCallback)(Clock_Ip_PllConfigType const * config);
typedef clock_pll_status_t (*pllCompleteCallback)(Clock_Ip_NameType PllName);
typedef void (*pllEnableCallback)(Clock_Ip_PllConfigType const * config);
typedef void (*pllDisableCallback)(Clock_Ip_NameType PllName);
typedef struct
{
    pllResetCallback Reset;
    pllSetCallback Set;
    pllCompleteCallback Complete;
    pllEnableCallback Enable;
    pllDisableCallback Disable;

}pllCallback;

typedef void (*selectorSetCallback)(Clock_Ip_SelectorConfigType const * config);
typedef void (*selectorResetCallback)(Clock_Ip_SelectorConfigType const * config);
typedef struct
{
    selectorResetCallback Reset;
    selectorSetCallback Set;

}selectorCallback;

typedef void (*gateSetCallback)(Clock_Ip_GateConfigType const * config);
typedef void (*gateUpdateCallback)(Clock_Ip_NameType clockName, boolean gate);
typedef struct
{
    gateSetCallback Set;
    gateUpdateCallback Update;

}gateCallback;

typedef void (*clockMonitorSetCallback)(Clock_Ip_CmuConfigType const * config);
typedef void (*clockMonitorResetCallback)(Clock_Ip_CmuConfigType const * config);
typedef void (*clockMonitorClearStatusCallback)(Clock_Ip_NameType name);
typedef void (*clockMonitorDisableCallback)(Clock_Ip_NameType name);
typedef Clock_Ip_CmuStatusType (*clockMonitorGetMonitorStatusCallback)(Clock_Ip_NameType name);
typedef void (*clockMonitorEnableCallback)(Clock_Ip_CmuConfigType const * config);
typedef struct
{
    clockMonitorResetCallback Reset;
    clockMonitorSetCallback Set;
    clockMonitorDisableCallback Disable;
    clockMonitorClearStatusCallback Clear;
    clockMonitorGetMonitorStatusCallback GetStatus;
    clockMonitorEnableCallback Enable;

}clockMonitorCallback;


typedef void (*pcfsSetCallback)(Clock_Ip_PcfsConfigType const * config);
typedef struct
{
    pcfsSetCallback Set;

}pcfsCallback;

#if (defined (CLOCK_IP_S32K3))
typedef uint32 (*consumerClockCallback)(void);
typedef void (*CalcFreqCallback)(void);
#endif

/* Clock start constant section data */
#define MCU_START_SEC_CONST_8
#include "Mcu_MemMap.h"

extern const uint8 xoscCallbackIndex[ALL_CALLBACKS_COUNT];
extern const uint8 dividerCallbackIndex[ALL_CALLBACKS_COUNT];
extern const uint8 dividertriggerCallbackIndex[ALL_CALLBACKS_COUNT];
extern const uint8 fractional_dividerCallbackIndex[ALL_CALLBACKS_COUNT];
extern const uint8 pllCallbackIndex[ALL_CALLBACKS_COUNT];
extern const uint8 selectorCallbackIndex[ALL_CALLBACKS_COUNT];
extern const uint8 ircoscCallbackIndex[ALL_CALLBACKS_COUNT];
extern const uint8 cmuCallbackIndex[ALL_CALLBACKS_COUNT];
extern const uint8 gateCallbackIndex[ALL_CALLBACKS_COUNT];
extern const uint8 pcfsCallbackIndex[ALL_CALLBACKS_COUNT];
extern const uint8 clockFeatures[CLOCK_NAMES_NO][CLOCK_FEATURES_NO];

/* Clock stop constant section data */
#define MCU_STOP_SEC_CONST_8
#include "Mcu_MemMap.h"



/* Clock start constant section data */
#define MCU_START_SEC_CONST_32
#include "Mcu_MemMap.h"

#if (defined(CLOCK_IP_DEV_ERROR_DETECT))
    #if (CLOCK_IP_DEV_ERROR_DETECT == STD_ON)
extern const uint32 clockNameTypes[CLOCK_NAMES_NO];
    #endif
#endif

/* Clock stop constant section data */
#define MCU_STOP_SEC_CONST_32
#include "Mcu_MemMap.h"




/* Clock start constant section data */
#define MCU_START_SEC_CONST_UNSPECIFIED

#include "Mcu_MemMap.h"

extern const extOscCallback extOscCallbacks[XOSC_CALLBACKS_COUNT];

extern const dividerCallback dividerCallbacks[DIVIDER_CALLBACKS_COUNT];

extern const dividerTriggerCallback dividerTriggerCallbacks[DIVIDERTRIGGER_CALLBACKS_COUNT];

extern const fracDivCallback fracDivCallbacks[FRACTIONAL_DIVIDER_CALLBACKS_COUNT];

extern const pllCallback pllCallbacks[PLL_CALLBACKS_COUNT];

#if (STD_OFF == CLOCK_IP_NO_PLL)
extern const Clock_Ip_NameType HwPllName[NUMBER_OF_HARDWARE_PLL];
#endif

extern const selectorCallback selectorCallbacks[SELECTOR_CALLBACKS_COUNT];

extern const intOscCallback intOscCallbacks[IRCOSC_CALLBACKS_COUNT];

extern const clockMonitorCallback cmuCallbacks[CMU_CALLBACKS_COUNT];

extern const gateCallback gateCallbacks[GATE_CALLBACKS_COUNT];

extern const pcfsCallback pcfsCallbacks[PCFS_CALLBACKS_COUNT];

extern const clock_name_source_type sourceType_clockName[CLOCK_PRODUCERS_NO + 1U];

/* Clock stop constant section data */
#define MCU_STOP_SEC_CONST_UNSPECIFIED

#include "Mcu_MemMap.h"

#define MCU_START_SEC_VAR_CLEARED_UNSPECIFIED

#include "Mcu_MemMap.h"

#if CMU_INSTANCES_ARRAY_SIZE > 0U
extern const Clock_Ip_ClockConfigType *clockConfig;
#endif

#define MCU_STOP_SEC_VAR_CLEARED_UNSPECIFIED

#include "Mcu_MemMap.h"

/* Clock start section code */
#define MCU_START_SEC_CODE

#include "Mcu_MemMap.h"


void ClockInitializeObjects(void);
void ClockPowerModeChangeNotification(power_modes_t powerMode, power_notification_t notification);
void ReportClockErrors(Clock_Ip_ClockNotificationType error, Clock_Ip_NameType clockName);
void SpecificPeripheralClockInitialization(Clock_IP_SpecificPeriphConfigType const * config);
void SpecificPlatformInitClock(Clock_Ip_ClockConfigType const * config);
#if (defined(CMU_FC_FCE_REF_CNT_LFREF_HFREF) || defined(CGM_X_PCFS_SDUR_DIVC_DIVE_DIVS) || defined(FEATURE_CLOCK_IP_HAS_RAM_WAIT_STATES))
uint32 GetConfiguredFrequencyValue(Clock_Ip_NameType clockName);
#endif
#if (defined(CLOCK_IP_GET_FREQUENCY_API) && (CLOCK_IP_GET_FREQUENCY_API == STD_ON))
uint32 GetFreq(Clock_Ip_NameType clockName);
void SetExternalOscillatorFrequency(Clock_Ip_NameType extOscName, uint32 frequency);
void SetExternalSignalFrequency(Clock_Ip_NameType signalName, uint32 frequency);
#endif
#if CMU_INSTANCES_ARRAY_SIZE > 0U
uint32 Mcu_CMU_GetInterruptStatus(uint8 u8IndexCmu);
void Mcu_CMU_ClockFailInt(void);
#endif
#ifdef FEATURE_CLOCK_IP_HAS_RAM_WAIT_STATES
    void SetRamWaitStates(void);
#endif
#ifdef FEATURE_CLOCK_IP_HAS_FLASH_WAIT_STATES
    void SetFlashWaitStates(void);
#endif
/*!
 * @brief Initializes a starting reference point for timeout
 *
 * @param[out] startTimeOut    The starting time from which elapsed time is measured
 * @param[out] elapsedTimeOut  The elapsed time to be passed to ClockTimeoutExpired
 * @param[out] timeoutTicksOut The timeout value (in ticks) to be passed to ClockTimeoutExpired
 * @param[in]  timeoutUs       The timeout value (in microseconds)
 */
void ClockStartTimeout(uint32 *startTimeOut,
                       uint32 *elapsedTimeOut,
                       uint32 *timeoutTicksOut,
                       uint32 timeoutUs);
/*!
 * @brief Checks for timeout condition.
 *
 * @param[in,out] startTimeInOut    The starting time from which elapsed time is measured
 * @param[in,out] elapsedTimeInOut  The accumulated elapsed time from the starting time reference
 * @param[in]     TimeoutTicks      The timeout limit (in ticks)
 */
boolean ClockTimeoutExpired(uint32 *startTimeInOut,
                            uint32 *elapsedTimeInOut,
                            uint32 TimeoutTicks);

/* Clock stop section code */
#define MCU_STOP_SEC_CODE

#include "Mcu_MemMap.h"

#if defined(__cplusplus)
}
#endif /* __cplusplus*/

/*! @}*/

#endif /* CLOCK_IP_PRIVATE_H */
/*******************************************************************************
 * EOF
 ******************************************************************************/
