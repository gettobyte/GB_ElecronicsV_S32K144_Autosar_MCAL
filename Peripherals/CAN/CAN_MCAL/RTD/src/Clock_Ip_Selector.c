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
*   @file       Clock_Ip_Selector.c
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
#define CLOCK_IP_SELECTOR_VENDOR_ID_C                      43
#define CLOCK_IP_SELECTOR_AR_RELEASE_MAJOR_VERSION_C       4
#define CLOCK_IP_SELECTOR_AR_RELEASE_MINOR_VERSION_C       4
#define CLOCK_IP_SELECTOR_AR_RELEASE_REVISION_VERSION_C    0
#define CLOCK_IP_SELECTOR_SW_MAJOR_VERSION_C               1
#define CLOCK_IP_SELECTOR_SW_MINOR_VERSION_C               0
#define CLOCK_IP_SELECTOR_SW_PATCH_VERSION_C               0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Clock_Ip_Selector.c file and Clock_Ip_Private.h file are of the same vendor */
#if (CLOCK_IP_SELECTOR_VENDOR_ID_C != CLOCK_IP_PRIVATE_VENDOR_ID)
    #error "Clock_Ip_Selector.c and Clock_Ip_Private.h have different vendor ids"
#endif

/* Check if Clock_Ip_Selector.c file and Clock_Ip_Private.h file are of the same Autosar version */
#if ((CLOCK_IP_SELECTOR_AR_RELEASE_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MAJOR_VERSION) || \
     (CLOCK_IP_SELECTOR_AR_RELEASE_MINOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MINOR_VERSION) || \
     (CLOCK_IP_SELECTOR_AR_RELEASE_REVISION_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Clock_Ip_Selector.c and Clock_Ip_Private.h are different"
#endif

/* Check if Clock_Ip_Selector.c file and Clock_Ip_Private.h file are of the same Software version */
#if ((CLOCK_IP_SELECTOR_SW_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MAJOR_VERSION) || \
     (CLOCK_IP_SELECTOR_SW_MINOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MINOR_VERSION) || \
     (CLOCK_IP_SELECTOR_SW_PATCH_VERSION_C != CLOCK_IP_PRIVATE_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Clock_Ip_Selector.c and Clock_Ip_Private.h are different"
#endif

#ifdef GENCTRL1_CTRL_SUPPORT
#if (defined(CLOCK_IP_ENABLE_USER_MODE_SUPPORT))
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)

    #define  Call_ConfigureResetGenCtrl1() \
    OsIf_Trusted_Call(ConfigureResetGenCtrl1)
    #define  Call_ConfigureSetGenCtrl1() \
    OsIf_Trusted_Call(ConfigureSetGenCtrl1)
  #else
    #define  Call_ConfigureResetGenCtrl1() \
    ConfigureResetGenCtrl1()
    #define  Call_ConfigureSetGenCtrl1() \
    ConfigureSetGenCtrl1()
  #endif
#else
    #define  Call_ConfigureResetGenCtrl1() \
    ConfigureResetGenCtrl1()
    #define  Call_ConfigureSetGenCtrl1() \
    ConfigureSetGenCtrl1()
#endif
#endif
/* Clock start section code */
#define MCU_START_SEC_CODE

#include "Mcu_MemMap.h"

static void Callback_SelectorEmpty(Clock_Ip_SelectorConfigType const* config);

#ifdef CGM_X_CSC_CSS_CLK_SW_SWIP
static void ResetCgmXCscCssClkswSwip(Clock_Ip_SelectorConfigType const *config);
static void SetCgmXCscCssClkswSwip(Clock_Ip_SelectorConfigType const *config);
#endif


#ifdef CGM_X_CSC_CSS_CLK_SW_RAMPDOWN_RAMPUP_SWIP
static void ResetCgmXCscCssClkswRampupRampdownSwip(Clock_Ip_SelectorConfigType const *config);
static void SetCgmXCscCssClkswRampupRampdownSwip(Clock_Ip_SelectorConfigType const *config);
#endif

#ifdef CGM_X_CSC_CSS_CS_GRIP
static void SetCgmXCscCssCsGrip(Clock_Ip_SelectorConfigType const *config);
static void ResetCgmXCscCssCsGrip(Clock_Ip_SelectorConfigType const *config);
#endif

#ifdef GENCTRL1_CTRL_SUPPORT
static void SetGenctrl1Ctrl(Clock_Ip_SelectorConfigType const *config);
static void ResetGenctrl1Ctrl(Clock_Ip_SelectorConfigType const *config);

static void ConfigureResetGenCtrl1(void);
static void ConfigureSetGenCtrl1(void);
#endif

#ifdef SIM_RTC_SEL
static void ResetSimRtcSel(Clock_Ip_SelectorConfigType const *config);
static void SetSimRtcSel(Clock_Ip_SelectorConfigType const *config);
#endif

#ifdef SIM_LPO_SEL
static void ResetSimLpoSel(Clock_Ip_SelectorConfigType const *config);
static void SetSimLpoSel(Clock_Ip_SelectorConfigType const *config);
#endif

#ifdef SCG_CLKOUT_SEL
static void ResetScgClkoutSel(Clock_Ip_SelectorConfigType const *config);
static void SetScgClkoutSel(Clock_Ip_SelectorConfigType const *config);
#endif

#ifdef SCG_SCS_RUN_SEL
static void ResetScgRunSel(Clock_Ip_SelectorConfigType const *config);
static void SetScgRunSel(Clock_Ip_SelectorConfigType const *config);
#endif

#ifdef SCG_SCS_VLPR_SEL
static void SetScgVlprSel(Clock_Ip_SelectorConfigType const *config);
#endif

#ifdef SCG_SCS_HSRUN_SEL
static void ResetScgHsrunSel(Clock_Ip_SelectorConfigType const *config);
static void SetScgHsrunSel(Clock_Ip_SelectorConfigType const *config);
#endif

#ifdef SIM_FTMOPT_SEL
static void ResetSimFtmoptSel(Clock_Ip_SelectorConfigType const *config);
static void SetSimFtmoptSel(Clock_Ip_SelectorConfigType const *config);
#endif

#ifdef SIM_CLKOUT_SEL
static void ResetSimClkoutSel(Clock_Ip_SelectorConfigType const *config);
static void SetSimClkoutSel(Clock_Ip_SelectorConfigType const *config);
#endif

#ifdef PCC_PCS_SELECT
static void ResetPccPcsSelect(Clock_Ip_SelectorConfigType const *config);
static void SetPccPcsSelect(Clock_Ip_SelectorConfigType const *config);
#endif 

#ifdef SIM_TRACE_SEL
static void ResetSimTraceSel(Clock_Ip_SelectorConfigType const *config);
static void SetSimTraceSel(Clock_Ip_SelectorConfigType const *config);
#endif 

/* Clock stop section code */
#define MCU_STOP_SEC_CODE

#include "Mcu_MemMap.h"

/* Clock start constant section data */
#define MCU_START_SEC_CONST_UNSPECIFIED

#include "Mcu_MemMap.h"

const selectorCallback selectorCallbacks[SELECTOR_CALLBACKS_COUNT] =
{
    {
        Callback_SelectorEmpty,            /* Reset */
        Callback_SelectorEmpty,            /* Set */
    },
#ifdef CGM_X_CSC_CSS_CLK_SW_SWIP
    {
        ResetCgmXCscCssClkswSwip,          /* Reset */
        SetCgmXCscCssClkswSwip,            /* Set */
    },
#endif

#ifdef CGM_X_CSC_CSS_CLK_SW_RAMPDOWN_RAMPUP_SWIP
    {
        ResetCgmXCscCssClkswRampupRampdownSwip,     /* Reset */
        SetCgmXCscCssClkswRampupRampdownSwip,       /* Set */
    },
#endif

#ifdef CGM_X_CSC_CSS_CS_GRIP
    {
        ResetCgmXCscCssCsGrip,           /* Reset */
        SetCgmXCscCssCsGrip,             /* Set */
    },
#endif

#ifdef GENCTRL1_CTRL_SUPPORT
    {
        ResetGenctrl1Ctrl,           /* Reset */
        SetGenctrl1Ctrl,             /* Set */
    },
#endif

#ifdef SCG_SCS_RUN_SEL
    {
        ResetScgRunSel,                 /* Reset */
        SetScgRunSel,                   /* Set */
    },
#endif

#ifdef SCG_SCS_VLPR_SEL
    {
        Callback_SelectorEmpty,          /* Reset */
        SetScgVlprSel,                   /* Set */
    },
#endif

#ifdef SCG_SCS_HSRUN_SEL
    {
        ResetScgHsrunSel,                 /* Reset */
        SetScgHsrunSel,                   /* Set */
    },
#endif

#ifdef SIM_RTC_SEL
    {
        ResetSimRtcSel,                 /* Reset */
        SetSimRtcSel,                   /* Set */
    },
#endif

#ifdef SIM_LPO_SEL
    {
        ResetSimLpoSel,                 /* Reset */
        SetSimLpoSel,                   /* Set */
    },
#endif

#ifdef SCG_CLKOUT_SEL
    {
        ResetScgClkoutSel,             /* Reset */
        SetScgClkoutSel,               /* Set */
    },
#endif

#ifdef SIM_FTMOPT_SEL
    {
        ResetSimFtmoptSel,              /* Reset */
        SetSimFtmoptSel,                /* Set */
    },
#endif

#ifdef SIM_CLKOUT_SEL
    {
        ResetSimClkoutSel,              /* Reset */
        SetSimClkoutSel,                /* Set */
    },
#endif

#ifdef PCC_PCS_SELECT
    {
        ResetPccPcsSelect,              /* Reset */
        SetPccPcsSelect,                /* Set */
    },
#endif 

#ifdef SIM_TRACE_SEL
    {
        ResetSimTraceSel,               /* Reset */
        SetSimTraceSel,                 /* Set */
    },
#endif 


};

/* Clock stop constant section data */
#define MCU_STOP_SEC_CONST_UNSPECIFIED

#include "Mcu_MemMap.h"

/* Clock start section code */
#define MCU_START_SEC_CODE

#include "Mcu_MemMap.h"

static void Callback_SelectorEmpty(Clock_Ip_SelectorConfigType const* config)
{
    (void)config;
    /* No implementation */
}

#ifdef CGM_X_CSC_CSS_CLK_SW_SWIP
static void ResetCgmXCscCssClkswSwip(Clock_Ip_SelectorConfigType const *config)
{

    uint32 instance      = clockFeatures[config->name][CLOCK_MODULE_INSTANCE];
    uint32 selectorIndex = clockFeatures[config->name][SELECTOR_INDEX];

    cgm[instance][selectorIndex]->CSC |= MC_CGM_MUX_CSC_SAFE_SW_MASK;
}
static void SetCgmXCscCssClkswSwip(Clock_Ip_SelectorConfigType const *config)
{

    uint32 instance      = clockFeatures[config->name][CLOCK_MODULE_INSTANCE];
    uint32 selectorIndex = clockFeatures[config->name][SELECTOR_INDEX];
    uint32 selectorValue = selectorEntry_hardwareValue[config->value];    /* Hw value corresponding to selector entry. Translate input clock source to hardware value. */

    uint32 SELECTOR_VALUE_MASK  = clockFeatureExtensions[clockFeatures[config->name][EXTENSION_INDEX]].SELECTOR_VALUE_MASK;
    uint32 SELECTOR_VALUE_SHIFT = clockFeatureExtensions[clockFeatures[config->name][EXTENSION_INDEX]].SELECTOR_VALUE_SHIFT;

    uint32 regValue;
    boolean TimeoutOccurred = FALSE;
    uint32 StartTime;
    uint32 ElapsedTime;
    uint32 TimeoutTicks;

    /* Do not configure mux if it is already set to the selector value from configuration.*/
    if (selectorValue != ((cgm[instance][selectorIndex]->CSS & SELECTOR_VALUE_MASK) >> SELECTOR_VALUE_SHIFT))
    {
        ClockStartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_TIMEOUT_VALUE_US);
        do
        {
            TimeoutOccurred = ClockTimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
        }
        while(((cgm[instance][selectorIndex]->CSS & MC_CGM_MUX_CSS_SWIP_MASK) == MC_CGM_MUX_CSS_SWIP_IN_PROGRESS) && (FALSE == TimeoutOccurred));

        if (FALSE == TimeoutOccurred)
        {
            regValue = cgm[instance][selectorIndex]->CSC;
            regValue &= ~SELECTOR_VALUE_MASK;
            regValue |= (selectorValue << SELECTOR_VALUE_SHIFT) & SELECTOR_VALUE_MASK;
            regValue |= (MC_CGM_MUX_CSC_CLK_SW_MASK);  /* Clock switch operation is requested */
            cgm[instance][selectorIndex]->CSC = regValue;

            ClockStartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_TIMEOUT_VALUE_US);
            /* Wait for CLK_SW to auto-clear */
            do
            {
                TimeoutOccurred = ClockTimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
            }                                                          /* No safe clock switch operation was requested. */
            while(((cgm[instance][selectorIndex]->CSS & MC_CGM_MUX_CSS_CLK_SW_MASK) == MC_CGM_MUX_CSS_CLK_SW_NOT_REQUESTED) && (FALSE == TimeoutOccurred));

            if (FALSE == TimeoutOccurred)
            {
                ClockStartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_TIMEOUT_VALUE_US);
                /* Wait for acknowledge to be cleared. */
                do
                {
                    TimeoutOccurred = ClockTimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
                }
                while(((cgm[instance][selectorIndex]->CSS & MC_CGM_MUX_CSS_SWIP_MASK) == MC_CGM_MUX_CSS_SWIP_IN_PROGRESS) && (FALSE == TimeoutOccurred) );

                if (FALSE == TimeoutOccurred)
                {
                    /* Check the switch status. */
                    if (MC_CGM_MUX_CSS_SWTRG_SUCCEEDED != ((cgm[instance][selectorIndex]->CSS & MC_CGM_MUX_CSS_SWTRG_MASK) >> MC_CGM_MUX_0_CSS_SWTRG_SHIFT))
                    {
                        ReportClockErrors(CLOCK_IP_REPORT_CLOCK_MUX_SWITCH_ERROR, config->name);
                    }
                }
                else
                {
                    /* Report timeout error */
                    ReportClockErrors(CLOCK_IP_REPORT_TIMEOUT_ERROR, config->name);
                }
            }
            else
            {
                /* Report timeout error */
                ReportClockErrors(CLOCK_IP_REPORT_TIMEOUT_ERROR, config->name);
            }
        }
        else {

            /* Report timeout error */
            ReportClockErrors(CLOCK_IP_REPORT_TIMEOUT_ERROR, config->name);
        }
    }
}
#endif


