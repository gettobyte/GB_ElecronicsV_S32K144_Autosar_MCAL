/*==================================================================================================
* Project              : RTD AUTOSAR 4.4
* Platform             : CORTEXM
* Peripheral           : Ftm Flexio
* Dependencies         : none
*
* Autosar Version      : 4.4.0
* Autosar Revision     : ASR_REL_4_4_REV_0000
* Autosar Conf.Variant :
* SW Version           : 1.0.0
* Build Version        : S32K1_RTD_1_0_0_D2108_ASR_REL_4_4_REV_0000_20210810
*
* (c) Copyright 2020-2021 NXP Semiconductors
* All Rights Reserved.
*
* NXP Confidential. This software is owned or controlled by NXP and may only be
* used strictly in accordance with the applicable license terms. By expressly
* accepting such terms or by downloading, installing, activating and/or otherwise
* using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms. If you do not agree to be
* bound by the applicable license terms, then you may not retain, install,
* activate or otherwise use the software.
==================================================================================================*/

#ifndef FTM_PWM_IP_TYPES_H
#define FTM_PWM_IP_TYPES_H

/**
*   @file       Ftm_Pwm_Ip_Types.h
*
*   @addtogroup ftm_pwm_ip Ftm Pwm IPL
*   @{
*/

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                          INCLUDE FILES
*  1) system and project includes
*  2) needed interfaces from external units
*  3) internal and external interfaces from this unit
==================================================================================================*/

#include "StandardTypes.h"
#include "Ftm_Pwm_Ip_CfgDefines.h"

/*==================================================================================================
*                                SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define FTM_PWM_IP_TYPES_VENDOR_ID                             43
#define FTM_PWM_IP_TYPES_MODULE_ID                             121
#define FTM_PWM_IP_TYPES_AR_RELEASE_MAJOR_VERSION              4
#define FTM_PWM_IP_TYPES_AR_RELEASE_MINOR_VERSION              4
#define FTM_PWM_IP_TYPES_AR_RELEASE_REVISION_VERSION           0
#define FTM_PWM_IP_TYPES_SW_MAJOR_VERSION                      1
#define FTM_PWM_IP_TYPES_SW_MINOR_VERSION                      0
#define FTM_PWM_IP_TYPES_SW_PATCH_VERSION                      0

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/
/* Check if header file and StandardTypes.h are of the same AUTOSAR version */
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    #if ((FTM_PWM_IP_TYPES_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION) || \
         (FTM_PWM_IP_TYPES_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION))
        #error "AUTOSAR version numbers of Ftm_Pwm_Ip_Types.h and StandardTypes.h are different."
    #endif
#endif

/* Check if header file and Ftm_Pwm_Ip_CfgDefines.h header file are of the same vendor */
#if (FTM_PWM_IP_TYPES_VENDOR_ID != FTM_PWM_IP_CFGDEFINES_VENDOR_ID)
    #error "Vendor IDs of Ftm_Pwm_Ip_Types.h and Ftm_Pwm_Ip_CfgDefines.h are different."
#endif

/* Check if header file and Ftm_Pwm_Ip_CfgDefines.h header file are of the same AUTOSAR version */
#if ((FTM_PWM_IP_TYPES_AR_RELEASE_MAJOR_VERSION    != FTM_PWM_IP_CFGDEFINES_AR_RELEASE_MAJOR_VERSION) || \
     (FTM_PWM_IP_TYPES_AR_RELEASE_MINOR_VERSION    != FTM_PWM_IP_CFGDEFINES_AR_RELEASE_MINOR_VERSION) || \
     (FTM_PWM_IP_TYPES_AR_RELEASE_REVISION_VERSION != FTM_PWM_IP_CFGDEFINES_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR version numbers of Ftm_Pwm_Ip_Types.h and Ftm_Pwm_Ip_CfgDefines.h are different."
#endif

/* Check if header file and Ftm_Pwm_Ip_CfgDefines.h header file are of the same software version */
#if ((FTM_PWM_IP_TYPES_SW_MAJOR_VERSION != FTM_PWM_IP_CFGDEFINES_SW_MAJOR_VERSION) || \
     (FTM_PWM_IP_TYPES_SW_MINOR_VERSION != FTM_PWM_IP_CFGDEFINES_SW_MINOR_VERSION) || \
     (FTM_PWM_IP_TYPES_SW_PATCH_VERSION != FTM_PWM_IP_CFGDEFINES_SW_PATCH_VERSION))
    #error "Software version numbers of Ftm_Pwm_Ip_Types.h and Ftm_Pwm_Ip_CfgDefines.h are different."
