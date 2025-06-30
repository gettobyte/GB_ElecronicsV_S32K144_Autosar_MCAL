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
*   @file       Clock_Ip_Divider.c
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
#define CLOCK_IP_DIVIDER_VENDOR_ID_C                      43
#define CLOCK_IP_DIVIDER_AR_RELEASE_MAJOR_VERSION_C       4
#define CLOCK_IP_DIVIDER_AR_RELEASE_MINOR_VERSION_C       4
#define CLOCK_IP_DIVIDER_AR_RELEASE_REVISION_VERSION_C    0
#define CLOCK_IP_DIVIDER_SW_MAJOR_VERSION_C               1
#define CLOCK_IP_DIVIDER_SW_MINOR_VERSION_C               0
#define CLOCK_IP_DIVIDER_SW_PATCH_VERSION_C               0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Clock_Ip_Divider.c file and Clock_Ip_Private.h file are of the same vendor */
#if (CLOCK_IP_DIVIDER_VENDOR_ID_C != CLOCK_IP_PRIVATE_VENDOR_ID)
    #error "Clock_Ip_Divider.c and Clock_Ip_Private.h have different vendor ids"
#endif

/* Check if Clock_Ip_Divider.c file and Clock_Ip_Private.h file are of the same Autosar version */
#if ((CLOCK_IP_DIVIDER_AR_RELEASE_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MAJOR_VERSION) || \
     (CLOCK_IP_DIVIDER_AR_RELEASE_MINOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MINOR_VERSION) || \
     (CLOCK_IP_DIVIDER_AR_RELEASE_REVISION_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Clock_Ip_Divider.c and Clock_Ip_Private.h are different"
#endif

/* Check if Clock_Ip_Divider.c file and Clock_Ip_Private.h file are of the same Software version */
#if ((CLOCK_IP_DIVIDER_SW_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MAJOR_VERSION) || \
     (CLOCK_IP_DIVIDER_SW_MINOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MINOR_VERSION) || \
     (CLOCK_IP_DIVIDER_SW_PATCH_VERSION_C != CLOCK_IP_PRIVATE_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Clock_Ip_Divider.c and Clock_Ip_Private.h are different"
#endif

/* Clock start section code */
#define MCU_START_SEC_CODE

#include "Mcu_MemMap.h"


static void Callback_DividerEmpty(Clock_Ip_DividerConfigType const* config);
#ifdef CGM_X_DE_DIV_STAT_WITHOUT_PHASE
static void SetCgmXDeDivStatWithoutPhase(Clock_Ip_DividerConfigType const* config);
#endif
#ifdef CGM_X_DE_DIV_WITHOUT_PHASE
static void SetCgmXDeDivWithoutPhase(Clock_Ip_DividerConfigType const* config);
#endif
#ifdef CGM_X_DE_DIV_STAT_WITH_PHASE
static void SetCgmXDeDivStatWithPhase(Clock_Ip_DividerConfigType const* config);
#endif
#ifdef CGM_X_DE_DIV_STAT_WITHOUT_PHASE_WITH_TRIGGER
static void SetCgmXDeDivStatWithoutPhaseWithTrigger(Clock_Ip_DividerConfigType const* config);
#endif
#ifdef CGM_X_DE_DIV_STAT_WITH_PHASE_WITH_TRIGGER
static void SetCgmXDeDivStatWithPhaseWithTrigger(Clock_Ip_DividerConfigType const* config);
#endif
#ifdef PLLDIG_PLL0DIV_DE_DIV_OUTPUT
static void SetPlldigPll0divDeDivOutput(Clock_Ip_DividerConfigType const* config);
#endif
#ifdef PLL_PLL0DIV_DE_DIV_OUTPUT
static void SetPllPll0divDeDivOutput(Clock_Ip_DividerConfigType const* config);
#endif
#ifdef PLL_PLLDV_ODIV2_OUTPUT
static void SetPllPlldvOdiv2Output(Clock_Ip_DividerConfigType const* config);
#endif
#ifdef SCG_ASYNC_DIV1
static void SetScgAsyncDiv1(Clock_Ip_DividerConfigType const* config);
#endif
#ifdef SCG_ASYNC_DIV2
static void SetScgAsyncDiv2(Clock_Ip_DividerConfigType const* config);
#endif
#ifdef SCG_DIVCORE_RUN
static void SetScgRunDivcore(Clock_Ip_DividerConfigType const* config);
#endif
#ifdef SCG_DIVBUS_RUN
static void SetScgRunDivbus(Clock_Ip_DividerConfigType const* config);
#endif
#ifdef SCG_DIVSLOW_RUN
static void SetScgRunDivslow(Clock_Ip_DividerConfigType const* config);
#endif
#ifdef SCG_DIVCORE_VLPR
static void SetScgVlprDivcore(Clock_Ip_DividerConfigType const* config);
#endif
#ifdef SCG_DIVBUS_VLPR
static void SetScgVlprDivbus(Clock_Ip_DividerConfigType const* config);
#endif
#ifdef SCG_DIVSLOW_VLPR
static void SetScgVlprDivslow(Clock_Ip_DividerConfigType const* config);
#endif
#ifdef SCG_DIVCORE_HSRUN
static void SetScgHsrunDivcore(Clock_Ip_DividerConfigType const* config);
#endif
#ifdef SCG_DIVBUS_HSRUN
static void SetScgHsrunDivbus(Clock_Ip_DividerConfigType const* config);
#endif
#ifdef SCG_DIVSLOW_HSRUN
static void SetScgHsrunDivslow(Clock_Ip_DividerConfigType const* config);
#endif

#ifdef SIM_CLKOUT_DIV
static void SetSimClkoutDiv(Clock_Ip_DividerConfigType const *config);
#endif

#ifdef PCC_PCD_FRAC
static void SetPccPcdDivFrac(Clock_Ip_DividerConfigType const* config);
#endif
#ifdef SIM_TRACE_DIV_MUL
static void SetSimTraceDivMul(Clock_Ip_DividerConfigType const* config);
#endif


/* Clock stop section code */
#define MCU_STOP_SEC_CODE

#include "Mcu_MemMap.h"

/* Clock start constant section data */
#define MCU_START_SEC_CONST_UNSPECIFIED

#include "Mcu_MemMap.h"

const dividerCallback dividerCallbacks[DIVIDER_CALLBACKS_COUNT] =
{
    {
        Callback_DividerEmpty,                  /* Set */
    },
#ifdef CGM_X_DE_DIV_STAT_WITHOUT_PHASE
    {
        SetCgmXDeDivStatWithoutPhase,           /* Set */
    },
#endif
#ifdef CGM_X_DE_DIV_WITHOUT_PHASE
    {
        SetCgmXDeDivWithoutPhase,               /* Set */
    },
#endif
#ifdef CGM_X_DE_DIV_STAT_WITH_PHASE
    {
        SetCgmXDeDivStatWithPhase,              /* Set */
    },
#endif
#ifdef CGM_X_DE_DIV_STAT_WITHOUT_PHASE_WITH_TRIGGER
    {
        SetCgmXDeDivStatWithoutPhaseWithTrigger,               /* Set */
    },
#endif
#ifdef CGM_X_DE_DIV_STAT_WITH_PHASE_WITH_TRIGGER
    {
        SetCgmXDeDivStatWithPhaseWithTrigger,              /* Set */
    },
#endif
#ifdef PLLDIG_PLL0DIV_DE_DIV_OUTPUT
    {
        SetPlldigPll0divDeDivOutput,            /* Set */
    },
#endif
#ifdef PLL_PLL0DIV_DE_DIV_OUTPUT
    {
        SetPllPll0divDeDivOutput,               /* Set */
    },
#endif
#ifdef PLL_PLLDV_ODIV2_OUTPUT
    {
        SetPllPlldvOdiv2Output,                /* Set */
    },
#endif
#ifdef SCG_ASYNC_DIV1
    {
        SetScgAsyncDiv1,                       /* Set */
    },
#endif
#ifdef SCG_ASYNC_DIV2
    {
        SetScgAsyncDiv2,                       /* Set */
    },
#endif
#ifdef SCG_DIVCORE_RUN
    {
        SetScgRunDivcore,                     /* Set */
    },
#endif
#ifdef SCG_DIVBUS_RUN
    {
        SetScgRunDivbus,                  /* Set */
    },
#endif
#ifdef SCG_DIVSLOW_RUN
    {
        SetScgRunDivslow,                 /* Set */
    },
#endif
#ifdef SCG_DIVCORE_VLPR
    {
        SetScgVlprDivcore,                     /* Set */
    },
#endif
#ifdef SCG_DIVBUS_VLPR
    {
        SetScgVlprDivbus,                  /* Set */
    },
#endif
#ifdef SCG_DIVSLOW_VLPR
    {
        SetScgVlprDivslow,                 /* Set */
    },
#endif
#ifdef SCG_DIVCORE_HSRUN
    {
        SetScgHsrunDivcore,                     /* Set */
    },
#endif
#ifdef SCG_DIVBUS_HSRUN
    {
        SetScgHsrunDivbus,                  /* Set */
    },
#endif
#ifdef SCG_DIVSLOW_HSRUN
    {
        SetScgHsrunDivslow,                 /* Set */
    },
#endif
#ifdef SIM_CLKOUT_DIV
    {
        SetSimClkoutDiv,                 /* Set */
    },
#endif
#ifdef PCC_PCD_FRAC
    {
        SetPccPcdDivFrac,                      /* Set */
    },
#endif
#ifdef SIM_TRACE_DIV_MUL
    {
        SetSimTraceDivMul,                    /* Set */
    },
#endif
};

/* Clock stop constant section data */
#define MCU_STOP_SEC_CONST_UNSPECIFIED

#include "Mcu_MemMap.h"

#define MCU_START_SEC_CODE
/* Clock start section code */

#include "Mcu_MemMap.h"

static void Callback_DividerEmpty(Clock_Ip_DividerConfigType const* config)
{
    (void)config;
    /* No implementation */
}

#ifdef CGM_X_DE_DIV_STAT_WITHOUT_PHASE
static void SetCgmXDeDivStatWithoutPhase(Clock_Ip_DividerConfigType const* config)
{
    uint32 instance      = clockFeatures[config->name][CLOCK_MODULE_INSTANCE];
    uint32 selectorIndex = clockFeatures[config->name][SELECTOR_INDEX];
    uint32 dividerIndex  = clockFeatures[config->name][DIVIDER_INDEX];

    uint32 DIVIDER_VALUE_MASK  = clockFeatureExtensions[clockFeatures[config->name][EXTENSION_INDEX]].DIVIDER_VALUE_MASK;
    uint32 DIVIDER_VALUE_SHIFT = clockFeatureExtensions[clockFeatures[config->name][EXTENSION_INDEX]].DIVIDER_VALUE_SHIFT;

    uint32 regValue;
    boolean TimeoutOccurred = FALSE;
    uint32 StartTime;
    uint32 ElapsedTime;
    uint32 TimeoutTicks;
    uint32 DividerStatus;

    /* Program divider value */
    if (config->value != 0U)  {
        regValue = cgm[instance][selectorIndex]->divider[dividerIndex];
        regValue &= ~DIVIDER_VALUE_MASK;
        regValue |= (((config->value-1U) << DIVIDER_VALUE_SHIFT) & DIVIDER_VALUE_MASK);
        cgm[instance][selectorIndex]->divider[dividerIndex] = regValue;
    }

    ClockStartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_TIMEOUT_VALUE_US);
    /* Wait for acknowledge to be cleared. */
    do
    {
        DividerStatus = (cgm[instance][selectorIndex]->MUX_DIV_UPD_STAT & MC_CGM_MUX_DIV_UPD_STAT_DIV_STAT_MASK);
        TimeoutOccurred = ClockTimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
    }
    while ((DividerStatus == MC_CGM_MUX_DIV_UPD_STAT_DIV_STAT_PENDING) && (FALSE == TimeoutOccurred));

    if (FALSE == TimeoutOccurred)
    {
        /* Enable or Disable the Clock Divider */
        if (config->value != 0U)
        {
            /* Enable divider */
            cgm[instance][selectorIndex]->divider[dividerIndex] |= MC_CGM_MUX_DC_DE_MASK;
        }
        else
        {
            cgm[instance][selectorIndex]->divider[dividerIndex] &= ~MC_CGM_MUX_DC_DE_MASK;
        }
    }
    else
    {
        /* Report timeout error */
        ReportClockErrors(CLOCK_IP_REPORT_TIMEOUT_ERROR, config->name);
    }
}
#endif


#ifdef CGM_X_DE_DIV_WITHOUT_PHASE
static void SetCgmXDeDivWithoutPhase(Clock_Ip_DividerConfigType const* config)
{


    uint32 instance      = clockFeatures[config->name][CLOCK_MODULE_INSTANCE];
    uint32 selectorIndex = clockFeatures[config->name][SELECTOR_INDEX];
    uint32 dividerIndex  = clockFeatures[config->name][DIVIDER_INDEX];

    uint32 DIVIDER_VALUE_MASK  = clockFeatureExtensions[clockFeatures[config->name][EXTENSION_INDEX]].DIVIDER_VALUE_MASK;
    uint32 DIVIDER_VALUE_SHIFT = clockFeatureExtensions[clockFeatures[config->name][EXTENSION_INDEX]].DIVIDER_VALUE_SHIFT;

    uint32 regValue;

    /* Program divider value */
    if (config->value != 0U)  {
        regValue = cgm[instance][selectorIndex]->divider[dividerIndex];
        regValue &= ~DIVIDER_VALUE_MASK;
        regValue |= ((config->value-1U) << DIVIDER_VALUE_SHIFT) & DIVIDER_VALUE_MASK;
        cgm[instance][selectorIndex]->divider[dividerIndex] = regValue;
    }

    /* Enable or Disable the Clock Divider */
    if (config->value != 0U)
    {
        /* Enable divider */
        cgm[instance][selectorIndex]->divider[dividerIndex] |= MC_CGM_MUX_DC_DE_MASK;
    }
    else
    {
        cgm[instance][selectorIndex]->divider[dividerIndex] &= ~MC_CGM_MUX_DC_DE_MASK;
    }
}
#endif


#ifdef CGM_X_DE_DIV_STAT_WITH_PHASE
static void SetCgmXDeDivStatWithPhase(Clock_Ip_DividerConfigType const* config)
{


    uint32 instance      = clockFeatures[config->name][CLOCK_MODULE_INSTANCE];
    uint32 selectorIndex = clockFeatures[config->name][SELECTOR_INDEX];
    uint32 dividerIndex  = clockFeatures[config->name][DIVIDER_INDEX];

    uint32 DIVIDER_VALUE_MASK  = clockFeatureExtensions[clockFeatures[config->name][EXTENSION_INDEX]].DIVIDER_VALUE_MASK;
    uint32 DIVIDER_VALUE_SHIFT = clockFeatureExtensions[clockFeatures[config->name][EXTENSION_INDEX]].DIVIDER_VALUE_SHIFT;

    uint32 regValue;
    boolean TimeoutOccurred = FALSE;
    uint32 StartTime;
    uint32 ElapsedTime;
    uint32 TimeoutTicks;
    uint32 DividerStatus;

    /* Program divider value */
    if (config->value != 0U)  {
        regValue = cgm[instance][selectorIndex]->divider[dividerIndex];
        regValue &= ~DIVIDER_VALUE_MASK;
        regValue |= ((config->value-1U) << DIVIDER_VALUE_SHIFT) & DIVIDER_VALUE_MASK;
        cgm[instance][selectorIndex]->divider[dividerIndex] = regValue;
    }

    ClockStartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_TIMEOUT_VALUE_US);
    /* Wait for acknowledge to be cleared. */
    do
    {
        DividerStatus = (cgm[instance][selectorIndex]->MUX_DIV_UPD_STAT & MC_CGM_MUX_DIV_UPD_STAT_DIV_STAT_MASK);
        TimeoutOccurred = ClockTimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
    }
    while ((DividerStatus == MC_CGM_MUX_DIV_UPD_STAT_DIV_STAT_PENDING) && (FALSE == TimeoutOccurred));

    if (FALSE == TimeoutOccurred)
    {
        /* Update phase value */

        /* Disable clock to update phase */
        cgm[instance][selectorIndex]->divider[dividerIndex] &= ~MC_CGM_MUX_DC_DE_MASK;

        ClockStartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_TIMEOUT_VALUE_US);
        /* Wait for the divider update to complete. */
        do
        {
            DividerStatus = (cgm[instance][selectorIndex]->MUX_DIV_UPD_STAT & MC_CGM_MUX_DIV_UPD_STAT_DIV_STAT_MASK);
            TimeoutOccurred = ClockTimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
        }
        while ((DividerStatus == MC_CGM_MUX_DIV_UPD_STAT_DIV_STAT_PENDING) && (FALSE == TimeoutOccurred));

        if (FALSE == TimeoutOccurred)
        {
            /* We should now wait for at least one division cycle as per the existing programmed DIV value. */
            /* However, a register write sequence operation will take MUCH longer than one division cycle. */
            /* Therefore, there is no need to perform an explicit wait. */
            regValue = cgm[instance][selectorIndex]->divider[dividerIndex];
            regValue &= ~MC_CGM_MUX_DC_PHASE_MASK;
            regValue |= MC_CGM_MUX_DC_PHASE(config->options[0U]);
            cgm[instance][selectorIndex]->divider[dividerIndex] = regValue;
        }
        else
        {
            /* Report timeout error */
            ReportClockErrors(CLOCK_IP_REPORT_TIMEOUT_ERROR, config->name);
        }

        /* Enable Clock Divider */
        if (config->value != 0U)
        {
            cgm[instance][selectorIndex]->divider[dividerIndex] |= MC_CGM_MUX_DC_DE_MASK;
        }
    }
    else
    {
        /* Report timeout error */
        ReportClockErrors(CLOCK_IP_REPORT_TIMEOUT_ERROR, config->name);
    }
}
#endif


