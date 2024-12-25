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
#ifndef CDD_MCL_IPW_H_
#define CDD_MCL_IPW_H_

/**
*   @file    CDD_Mcl_Ipw.h
*
*   @version 1.0.0
*
*   @brief   AUTOSAR Mcl - CDD MCL Ipw header file.
*   @details
*
*   @addtogroup MCL_DRIVER MCL IPW Driver
*   @{
*/

/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Ftm_Mcl_Ip.h"

/*==================================================================================================
*                                SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CDD_MCL_IPW_VENDOR_ID_H                       43
#define CDD_MCL_IPW_AR_RELEASE_MAJOR_VERSION_H        4
#define CDD_MCL_IPW_AR_RELEASE_MINOR_VERSION_H        4
#define CDD_MCL_IPW_AR_RELEASE_REVISION_VERSION_H     0
#define CDD_MCL_IPW_SW_MAJOR_VERSION_H                1
#define CDD_MCL_IPW_SW_MINOR_VERSION_H                0
#define CDD_MCL_IPW_SW_PATCH_VERSION_H                0

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/
/* Check if header file and Ftm_Mcl_Ip.h file are of the same vendor */
#if (CDD_MCL_IPW_VENDOR_ID_H != FTM_MCL_IP_VENDOR_ID_H)
    #error "CDD_Mcl_Ipw.h and Ftm_Mcl_Ip.h have different vendor ids"
#endif

/* Check if header file and Ftm_Mcl_Ip.h file are of the same Autosar version */
#if ((CDD_MCL_IPW_AR_RELEASE_MAJOR_VERSION_H != FTM_MCL_IP_AR_RELEASE_MAJOR_VERSION_H) || \
     (CDD_MCL_IPW_AR_RELEASE_MINOR_VERSION_H != FTM_MCL_IP_AR_RELEASE_MINOR_VERSION_H) || \
     (CDD_MCL_IPW_AR_RELEASE_REVISION_VERSION_H != FTM_MCL_IP_AR_RELEASE_REVISION_VERSION_H))
    #error "AutoSar Version Numbers of CDD_Mcl_Ipw.h and Ftm_Mcl_Ip.h are different"
#endif

/* Check if header file and Ftm_Mcl_Ip.h file are of the same Software version */
#if ((CDD_MCL_IPW_SW_MAJOR_VERSION_H != FTM_MCL_IP_SW_MAJOR_VERSION_H) || \
     (CDD_MCL_IPW_SW_MINOR_VERSION_H != FTM_MCL_IP_SW_MINOR_VERSION_H) || \
     (CDD_MCL_IPW_SW_PATCH_VERSION_H != FTM_MCL_IP_SW_PATCH_VERSION_H))
    #error "Software Version Numbers of CDD_Mcl_Ipw.h and Ftm_Mcl_Ip.h are different"
#endif

/*===============================================================================================
                                           ENUMS
===============================================================================================*/

/*===============================================================================================
                                           STRUCTS
===============================================================================================*/

/*==================================================================================================
*                                   GLOBAL FUNCTION PROTOTYPES
==================================================================================================*/

/** @} */

#endif  /* #ifndef CDD_MCL_IPW_H_ */

/*==================================================================================================
 *                                        END OF FILE
==================================================================================================*/
