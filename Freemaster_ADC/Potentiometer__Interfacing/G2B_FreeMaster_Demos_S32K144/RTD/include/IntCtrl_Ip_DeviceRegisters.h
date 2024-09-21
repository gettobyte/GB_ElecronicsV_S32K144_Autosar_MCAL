/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : 
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

#ifndef INTCTRL_IP_DEVICE_REGISTERS_H_
#define INTCTRL_IP_DEVICE_REGISTERS_H_

/**
*   @file
*
*   @addtogroup IntCtrl_Ip
*   @{
*/

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "StandardTypes.h"
#define PLATFORM_INTCTRL_IP_DEVICE_REGISTERS_TYPES_VENDOR_ID                    43
#define PLATFORM_INTCTRL_IP_DEVICE_REGISTERS_SW_MAJOR_VERSION                   1
#define PLATFORM_INTCTRL_IP_DEVICE_REGISTERS_SW_MINOR_VERSION                   0
#define PLATFORM_INTCTRL_IP_DEVICE_REGISTERS_SW_PATCH_VERSION                   0
#ifdef S32K116
    #include "S32K116.h"
#endif
#ifdef S32K118
    #include "S32K118.h"
#endif
#ifdef S32K142
    #include "S32K142.h"
#endif
#ifdef S32K142W
    #include "S32K142W.h"
#endif
#ifdef S32K144
    #include "S32K144.h"
#endif
#ifdef S32K144W
    #include "S32K144W.h"
#endif
#ifdef S32K146
    #include "S32K146.h"
#endif
#ifdef S32K148
    #include "S32K148.h"
#endif
#if !defined(S32K142) && !defined(S32K144) && !defined(S32K144W) && !defined(S32K146) && !defined(S32K148) && !defined(S32K118) && !defined(S32K116) && !defined(S32K142W) && !defined(S32K144W)
    #error "Unknown Platform"
#endif

typedef struct {
    __IO uint32_t IntStatusR;  /**< Interrupt Router CPn Interruptx Status Register, array offset: 0x200, index*0x20, index2*0x8 */
    __O  uint32_t IGR;  /**< Interrupt Router CPn Interruptx Generation Register, array offset: 0x204, index*0x20, index2*0x8 */
} MSCM_IRCP_IR_Type;

typedef struct {
    MSCM_IRCP_IR_Type IRCPnIRx[2][4];
} MSCM_IRCPnIRx_Type;

#define MSCM_IRCPnIRx ((MSCM_IRCPnIRx_Type*)&MSCM->IRCP0ISR0)




#endif /* INTCTRL_IP_DEVICE_REGISTERS_H_ */

/** @} */
