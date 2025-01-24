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
*   @file       Clock_Ip_FracDiv.c
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
#define CLOCK_IP_FRACDIV_VENDOR_ID_C                      43
#define CLOCK_IP_FRACDIV_AR_RELEASE_MAJOR_VERSION_C       4
#define CLOCK_IP_FRACDIV_AR_RELEASE_MINOR_VERSION_C       4
#define CLOCK_IP_FRACDIV_AR_RELEASE_REVISION_VERSION_C    0
#define CLOCK_IP_FRACDIV_SW_MAJOR_VERSION_C               1
#define CLOCK_IP_FRACDIV_SW_MINOR_VERSION_C               0
#define CLOCK_IP_FRACDIV_SW_PATCH_VERSION_C               0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Clock_Ip_FracDiv.c file and Clock_Ip_Private.h file are of the same vendor */
#if (CLOCK_IP_FRACDIV_VENDOR_ID_C != CLOCK_IP_PRIVATE_VENDOR_ID)
    #error "Clock_Ip_FracDiv.c and Clock_Ip_Private.h have different vendor ids"
#endif

/* Check if Clock_Ip_FracDiv.c file and Clock_Ip_Private.h file are of the same Autosar version */
#if ((CLOCK_IP_FRACDIV_AR_RELEASE_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MAJOR_VERSION) || \
     (CLOCK_IP_FRACDIV_AR_RELEASE_MINOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MINOR_VERSION) || \
     (CLOCK_IP_FRACDIV_AR_RELEASE_REVISION_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Clock_Ip_FracDiv.c and Clock_Ip_Private.h are different"
#endif

/* Check if Clock_Ip_FracDiv.c file and Clock_Ip_Private.h file are of the same Software version */
#if ((CLOCK_IP_FRACDIV_SW_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MAJOR_VERSION) || \
     (CLOCK_IP_FRACDIV_SW_MINOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MINOR_VERSION) || \
     (CLOCK_IP_FRACDIV_SW_PATCH_VERSION_C != CLOCK_IP_PRIVATE_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Clock_Ip_FracDiv.c and Clock_Ip_Private.h are different"
#endif

/* Clock start section code */
#define MCU_START_SEC_CODE

#include "Mcu_MemMap.h"

static void Callback_FracDivEmpty(Clock_Ip_FracDivConfigType const* config);
static clock_dfs_status_t Callback_FracDivEmptyComplete(Clock_Ip_NameType DfsName);
#ifdef DFS_MFI_MFN
static void ResetDfsMfiMfn(Clock_Ip_FracDivConfigType const *config);
static void SetDfsMfiMfn(Clock_Ip_FracDivConfigType const *config);
static clock_dfs_status_t CompleteDfsMfiMfn(Clock_Ip_NameType DfsName);
#endif

/* Clock stop section code */
#define MCU_STOP_SEC_CODE

#include "Mcu_MemMap.h"

/* Clock start constant section data */
#define MCU_START_SEC_CONST_UNSPECIFIED

#include "Mcu_MemMap.h"

const fracDivCallback fracDivCallbacks[FRACTIONAL_DIVIDER_CALLBACKS_COUNT] =
{
    {
        Callback_FracDivEmpty,            /* Reset */
        Callback_FracDivEmpty,            /* Set */
        Callback_FracDivEmptyComplete,    /* Complete */
    },
#ifdef DFS_MFI_MFN
    {
        ResetDfsMfiMfn,                   /* Reset */
        SetDfsMfiMfn,                     /* Set */
        CompleteDfsMfiMfn,                /* Complete */
    },
#endif
};

/* Clock stop constant section data */
#define MCU_STOP_SEC_CONST_UNSPECIFIED

#include "Mcu_MemMap.h"

/* Clock start section code */
#define MCU_START_SEC_CODE

#include "Mcu_MemMap.h"

static void Callback_FracDivEmpty(Clock_Ip_FracDivConfigType const* config)
{
    (void)config;
    /* No implementation */
}

static clock_dfs_status_t Callback_FracDivEmptyComplete(Clock_Ip_NameType DfsName)
{
    (void)DfsName;
    /* No implementation */
    return STATUS_DFS_NOT_ENABLED;
}

#ifdef DFS_MFI_MFN
static void ResetDfsMfiMfn(Clock_Ip_FracDivConfigType const *config)
{

    uint32 instance      = clockFeatures[config->name][CLOCK_MODULE_INSTANCE];
    uint32 dividerIndex  = clockFeatures[config->name][DIVIDER_INDEX];

    /* Put this fractional divider in reset state */
    dfs[instance]->PORTRESET |= (1UL << dividerIndex);
}
static void SetDfsMfiMfn(Clock_Ip_FracDivConfigType const *config)
{

    uint32 instance      = clockFeatures[config->name][CLOCK_MODULE_INSTANCE];
    uint32 dividerIndex  = clockFeatures[config->name][DIVIDER_INDEX];

    uint32 integerPart     = config->value[0U];          /* Integer part. */
    uint32 fractionalPart  = config->value[1U];          /* Fractional part. */

    uint32 value = 0U;

    /* Check whether fractional divider is enabled */
    if (0U != config->enable)
    {
        /* Write the value by which input signal is divided */
        value |= DFS_DVPORT_MFN(fractionalPart);
        value |= DFS_DVPORT_MFI(integerPart);
        dfs[instance]->DVPORT[dividerIndex] = value;

        /* Get corresponding port out of reset state */
        dfs[instance]->PORTRESET &= ~(1UL << dividerIndex);
    }
}
static clock_dfs_status_t CompleteDfsMfiMfn(Clock_Ip_NameType DfsName)
{
    boolean TimeoutOccurred = FALSE;
    uint32 StartTime;
    uint32 ElapsedTime;
    uint32 TimeoutTicks;
    uint32 DfsPortStatus;

    clock_dfs_status_t status = STATUS_DFS_LOCKED;

    uint32 instance      = clockFeatures[DfsName][CLOCK_MODULE_INSTANCE];
    uint32 dividerIndex  = clockFeatures[DfsName][DIVIDER_INDEX];

    /* Check whether fractional divider is enabled */
    if ((dfs[instance]->PORTRESET & (1UL << dividerIndex)) == 0U)
    {
        ClockStartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_TIMEOUT_VALUE_US);
        /* Wait until this port is locked */
        do
        {
            DfsPortStatus = (((dfs[instance]->PORTSR >> DFS_PORTSR_PORTSTAT_SHIFT) & DFS_PORTSR_PORTSTAT_MASK) & (1UL << dividerIndex));
            TimeoutOccurred = ClockTimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
        }
        while ((DfsPortStatus == 0U) && (FALSE == TimeoutOccurred));

        if (FALSE != TimeoutOccurred)
        {
            status = STATUS_DFS_UNLOCKED;
            /* Report timeout error */
            ReportClockErrors(CLOCK_IP_REPORT_TIMEOUT_ERROR, DfsName);
        }
    }
    else
    {
        status = STATUS_DFS_NOT_ENABLED;
    }

    return status;
}


#endif

/* Clock stop section code */
#define MCU_STOP_SEC_CODE

#include "Mcu_MemMap.h"

/*! @}*/

/*******************************************************************************
 * EOF
 ******************************************************************************/

