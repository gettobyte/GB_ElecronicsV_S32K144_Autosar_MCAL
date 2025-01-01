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

#ifndef INTCTRL_IP_TYPESDEF_H_
#define INTCTRL_IP_TYPESDEF_H_

/**
*   @file
*
*   @addtogroup IntCtrl_Ip
*   @{
*/

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "IntCtrl_Ip_CfgDefines.h"
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define PLATFORM_INTCTRL_IP_TYPESDEF_TYPES_VENDOR_ID                    43
#define PLATFORM_INTCTRL_IP_TYPESDEF_SW_MAJOR_VERSION                   1
#define PLATFORM_INTCTRL_IP_TYPESDEF_SW_MINOR_VERSION                   0
#define PLATFORM_INTCTRL_IP_TYPESDEF_SW_PATCH_VERSION                   1
/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and IntCtrl_Ip_CfgDefines header file are of the same vendor */
#if (PLATFORM_INTCTRL_IP_TYPESDEF_TYPES_VENDOR_ID != PLATFORM_INTCTRL_IP_CFG_DEFINES_VENDOR_ID)
    #error "IntCtrl_Ip_TypesDef.h and IntCtrl_Ip_CfgDefines.h have different vendor ids"
#endif

/* Check if current file and Fls header file are of the same Software version */
#if ((PLATFORM_INTCTRL_IP_TYPESDEF_SW_MAJOR_VERSION != PLATFORM_INTCTRL_IP_CFG_DEFINES_SW_MAJOR_VERSION) || \
     (PLATFORM_INTCTRL_IP_TYPESDEF_SW_MINOR_VERSION != PLATFORM_INTCTRL_IP_CFG_DEFINES_SW_MINOR_VERSION) || \
     (PLATFORM_INTCTRL_IP_TYPESDEF_SW_PATCH_VERSION != PLATFORM_INTCTRL_IP_CFG_DEFINES_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of IntCtrl_Ip_TypesDef.h and IntCtrl_Ip_CfgDefines.h are different"
#endif

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/
/**
* @brief          Interrupt handler type.
* @implements     IntCtrl_Ip_IrqHandlerType_typedef
*/
typedef void (*IntCtrl_Ip_IrqHandlerType)(void);

/**
* @brief          Structure storing the routing and handler configuration for an interrupt request.
* @implements     IntCtrl_Ip_IrqRouteConfigType_typedef
*/
typedef struct
{
    /** @brief Interrupt number */
    IRQn_Type eIrqNumber;
    /** @brief Target cores for the interrupt */
    uint8 u8TargetCores;
    /** @brief Interrupt handler */
    IntCtrl_Ip_IrqHandlerType pfHandler;
}IntCtrl_Ip_IrqRouteConfigType;

/**
* @brief          Structure storing the list of routing configurations for all configured interrupts.
* @implements     IntCtrl_Ip_GlobalRouteConfigType_typedef
*/
typedef struct
{
    /** @brief Number of configured interrupts */
    uint32 u32ConfigIrqCount;
    /** @brief List of interrupts configurations */
    const IntCtrl_Ip_IrqRouteConfigType *aIrqConfig;
}IntCtrl_Ip_GlobalRouteConfigType;

/**
* @brief          Structure storing the state and priority configuration for an interrupt request.
* @implements     IntCtrl_Ip_IrqConfigType_typedef
*/
typedef struct
{
    /** @brief Interrupt number */
    IRQn_Type eIrqNumber;
    /** @brief Interrupt state (enabled/disabled) */
    boolean bIrqEnabled;
    /** @brief Interrupt priority */
    uint8 u8IrqPriority;
}IntCtrl_Ip_IrqConfigType;

/**
* @brief          Structure storing the list of state configurations for all configured interrupts.
* @implements     IntCtrl_Ip_CtrlConfigType_typedef
*/
typedef struct
{
    /** @brief Number of configured interrupts */
    uint32 u32ConfigIrqCount;
#if (INTCTRL_IP_ENABLE_VTOR_CONFIG == STD_ON)
    /** @brief  Vector Table address */
    uint32 u32VectorTableAddress;
#endif /* INTCTRL_IP_ENABLE_VTOR_CONFIG */
    /** @brief List of interrupts configurations */
    const IntCtrl_Ip_IrqConfigType *aIrqConfig;
}IntCtrl_Ip_CtrlConfigType;

/**
* @brief          Enumeration listing the possible error codes returned by IntCtrl_Ip API.
* @implements     IntCtrl_Ip_StatusType_typedef
*/
typedef enum
{
    /** @brief Status SUCCESS */
    INTCTRL_IP_STATUS_SUCCESS = 0U,
    /** @brief Status ERROR */
    INTCTRL_IP_STATUS_ERROR   = 1U
}IntCtrl_Ip_StatusType;


#endif /* INTCTRL_IP_TYPESDEF_H_ */


/** @} */
