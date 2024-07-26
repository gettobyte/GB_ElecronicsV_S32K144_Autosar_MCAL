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
*   @file       Clock_Ip_Gate.c
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
#define CLOCK_IP_GATE_VENDOR_ID_C                      43
#define CLOCK_IP_GATE_AR_RELEASE_MAJOR_VERSION_C       4
#define CLOCK_IP_GATE_AR_RELEASE_MINOR_VERSION_C       4
#define CLOCK_IP_GATE_AR_RELEASE_REVISION_VERSION_C    0
#define CLOCK_IP_GATE_SW_MAJOR_VERSION_C               1
#define CLOCK_IP_GATE_SW_MINOR_VERSION_C               0
#define CLOCK_IP_GATE_SW_PATCH_VERSION_C               0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Clock_Ip_Gate.c file and Clock_Ip_Private.h file are of the same vendor */
#if (CLOCK_IP_GATE_VENDOR_ID_C != CLOCK_IP_PRIVATE_VENDOR_ID)
    #error "Clock_Ip_Gate.c and Clock_Ip_Private.h have different vendor ids"
#endif

/* Check if Clock_Ip_Gate.c file and Clock_Ip_Private.h file are of the same Autosar version */
#if ((CLOCK_IP_GATE_AR_RELEASE_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MAJOR_VERSION) || \
     (CLOCK_IP_GATE_AR_RELEASE_MINOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MINOR_VERSION) || \
     (CLOCK_IP_GATE_AR_RELEASE_REVISION_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Clock_Ip_Gate.c and Clock_Ip_Private.h are different"
#endif

/* Check if Clock_Ip_Gate.c file and Clock_Ip_Private.h file are of the same Software version */
#if ((CLOCK_IP_GATE_SW_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MAJOR_VERSION) || \
     (CLOCK_IP_GATE_SW_MINOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MINOR_VERSION) || \
     (CLOCK_IP_GATE_SW_PATCH_VERSION_C != CLOCK_IP_PRIVATE_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Clock_Ip_Gate.c and Clock_Ip_Private.h are different"
#endif

/* Clock start section code */
#define MCU_START_SEC_CODE

#include "Mcu_MemMap.h"


static void ClockSetGateEmpty(Clock_Ip_GateConfigType const* config);
static void ClockUpdateGateEmpty(Clock_Ip_NameType clockName, boolean gate);
#ifdef MC_ME_PARTITION_COFB_ENABLE_REQUEST
static void ClockSetGateMcMePartitionCollectionClockRequest(Clock_Ip_GateConfigType const* config);
static void ClockUpdateGateMcMePartitionCollectionClockRequest(Clock_Ip_NameType clockName, boolean gate);
#endif
#ifdef SIM_LPO1K_ENABLE
static void ClockSetSimLPO1KEnable(Clock_Ip_GateConfigType const* config);
static void ClockUpdateSimLPO1KEnable(Clock_Ip_NameType clockName, boolean gate);
#endif
#ifdef SIM_LPO32K_ENABLE
static void ClockSetSimLPO32KEnable(Clock_Ip_GateConfigType const* config);
static void ClockUpdateSimLPO32KEnable(Clock_Ip_NameType clockName, boolean gate);
#endif
#ifdef SIM_CLKOUT_ENABLE
static void ClockSetSimClkoutEnable(Clock_Ip_GateConfigType const* config);
static void ClockUpdateSimClkoutEnable(Clock_Ip_NameType clockName, boolean gate);
#endif
#ifdef PCC_CGC_ENABLE
static void ClockSetPccCgcEnable(Clock_Ip_GateConfigType const* config);
static void ClockUpdatePccCgcEnable(Clock_Ip_NameType clockName, boolean gate);
#endif
#ifdef SIM_PLATCGC_CGC
static void ClockSetSimGate(Clock_Ip_GateConfigType const* config);
static void ClockUpdateSimGate(Clock_Ip_NameType clockName, boolean gate);
#endif
#ifdef SIM_TRACE_ENABLE
static void ClockSetSimTraceEnable(Clock_Ip_GateConfigType const* config);
static void ClockUpdateSimTraceEnable(Clock_Ip_NameType clockName, boolean gate);
#endif
#ifdef CLOCK_CONTROL_ENABLE_GPR_PCTL
static void ClockSetGateClockControlEnableGprPctl(Clock_Ip_GateConfigType const* config);
static void ClockUpdateGateClockControlEnableGprPctl(Clock_Ip_NameType clockName, boolean gate);
#endif


/* Clock stop section code */
#define MCU_STOP_SEC_CODE

#include "Mcu_MemMap.h"

/* Clock start constant section data */
#define MCU_START_SEC_CONST_UNSPECIFIED

#include "Mcu_MemMap.h"

const gateCallback gateCallbacks[GATE_CALLBACKS_COUNT] =
{
    {
        ClockSetGateEmpty,     /* Set */
        ClockUpdateGateEmpty,  /* Update */
    },
#ifdef MC_ME_PARTITION_COFB_ENABLE_REQUEST
    {
        ClockSetGateMcMePartitionCollectionClockRequest,      /* Set */
        ClockUpdateGateMcMePartitionCollectionClockRequest,   /* Update */
    },
#endif

#ifdef PCC_CGC_ENABLE
    {
        ClockSetPccCgcEnable,         /* Set */
        ClockUpdatePccCgcEnable,      /* Update */
    },
#endif
#ifdef SIM_CLKOUT_ENABLE
    {
        ClockSetSimClkoutEnable,      /* Set */
        ClockUpdateSimClkoutEnable,   /* Update */
    },
#endif
#ifdef SIM_LPO32K_ENABLE
    {
        ClockSetSimLPO32KEnable,      /* Set */
        ClockUpdateSimLPO32KEnable,   /* Update */
    },
#endif
#ifdef SIM_LPO1K_ENABLE
    {
        ClockSetSimLPO1KEnable,      /* Set */
        ClockUpdateSimLPO1KEnable,   /* Update */
    },
#endif
#ifdef SIM_PLATCGC_CGC
    {
        ClockSetSimGate,              /* Set */
        ClockUpdateSimGate,           /* Update */
    },
#endif
#ifdef SIM_TRACE_ENABLE
    {
        ClockSetSimTraceEnable,       /* Set */
        ClockUpdateSimTraceEnable,    /* Update */
    },
#endif
#ifdef CLOCK_CONTROL_ENABLE_GPR_PCTL
    {
        ClockSetGateClockControlEnableGprPctl,       /* Set */
        ClockUpdateGateClockControlEnableGprPctl,    /* Update */
    },
#endif
};


/* Clock stop constant section data */
#define MCU_STOP_SEC_CONST_UNSPECIFIED

#include "Mcu_MemMap.h"


/* Clock start section code */
#define MCU_START_SEC_CODE

#include "Mcu_MemMap.h"

static void ClockSetGateEmpty(Clock_Ip_GateConfigType const* config)
{
    (void)config;
    /* No implementation */
}
static void ClockUpdateGateEmpty(Clock_Ip_NameType clockName, boolean gate)
{
    (void)clockName;
    (void)gate;
    /* No implementation */
}

#ifdef MC_ME_PARTITION_COFB_ENABLE_REQUEST
static void ClockSetGateMcMePartitionCollectionClockRequest(Clock_Ip_GateConfigType const* config)
{
    boolean TimeoutOccurred = FALSE;
    uint32 StartTime;
    uint32 ElapsedTime;
    uint32 TimeoutTicks;

    const gateInfoType * gateInformation = &gateInfo[clockFeatures[config->name][GATE_INDEX]];
    uint32 partition      = gateInformation->PARTITION_VALUE;
    uint32 collection     = gateInformation->COLLECTION_VALUE;
    uint32 enableRequest  = gateInformation->REQUEST_VALUE_MASK;


    if (config->enable != 0U)
    {
        if ((mcmeGetPartitions[partition]->PRTN_COFB_STAT[collection] & enableRequest) == 0U)
        {

            mcmeSetPartitions[partition]->PRTN_COFB_CLKEN[collection] |= enableRequest;
            mcmeTriggerPartitions[partition]->PRTN_PCONF  |= MC_ME_PRTN1_PCONF_PCE_MASK;
            mcmeTriggerPartitions[partition]->PRTN_PUPD   |= MC_ME_PRTN1_PUPD_PCUD_MASK;
            McMeEnterKey();

            /* Wait until clock gate is updated */
            ClockStartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_TIMEOUT_VALUE_US);
            do
            {
                TimeoutOccurred = ClockTimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
            }
            while (((mcmeGetPartitions[partition]->PRTN_COFB_STAT[collection] & enableRequest) == 0U) && (FALSE == TimeoutOccurred));
            /* timeout notification */
            if (TRUE == TimeoutOccurred)
            {
                /* Report timeout error */
                ReportClockErrors(CLOCK_IP_REPORT_TIMEOUT_ERROR, config->name);
            }
        }
    }
    else
    {
        if ((mcmeGetPartitions[partition]->PRTN_COFB_STAT[collection] & enableRequest) != 0U)
        {

            mcmeSetPartitions[partition]->PRTN_COFB_CLKEN[collection] &= (~enableRequest);
            mcmeTriggerPartitions[partition]->PRTN_PCONF  |= MC_ME_PRTN1_PCONF_PCE_MASK;
            mcmeTriggerPartitions[partition]->PRTN_PUPD   |= MC_ME_PRTN1_PUPD_PCUD_MASK;
            McMeEnterKey();

            /* Wait until clock gate is updated */
            ClockStartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_TIMEOUT_VALUE_US);
            do
            {
                TimeoutOccurred = ClockTimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
            }
            while (((mcmeGetPartitions[partition]->PRTN_COFB_STAT[collection] & enableRequest) != 0U) && (FALSE == TimeoutOccurred));
            /* timeout notification */
            if (TRUE == TimeoutOccurred)
            {
                /* Report timeout error */
                ReportClockErrors(CLOCK_IP_REPORT_TIMEOUT_ERROR, config->name);
            }
        }
    }
}

