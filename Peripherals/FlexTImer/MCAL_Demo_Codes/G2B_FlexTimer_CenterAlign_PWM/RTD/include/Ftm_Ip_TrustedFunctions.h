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
#ifndef FTM_IP_TRUSTEDFUNCTIONS_H
#define FTM_IP_TRUSTEDFUNCTIONS_H

/**
*   @file    Ftm_Ip_TrustedFunctions.h
*
*   @version 1.0.1
*
*   @brief   AUTOSAR Mcl - Ftm Ip driver source file.
*   @details
*
*   @addtogroup FTM_IP_DRIVER FTM IP Driver
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
#include "Ftm_Mcl_Ip_Cfg.h"

/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define FTM_IP_TRUSTEDFUNCTIONS_VENDOR_ID                       43
#define FTM_IP_TRUSTEDFUNCTIONS_AR_RELEASE_MAJOR_VERSION        4
#define FTM_IP_TRUSTEDFUNCTIONS_AR_RELEASE_MINOR_VERSION        4
#define FTM_IP_TRUSTEDFUNCTIONS_AR_RELEASE_REVISION_VERSION     0
#define FTM_IP_TRUSTEDFUNCTIONS_SW_MAJOR_VERSION                1
#define FTM_IP_TRUSTEDFUNCTIONS_SW_MINOR_VERSION                0
#define FTM_IP_TRUSTEDFUNCTIONS_SW_PATCH_VERSION                1

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/
/* Check if Ftm_Ip_TrustedFunctions.h file and Dma_Ip_Cfg_Defines file are of the same Software version */
#if (FTM_IP_TRUSTEDFUNCTIONS_VENDOR_ID != FTM_MCL_IP_CFG_VENDOR_ID)
    #error "Ftm_Ip_TrustedFunctions.h and Dma_Ip_Cfg_Defines have different vendor ids"
#endif


/* Check if Ftm_Ip_TrustedFunctions.h file and Dma_Ip_Cfg_Defines file are of the same Autosar version */
#if ((FTM_IP_TRUSTEDFUNCTIONS_AR_RELEASE_MAJOR_VERSION != FTM_MCL_IP_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (FTM_IP_TRUSTEDFUNCTIONS_AR_RELEASE_MINOR_VERSION != FTM_MCL_IP_CFG_AR_RELEASE_MINOR_VERSION) || \
     (FTM_IP_TRUSTEDFUNCTIONS_AR_RELEASE_REVISION_VERSION != FTM_MCL_IP_CFG_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Ftm_Ip_TrustedFunctions.h and Dma_Ip_Cfg_Defines are different"
#endif

/* Check if Ftm_Ip_TrustedFunctions.h file and Dma_Ip_Cfg_Defines file are of the same Software version */
#if ((FTM_IP_TRUSTEDFUNCTIONS_SW_MAJOR_VERSION != FTM_MCL_IP_CFG_SW_MAJOR_VERSION) || \
     (FTM_IP_TRUSTEDFUNCTIONS_SW_MINOR_VERSION != FTM_MCL_IP_CFG_SW_MINOR_VERSION) || \
     (FTM_IP_TRUSTEDFUNCTIONS_SW_PATCH_VERSION != FTM_MCL_IP_CFG_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Ftm_Ip_TrustedFunctions.h and Dma_Ip_Cfg_Defines are different"
#endif
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
#if (defined(MCAL_ENABLE_USER_MODE_SUPPORT) && (STD_ON == FTM_MCL_ENABLE_USER_MODE_SUPPORT))

/**
 * @brief        Allow access to registers in user modes
 *
 * @param[in]    FtmBaseAddr      Specifies the memory segment start address.
 * @return       None
 *
 */
extern void Ftm_Mcl_Ip_SetUserAccessAllowed(uint32 FtmBaseAddr);


#endif /* FTM_IP_USER_MODE_SUPPORT_IS_AVAILABLE == STD_ON */

#ifdef __cplusplus
}
#endif

/** @} */

#endif /* FTM_IP_TRUSTEDFUNCTIONS_H */


/*==================================================================================================
 *                                        END OF FILE
==================================================================================================*/
