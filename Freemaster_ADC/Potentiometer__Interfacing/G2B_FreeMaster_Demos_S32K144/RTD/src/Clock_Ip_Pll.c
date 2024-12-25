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
*   @file       Clock_Ip_Pll.c
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
#define CLOCK_IP_PLL_VENDOR_ID_C                      43
#define CLOCK_IP_PLL_AR_RELEASE_MAJOR_VERSION_C       4
#define CLOCK_IP_PLL_AR_RELEASE_MINOR_VERSION_C       4
#define CLOCK_IP_PLL_AR_RELEASE_REVISION_VERSION_C    0
#define CLOCK_IP_PLL_SW_MAJOR_VERSION_C               1
#define CLOCK_IP_PLL_SW_MINOR_VERSION_C               0
#define CLOCK_IP_PLL_SW_PATCH_VERSION_C               0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Clock_Ip_Pll.c file and Clock_Ip_Private.h file are of the same vendor */
#if (CLOCK_IP_PLL_VENDOR_ID_C != CLOCK_IP_PRIVATE_VENDOR_ID)
    #error "Clock_Ip_Pll.c and Clock_Ip_Private.h have different vendor ids"
#endif

/* Check if Clock_Ip_Pll.c file and Clock_Ip_Private.h file are of the same Autosar version */
#if ((CLOCK_IP_PLL_AR_RELEASE_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MAJOR_VERSION) || \
     (CLOCK_IP_PLL_AR_RELEASE_MINOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MINOR_VERSION) || \
     (CLOCK_IP_PLL_AR_RELEASE_REVISION_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Clock_Ip_Pll.c and Clock_Ip_Private.h are different"
#endif

/* Check if Clock_Ip_Pll.c file and Clock_Ip_Private.h file are of the same Software version */
#if ((CLOCK_IP_PLL_SW_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MAJOR_VERSION) || \
     (CLOCK_IP_PLL_SW_MINOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MINOR_VERSION) || \
     (CLOCK_IP_PLL_SW_PATCH_VERSION_C != CLOCK_IP_PRIVATE_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Clock_Ip_Pll.c and Clock_Ip_Private.h are different"
#endif


/* Clock start section code */
#define MCU_START_SEC_CODE

#include "Mcu_MemMap.h"

static void Callback_PllEmpty(Clock_Ip_PllConfigType const* config);
static clock_pll_status_t Callback_PllEmptyComplete(Clock_Ip_NameType PllName);
static void Callback_PllEmptyDisable(Clock_Ip_NameType PllName);
#ifdef PLLDIG_RDIV_MFI_MFN_SDMEN_SSCGBYP_SPREADCTL_STEPNO_STEPSIZE
static void ResetPlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize(Clock_Ip_PllConfigType const* config);
static void SetPlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize(Clock_Ip_PllConfigType const* config);
static clock_pll_status_t CompletePlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize(Clock_Ip_NameType PllName);
static void EnablePlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize(Clock_Ip_PllConfigType const* config);
#endif
#ifdef PLLDIG_RDIV_MFI_MFN_SDMEN
static void ResetPlldigRdivMfiMfnSdmen(Clock_Ip_PllConfigType const* config);
static void SetPlldigRdivMfiMfnSdmen(Clock_Ip_PllConfigType const* config);
static clock_pll_status_t CompletePlldigRdivMfiMfnSdmen(Clock_Ip_NameType PllName);
static void EnablePlldigRdivMfiMfnSdmen(Clock_Ip_PllConfigType const* config);
#endif
#ifdef PLL_RDIV_MFI_MFN_ODIV2_SDMEN_SSCGBYP_SPREADCTL_STEPNO_STEPSIZE
static void ResetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize(Clock_Ip_PllConfigType const* config);
static void SetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize(Clock_Ip_PllConfigType const* config);
static clock_pll_status_t CompletePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize(Clock_Ip_NameType PllName);
static void EnablePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize(Clock_Ip_PllConfigType const* config);
#endif

#ifdef SPLL_ENABLE
static void ResetSpll(Clock_Ip_PllConfigType const* config);
static void SetSpll(Clock_Ip_PllConfigType const* config);
static clock_pll_status_t CompleteSpll(Clock_Ip_NameType pllName);
static void EnableSpll(Clock_Ip_PllConfigType const* config);
static void DisableSpll(Clock_Ip_NameType PllName);
#endif



/* Clock stop section code */
#define MCU_STOP_SEC_CODE

#include "Mcu_MemMap.h"

/* Clock start constant section data */
#define MCU_START_SEC_CONST_UNSPECIFIED

#include "Mcu_MemMap.h"

const pllCallback pllCallbacks[PLL_CALLBACKS_COUNT] =
{
    {
        Callback_PllEmpty,            /* Reset */
        Callback_PllEmpty,            /* Set */
        Callback_PllEmptyComplete,    /* Complete */
        Callback_PllEmpty,            /* Enable */
        Callback_PllEmptyDisable,     /* Disable */
    },
    /* Pll with frequency modulation */
#ifdef PLLDIG_RDIV_MFI_MFN_SDMEN_SSCGBYP_SPREADCTL_STEPNO_STEPSIZE
    {
        ResetPlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize,              /* Reset */
        SetPlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize,                /* Set */
        CompletePlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize,           /* Complete */
        EnablePlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize,             /* Enable */
        Callback_PllEmptyDisable,                                               /* Disable */
    },
#endif
    /* Pll without frequency modulation */
#ifdef PLLDIG_RDIV_MFI_MFN_SDMEN
    {
        ResetPlldigRdivMfiMfnSdmen,          /* Reset */
        SetPlldigRdivMfiMfnSdmen,            /* Set */
        CompletePlldigRdivMfiMfnSdmen,       /* Complete */
        EnablePlldigRdivMfiMfnSdmen,         /* Enable */
        Callback_PllEmptyDisable,            /* Disable */
    },
#endif
    /* Pll with frequency modulation and VCO clock post divider for driving the PHI output clocks */
#ifdef PLL_RDIV_MFI_MFN_ODIV2_SDMEN_SSCGBYP_SPREADCTL_STEPNO_STEPSIZE
    {
        ResetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize,              /* Reset */
        SetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize,                /* Set */
        CompletePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize,           /* Complete */
        EnablePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize,             /* Enable */
        Callback_PllEmptyDisable,                                                 /* Disable */
    },
#endif
    /* System Pll */
#ifdef SPLL_ENABLE
    {
        ResetSpll,                                                                /* Reset */
        SetSpll,                                                                  /* Set */
        CompleteSpll,                                                             /* Complete */
        EnableSpll,                                                               /* Enable */
        DisableSpll,                                                              /* Disable */
    },                                                                            
#endif
};


/* Clock stop constant section data */
#define MCU_STOP_SEC_CONST_UNSPECIFIED

#include "Mcu_MemMap.h"

#define MCU_START_SEC_CODE
/* Clock start section code */

#include "Mcu_MemMap.h"


static void Callback_PllEmpty(Clock_Ip_PllConfigType const* config)
{
    (void)config;
    /* No implementation */
}
static clock_pll_status_t Callback_PllEmptyComplete(Clock_Ip_NameType PllName)
{
    (void)PllName;
    /* No implementation */
    return STATUS_PLL_NOT_ENABLED;
}
static void Callback_PllEmptyDisable(Clock_Ip_NameType PllName)
{
    (void)PllName;
    /* No implementation */
}

/* Pll with frequency modulation */
#ifdef PLLDIG_RDIV_MFI_MFN_SDMEN_SSCGBYP_SPREADCTL_STEPNO_STEPSIZE
static void ResetPlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize(Clock_Ip_PllConfigType const* config)
{
    uint32 instance = clockFeatures[config->name][CLOCK_MODULE_INSTANCE];

    /* Power down PLL */
    pll[instance]->PLLCR |= PLLDIG_PLLCR_PLLPD_MASK;
}
static void SetPlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize(Clock_Ip_PllConfigType const* config)
{
    uint32 instance = clockFeatures[config->name][CLOCK_MODULE_INSTANCE];
    uint32 value;

    if (config->enable != 0U)
    {
        /* Select input reference. */
        pll[instance]->PLLCLKMUX = PLLDIG_PLLCLKMUX_REFCLKSEL(config->inputReference);

        /* Configure PLL: predivider and multiplier */
        value = (uint32) (PLLDIG_PLLDV_RDIV(config->predivider)   |
                            PLLDIG_PLLDV_MFI(config->mulFactorDiv));
        pll[instance]->PLLDV = value;

        /* Set numerator fractional loop divider and sigma delta modulation */
        value = pll[instance]->PLLFD;
        value &= ~(PLLDIG_PLLFD_MFN_MASK | PLLDIG_PLLFD_SDMEN_MASK);
        value |=  PLLDIG_PLLFD_MFN(config->numeratorFracLoopDiv);
        value |= PLLDIG_PLLFD_SDMEN(config->sigmaDelta);
        pll[instance]->PLLFD = value;

        /* Configure modulation */
        value = (uint32) (PLLDIG_PLLFM_SSCGBYP((config->modulationFrequency != 0U) ? 0UL : 1UL)  |
                            PLLDIG_PLLFM_SPREADCTL(config->modulationType)                |
                            PLLDIG_PLLFM_STEPNO(config->incrementStep)                    |
                            PLLDIG_PLLFM_STEPSIZE(config->modulationPeriod));
        pll[instance]->PLLFM = value;

    }
}

static clock_pll_status_t CompletePlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize(Clock_Ip_NameType PllName)
{
    clock_pll_status_t pllStatus = STATUS_PLL_LOCKED;

    boolean TimeoutOccurred = FALSE;
    uint32 StartTime;
    uint32 ElapsedTime;
    uint32 TimeoutTicks;
    uint32 PllLockStatus;
    uint32 instance = clockFeatures[PllName][CLOCK_MODULE_INSTANCE];

    if ((pll[instance]->PLLCR & PLLDIG_PLLCR_PLLPD_MASK) == 0U)
    {
        ClockStartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_TIMEOUT_VALUE_US);
        /* Wait until this pll is locked */
        do
        {
            PllLockStatus = ((pll[instance]->PLLSR & PLLDIG_PLLSR_LOCK_MASK) >> PLLDIG_PLLSR_LOCK_SHIFT);
            TimeoutOccurred = ClockTimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
        }
        while ((PllLockStatus == 0U) && (FALSE == TimeoutOccurred));

        if (TRUE == TimeoutOccurred)
        {
            pllStatus = STATUS_PLL_UNLOCKED;
        }
    }
    else
    {
        pllStatus = STATUS_PLL_NOT_ENABLED;
    }
    return pllStatus;
}
static void EnablePlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize(Clock_Ip_PllConfigType const* config)
{
    uint32 instance = clockFeatures[config->name][CLOCK_MODULE_INSTANCE];

    /* Configure PLL. */
    if (config->enable)
    {
        /* Send command to enable PLL device. */
        pll[instance]->PLLCR &= ~PLLDIG_PLLCR_PLLPD_MASK;
    }
}
#endif

/* Pll with frequency modulation and VCO clock post divider for driving the PHI output clocks */
#ifdef PLL_RDIV_MFI_MFN_ODIV2_SDMEN_SSCGBYP_SPREADCTL_STEPNO_STEPSIZE
static void ResetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize(Clock_Ip_PllConfigType const* config)
{
    uint32 instance = clockFeatures[config->name][CLOCK_MODULE_INSTANCE];

    /* Check clock status for PLL */
    if ((IP_MC_ME->PRTN1_COFB1_STAT & MC_ME_PRTN1_COFB1_STAT_BLOCK56_MASK) != 0U)
    {
        /* Power down PLL */
        pll[instance]->PLLCR |= PLL_PLLCR_PLLPD_MASK;
    }
}
static void SetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize(Clock_Ip_PllConfigType const* config)
{
    uint32 instance = clockFeatures[config->name][CLOCK_MODULE_INSTANCE];
    uint32 value;
    boolean TimeoutOccurred = FALSE;
    uint32 StartTime;
    uint32 ElapsedTime;
    uint32 TimeoutTicks;

    if (config->enable != 0U)
    {
        /* Check clock status for PLL */
        if (((IP_MC_ME->PRTN1_COFB1_STAT & MC_ME_PRTN1_COFB1_STAT_BLOCK56_MASK) == 0U))
        {
            /* Enable clock for PLL device */
            IP_MC_ME->PRTN1_COFB1_CLKEN |= MC_ME_PRTN1_COFB1_CLKEN_REQ56(1U);   /* REQ56: Frequency Modulated Phase-Locked Loop */
            IP_MC_ME->PRTN1_PCONF       |= MC_ME_PRTN1_PCONF_PCE_MASK;          /* PCE=1: Enable the clock to Partition #1 */
            IP_MC_ME->PRTN1_PUPD        |= MC_ME_PRTN1_PUPD_PCUD_MASK;          /* PCUD=1: Trigger the hardware process */
            IP_MC_ME->CTL_KEY = 0x5AF0;                                         /* Enter key */
            IP_MC_ME->CTL_KEY = 0xA50F;                                         /* Enter inverted key */
            /* Wait until PLL clock is running */
            ClockStartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_TIMEOUT_VALUE_US);
            do
            {
                TimeoutOccurred = ClockTimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
            }
            while (((IP_MC_ME->PRTN1_COFB1_STAT & MC_ME_PRTN1_COFB1_STAT_BLOCK56_MASK) == 0U) && (FALSE == TimeoutOccurred));
            /* timeout notification */
            if (TRUE == TimeoutOccurred)
            {
                /* Report timeout error */
                ReportClockErrors(CLOCK_IP_REPORT_TIMEOUT_ERROR, config->name);
            }
        }

        /* Configure PLL: predivider and multiplier */
        value = pll[instance]->PLLDV;
        value &= ~(PLL_PLLDV_RDIV_MASK | PLL_PLLDV_MFI_MASK);
        value |= (uint32) (PLL_PLLDV_RDIV(config->predivider) | 
                          PLL_PLLDV_MFI(config->mulFactorDiv));
        pll[instance]->PLLDV = value;

        /* Set numerator fractional loop divider and sigma delta modulation */
        value = pll[instance]->PLLFD;
        value &= ~(PLL_PLLFD_MFN_MASK | PLL_PLLFD_SDMEN_MASK);
        value |=  PLL_PLLFD_MFN(config->numeratorFracLoopDiv);
        value |= PLL_PLLFD_SDMEN(config->sigmaDelta);
        pll[instance]->PLLFD = value;

        /* Configure modulation */
        value = (uint32) (PLL_PLLFM_SSCGBYP((config->modulationFrequency != 0U) ? 0UL : 1UL)  |
                            PLL_PLLFM_SPREADCTL(config->modulationType)                |
                            PLL_PLLFM_STEPNO(config->incrementStep)                    |
                            PLL_PLLFM_STEPSIZE(config->modulationPeriod));
        pll[instance]->PLLFM = value;

        /* Send command to enable PLL device. */
        pll[instance]->PLLCR &= ~PLL_PLLCR_PLLPD_MASK;
    }
}