#ifdef CGM_X_DE_DIV_STAT_WITHOUT_PHASE_WITH_TRIGGER
static void SetCgmXDeDivStatWithoutPhaseWithTrigger(Clock_Ip_DividerConfigType const* config)
{
    uint32 instance      = clockFeatures[config->name][CLOCK_MODULE_INSTANCE];
    uint32 selectorIndex = clockFeatures[config->name][SELECTOR_INDEX];
    uint32 dividerIndex  = clockFeatures[config->name][DIVIDER_INDEX];

    uint32 DIVIDER_VALUE_MASK  = clockFeatureExtensions[clockFeatures[config->name][EXTENSION_INDEX]].DIVIDER_VALUE_MASK;
    uint32 DIVIDER_VALUE_SHIFT = clockFeatureExtensions[clockFeatures[config->name][EXTENSION_INDEX]].DIVIDER_VALUE_SHIFT;

    uint32 regValue;
    boolean TimeoutOccurred = FALSE;
    uint32 StartTime;
    uint32 ElapsedTime;
    uint32 TimeoutTicks;
    uint32 DividerStatus;
    boolean immediateTriggerIsUpdated = TRUE;

    /* Program divider value */
    if (config->value != 0U)  {
        regValue = cgm[instance][selectorIndex]->divider[dividerIndex];
        regValue &= ~DIVIDER_VALUE_MASK;
        regValue |= ((config->value-1U) << DIVIDER_VALUE_SHIFT) & DIVIDER_VALUE_MASK;
        cgm[instance][selectorIndex]->divider[dividerIndex] = regValue;
    }

    /* Immediate update is triggered. */
    if ((cgm[instance][selectorIndex]->MUX_DIV_TRIG_CTRL & MC_CGM_MUX_DIV_TRIG_CTRL_TCTL_MASK) != MC_CGM_MUX_DIV_TRIG_CTRL_COMMON_TRIGGER_DIVIDER_UPDATE)
    {
        ClockStartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_TIMEOUT_VALUE_US);
        /* Wait for acknowledge to be cleared. */
        do
        {
            DividerStatus = (cgm[instance][selectorIndex]->MUX_DIV_UPD_STAT & MC_CGM_MUX_DIV_UPD_STAT_DIV_STAT_MASK);
            TimeoutOccurred = ClockTimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
        }
        while ((DividerStatus == MC_CGM_MUX_DIV_UPD_STAT_DIV_STAT_PENDING) && (FALSE == TimeoutOccurred));
    }

    if (FALSE == TimeoutOccurred)
    {
        /* Enable or Disable the Clock Divider */
        if (config->value != 0U)
        {
            /* Enable divider */
            cgm[instance][selectorIndex]->divider[dividerIndex] |= MC_CGM_MUX_DC_DE_MASK;
        }
        else
        {
            cgm[instance][selectorIndex]->divider[dividerIndex] &= ~MC_CGM_MUX_DC_DE_MASK;
        }
    }
    else
    {
        /* Report timeout error */
        ReportClockErrors(CLOCK_IP_REPORT_TIMEOUT_ERROR, config->name);
    }
}
#endif