#endif

/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                  GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                        DEFINES AND MACROS
==================================================================================================*/

typedef uint8 Ftm_Pwm_Ip_EdgeInterruptType;

 /*! @brief FlexTimer edge interrupt */
#define FTM_PWM_NO_EDGE                ((Ftm_Pwm_Ip_EdgeInterruptType)0U)
#define FTM_PWM_CHF_IRQ_EDGE           ((Ftm_Pwm_Ip_EdgeInterruptType)1U)
#define FTM_PWM_TOF_IRQ_EDGE           ((Ftm_Pwm_Ip_EdgeInterruptType)2U)
#define FTM_PWM_IRQ_NO_EDGE_NOTIF      ((Ftm_Pwm_Ip_EdgeInterruptType)4U)
#define FTM_PWM_TOF_FAULT_DETECT       ((Ftm_Pwm_Ip_EdgeInterruptType)8U)

/*! @brief Status return codes */
typedef enum
{
    /* Generic error codes */
    FTM_PWM_STATUS_SUCCESS      = E_OK,     /*!< Generic operation success status */
    FTM_PWM_STATUS_ERROR        = E_NOT_OK, /*!< Generic operation failure status */
    FTM_PWM_STATUS_BUSY         = 0x002U,   /*!< Generic operation busy status */
    FTM_PWM_STATUS_TIMEOUT      = 0x003U,   /*!< Generic operation timeout status */
    FTM_PWM_STATUS_UNSUPPORTED  = 0x004U,   /*!< Generic operation unsupported status */
} Ftm_Pwm_Ip_StatusType;

/*! @brief FlexTimer operation mode */
typedef enum
{
    FTM_PWM_MODE_EDGE_ALIGNED_HIGH      = 0x0AU,    /*!< Edge aligned PWM High-true pulses (clear on match) */
    FTM_PWM_MODE_EDGE_ALIGNED_LOW       = 0x09U,    /*!< Edge aligned PWM Low-true pulses (set on match) */
    FTM_PWM_MODE_CENTER_ALIGNED_HIGH    = 0x12U,    /*!< Center aligned PWM High-true pulses (clear on match) */
    FTM_PWM_MODE_CENTER_ALIGNED_LOW     = 0x11U,    /*!< Center aligned PWM Low-true pulses (set on match) */
    FTM_PWM_MODE_COMBINE_HIGH           = 0x22U,    /*!< Combined channels PWM High-true pulses (set on channel (n) match, and clear on channel (n+1) match) */
    FTM_PWM_MODE_COMBINE_LOW            = 0x21U,    /*!< Combined channels PWM Low-true pulses (clear on channel (n) match, and set on channel (n+1) match) */
#if (defined(FTM_PWM_HAS_MODIFIED_COMBINE_MODE) && (FTM_PWM_HAS_MODIFIED_COMBINE_MODE == STD_ON))
    FTM_PWM_MODE_MODIFIED_COMBINE_HIGH  = 0x62U,    /*!< Modified combined channel PWM High-true pulses (set on channel (n) match, and clear on channel (n+1) match) */
    FTM_PWM_MODE_MODIFIED_COMBINE_LOW   = 0x61U,    /*!< Modified combined channel PWM Low-true pulses (clear on channel (n) match, and set on channel (n+1) match) */
#endif
    FTM_PMW_MODE_NODEFINED              = 0xFFU,    /* Non defined Mode*/
} Ftm_Pwm_Ip_ChannelModeType;