static clock_pll_status_t CompletePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize(Clock_Ip_NameType PllName)
{
    clock_pll_status_t pllStatus = STATUS_PLL_LOCKED;

    boolean TimeoutOccurred = FALSE;
    uint32 StartTime;
    uint32 ElapsedTime;
    uint32 TimeoutTicks;
    uint32 PllLockStatus;
    uint32 instance = clockFeatures[PllName][CLOCK_MODULE_INSTANCE];

    if ((pll[instance]->PLLCR & PLL_PLLCR_PLLPD_MASK) == 0U)
    {
        ClockStartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_TIMEOUT_VALUE_US);
        /* Wait until this pll is locked */
        do
        {
            PllLockStatus = ((pll[instance]->PLLSR & PLL_PLLSR_LOCK_MASK) >> PLL_PLLSR_LOCK_SHIFT);
            TimeoutOccurred = ClockTimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
        }
        while ((PllLockStatus == 0U) && (FALSE == TimeoutOccurred));

        if (TRUE == TimeoutOccurred)
        {
            pllStatus = STATUS_PLL_UNLOCKED;
        }
    }
    else
    {
        pllStatus = STATUS_PLL_NOT_ENABLED;
    }
    return pllStatus;
}
static void EnablePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize(Clock_Ip_PllConfigType const* config)
{
    uint32 instance = clockFeatures[config->name][CLOCK_MODULE_INSTANCE];
    
    /* Configure PLL. */
    if (config->enable)
    {
        /* Send command to enable PLL device. */
        pll[instance]->PLLCR &= ~PLL_PLLCR_PLLPD_MASK;
    }
}
#endif



