/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : Ftm Flexio
*   Dependencies         : none
*
*   Autosar Version      : 4.4.0
*   Autosar Revision     : ASR_REL_4_4_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 1.0.1
*   Build Version        : S32K1_RTD_1_0_1_D2202_ASR_REL_4_4_REV_0000_20220224
*
*   (c) Copyright 2020-2022 NXP Semiconductors
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
*   @file       Ftm_Pwm_Ip_PBcfg.c
*
*   @addtogroup ftm_pwm_ip Ftm Pwm IPL
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
#include "Ftm_Pwm_Ip_Cfg.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define FTM_PWM_IP_BOARD_InitPeripherals_PB_CFG_VENDOR_ID_C                       43
#define FTM_PWM_IP_BOARD_InitPeripherals_PB_CFG_AR_RELEASE_MAJOR_VERSION_C        4
#define FTM_PWM_IP_BOARD_InitPeripherals_PB_CFG_AR_RELEASE_MINOR_VERSION_C        4
#define FTM_PWM_IP_BOARD_InitPeripherals_PB_CFG_AR_RELEASE_REVISION_VERSION_C     0
#define FTM_PWM_IP_BOARD_InitPeripherals_PB_CFG_SW_MAJOR_VERSION_C                1
#define FTM_PWM_IP_BOARD_InitPeripherals_PB_CFG_SW_MINOR_VERSION_C                0
#define FTM_PWM_IP_BOARD_InitPeripherals_PB_CFG_SW_PATCH_VERSION_C                1

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/* Check if source file and Ftm_Pwm_Ip_Cfg.h header file are of the same vendor */
#if (FTM_PWM_IP_BOARD_InitPeripherals_PB_CFG_VENDOR_ID_C != FTM_PWM_IP_CFG_VENDOR_ID)
    #error "Vendor IDs of Ftm_Pwm_Ip_BOARD_InitPeripherals_PBcfg.c and Ftm_Pwm_Ip_Cfg.h are different."
#endif

/* Check if source file and Ftm_Pwm_Ip_Cfg.h header file are of the same AUTOSAR version */
#if ((FTM_PWM_IP_BOARD_InitPeripherals_PB_CFG_AR_RELEASE_MAJOR_VERSION_C    != FTM_PWM_IP_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (FTM_PWM_IP_BOARD_InitPeripherals_PB_CFG_AR_RELEASE_MINOR_VERSION_C    != FTM_PWM_IP_CFG_AR_RELEASE_MINOR_VERSION) || \
     (FTM_PWM_IP_BOARD_InitPeripherals_PB_CFG_AR_RELEASE_REVISION_VERSION_C != FTM_PWM_IP_CFG_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR version numbers of Ftm_Pwm_Ip_BOARD_InitPeripherals_PBcfg.c and Ftm_Pwm_Ip_Cfg.h are different."
#endif

/* Check if source file and Ftm_Pwm_Ip_Cfg.h header file are of the same software version */
#if ((FTM_PWM_IP_BOARD_InitPeripherals_PB_CFG_SW_MAJOR_VERSION_C != FTM_PWM_IP_CFG_SW_MAJOR_VERSION) || \
     (FTM_PWM_IP_BOARD_InitPeripherals_PB_CFG_SW_MINOR_VERSION_C != FTM_PWM_IP_CFG_SW_MINOR_VERSION) || \
     (FTM_PWM_IP_BOARD_InitPeripherals_PB_CFG_SW_PATCH_VERSION_C != FTM_PWM_IP_CFG_SW_PATCH_VERSION))
    #error "Software version numbers of Ftm_Pwm_Ip_BOARD_InitPeripherals_PBcfg.c and Ftm_Pwm_Ip_Cfg.h are different."
#endif


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
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define PWM_START_SEC_CODE
#include "Pwm_MemMap.h"
extern void Pwm_Notification(uint8 Channel);
#define PWM_STOP_SEC_CODE
#include "Pwm_MemMap.h"


/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/
#ifndef FTM_PWM_IP_PRECOMPILE_SUPPORT
#define PWM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Pwm_MemMap.h"


/*================================================================================================*/