#ifdef CGM_X_DE_DIV_STAT_WITH_PHASE_WITH_TRIGGER
static void SetCgmXDeDivStatWithPhaseWithTrigger(Clock_Ip_DividerConfigType const* config)
{


    uint32 instance      = clockFeatures[config->name][CLOCK_MODULE_INSTANCE];
    uint32 selectorIndex = clockFeatures[config->name][SELECTOR_INDEX];
    uint32 dividerIndex  = clockFeatures[config->name][DIVIDER_INDEX];

    uint32 DIVIDER_VALUE_MASK  = clockFeatureExtensions[clockFeatures[config->name][EXTENSION_INDEX]].DIVIDER_VALUE_MASK;
    uint32 DIVIDER_VALUE_SHIFT = clockFeatureExtensions[clockFeatures[config->name][EXTENSION_INDEX]].DIVIDER_VALUE_SHIFT;

    uint32 regValue;
    boolean TimeoutOccurred = FALSE;
    uint32 StartTime;
    uint32 ElapsedTime;
    uint32 TimeoutTicks;
    uint32 DividerStatus;
    boolean immediateTriggerIsUpdated = TRUE;

    /* Program divider value */
    if (config->value != 0U)  {
        regValue = cgm[instance][selectorIndex]->divider[dividerIndex];
        regValue &= ~DIVIDER_VALUE_MASK;
        regValue |= ((config->value-1U) << DIVIDER_VALUE_SHIFT) & DIVIDER_VALUE_MASK;
        cgm[instance][selectorIndex]->divider[dividerIndex] = regValue;
    }

    /* Immediate update is triggered. */
    if ((cgm[instance][selectorIndex]->MUX_DIV_TRIG_CTRL & MC_CGM_MUX_DIV_TRIG_CTRL_TCTL_MASK) != MC_CGM_MUX_DIV_TRIG_CTRL_COMMON_TRIGGER_DIVIDER_UPDATE)
    {
        ClockStartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_TIMEOUT_VALUE_US);
        /* Wait for acknowledge to be cleared. */
        do
        {
            DividerStatus = (cgm[instance][selectorIndex]->MUX_DIV_UPD_STAT & MC_CGM_MUX_DIV_UPD_STAT_DIV_STAT_MASK);
            TimeoutOccurred = ClockTimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
        }
        while ((DividerStatus == MC_CGM_MUX_DIV_UPD_STAT_DIV_STAT_PENDING) && (FALSE == TimeoutOccurred));
    }

    if (FALSE == TimeoutOccurred)
    {
        /* Update phase value */

        /* Disable clock to update phase */
        cgm[instance][selectorIndex]->divider[dividerIndex] &= ~MC_CGM_MUX_DC_DE_MASK;

        ClockStartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_TIMEOUT_VALUE_US);
        /* Wait for the divider update to complete. */
        do
        {
            DividerStatus = (cgm[instance][selectorIndex]->MUX_DIV_UPD_STAT & MC_CGM_MUX_DIV_UPD_STAT_DIV_STAT_MASK);
            TimeoutOccurred = ClockTimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
        }
        while ((DividerStatus == MC_CGM_MUX_DIV_UPD_STAT_DIV_STAT_PENDING) && (FALSE == TimeoutOccurred));

        if (FALSE == TimeoutOccurred)
        {
            /* We should now wait for at least one division cycle as per the existing programmed DIV value. */
            /* However, a register write sequence operation will take MUCH longer than one division cycle. */
            /* Therefore, there is no need to perform an explicit wait. */
            regValue = cgm[instance][selectorIndex]->divider[dividerIndex];
            regValue &= ~MC_CGM_MUX_DC_PHASE_MASK;
            regValue |= MC_CGM_MUX_DC_PHASE(config->options[0U]);
            cgm[instance][selectorIndex]->divider[dividerIndex] = regValue;
        }
        else
        {
            /* Report timeout error */
            ReportClockErrors(CLOCK_IP_REPORT_TIMEOUT_ERROR, config->name);
        }

        /* Enable Clock Divider */
        if (config->value != 0U)
        {
            cgm[instance][selectorIndex]->divider[dividerIndex] |= MC_CGM_MUX_DC_DE_MASK;
        }
    }
    else
    {
        /* Report timeout error */
        ReportClockErrors(CLOCK_IP_REPORT_TIMEOUT_ERROR, config->name);
    }
}
#endif


