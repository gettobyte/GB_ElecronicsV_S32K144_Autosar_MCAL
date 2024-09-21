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
#ifndef TRGMUX_IP_DEVASSERT_H_
#define TRGMUX_IP_DEVASSERT_H_

/**
*   @file    Trgmux_Ip_Devassert.h
*
*   @version 1.0.0
*
*   @brief   AUTOSAR Mcl - Trgmux Ip driver header file.
*   @details
*
*   @addtogroup TRGMUX_IP_DRIVER TRGMUX IP Driver
*   @{
*/

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Trgmux_Ip_Types.h"

#if (TRGMUX_IP_IS_AVAILABLE == STD_ON)
/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define TRGMUX_IP_DEVASSERT_VENDOR_ID_H                    43
#define TRGMUX_IP_DEVASSERT_MODULE_ID_H                    255
#define TRGMUX_IP_DEVASSERT_AR_RELEASE_MAJOR_VERSION_H     4
#define TRGMUX_IP_DEVASSERT_AR_RELEASE_MINOR_VERSION_H     4
#define TRGMUX_IP_DEVASSERT_AR_RELEASE_REVISION_VERSION_H  0
#define TRGMUX_IP_DEVASSERT_SW_MAJOR_VERSION_H             1
#define TRGMUX_IP_DEVASSERT_SW_MINOR_VERSION_H             0
#define TRGMUX_IP_DEVASSERT_SW_PATCH_VERSION_H             0

/**
* @page misra_violations MISRA-C:2012 violations
*/

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if header file and Trgmux_Ip_Types.h file are of the same vendor */
#if (TRGMUX_IP_DEVASSERT_VENDOR_ID_H != TRGMUX_IP_TYPES_VENDOR_ID_H)
    #error "Trgmux_Ip_Devassert.h and Trgmux_Ip_Types.h have different vendor ids"
#endif

/* Check if header file and Trgmux_Ip_Types.h file are of the same Autosar version */
#if ((TRGMUX_IP_DEVASSERT_AR_RELEASE_MAJOR_VERSION_H != TRGMUX_IP_TYPES_AR_RELEASE_MAJOR_VERSION_H) || \
     (TRGMUX_IP_DEVASSERT_AR_RELEASE_MINOR_VERSION_H != TRGMUX_IP_TYPES_AR_RELEASE_MINOR_VERSION_H) || \
     (TRGMUX_IP_DEVASSERT_AR_RELEASE_REVISION_VERSION_H != TRGMUX_IP_TYPES_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Trgmux_Ip_Devassert.h and Trgmux_Ip_Types.h are different"
#endif

/* Check if header file and Trgmux_Ip_Types.h file are of the same Software version */
#if ((TRGMUX_IP_DEVASSERT_SW_MAJOR_VERSION_H != TRGMUX_IP_TYPES_SW_MAJOR_VERSION_H) || \
     (TRGMUX_IP_DEVASSERT_SW_MINOR_VERSION_H != TRGMUX_IP_TYPES_SW_MINOR_VERSION_H) || \
     (TRGMUX_IP_DEVASSERT_SW_PATCH_VERSION_H != TRGMUX_IP_TYPES_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Trgmux_Ip_Devassert.h and Trgmux_Ip_Types.h are different"
#endif

/*==================================================================================================
                                           TYPEDEF
==================================================================================================*/
#define MCL_START_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

#if (TRGMUX_IP_DEV_ERROR_DETECT == STD_ON)
    /* Implement default assert macro */
    static inline void Trgmux_Ip_DevAssert(volatile boolean x)
    {
        if(x) { } else { ASM_KEYWORD("BKPT #0"); for(;;) {} }
    }
    #define TRGMUX_IP_DEV_ASSERT(x) Trgmux_Ip_DevAssert(x)
#else
    /* Assert macro does nothing */
    #define TRGMUX_IP_DEV_ASSERT(x) ((void)0)
#endif /* TRGMUX_IP_DEV_ERROR_DETECT == STD_ON */

#define MCL_STOP_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

#endif /* TRGMUX_IP_IS_AVAILABLE */

/** @} */

#endif  /* #ifndef TRGMUX_IP_DEVASSERT_H_ */

/*==================================================================================================
 *                                        END OF FILE
==================================================================================================*/