#ifdef CGM_X_CSC_CSS_CLK_SW_RAMPDOWN_RAMPUP_SWIP
static void ResetCgmXCscCssClkswRampupRampdownSwip(Clock_Ip_SelectorConfigType const *config)
{

    uint32 instance      = clockFeatures[config->name][CLOCK_MODULE_INSTANCE];
    uint32 selectorIndex = clockFeatures[config->name][SELECTOR_INDEX];

    cgm[instance][selectorIndex]->CSC |= MC_CGM_MUX_CSC_SAFE_SW_MASK;
}
static void SetCgmXCscCssClkswRampupRampdownSwip(Clock_Ip_SelectorConfigType const *config)
{

    uint32 instance      = clockFeatures[config->name][CLOCK_MODULE_INSTANCE];
    uint32 selectorIndex = clockFeatures[config->name][SELECTOR_INDEX];
    uint32 selectorValue = selectorEntry_hardwareValue[config->value];    /* Hw value corresponding to selector entry. Translate input clock source to hardware value. */

    uint32 SELECTOR_VALUE_MASK  = clockFeatureExtensions[clockFeatures[config->name][EXTENSION_INDEX]].SELECTOR_VALUE_MASK;
    uint32 SELECTOR_VALUE_SHIFT = clockFeatureExtensions[clockFeatures[config->name][EXTENSION_INDEX]].SELECTOR_VALUE_SHIFT;

    uint32 regValue;
    boolean TimeoutOccurred = FALSE;
    uint32 StartTime;
    uint32 ElapsedTime;
    uint32 TimeoutTicks;
	
    /* Do not configure mux if it is already set to the selector value from configuration.*/
    if (selectorValue != ((cgm[instance][selectorIndex]->CSS & SELECTOR_VALUE_MASK) >> SELECTOR_VALUE_SHIFT))
    {
        ClockStartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_TIMEOUT_VALUE_US);
        do
        {
            TimeoutOccurred = ClockTimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
        }
        while (((cgm[instance][selectorIndex]->CSS & MC_CGM_MUX_CSS_SWIP_MASK) == MC_CGM_MUX_CSS_SWIP_IN_PROGRESS) && (FALSE == TimeoutOccurred));

        if (FALSE == TimeoutOccurred)
        {
            regValue = cgm[instance][selectorIndex]->CSC;
            regValue &= ~SELECTOR_VALUE_MASK;
            regValue |= (selectorValue << SELECTOR_VALUE_SHIFT) & SELECTOR_VALUE_MASK;
            /* All the PCFS commands should be atomic in nature (i.e. a single register write should provide a complete PCFS sequence
             * to be executed, that is ramp-down, clock switch, and ramp-up. It is necessary to set both RAMPUP and RAMPDOWN bits
             * together even if you want to trigger either RAMPUP or RAMPDOWN process, otherwise the PCFS effect will not manifest. */
            regValue |= (MC_CGM_MUX_CSC_CLK_SW_MASK | MC_CGM_MUX_CSC_RAMPUP_MASK | MC_CGM_MUX_CSC_RAMPDOWN_MASK);
            cgm[instance][selectorIndex]->CSC = regValue;

            ClockStartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_TIMEOUT_VALUE_US);
            /* Wait for CLK_SW to auto-clear */
            do
            {
                TimeoutOccurred = ClockTimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
            }                                                          /* No safe clock switch operation was requested. */
            while(((cgm[instance][selectorIndex]->CSS & MC_CGM_MUX_CSS_CLK_SW_MASK) == MC_CGM_MUX_CSS_CLK_SW_NOT_REQUESTED) && (FALSE == TimeoutOccurred));

            if (FALSE == TimeoutOccurred)
            {
                ClockStartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_TIMEOUT_VALUE_US);
                /* Wait for acknowledge to be cleared. */
                do
                {
                    TimeoutOccurred = ClockTimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
                }
                while (((cgm[instance][selectorIndex]->CSS & MC_CGM_MUX_CSS_SWIP_MASK) == MC_CGM_MUX_CSS_SWIP_IN_PROGRESS) && (FALSE == TimeoutOccurred) );

                if (FALSE == TimeoutOccurred)
                {
                    /* Check the switch status. */
                    if (MC_CGM_MUX_CSS_SWTRG_SUCCEEDED != ((cgm[instance][selectorIndex]->CSS & MC_CGM_MUX_CSS_SWTRG_MASK) >> MC_CGM_MUX_CSS_SWTRG_SHIFT))
                    {
                        ReportClockErrors(CLOCK_IP_REPORT_CLOCK_MUX_SWITCH_ERROR, config->name);
                    }
                }
                else
                {
                    /* Report timeout error */
                    ReportClockErrors(CLOCK_IP_REPORT_TIMEOUT_ERROR, config->name);
                }
            }
            else
            {
                /* Report timeout error */
                ReportClockErrors(CLOCK_IP_REPORT_TIMEOUT_ERROR, config->name);
            }
        }
        else
        {
            /* Report timeout error */
            ReportClockErrors(CLOCK_IP_REPORT_TIMEOUT_ERROR, config->name);
        }
    }
}
#endif