#ifdef PLLDIG_PLL0DIV_DE_DIV_OUTPUT
static void SetPlldigPll0divDeDivOutput(Clock_Ip_DividerConfigType const* config)
{

    uint32 instance      = clockFeatures[config->name][CLOCK_MODULE_INSTANCE];
    uint32 dividerIndex  = clockFeatures[config->name][DIVIDER_INDEX];
    uint32 regValue;

    /* Disable divider */
    pll[instance]->PLLODIV[dividerIndex] &= ~PLLDIG_PLLODIV_DE_MASK;
    /* Check if divider is enabled */
    if (config->value != 0U)
    {
        regValue = pll[instance]->PLLODIV[dividerIndex];
        regValue |= PLLDIG_PLLODIV_DE_MASK;
        regValue &= ~PLLDIG_PLLODIV_DIV_MASK;
        regValue |= PLLDIG_PLLODIV_DIV(config->value - 1U);
        pll[instance]->PLLODIV[dividerIndex] = regValue;
    }
}
#endif

#ifdef PLL_PLL0DIV_DE_DIV_OUTPUT
static void SetPllPll0divDeDivOutput(Clock_Ip_DividerConfigType const* config)
{
    boolean TimeoutOccurred = FALSE;
    uint32 StartTime;
    uint32 ElapsedTime;
    uint32 TimeoutTicks;
    uint32 instance      = clockFeatures[config->name][CLOCK_MODULE_INSTANCE];
    uint32 dividerIndex  = clockFeatures[config->name][DIVIDER_INDEX];
    uint32 regValue;

    /* Check clock status for PLL device */
    if ((IP_MC_ME->PRTN1_COFB1_STAT & MC_ME_PRTN1_COFB1_STAT_BLOCK56_MASK) == 0U)
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

    /* Disable divider */
    pll[instance]->PLLODIV[dividerIndex] &= ~PLL_PLLODIV_DE_MASK;
    /* Check if divider is enabled */
    if (config->value != 0U)
    {
        regValue = pll[instance]->PLLODIV[dividerIndex];
        regValue |= PLL_PLLODIV_DE_MASK;
        regValue &= ~PLL_PLLODIV_DIV_MASK;
        regValue |= PLL_PLLODIV_DIV(config->value - 1U);
        pll[instance]->PLLODIV[dividerIndex] = regValue;
    }
}
#endif