static void ClockUpdateGateMcMePartitionCollectionClockRequest(Clock_Ip_NameType clockName, boolean gate)
{
    Clock_Ip_GateConfigType config;
    config.name = clockName;
    if (gate == TRUE)
    {
        config.enable = 0U;
    }
    else
    {
        config.enable = 1U;
    }
    /* Write configuration to register */
    ClockSetGateMcMePartitionCollectionClockRequest(&config);
}
#endif

#ifdef SIM_LPO1K_ENABLE
/* Write configuration of clock gate to register */
static void ClockSetSimLPO1KEnable_TrustedCall(Clock_Ip_GateConfigType const* config)
{
    uint32 regValue;

    regValue = IP_SIM->LPOCLKS;
    regValue &= ~SIM_LPOCLKS_LPO1KCLKEN_MASK;
    regValue |= ((uint32)(config->enable) << SIM_LPOCLKS_LPO1KCLKEN_SHIFT);
    IP_SIM->LPOCLKS = regValue;
}
static void ClockSetSimLPO1KEnable(Clock_Ip_GateConfigType const* config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(ClockSetSimLPO1KEnable_TrustedCall,(config));
  #else
    ClockSetSimLPO1KEnable_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}

static void ClockUpdateSimLPO1KEnable(Clock_Ip_NameType clockName, boolean gate)
{
    Clock_Ip_GateConfigType config;
    config.name = clockName;
    if (gate == TRUE)
    {
        config.enable = 0U;
    }
    else
    {
        config.enable = 1U;
    }
    /* Write configuration to register */
    ClockSetSimLPO1KEnable(&config);
}
#endif