/* Pll without frequency modulation */
#ifdef PLLDIG_RDIV_MFI_MFN_SDMEN
static void ResetPlldigRdivMfiMfnSdmen(Clock_Ip_PllConfigType const* config)
{
    uint32 instance = clockFeatures[config->name][CLOCK_MODULE_INSTANCE];

    /* Power down PLL */
    pll[instance]->PLLCR |= PLLDIG_PLLCR_PLLPD_MASK;
}
static void SetPlldigRdivMfiMfnSdmen(Clock_Ip_PllConfigType const* config)
{
    uint32 instance = clockFeatures[config->name][CLOCK_MODULE_INSTANCE];
    uint32 value;

    if (config->enable != 0U)
    {
        /* Select input reference. */
        pll[instance]->PLLCLKMUX = PLLDIG_PLLCLKMUX_REFCLKSEL(config->inputReference);

        /* Configure PLL: predivider and multiplier */
        value = (uint32) (PLLDIG_PLLDV_RDIV(config->predivider)   |
                            PLLDIG_PLLDV_MFI(config->mulFactorDiv));
        pll[instance]->PLLDV = value;

        /* Set numerator fractional loop divider and sigma delta modulation */
        value = pll[instance]->PLLFD;
        value &= ~(PLLDIG_PLLFD_MFN_MASK | PLLDIG_PLLFD_SDMEN_MASK);
        value |=  PLLDIG_PLLFD_MFN(config->numeratorFracLoopDiv);
        value |= PLLDIG_PLLFD_SDMEN(config->sigmaDelta);
        pll[instance]->PLLFD = value;
    }
}
static clock_pll_status_t CompletePlldigRdivMfiMfnSdmen(Clock_Ip_NameType PllName)
{
    clock_pll_status_t pllStatus = STATUS_PLL_LOCKED;
    boolean TimeoutOccurred = FALSE;
    uint32 StartTime;
    uint32 ElapsedTime;
    uint32 TimeoutTicks;
    uint32 PllLockStatus;
    uint32 instance = clockFeatures[PllName][CLOCK_MODULE_INSTANCE];

    if ((pll[instance]->PLLCR & PLLDIG_PLLCR_PLLPD_MASK) == 0U)
    {
        ClockStartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_TIMEOUT_VALUE_US);
        /* Wait until this pll is locked */
        do
        {
            PllLockStatus = ((pll[instance]->PLLSR & PLLDIG_PLLSR_LOCK_MASK) >> PLLDIG_PLLSR_LOCK_SHIFT);
            TimeoutOccurred = ClockTimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
        }
        while ((PllLockStatus == 0U) && (FALSE == TimeoutOccurred));

        if(TRUE == TimeoutOccurred)
        {
            pllStatus = STATUS_PLL_UNLOCKED;
        }
    }
    else
    {
        pllStatus = STATUS_PLL_NOT_ENABLED;
    }
    return pllStatus;
}
static void EnablePlldigRdivMfiMfnSdmen(Clock_Ip_PllConfigType const* config)
{
    uint32 instance = clockFeatures[config->name][CLOCK_MODULE_INSTANCE];

    /* Configure PLL. */
    if (config->enable)
    {
        /* Send command to enable PLL device. */
        pll[instance]->PLLCR &= ~PLLDIG_PLLCR_PLLPD_MASK;
    }
}
#endif