#ifdef PLL_PLLDV_ODIV2_OUTPUT
static void SetPllPlldvOdiv2Output(Clock_Ip_DividerConfigType const* config)
{
    boolean TimeoutOccurred = FALSE;
    uint32 StartTime;
    uint32 ElapsedTime;
    uint32 TimeoutTicks;
    uint32 instance      = clockFeatures[config->name][CLOCK_MODULE_INSTANCE];
    uint32 regValue, dividerValue;

    /* Check clock status for PLL device */
    if ((IP_MC_ME->PRTN1_COFB1_STAT & MC_ME_PRTN1_COFB1_STAT_BLOCK56_MASK) == 0U)
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
        while(((IP_MC_ME->PRTN1_COFB1_STAT & MC_ME_PRTN1_COFB1_STAT_BLOCK56_MASK) == 0U) && (!TimeoutOccurred));
        /* timeout notification */
        if (TimeoutOccurred)
        {
            /* Report timeout error */
            ReportClockErrors(CLOCK_IP_REPORT_TIMEOUT_ERROR, config->name);
        }
    }

    dividerValue = (config->value != 0U) ? config->value : 1U;

    regValue = pll[instance]->PLLDV;
    regValue &= ~PLL_PLLDV_ODIV2_MASK;
    regValue |= PLL_PLLDV_ODIV2(dividerValue);
    pll[instance]->PLLDV = regValue;

}
#endif

