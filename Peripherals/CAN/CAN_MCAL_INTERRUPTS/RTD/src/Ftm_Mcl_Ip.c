/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : DMA,CACHE,TRGMUX,FLEXIO
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
*   @file    Ftm_Mcl_Ip.c
*
*   @version 1.0.0
*
*   @brief   AUTOSAR Mcl - Ftm Common driver source file.
*   @details
*
*   @addtogroup FTM_IP_DRIVER FTM IP Driver
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                         INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "OsIf.h"
#include "Ftm_Mcl_Ip.h"

#include "RegLockMacros.h"
#include "Reg_eSys.h"

#if (STD_ON == FTM_MCL_IP_DEV_ERROR_DETECT)
    #include "Devassert.h"
#endif

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define FTM_MCL_IP_VENDOR_ID_C                    43
#define FTM_MCL_IP_AR_RELEASE_MAJOR_VERSION_C     4
#define FTM_MCL_IP_AR_RELEASE_MINOR_VERSION_C     4
#define FTM_MCL_IP_AR_RELEASE_REVISION_VERSION_C  0
#define FTM_MCL_IP_SW_MAJOR_VERSION_C             1
#define FTM_MCL_IP_SW_MINOR_VERSION_C             0
#define FTM_MCL_IP_SW_PATCH_VERSION_C             0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    #if (STD_ON == FTM_MCL_ENABLE_USER_MODE_SUPPORT)
        /* Check if source file and RegLockMacros.h file are of the same AUTOSAR version */
        #if ((FTM_MCL_IP_AR_RELEASE_MAJOR_VERSION_C != REGLOCKMACROS_AR_RELEASE_MAJOR_VERSION) || \
             (FTM_MCL_IP_AR_RELEASE_MINOR_VERSION_C != REGLOCKMACROS_AR_RELEASE_MINOR_VERSION))
            #error "AutoSar Version Numbers of Ftm_Mcl_Ip.c and RegLockMacros.h are different"
        #endif
    #endif
#endif

/* Check if source file and Ftm_Mcl_Ip header file are of the same vendor. */
#if (FTM_MCL_IP_VENDOR_ID_C != FTM_MCL_IP_VENDOR_ID_H)
    #error "Vendor IDs of Ftm_Mcl_Ip.h and Ftm_Mcl_Ip.h are different."
#endif

/* Check if source file and Ftm_Mcl_Ip header file are of the same AUTOSAR version. */
#if ((FTM_MCL_IP_AR_RELEASE_MAJOR_VERSION_C    != FTM_MCL_IP_AR_RELEASE_MAJOR_VERSION_H) || \
     (FTM_MCL_IP_AR_RELEASE_MINOR_VERSION_C    != FTM_MCL_IP_AR_RELEASE_MINOR_VERSION_H) || \
     (FTM_MCL_IP_AR_RELEASE_REVISION_VERSION_C != FTM_MCL_IP_AR_RELEASE_REVISION_VERSION_H))
    #error "AUTOSAR version numbers of Ftm_Mcl_Ip.h and Ftm_Mcl_Ip.h are different."
#endif

/* Check if source file and Ftm_Pwm_Ip_Cfg header file are of the same software version */
#if ((FTM_MCL_IP_SW_MAJOR_VERSION_C != FTM_MCL_IP_SW_MAJOR_VERSION_H) || \
     (FTM_MCL_IP_SW_MINOR_VERSION_C != FTM_MCL_IP_SW_MINOR_VERSION_H) || \
     (FTM_MCL_IP_SW_PATCH_VERSION_C != FTM_MCL_IP_SW_PATCH_VERSION_H))
    #error "Software version numbers of Ftm_Mcl_Ip.h and Ftm_Mcl_Ip.h are different."
#endif

/*==================================================================================================
*                                        LOCAL VARIABLES
==================================================================================================*/
#if (FTM_MCL_SELECT_COMMON_TIMEBASE_API == STD_ON)
#define MCL_START_SEC_CONST_UNSPECIFIED
#include "Mcl_MemMap.h"
/* Table of base addresses for FTM instances. */
static Ftm_Mcl_Ip_BaseType * const ftmBase[] = IP_FTM_BASE_PTRS;

#define MCL_STOP_SEC_CONST_UNSPECIFIED
#include "Mcl_MemMap.h"
#endif /* FTM_MCL_SELECT_COMMON_TIMEBASE_API */

