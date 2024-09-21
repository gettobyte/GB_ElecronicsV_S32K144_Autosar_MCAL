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

#ifndef SYSTEM_IP_CFG_H_
#define SYSTEM_IP_CFG_H_

/*==================================================================================================
                                         INCLUDE FILES
==================================================================================================*/
#include "System_Ip_CfgDefines.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define PLATFORM_SYSTEM_IP_CFG_TYPES_VENDOR_ID                    43
#define PLATFORM_SYSTEM_IP_CFG_SW_MAJOR_VERSION                   1
#define PLATFORM_SYSTEM_IP_CFG_SW_MINOR_VERSION                   0
#define PLATFORM_SYSTEM_IP_CFG_SW_PATCH_VERSION                   0

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and System_Ip_TypesDef header file are of the same vendor */
#if (PLATFORM_SYSTEM_IP_CFG_TYPES_VENDOR_ID != PLATFORM_SYSTEM_IP_CFG_DEFINES_TYPES_VENDOR_ID)
    #error "System_Ip_Cfg.h and System_Ip_TypesDef.h have different vendor ids"
#endif

/* Check if current file and System_Ip_TypesDef header file are of the same Software version */
#if ((PLATFORM_SYSTEM_IP_CFG_SW_MAJOR_VERSION != PLATFORM_SYSTEM_IP_CFG_DEFINES_SW_MAJOR_VERSION) || \
     (PLATFORM_SYSTEM_IP_CFG_SW_MINOR_VERSION != PLATFORM_SYSTEM_IP_CFG_DEFINES_SW_MINOR_VERSION) || \
     (PLATFORM_SYSTEM_IP_CFG_SW_PATCH_VERSION != PLATFORM_SYSTEM_IP_CFG_DEFINES_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of System_Ip_Cfg.h and System_Ip_TypesDef.h are different"
#endif
/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/* Development error detection */
#define SYSTEM_IP_DEV_ERROR_DETECT         (STD_OFF)

/* User mode support */
#define SYSTEM_IP_ENABLE_USER_MODE_SUPPORT (STD_OFF)


#endif /* SYSTEM_IP_CFG_H_ */