/* Ftm instance 0 synchronization initialization configuration */
const Ftm_Pwm_Ip_SyncCfgType Ftm_Pwm_Ip_BOARD_InitPeripherals_SyncCfg0 =
{
    /* SyncMode */              FTM_PWM_IP_SYNC_SWTRIGGER,
    /* HwSync0 */               (boolean)FALSE,
    /* HwSync1 */               (boolean)FALSE,
    /* HwSync2 */               (boolean)FALSE,
    /* HwTriggerAutoClear */    (boolean)FALSE,
    /* MaxLoadPoint */          (boolean)FALSE,
    /* MinLoadPoint */          (boolean)FALSE,
#if (defined(FTM_PWM_IP_HAS_HALF_CYCLE_RELOAD) && (FTM_PWM_IP_HAS_HALF_CYCLE_RELOAD == STD_ON))
    /* HalfCycleLoadPoint */    (boolean)FALSE,
#endif
    /* LoadPointFreq */         0U,
    /* InverterSync */          FTM_PWM_IP_SYNC_DISABLED,
    /* OutRegSync */            FTM_PWM_IP_SYNC_DISABLED,
    /* OutMaskSync */           FTM_PWM_IP_SYNC_DISABLED,
    /* InitCounterSync */       FTM_PWM_IP_SYNC_ON_TRIGGER,
    /* CounterSync */           FTM_PWM_IP_SYNC_ON_TRIGGER
};


/* Ftm instance 0 initialization configuration */
const Ftm_Pwm_Ip_InstanceCfgType Ftm_Pwm_Ip_BOARD_InitPeripherals_InstCfg0 =
{
    /* ClkSrc */                FTM_PWM_IP_CLOCK_SOURCE_SYSTEMCLK,
    /* ClkPs */                 FTM_PWM_IP_CLOCK_DIV_1,
    /* AlternateclkPs */        FTM_PWM_IP_CLOCK_DIV_1,
    /* CntMode */               FTM_PWM_IP_EDGE_ALIGNED,
    /* OverflowIrqEn */         (boolean)TRUE,
    /* OverflowCb */            {
        /* FunctionCallback */      &Pwm_Notification,
        /* CbParam */               0U
                                },
#if (defined(FTM_PWM_IP_HAS_RELOAD_POINT) && (FTM_PWM_IP_HAS_RELOAD_POINT == STD_ON))
    /* ReloadIrqEn */           (boolean)TRUE,
    /* ReloadCb */              {
        /* FunctionCallback */      &Pwm_Notification,
        /* CbParam */               0U
                                },
#endif
    /* DebugMode */             FTM_PWM_IP_BDM_MODE_11,
    /* WriteProtection */       (boolean)FALSE,
    /* InitTriggerEn */         (boolean)FALSE,
    /* InitTrigMode */          FTM_PWM_IP_INIT_TRIGG_RELOAD_POINT,
    /* PwmPeriod */             30000U,
#if (defined(FTM_PWM_IP_HAS_DITHERING) && (FTM_PWM_IP_HAS_DITHERING == STD_ON))
    /* PwmPeriodDither */       0U,
#endif
    /* DeadTimeValue */         0U,
    /* DeadTimePs */            FTM_PWM_IP_DEADTIME_DIV_1,
#if (defined(FTM_PWM_IP_HAS_FAULT) && (FTM_PWM_IP_HAS_FAULT == STD_ON))
    /* FaultCtrMode */          FTM_PWM_IP_FAULT_DISABLED,
    /* FaultOutState */         FTM_PWM_IP_OUT_SAFE_VALUE,
    /* FaultInFilter */         0U,
    /* FaultIrqEn */            (boolean)FALSE,
#endif    
    /* SyncCfg */               &Ftm_Pwm_Ip_BOARD_InitPeripherals_SyncCfg0
};


/* Ftm instance 0 paired channels initialization configuration */

/* Ftm channel pair 1 configuration */
const Ftm_Pwm_Ip_PairCfgType Ftm_Pwm_Ip_BOARD_InitPeripherals_I0_ChPair1 =
{
    /* PairId */                1U,
    /* DeadtimeEn */            (boolean)FALSE,
    /* ComplementaryModeEn */   (boolean)TRUE,
    /* PairChPolarity */        FTM_PWM_IP_MAIN_INVERTED,
    /* PairExtTrigEn */         (boolean)FALSE,
    /* PairSyncEn */            (boolean)TRUE,
    /* PhaseShiftValue */       0U,
#if (defined(FTM_PWM_IP_HAS_DITHERING) && (FTM_PWM_IP_HAS_DITHERING == STD_ON))
    /* DitherEdge */            FTM_PWM_IP_DITHER_LEADING_EDGE
#endif
};


/* Ftm instance 0 channels initialization configuration */

