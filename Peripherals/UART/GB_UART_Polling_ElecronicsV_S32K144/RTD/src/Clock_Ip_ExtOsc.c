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
*   @file       Clock_Ip_ExtOsc.c
*   @version    1.0.0
*
*   @brief   CLOCK driver implementations.
*   @details CLOCK driver implementations.
*
*   @addtogroup CLOCK_DRIVER Clock Ip Driver
*   @{
*/




#include "Clock_Ip_Private.h"

/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CLOCK_IP_EXTOSC_VENDOR_ID_C                      43
#define CLOCK_IP_EXTOSC_AR_RELEASE_MAJOR_VERSION_C       4
#define CLOCK_IP_EXTOSC_AR_RELEASE_MINOR_VERSION_C       4
#define CLOCK_IP_EXTOSC_AR_RELEASE_REVISION_VERSION_C    0
#define CLOCK_IP_EXTOSC_SW_MAJOR_VERSION_C               1
#define CLOCK_IP_EXTOSC_SW_MINOR_VERSION_C               0
#define CLOCK_IP_EXTOSC_SW_PATCH_VERSION_C               0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Clock_Ip_ExtOsc.c file and Clock_Ip_Private.h file are of the same vendor */
#if (CLOCK_IP_EXTOSC_VENDOR_ID_C != CLOCK_IP_PRIVATE_VENDOR_ID)
    #error "Clock_Ip_ExtOsc.c and Clock_Ip_Private.h have different vendor ids"
#endif

/* Check if Clock_Ip_ExtOsc.c file and Clock_Ip_Private.h file are of the same Autosar version */
#if ((CLOCK_IP_EXTOSC_AR_RELEASE_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MAJOR_VERSION) || \
     (CLOCK_IP_EXTOSC_AR_RELEASE_MINOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MINOR_VERSION) || \
     (CLOCK_IP_EXTOSC_AR_RELEASE_REVISION_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Clock_Ip_ExtOsc.c and Clock_Ip_Private.h are different"
#endif

/* Check if Clock_Ip_ExtOsc.c file and Clock_Ip_Private.h file are of the same Software version */
#if ((CLOCK_IP_EXTOSC_SW_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MAJOR_VERSION) || \
     (CLOCK_IP_EXTOSC_SW_MINOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MINOR_VERSION) || \
     (CLOCK_IP_EXTOSC_SW_PATCH_VERSION_C != CLOCK_IP_PRIVATE_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Clock_Ip_ExtOsc.c and Clock_Ip_Private.h are different"
#endif

/* Clock start section code */
#define MCU_START_SEC_CODE

#include "Mcu_MemMap.h"


static void ExternalOscillatorEmpty(Clock_Ip_XoscConfigType const* config);
static void DisableExternalOscillatorEmpty(Clock_Ip_NameType xoscName);
#ifdef FXOSC_OSCON_BYP_EOCV_GM_SEL
static void ResetFxoscOsconBypEocvGmSel(Clock_Ip_XoscConfigType const* config);
static void SetFxoscOsconBypEocvGmSel(Clock_Ip_XoscConfigType const* config);
static void CompleteFxoscOsconBypEocvGmSel(Clock_Ip_XoscConfigType const* config);
static void DisableFxoscOsconBypEocvGmSel(Clock_Ip_NameType xoscName);
static void EnableFxoscOsconBypEocvGmSel(Clock_Ip_XoscConfigType const* config);
#endif
static void ExternalOscillatorEmpty(Clock_Ip_XoscConfigType const* config);
#ifdef SXOSC_OSCON_EOCV
static void ResetSxoscOsconEocv(Clock_Ip_XoscConfigType const* config);
static void SetSxoscOsconEocv(Clock_Ip_XoscConfigType const* config);
static void CompleteSxoscOsconEocv(Clock_Ip_XoscConfigType const* config);
static void DisableSxoscOsconEocv(Clock_Ip_NameType xoscName);
static void EnableSxoscOsconEocv(Clock_Ip_XoscConfigType const* config);
#endif
#ifdef SOSC_ENABLE
static void ResetSOSC(Clock_Ip_XoscConfigType const* config);
static void SetSOSC(Clock_Ip_XoscConfigType const* config);
static void CompleteSOSC(Clock_Ip_XoscConfigType const* config);
static void DisableSOSC(Clock_Ip_NameType xoscName);
static void EnableSOSC(Clock_Ip_XoscConfigType const* config);
#endif



/* Clock stop section code */
#define MCU_STOP_SEC_CODE

#include "Mcu_MemMap.h"

/* Clock start constant section data */
#define MCU_START_SEC_CONST_UNSPECIFIED

#include "Mcu_MemMap.h"

const extOscCallback extOscCallbacks[XOSC_CALLBACKS_COUNT] =
{
    {
        ExternalOscillatorEmpty,        /* Reset */
        ExternalOscillatorEmpty,        /* Set */
        ExternalOscillatorEmpty,        /* Complete */
        DisableExternalOscillatorEmpty, /* Disable */
        ExternalOscillatorEmpty,        /* Enable */
    },
#ifdef FXOSC_OSCON_BYP_EOCV_GM_SEL
    {
        ResetFxoscOsconBypEocvGmSel,        /* Reset */
        SetFxoscOsconBypEocvGmSel,          /* Set */
        CompleteFxoscOsconBypEocvGmSel,     /* Complete */
        DisableFxoscOsconBypEocvGmSel,      /* Disable */
        EnableFxoscOsconBypEocvGmSel,       /* Enable */
    },
#endif
#ifdef SXOSC_OSCON_EOCV
    {
        ResetSxoscOsconEocv,                /* Reset */
        SetSxoscOsconEocv,                  /* Set */
        CompleteSxoscOsconEocv,             /* Complete */
        DisableSxoscOsconEocv,              /* Disable */
        EnableSxoscOsconEocv,               /* Enable */
    },
#endif
#ifdef SOSC_ENABLE
    {
        ResetSOSC,                         /* Reset */
        SetSOSC,                            /* Set */
        CompleteSOSC,                       /* Complete */
        DisableSOSC,                        /* Disable */
        EnableSOSC,                         /* Enable */
    },
#endif
};

/* Clock stop constant section data */
#define MCU_STOP_SEC_CONST_UNSPECIFIED

#include "Mcu_MemMap.h"

/* Clock start section code */
#define MCU_START_SEC_CODE

#include "Mcu_MemMap.h"

static void ExternalOscillatorEmpty(Clock_Ip_XoscConfigType const* config)
{
    (void)config;
    /* No implementation */
}
static void DisableExternalOscillatorEmpty(Clock_Ip_NameType xoscName)
{
    (void)xoscName;
    /* No implementation */
}


#ifdef FXOSC_OSCON_BYP_EOCV_GM_SEL
static void ResetFxoscOsconBypEocvGmSel(Clock_Ip_XoscConfigType const* config)
{
    uint32 instance = clockFeatures[config->name][CLOCK_MODULE_INSTANCE];

    /* Disable FXOSC */
    xosc[instance]->CTRL &= ~FXOSC_CTRL_OSCON_MASK;
}
static void SetFxoscOsconBypEocvGmSel(Clock_Ip_XoscConfigType const* config)
{
    uint32 instance = clockFeatures[config->name][CLOCK_MODULE_INSTANCE];

    if (config->enable != 0U)
    {
        xosc[instance]->CTRL =
           (
            FXOSC_CTRL_OSCON(1U)                                                |
            FXOSC_CTRL_OSC_BYP(config->bypassOption)                            |
            FXOSC_CTRL_EOCV(config->startupDelay)                               |
            FXOSC_CTRL_GM_SEL(config->transConductance)                         |
            FXOSC_CTRL_COMP_EN(config->compEn)
           );
    }
#ifdef CLOCK_IP_GET_FREQUENCY_API
#if (CLOCK_IP_GET_FREQUENCY_API == STD_ON)
    SetExternalOscillatorFrequency(config->name,config->freq);
#endif
#endif
}
static void CompleteFxoscOsconBypEocvGmSel(Clock_Ip_XoscConfigType const* config)
{
    boolean TimeoutOccurred = FALSE;
    uint32 StartTime;
    uint32 ElapsedTime;
    uint32 TimeoutTicks;
    uint32 FxoscStatus;
    uint32 instance = clockFeatures[config->name][CLOCK_MODULE_INSTANCE];

    if (config->enable != 0U)
    {
        /* This assumes that FXOSC_CTRL[COMP_EN] = 1 and FXOSC_CTRL[OSC_BYP] = 0 (i.e. crystal clock/oscillator output). */
        /* In bypass mode (i.e. EXTAL output), FXOSC_CTRL[COMP_EN] = 0 and FXOSC_CTRL[OSC_BYP] = 1, which means that
           we cannot check for stabilization. This shifts the responsibility of waiting for a stable clock to the
           upper layers. */
        if (config->compEn != 0U)
        {
            if(config->bypassOption == 0U)
            {
                ClockStartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_TIMEOUT_VALUE_US);
                /* Wait until xosc is locked */
                do
                {
                    FxoscStatus = ((xosc[instance]->STAT & FXOSC_STAT_OSC_STAT_MASK) >> FXOSC_STAT_OSC_STAT_SHIFT);
                    TimeoutOccurred = ClockTimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
                }
                while ((FxoscStatus == 0U) && (FALSE == TimeoutOccurred));

                if (TimeoutOccurred)
                {
                    /* Report timeout error */
                    ReportClockErrors(CLOCK_IP_REPORT_TIMEOUT_ERROR, config->name);
                }
            }
            else
            {
                /* Invalid FXOSC configuration: FXOSC_CTRL[COMP_EN] = 1 enforces FXOSC_CTRL[OSC_BYP] = 0. */
                /* Report timeout error */
                ReportClockErrors(CLOCK_IP_REPORT_FXOSC_CONFIGURATION_ERROR, config->name);
            }
        }
    }
}
static void DisableFxoscOsconBypEocvGmSel(Clock_Ip_NameType xoscName)
{
    uint32 instance = clockFeatures[xoscName][CLOCK_MODULE_INSTANCE];

    /* Disable SOSC. */
    xosc[instance]->CTRL &= ~FXOSC_CTRL_OSCON_MASK;
}
static void EnableFxoscOsconBypEocvGmSel(Clock_Ip_XoscConfigType const* config)
{
    uint32 instance = clockFeatures[config->name][CLOCK_MODULE_INSTANCE];

    if (config->enable)
    {
        /* Enable SOSC. */
        xosc[instance]->CTRL |= FXOSC_CTRL_OSCON_MASK;
    }
}
#endif

#ifdef SXOSC_OSCON_EOCV
static void ResetSxoscOsconEocv(Clock_Ip_XoscConfigType const* config)
{
    uint32 instance = clockFeatures[config->name][CLOCK_MODULE_INSTANCE];

    uint32 partition      = 1U;
    uint32 collection     = 1U;
    uint32 enableRequest  = 51U;

    (void)mcmeSetPartitions;
    (void)mcmeGetPartitions;
    (void)mcmeTriggerPartitions;
    (void)partition;
    (void)collection;
    (void)enableRequest;

    if ((partition != INV_VAL) && (collection != INV_VAL) && (enableRequest != INV_VAL))
    {
        /* Check clock status for SXOSC */
        if ((mcmeGetPartitions[partition]->PRTN_COFB_STAT[collection] & (1UL << enableRequest)) != 0U)
        {
            /* Disable SXOSC */
            xosc[instance]->CTRL &= ~FXOSC_CTRL_OSCON_MASK;
        }
    }
}
static void SetSxoscOsconEocv(Clock_Ip_XoscConfigType const* config)
{
    boolean TimeoutOccurred = FALSE;
    uint32 StartTime;
    uint32 ElapsedTime;
    uint32 TimeoutTicks;

    uint32 instance = clockFeatures[config->name][CLOCK_MODULE_INSTANCE];

    uint32 partition      = 1U;
    uint32 collection     = 1U;
    uint32 enableRequest  = 51U;
    
    (void)partition;
    (void)collection;
    (void)enableRequest;

    if (config->enable != 0U)
    {
        if ((partition != INV_VAL) && (collection != INV_VAL) && (enableRequest != INV_VAL))
        {
            /* Check clock status for SXOSC */
            if ((mcmeGetPartitions[partition]->PRTN_COFB_STAT[collection] & (1UL << enableRequest)) == 0U)
            {
                /* Enable clock for SXOSC device */
                mcmeSetPartitions[partition]->PRTN_COFB_CLKEN[collection] |= (1UL << enableRequest);
                mcmeTriggerPartitions[partition]->PRTN_PCONF  |= MC_ME_PRTN1_PCONF_PCE_MASK;
                mcmeTriggerPartitions[partition]->PRTN_PUPD   |= MC_ME_PRTN1_PUPD_PCUD_MASK;
                McMeEnterKey();
                /* Wait until clock gate is updated */
                ClockStartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_TIMEOUT_VALUE_US);
                do
                {
                    TimeoutOccurred = ClockTimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
                }
                while (((mcmeGetPartitions[partition]->PRTN_COFB_STAT[collection] & (1UL << enableRequest)) == 0U) && (FALSE == TimeoutOccurred));
                /* timeout notification */
                if (TRUE == TimeoutOccurred)
                {
                    /* Report timeout error */
                    ReportClockErrors(CLOCK_IP_REPORT_TIMEOUT_ERROR, config->name);
                }
            }
        }

        xosc[instance]->CTRL =
           (SXOSC_SXOSC_CTRL_OSCON(1U)                                                |
            SXOSC_SXOSC_CTRL_EOCV(config->startupDelay)
           );
    }
#ifdef CLOCK_IP_GET_FREQUENCY_API
#if (CLOCK_IP_GET_FREQUENCY_API == STD_ON)
    SetExternalOscillatorFrequency(config->name,config->freq);
#endif
#endif
}
static void CompleteSxoscOsconEocv(Clock_Ip_XoscConfigType const* config)
{
    boolean TimeoutOccurred = FALSE;
    uint32 StartTime;
    uint32 ElapsedTime;
    uint32 TimeoutTicks;
    uint32 SxoscStatus;
    uint32 instance = clockFeatures[config->name][CLOCK_MODULE_INSTANCE];

    if (config->enable != 0U)
    {
        /* This assumes that FXOSC_CTRL[COMP_EN] = 1 and FXOSC_CTRL[OSC_BYP] = 0 (i.e. crystal clock/oscillator output). */
        /* In bypass mode (i.e. EXTAL output), FXOSC_CTRL[COMP_EN] = 0 and FXOSC_CTRL[OSC_BYP] = 1, which means that
           we cannot check for stabilization. This shifts the responsibility of waiting for a stable clock to the
           upper layers. */
        if (config->compEn != 0U)
        {
            if(config->bypassOption == 0U)
            {
                ClockStartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_TIMEOUT_VALUE_US);
                /* Wait until xosc is locked */
                do
                {
                    SxoscStatus = ((xosc[instance]->STAT & SXOSC_SXOSC_STAT_OSC_STAT_MASK) >> SXOSC_SXOSC_STAT_OSC_STAT_SHIFT);
                    TimeoutOccurred = ClockTimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
                }
                while ((SxoscStatus == 0U) && (FALSE == TimeoutOccurred));

                if (TimeoutOccurred)
                {
                    /* Report timeout error */
                    ReportClockErrors(CLOCK_IP_REPORT_TIMEOUT_ERROR, config->name);
                }
            }
            else
            {
                /* Invalid FXOSC configuration: FXOSC_CTRL[COMP_EN] = 1 enforces FXOSC_CTRL[OSC_BYP] = 0. */
                /* Report timeout error */
                ReportClockErrors(CLOCK_IP_REPORT_FXOSC_CONFIGURATION_ERROR, config->name);
            }
        }
    }
}
static void DisableSxoscOsconEocv(Clock_Ip_NameType xoscName)
{
    (void)xoscName;
}
static void EnableSxoscOsconEocv(Clock_Ip_XoscConfigType const* config)
{
    (void)config;
}
#endif