/*! @brief FlexTimer channel state */
typedef enum
{
    FTM_PWM_CHANNEL_UNINIT        = 0x00U,    /*!< The state's channel before initialization */
    FTM_PWM_CHANNEL_RUNNING       = 0x01U,    /*!< The state's channel is running */
    FTM_PWM_CHANNEL_IDLE          = 0x02U,    /*!< The state's channel is idle */
    FTM_PWM_CHANNEL_OUTPUT_FORCED = 0x03U     /*!< The state's channel in force output channel mode*/
} Ftm_Pwm_Ip_ChannelStateType;

/**
* @brief        Prescaler type
* @details      This enumeration specifies the possible types of prescalers used to configure base-clock timers
*/
typedef enum
{
    /** @brief  Selected value is the default/primary prescaler */
    FTM_PWM_PRIMARY_PRESCALER     = 0x00U,
    /** @brief  Selected value is the alternative configured prescaler */
    FTM_PWM_ALTERNATIVE_PRESCALER = 0X01U
} Ftm_Pwm_Ip_PrescalerType;


/**
* @brief        Power state type
* @details      Power state currently active or set as target power state.
*/
typedef enum
{
    /** @brief  PWM full power mode */
    FTM_PWM_FULL_POWER     = 0x00U,
    /** @brief  PWM low power mode */
    FTM_PWM_LOW_POWER      = 0x01U,
    /** @brief  PWM no define power mode */
    FTM_PWM_NODEFINE_POWER = 0x02U
} Ftm_Pwm_Ip_PowerStateType;



/**
* @brief        Edge notification type
* @details      This enumeration defines the type of edge transition that can generate a notification
*/
typedef enum
{
    /** @brief  A notification will be generated on the rising edge */
    FTM_PWM_RISING_EDGE  = 0X01U,
    /** @brief  A notification will be generated on the falling edge */
    FTM_PWM_FALLING_EDGE = 0X02U,
    /** @brief  A notification will be generated on any state transition */
    FTM_PWM_BOTH_EDGES   = 0X03U
} Ftm_Ftm_Ip_EdgeNotifType;


/*! @brief FlexTimer operation mode */
typedef enum
{
    FTM_PWM_EDGE_ALIGNED        = 0x00U,    /*!< The FTM Counter is in UP Counting mode */
    FTM_PWM_CENTER_ALIGNED      = 0x01U     /*!< The FTM Counter is in UP-DOWN Counting mode */
} Ftm_Pwm_Ip_CounterModeType;

/*! @brief FlexTimer clock source selection */
typedef enum
{
    FTM_PWM_CLOCK_SOURCE_NONE           = 0x00U,    /*!< None use clock for FTM  */
    FTM_PWM_CLOCK_SOURCE_SYSTEMCLK      = 0x01U,    /*!< System clock            */
#if (defined(FTM_PWM_HAS_FIXED_CLOCK_SOURCE) && (FTM_PWM_HAS_FIXED_CLOCK_SOURCE== STD_ON))
    FTM_PWM_CLOCK_SOURCE_FIXEDCLK       = 0x02U,    /*!< Fixed clock             */
#endif
#if (defined(FTM_PWM_HAS_EXTERNAL_CLOCK) && (FTM_PWM_HAS_EXTERNAL_CLOCK== STD_ON))
    FTM_PWM_CLOCK_SOURCE_EXTERNALCLK    = 0x03U     /*!< External clock          */
#endif
} Ftm_Pwm_Ip_ClkSourceType;

/*! @brief The polarity of the channel output is configured in PWM signal */
typedef enum
{
    FTM_PWM_POLARITY_LOW  = 0x01U,  /*!< The channel polarity is active LOW */
    FTM_PWM_POLARITY_HIGH = 0x00U   /*!< The channel polarity is active HIGH */
} Ftm_Pwm_Ip_PolarityType;

/*! @brief The initial state of the channel output is configured in PWM signal */
typedef enum
{
    FTM_PWM_OUTPUT_STATE_LOW  = 0x00U,  /*!< The channel output is LOW */
    FTM_PWM_OUTPUT_STATE_HIGH = 0x01U   /*!< The channel output is HIGH */
} Ftm_Pwm_Ip_OutputStateType;