#ifdef CGM_X_CSC_CSS_CS_GRIP
static void ResetCgmXCscCssCsGrip(Clock_Ip_SelectorConfigType const *config)
{
    (void)config;

    /* Software muxes can't be reset. They don't have SAFE_CLK as selector entry. */
}
static void SetCgmXCscCssCsGrip(Clock_Ip_SelectorConfigType const *config)
{

    uint32 instance      = clockFeatures[config->name][CLOCK_MODULE_INSTANCE];
    uint32 selectorIndex = clockFeatures[config->name][SELECTOR_INDEX];
    uint32 selectorValue = selectorEntry_hardwareValue[config->value];    /* Hw value corresponding to selector entry. Translate input clock source to hardware value. */

    uint32 SELECTOR_VALUE_MASK  = clockFeatureExtensions[clockFeatures[config->name][EXTENSION_INDEX]].SELECTOR_VALUE_MASK;
    uint32 SELECTOR_VALUE_SHIFT = clockFeatureExtensions[clockFeatures[config->name][EXTENSION_INDEX]].SELECTOR_VALUE_SHIFT;

    uint32 regValue;
    boolean TimeoutOccurred = FALSE;
    uint32 StartTime;
    uint32 ElapsedTime;
    uint32 TimeoutTicks;

    /* Do not configure mux if it is already set to the selector value from configuration.*/
    if (selectorValue != ((cgm[instance][selectorIndex]->CSS & SELECTOR_VALUE_MASK) >> SELECTOR_VALUE_SHIFT))
    {
        cgm[instance][selectorIndex]->CSC |= (MC_CGM_MUX_CSC_CG_MASK | MC_CGM_MUX_CSC_FCG_MASK);

        ClockStartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_TIMEOUT_VALUE_US);
        do
        {
            TimeoutOccurred = ClockTimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
        }
        while (((cgm[instance][selectorIndex]->CSS & MC_CGM_MUX_CSS_CS_MASK) == MC_CGM_MUX_CSS_CS_TRANSPARENT) && (FALSE == TimeoutOccurred));

        if (FALSE == TimeoutOccurred)
        {
            /* Configure clock source. */
            regValue = cgm[instance][selectorIndex]->CSC;
            regValue &= ~SELECTOR_VALUE_MASK;
            regValue |= (selectorValue << SELECTOR_VALUE_SHIFT) & SELECTOR_VALUE_MASK;
            cgm[instance][selectorIndex]->CSC = regValue;

            /* Clear CG and FCG bit after set the SELCTL bit */
            cgm[instance][selectorIndex]->CSC &= ~(MC_CGM_MUX_CSC_FCG_MASK | MC_CGM_MUX_CSC_CG_MASK);

            ClockStartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_TIMEOUT_VALUE_US);
            /* Wait until the output clock is ungated. */
            do
            {
                TimeoutOccurred = ClockTimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
            }
            while (((cgm[instance][selectorIndex]->CSS & MC_CGM_MUX_CSS_CS_MASK) != MC_CGM_MUX_CSS_CS_TRANSPARENT) && (FALSE == TimeoutOccurred));

            if (TRUE == TimeoutOccurred)
            {
                ReportClockErrors(CLOCK_IP_REPORT_CLOCK_MUX_SWITCH_ERROR, config->name);
            }
        }
        else
        {
            /* Report timeout error */
            ReportClockErrors(CLOCK_IP_REPORT_TIMEOUT_ERROR, config->name);
        }
    }
}
#endif

