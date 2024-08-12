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
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Trgmux_Ip_Cfg.h"

/*==================================================================================================
*                                    SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define TRGMUX_IP_BOARD_InitPeripherals_PBCFG_MODULE_ID_C                     255
#define TRGMUX_IP_BOARD_InitPeripherals_PBCFG_VENDOR_ID_C                     43
#define TRGMUX_IP_BOARD_InitPeripherals_PBCFG_AR_RELEASE_MAJOR_VERSION_C      4
#define TRGMUX_IP_BOARD_InitPeripherals_PBCFG_AR_RELEASE_MINOR_VERSION_C      4
#define TRGMUX_IP_BOARD_InitPeripherals_PBCFG_AR_RELEASE_REVISION_VERSION_C   0
#define TRGMUX_IP_BOARD_InitPeripherals_PBCFG_SW_MAJOR_VERSION_C              1
#define TRGMUX_IP_BOARD_InitPeripherals_PBCFG_SW_MINOR_VERSION_C              0
#define TRGMUX_IP_BOARD_InitPeripherals_PBCFG_SW_PATCH_VERSION_C              0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Trgmux_Ip_BOARD_InitPeripherals_PBcfg.c file and Trgmux_Ip_Cfg.h file are of the same vendor */
#if (TRGMUX_IP_BOARD_InitPeripherals_PBCFG_VENDOR_ID_C != TRGMUX_IP_CFG_VENDOR_ID_H)
    #error "Trgmux_Ip_BOARD_InitPeripherals_PBcfg.c and Trgmux_Ip_Cfg.h have different vendor ids"
#endif

/* Check if Trgmux_Ip_BOARD_InitPeripherals_PBcfg.c file and Trgmux_Ip_Cfg.h file are of the same Autosar version */
#if ((TRGMUX_IP_BOARD_InitPeripherals_PBCFG_AR_RELEASE_MAJOR_VERSION_C != TRGMUX_IP_CFG_AR_RELEASE_MAJOR_VERSION_H) || \
     (TRGMUX_IP_BOARD_InitPeripherals_PBCFG_AR_RELEASE_MINOR_VERSION_C != TRGMUX_IP_CFG_AR_RELEASE_MINOR_VERSION_H) || \
     (TRGMUX_IP_BOARD_InitPeripherals_PBCFG_AR_RELEASE_REVISION_VERSION_C != TRGMUX_IP_CFG_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Trgmux_Ip_BOARD_InitPeripherals_PBcfg.c and Trgmux_Ip_Cfg.h are different"
#endif

/* Check if Trgmux_Ip_BOARD_InitPeripherals_PBcfg.c file and Trgmux_Ip_Cfg.h file are of the same Software version */
#if ((TRGMUX_IP_BOARD_InitPeripherals_PBCFG_SW_MAJOR_VERSION_C != TRGMUX_IP_CFG_SW_MAJOR_VERSION_H) || \
     (TRGMUX_IP_BOARD_InitPeripherals_PBCFG_SW_MINOR_VERSION_C != TRGMUX_IP_CFG_SW_MINOR_VERSION_H) || \
     (TRGMUX_IP_BOARD_InitPeripherals_PBCFG_SW_PATCH_VERSION_C != TRGMUX_IP_CFG_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Trgmux_Ip_BOARD_InitPeripherals_PBcfg.c and Trgmux_Ip_Cfg.h are different"
#endif


/*==================================================================================================
*                                        LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
                                       LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/


#define MCL_START_SEC_CONFIG_DATA_UNSPECIFIED
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

/* TRGMUX Logic Trigger Configuration */

const Trgmux_Ip_LogicTriggerType Trgmux_Ip_LogicTrigger0ConfigPB =
{
    /* uint8 LogicChannel; */   TRGMUX_LOGIC_GROUP_0_TRIGGER_0,
    /* uint8 Output; */         TRGMUX_IP_OUTPUT_PDB0_TRIGGER_IN0,
    /* uint8 Input; */          TRGMUX_IP_INPUT_TRGMUX_IN0,
    /* uint8 HwInstId; */       TRGMUX_IP_HW_INST_0,
    /* boolean Lock; */         (boolean)FALSE,
};

/* TRGMUX Initialization Structure */
const Trgmux_Ip_InitType Trgmux_Ip_xTrgmuxInitPB =
{
    /* Trgmux_Ip_LogicTriggerType * paxLogicTrigger[]; */
    {
		&Trgmux_Ip_LogicTrigger0ConfigPB,
    }
};

#define MCL_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

#ifdef __cplusplus
}
#endif

/*==================================================================================================
 *                                        END OF FILE
==================================================================================================*/