/*! @brief FlexTimer pre-scaler factor selection for the clock source */
typedef enum
{
    FTM_PWM_CLOCK_DIV_1    = 0x00U,    /*!< Divide by 1   */
    FTM_PWM_CLOCK_DIV_2    = 0x01U,    /*!< Divide by 2   */
    FTM_PWM_CLOCK_DIV_4    = 0x02U,    /*!< Divide by 4   */
    FTM_PWM_CLOCK_DIV_8    = 0x03U,    /*!< Divide by 8   */
    FTM_PWM_CLOCK_DIV_16   = 0x04U,    /*!< Divide by 16  */
    FTM_PWM_CLOCK_DIV_32   = 0x05U,    /*!< Divide by 32  */
    FTM_PWM_CLOCK_DIV_64   = 0x06U,    /*!< Divide by 64  */
    FTM_PWM_CLOCK_DIV_128  = 0x07U     /*!< Divide by 128 */
} Ftm_Pwm_Ip_ClkPrescalerType;

/*! @brief FTM sync source */
typedef enum
{
    FTM_PWM_SYNC_DISABLED   = 0x00U,    /*!< Syncronization for the FTM register is disabled */
    FTM_PWM_SYNC_ON_CLK     = 0x02U,    /*!< Syncronization for the FTM register is done on each FTM Clock rising edge */
    FTM_PWM_SYNC_ON_TRIGGER = 0x03U     /*!< Syncronization for the FTM register is done on each FTM Sync Trigger */
} Ftm_Pwm_Ip_SyncType;

/*! @brief FTM sync mode */
typedef enum
{
    FTM_PWM_SYNC_SWTRIGGER  = 0x00U,    /*!< Syncronization trigger for FTM is generated by software */
    FTM_PWM_SYNC_HWTRIGGER  = 0x01U     /*!< Syncronization trigger for FTM is generated by hardware */
} Ftm_Pwm_Ip_SyncModeType;

/*! @brief FlexTimer pre-scaler factor for the dead-time insertion */
typedef enum
{
    FTM_PWM_DEADTIME_DIV_1  = 0x01U, /*!< Divide by 1   */
    FTM_PWM_DEADTIME_DIV_4  = 0x02U, /*!< Divide by 4   */
    FTM_PWM_DEADTIME_DIV_16 = 0x03U  /*!< Divide by 16  */
} Ftm_Pwm_Ip_DeadtimePrescalerType;

/*! @brief Options for the FlexTimer behavior in BDM Mode */
typedef enum
{
    FTM_PWM_BDM_MODE_00 = 0x00U,    /*!< FTM counter stopped, CH(n)F bit can be set, FTM channels
                                 *   in functional mode, writes to MOD,CNTIN and C(n)V registers bypass
                                 *   the register buffers */
    FTM_PWM_BDM_MODE_01 = 0x01U,    /*!< FTM counter stopped, CH(n)F bit is not set, FTM channels
                                 *   outputs are forced to their safe value , writes to MOD,CNTIN and
                                 *   C(n)V registers bypass the register buffers */
    FTM_PWM_BDM_MODE_10 = 0x02U,    /*!< FTM counter stopped, CH(n)F bit is not set, FTM channels
                                *    outputs are frozen when chip enters in BDM mode, writes to MOD,
                                *    CNTIN and C(n)V registers bypass the register buffers */
    FTM_PWM_BDM_MODE_11 = 0x03U     /*!< FTM counter in functional mode, CH(n)F bit can be set,
                                 *   FTM channels in functional mode, writes to MOD,CNTIN and C(n)V
                                 *   registers is in fully functional mode */
} Ftm_Pwm_Ip_DebugModeType;

/*! @brief FlexTimer PWM initialization trigger generation mode */
typedef enum
{
    FTM_PWM_INIT_TRIGG_RELOAD_POINT     = 0x00U,  /*!< Initialization trigger is generated when FTM counter reaches a reload point */
    FTM_PWM_INIT_TRIGG_CNT_UPDATE       = 0x01U   /*!< Initialization trigger is generated when FTM counter is updated */
} Ftm_Pwm_Ip_InitTriggModeType;