/*==================================================================================================
*                                    LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#if (FTM_MCL_SELECT_COMMON_TIMEBASE_API == STD_ON)
#if (STD_ON == FTM_MCL_ENABLE_USER_MODE_SUPPORT)
#define MCL_START_SEC_CODE
#include "Mcl_MemMap.h"

/**
 * @brief        Enables FTM registers writing in User Mode by configuring REG_PROT
 * @details      Sets the UAA (User Access Allowed) bit of the FTM IP allowing FTM registers writing in User Mode
 *
 * @param[in]    FtmBaseAddr
 *
 * @return       none
 *
 * @pre          Should be executed in supervisor mode
 */
static void Ftm_Mcl_Ip_SetUserAccessAllowed(uint32 FtmBaseAddr);

/*==================================================================================================
*                                        LOCAL FUNCTIONS
==================================================================================================*/
static void Ftm_Mcl_Ip_SetUserAccessAllowed(uint32 FtmBaseAddr)
{
    SET_USER_ACCESS_ALLOWED(FtmBaseAddr, FTM_PROT_MEM_U32);
}

/*==================================================================================================
*                                         LOCAL MACROS
==================================================================================================*/
#if (defined (MCAL_FTM_REG_PROT_AVAILABLE) && (STD_ON == FTM_MCL_ENABLE_USER_MODE_SUPPORT))
    #define Call_Ftm_Mcl_Ip_SetUserAccessAllowed(BaseAddr) OsIf_Trusted_Call1param(Ftm_Mcl_Ip_SetUserAccessAllowed, (BaseAddr))
#else
    #define Call_Ftm_Mcl_Ip_SetUserAccessAllowed(BaseAddr) Ftm_Mcl_Ip_SetUserAccessAllowed(BaseAddr)
#endif

#define MCL_STOP_SEC_CODE
#include "Mcl_MemMap.h"

#endif /* STD_ON == FTM_MCL_ENABLE_USER_MODE_SUPPORT */

/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/
#define MCL_START_SEC_CODE
#include "Mcl_MemMap.h"

/** @implements Ftm_Mcl_Ip_SelectCommonTimebase_Activity */
void Ftm_Mcl_Ip_SelectCommonTimebase(uint8 instance, uint32 syncList)
{
#if (defined(FTM_MCL_IP_DEV_ERROR_DETECT) && (STD_ON == FTM_MCL_IP_DEV_ERROR_DETECT))
    DevAssert(instance < FTM_MCL_IP_NOF_MODULES);
    DevAssert((syncList >> FTM_MCL_IP_NOF_MODULES) == (uint16)0U);
#endif
    uint8  moduleToSync;
    uint32 currentClkSrc;

#if (STD_ON == FTM_MCL_ENABLE_USER_MODE_SUPPORT)
    /* User mode. */
    Call_Ftm_Mcl_Ip_SetUserAccessAllowed((uint32)ftmBase[instance]);
#endif

    for (moduleToSync = 0U; moduleToSync < FTM_MCL_IP_NOF_MODULES; moduleToSync++)
    {
        /* Get index value for FTM module that need to be synchronized */
        if ((uint8)((uint8)syncList & (uint8)(1U << moduleToSync)) == (uint8)(1U << moduleToSync))
        {
#if (STD_ON == FTM_MCL_ENABLE_USER_MODE_SUPPORT)            
            /* User mode. */
            Call_Ftm_Mcl_Ip_SetUserAccessAllowed((uint32)ftmBase[moduleToSync]);
#endif
            /* Save used clock source */
            currentClkSrc = ftmBase[moduleToSync]->SC & FTM_SC_CLKS_MASK;

            /* Stop clock */
            ftmBase[moduleToSync]->SC &= ~FTM_SC_CLKS_MASK;

            /* Set sync bit for the driven module */
            ftmBase[moduleToSync]->CONF = (ftmBase[moduleToSync]->CONF & ~(FTM_CONF_GTBEOUT_MASK | FTM_CONF_GTBEEN_MASK)) | \
                                     FTM_CONF_GTBEEN_MASK;

            /* Start clock again, this can be done directly because it is write 00 on CLKS bits before. */
            ftmBase[moduleToSync]->SC |= currentClkSrc;

            /* Clear counter register */
            ftmBase[moduleToSync]->CNT = (uint32)0U;
        }
    }
    
    /* Set global sync bit for the source module */
    ftmBase[instance]->CONF |= FTM_CONF_GTBEOUT_MASK;
}

#define MCL_STOP_SEC_CODE
#include "Mcl_MemMap.h"

#endif /* FTM_MCL_SELECT_COMMON_TIMEBASE_API */

#ifdef __cplusplus
}
#endif

/** @} */