#ifdef GENCTRL1_CTRL_SUPPORT
static void ResetGenctrl1Ctrl(Clock_Ip_SelectorConfigType const *config)
{
    (void)config;

    /* Clear GENCTRL1 register */
    Call_ConfigureResetGenCtrl1();
}

static void SetGenctrl1Ctrl(Clock_Ip_SelectorConfigType const *config)
{
    if(PFEMAC0_TX_DIV_CLK != config->value)
    {
        /* Set GENCTRL1 register */
        Call_ConfigureSetGenCtrl1();
    }
    else
    {
        /* Clear GENCTRL1 register */
        Call_ConfigureResetGenCtrl1();
    }
}

static void ConfigureResetGenCtrl1(void)
{
    /* Reset GENCTRL1 register */
    IP_S32G_GPR->GENCTRL1 &= ~S32G_GPR_GENCTRL1_CTRL_MASK;
}

static void ConfigureSetGenCtrl1(void)
{
    /* Set GENCTRL1 register */
    IP_S32G_GPR->GENCTRL1 |= S32G_GPR_GENCTRL1_CTRL_MASK;
}
#endif


#ifdef SCG_SCS_RUN_SEL
static void ResetScgRunSel_TrustedCall(Clock_Ip_SelectorConfigType const *config)
{
    uint32 regValue;
    uint32 selectorValue = selectorEntrySCS_hardwareValue[FIRC_CLK];    /* Hw value corresponding to selector entry. Translate input clock source to hardware value. */

    (void)config;

    regValue = IP_SCG->RCCR;
    regValue &= ~SCG_RCCR_SCS_MASK;
    regValue |= SCG_RCCR_SCS(selectorValue);
    IP_SCG->RCCR = regValue;
}
static void ResetScgRunSel(Clock_Ip_SelectorConfigType const *config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(ResetScgRunSel_TrustedCall,(config));
  #else
    ResetScgRunSel_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}

