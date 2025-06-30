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

/* Prevention from multiple including the same header */
#ifndef CACHE_IP_TYPES_H_
#define CACHE_IP_TYPES_H_

/**
*   @file    Cache_Ip_Types.h
*
*   @version 1.0.0
*
*   @brief   AUTOSAR Mcl - Cache Ip driver header file.
*   @details
*
*   @addtogroup CACHE_IP_DRIVER CACHE IP Driver
*   @{
*/

/*==================================================================================================
*                                          INCLUDE FILES
*  1) system and project includes
*  2) needed interfaces from external units
*  3) internal and external interfaces from this unit
==================================================================================================*/
#include "StandardTypes.h"
#include "Cache_Ip_Cfg_DeviceRegisters.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CACHE_IP_TYPES_VENDOR_ID_H                       43
#define CACHE_IP_TYPES_AR_RELEASE_MAJOR_VERSION_H        4
#define CACHE_IP_TYPES_AR_RELEASE_MINOR_VERSION_H        4
#define CACHE_IP_TYPES_AR_RELEASE_REVISION_VERSION_H     0
#define CACHE_IP_TYPES_SW_MAJOR_VERSION_H                1
#define CACHE_IP_TYPES_SW_MINOR_VERSION_H                0
#define CACHE_IP_TYPES_SW_PATCH_VERSION_H                0

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if header file and StandardTypes header file are of the same Autosar version */
#if ((CACHE_IP_TYPES_AR_RELEASE_MAJOR_VERSION_H != STD_AR_RELEASE_MAJOR_VERSION) || \
     (CACHE_IP_TYPES_AR_RELEASE_MINOR_VERSION_H != STD_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Dma_Ip_Cfg_Defines.h and StandardTypes.h are different"
#endif
#endif

/* Check if header file and Cache_Ip_DeviceRegisters.h file are of the same vendor */
#if (CACHE_IP_TYPES_VENDOR_ID_H != CACHE_IP_CFG_DEVICEREGISTERS_VENDOR_ID_H)
    #error "Cache_Ip_Types.h and Cache_Ip_DeviceRegisters.h have different vendor ids"
#endif

/* Check if header file and Cache_Ip_DeviceRegisters.h file are of the same Autosar version */
#if ((CACHE_IP_TYPES_AR_RELEASE_MAJOR_VERSION_H != CACHE_IP_CFG_DEVICEREGISTERS_AR_RELEASE_MAJOR_VERSION_H) || \
     (CACHE_IP_TYPES_AR_RELEASE_MINOR_VERSION_H != CACHE_IP_CFG_DEVICEREGISTERS_AR_RELEASE_MINOR_VERSION_H) || \
     (CACHE_IP_TYPES_AR_RELEASE_REVISION_VERSION_H != CACHE_IP_CFG_DEVICEREGISTERS_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Cache_Ip_Types.h and Cache_Ip_DeviceRegisters.h are different"
#endif

/* Check if header file and Cache_Ip_DeviceRegisters.h file are of the same Software version */
#if ((CACHE_IP_TYPES_SW_MAJOR_VERSION_H != CACHE_IP_CFG_DEVICEREGISTERS_SW_MAJOR_VERSION_H) || \
     (CACHE_IP_TYPES_SW_MINOR_VERSION_H != CACHE_IP_CFG_DEVICEREGISTERS_SW_MINOR_VERSION_H) || \
     (CACHE_IP_TYPES_SW_PATCH_VERSION_H != CACHE_IP_CFG_DEVICEREGISTERS_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Cache_Ip_Types.h and Cache_Ip_DeviceRegisters.h are different"
#endif

/** @} */

#endif  /* #ifndef CACHE_IP_TYPES_H_ */

/*==================================================================================================
 *                                        END OF FILE
==================================================================================================*/
