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
 *   @file       Ftm_Mcl_Ip.h
 *
 *   @version    1.0.0
 *
 *   @brief      AUTOSAR Mcl - Ftm Common driver header file.
 *
 *   @addtogroup FTM_IP_DRIVER FTM IP Driver
 *   @{
 */

#ifndef FTM_MCL_IP_H
#define FTM_MCL_IP_H

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "StandardTypes.h"
#include "Ftm_Mcl_Ip_Cfg.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define FTM_MCL_IP_VENDOR_ID_H                    43
#define FTM_MCL_IP_AR_RELEASE_MAJOR_VERSION_H     4
#define FTM_MCL_IP_AR_RELEASE_MINOR_VERSION_H     4
#define FTM_MCL_IP_AR_RELEASE_REVISION_VERSION_H  0
#define FTM_MCL_IP_SW_MAJOR_VERSION_H             1
#define FTM_MCL_IP_SW_MINOR_VERSION_H             0
#define FTM_MCL_IP_SW_PATCH_VERSION_H             0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if header file and StandardTypes.h are of the same AUTOSAR version */
    #if ((FTM_MCL_IP_AR_RELEASE_MAJOR_VERSION_H != STD_AR_RELEASE_MAJOR_VERSION) || \
         (FTM_MCL_IP_AR_RELEASE_MINOR_VERSION_H != STD_AR_RELEASE_MINOR_VERSION))
        #error "AUTOSAR Version Numbers of Ftm_Mcl_Ip.h and StandardTypes.h are different"
    #endif
#endif

/* Check if header file and Ftm_Mcl_Ip_Cfg header file are of the same vendor. */
#if (FTM_MCL_IP_VENDOR_ID_H != FTM_MCL_IP_CFG_VENDOR_ID)
    #error "Vendor IDs of Ftm_Mcl_Ip.h and Ftm_Mcl_Ip_Cfg.h are different."
#endif

/* Check if header file and Ftm_Mcl_Ip_Cfg header file are of the same AUTOSAR version. */
#if ((FTM_MCL_IP_AR_RELEASE_MAJOR_VERSION_H    != FTM_MCL_IP_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (FTM_MCL_IP_AR_RELEASE_MINOR_VERSION_H    != FTM_MCL_IP_CFG_AR_RELEASE_MINOR_VERSION) || \
     (FTM_MCL_IP_AR_RELEASE_REVISION_VERSION_H != FTM_MCL_IP_CFG_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR version numbers of Ftm_Mcl_Ip.h and Ftm_Mcl_Ip_Cfg.h are different."
#endif

/* Check if header file and Ftm_Mcl_Ip_Cfg header file are of the same software version */
#if ((FTM_MCL_IP_SW_MAJOR_VERSION_H != FTM_MCL_IP_CFG_SW_MAJOR_VERSION) || \
     (FTM_MCL_IP_SW_MINOR_VERSION_H != FTM_MCL_IP_CFG_SW_MINOR_VERSION) || \
     (FTM_MCL_IP_SW_PATCH_VERSION_H != FTM_MCL_IP_CFG_SW_PATCH_VERSION))
    #error "Software version numbers of Ftm_Mcl_Ip.h and Ftm_Mcl_Ip_Cfg.h are different."
#endif

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
#if (FTM_MCL_SELECT_COMMON_TIMEBASE_API == STD_ON)
#define MCL_START_SEC_CODE
#include "Mcl_MemMap.h"

/**
 * @brief       Implementation specific function to updates the Global Timebase bits of configured modules.
 * @details     This function is used to set the global timebase bits for modules that support
 *              the global timebase feature. The function selects the module that gives the common timebase
 *              and the modules that are use this timebase (as bits in syncList).
 *              Then it synchronizes the modules.
 *              example:
 *                     syncList is 0x0003 - modules 0 and 1 use the timebase given by instance
 *                     syncList is 0x0005 - modules 0 and 2 use the timebase given by instance
 *
 * @param[in]   instance  FTM module id
 * @param[in]   syncList  FTM module mask value
 * @return      void
 */
void Ftm_Mcl_Ip_SelectCommonTimebase(uint8 instance, uint32 syncList);

#define MCL_STOP_SEC_CODE
#include "Mcl_MemMap.h"
#endif /* FTM_MCL_SELECT_COMMON_TIMEBASE_API */


#ifdef __cplusplus
}
#endif

/** @} */

#endif /* FTM_MCL_IP_H */
