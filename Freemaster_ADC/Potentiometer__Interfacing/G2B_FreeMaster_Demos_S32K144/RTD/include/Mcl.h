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

#ifndef MCL_H_
#define MCL_H_

/**
*   @file Mcl.h
*
*   @version 1.0.0
*
*   @brief   AUTOSAR Mcl - MCL driver header file.
*   @details 
*
*   @addtogroup MCL_DRIVER MCL Driver
*   @{
*/

#ifdef __cplusplus
extern "C"
{
#endif


/*==================================================================================================
*                                          INCLUDE FILES
*  1) system and project includes
*  2) needed interfaces from external units
*  3) internal and external interfaces from this unit
==================================================================================================*/
#include "CDD_Mcl.h"

/*==================================================================================================
*                                SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define MCL_MODULE_ID_H                       255
#define MCL_VENDOR_ID_H                       43
#define MCL_AR_RELEASE_MAJOR_VERSION_H        4
#define MCL_AR_RELEASE_MINOR_VERSION_H        4
#define MCL_AR_RELEASE_REVISION_VERSION_H     0
#define MCL_SW_MAJOR_VERSION_H                1
#define MCL_SW_MINOR_VERSION_H                0
#define MCL_SW_PATCH_VERSION_H                0

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/
/* Check if header file and CDD_Mcl.h file are of the same vendor */
#if (MCL_VENDOR_ID_H != CDD_MCL_VENDOR_ID_H)
    #error "Mcl.h and CDD_Mcl.h have different vendor ids"
#endif

/* Check if header file and CDD_Mcl.h file are of the same Autosar version */
#if ((MCL_AR_RELEASE_MAJOR_VERSION_H != CDD_MCL_AR_RELEASE_MAJOR_VERSION_H) || \
     (MCL_AR_RELEASE_MINOR_VERSION_H != CDD_MCL_AR_RELEASE_MINOR_VERSION_H) || \
     (MCL_AR_RELEASE_REVISION_VERSION_H != CDD_MCL_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Mcl.h and CDD_Mcl.h are different"
#endif

/* Check if header file and CDD_Mcl.h file are of the same Software version */
#if ((MCL_SW_MAJOR_VERSION_H != CDD_MCL_SW_MAJOR_VERSION_H) || \
     (MCL_SW_MINOR_VERSION_H != CDD_MCL_SW_MINOR_VERSION_H) || \
     (MCL_SW_PATCH_VERSION_H != CDD_MCL_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Mcl.h and CDD_Mcl.h are different"
#endif
 
/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                        DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                              ENUMS
==================================================================================================*/

/*==================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                  GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                      FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */

#endif  /* MCL_H_ */

/*==================================================================================================
 *                                        END OF FILE
==================================================================================================*/