static void SetScgRunSel_TrustedCall(Clock_Ip_SelectorConfigType const *config)
{
    uint32 regValue;
    uint32 selectorValue = selectorEntrySCS_hardwareValue[config->value];    /* Hw value corresponding to selector entry. Translate input clock source to hardware value. */

    regValue = IP_SCG->RCCR;
    regValue &= ~SCG_RCCR_SCS_MASK;
    regValue |= SCG_RCCR_SCS(selectorValue);
    IP_SCG->RCCR = regValue;
}
static void SetScgRunSel(Clock_Ip_SelectorConfigType const *config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(SetScgRunSel_TrustedCall,(config));
  #else
    SetScgRunSel_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}

#endif


#ifdef SCG_SCS_VLPR_SEL

static void SetScgVlprSel_TrustedCall(Clock_Ip_SelectorConfigType const *config)
{
    uint32 regValue;
    uint32 selectorValue = selectorEntrySCS_hardwareValue[config->value];    /* Hw value corresponding to selector entry. Translate input clock source to hardware value. */

    regValue = IP_SCG->VCCR;
    regValue &= ~SCG_VCCR_SCS_MASK;
    regValue |= SCG_VCCR_SCS(selectorValue);
    IP_SCG->VCCR = regValue;
}
static void SetScgVlprSel(Clock_Ip_SelectorConfigType const *config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(SetScgVlprSel_TrustedCall,(config));
  #else
    SetScgVlprSel_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}