#ifdef SIM_LPO32K_ENABLE
/* Write configuration of clock gate to register */
static void ClockSetSimLPO32KEnable_TrustedCall(Clock_Ip_GateConfigType const* config)
{
    uint32 regValue;

    regValue = IP_SIM->LPOCLKS;
    regValue &= ~SIM_LPOCLKS_LPO32KCLKEN_MASK;
    regValue |= ((uint32)(config->enable) << SIM_LPOCLKS_LPO32KCLKEN_SHIFT);
    IP_SIM->LPOCLKS = regValue;
}
static void ClockSetSimLPO32KEnable(Clock_Ip_GateConfigType const* config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(ClockSetSimLPO32KEnable_TrustedCall,(config));
  #else
    ClockSetSimLPO32KEnable_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
static void ClockUpdateSimLPO32KEnable(Clock_Ip_NameType clockName, boolean gate)
{
    Clock_Ip_GateConfigType config;
    config.name = clockName;
    if (gate == TRUE)
    {
        config.enable = 0U;
    }
    else
    {
        config.enable = 1U;
    }
    /* Write configuration to register */
    ClockSetSimLPO32KEnable(&config);
}
#endif

#ifdef SIM_CLKOUT_ENABLE
/* Write configuration of clock gate to register */
static void ClockSetSimClkoutEnable_TrustedCall(Clock_Ip_GateConfigType const* config)
{
    uint32 regValue;

    regValue = IP_SIM->CHIPCTL;
    regValue &= ~SIM_CHIPCTL_CLKOUTEN_MASK;
    regValue |= ((uint32)(config->enable) << SIM_CHIPCTL_CLKOUTEN_SHIFT);
    IP_SIM->CHIPCTL = regValue;
}
static void ClockSetSimClkoutEnable(Clock_Ip_GateConfigType const* config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(ClockSetSimClkoutEnable_TrustedCall,(config));
  #else
    ClockSetSimClkoutEnable_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
static void ClockUpdateSimClkoutEnable(Clock_Ip_NameType clockName, boolean gate)
{
    Clock_Ip_GateConfigType config;
    config.name = clockName;
    if (gate == TRUE)
    {
        config.enable = 0U;
    }
    else
    {
        config.enable = 1U;
    }
    /* Write configuration to register */
    ClockSetSimClkoutEnable(&config);
}
#endif

#ifdef PCC_CGC_ENABLE
/* Write configuration of clock gate to register */
static void ClockSetPccCgcEnable_TrustedCall(Clock_Ip_GateConfigType const* config)
{
    uint32 regValue;

    regValue = IP_PCC->PCCn[clockFeatures[config->name][GATE_INDEX]];
    regValue &= ~PCC_PCCn_CGC_MASK;
    regValue |= ((uint32)(config->enable) << PCC_PCCn_CGC_SHIFT);
    IP_PCC->PCCn[clockFeatures[config->name][GATE_INDEX]] = regValue;

}
static void ClockSetPccCgcEnable(Clock_Ip_GateConfigType const* config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(ClockSetPccCgcEnable_TrustedCall,(config));
  #else
    ClockSetPccCgcEnable_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
static void ClockUpdatePccCgcEnable(Clock_Ip_NameType clockName, boolean gate)
{
    Clock_Ip_GateConfigType config;
    config.name = clockName;
    if (gate == TRUE)
    {
        config.enable = 0U;
    }
    else
    {
        config.enable = 1U;
    }
    /* Write configuration to register */
    ClockSetPccCgcEnable(&config);
}
#endif


#ifdef SIM_PLATCGC_CGC
#define SIM_PLATCGC_CGC_SHIFT(x)   (x)
#define SIM_PLATCGC_CGC_MASK(x)  ((uint32)1U << (x))
/* Write configuration of clock gate to register */
static void ClockSetSimGate_TrustedCall(Clock_Ip_GateConfigType const* config)
{
    uint32 enable = config->enable;
    uint32 gateIndex = clockFeatures[config->name][GATE_INDEX];

    uint32 regValue = (uint32 )IP_SIM->PLATCGC;
    regValue &= (~((uint32 )SIM_PLATCGC_CGC_MASK(gateIndex)));
    regValue |= enable << SIM_PLATCGC_CGC_SHIFT(gateIndex);
    IP_SIM->PLATCGC = (uint32 )regValue;
}
static void ClockSetSimGate(Clock_Ip_GateConfigType const* config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(ClockSetSimGate_TrustedCall,(config));
  #else
    ClockSetSimGate_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
static void ClockUpdateSimGate(Clock_Ip_NameType clockName, boolean gate)
{
    Clock_Ip_GateConfigType config;
    config.name = clockName;
    if (gate == TRUE)
    {
        config.enable = 0U;
    }
    else
    {
        config.enable = 1U;
    }
    /* Write configuration to register */
    ClockSetSimGate(&config);
}
#endif

#ifdef SIM_TRACE_ENABLE
/* Write configuration of clock gate to register */
static void ClockSetSimTraceEnable_TrustedCall(Clock_Ip_GateConfigType const* config)
{
    uint32 regValue;

    regValue = IP_SIM->CLKDIV4;
    if (config->enable == 1U)
    {
        regValue |= (SIM_CLKDIV4_TRACEDIVEN_MASK);
    }
    else
    {
        regValue &= ~(SIM_CLKDIV4_TRACEDIVEN_MASK);
    }
    IP_SIM->CLKDIV4 = regValue;
}
static void ClockSetSimTraceEnable(Clock_Ip_GateConfigType const* config)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(ClockSetSimTraceEnable_TrustedCall,(config));
  #else
    ClockSetSimTraceEnable_TrustedCall(config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}

static void ClockUpdateSimTraceEnable(Clock_Ip_NameType clockName, boolean gate)
{
    Clock_Ip_GateConfigType config;
    config.name = clockName;
    if (gate == TRUE)
    {
        config.enable = 0U;
    }
    else
    {
        config.enable = 1U;
    }
    /* Write configuration to register */
    ClockSetSimTraceEnable(&config);
}
#endif




#ifdef CLOCK_CONTROL_ENABLE_GPR_PCTL
/* Write configuration of clock gate to register */
static void ClockSetGateClockControlEnableGprPctl(Clock_Ip_GateConfigType const* config)
{
    const gateInfoType * gateInformation = &gateInfo[clockFeatures[config->name][GATE_INDEX]];
    uint32 groupIndex      = gateInformation->pGroupIndex;
    uint32 gateIndex       = gateInformation->pGateIndex;

    if (config->enable != 0U)
    {
        gprClockControlEnable[groupIndex]->PCTL[gateIndex] |= GPR_PCTL_MASK;
    }
    else
    {
        gprClockControlEnable[groupIndex]->PCTL[gateIndex] &= ~GPR_PCTL_MASK;
    }
}
static void ClockUpdateGateClockControlEnableGprPctl(Clock_Ip_NameType clockName, boolean gate)
{
    Clock_Ip_GateConfigType config;
    config.name = clockName;
    if (gate == TRUE)
    {
        config.enable = 0U;
    }
    else
    {
        config.enable = 1U;
    }
    /* Write configuration to register */
    ClockSetGateClockControlEnableGprPctl(&config);
}
#endif


/* Clock stop section code */
#define MCU_STOP_SEC_CODE

#include "Mcu_MemMap.h"

/*! @}*/

/*******************************************************************************
 * EOF
 ******************************************************************************/

