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

/* Prevention from multiple including the same header */
#if !defined(TRGMUX_IP_HWACC_H_)
#define TRGMUX_IP_HWACC_H_

/**
*   @file    Trgmux_Ip_HwAcc.c
*
*   @version 1.0.1
*
*   @brief   AUTOSAR Mcl - Trgmux Ip driver source file.
*   @details
*
*   @addtogroup TRGMUX_IP_DRIVER TRGMUX IP Driver
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Trgmux_Ip_Devassert.h"

/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define TRGMUX_IP_HWACC_VENDOR_ID                    43
#define TRGMUX_IP_HWACC_MODULE_ID                    255
#define TRGMUX_IP_HWACC_AR_RELEASE_MAJOR_VERSION     4
#define TRGMUX_IP_HWACC_AR_RELEASE_MINOR_VERSION     4
#define TRGMUX_IP_HWACC_AR_RELEASE_REVISION_VERSION  0
#define TRGMUX_IP_HWACC_SW_MAJOR_VERSION             1
#define TRGMUX_IP_HWACC_SW_MINOR_VERSION             0
#define TRGMUX_IP_HWACC_SW_PATCH_VERSION             1

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if Trgmux_Ip_HwAcc.h file and Trgmux_Ip_Devassert.h file are of the same vendor */
#if (TRGMUX_IP_HWACC_VENDOR_ID != TRGMUX_IP_DEVASSERT_VENDOR_ID)
    #error "Trgmux_Ip_HwAcc.h and Trgmux_Ip_Devassert.h have different vendor ids"
#endif

/* Check if Trgmux_Ip_HwAcc.h file and Trgmux_Ip_Devassert.h file are of the same Autosar version */
#if ((TRGMUX_IP_HWACC_AR_RELEASE_MAJOR_VERSION != TRGMUX_IP_DEVASSERT_AR_RELEASE_MAJOR_VERSION) || \
     (TRGMUX_IP_HWACC_AR_RELEASE_MINOR_VERSION != TRGMUX_IP_DEVASSERT_AR_RELEASE_MINOR_VERSION) || \
     (TRGMUX_IP_HWACC_AR_RELEASE_REVISION_VERSION != TRGMUX_IP_DEVASSERT_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Trgmux_Ip_HwAcc.h and Trgmux_Ip_Devassert.h are different"
#endif

/* Check if Trgmux_Ip_HwAcc.h file and Trgmux_Ip_Devassert.h file are of the same Software version */
#if ((TRGMUX_IP_HWACC_SW_MAJOR_VERSION != TRGMUX_IP_DEVASSERT_SW_MAJOR_VERSION) || \
     (TRGMUX_IP_HWACC_SW_MINOR_VERSION != TRGMUX_IP_DEVASSERT_SW_MINOR_VERSION) || \
     (TRGMUX_IP_HWACC_SW_PATCH_VERSION != TRGMUX_IP_DEVASSERT_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Trgmux_Ip_HwAcc.h and Trgmux_Ip_Devassert.h are different"
#endif

#if (STD_ON == TRGMUX_IP_IS_AVAILABLE)
/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
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
*                                       FUNCTION PROTOTYPES
==================================================================================================*/
#define MCL_START_SEC_CODE
#include "Mcl_MemMap.h"

Trgmux_Ip_StatusType hwAcc_Init(TRGMUX_Type * const pTrgmux);

void hwAcc_SetInputForOutput(TRGMUX_Type * const pTrgmux, const uint32 Input, const uint32 Output);

void hwAcc_SetLockForOutput(TRGMUX_Type * const pTrgmux, const uint32 Output);

boolean hwAcc_GetLockForOutput(const TRGMUX_Type * const pTrgmux, const uint32 Output);

#define MCL_STOP_SEC_CODE
#include "Mcl_MemMap.h"

#endif /* TRGMUX_IP_IS_AVAILABLE */

#ifdef __cplusplus
}
#endif

/** @} */

#endif  /* #if !defined(TRGMUX_IP_HWACC_H_) */
