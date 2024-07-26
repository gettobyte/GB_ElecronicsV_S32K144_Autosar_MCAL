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
*   @file       Clock_Ip_IntOsc.c
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
#define CLOCK_IP_INTOSC_VENDOR_ID_C                      43
#define CLOCK_IP_INTOSC_AR_RELEASE_MAJOR_VERSION_C       4
#define CLOCK_IP_INTOSC_AR_RELEASE_MINOR_VERSION_C       4
#define CLOCK_IP_INTOSC_AR_RELEASE_REVISION_VERSION_C    0
#define CLOCK_IP_INTOSC_SW_MAJOR_VERSION_C               1
#define CLOCK_IP_INTOSC_SW_MINOR_VERSION_C               0
#define CLOCK_IP_INTOSC_SW_PATCH_VERSION_C               0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Clock_Ip_IntOsc.c file and Clock_Ip_Private.h file are of the same vendor */
#if (CLOCK_IP_INTOSC_VENDOR_ID_C != CLOCK_IP_PRIVATE_VENDOR_ID)
    #error "Clock_Ip_IntOsc.c and Clock_Ip_Private.h have different vendor ids"
#endif

/* Check if Clock_Ip_IntOsc.c file and Clock_Ip_Private.h file are of the same Autosar version */
#if ((CLOCK_IP_INTOSC_AR_RELEASE_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MAJOR_VERSION) || \
     (CLOCK_IP_INTOSC_AR_RELEASE_MINOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MINOR_VERSION) || \
     (CLOCK_IP_INTOSC_AR_RELEASE_REVISION_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Clock_Ip_IntOsc.c and Clock_Ip_Private.h are different"
#endif

/* Check if Clock_Ip_IntOsc.c file and Clock_Ip_Private.h file are of the same Software version */
#if ((CLOCK_IP_INTOSC_SW_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MAJOR_VERSION) || \
     (CLOCK_IP_INTOSC_SW_MINOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MINOR_VERSION) || \
     (CLOCK_IP_INTOSC_SW_PATCH_VERSION_C != CLOCK_IP_PRIVATE_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Clock_Ip_IntOsc.c and Clock_Ip_Private.h are different"
#endif

/* Clock start section code */
#define MCU_START_SEC_CODE

#include "Mcu_MemMap.h"


static void InternalOscillatorEmpty(Clock_Ip_IrcoscConfigType const* config);
static void InternalOscillatorEmpty_Disable(Clock_Ip_NameType name);
#ifdef FIRC_STDBY_ENABLE
static void SetFircStdby(Clock_Ip_IrcoscConfigType const* config);
static void EnableFircStdby(Clock_Ip_IrcoscConfigType const* config);
static void DisableFircStdby(Clock_Ip_NameType name);
#endif
#ifdef SIRC_STDBY_ENABLE
static void SetSircStdby(Clock_Ip_IrcoscConfigType const* config);
static void EnableSircStdby(Clock_Ip_IrcoscConfigType const* config);
static void DisableSircStdby(Clock_Ip_NameType name);
#endif
#ifdef SIRC_ENABLE
static void SetSirc(Clock_Ip_IrcoscConfigType const* config);
static void EnableSirc(Clock_Ip_IrcoscConfigType const* config);
static void DisableSirc(Clock_Ip_NameType name);
#endif
#ifdef SIRC_VLP_ENABLE
static void SetSircVlp(Clock_Ip_IrcoscConfigType const* config);
static void EnableSircVlp(Clock_Ip_IrcoscConfigType const* config);
static void DisableSircVlp(Clock_Ip_NameType name);
#endif
#ifdef SIRC_STOP_ENABLE
static void SetSircStop(Clock_Ip_IrcoscConfigType const* config);
static void EnableSircStop(Clock_Ip_IrcoscConfigType const* config);
static void DisableSircStop(Clock_Ip_NameType name);
#endif
#ifdef FIRC_ENABLE
static void SetFirc(Clock_Ip_IrcoscConfigType const* config);
static void EnableFirc(Clock_Ip_IrcoscConfigType const* config);
static void DisableFirc(Clock_Ip_NameType name);
#endif

/* Clock stop section code */
#define MCU_STOP_SEC_CODE

#include "Mcu_MemMap.h"

/* Clock start constant section data */
#define MCU_START_SEC_CONST_UNSPECIFIED

#include "Mcu_MemMap.h"

const intOscCallback intOscCallbacks[IRCOSC_CALLBACKS_COUNT] =
{
    {
        InternalOscillatorEmpty,          /* Set */
        InternalOscillatorEmpty,          /* Enable */
        InternalOscillatorEmpty_Disable,  /* Disable */
    },
#ifdef FIRC_STDBY_ENABLE
    {
        SetFircStdby,                     /* Set */
        EnableFircStdby,                  /* Enable */
        DisableFircStdby,                 /* Disable */
    },
#endif
#ifdef SIRC_STDBY_ENABLE
    {
        SetSircStdby,                     /* Set */
        EnableSircStdby,                  /* Enable */
        DisableSircStdby,                 /* Disable */
    },
#endif

#ifdef SIRC_ENABLE
    {
        SetSirc,                         /* Set */
        EnableSirc,                      /* Enable */
        DisableSirc,                     /* Disable */
    },
#endif

#ifdef SIRC_VLP_ENABLE
    {
        SetSircVlp,                      /* Set */
        EnableSircVlp,                   /* Enable */
        DisableSircVlp,                  /* Disable */
    },
#endif

#ifdef SIRC_STOP_ENABLE
    {
        SetSircStop,                      /* Set */
        EnableSircStop,                   /* Enable */
        DisableSircStop,                  /* Disable */
    },
#endif

#ifdef FIRC_ENABLE
    {
        SetFirc,                          /* Set */
        EnableFirc,                       /* Enable */
        DisableFirc,                      /* Disable */
    },
#endif
};




/* Clock stop constant section data */
#define MCU_STOP_SEC_CONST_UNSPECIFIED

#include "Mcu_MemMap.h"


/* Clock start section code */
#define MCU_START_SEC_CODE

#include "Mcu_MemMap.h"

static void InternalOscillatorEmpty(Clock_Ip_IrcoscConfigType const* config)
{
    (void)config;
    /* No implementation */
}
static void InternalOscillatorEmpty_Disable(Clock_Ip_NameType name)
{
    (void)name;
    /* No implementation */
}


#ifdef FIRC_STDBY_ENABLE
static void SetFircStdby(Clock_Ip_IrcoscConfigType const* config)
{
    if (config->enable != 0U)
    {
        IP_FIRC->STDBY_ENABLE |= FIRC_STDBY_ENABLE_STDBY_EN_MASK;
    }
    else
    {
        IP_FIRC->STDBY_ENABLE &= ~FIRC_STDBY_ENABLE_STDBY_EN_MASK;
    }
}
static void EnableFircStdby(Clock_Ip_IrcoscConfigType const* config)
{
    (void)config;
    IP_FIRC->STDBY_ENABLE |= FIRC_STDBY_ENABLE_STDBY_EN_MASK;
}
static void DisableFircStdby(Clock_Ip_NameType name)
{
    (void)name;
    IP_FIRC->STDBY_ENABLE &= ~FIRC_STDBY_ENABLE_STDBY_EN_MASK;
}
#endif
#ifdef SIRC_STDBY_ENABLE
static void SetSircStdby(Clock_Ip_IrcoscConfigType const* config)
{
    if (config->enable != 0U)
    {
        IP_SIRC->MISCELLANEOUS_IN |= SIRC_MISCELLANEOUS_IN_STANDBY_ENABLE_MASK;
    }
    else
    {
        IP_SIRC->MISCELLANEOUS_IN &= ~SIRC_MISCELLANEOUS_IN_STANDBY_ENABLE_MASK;
    }
}
static void EnableSircStdby(Clock_Ip_IrcoscConfigType const* config)
{
    (void)config;
    IP_SIRC->MISCELLANEOUS_IN |= SIRC_MISCELLANEOUS_IN_STANDBY_ENABLE_MASK;
}
static void DisableSircStdby(Clock_Ip_NameType name)
{
    (void)name;
    IP_SIRC->MISCELLANEOUS_IN &= ~SIRC_MISCELLANEOUS_IN_STANDBY_ENABLE_MASK;
}
#endif

#ifdef SIRC_ENABLE
static void SetSirc_TrustedCall(Clock_Ip_IrcoscConfigType const* config)
{
    boolean TimeoutOccurred = FALSE;
    uint32 StartTime;
    uint32 ElapsedTime;
    uint32 TimeoutTicks;
    uint32 IrcoscStatus;
    Clock_Ip_IrcoscConfigType sircConfig;
    
    
    if (config == NULL_PTR)
    {
        sircConfig.name   = FIRC_CLK;
        sircConfig.range  = 1U;   /* 8MHz */
        sircConfig.enable = 1U;   /* enabled */
        sircConfig.lowPowerModeEnable =1U;
    }
    else
    {
        sircConfig.name   = config->name;
        sircConfig.range  = config->range;
        sircConfig.enable = config->enable;
        sircConfig.lowPowerModeEnable = config->lowPowerModeEnable;
    }

    /* Clear LK bit field */
    IP_SCG->SIRCCSR &= (~((uint32)SCG_SIRCCSR_LK_MASK));

    /* Disable clock */
    IP_SCG->SIRCCSR &= (~((uint32)SCG_SIRCCSR_SIRCEN_MASK));

    /* Disable SIRC Low Power */
    IP_SCG->SIRCCSR &= (~((uint32)SCG_SIRCCSR_SIRCLPEN_MASK));

    /* Configure SIRC. */
    if (sircConfig.enable == 1U)
    {
        /* Step frequency range. */
        IP_SCG->SIRCCFG = SCG_SIRCCFG_RANGE(sircConfig.range);

        /* Enable clock. */
        IP_SCG->SIRCCSR |= SCG_SIRCCSR_SIRCEN(1U);

        /* Set SIRC in VLP modes */
        IP_SCG->SIRCCSR |= SCG_SIRCCSR_SIRCLPEN(sircConfig.lowPowerModeEnable);

        ClockStartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_TIMEOUT_VALUE_US);
        /* Wait until ircosc is locked */
        do
        {
            IrcoscStatus = (((IP_SCG->SIRCCSR & SCG_SIRCCSR_SIRCVLD_MASK) >> SCG_SIRCCSR_SIRCVLD_SHIFT));
            TimeoutOccurred = ClockTimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
        }
        while ((IrcoscStatus == 0U) && (FALSE == TimeoutOccurred));

        if (FALSE != TimeoutOccurred)
        {
            /* Report timeout error */
            ReportClockErrors(CLOCK_IP_REPORT_TIMEOUT_ERROR, sircConfig.name);
        }
    }
}
static void SetSirc(Clock_Ip_IrcoscConfigType const* config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(SetSirc_TrustedCall,(config));
  #else
    SetSirc_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
static void EnableSirc_TrustedCall(Clock_Ip_IrcoscConfigType const* config)
{
    boolean TimeoutOccurred = FALSE;
    uint32 StartTime;
    uint32 ElapsedTime;
    uint32 TimeoutTicks;
    uint32 IrcoscStatus;

    /* Enable clock. */
    IP_SCG->SIRCCSR |= SCG_SIRCCSR_SIRCEN(1U);

    /* Enable SIRC Low Power */
    IP_SCG->SIRCCSR |= SCG_SIRCCSR_SIRCLPEN(1UL);
    
    ClockStartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_TIMEOUT_VALUE_US);
    /* Wait until ircosc is locked */
    do
    {
        IrcoscStatus = (((IP_SCG->SIRCCSR & SCG_SIRCCSR_SIRCVLD_MASK) >> SCG_SIRCCSR_SIRCVLD_SHIFT));
        TimeoutOccurred = ClockTimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
    }
    while ((IrcoscStatus == 0U) && (FALSE == TimeoutOccurred));

    if (FALSE != TimeoutOccurred)
    {
        /* Report timeout error */
        ReportClockErrors(CLOCK_IP_REPORT_TIMEOUT_ERROR, config->name);
    }
}
static void EnableSirc(Clock_Ip_IrcoscConfigType const* config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(EnableSirc_TrustedCall,(config));
  #else
    EnableSirc_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
static void DisableSirc_TrustedCall(Clock_Ip_NameType name)
{
    (void)name;

    /* Disable clock. */
    IP_SCG->SIRCCSR &= ~SCG_SIRCCSR_SIRCEN_MASK;
    
    /* Disable SIRC Low Power */
    IP_SCG->SIRCCSR &= (~((uint32)SCG_SIRCCSR_SIRCLPEN_MASK));
}
static void DisableSirc(Clock_Ip_NameType name)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(DisableSirc_TrustedCall,(name));
  #else
    DisableSirc_TrustedCall(name);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
#endif

#ifdef SIRC_VLP_ENABLE
static void SetSircVlp_TrustedCall(Clock_Ip_IrcoscConfigType const* config)
{
    /* Clear LK bit field */
    IP_SCG->SIRCCSR &= (~((uint32)SCG_SIRCCSR_LK_MASK));

    IP_SCG->SIRCCSR &= (~((uint32)SCG_SIRCCSR_SIRCLPEN_MASK));

    /* Configure SIRC in VLP mode */
    IP_SCG->SIRCCSR |= SCG_SIRCCSR_SIRCLPEN(config->lowPowerModeEnable);
}
static void SetSircVlp(Clock_Ip_IrcoscConfigType const* config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(SetSircVlp_TrustedCall,(config));
  #else
    SetSircVlp_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
static void EnableSircVlp_TrustedCall(Clock_Ip_IrcoscConfigType const* config)
{
    if (config->enable == 1U)
    {
        /* Enable clock in VLP mode */
        IP_SCG->SIRCCSR |= SCG_SIRCCSR_SIRCLPEN(1U);
    }
}
static void EnableSircVlp(Clock_Ip_IrcoscConfigType const* config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(EnableSircVlp_TrustedCall,(config));
  #else
    EnableSircVlp_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
static void DisableSircVlp_TrustedCall(Clock_Ip_NameType name)
{
    (void)name;

    /* Disable clock */
    IP_SCG->SIRCCSR &= (~((uint32)SCG_SIRCCSR_SIRCLPEN_MASK));
}
static void DisableSircVlp(Clock_Ip_NameType name)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(DisableSircVlp_TrustedCall,(name));
  #else
    DisableSircVlp_TrustedCall(name);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
#endif

#ifdef SIRC_STOP_ENABLE
static void SetSircStop_TrustedCall(Clock_Ip_IrcoscConfigType const* config)
{
    (void)config;

    /* Clear LK bit field */
    IP_SCG->SIRCCSR &= (~((uint32)SCG_SIRCCSR_LK_MASK));

    IP_SCG->SIRCCSR &= (~((uint32)SCG_SIRCCSR_SIRCSTEN_MASK));

    /* Configure SIRC in STOP mode */
    IP_SCG->SIRCCSR |= SCG_SIRCCSR_SIRCSTEN(config->stopModeEnable);
}
static void SetSircStop(Clock_Ip_IrcoscConfigType const* config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(SetSircStop_TrustedCall,(config));
  #else
    SetSircStop_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
static void EnableSircStop_TrustedCall(Clock_Ip_IrcoscConfigType const* config)
{
    if (config->enable == 1U)
    {
        /* Enable clock in VLP mode */
        IP_SCG->SIRCCSR |= SCG_SIRCCSR_SIRCSTEN(1U);
    }
}
static void EnableSircStop(Clock_Ip_IrcoscConfigType const* config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(EnableSircStop_TrustedCall,(config));
  #else
    EnableSircStop_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
static void DisableSircStop_TrustedCall(Clock_Ip_NameType name)
{
    (void)name;

    /* Disable clock */
    IP_SCG->SIRCCSR &= (~((uint32)SCG_SIRCCSR_SIRCSTEN_MASK));
}
static void DisableSircStop(Clock_Ip_NameType name)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(DisableSircStop_TrustedCall,(name));
  #else
    DisableSircStop_TrustedCall(name);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
#endif


#ifdef FIRC_ENABLE
#define SIRC_CLK_SOURCE 2U
#define FIRC_CLK_SOURCE 3U
static void SetInputSouceSytemClock(uint32 sourceClock)
{
    uint32 regValue;
    boolean TimeoutOccurred = FALSE;
    uint32 StartTime;
    uint32 ElapsedTime;
    uint32 TimeoutTicks;
    uint32 ScsStatus;

    regValue = IP_SCG->RCCR;
    regValue &= ~SCG_RCCR_SCS_MASK;
    regValue |= (sourceClock << SCG_RCCR_SCS_SHIFT);
    IP_SCG->RCCR = regValue;
    
    ClockStartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_TIMEOUT_VALUE_US);
    do
    {
        ScsStatus = (((IP_SCG->CSR & SCG_CSR_SCS_MASK) >> SCG_CSR_SCS_SHIFT) != (sourceClock))?1U:0U;
        TimeoutOccurred = ClockTimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
    }
    while ((ScsStatus == 0U) && (FALSE == TimeoutOccurred));

    if (FALSE != TimeoutOccurred)
    {
        /* Report timeout error */
        ReportClockErrors(CLOCK_IP_REPORT_TIMEOUT_ERROR, FIRC_CLK);
    }
}
static void SetFirc_TrustedCall(Clock_Ip_IrcoscConfigType const* config)
{
    uint32 instance = clockFeatures[config->name][CLOCK_MODULE_INSTANCE];
    boolean TimeoutOccurred = FALSE, SircWasDisabled = FALSE;
    uint32 StartTime;
    uint32 ElapsedTime;
    uint32 TimeoutTicks;
    uint32 IrcoscStatus;
    
    (void)instance;

    /* Clear LK bit field */
    IP_SCG->FIRCCSR &= (uint32)(~(SCG_FIRCCSR_LK_MASK));

    /* Check that FIRC is used by system clock) */
    if ((IP_SCG->FIRCCSR & SCG_FIRCCSR_FIRCSEL_MASK) != 0U)
    {
        /* Check whether FIRC is already configured as required */
        if ( (config->range != ((IP_SCG->FIRCCFG & SCG_FIRCCFG_RANGE_MASK) >> SCG_FIRCCFG_RANGE_SHIFT)) ||
            (config->regulator != ((IP_SCG->FIRCCSR & SCG_FIRCCSR_FIRCREGOFF_MASK) >> SCG_FIRCCSR_FIRCREGOFF_SHIFT)) )
        {
            /* Enable SIRC if it is disabled. */
            if ((IP_SCG->SIRCCSR & SCG_SIRCCSR_SIRCEN_MASK) == 0U) 
            {
                SircWasDisabled = TRUE;
                SetSirc(NULL_PTR);
            }

            /* Switch to SIRC */
            SetInputSouceSytemClock(SIRC_CLK_SOURCE);

            /* Disable clock */
            IP_SCG->FIRCCSR &= (~((uint32)SCG_FIRCCSR_FIRCEN_MASK));

            /* Configure FIRC. */
            if (config->enable == 1U)
            {                
                /* Step frequency range. */
                IP_SCG->FIRCCFG = SCG_FIRCCFG_RANGE(config->range);

                /* Enable clock. */
                IP_SCG->FIRCCSR |= (SCG_FIRCCSR_FIRCEN(1U) | SCG_FIRCCSR_FIRCREGOFF(config->regulator));      

                ClockStartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_TIMEOUT_VALUE_US);
                /* Wait until ircosc is locked */
                do
                {
                    IrcoscStatus = (((IP_SCG->FIRCCSR & SCG_FIRCCSR_FIRCVLD_MASK) >> SCG_FIRCCSR_FIRCVLD_SHIFT));
                    TimeoutOccurred = ClockTimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
                }
                while ((IrcoscStatus == 0U) && (FALSE == TimeoutOccurred));

                if (FALSE != TimeoutOccurred)
                {
                    /* Report timeout error */
                    ReportClockErrors(CLOCK_IP_REPORT_TIMEOUT_ERROR, config->name);
                }
                
                /* Switch back to FIRC */
                SetInputSouceSytemClock(FIRC_CLK_SOURCE);
                
                if (SircWasDisabled)
                {
                    DisableSirc(SIRC_CLK);
                }
            }
        }
    }
    else
    {
        /* Configure FIRC. */
        
        /* Disable clock */
        IP_SCG->FIRCCSR &= (~((uint32)SCG_FIRCCSR_FIRCEN_MASK));
        
        if (config->enable == 1U)
        {                
            /* Step frequency range. */
            IP_SCG->FIRCCFG = SCG_FIRCCFG_RANGE(config->range);

            /* Enable clock. */
            IP_SCG->FIRCCSR |= (SCG_FIRCCSR_FIRCEN(1U) | SCG_FIRCCSR_FIRCREGOFF(config->regulator));      

            ClockStartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_TIMEOUT_VALUE_US);
            /* Wait until ircosc is locked */
            do
            {
                IrcoscStatus = (((IP_SCG->FIRCCSR & SCG_FIRCCSR_FIRCVLD_MASK) >> SCG_FIRCCSR_FIRCVLD_SHIFT));
                TimeoutOccurred = ClockTimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
            }
            while ((IrcoscStatus == 0U) && (FALSE == TimeoutOccurred));

            if (FALSE != TimeoutOccurred)
            {
                /* Report timeout error */
                ReportClockErrors(CLOCK_IP_REPORT_TIMEOUT_ERROR, config->name);
            }
        }
    }
}
static void SetFirc(Clock_Ip_IrcoscConfigType const* config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(SetFirc_TrustedCall,(config));
  #else
    SetFirc_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
static void EnableFirc_TrustedCall(Clock_Ip_IrcoscConfigType const* config)
{
    boolean TimeoutOccurred = FALSE;
    uint32 StartTime;
    uint32 ElapsedTime;
    uint32 TimeoutTicks;
    uint32 IrcoscStatus;

    if (config->enable == 1U)
    {
        /* Enable clock. */
        IP_SCG->FIRCCSR |= SCG_FIRCCSR_FIRCEN(1U);

        ClockStartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_TIMEOUT_VALUE_US);
        /* Wait until ircosc is locked */
        do
        {
            IrcoscStatus = (((IP_SCG->FIRCCSR & SCG_FIRCCSR_FIRCVLD_MASK) >> SCG_FIRCCSR_FIRCVLD_SHIFT));
            TimeoutOccurred = ClockTimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
        }
        while ((IrcoscStatus == 0U) && (FALSE == TimeoutOccurred));

        if (FALSE != TimeoutOccurred)
        {
            /* Report timeout error */
            ReportClockErrors(CLOCK_IP_REPORT_TIMEOUT_ERROR, config->name);
        }
    }
}
static void EnableFirc(Clock_Ip_IrcoscConfigType const* config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(EnableFirc_TrustedCall,(config));
  #else
    EnableFirc_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
static void DisableFirc_TrustedCall(Clock_Ip_NameType name)
{
    (void) name;

    /* Disable clock. */
    IP_SCG->FIRCCSR &= ~SCG_FIRCCSR_FIRCEN_MASK;
}
static void DisableFirc(Clock_Ip_NameType name)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(DisableFirc_TrustedCall,(name));
  #else
    DisableFirc_TrustedCall(name);
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