#endif

#ifdef SCG_SCS_HSRUN_SEL
static void ResetScgHsrunSel_TrustedCall(Clock_Ip_SelectorConfigType const *config)
{
    uint32 regValue;
    uint32 selectorValue = selectorEntrySCS_hardwareValue[FIRC_CLK];    /* Hw value corresponding to selector entry. Translate input clock source to hardware value. */

    (void)config;

    regValue = IP_SCG->HCCR;
    regValue &= ~SCG_HCCR_SCS_MASK;
    regValue |= SCG_HCCR_SCS(selectorValue);
    IP_SCG->HCCR = regValue;
}
static void ResetScgHsrunSel(Clock_Ip_SelectorConfigType const *config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(ResetScgHsrunSel_TrustedCall,(config));
  #else
    ResetScgHsrunSel_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
static void SetScgHsrunSel_TrustedCall(Clock_Ip_SelectorConfigType const *config)
{
    uint32 regValue;
    uint32 selectorValue = selectorEntrySCS_hardwareValue[config->value];    /* Hw value corresponding to selector entry. Translate input clock source to hardware value. */

    regValue = IP_SCG->HCCR;
    regValue &= ~SCG_HCCR_SCS_MASK;
    regValue |= SCG_HCCR_SCS(selectorValue);
    IP_SCG->HCCR = regValue;
}
static void SetScgHsrunSel(Clock_Ip_SelectorConfigType const *config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(SetScgHsrunSel_TrustedCall,(config));
  #else
    SetScgHsrunSel_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
#endif


#ifdef SIM_RTC_SEL
static void ResetSimRtcSel_TrustedCall(Clock_Ip_SelectorConfigType const *config)
{
    uint32 regValue;
    uint32 selectorValue = selectorEntry_hardwareValue[SOSCDIV1_CLK];    /* Hw value corresponding to selector entry. Translate input clock source to hardware value. */

    (void)config;

    regValue = IP_SIM->LPOCLKS;
    regValue &= ~SIM_LPOCLKS_RTCCLKSEL_MASK;
    regValue |= (selectorValue << SIM_LPOCLKS_RTCCLKSEL_SHIFT);
    IP_SIM->LPOCLKS = regValue;
}
static void ResetSimRtcSel(Clock_Ip_SelectorConfigType const *config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(ResetSimRtcSel_TrustedCall,(config));
  #else
    ResetSimRtcSel_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
static void SetSimRtcSel_TrustedCall(Clock_Ip_SelectorConfigType const *config)
{
    uint32 regValue;
    uint32 selectorValue = selectorEntry_hardwareValue[config->value];    /* Hw value corresponding to selector entry. Translate input clock source to hardware value. */

    regValue = IP_SIM->LPOCLKS;
    regValue &= ~SIM_LPOCLKS_RTCCLKSEL_MASK;
    regValue |= (selectorValue << SIM_LPOCLKS_RTCCLKSEL_SHIFT);
    IP_SIM->LPOCLKS = regValue;
}
static void SetSimRtcSel(Clock_Ip_SelectorConfigType const *config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(SetSimRtcSel_TrustedCall,(config));
  #else
    SetSimRtcSel_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
#endif

#ifdef SIM_LPO_SEL
static void ResetSimLpoSel_TrustedCall(Clock_Ip_SelectorConfigType const *config)
{
    uint32 regValue;
    uint32 selectorValue = selectorEntryPCS_hardwareValue[LPO_128K_CLK];    /* Hw value corresponding to selector entry. Translate input clock source to hardware value. */

    (void)config;

    regValue = IP_SIM->LPOCLKS;
    regValue &= ~SIM_LPOCLKS_LPOCLKSEL_MASK;
    regValue |= (selectorValue << SIM_LPOCLKS_LPOCLKSEL_SHIFT);
    IP_SIM->LPOCLKS = regValue;
}
static void ResetSimLpoSel(Clock_Ip_SelectorConfigType const *config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(ResetSimLpoSel_TrustedCall,(config));
  #else
    ResetSimLpoSel_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
static void SetSimLpoSel_TrustedCall(Clock_Ip_SelectorConfigType const *config)
{
    uint32 regValue;
    /* LPO_CLK selector mapped to selectorEntryPCS_hardwareValue */
    uint32 selectorValue = selectorEntryPCS_hardwareValue[config->value];    /* Hw value corresponding to selector entry. Translate input clock source to hardware value. */

    (void)config;

    regValue = IP_SIM->LPOCLKS;
    regValue &= ~SIM_LPOCLKS_LPOCLKSEL_MASK;
    regValue |= (selectorValue << SIM_LPOCLKS_LPOCLKSEL_SHIFT);
    IP_SIM->LPOCLKS = regValue;
}
static void SetSimLpoSel(Clock_Ip_SelectorConfigType const *config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(SetSimLpoSel_TrustedCall,(config));
  #else
    SetSimLpoSel_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
#endif

#ifdef SCG_CLKOUT_SEL
static void ResetScgClkoutSel_TrustedCall(Clock_Ip_SelectorConfigType const *config)
{
    uint32 regValue;
    /* LPO_CLK selector mapped to selectorEntryPCS_hardwareValue */
    uint32 selectorValue = selectorEntrySCS_hardwareValue[FIRC_CLK];    /* Hw value corresponding to selector entry. Translate input clock source to hardware value. */

    (void)config;

    regValue = IP_SCG->CLKOUTCNFG;
    regValue &= ~SCG_CLKOUTCNFG_CLKOUTSEL_MASK;
    regValue |= (selectorValue << SCG_CLKOUTCNFG_CLKOUTSEL_SHIFT);
    IP_SCG->CLKOUTCNFG = regValue;
}
static void ResetScgClkoutSel(Clock_Ip_SelectorConfigType const *config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(ResetScgClkoutSel_TrustedCall,(config));
  #else
    ResetScgClkoutSel_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
static void SetScgClkoutSel_TrustedCall(Clock_Ip_SelectorConfigType const *config)
{
    uint32 regValue;
    uint32 selectorValue = selectorEntrySCS_hardwareValue[config->value];    /* Hw value corresponding to selector entry. Translate input clock source to hardware value. */

    regValue = IP_SCG->CLKOUTCNFG;
    regValue &= ~SCG_CLKOUTCNFG_CLKOUTSEL_MASK;
    regValue |= (selectorValue << SCG_CLKOUTCNFG_CLKOUTSEL_SHIFT);
    IP_SCG->CLKOUTCNFG = regValue;
}
static void SetScgClkoutSel(Clock_Ip_SelectorConfigType const *config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(SetScgClkoutSel_TrustedCall,(config));
  #else
    SetScgClkoutSel_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
#endif

#ifdef SIM_FTMOPT_SEL
#define SIM_FTMOPT0_FTM_0_3_CLKSEL_SHIFT(x)  (24U + ((x) << 1U))
#define SIM_FTMOPT0_FTM_0_3_CLKSEL_MASK(x)   ((uint32)3U << SIM_FTMOPT0_FTM_0_3_CLKSEL_SHIFT(x))
#define SIM_FTMOPT0_FTM_4_7_CLKSEL_SHIFT(x)  (16U + (((x) - 4U) << 1U))
#define SIM_FTMOPT0_FTM_4_7_CLKSEL_MASK(x)   ((uint32)3U << SIM_FTMOPT0_FTM_4_7_CLKSEL_SHIFT(x))
static void ResetSimFtmoptSel_TrustedCall(Clock_Ip_SelectorConfigType const *config)
{
    uint32 regValue;
    uint32 selectorValue = selectorEntry_hardwareValue[FIRC_CLK];    /* Hw value corresponding to selector entry. Translate input clock source to hardware value. */
    uint32 instance      = clockFeatures[config->name][CLOCK_MODULE_INSTANCE];

    regValue = IP_SIM->FTMOPT0;
    if(instance < 4U)
    {   
        regValue &= ~(SIM_FTMOPT0_FTM_0_3_CLKSEL_MASK(instance));
        regValue |= (selectorValue << SIM_FTMOPT0_FTM_0_3_CLKSEL_SHIFT(instance));
    }
    else
    {
        regValue &= ~(SIM_FTMOPT0_FTM_4_7_CLKSEL_MASK(instance));
        regValue |= (selectorValue << SIM_FTMOPT0_FTM_4_7_CLKSEL_SHIFT(instance));
    }
    
    IP_SIM->FTMOPT0 = regValue;
}
static void ResetSimFtmoptSel(Clock_Ip_SelectorConfigType const *config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(ResetSimFtmoptSel_TrustedCall,(config));
  #else
    ResetSimFtmoptSel_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
static void SetSimFtmoptSel_TrustedCall(Clock_Ip_SelectorConfigType const *config)
{
    uint32 regValue;
    uint32 selectorValue = selectorEntry_hardwareValue[config->value];    /* Hw value corresponding to selector entry. Translate input clock source to hardware value. */
    uint32 instance      = clockFeatures[config->name][CLOCK_MODULE_INSTANCE];

    regValue = IP_SIM->FTMOPT0;
    if(instance < 4U)
    {   
        regValue &= ~(SIM_FTMOPT0_FTM_0_3_CLKSEL_MASK(instance));
        regValue |= (selectorValue << SIM_FTMOPT0_FTM_0_3_CLKSEL_SHIFT(instance));
    }
    else
    {
        regValue &= ~(SIM_FTMOPT0_FTM_4_7_CLKSEL_MASK(instance));
        regValue |= (selectorValue << SIM_FTMOPT0_FTM_4_7_CLKSEL_SHIFT(instance));
    }
    
    IP_SIM->FTMOPT0 = regValue;
}
static void SetSimFtmoptSel(Clock_Ip_SelectorConfigType const *config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(SetSimFtmoptSel_TrustedCall,(config));
  #else
    SetSimFtmoptSel_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
#endif

#ifdef SIM_CLKOUT_SEL
/* Clear CLKOUTSEL and CLKOUTEN bit field in SIM_CHIPCTL register  */
static void ResetSimClkoutSel_TrustedCall(Clock_Ip_SelectorConfigType const *config)
{
    uint32 regValue;

    (void)config;

    regValue = IP_SIM->CHIPCTL;
    regValue &= ~(SIM_CHIPCTL_CLKOUTSEL_MASK | SIM_CHIPCTL_CLKOUTEN_MASK);
    IP_SIM->CHIPCTL = regValue;
}
static void ResetSimClkoutSel(Clock_Ip_SelectorConfigType const *config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(ResetSimClkoutSel_TrustedCall,(config));
  #else
    ResetSimClkoutSel_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
static void SetSimClkoutSel_TrustedCall(Clock_Ip_SelectorConfigType const *config)
{
    uint32 regValue;
    uint32 selectorValue = selectorEntry_hardwareValue[config->value];    /* Hw value corresponding to selector entry. Translate input clock source to hardware value. */

    regValue = IP_SIM->CHIPCTL;
    regValue &= ~SIM_CHIPCTL_CLKOUTSEL_MASK;
    regValue |= (selectorValue << SIM_CHIPCTL_CLKOUTSEL_SHIFT);
    IP_SIM->CHIPCTL = regValue;
}
static void SetSimClkoutSel(Clock_Ip_SelectorConfigType const *config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(SetSimClkoutSel_TrustedCall,(config));
  #else
    SetSimClkoutSel_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
#endif

#ifdef PCC_PCS_SELECT
/**
* @brief            This function will reset writable bit fields of PCC register
*/
static void ResetPccPcsSelect_TrustedCall(Clock_Ip_SelectorConfigType const *config)
{
    uint32 regValue;
    uint32 pccIndex = clockFeatures[config->name][SELECTOR_INDEX];

    regValue = IP_PCC->PCCn[pccIndex];
    regValue &= ~(PCC_PCCn_PCS_MASK | PCC_PCCn_CGC_MASK);
    IP_PCC->PCCn[pccIndex] = regValue;
}
static void ResetPccPcsSelect(Clock_Ip_SelectorConfigType const *config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(ResetPccPcsSelect_TrustedCall,(config));
  #else
    ResetPccPcsSelect_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
static void SetPccPcsSelect_TrustedCall(Clock_Ip_SelectorConfigType const *config)
{
    uint32 regValue;
    uint32 pccIndex = clockFeatures[config->name][SELECTOR_INDEX];
    uint32 selectorValue = selectorEntryPCS_hardwareValue[config->value];    /* Hw value corresponding to selector entry. Translate input clock source to hardware value. */

    regValue = IP_PCC->PCCn[pccIndex];
    regValue &= ~PCC_PCCn_PCS_MASK;
    regValue |= PCC_PCCn_PCS(selectorValue);
    IP_PCC->PCCn[pccIndex] = regValue;
}
static void SetPccPcsSelect(Clock_Ip_SelectorConfigType const *config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(SetPccPcsSelect_TrustedCall,(config));
  #else
    SetPccPcsSelect_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */ 
}
#endif 

#ifdef SIM_TRACE_SEL
static void ResetSimTraceSel_TrustedCall(Clock_Ip_SelectorConfigType const *config)
{
    uint32 regValue;
    /* TRACE_CLK selector mapped to selectorEntryPCS_hardwareValue */
    uint32 selectorValue = selectorEntryPCS_hardwareValue[CORE_CLK];    /* Hw value corresponding to selector entry. Translate input clock source to hardware value. */

    (void) config;
    regValue = (uint32)IP_SIM->CHIPCTL;
    regValue &= (~((uint32)SIM_CHIPCTL_TRACECLK_SEL_MASK));
    regValue |= SIM_CHIPCTL_TRACECLK_SEL(selectorValue);
    IP_SIM->CHIPCTL = (uint32)regValue;
}
static void ResetSimTraceSel(Clock_Ip_SelectorConfigType const *config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(ResetSimTraceSel_TrustedCall,(config));
  #else
    ResetSimTraceSel_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
static void SetSimTraceSel_TrustedCall(Clock_Ip_SelectorConfigType const *config)
{
    uint32 regValue;
    /* TRACE_CLK selector mapped to selectorEntryPCS_hardwareValue */
    uint32 selectorValue = selectorEntryPCS_hardwareValue[config->value];    /* Hw value corresponding to selector entry. Translate input clock source to hardware value. */

    regValue = (uint32)IP_SIM->CHIPCTL;
    regValue &= (~((uint32)SIM_CHIPCTL_TRACECLK_SEL_MASK));
    regValue |= SIM_CHIPCTL_TRACECLK_SEL(selectorValue);
    IP_SIM->CHIPCTL = (uint32)regValue;
}
static void SetSimTraceSel(Clock_Ip_SelectorConfigType const *config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(SetSimTraceSel_TrustedCall,(config));
  #else
    SetSimTraceSel_TrustedCall(config);
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