/*! @brief FlexTimer PWM channel (n+1) polarity for combine mode */
typedef enum
{
    FTM_PWM_MAIN_INVERTED       = 0x00U,  /*!< The channel (n+1) output is the inverse of the channel (n) output  */
    FTM_PWM_MAIN_DUPLICATED     = 0x01U   /*!< The channel (n+1) output is the same as the channel (n) output */
} Ftm_Pwm_Ip_PairChPolarityType;

/*! @brief FlexTimer PWM Pair Edge Dithering for combine/mcombine modes */
typedef enum
{
    FTM_PWM_DITHER_LEADING_EDGE         = 0x00U,  /*!< The channel (n) dithering is used */
    FTM_PWM_DITHER_TRAILING_EDGE        = 0x01U   /*!< The channel (n+1) dithering is used */
} Ftm_Pwm_Ip_PairDitherEdgeType;

#if (defined(FTM_PWM_HAS_FAULT) && (FTM_PWM_HAS_FAULT == STD_ON))
/*! @brief Defines the FTM fault control mode */
typedef enum
{
    FTM_PWM_FAULT_DISABLED                    = 0x00U,  /*!< Fault control disabled for all channels. */
    FTM_PWM_FAULT_EVEN_CHANNELS_MANUAL_CLEAR  = 0x01U,   /*!< Fault control enabled for even channels (0, 2, 4..) with manual fault clearing. */
    FTM_PWM_FAULT_ALL_CHANNELS_MANUAL_CLEAR   = 0x02U,   /*!< Fault control enabled for all channels with manual fault clearing. */
    FTM_PWM_FAULT_ALL_CHANNELS_AUTO_CLEAR     = 0x03U   /*!< Fault control enabled for all channels with automatic fault clearing. */
} Ftm_Pwm_Ip_FaultControlModeType;

/*! @brief FlexTimer PWM Fault output state */
typedef enum
{
    FTM_PWM_OUT_SAFE_VALUE         = 0x00U,  /*!< FTM outputs will be placed into safe values */
    FTM_PWM_OUT_TRI_STATE          = 0x01U   /*!< FTM outputs will be tri-stated  */
} Ftm_Pwm_Ip_FaultOutputStateType;
#endif

#if (defined (FTM_PWM_IP_NOTIFICATION_SUPPORT) && (FTM_PWM_IP_NOTIFICATION_SUPPORT == STD_ON))
/**
 *
 * @brief       Notification function callback type.
 */
typedef void (*Ftm_Pwm_Ip_CallbackType)(uint8 cbParam);

/**
 *
 * @brief       Structure for notification
 * @details     The structure used to notification
 */
typedef struct {
    Ftm_Pwm_Ip_CallbackType functionCallback;
    uint8 cbParam;
} Ftm_Pwm_Ip_CallbackCfgType;
#else
/* Callback for all ftm supported IRQs */
typedef void (*Ftm_Pwm_Ip_CallbackType)(void *userData);

typedef struct {
    Ftm_Pwm_Ip_CallbackType functionCallback;
    void * cbParam;
} Ftm_Pwm_Ip_CallbackCfgType;
#endif

/**
*
* @brief     Ftm configuration parameters structure
* @details   FlexTimer Sync and Load parameters
*/
typedef struct
{
    Ftm_Pwm_Ip_SyncModeType syncMode;       /*!< Configure FTM Sync to use Software or Hardware trigger modes */
    boolean hwSync0;                        /*!< Enable/disable hardware 0 sync */
    boolean hwSync1;                        /*!< Enable/disable hardware 1 sync */
    boolean hwSync2;                        /*!< Enable/disable hardware 2 sync */
    boolean hwTriggerAutoClear;             /*!< Enable/disable auto clear of triggers in hardware trigger mode */
    boolean maxLoadPoint;                   /*!< Enable/disable maximum loading point */
    boolean minLoadPoint;                   /*!< Enable/disable minimum loading point */
#if (defined(FTM_PWM_HAS_HALF_CYCLE_RELOAD) && (FTM_PWM_HAS_HALF_CYCLE_RELOAD == STD_ON))
    boolean halfCycleLoadPoint;             /*!< Enable/disable half cycle loading point */
#endif
    uint8 loadPointFreq;                    /*!< Value of how many reload points must happen before reloading. */
    Ftm_Pwm_Ip_SyncType inverterSync;       /*!< Configures INVCTRL sync */
    Ftm_Pwm_Ip_SyncType outRegSync;         /*!< Configures SWOCTRL sync */
    Ftm_Pwm_Ip_SyncType outMaskSync;        /*!< Configures OUTMASK sync */
    Ftm_Pwm_Ip_SyncType initCounterSync;    /*!< Configures CNTIN sync */
    Ftm_Pwm_Ip_SyncType counterSync;        /*!< Configures FTM Counter sync */
} Ftm_Pwm_Ip_SyncCfgType;

