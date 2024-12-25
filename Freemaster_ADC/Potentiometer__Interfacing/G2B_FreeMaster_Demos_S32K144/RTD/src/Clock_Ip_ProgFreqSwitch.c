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
*   @file       Clock_Ip_ProgFreqSwitch.c
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
#define CLOCK_IP_PROGFREQSWITCH_VENDOR_ID_C                      43
#define CLOCK_IP_PROGFREQSWITCH_AR_RELEASE_MAJOR_VERSION_C       4
#define CLOCK_IP_PROGFREQSWITCH_AR_RELEASE_MINOR_VERSION_C       4
#define CLOCK_IP_PROGFREQSWITCH_AR_RELEASE_REVISION_VERSION_C    0
#define CLOCK_IP_PROGFREQSWITCH_SW_MAJOR_VERSION_C               1
#define CLOCK_IP_PROGFREQSWITCH_SW_MINOR_VERSION_C               0
#define CLOCK_IP_PROGFREQSWITCH_SW_PATCH_VERSION_C               0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Clock_Ip_ProgFreqSwitch.c file and Clock_Ip_Private.h file are of the same vendor */
#if (CLOCK_IP_PROGFREQSWITCH_VENDOR_ID_C != CLOCK_IP_PRIVATE_VENDOR_ID)
    #error "Clock_Ip_ProgFreqSwitch.c and Clock_Ip_Private.h have different vendor ids"
#endif

