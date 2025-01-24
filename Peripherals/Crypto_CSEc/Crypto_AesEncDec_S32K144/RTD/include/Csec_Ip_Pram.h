/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : Crypto
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

#ifndef CSEC_IP_PRAM_H
#define CSEC_IP_PRAM_H

/**
*   @file
*
*   @addtogroup CSEC_IP
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                          INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Csec_Ip_Cfg.h"

/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CSEC_IP_PRAM_VENDOR_ID_H                       43
#define CSEC_IP_PRAM_SW_MAJOR_VERSION_H                1
#define CSEC_IP_PRAM_SW_MINOR_VERSION_H                0
#define CSEC_IP_PRAM_SW_PATCH_VERSION_H                0

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/
/* Check if Csec_Ip_Pram header file and Csec_Ip_Cfg header file are of the same vendor */
#if (CSEC_IP_PRAM_VENDOR_ID_H != CSEC_IP_CFG_VENDOR_ID_H)
    #error "Csec_Ip_Pram.h and Csec_Ip_Cfg.h have different vendor ids"
#endif

/* Check if Csec_Ip_Pram header file and Csec_Ip_Cfg header file are of the same Software version */
#if ((CSEC_IP_PRAM_SW_MAJOR_VERSION_H != CSEC_IP_CFG_SW_MAJOR_VERSION_H) || \
     (CSEC_IP_PRAM_SW_MINOR_VERSION_H != CSEC_IP_CFG_SW_MINOR_VERSION_H) || \
     (CSEC_IP_PRAM_SW_PATCH_VERSION_H != CSEC_IP_CFG_SW_PATCH_VERSION_H)    \
    )
    #error "Software Version Numbers of Csec_Ip_Pram.h and Csec_Ip_Cfg.h are different"
#endif

/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/
/* CSE_PRAM - Size of Registers Arrays */
#define CSEC_IP_PRAM_REG_COUNT_U8                         ((uint8)32U)
/* Peripheral CSE_PRAM base pointer */
#define CSEC_IP_PRAM                                      ((Csec_Ip_PramType *)CSEC_IP_PRAM_BASE_U32)
/* Csec_Ip_PramRegister Bit Fields */
#define CSEC_IP_PRAM_REG_DATA_BYTE_X_SHIFT_U32(byteX)     ((uint32)((uint32)24U - ((uint32)8U * (uint32)byteX)))
#define CSEC_IP_PRAM_REG_DATA_BYTE_X_MASK_U32(byteX)      ((uint32)((uint32)0xFFU << CSEC_IP_PRAM_REG_DATA_BYTE_X_SHIFT_U32(byteX)))
#define CSEC_IP_PRAM_REG_DATA_BYTE_X_U32(byteX, value)    (((uint32)(((uint32)(value)) << CSEC_IP_PRAM_REG_DATA_BYTE_X_SHIFT_U32(byteX))) & CSEC_IP_PRAM_REG_DATA_BYTE_X_MASK_U32(byteX))
/* Byte selection value(byteX) */
#define CSEC_IP_BYTE_0_U8                                 ((uint8)0U)
#define CSEC_IP_BYTE_1_U8                                 ((uint8)1U)
#define CSEC_IP_BYTE_2_U8                                 ((uint8)2U)
#define CSEC_IP_BYTE_3_U8                                 ((uint8)3U)

/*==================================================================================================
*                                              ENUMS
==================================================================================================*/

/*==================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/** CSE_PRAM - Register Layout Typedef */
typedef struct
{
    __IO uint32 Csec_Ip_aPramRegister[CSEC_IP_PRAM_REG_COUNT_U8]; /**< CSE PRAM 0 Register to CSE PRAM 31 Register, array offset: 0x0, array step: 0x4 */
} Csec_Ip_PramType;

/*==================================================================================================
*                                  GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                       FUNCTION PROTOTYPES
==================================================================================================*/


#ifdef __cplusplus
}
#endif

/** @} */

#endif /* CSEC_IP_PRAM_H */