/**
*
* @brief     Ftm configuration parameters structure
* @details   Ftm IP specific instance configuration structure type
*/
typedef struct
{
    Ftm_Pwm_Ip_ClkSourceType clkSrc;                  /*!< Clock source for Ftm instances */
    Ftm_Pwm_Ip_ClkPrescalerType clkPs;                /*!< Pre-scaler for Ftm instances */
    Ftm_Pwm_Ip_ClkPrescalerType alternateClkPs;       /*!< Alternative pre-scaler for Ftm instances */
    Ftm_Pwm_Ip_CounterModeType cntMode;               /*!< Mode of the counter */
    boolean overflowIrqEn;                            /*!< Selected the overflow interrupt */
    Ftm_Pwm_Ip_CallbackCfgType overflowCb;            /*!< overflow callback */
#if (defined(FTM_PWM_HAS_RELOAD_POINT) && (FTM_PWM_HAS_RELOAD_POINT == STD_ON))
    boolean reloadIrqEn;                              /*!< Selected the reload interrupt */
    Ftm_Pwm_Ip_CallbackCfgType reloadCb;              /*!< Reload callback */
#endif
    Ftm_Pwm_Ip_DebugModeType debugMode;               /*!< Debug Mode */
    boolean writeProtection;                          /*!< Selected write protection */
    boolean initTriggerEn;                            /*!< Selected trigger */
    Ftm_Pwm_Ip_InitTriggModeType initTrigMode;        /*!< Chose generation of initialization trigger mode */
    uint16 pwmPeriod;                                 /*!< Period of Ftm instances */
#if (defined(FTM_PWM_HAS_DITHERING) && (FTM_PWM_HAS_DITHERING == STD_ON))
    uint8 pwmPeriodDither;                            /*!< Period Dither */
#endif
    uint16 deadTimeValue;                             /*!< Deadtime Value */
    Ftm_Pwm_Ip_DeadtimePrescalerType deadTimePs;      /*!< Deadtime pre-scaler Value */
#if (defined(FTM_PWM_HAS_FAULT) && (FTM_PWM_HAS_FAULT == STD_ON))
    Ftm_Pwm_Ip_FaultControlModeType  faultCtrMode;    /*!< Defines the FTM fault control mode */
    Ftm_Pwm_Ip_FaultOutputStateType  faultOutState;   /*!< Fault output state */
    uint8 faultInFilter;                              /*!< Fault Input Filter Value */
    boolean faultIrqEn;                               /*!< Fault interrupt enable */
#endif
    const Ftm_Pwm_Ip_SyncCfgType* syncCfg;            /*!< Pointer to the configured channels for the FTM sync */
} Ftm_Pwm_Ip_InstanceCfgType;

/**
*
* @brief     Ftm configuration parameters structure
* @details   FlexTimer Channel Pair configuration parameters
*/
typedef struct
{
    /** @brief  FTM pair id channel */
    uint8 pairId;
    /** @brief  Selected dead-time for pair channel */
    boolean deadtimeEn;
    /** @brief  Selected dead-time for pair channel */
    boolean complementaryModeEn;
    /** @brief  Polarity of pair channel */
    Ftm_Pwm_Ip_PairChPolarityType pairChPolarity;
    /** @brief  Selected external trigger of pair channel */
    boolean pairExtTrigEn;
    /** @brief  Selected sync of pair channel */
    boolean pairSyncEn;
    /** @brief  the phase Shift Value */
    uint16 phaseShiftValue;
#if (defined(FTM_PWM_HAS_DITHERING) && (FTM_PWM_HAS_DITHERING == STD_ON))
    Ftm_Pwm_Ip_PairDitherEdgeType ditherEdge;
#endif
} Ftm_Pwm_Ip_PairCfgType;

