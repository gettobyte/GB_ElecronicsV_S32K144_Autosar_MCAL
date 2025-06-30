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

#ifndef CSEC_IP_CFG_H
#define CSEC_IP_CFG_H

/**
*   @file
*
*   @addtogroup CRYPTO
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
#include "S32K144_FTFC.h"
#include "OsIf.h"

/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CSEC_IP_CFG_VENDOR_ID_H                       43
#define CSEC_IP_CFG_SW_MAJOR_VERSION_H                1
#define CSEC_IP_CFG_SW_MINOR_VERSION_H                0
#define CSEC_IP_CFG_SW_PATCH_VERSION_H                0

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/
/* Pre-processor switch to enable/disable development error detection for CSEc IP API */
#define CSEC_IP_DEV_ERROR_DETECT                  (STD_OFF)

/* OsIf counter type used in timeout detection for CSEc IP service request */
#define CSEC_IP_TIMEOUT_OSIF_COUNTER_TYPE         (OSIF_COUNTER_DUMMY)

/* OSIF_COUNTER_DUMMY or OSIF_COUNTER_CUSTOM counter was configured, cancel command timeout will be 10 000 000 ticks */
#define CSEC_IP_CANCEL_CMD_TIMEOUT_U32        ((uint32)10000000U)

/* CSEC_IP definition macros */
#define CSEC_IP_FTFM_MODULE               STD_OFF
#define CSEC_IP_FLASH                     IP_FTFC
#define CSEC_IP_FSTAT_CCIF_MASK           FTFC_FSTAT_CCIF_MASK
#define CSEC_IP_FSTAT_ACCERR_MASK         FTFC_FSTAT_ACCERR_MASK
#define CSEC_IP_FSTAT_FPVIOL_MASK         FTFC_FSTAT_FPVIOL_MASK
#define CSEC_IP_FCNFG_CCIE_MASK           FTFC_FCNFG_CCIE_MASK
#define CSEC_IP_FCNFG_CCIE(x)             FTFC_FCNFG_CCIE(x)

/* Peripheral CSE_PRAM base address */
#define CSEC_IP_PRAM_BASE_U32             ((uint32)0x14001000U)

/* Configured timeout for commands used in APIs */
#define CSEC_IP_TIMEOUT_DURATION_U32      ((uint32)1000000000U)

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


#ifdef __cplusplus
}
#endif

/** @} */

#endif /* CSEC_IP_CFG_H */

