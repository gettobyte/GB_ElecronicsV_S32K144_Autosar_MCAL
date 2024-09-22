
/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : Ftm Flexio
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
#define FTM_PWM_IP_BOARD_InitPeripherals_PB_CFG_SW_PATCH_VERSION_C                0

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
extern void Pwm_Notification(uint8 channel);
#define PWM_STOP_SEC_CODE
#include "Pwm_MemMap.h"


/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/
#ifndef FTM_PWM_IP_PRECOMPILE_SUPPORT
#define PWM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Pwm_MemMap.h"


/*================================================================================================*/

/* Ftm instance 0 syncronization initialization configuration */
const Ftm_Pwm_Ip_SyncCfgType Ftm_Pwm_Ip_BOARD_InitPeripherals_SyncCfg0 =
{
    /* syncMode */              FTM_PWM_SYNC_SWTRIGGER,
    /* hwSync0 */               (boolean)FALSE,
    /* hwSync1 */               (boolean)FALSE,
    /* hwSync2 */               (boolean)FALSE,
    /* hwTriggerAutoClear */    (boolean)FALSE,
    /* maxLoadPoint */          (boolean)FALSE,
    /* minLoadPoint */          (boolean)FALSE,
#if (defined(FTM_PWM_HAS_HALF_CYCLE_RELOAD) && (FTM_PWM_HAS_HALF_CYCLE_RELOAD == STD_ON))
    /* halfCycleLoadPoint */    (boolean)FALSE,
#endif
    /* loadPointFreq */         0U,
    /* inverterSync */          FTM_PWM_SYNC_DISABLED,
    /* outRegSync */            FTM_PWM_SYNC_DISABLED,
    /* outMaskSync */           FTM_PWM_SYNC_DISABLED,
    /* initCounterSync */       FTM_PWM_SYNC_ON_TRIGGER,
    /* counterSync */           FTM_PWM_SYNC_ON_TRIGGER
};


/* Ftm instance 0 initialization configuration */
const Ftm_Pwm_Ip_InstanceCfgType Ftm_Pwm_Ip_BOARD_InitPeripherals_InstCfg0 =
{
    /* clkSrc */                FTM_PWM_CLOCK_SOURCE_FIXEDCLK,
    /* clkPs */                 FTM_PWM_CLOCK_DIV_1,
    /* AlternateclkPs */        FTM_PWM_CLOCK_DIV_1,
    /* cntMode */               FTM_PWM_EDGE_ALIGNED,
    /* overflowIrqEn */         (boolean)TRUE,
    /* overflowCb */            {
        /* functionCallback */      &Pwm_Notification,
        /* cbParam */               0U
                                },
#if (defined(FTM_PWM_HAS_RELOAD_POINT) && (FTM_PWM_HAS_RELOAD_POINT == STD_ON))
    /* reloadIrqEn */           (boolean)TRUE,
    /* reloadCb */              {
        /* functionCallback */      &Pwm_Notification,
        /* cbParam */               0U
                                },
#endif
    /* debugMode */             FTM_PWM_BDM_MODE_00,
    /* writeProtection */       (boolean)FALSE,
    /* initTriggerEn */         (boolean)FALSE,
    /* initTrigMode */          FTM_PWM_INIT_TRIGG_RELOAD_POINT,
    /* pwmPeriod */             30000U,
#if (defined(FTM_PWM_HAS_DITHERING) && (FTM_PWM_HAS_DITHERING == STD_ON))
    /* pwmPeriodDither */       0U,
#endif
    /* deadTimeValue */         0U,
    /* deadTimePs */            FTM_PWM_DEADTIME_DIV_1,
#if (defined(FTM_PWM_HAS_FAULT) && (FTM_PWM_HAS_FAULT == STD_ON))
    /* faultCtrMode */          FTM_PWM_FAULT_DISABLED,
    /* faultOutState */         FTM_PWM_OUT_SAFE_VALUE,
    /* faultInFilter */         0U,
    /* faultIrqEn */            (boolean)FALSE,
#endif    
    /* syncCfg */               &Ftm_Pwm_Ip_BOARD_InitPeripherals_SyncCfg0
};


/* Ftm instance 0 paired channels initialization configuration */



/* Ftm instance 0 channels initialization configuration */

/* Ftm channel 0 configuration */
const Ftm_Pwm_Ip_ChannelConfigType Ftm_Pwm_Ip_BOARD_InitPeripherals_I0_Ch0 =
{
    /* channelId */             0U,
    /* channelMode */           FTM_PWM_MODE_EDGE_ALIGNED_HIGH,
    /* chIrqEn */               (boolean)TRUE,
    /* channelCb */             {
        /* functionCallback */      &Pwm_Notification,
        /* cbParam */               0U
                                },
    /* chOutputEn */            (boolean)TRUE,
    /* swControlEn */           (boolean)FALSE,
    /* swControlVal */          (boolean)FALSE,
    /* extTrigEn */             (boolean)FALSE,
    /* chMatchLoadEn */         (boolean)FALSE,
    /* dutyCycle */             15000U,
#if (defined(FTM_PWM_HAS_DITHERING) && (FTM_PWM_HAS_DITHERING == STD_ON))
    /* dutyCycleDither */       0U,
#endif
    /* initOut */               FTM_PWM_OUTPUT_STATE_HIGH,
    /* polarity */              FTM_PWM_POLARITY_HIGH,
    /* pairCfg */               NULL_PTR
};


/* Ftm channels configuration array */
const Ftm_Pwm_Ip_ChannelConfigType * const Ftm_Pwm_Ip_BOARD_InitPeripherals_I0_ChArray[1U] =
{
    &Ftm_Pwm_Ip_BOARD_InitPeripherals_I0_Ch0
};

/* Ftm instance 0 User configuration structure */
const Ftm_Pwm_Ip_UserCfgType Ftm_Pwm_Ip_BOARD_InitPeripherals_UserCfg0 =
{
    /* instanceCfg */           &Ftm_Pwm_Ip_BOARD_InitPeripherals_InstCfg0,
    /* configuredChArray */     Ftm_Pwm_Ip_BOARD_InitPeripherals_I0_ChArray,
    /* noOfConfiguredCh */      1U
#if (defined(FTM_PWM_HAS_FAULT) && (FTM_PWM_HAS_FAULT == STD_ON))
    ,
    /* configuredFaultArray */  NULL_PTR,
    /* noOfFaultCfg */          0U
#endif
};


#define PWM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Pwm_MemMap.h"
#endif  /* FTM_PWM_IP_PRECOMPILE_SUPPORT */

#ifdef __cplusplus
}
#endif

/** @} */

