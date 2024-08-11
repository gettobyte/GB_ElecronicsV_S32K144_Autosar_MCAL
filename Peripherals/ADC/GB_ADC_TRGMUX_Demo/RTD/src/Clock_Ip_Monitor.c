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
*   @file       Clock_Ip_Monitor.c
*   @version    1.0.0
*
*   @brief   CLOCK driver implementations.
*   @details CLOCK driver implementations.
*
*   @addtogroup CLOCK_DRIVER Clock Ip Driver
*   @{
*/




#include "Clock_Ip_Private.h"
#include "SchM_Mcu.h"

/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CLOCK_IP_MONITOR_VENDOR_ID_C                      43
#define CLOCK_IP_MONITOR_AR_RELEASE_MAJOR_VERSION_C       4
#define CLOCK_IP_MONITOR_AR_RELEASE_MINOR_VERSION_C       4
#define CLOCK_IP_MONITOR_AR_RELEASE_REVISION_VERSION_C    0
#define CLOCK_IP_MONITOR_SW_MAJOR_VERSION_C               1
#define CLOCK_IP_MONITOR_SW_MINOR_VERSION_C               0
#define CLOCK_IP_MONITOR_SW_PATCH_VERSION_C               0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Clock_Ip_Monitor.c file and Clock_Ip_Private.h file are of the same vendor */
#if (CLOCK_IP_MONITOR_VENDOR_ID_C != CLOCK_IP_PRIVATE_VENDOR_ID)
    #error "Clock_Ip_IntOsc.c and Clock_Ip_Private.h have different vendor ids"
#endif

/* Check if Clock_Ip_Monitor.c file and Clock_Ip_Private.h file are of the same Autosar version */
#if ((CLOCK_IP_MONITOR_AR_RELEASE_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MAJOR_VERSION) || \
     (CLOCK_IP_MONITOR_AR_RELEASE_MINOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MINOR_VERSION) || \
     (CLOCK_IP_MONITOR_AR_RELEASE_REVISION_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Clock_Ip_Monitor.c and Clock_Ip_Private.h are different"
#endif

/* Check if Clock_Ip_Monitor.c file and Clock_Ip_Private.h file are of the same Software version */
#if ((CLOCK_IP_MONITOR_SW_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MAJOR_VERSION) || \
     (CLOCK_IP_MONITOR_SW_MINOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MINOR_VERSION) || \
     (CLOCK_IP_MONITOR_SW_PATCH_VERSION_C != CLOCK_IP_PRIVATE_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Clock_Ip_Monitor.c and Clock_Ip_Private.h are different"
#endif
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if Clock_Ip_Monitor.c file and SchM_Mcu.h file are of the same Autosar version */
#if ((CLOCK_IP_MONITOR_AR_RELEASE_MAJOR_VERSION_C != SCHM_MCU_AR_RELEASE_MAJOR_VERSION) || \
     (CLOCK_IP_MONITOR_AR_RELEASE_MINOR_VERSION_C != SCHM_MCU_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Clock_Ip_Monitor.c and SchM_Mcu.h are different"
#endif
#endif

/*==================================================================================================
                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/
#ifdef CMU_FC_FCE_REF_CNT_LFREF_HFREF
#define CMU_REFERENCE_COUNTER_MINIMUM_VALUE_MULTIPLIER 10U
#define CMU_FC_VAR                                     3U
#define CMU_REFERENCE_CLOCK_VARIATION                  33U
#define CMU_MONITORED_CLOCK_VARIATION                  11U
#define DIVIDE_BY_1000000                              1000000U
#define DIVIDE_BY_100000                               100000U
#define DIVIDE_BY_1000                                 1000U

#if defined(FEATURE_OFFSET_REFERENCE_COUNT_FORMULA1)
    #define OFFSET_REFERENCE_COUNT_FORMULA1 FEATURE_OFFSET_REFERENCE_COUNT_FORMULA1
#else
    #define OFFSET_REFERENCE_COUNT_FORMULA1 1U
#endif

#if defined(FEATURE_MULTIPLIER_REFERENCE_COUNT_FORMULA1)
    #define MULTIPLIER_REFERENCE_COUNT_FORMULA1 FEATURE_MULTIPLIER_REFERENCE_COUNT_FORMULA1 
#else
    #define MULTIPLIER_REFERENCE_COUNT_FORMULA1 3U
#endif

#if defined(FEATURE_OFFSET_REFERENCE_COUNT_FORMULA2)
    #define OFFSET_REFERENCE_COUNT_FORMULA2 FEATURE_OFFSET_REFERENCE_COUNT_FORMULA2
#else
    #define OFFSET_REFERENCE_COUNT_FORMULA2 9U
#endif

#if defined(FEATURE_MULTIPLIER_REFERENCE_COUNT_FORMULA2)
    #define MULTIPLIER_REFERENCE_COUNT_FORMULA2 FEATURE_MULTIPLIER_REFERENCE_COUNT_FORMULA2 
#else
    #define MULTIPLIER_REFERENCE_COUNT_FORMULA2 5U
#endif

#endif

/*==================================================================================================
                                       LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/


/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/

/* Clock start section code */
#define MCU_START_SEC_CODE

#include "Mcu_MemMap.h"

/*  TODO ARTD-738  Implement CMU in Clock_Ip driver    */

static void ClockMonitorEmpty(Clock_Ip_CmuConfigType const* config);
static void ClockMonitorEmpty_Disable(Clock_Ip_NameType name);
static void ClockMonitorEmpty_ClearStatus(Clock_Ip_NameType name);
static Clock_Ip_CmuStatusType ClockMonitorEmpty_GetStatus(Clock_Ip_NameType name);

#ifdef CMU_FC_FCE_REF_CNT_LFREF_HFREF
static void ResetCmuFcFceRefCntLfrefHfref(Clock_Ip_CmuConfigType const* config);
static void SetCmuFcFceRefCntLfrefHfref(Clock_Ip_CmuConfigType const* config);
static void DisableCmuFcFceRefCntLfrefHfref(Clock_Ip_NameType name);
static void ClearStatusCmuFcFceRefCntLfrefHfref(Clock_Ip_NameType name);
static Clock_Ip_CmuStatusType GetStatusCmuFcFceRefCntLfrefHfref(Clock_Ip_NameType name);
static void EnableCmuFcFceRefCntLfrefHfref(Clock_Ip_CmuConfigType const* config);
#endif

/* Clock stop section code */
#define MCU_STOP_SEC_CODE

#include "Mcu_MemMap.h"

/* Clock start constant section data */
#define MCU_START_SEC_CONST_UNSPECIFIED

#include "Mcu_MemMap.h"

const clockMonitorCallback cmuCallbacks[CMU_CALLBACKS_COUNT] =
{
    {
        ClockMonitorEmpty,                /* Reset */
        ClockMonitorEmpty,                /* Set */
        ClockMonitorEmpty_Disable,        /* Disable */
        ClockMonitorEmpty_ClearStatus,    /* Clear */
        ClockMonitorEmpty_GetStatus,      /* Get status */
        ClockMonitorEmpty,                /* Enable */
    },
#ifdef CMU_FC_FCE_REF_CNT_LFREF_HFREF
    {
        ResetCmuFcFceRefCntLfrefHfref,          /* Reset */
        SetCmuFcFceRefCntLfrefHfref,            /* Set */
        DisableCmuFcFceRefCntLfrefHfref,        /* Disable */
        ClearStatusCmuFcFceRefCntLfrefHfref,    /* Clear */
        GetStatusCmuFcFceRefCntLfrefHfref,      /* Get status */
        EnableCmuFcFceRefCntLfrefHfref,         /* Enable */
    },
#endif
};

/* Clock stop constant section data */
#define MCU_STOP_SEC_CONST_UNSPECIFIED

#include "Mcu_MemMap.h"


/* Clock start section code */
#define MCU_START_SEC_CODE

#include "Mcu_MemMap.h"

static void ClockMonitorEmpty(Clock_Ip_CmuConfigType const* config)
{
    (void)config;
    /* No implementation */
}

static void ClockMonitorEmpty_Disable(Clock_Ip_NameType name)
{
    (void)name;
    /* No implementation */
}

static void ClockMonitorEmpty_ClearStatus(Clock_Ip_NameType name)
{
    (void)name;
    /* No implementation */
}

static Clock_Ip_CmuStatusType ClockMonitorEmpty_GetStatus(Clock_Ip_NameType name)
{
    (void)name;
    /* No implementation */
    return CLOCK_IP_CMU_STATUS_UNDEFINED;
}


#ifdef CMU_FC_FCE_REF_CNT_LFREF_HFREF
static void DisableCmuFcFceRefCntLfrefHfref(Clock_Ip_NameType name)
{
    const cmuInfoType * cmuInformation = &cmuInfo[clockFeatures[name][CMU_INDEX]];
    volatile ClockMonitor_Type* const cmu_fc    = cmuInformation->cmuInstance;

    boolean TimeoutOccurred = FALSE;
    uint32 StartTime;
    uint32 ElapsedTime;
    uint32 TimeoutTicks;
    uint32 FrequencyCheckStatus;

#if defined(S32K3XX)
    /* Check clock status for CMU */
    if (((IP_MC_ME->PRTN1_COFB1_STAT & MC_ME_PRTN1_COFB1_STAT_BLOCK47_MASK) == 0U))
    {
        /* Enable clock for CMU device */
        IP_MC_ME->PRTN1_COFB1_CLKEN |= MC_ME_PRTN1_COFB1_CLKEN_REQ47(1U);   /* REQ47: Clock monitor unit */
        IP_MC_ME->PRTN1_PCONF       |= MC_ME_PRTN1_PCONF_PCE_MASK;          /* PCE=1: Enable the clock to Partition #1 */
        IP_MC_ME->PRTN1_PUPD        |= MC_ME_PRTN1_PUPD_PCUD_MASK;          /* PCUD=1: Trigger the hardware process */
        McMeEnterKey();
        /* Wait until CMU clock is running */
        ClockStartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_TIMEOUT_VALUE_US);
        do
        {
            TimeoutOccurred = ClockTimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
        }
        while(((IP_MC_ME->PRTN1_COFB1_STAT & MC_ME_PRTN1_COFB1_STAT_BLOCK47_MASK) == 0U) && (FALSE == TimeoutOccurred));
        /* timeout notification */
        if (TRUE == TimeoutOccurred)
        {
            /* Report timeout error */
            ReportClockErrors(CLOCK_IP_REPORT_TIMEOUT_ERROR, RESERVED_CLK);
        }
    }
#endif

#if (defined (CLOCK_IP_S32K118) || defined(CLOCK_IP_S32K116))
    if(((IP_PCC->PCCn[62] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT) == 0U)
    {
        /* Enable clock gate for CMU0 device */
        IP_PCC->PCCn[62] |= PCC_PCCn_CGC_MASK;
    }
    if(((IP_PCC->PCCn[63] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT) == 0U)
    {
        /* Enable clock gate for CMU1 device */
        IP_PCC->PCCn[63] |= PCC_PCCn_CGC_MASK;
    }
#endif

    /* Enter critical region*/
    SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_01();
    /* Only disable frequency check if it is enabled */
    if ((cmu_fc->GCR & CMU_FC_GCR_FCE_MASK) == CMU_FREQUENCY_CHECK_ENABLED)
    {
        ClockStartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_TIMEOUT_VALUE_US);
        /* Wait for frequency check to be running. */
        do
        {
            FrequencyCheckStatus = (cmu_fc->SR & CMU_FC_SR_RS_MASK);
            TimeoutOccurred = ClockTimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
        }
        while((FrequencyCheckStatus == CMU_FREQUENCY_CHECK_STOPPED) && (!TimeoutOccurred));

        /* timeout notification */
        if (TimeoutOccurred)
        {
            /* Report timeout error */
            ReportClockErrors(CLOCK_IP_REPORT_TIMEOUT_ERROR, name);
        }
        else
        {
            /* Disable frequency check */
            cmu_fc->GCR &= ~CMU_FC_GCR_FCE_MASK;
        }
    }

    /* Disable interupts */
    cmu_fc->IER &= ~(CMU_FC_IER_FLLIE_MASK | CMU_FC_IER_FHHIE_MASK | CMU_FC_IER_FLLAIE_MASK | CMU_FC_IER_FHHAIE_MASK);

    /* Clear flags */
    cmu_fc->SR |= (CMU_FC_SR_FLL_MASK | CMU_FC_SR_FHH_MASK | CMU_FC_SR_RS_MASK);
    
    /* Exit critical region. */
    SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_01();
}

static void ResetCmuFcFceRefCntLfrefHfref(Clock_Ip_CmuConfigType const* config)
{
    DisableCmuFcFceRefCntLfrefHfref(config->name);
}

static void SetCmuFcFceRefCntLfrefHfref(Clock_Ip_CmuConfigType const* config)
{
    const cmuInfoType * cmuInformation = &cmuInfo[clockFeatures[config->name][CMU_INDEX]];
    volatile ClockMonitor_Type* const cmu_fc    = cmuInformation->cmuInstance;
    static uint32 hash[CMU_INFO_SIZE];

    uint32 fReferenceClk = 0U, fMonitoredClk = 0U, fBusClk = 0U;
    uint32 refCount = 0U, hfRef = 0U, lfRef = 0U;
    uint32 cmp1, cmp2;
    uint32 divideBy, dividerResult, moduloValue;
    
#if defined(S32K3XX)
    boolean TimeoutOccurred = FALSE;
    uint32 StartTime;
    uint32 ElapsedTime;
    uint32 TimeoutTicks;
    /* Check clock status for CMU */
    if (((IP_MC_ME->PRTN1_COFB1_STAT & MC_ME_PRTN1_COFB1_STAT_BLOCK47_MASK) == 0U))
    {
        /* Enable clock for CMU device */
        IP_MC_ME->PRTN1_COFB1_CLKEN |= MC_ME_PRTN1_COFB1_CLKEN_REQ47(1U);   /* REQ47: Clock monitor unit */
        IP_MC_ME->PRTN1_PCONF       |= MC_ME_PRTN1_PCONF_PCE_MASK;          /* PCE=1: Enable the clock to Partition #1 */
        IP_MC_ME->PRTN1_PUPD        |= MC_ME_PRTN1_PUPD_PCUD_MASK;          /* PCUD=1: Trigger the hardware process */
        McMeEnterKey();
        /* Wait until CMU clock is running */
        ClockStartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_TIMEOUT_VALUE_US);
        do
        {
            TimeoutOccurred = ClockTimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
        }
        while(((IP_MC_ME->PRTN1_COFB1_STAT & MC_ME_PRTN1_COFB1_STAT_BLOCK47_MASK) == 0U) && (FALSE == TimeoutOccurred));
        /* timeout notification */
        if (TRUE == TimeoutOccurred)
        {
            /* Report timeout error */
            ReportClockErrors(CLOCK_IP_REPORT_TIMEOUT_ERROR, RESERVED_CLK);
        }
    }
#endif

    /* Do not calculate cmu values if these values are already calculated and written in hw registers */
    if (hash[clockFeatures[config->name][CMU_INDEX]] != ((((uint32)config->enable) ^ ((uint32)config->interrupt) ^ ((uint32)config->monitoredClockFrequency)  ^ ((uint32)config->name))))
    {
        hash[clockFeatures[config->name][CMU_INDEX]] = ((((uint32)config->enable) ^ ((uint32)config->interrupt) ^ ((uint32)config->monitoredClockFrequency)  ^ ((uint32)config->name)));

        switch(cmuInformation->reference)
        {
    #if defined(FEATURE_CLOCK_IP_HAS_FIRC_CLK)
            case FIRC_CLK:
            {
                fReferenceClk = GetConfiguredFrequencyValue(FIRC_CLK) / DIVIDE_BY_1000;
                break;
            }
    #endif
    #if defined(FEATURE_CLOCK_IP_HAS_FXOSC_CLK)
            case FXOSC_CLK:
            {
                fReferenceClk = GetConfiguredFrequencyValue(FXOSC_CLK) / DIVIDE_BY_1000;
                break;
            }
    #endif
    #if defined(FEATURE_CLOCK_IP_HAS_SIRC_CLK)
            case SIRC_CLK:
            {
                fReferenceClk = GetConfiguredFrequencyValue(SIRC_CLK) / DIVIDE_BY_1000;
                break;
            }
    #endif
            default:
                fReferenceClk = 0U;
                break;
        }

        fMonitoredClk = config->monitoredClockFrequency / DIVIDE_BY_1000;

        switch(cmuInformation->bus)
        {
    #if defined(FEATURE_CLOCK_IP_HAS_XBAR_DIV3_CLK)
            case XBAR_DIV3_CLK:
            {
                fBusClk = GetConfiguredFrequencyValue(XBAR_DIV3_CLK) / DIVIDE_BY_1000;
                break;
            }
    #endif
    #if defined(FEATURE_CLOCK_IP_HAS_AIPS_SLOW_CLK)
            case AIPS_SLOW_CLK:
            {
                fBusClk = GetConfiguredFrequencyValue(AIPS_SLOW_CLK) / DIVIDE_BY_1000;
                break;
            }
    #endif
    #if defined(FEATURE_CLOCK_IP_HAS_BUS_CLK)
            case BUS_CLK:
            {
                if((IP_SMC->PMSTAT & SMC_PMSTAT_PMSTAT_MASK) == 1U)
                {
                    fBusClk = GetConfiguredFrequencyValue(BUS_RUN_CLK) / DIVIDE_BY_1000;
                }
                else
                {
                    fBusClk = GetConfiguredFrequencyValue(BUS_VLPR_CLK) / DIVIDE_BY_1000;
                }
                break;
            }
    #endif
            default:
                fBusClk = 0U;
                break;
        }

#if (defined(CLOCK_IP_DEV_ERROR_DETECT) && (CLOCK_IP_DEV_ERROR_DETECT == STD_ON))
        CLOCK_DEV_ASSERT(fReferenceClk != 0U);
        CLOCK_DEV_ASSERT(fBusClk != 0U);
        CLOCK_DEV_ASSERT(fMonitoredClk != 0U);
#endif
        /* Avoid divide by zero */ 
        if ((fReferenceClk != 0U) && (fBusClk != 0U) && (fMonitoredClk != 0U))
        {
            /* cmp1 = ceiling of (3 * fRef/ fBus) */
            cmp1 = OFFSET_REFERENCE_COUNT_FORMULA1 + (uint32)((MULTIPLIER_REFERENCE_COUNT_FORMULA1 * fReferenceClk) / fBusClk);
            /* cmp2 = ceiling of (8 + (5 * fRef / fMonitor)) */
            cmp2 = OFFSET_REFERENCE_COUNT_FORMULA2 + (uint32)((MULTIPLIER_REFERENCE_COUNT_FORMULA2 * fReferenceClk) / fMonitoredClk);

            /* REF count = Max(cmp1,cmp2) */
            refCount = (cmp1 > cmp2) ? cmp1 : cmp2;
        

            /* (fMonitoredClk mul_by (1000U plus CMU_MONITORED_CLOCK_VARIATION)) divide_by (fReferenceClk mul_by (1000U minus CMU_REFERENCE_CLOCK_VARIATION)) plus CMU_FC_VAR plus 1U */
            hfRef = fMonitoredClk * (1000U + CMU_MONITORED_CLOCK_VARIATION) * refCount;
            divideBy = fReferenceClk * (1000U - CMU_REFERENCE_CLOCK_VARIATION);
            dividerResult = (uint32) hfRef / divideBy;
            moduloValue = hfRef - (divideBy * dividerResult);
            hfRef = (dividerResult * CMU_REFERENCE_COUNTER_MINIMUM_VALUE_MULTIPLIER) + ((uint32)((moduloValue * CMU_REFERENCE_COUNTER_MINIMUM_VALUE_MULTIPLIER) / divideBy)) + (CMU_FC_VAR + 1U); 

            /* (fMonitoredClk mul_by (1000U minus CMU_MONITORED_CLOCK_VARIATION)) divide_by (fReferenceClk mul_by (1000U plus CMU_REFERENCE_CLOCK_VARIATION)) minus CMU_FC_VAR */
            lfRef = fMonitoredClk * (1000U - CMU_MONITORED_CLOCK_VARIATION) * refCount;
            divideBy = fReferenceClk * (1000U + CMU_REFERENCE_CLOCK_VARIATION);
            dividerResult = (uint32) lfRef / divideBy;
            moduloValue = lfRef - (divideBy * dividerResult);
            lfRef = (dividerResult * CMU_REFERENCE_COUNTER_MINIMUM_VALUE_MULTIPLIER) + ((uint32)((moduloValue * CMU_REFERENCE_COUNTER_MINIMUM_VALUE_MULTIPLIER) / divideBy)) - CMU_FC_VAR; 


            /* Set reference counter */
            cmu_fc->RCCR = refCount * CMU_REFERENCE_COUNTER_MINIMUM_VALUE_MULTIPLIER;

            /* Set high limit */
            cmu_fc->HTCR = hfRef;

            /* Set low limit */
            cmu_fc->LTCR = lfRef;
        }
    }
    
    /* Enable/disable interrupts */
    cmu_fc->IER = config->interrupt;
}

static void ClearStatusCmuFcFceRefCntLfrefHfref(Clock_Ip_NameType name)
{
    const cmuInfoType * cmuInformation = &cmuInfo[clockFeatures[name][CMU_INDEX]];
    volatile ClockMonitor_Type* const cmu_fc    = cmuInformation->cmuInstance;

    uint32 cmuIsrValue;

#if defined(S32K3XX)
    boolean TimeoutOccurred = FALSE;
    uint32 StartTime;
    uint32 ElapsedTime;
    uint32 TimeoutTicks;
    /* Check clock status for CMU */
    if (((IP_MC_ME->PRTN1_COFB1_STAT & MC_ME_PRTN1_COFB1_STAT_BLOCK47_MASK) == 0U))
    {
        /* Enable clock for CMU device */
        IP_MC_ME->PRTN1_COFB1_CLKEN |= MC_ME_PRTN1_COFB1_CLKEN_REQ47(1U);   /* REQ47: Clock monitor unit */
        IP_MC_ME->PRTN1_PCONF       |= MC_ME_PRTN1_PCONF_PCE_MASK;          /* PCE=1: Enable the clock to Partition #1 */
        IP_MC_ME->PRTN1_PUPD        |= MC_ME_PRTN1_PUPD_PCUD_MASK;          /* PCUD=1: Trigger the hardware process */
        McMeEnterKey();
        /* Wait until CMU clock is running */
        ClockStartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_TIMEOUT_VALUE_US);
        do
        {
            TimeoutOccurred = ClockTimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
        }
        while(((IP_MC_ME->PRTN1_COFB1_STAT & MC_ME_PRTN1_COFB1_STAT_BLOCK47_MASK) == 0U) && (FALSE == TimeoutOccurred));
        /* timeout notification */
        if (TRUE == TimeoutOccurred)
        {
            /* Report timeout error */
            ReportClockErrors(CLOCK_IP_REPORT_TIMEOUT_ERROR, RESERVED_CLK);
        }
    }
#endif

    /* Read flags */
    cmuIsrValue = cmu_fc->SR & CMU_ISR_MASK;

    /* Clear flags */
    cmu_fc->SR = cmuIsrValue;
}

static Clock_Ip_CmuStatusType GetStatusCmuFcFceRefCntLfrefHfref(Clock_Ip_NameType name)
{
    const cmuInfoType * cmuInformation = &cmuInfo[clockFeatures[name][CMU_INDEX]];
    volatile const ClockMonitor_Type* cmu_fc    = cmuInformation->cmuInstance;

    Clock_Ip_CmuStatusType status   = CLOCK_IP_CMU_STATUS_UNDEFINED;
    uint32 cmuIerValue, cmuIsrValue;

#if defined(S32K3XX)
    boolean TimeoutOccurred = FALSE;
    uint32 StartTime;
    uint32 ElapsedTime;
    uint32 TimeoutTicks;
    /* Check clock status for CMU */
    if (((IP_MC_ME->PRTN1_COFB1_STAT & MC_ME_PRTN1_COFB1_STAT_BLOCK47_MASK) == 0U))
    {
        /* Enable clock for CMU device */
        IP_MC_ME->PRTN1_COFB1_CLKEN |= MC_ME_PRTN1_COFB1_CLKEN_REQ47(1U);   /* REQ47: Clock monitor unit */
        IP_MC_ME->PRTN1_PCONF       |= MC_ME_PRTN1_PCONF_PCE_MASK;          /* PCE=1: Enable the clock to Partition #1 */
        IP_MC_ME->PRTN1_PUPD        |= MC_ME_PRTN1_PUPD_PCUD_MASK;          /* PCUD=1: Trigger the hardware process */
        McMeEnterKey();
        /* Wait until CMU clock is running */
        ClockStartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_TIMEOUT_VALUE_US);
        do
        {
            TimeoutOccurred = ClockTimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
        }
        while(((IP_MC_ME->PRTN1_COFB1_STAT & MC_ME_PRTN1_COFB1_STAT_BLOCK47_MASK) == 0U) && (FALSE == TimeoutOccurred));
        /* timeout notification */
        if (TRUE == TimeoutOccurred)
        {
            /* Report timeout error */
            ReportClockErrors(CLOCK_IP_REPORT_TIMEOUT_ERROR, RESERVED_CLK);
        }
    }
#endif

    /* Read flags */
    cmuIsrValue = cmu_fc->SR & CMU_ISR_MASK;

    /* Read interrupt enable */
    cmuIerValue = cmu_fc->IER & CMU_ISR_MASK;

    cmuIsrValue = cmuIsrValue & cmuIerValue;


    /* Gheck flash if frequency check is enabled */
    if ((cmu_fc->GCR & CMU_FC_GCR_FCE_MASK) == CMU_FREQUENCY_CHECK_ENABLED)
    {
        if ( ( CMU_FC_SR_FHH_MASK == (cmuIsrValue & CMU_FC_SR_FHH_MASK) ) )
        {
            status = CLOCK_IP_CMU_HIGH_FREQ;
        }
        else if ( CMU_FC_SR_FLL_MASK == (cmuIsrValue & CMU_FC_SR_FLL_MASK) )
        {
            status = CLOCK_IP_CMU_LOW_FREQ;
        }
        else
        {
            status = CLOCK_IP_CMU_IN_RANGE;
        }
    }

    return status;

}
static void EnableCmuFcFceRefCntLfrefHfref(Clock_Ip_CmuConfigType const* config)
{
    const cmuInfoType *cmuInformation  = &cmuInfo[clockFeatures[config->name][CMU_INDEX]];
    volatile ClockMonitor_Type* const cmu_fc    = cmuInformation->cmuInstance;

#if defined(S32K3XX)
    boolean TimeoutOccurred = FALSE;
    uint32 StartTime;
    uint32 ElapsedTime;
    uint32 TimeoutTicks;
    /* Check clock status for CMU */
    if (((IP_MC_ME->PRTN1_COFB1_STAT & MC_ME_PRTN1_COFB1_STAT_BLOCK47_MASK) == 0U))
    {
        /* Enable clock for CMU device */
        IP_MC_ME->PRTN1_COFB1_CLKEN |= MC_ME_PRTN1_COFB1_CLKEN_REQ47(1U);   /* REQ47: Clock monitor unit */
        IP_MC_ME->PRTN1_PCONF       |= MC_ME_PRTN1_PCONF_PCE_MASK;          /* PCE=1: Enable the clock to Partition #1 */
        IP_MC_ME->PRTN1_PUPD        |= MC_ME_PRTN1_PUPD_PCUD_MASK;          /* PCUD=1: Trigger the hardware process */
        McMeEnterKey();
        /* Wait until CMU clock is running */
        ClockStartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_TIMEOUT_VALUE_US);
        do
        {
            TimeoutOccurred = ClockTimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
        }
        while(((IP_MC_ME->PRTN1_COFB1_STAT & MC_ME_PRTN1_COFB1_STAT_BLOCK47_MASK) == 0U) && (FALSE == TimeoutOccurred));
        /* timeout notification */
        if (TRUE == TimeoutOccurred)
        {
            /* Report timeout error */
            ReportClockErrors(CLOCK_IP_REPORT_TIMEOUT_ERROR, RESERVED_CLK);
        }
    }
#endif

    /* Enable cmu */
    if (config->enable != 0U)
    {
        cmu_fc->GCR |= CMU_FC_GCR_FCE_MASK;
    }
    else
    {
        cmu_fc->GCR &= ~CMU_FC_GCR_FCE_MASK;
    }
}