#ifdef SPLL_ENABLE
static void ResetSpll_TrustedCall(Clock_Ip_PllConfigType const* config)
{
    (void)config;

    /* Power down PLL */
    
    /* Clear LK bit field */
    IP_SCG->SPLLCSR &= (~((uint32)SCG_SPLLCSR_LK_MASK));

    /* Disable clock */
    IP_SCG->SPLLCSR &= (~((uint32)SCG_SPLLCSR_SPLLEN_MASK));
    
    /* Reset PLL configuration. */
    #if (defined (CLOCK_IP_S32K142W) || defined(CLOCK_IP_S32K144W))
    IP_SCG->SPLLCFG &= (~((uint32)SCG_SPLLCFG_SOURCE_MASK));
    #endif
    IP_SCG->SPLLCFG &= (~((uint32)SCG_SPLLCFG_PREDIV_MASK));
    IP_SCG->SPLLCFG &= (~((uint32)SCG_SPLLCFG_MULT_MASK));
}
static void ResetSpll(Clock_Ip_PllConfigType const* config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(ResetSpll_TrustedCall,(config));
  #else
    ResetSpll_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
static void SetSpll_TrustedCall(Clock_Ip_PllConfigType const* config)
{
    /* Configure SPLL. */
    if (config->enable == 1U)
    {    
        #if (defined (CLOCK_IP_S32K142W) || defined(CLOCK_IP_S32K144W))
        /* Select input reference. */
        if (config->inputReference == SOSC_CLK)
        {
            IP_SCG->SPLLCFG |= SCG_SPLLCFG_SOURCE(0UL);
        }
        else
        {
            IP_SCG->SPLLCFG |= SCG_SPLLCFG_SOURCE(1UL);
        }
        #endif
        
        /* Set PLL configuration. */
        IP_SCG->SPLLCFG |= SCG_SPLLCFG_PREDIV((uint32)(config->predivider) - 1U)  |
                        SCG_SPLLCFG_MULT((uint32)(config->mulFactorDiv) - 16U);

        /* Enable clock, configure monitor, lock register. */
        switch (config->monitor)
        {
#ifdef FEATURE_CLOCK_IP_HAS_MONITOR_DISABLE
            case FEATURE_CLOCK_IP_HAS_MONITOR_DISABLE:
            {
                IP_SCG->SPLLCSR = SCG_SPLLCSR_SPLLCM(0UL) |
                               SCG_SPLLCSR_SPLLCMRE(0UL);
            }
            break;
#endif
#ifdef FEATURE_CLOCK_IP_HAS_MONITOR_INT
            case FEATURE_CLOCK_IP_HAS_MONITOR_INT:
            {
                IP_SCG->SPLLCSR = SCG_SPLLCSR_SPLLCM(1UL) |
                               SCG_SPLLCSR_SPLLCMRE(0UL);
            }
            break;
#endif
#ifdef FEATURE_CLOCK_IP_HAS_MONITOR_RESET
            case FEATURE_CLOCK_IP_HAS_MONITOR_RESET:
            {
                IP_SCG->SPLLCSR = SCG_SPLLCSR_SPLLCM(1UL) |
                               SCG_SPLLCSR_SPLLCMRE(1UL);
            }
            break;
#endif
            default:
                /* Invalid monitor mode */
                CLOCK_DEV_ASSERT(FALSE);
                break;
        }
    }
}
static void SetSpll(Clock_Ip_PllConfigType const* config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(SetSpll_TrustedCall,(config));
  #else
    SetSpll_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
static clock_pll_status_t CompleteSpll(Clock_Ip_NameType pllName)
{
    clock_pll_status_t pllStatus = STATUS_PLL_UNLOCKED;
    boolean TimeoutOccurred = FALSE;
    uint32 StartTime;
    uint32 ElapsedTime;
    uint32 TimeoutTicks;
    uint32 SPLLStatus;


    /* Configure SPLL. */    
    if ((IP_SCG->SPLLCSR & SCG_SPLLCSR_SPLLEN_MASK) != 0U)
    {
        ClockStartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_TIMEOUT_VALUE_US);
        /* Wait until pll is locked */
        do
        {
            SPLLStatus = (((IP_SCG->SPLLCSR & SCG_SPLLCSR_SPLLVLD_MASK) >> SCG_SPLLCSR_SPLLVLD_SHIFT));
            TimeoutOccurred = ClockTimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
        }
        while ((SPLLStatus == 0U) && (FALSE == TimeoutOccurred));

        if (FALSE == TimeoutOccurred)
        {
            pllStatus = STATUS_PLL_LOCKED;
        }
        else
        {
            /* Report timeout error */
            ReportClockErrors(CLOCK_IP_REPORT_TIMEOUT_ERROR, pllName);
        }
    }
    else
    {
        pllStatus = STATUS_PLL_NOT_ENABLED;
    }
    return pllStatus;
}
static void DisableSpll_TrustedCall(Clock_Ip_NameType PllName)
{
    (void)PllName;

    /* Power down PLL */

    /* Clear LK bit field */
    IP_SCG->SPLLCSR &= (~((uint32)SCG_SPLLCSR_LK_MASK));

    /* Disable clock */
    IP_SCG->SPLLCSR &= (~((uint32)SCG_SPLLCSR_SPLLEN_MASK));
}
static void DisableSpll(Clock_Ip_NameType PllName)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(DisableSpll_TrustedCall,(PllName));
  #else
    DisableSpll_TrustedCall(PllName);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
static void EnableSpll_TrustedCall(Clock_Ip_PllConfigType const* config)
{
    /* Configure SPLL. */
    if (config->enable == 1U)
    {
        /* Enable SPLL */
        IP_SCG->SPLLCSR |= SCG_SPLLCSR_SPLLEN(1UL);
    }
}
static void EnableSpll(Clock_Ip_PllConfigType const* config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(EnableSpll_TrustedCall,(config));
  #else
    EnableSpll_TrustedCall(config);
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