#ifdef SCG_ASYNC_DIV1
static void SetScgAsyncDiv1_TrustedCall(Clock_Ip_DividerConfigType const* config)
{
    uint32 regValue;
    uint32 instance      = clockFeatures[config->name][CLOCK_MODULE_INSTANCE];
    uint32 dividerValue  = dividerValue_hardwareValue[config->value];    /* Hw value corresponding to divider value. Translate the value by which is divided to hardware value. */


    regValue = scgPeriphAsyncDivs[instance]->ASYNC_DIV;
    regValue &= ~SCG_SIRCDIV_SIRCDIV1_MASK;
    regValue |= (dividerValue << SCG_SIRCDIV_SIRCDIV1_SHIFT);
    scgPeriphAsyncDivs[instance]->ASYNC_DIV = regValue;
}
static void SetScgAsyncDiv1(Clock_Ip_DividerConfigType const* config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(SetScgAsyncDiv1_TrustedCall,(config));
  #else
    SetScgAsyncDiv1_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
#endif

#ifdef SCG_ASYNC_DIV2
static void SetScgAsyncDiv2_TrustedCall(Clock_Ip_DividerConfigType const* config)
{
    uint32 regValue;
    uint32 instance      = clockFeatures[config->name][CLOCK_MODULE_INSTANCE];
    uint32 dividerValue  = dividerValue_hardwareValue[config->value];    /* Hw value corresponding to divider value. Translate the value by which is divided to hardware value. */

    regValue = scgPeriphAsyncDivs[instance]->ASYNC_DIV;
    regValue &= ~SCG_SIRCDIV_SIRCDIV2_MASK;
    regValue |= (dividerValue << SCG_SIRCDIV_SIRCDIV2_SHIFT);
    scgPeriphAsyncDivs[instance]->ASYNC_DIV = regValue;
}
static void SetScgAsyncDiv2(Clock_Ip_DividerConfigType const* config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(SetScgAsyncDiv2_TrustedCall,(config));
  #else
    SetScgAsyncDiv2_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
#endif

#ifdef SCG_DIVCORE_RUN
/* Set divider value of CORE_RUN_CLK to register */
static void SetScgRunDivcore_TrustedCall(Clock_Ip_DividerConfigType const* config)
{
    uint32 regValue;

    if (config->value != 0U)
    {
        regValue = IP_SCG->RCCR;
        regValue &= ~SCG_RCCR_DIVCORE_MASK;
        regValue |= ((config->value - 1U) << SCG_RCCR_DIVCORE_SHIFT);
        IP_SCG->RCCR = regValue;
    }
}
static void SetScgRunDivcore(Clock_Ip_DividerConfigType const* config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(SetScgRunDivcore_TrustedCall,(config));
  #else
    SetScgRunDivcore_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
#endif

#ifdef SCG_DIVBUS_RUN
/* Set divider value of BUS_RUN_CLK to register */
static void SetScgRunDivbus_TrustedCall(Clock_Ip_DividerConfigType const* config)
{
    uint32 regValue;

    if (config->value != 0U)
    {
        regValue = IP_SCG->RCCR;
        regValue &= ~SCG_RCCR_DIVBUS_MASK;
        regValue |= ((config->value - 1U) << SCG_RCCR_DIVBUS_SHIFT);
        IP_SCG->RCCR = regValue;
    }
}
static void SetScgRunDivbus(Clock_Ip_DividerConfigType const* config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(SetScgRunDivbus_TrustedCall,(config));
  #else
    SetScgRunDivbus_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
#endif

#ifdef SCG_DIVSLOW_RUN
/* Set divider value of SLOW_RUN_CLK to register */
static void SetScgRunDivslow_TrustedCall(Clock_Ip_DividerConfigType const* config)
{
    uint32 regValue;

    if (config->value != 0U)
    {
        regValue = IP_SCG->RCCR;
        regValue &= ~SCG_RCCR_DIVSLOW_MASK;
        regValue |= ((config->value - 1U) << SCG_RCCR_DIVSLOW_SHIFT);
        IP_SCG->RCCR = regValue;
    }
}
static void SetScgRunDivslow(Clock_Ip_DividerConfigType const* config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(SetScgRunDivslow_TrustedCall,(config));
  #else
    SetScgRunDivslow_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
#endif

#ifdef SCG_DIVCORE_VLPR
/* Set divider value of CORE_VLPR_CLK to register */
static void SetScgVlprDivcore_TrustedCall(Clock_Ip_DividerConfigType const* config)
{
    uint32 regValue;

    if (config->value != 0U)
    {
        regValue = IP_SCG->VCCR;
        regValue &= ~SCG_VCCR_DIVCORE_MASK;
        regValue |= ((config->value - 1U) << SCG_VCCR_DIVCORE_SHIFT);
        IP_SCG->VCCR = regValue;
    }
}
static void SetScgVlprDivcore(Clock_Ip_DividerConfigType const* config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(SetScgVlprDivcore_TrustedCall,(config));
  #else
    SetScgVlprDivcore_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
#endif

#ifdef SCG_DIVBUS_VLPR
/* Set divider value of BUS_VLPR_CLK to register */
static void SetScgVlprDivbus_TrustedCall(Clock_Ip_DividerConfigType const* config)
{
    uint32 regValue;

    if (config->value != 0U)
    {
        regValue = IP_SCG->VCCR;
        regValue &= ~SCG_VCCR_DIVBUS_MASK;
        regValue |= ((config->value - 1U) << SCG_VCCR_DIVBUS_SHIFT);
        IP_SCG->VCCR = regValue;
    }
}
static void SetScgVlprDivbus(Clock_Ip_DividerConfigType const* config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(SetScgVlprDivbus_TrustedCall,(config));
  #else
    SetScgVlprDivbus_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
#endif

#ifdef SCG_DIVSLOW_VLPR
/* Set divider value of SLOW_VLPR_CLK to register */
static void SetScgVlprDivslow_TrustedCall(Clock_Ip_DividerConfigType const* config)
{
    uint32 regValue;

    if (config->value != 0U)
    {
        regValue = IP_SCG->VCCR;
        regValue &= ~SCG_VCCR_DIVSLOW_MASK;
        regValue |= ((config->value - 1U) << SCG_VCCR_DIVSLOW_SHIFT);
        IP_SCG->VCCR = regValue;
    }
}
static void SetScgVlprDivslow(Clock_Ip_DividerConfigType const* config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(SetScgVlprDivslow_TrustedCall,(config));
  #else
    SetScgVlprDivslow_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
#endif

#ifdef SCG_DIVCORE_HSRUN
/* Set divider value of CORE_HSRUN_CLK to register */
static void SetScgHsrunDivcore_TrustedCall(Clock_Ip_DividerConfigType const* config)
{
    uint32 regValue;

    if (config->value != 0U)
    {
        regValue = IP_SCG->HCCR;
        regValue &= ~SCG_HCCR_DIVCORE_MASK;
        regValue |= ((config->value - 1U) << SCG_HCCR_DIVCORE_SHIFT);
        IP_SCG->HCCR = regValue;
    }
}
static void SetScgHsrunDivcore(Clock_Ip_DividerConfigType const* config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(SetScgHsrunDivcore_TrustedCall,(config));
  #else
    SetScgHsrunDivcore_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
#endif

#ifdef SCG_DIVBUS_HSRUN
/* Set divider value of BUS_HSRUN_CLK to register */
static void SetScgHsrunDivbus_TrustedCall(Clock_Ip_DividerConfigType const* config)
{
    uint32 regValue;

    if (config->value != 0U)
    {
        regValue = IP_SCG->HCCR;
        regValue &= ~SCG_HCCR_DIVBUS_MASK;
        regValue |= ((config->value - 1U) << SCG_HCCR_DIVBUS_SHIFT);
        IP_SCG->HCCR = regValue;
    }
}
static void SetScgHsrunDivbus(Clock_Ip_DividerConfigType const* config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(SetScgHsrunDivbus_TrustedCall,(config));
  #else
    SetScgHsrunDivbus_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
#endif

#ifdef SCG_DIVSLOW_HSRUN
/* Set divider value of SLOW_HSRUN_CLK to register */
static void SetScgHsrunDivslow_TrustedCall(Clock_Ip_DividerConfigType const* config)
{
    uint32 regValue;

    if (config->value != 0U)
    {
        regValue = IP_SCG->HCCR;
        regValue &= ~SCG_HCCR_DIVSLOW_MASK;
        regValue |= ((config->value - 1U) << SCG_HCCR_DIVSLOW_SHIFT);
        IP_SCG->HCCR = regValue;
    }
}
static void SetScgHsrunDivslow(Clock_Ip_DividerConfigType const* config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(SetScgHsrunDivslow_TrustedCall,(config));
  #else
    SetScgHsrunDivslow_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
#endif

#ifdef SIM_CLKOUT_DIV
/* Set divider value of CLKOUT0_CLK to register */
static void SetSimClkoutDiv_TrustedCall(Clock_Ip_DividerConfigType const *config)
{
    uint32 regValue;

    if (config->value != 0U)
    {
        regValue = IP_SIM->CHIPCTL;
        regValue &= ~SIM_CHIPCTL_CLKOUTDIV_MASK;
        regValue |= SIM_CHIPCTL_CLKOUTDIV(config->value - 1U);
        IP_SIM->CHIPCTL = regValue;
    }
}
static void SetSimClkoutDiv(Clock_Ip_DividerConfigType const *config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(SetSimClkoutDiv_TrustedCall,(config));
  #else
    SetSimClkoutDiv_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
#endif

#ifdef PCC_PCD_FRAC
static void SetPccPcdDivFrac_TrustedCall(Clock_Ip_DividerConfigType const* config)
{
    uint32 regValue;

    regValue = IP_PCC->PCCn[clockFeatures[config->name][DIVIDER_INDEX]];
    regValue &= ~(PCC_PCCn_PCD_MASK | PCC_PCCn_FRAC_MASK);
    regValue |= PCC_PCCn_PCD(config->value - 1U);                            /* Divider */
    regValue |= PCC_PCCn_FRAC((uint32)(config->options[0U]) - 1U);                        /* Multiplier */
    IP_PCC->PCCn[clockFeatures[config->name][DIVIDER_INDEX]] = regValue;
}
static void SetPccPcdDivFrac(Clock_Ip_DividerConfigType const* config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(SetPccPcdDivFrac_TrustedCall,(config));
  #else
    SetPccPcdDivFrac_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
#endif

#ifdef SIM_TRACE_DIV_MUL
static void SetSimTraceDivMul_TrustedCall(Clock_Ip_DividerConfigType const* config)
{
    IP_SIM->CLKDIV4 |= SIM_CLKDIV4_TRACEDIV((uint32)(config->value) - 1U)              |    /* Divider */
                     SIM_CLKDIV4_TRACEFRAC((uint32)(config->options[0U]) - 1U);                /* Multiplier */
}
static void SetSimTraceDivMul(Clock_Ip_DividerConfigType const* config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(SetSimTraceDivMul_TrustedCall,(config));
  #else
    SetSimTraceDivMul_TrustedCall(config);
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