#ifdef SOSC_ENABLE
static void ResetSOSC_TrustedCall(Clock_Ip_XoscConfigType const* config)
{
    (void)config;

    /* Clear LK bit field */
    IP_SCG->SOSCCSR &= (~((uint32)SCG_SOSCCSR_LK_MASK));

    /* Disable clock */
    IP_SCG->SOSCCSR &= (~((uint32)SCG_SOSCCSR_SOSCEN_MASK));
}
static void ResetSOSC(Clock_Ip_XoscConfigType const* config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(ResetSOSC_TrustedCall,(config));
  #else
    ResetSOSC_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
static void SetSOSC_TrustedCall(Clock_Ip_XoscConfigType const* config)
{
    /* Configure SOSC. */
    if (config->enable == 1U)
    {        
#ifdef CLOCK_IP_GET_FREQUENCY_API
#if (CLOCK_IP_GET_FREQUENCY_API == STD_ON)
        SetExternalOscillatorFrequency(config->name,config->freq);
#endif
#endif
        switch(config->gain)
        {
#ifdef FEATURE_CLOCK_IP_HAS_LOW_GAIN
            case FEATURE_CLOCK_IP_HAS_LOW_GAIN:
            {
                /* Set gain value. */
                IP_SCG->SOSCCFG &= ~SCG_SOSCCFG_HGO_MASK;
            }
            break;
#endif
#ifdef FEATURE_CLOCK_IP_HAS_HIGH_GAIN
            case FEATURE_CLOCK_IP_HAS_HIGH_GAIN:
            {
                /* Set gain value. */
                IP_SCG->SOSCCFG |= SCG_SOSCCFG_HGO_MASK;
            }
            break;
#endif
            default:
            {
                /* Invalid configuration element */
                CLOCK_DEV_ASSERT(FALSE);
            }
            break;
        }


        IP_SCG->SOSCCFG &= ~SCG_SOSCCFG_RANGE_MASK;

        if ((config->freq >= 4000000U) && (config->freq < 8000000U))
        {
            IP_SCG->SOSCCFG |= SCG_SOSCCFG_RANGE(2U);
        }
        else
        {
            IP_SCG->SOSCCFG |= SCG_SOSCCFG_RANGE(3U);
        }

        if (config->bypassOption == 0U)
        {
            IP_SCG->SOSCCFG |= SCG_SOSCCFG_EREFS_MASK;
        }
        else
        {
            IP_SCG->SOSCCFG &= ~SCG_SOSCCFG_EREFS_MASK;
        }


        /* Enable clock, configure monitor, lock register. */
        switch (config->monitor)
        {
#ifdef FEATURE_CLOCK_IP_HAS_MONITOR_DISABLE
            case FEATURE_CLOCK_IP_HAS_MONITOR_DISABLE:
            {
                IP_SCG->SOSCCSR = SCG_SOSCCSR_SOSCEN(1UL) |
                               SCG_SOSCCSR_SOSCCM(0UL) |
                               SCG_SOSCCSR_SOSCCMRE(0UL);
            }
            break;
#endif
#ifdef FEATURE_CLOCK_IP_HAS_MONITOR_INT
            case FEATURE_CLOCK_IP_HAS_MONITOR_INT:
            {
                IP_SCG->SOSCCSR = SCG_SOSCCSR_SOSCEN(1UL) |
                               SCG_SOSCCSR_SOSCCM(1UL) |
                               SCG_SOSCCSR_SOSCCMRE(0UL);
            }
            break;
#endif
#ifdef FEATURE_CLOCK_IP_HAS_MONITOR_RESET
            case FEATURE_CLOCK_IP_HAS_MONITOR_RESET:
            {
                IP_SCG->SOSCCSR = SCG_SOSCCSR_SOSCEN(1UL) |
                               SCG_SOSCCSR_SOSCCM(1UL) |
                               SCG_SOSCCSR_SOSCCMRE(1UL);
            }
            break;
#endif
            default:
                /* Enable SOSC. */
                IP_SCG->SOSCCSR |= SCG_SOSCCSR_SOSCEN_MASK;

                /* Invalid monitor mode */
                CLOCK_DEV_ASSERT(FALSE);
                break;
        }
    }
}
static void SetSOSC(Clock_Ip_XoscConfigType const* config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(SetSOSC_TrustedCall,(config));
  #else
    SetSOSC_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */

#ifdef CLOCK_IP_GET_FREQUENCY_API
#if (CLOCK_IP_GET_FREQUENCY_API == STD_ON)
    SetExternalOscillatorFrequency(config->name,config->freq);
#endif
#endif
}
static void CompleteSOSC(Clock_Ip_XoscConfigType const* config)
{
    boolean TimeoutOccurred = FALSE;
    uint32 StartTime;
    uint32 ElapsedTime;
    uint32 TimeoutTicks;
    uint32 SoscStatus;

    /* Configure SOSC. */
    if ((IP_SCG->SOSCCSR & SCG_SOSCCSR_SOSCEN_MASK) != 0U)
    {
        ClockStartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_TIMEOUT_VALUE_US);
        /* Wait until ircosc is locked */
        do
        {
            SoscStatus = (((IP_SCG->SOSCCSR & SCG_SOSCCSR_SOSCVLD_MASK) >> SCG_SOSCCSR_SOSCVLD_SHIFT));
            TimeoutOccurred = ClockTimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
        }
        while ((SoscStatus == 0U) && (FALSE == TimeoutOccurred));

        if (FALSE != TimeoutOccurred)
        {
            /* Report timeout error */
            ReportClockErrors(CLOCK_IP_REPORT_TIMEOUT_ERROR, config->name);
        }
    }
}
static void DisableSOSC_TrustedCall(Clock_Ip_NameType xoscName)
{
    (void)xoscName;

    /* Disable SOSC. */
    IP_SCG->SOSCCSR &= ~SCG_SOSCCSR_SOSCEN_MASK;
}
static void DisableSOSC(Clock_Ip_NameType xoscName)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(DisableSOSC_TrustedCall,(xoscName));
  #else
    DisableSOSC_TrustedCall(xoscName);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
static void EnableSOSC_TrustedCall(Clock_Ip_XoscConfigType const* config)
{
    if (config->enable == 1U)
    {
        /* Enable SOSC. */
        IP_SCG->SOSCCSR |= SCG_SOSCCSR_SOSCEN_MASK;
    }
}
static void EnableSOSC(Clock_Ip_XoscConfigType const* config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(EnableSOSC_TrustedCall,(config));
  #else
    EnableSOSC_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
#endif



/* Clock stop section code */
#define MCU_STOP_SEC_CODE

#include "Mcu_MemMap.h"

/*! @}*/

/*******************************************************************************
 * EOF
 ******************************************************************************/
