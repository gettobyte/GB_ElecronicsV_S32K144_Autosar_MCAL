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

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Trgmux_Ip_Cfg.h"

/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define TRGMUX_IP_CFG_VENDOR_ID_C                       43
#define TRGMUX_IP_CFG_AR_RELEASE_MAJOR_VERSION_C        4
#define TRGMUX_IP_CFG_AR_RELEASE_MINOR_VERSION_C        4
#define TRGMUX_IP_CFG_AR_RELEASE_REVISION_VERSION_C     0
#define TRGMUX_IP_CFG_SW_MAJOR_VERSION_C                1
#define TRGMUX_IP_CFG_SW_MINOR_VERSION_C                0
#define TRGMUX_IP_CFG_SW_PATCH_VERSION_C                0

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if Trgmux_Ip_Cfg.c file and Trgmux_Ip_Cfg.h file are of the same vendor */
#if (TRGMUX_IP_CFG_VENDOR_ID_C != TRGMUX_IP_CFG_VENDOR_ID_H)
    #error "Trgmux_Ip_Cfg.c and Trgmux_Ip_Cfg.h have different vendor ids"
#endif

/* Check if Trgmux_Ip_Cfg.c file and Trgmux_Ip_Cfg.h file are of the same Autosar version */
#if ((TRGMUX_IP_CFG_AR_RELEASE_MAJOR_VERSION_C != TRGMUX_IP_CFG_AR_RELEASE_MAJOR_VERSION_H) || \
     (TRGMUX_IP_CFG_AR_RELEASE_MINOR_VERSION_C != TRGMUX_IP_CFG_AR_RELEASE_MINOR_VERSION_H) || \
     (TRGMUX_IP_CFG_AR_RELEASE_REVISION_VERSION_C != TRGMUX_IP_CFG_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Trgmux_Ip_Cfg.c and Trgmux_Ip_Cfg.h are different"
#endif

/* Check if Trgmux_Ip_Cfg.c file and Trgmux_Ip_Cfg.h file are of the same Software version */
#if ((TRGMUX_IP_CFG_SW_MAJOR_VERSION_C != TRGMUX_IP_CFG_SW_MAJOR_VERSION_H) || \
     (TRGMUX_IP_CFG_SW_MINOR_VERSION_C != TRGMUX_IP_CFG_SW_MINOR_VERSION_H) || \
     (TRGMUX_IP_CFG_SW_PATCH_VERSION_C != TRGMUX_IP_CFG_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Trgmux_Ip_Cfg.c and Trgmux_Ip_Cfg.h are different"
#endif


#ifdef __cplusplus
}
#endif

/*==================================================================================================
 *                                        END OF FILE
==================================================================================================*/