#endif

#if CMU_INSTANCES_ARRAY_SIZE > 0U

uint32 Mcu_CMU_GetInterruptStatus(uint8 u8IndexCmu)
{
    uint32 cmuIsrValue;

    /* Read flags */
    cmuIsrValue = cmu[u8IndexCmu]->SR & CMU_ISR_MASK;
    return cmuIsrValue;
}

/**
* @brief        This function clear the CMU interrupt flag from CMU module.
* @details      Called by RGM ISR routine when a user notification for CMU FCCU events is configured
*
* @return       void
*
* @implements Mcu_CMU_ClockFailInt_Activity
*
*/
void Mcu_CMU_ClockFailInt(void)
{
    uint32 cmuIerValue, cmuIsrValue, indexCmu;

    for (indexCmu = 0U; indexCmu < CMU_INSTANCES_ARRAY_SIZE; indexCmu++)
    {
        /* Read flags */
        cmuIsrValue = cmu[indexCmu]->SR & CMU_ISR_MASK;

        /* Clear status flag */
        cmu[indexCmu]->SR = cmuIsrValue;

        /* Check whether driver is initialized */
        if(NULL_PTR != clockConfig)
        {
            /* Read interrupt enable */
            cmuIerValue = cmu[indexCmu]->IER & CMU_ISR_MASK;

            /* Filter all interrupts that are not enabled from cmuIsrValue */
            cmuIsrValue = cmuIsrValue & cmuIerValue;

            /* If at least one interrupt has been triggered */
            if (cmuIsrValue != 0U)
            {
                ReportClockErrors(CLOCK_IP_CMU_NOTIFICATION, cmuNames[indexCmu]);
            }
        }
    }

}
#endif

/* Clock stop section code */
#define MCU_STOP_SEC_CODE

#include "Mcu_MemMap.h"

/*! @}*/

/*******************************************************************************
 * EOF
 ******************************************************************************/

