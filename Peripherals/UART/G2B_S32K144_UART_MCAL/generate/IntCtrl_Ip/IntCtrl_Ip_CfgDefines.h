/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : 
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

#ifndef INTCTRL_IP_CFG_DEFINES_H_
#define INTCTRL_IP_CFG_DEFINES_H_

/*==================================================================================================
                                         INCLUDE FILES
==================================================================================================*/
#include "StandardTypes.h"
#ifdef SJA1110
#include "SJA1110.h"
#endif
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define PLATFORM_INTCTRL_IP_CFG_DEFINES_VENDOR_ID                          43
#define PLATFORM_INTCTRL_IP_CFG_DEFINES_SW_MAJOR_VERSION                   1
#define PLATFORM_INTCTRL_IP_CFG_DEFINES_SW_MINOR_VERSION                   0
#define PLATFORM_INTCTRL_IP_CFG_DEFINES_SW_PATCH_VERSION                   1


    #include "S32K144.h"
    
/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/
/* Development error detection */
#define INTCTRL_IP_CORE_MASK                      (1U)
/* System interrupt routing through MSCM */
#define INT_CTRL_IP_MSCM_SYSTEM_INTERRUPT_ROUTER  (STD_OFF)
#define INT_CTRL_IP_DEV_ERROR_DETECT              (STD_OFF)
/* IP standalone APIs  */
#define INT_CTRL_IP_STANDALONE_APIS               (STD_OFF)

/* MSI target core count */
#define INTCTRL_IP_MSI_CORE_CNT                   (0U)

/* MSI vector min */
#define INTCTRL_IP_DIRECTED_CPU_INT_MIN           (0)

/* MSI vector max */
#define INTCTRL_IP_DIRECTED_CPU_INT_MAX           (0)

/* VTOR address configuration enable */
#define INTCTRL_IP_ENABLE_VTOR_CONFIG             (STD_OFF)

/* Number of priority bits implemented */
#define INT_CTRL_IP_NVIC_PRIO_BITS                (4U)

/* User mode support */
#define INTCTRL_PLATFORM_ENABLE_USER_MODE_SUPPORT (STD_OFF)

/*Interrupt Router Shared Peripheral Routing Control Register*/
#define INT_CTRL_IP_ROUTING_CONTROL_REGISTER      (STD_OFF)
/* This instruction invalidates the entire instruction cache or caches */
#define INT_CTRL_IP_INVALIDATE_CACHE              (STD_OFF)

/* First implemented interrupt vector */
#define INT_CTRL_IP_IRQ_MIN                       (DMA0_IRQn)
/* Last implemented interrupt vector */
#define INT_CTRL_IP_IRQ_MAX                       (FTM3_Ovf_Reload_IRQn)
/* The interrupt counter value*/
#define INT_CTRL_IP_IRQ_COUNT                     (89)
/* Arm Cortex R */
#define INT_CTRL_IP_CORTEXR                       (STD_OFF)
/* Arm Cortex M */
#define INT_CTRL_IP_CORTEXM                       (STD_ON)
/* Arm Cortex A */
#define INT_CTRL_IP_CORTEXA                       (STD_OFF)

#endif /* INTCTRL_IP_CFG_DEFINES_H_ */

