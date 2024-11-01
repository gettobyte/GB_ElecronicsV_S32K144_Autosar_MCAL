/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : DMA,CACHE,TRGMUX,FLEXIO
*   Dependencies         : none
*
*   Autosar Version      : 4.4.0
*   Autosar Revision     : ASR_REL_4_4_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 1.0.1
*   Build Version        : S32K1_RTD_1_0_1_D2202_ASR_REL_4_4_REV_0000_20220224
*
*   (c) Copyright 2020-2022 NXP Semiconductors
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

#ifndef MCL_IRQ_H
#define MCL_IRQ_H

/**
*   @file CDD_Mcl_Irq.h
*
*   @version 1.0.1
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
#if (STD_ON == MCL_EMIOS_IS_AVAILABLE)
#include "Emios_Mcl_Ip_Irq.h"
#endif /* STD_ON == MCL_EMIOS_IS_AVAILABLE */

/*==================================================================================================
*                                SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CDD_MCL_IRQ_VENDOR_ID                       43
#define CDD_MCL_IRQ_AR_RELEASE_MAJOR_VERSION        4
#define CDD_MCL_IRQ_AR_RELEASE_MINOR_VERSION        4
#define CDD_MCL_IRQ_AR_RELEASE_REVISION_VERSION     0
#define CDD_MCL_IRQ_SW_MAJOR_VERSION                1
#define CDD_MCL_IRQ_SW_MINOR_VERSION                0
#define CDD_MCL_IRQ_SW_PATCH_VERSION                1

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/
#if (STD_ON == MCL_EMIOS_IS_AVAILABLE)
/* Check if header file and Emios_Mcl_Ip_Irq.h file are of the same vendor */
#if (CDD_MCL_IRQ_VENDOR_ID != EMIOS_MCL_IP_IRQ_VENDOR_ID)
    #error "CDD_Mcl_Irq.h and Emios_Mcl_Ip_Irq.h have different vendor ids"
#endif

/* Check if header file and Emios_Mcl_Ip_Irq.h file are of the same Autosar version */
#if ((CDD_MCL_IRQ_AR_RELEASE_MAJOR_VERSION != EMIOS_MCL_IP_IRQ_AR_RELEASE_MAJOR_VERSION) || \
     (CDD_MCL_IRQ_AR_RELEASE_MINOR_VERSION != EMIOS_MCL_IP_IRQ_AR_RELEASE_MINOR_VERSION) || \
     (CDD_MCL_IRQ_AR_RELEASE_REVISION_VERSION != EMIOS_MCL_IP_IRQ_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of CDD_Mcl_Irq.h and Emios_Mcl_Ip_Irq.h are different"
#endif

/* Check if header file and Emios_Mcl_Ip_Irq.h file are of the same Software version */
#if ((CDD_MCL_IRQ_SW_MAJOR_VERSION != EMIOS_MCL_IP_IRQ_SW_MAJOR_VERSION) || \
     (CDD_MCL_IRQ_SW_MINOR_VERSION != EMIOS_MCL_IP_IRQ_SW_MINOR_VERSION) || \
     (CDD_MCL_IRQ_SW_PATCH_VERSION != EMIOS_MCL_IP_IRQ_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of CDD_Mcl_Irq.h and Emios_Mcl_Ip_Irq.h are different"
#endif
#endif /* STD_ON == MCL_EMIOS_IS_AVAILABLE */


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

#endif  /* MCL_IRQ_H */

/*==================================================================================================
 *                                        END OF FILE
==================================================================================================*/
