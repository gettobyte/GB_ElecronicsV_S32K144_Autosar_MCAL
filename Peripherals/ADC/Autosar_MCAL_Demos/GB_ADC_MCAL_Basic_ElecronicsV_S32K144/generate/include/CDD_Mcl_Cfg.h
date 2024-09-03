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

#ifndef CDD_MCL_CFG_H_
#define CDD_MCL_CFG_H_

#ifdef __cplusplus
extern "C"{
#endif

/**
* @page misra_violations MISRA-C:2012 violations
**/

/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Mcl_Types.h"
#include "Mcal.h"
#include "Dma_Ip_Cfg.h"
#include "Trgmux_Ip_Cfg.h"
#include "Flexio_Mcl_Ip_Cfg.h"

#include "CDD_Mcl_BOARD_InitPeripherals_PBcfg.h"

/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CDD_MCL_CFG_VENDOR_ID_H                       43
#define CDD_MCL_CFG_AR_RELEASE_MAJOR_VERSION_H        4
#define CDD_MCL_CFG_AR_RELEASE_MINOR_VERSION_H        4
#define CDD_MCL_CFG_AR_RELEASE_REVISION_VERSION_H     0
#define CDD_MCL_CFG_SW_MAJOR_VERSION_H                1
#define CDD_MCL_CFG_SW_MINOR_VERSION_H                0
#define CDD_MCL_CFG_SW_PATCH_VERSION_H                0
/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if header file and Mcal header file are of the same Autosar version */
#if ((CDD_MCL_CFG_AR_RELEASE_MAJOR_VERSION_H != MCAL_AR_RELEASE_MAJOR_VERSION) || \
     (CDD_MCL_CFG_AR_RELEASE_MINOR_VERSION_H != MCAL_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of CDD_Mcl_Cfg.h and Mcal.h are different"
#endif
#endif

/* Check if header file and Mcl_Types.h file are of the same vendor */
#if (CDD_MCL_CFG_VENDOR_ID_H != MCL_TYPES_VENDOR_ID_H)
    #error "CDD_Mcl_Cfg.h and Mcl_Types.h have different vendor ids"
#endif

/* Check if header file and Mcl_Types.h file are of the same Autosar version */
#if ((CDD_MCL_CFG_AR_RELEASE_MAJOR_VERSION_H != MCL_TYPES_AR_RELEASE_MAJOR_VERSION_H) || \
     (CDD_MCL_CFG_AR_RELEASE_MINOR_VERSION_H != MCL_TYPES_AR_RELEASE_MINOR_VERSION_H) || \
     (CDD_MCL_CFG_AR_RELEASE_REVISION_VERSION_H != MCL_TYPES_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of CDD_Mcl_Cfg.h and Mcl_Types.h are different"
#endif

/* Check if header file and Mcl_Types.h file are of the same Software version */
#if ((CDD_MCL_CFG_SW_MAJOR_VERSION_H != MCL_TYPES_SW_MAJOR_VERSION_H) || \
     (CDD_MCL_CFG_SW_MINOR_VERSION_H != MCL_TYPES_SW_MINOR_VERSION_H) || \
     (CDD_MCL_CFG_SW_PATCH_VERSION_H != MCL_TYPES_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of CDD_Mcl_Cfg.h and Mcl_Types.h are different"
#endif

/* Check if header file and Dma_Ip_Cfg.h file are of the same vendor */
#if (CDD_MCL_CFG_VENDOR_ID_H != DMA_IP_CFG_VENDOR_ID_H)
    #error "CDD_Mcl_Cfg.h and Dma_Ip_Cfg.h have different vendor ids"
#endif

/* Check if header file and Dma_Ip_Cfg.h file are of the same Autosar version */
#if ((CDD_MCL_CFG_AR_RELEASE_MAJOR_VERSION_H != DMA_IP_CFG_AR_RELEASE_MAJOR_VERSION_H) || \
     (CDD_MCL_CFG_AR_RELEASE_MINOR_VERSION_H != DMA_IP_CFG_AR_RELEASE_MINOR_VERSION_H) || \
     (CDD_MCL_CFG_AR_RELEASE_REVISION_VERSION_H != DMA_IP_CFG_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of CDD_Mcl_Cfg.h and Dma_Ip_Cfg.h are different"
#endif

/* Check if header file and Dma_Ip_Cfg.h file are of the same Software version */
#if ((CDD_MCL_CFG_SW_MAJOR_VERSION_H != DMA_IP_CFG_SW_MAJOR_VERSION_H) || \
     (CDD_MCL_CFG_SW_MINOR_VERSION_H != DMA_IP_CFG_SW_MINOR_VERSION_H) || \
     (CDD_MCL_CFG_SW_PATCH_VERSION_H != DMA_IP_CFG_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of CDD_Mcl_Cfg.h and Dma_Ip_Cfg.h are different"
#endif

/* Check if header file and Trgmux_Ip_Cfg.h file are of the same vendor */
#if (CDD_MCL_CFG_VENDOR_ID_H != TRGMUX_IP_CFG_VENDOR_ID_H)
    #error "CDD_Mcl_Cfg.h and Trgmux_Ip_Cfg.h have different vendor ids"
#endif

/* Check if header file and Trgmux_Ip_Cfg.h file are of the same Autosar version */
#if ((CDD_MCL_CFG_AR_RELEASE_MAJOR_VERSION_H != TRGMUX_IP_CFG_AR_RELEASE_MAJOR_VERSION_H) || \
     (CDD_MCL_CFG_AR_RELEASE_MINOR_VERSION_H != TRGMUX_IP_CFG_AR_RELEASE_MINOR_VERSION_H) || \
     (CDD_MCL_CFG_AR_RELEASE_REVISION_VERSION_H != TRGMUX_IP_CFG_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of CDD_Mcl_Cfg.h and Trgmux_Ip_Cfg.h are different"
#endif

/* Check if header file and Trgmux_Ip_Cfg.h file are of the same Software version */
#if ((CDD_MCL_CFG_SW_MAJOR_VERSION_H != TRGMUX_IP_CFG_SW_MAJOR_VERSION_H) || \
     (CDD_MCL_CFG_SW_MINOR_VERSION_H != TRGMUX_IP_CFG_SW_MINOR_VERSION_H) || \
     (CDD_MCL_CFG_SW_PATCH_VERSION_H != TRGMUX_IP_CFG_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of CDD_Mcl_Cfg.h and Trgmux_Ip_Cfg.h are different"
#endif

/* Check if header file and Flexio_Mcl_Ip_Cfg.h file are of the same vendor */
#if (CDD_MCL_CFG_VENDOR_ID_H != FLEXIO_MCL_IP_CFG_VENDOR_ID_H)
    #error "CDD_Mcl_Cfg.h and Flexio_Mcl_Ip_Cfg.h have different vendor ids"
#endif

/* Check if header file and Flexio_Mcl_Ip_Cfg.h file are of the same Autosar version */
#if ((CDD_MCL_CFG_AR_RELEASE_MAJOR_VERSION_H != FLEXIO_MCL_IP_CFG_AR_RELEASE_MAJOR_VERSION_H) || \
     (CDD_MCL_CFG_AR_RELEASE_MINOR_VERSION_H != FLEXIO_MCL_IP_CFG_AR_RELEASE_MINOR_VERSION_H) || \
     (CDD_MCL_CFG_AR_RELEASE_REVISION_VERSION_H != FLEXIO_MCL_IP_CFG_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of CDD_Mcl_Cfg.h and Flexio_Mcl_Ip_Cfg.h are different"
#endif

/* Check if header file and Flexio_Mcl_Ip_Cfg.h file are of the same Software version */
#if ((CDD_MCL_CFG_SW_MAJOR_VERSION_H != FLEXIO_MCL_IP_CFG_SW_MAJOR_VERSION_H) || \
     (CDD_MCL_CFG_SW_MINOR_VERSION_H != FLEXIO_MCL_IP_CFG_SW_MINOR_VERSION_H) || \
     (CDD_MCL_CFG_SW_PATCH_VERSION_H != FLEXIO_MCL_IP_CFG_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of CDD_Mcl_Cfg.h and Flexio_Mcl_Ip_Cfg.h are different"
#endif

/* Check if header file and CDD_Mcl_BOARD_InitPeripherals_PBcfg.h file are of the same vendor */
#if (CDD_MCL_CFG_VENDOR_ID_H != CDD_MCL_BOARD_InitPeripherals_PBCFG_VENDOR_ID_H)
    #error "CDD_Mcl_Cfg.h and CDD_Mcl_BOARD_InitPeripherals_PBcfg.h have different vendor ids"
#endif

/* Check if header file and CDD_Mcl_BOARD_InitPeripherals_PBcfg.h file are of the same Autosar version */
#if ((CDD_MCL_CFG_AR_RELEASE_MAJOR_VERSION_H != CDD_MCL_BOARD_InitPeripherals_PBCFG_AR_RELEASE_MAJOR_VERSION_H) || \
     (CDD_MCL_CFG_AR_RELEASE_MINOR_VERSION_H != CDD_MCL_BOARD_InitPeripherals_PBCFG_AR_RELEASE_MINOR_VERSION_H) || \
     (CDD_MCL_CFG_AR_RELEASE_REVISION_VERSION_H != CDD_MCL_BOARD_InitPeripherals_PBCFG_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of CDD_Mcl_Cfg.h and CDD_Mcl_BOARD_InitPeripherals_PBcfg.h are different"
#endif

/* Check if header file and CDD_Mcl_BOARD_InitPeripherals_PBcfg.h file are of the same Software version */
#if ((CDD_MCL_CFG_SW_MAJOR_VERSION_H != CDD_MCL_BOARD_InitPeripherals_PBCFG_SW_MAJOR_VERSION_H) || \
     (CDD_MCL_CFG_SW_MINOR_VERSION_H != CDD_MCL_BOARD_InitPeripherals_PBCFG_SW_MINOR_VERSION_H) || \
     (CDD_MCL_CFG_SW_PATCH_VERSION_H != CDD_MCL_BOARD_InitPeripherals_PBCFG_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of CDD_Mcl_Cfg.h and CDD_Mcl_BOARD_InitPeripherals_PBcfg.h are different"
#endif

/*==================================================================================================
                                           CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/
/*-----------------------------------------------/
/  DEM & DET                                     /
/-----------------------------------------------*/
#define MCL_DEM_IS_AVAILABLE                       STD_OFF

#define MCL_DET_IS_AVAILABLE                       STD_OFF
/*-----------------------------------------------/
/  DMA                                           /
/-----------------------------------------------*/
#define MCL_DMA_CRC_IS_AVAILABLE                   DMA_IP_DMACRC_IS_AVAILABLE

#define MCL_DMA_MASTER_ID_REPLICATION_IS_AVAILABLE DMA_IP_MASTER_ID_REPLICATION_IS_AVAILABLE

#define MCL_DMA_BUFFERED_WRITES_IS_AVAILABLE       DMA_IP_BUFFERED_WRITES_IS_AVAILABLE

#define MCL_DMA_STORE_DST_ADDR_IS_AVAILABLE        DMA_IP_STORE_DST_ADDR_IS_AVAILABLE

#define MCL_DMA_END_OF_PACKET_SIGNAL_IS_AVAILABLE  DMA_IP_END_OF_PACKET_SIGNAL_IS_AVAILABLE

#define MCL_DMA_PREEMPTION_IS_AVAILABLE            DMA_IP_PREEMPTION_IS_AVAILABLE

#define MCL_DMA_DISABLE_PREEMPT_IS_AVAILABLE       DMA_IP_DISABLE_PREEMPT_IS_AVAILABLE

/*-----------------------------------------------/
/  CACHE                                         /
/-----------------------------------------------*/

/*-----------------------------------------------/
/  TRGMUX                                        /
/-----------------------------------------------*/

/*-----------------------------------------------/
/  EMIOS                                         /
/-----------------------------------------------*/

/*-----------------------------------------------/
/  USERMODE                                      /
/-----------------------------------------------*/

#define MCL_USER_MODE_SUPPORT_IS_AVAILABLE    STD_OFF

#ifndef MCAL_ENABLE_USER_MODE_SUPPORT
    #if (STD_ON == MCL_USER_MODE_SUPPORT_IS_AVAILABLE)
        #error MCAL_ENABLE_USER_MODE_SUPPORT is not enabled. For running Mcl in user mode, the MCAL_ENABLE_USER_MODE_SUPPORT needs to be defined
    #endif /* (STD_ON == MCL_USER_MODE_SUPPORT_IS_AVAILABLE) */
#endif /* ifndef MCAL_ENABLE_USER_MODE_SUPPORT */
/*-----------------------------------------------/
/  PRECOMPILE                                    /
/-----------------------------------------------*/

#define MCL_PRECOMPILE_SUPPORT                STD_OFF


/*==================================================================================================
                                             ENUMS
==================================================================================================*/

/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
#if (MCL_DEM_IS_AVAILABLE == STD_ON)
/**
* @brief            DEM error reporting configuration.
* @details          This structure contains information DEM error reporting
*/
typedef struct
{
    Mcal_DemErrorType Mcl_E_TimeoutFailureCfg;
}Mcl_DemConfigType;
#endif /* #if (MCL_DEM_IS_AVAILABLE == STD_ON) */


/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/


/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif    /* CDD_MCL_CFG_H_ */

/*==================================================================================================
 *                                        END OF FILE
==================================================================================================*/