/* Ftm channel 0 configuration */
const Ftm_Pwm_Ip_ChannelConfigType Ftm_Pwm_Ip_BOARD_InitPeripherals_I0_Ch0 =
{
    /* ChannelId */             0U,
    /* ChannelMode */           FTM_PWM_IP_MODE_EDGE_ALIGNED_HIGH,
    /* ChIrqEn */               (boolean)TRUE,
    /* ChannelCb */             {
        /* FunctionCallback */      &Pwm_Notification,
        /* CbParam */               0U
                                },
    /* ChOutputEn */            (boolean)TRUE,
    /* SwControlEn */           (boolean)FALSE,
    /* SwControlVal */          (boolean)FALSE,
    /* ExtTrigEn */             (boolean)FALSE,
    /* ChMatchLoadEn */         (boolean)FALSE,
    /* DutyCycle */             2746U,
#if (defined(FTM_PWM_IP_HAS_DITHERING) && (FTM_PWM_IP_HAS_DITHERING == STD_ON))
    /* DutyCycleDither */       0U,
#endif
    /* InitOut */               FTM_PWM_IP_OUTPUT_STATE_HIGH,
    /* Polarity */              FTM_PWM_IP_POLARITY_HIGH,
    /* PairCfg */               NULL_PTR
};

/* Ftm channel 1 configuration */
const Ftm_Pwm_Ip_ChannelConfigType Ftm_Pwm_Ip_BOARD_InitPeripherals_I0_Ch1 =
{
    /* ChannelId */             1U,
    /* ChannelMode */           FTM_PWM_IP_MODE_EDGE_ALIGNED_HIGH,
    /* ChIrqEn */               (boolean)TRUE,
    /* ChannelCb */             {
        /* FunctionCallback */      &Pwm_Notification,
        /* CbParam */               1U
                                },
    /* ChOutputEn */            (boolean)TRUE,
    /* SwControlEn */           (boolean)FALSE,
    /* SwControlVal */          (boolean)FALSE,
    /* ExtTrigEn */             (boolean)FALSE,
    /* ChMatchLoadEn */         (boolean)FALSE,
    /* DutyCycle */             0U,
#if (defined(FTM_PWM_IP_HAS_DITHERING) && (FTM_PWM_IP_HAS_DITHERING == STD_ON))
    /* DutyCycleDither */       0U,
#endif
    /* InitOut */               FTM_PWM_IP_OUTPUT_STATE_HIGH,
    /* Polarity */              FTM_PWM_IP_POLARITY_HIGH,
    /* PairCfg */               NULL_PTR
};

/* Ftm channel 2 configuration */
const Ftm_Pwm_Ip_ChannelConfigType Ftm_Pwm_Ip_BOARD_InitPeripherals_I0_Ch2 =
{
    /* ChannelId */             2U,
    /* ChannelMode */           FTM_PWM_IP_MODE_COMBINE_HIGH,
    /* ChIrqEn */               (boolean)TRUE,
    /* ChannelCb */             {
        /* FunctionCallback */      &Pwm_Notification,
        /* CbParam */               2U
                                },
    /* ChOutputEn */            (boolean)TRUE,
    /* SwControlEn */           (boolean)FALSE,
    /* SwControlVal */          (boolean)FALSE,
    /* ExtTrigEn */             (boolean)FALSE,
    /* ChMatchLoadEn */         (boolean)FALSE,
    /* DutyCycle */             1831U,
#if (defined(FTM_PWM_IP_HAS_DITHERING) && (FTM_PWM_IP_HAS_DITHERING == STD_ON))
    /* DutyCycleDither */       0U,
#endif
    /* InitOut */               FTM_PWM_IP_OUTPUT_STATE_LOW,
    /* Polarity */              FTM_PWM_IP_POLARITY_HIGH,
    /* PairCfg */               &Ftm_Pwm_Ip_BOARD_InitPeripherals_I0_ChPair1
};


/* Ftm channels configuration array */
const Ftm_Pwm_Ip_ChannelConfigType * const Ftm_Pwm_Ip_BOARD_InitPeripherals_I0_ChArray[3U] =
{
    &Ftm_Pwm_Ip_BOARD_InitPeripherals_I0_Ch0,
    &Ftm_Pwm_Ip_BOARD_InitPeripherals_I0_Ch1,
    &Ftm_Pwm_Ip_BOARD_InitPeripherals_I0_Ch2
};

/* Ftm instance 0 User configuration structure */
const Ftm_Pwm_Ip_UserCfgType Ftm_Pwm_Ip_BOARD_InitPeripherals_UserCfg0 =
{
    /* InstanceCfg */           &Ftm_Pwm_Ip_BOARD_InitPeripherals_InstCfg0,
    /* ConfiguredChArray */     Ftm_Pwm_Ip_BOARD_InitPeripherals_I0_ChArray,
    /* NoOfConfiguredCh */      3U
#if (defined(FTM_PWM_IP_HAS_FAULT) && (FTM_PWM_IP_HAS_FAULT == STD_ON))
    ,
    /* ConfiguredFaultArray */  NULL_PTR,
    /* NoOfFaultCfg */          0U
#endif
};


#define PWM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Pwm_MemMap.h"
#endif  /* FTM_PWM_IP_PRECOMPILE_SUPPORT */

#ifdef __cplusplus
}
#endif

/** @} */