/**
*
* @brief     Ftm configuration parameters structure
* @details   FlexTimer Channel configuration parameters
*/
typedef struct
{
    /** @brief  FTM channel ID */
    uint8 channelId;
    /** @brief  Mode of Ftm channel */
    Ftm_Pwm_Ip_ChannelModeType channelMode;
    /** @brief  Selected for interrupt */
    boolean chIrqEn;
    /** @brief Callback for the ftm channels */
    Ftm_Pwm_Ip_CallbackCfgType channelCb;
    /** @brief  Enable/Disable the output of the PWM signal on the channel pin.*/
    boolean chOutputEn;
    /** @brief  Enable/Disable the software control for this channels output.*/
    boolean swControlEn;
    /** @brief  Channel Software Output Control Value */
    boolean swControlVal;
    /** @brief  Selected for external trigger */
    boolean extTrigEn;
    /** @brief  Selected for external trigger */
    boolean chMatchLoadEn;
    /** @brief  Duty cycle value */
    uint16 dutyCycle;
#if (defined(FTM_PWM_HAS_DITHERING) && (FTM_PWM_HAS_DITHERING == STD_ON))
    /** @brief  Duty cycle value in Dither */
    uint8 dutyCycleDither;
#endif
    /** @brief  Output state of Ftm channel */
    Ftm_Pwm_Ip_OutputStateType initOut;
    /** @brief  Polarity of Ftm channel */
    Ftm_Pwm_Ip_PolarityType polarity;
    /** @brief  The configuration of pair channel */
    const Ftm_Pwm_Ip_PairCfgType* pairCfg;
} Ftm_Pwm_Ip_ChannelConfigType;

#if (defined(FTM_PWM_HAS_FAULT) && (FTM_PWM_HAS_FAULT == STD_ON))
/**
* @brief      Fault channel notification typedef
*/
typedef void (*Ftm_Pwm_Ip_FaultCallbackType)(void);

/**
*
* @brief     Ftm configuration parameters structure
* @details   FlexTimer fault configuration parameters
*/
typedef struct
{
    /** @brief  FTM fault ID is actived */
    uint8 faultId;
    /** @brief  Defines the polarity of the fault input. */
    Ftm_Pwm_Ip_PolarityType faultPol;
    /** Fault Input Filter Enable */
    boolean  faultFilEn;
    /** @brief Pointer to fault notification function */
    Ftm_Pwm_Ip_FaultCallbackType faultCb;
} Ftm_Pwm_Ip_FaultChCfgType;
#endif

/**
*
* @brief     Ftm configuration parameters structure
* @details   FlexTimer User Configuration structure
*/
typedef struct
{
    /** @brief  Pointer to the configured channels for the FTM instance */
    const Ftm_Pwm_Ip_InstanceCfgType* instanceCfg;
    /** @brief  Pointer to the configured channels array for the FTM channel */
    const Ftm_Pwm_Ip_ChannelConfigType* const * configuredChArray;
    /** @brief  Number of the configured channels for the FTM channel */
    uint8 noOfConfiguredCh;
#if (defined(FTM_PWM_HAS_FAULT) && (FTM_PWM_HAS_FAULT == STD_ON))
    /** @brief  Pointer to the configured channels array for the FTM channel */
    const Ftm_Pwm_Ip_FaultChCfgType* const * configuredFaultArray;
    /** @brief  Number of the configured channels for fault */
    uint8 noOfFaultCfg;
#endif
} Ftm_Pwm_Ip_UserCfgType;

#ifdef __cplusplus
}
#endif

/** @} */

#endif /* FTM_PWM_IP_TYPES_H */