/* Check if Clock_Ip_ProgFreqSwitch.c file and Clock_Ip_Private.h file are of the same Autosar version */
#if ((CLOCK_IP_PROGFREQSWITCH_AR_RELEASE_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MAJOR_VERSION) || \
     (CLOCK_IP_PROGFREQSWITCH_AR_RELEASE_MINOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MINOR_VERSION) || \
     (CLOCK_IP_PROGFREQSWITCH_AR_RELEASE_REVISION_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Clock_Ip_ProgFreqSwitch.c and Clock_Ip_Private.h are different"
#endif

/* Check if Clock_Ip_ProgFreqSwitch.c file and Clock_Ip_Private.h file are of the same Software version */
#if ((CLOCK_IP_PROGFREQSWITCH_SW_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MAJOR_VERSION) || \
     (CLOCK_IP_PROGFREQSWITCH_SW_MINOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MINOR_VERSION) || \
     (CLOCK_IP_PROGFREQSWITCH_SW_PATCH_VERSION_C != CLOCK_IP_PRIVATE_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Clock_Ip_ProgFreqSwitch.c and Clock_Ip_Private.h are different"
#endif

/*==================================================================================================
                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

#ifdef CGM_X_PCFS_SDUR_DIVC_DIVE_DIVS
/* Pcfs settings that are dependent on device */
#define A_MAX_SIZE 6U

/* microA per MHz */
#define DYNAMIC_IDD_CHANGE 2360U

#define DIVIDE_BY_1000000                              1000000U
#define DIVIDE_BY_100000                               100000U
#define CONSTANT_2048000                               (1024U * 2000U)
#endif


/*==================================================================================================
                                       LOCAL CONSTANTS
==================================================================================================*/

/* Clock start constant section data */
#define MCU_START_SEC_CONST_UNSPECIFIED
#include "Mcu_MemMap.h"

#ifdef CGM_X_PCFS_SDUR_DIVC_DIVE_DIVS
static const uint32 aMax[A_MAX_SIZE] = {0U,5U,10U,15U,20U,100U};
static const uint32 pcfsRate[A_MAX_SIZE] = {0U,12U,48U,112U,184U,1000U};
#endif

/* Clock stop constant section data */
#define MCU_STOP_SEC_CONST_UNSPECIFIED
#include "Mcu_MemMap.h"


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


static void ProgressiveFrequencyClockSwitchEmpty(Clock_Ip_PcfsConfigType const* config);
#ifdef CGM_X_PCFS_SDUR_SDUR
static void CgmXPcfsSdurSdur(Clock_Ip_PcfsConfigType const *config);
#endif
#ifdef CGM_X_PCFS_SDUR_DIVC_DIVE_DIVS
static void CgmXPcfsSdurDivcDiveDivs(Clock_Ip_PcfsConfigType const *config);
#endif

/* Clock stop section code */
#define MCU_STOP_SEC_CODE

#include "Mcu_MemMap.h"

/* Clock start constant section data */
#define MCU_START_SEC_CONST_UNSPECIFIED

#include "Mcu_MemMap.h"

const pcfsCallback pcfsCallbacks[PCFS_CALLBACKS_COUNT] =
{
    {
        ProgressiveFrequencyClockSwitchEmpty,     /* Set */

    },
#ifdef CGM_X_PCFS_SDUR_SDUR
    {
        CgmXPcfsSdurSdur,                          /* Set */
    },
#endif
#ifdef CGM_X_PCFS_SDUR_DIVC_DIVE_DIVS
    {
            CgmXPcfsSdurDivcDiveDivs,              /* Set */
    },
#endif
};

/* Clock stop constant section data */
#define MCU_STOP_SEC_CONST_UNSPECIFIED

#include "Mcu_MemMap.h"


/* Clock start section code */
#define MCU_START_SEC_CODE

#include "Mcu_MemMap.h"

static void ProgressiveFrequencyClockSwitchEmpty(Clock_Ip_PcfsConfigType const* config)
{
    (void)config;
    /* No implementation */
}


#ifdef CGM_X_PCFS_SDUR_SDUR
static void CgmXPcfsSdurSdur(Clock_Ip_PcfsConfigType const *config)
{
    uint32 instance      = clockFeatures[config->name][CLOCK_MODULE_INSTANCE];
    uint32 hwIndex       = clockFeatures[config->name][PCFS_HW_INDEX];
    uint32 swIndex       = clockFeatures[config->name][PCFS_SW_INDEX];
    pcfsEntry *pcfs      = GetPcfs(swIndex);

    cgmPcfs[instance]->PCFS_SDUR = MC_CGM_PCFS_SDUR_SDUR(pcfs->sdur);
    (void)hwIndex;    /* hw index is not used because divc_init, divc_rate, divc_rate, div_startValue, div_endValue registers are not implemented */

    /* No implementation */
}
#endif


#ifdef CGM_X_PCFS_SDUR_DIVC_DIVE_DIVS
static void CgmXPcfsSdurDivcDiveDivs(Clock_Ip_PcfsConfigType const *config)
{
    volatile cgmPcfs_Type* cgmPcfs_base  = cgmPcfs[clockFeatures[config->selectorName][CLOCK_MODULE_INSTANCE]];
    uint32 hwIndex                       = clockFeatures[config->name][PCFS_INDEX];

    static uint32 hash[CMU_INFO_SIZE];

    uint32 finput = 0U, fsafe = 0U;
    uint32 amaxBrut;
    uint32 RATE = 0U;
    uint32 i, var1, var2, var3, K;

    uint32 sdur, divc_init, divc_rate, div_startValue, div_endValue;

#if (defined(CLOCK_IP_DEV_ERROR_DETECT) && (CLOCK_IP_DEV_ERROR_DETECT == STD_ON))
        CLOCK_DEV_ASSERT(config->selectorName != RESERVED_CLK);
#endif

    if (hash[clockFeatures[config->name][PCFS_INDEX]] != ((((uint32)config->clockSourceFrequency) ^ ((uint32)config->maxAllowableIDDchange) ^ ((uint32)config->name)  ^ ((uint32)config->selectorName) ^ ((uint32)config->stepDuration))))
    {
        hash[clockFeatures[config->name][PCFS_INDEX]] = ((((uint32)config->clockSourceFrequency) ^ ((uint32)config->maxAllowableIDDchange) ^ ((uint32)config->name)  ^ ((uint32)config->selectorName) ^ ((uint32)config->stepDuration)));

        finput = config->clockSourceFrequency / DIVIDE_BY_1000000;
    #if defined(FEATURE_CLOCK_IP_HAS_FIRC_CLK)
        fsafe = GetConfiguredFrequencyValue(FIRC_CLK) / DIVIDE_BY_1000000;
    #endif        

#if (defined(CLOCK_IP_DEV_ERROR_DETECT) && (CLOCK_IP_DEV_ERROR_DETECT == STD_ON))
        CLOCK_DEV_ASSERT(finput != 0U);
        CLOCK_DEV_ASSERT(fsafe != 0U);
        CLOCK_DEV_ASSERT(config->maxAllowableIDDchange != 0U);
        CLOCK_DEV_ASSERT(config->stepDuration != 0U);
#endif

        /* Calculate amax=fchg/Finput */
        amaxBrut = (config->maxAllowableIDDchange * config->stepDuration * DIVIDE_BY_100000 / (finput * DYNAMIC_IDD_CHANGE));
        RATE = amaxBrut;

        /* Round pcfs rate by rounding amax */
        if (amaxBrut < aMax[0U])
        {
            RATE = pcfsRate[0U];
        }
        else if (amaxBrut > aMax[A_MAX_SIZE-1U])
        {
            RATE = pcfsRate[A_MAX_SIZE-1U];
        }
        else
        {
            for (i = 1U; i < (uint8)A_MAX_SIZE; i++)
            {
                if (aMax[i-1U] < amaxBrut)
                {
                    RATE = pcfsRate[i];
                }
            }
        }

        /* Calculate K by using formula k = ceil(0.5 + sqrt(0.25 - (2000 * (1 -(Finput/fsafe)) / RATE))) */

        var1 = 256U + ((CONSTANT_2048000 * finput) / (fsafe * RATE)) - (CONSTANT_2048000 / RATE);
        var2 = 1UL << 30U;   /* The second-to-top bit is set: use 1u << 14 for uint16 type; use 1uL<<30 for uint32 type  */
        var3 = 0U;

        /* Implement sqrt from K formula by using a square-root computing in embedded C */

        /* "one" starts at the highest power of four <= than the argument */
        while (var2 > var1)
        {
            var2 = var2 >> 2;
        }
        /* Implement sqrt from K formula by using a square-root computing in embedded C */

        while (var2 != 0U)
        {
            if (var1 >= (var3 + var2))
            {
                var1 = var1 - (var3 + var2);
                var3 = var3 + (var2 << 1U);
            }

            var3 = var3 >> 1U;
            var2 = var2 >> 2U;
        }

        K = (64U + 127U + (var3 << 2U)) >> 7U;   /* Calculated K from k = ceil(0.5 + sqrt(0.25 - (2000 * (1 -(Fi/fsafe)) / RATE))) */

        sdur = config->stepDuration * fsafe;
        divc_init = RATE * K;
        divc_rate = RATE;
        div_startValue = 999U + ((RATE * K * (K+1U)) >> 1U);
        div_endValue = (finput * 1000U / fsafe) - 1U;

        /* Configure pcfs registers */
        cgmPcfs_base->PCFS_SDUR = MC_CGM_PCFS_SDUR_SDUR(sdur);
        cgmPcfs_base->PCFS[hwIndex].DIVC = MC_CGM_PCFS_DIVC_RATE(divc_rate) | MC_CGM_PCFS_DIVC_INIT(divc_init);
        cgmPcfs_base->PCFS[hwIndex].DIVE = MC_CGM_PCFS_DIVE_DIVE(div_endValue);
        cgmPcfs_base->PCFS[hwIndex].DIVS = MC_CGM_PCFS_DIVS_DIVS(div_startValue);
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
