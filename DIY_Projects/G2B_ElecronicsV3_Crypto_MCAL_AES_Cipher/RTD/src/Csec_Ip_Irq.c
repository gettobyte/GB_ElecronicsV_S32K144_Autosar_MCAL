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
#include "Mcal.h"
#include "Csec_Ip.h"

/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CSEC_IP_IRQ_VENDOR_ID_C                    43
#define CSEC_IP_IRQ_SW_MAJOR_VERSION_C             1
#define CSEC_IP_IRQ_SW_MINOR_VERSION_C             0
#define CSEC_IP_IRQ_SW_PATCH_VERSION_C             0

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/
/* Check if Csec_Ip_Irq source file and Mcal.h header file are of the same vendor */
#if (CSEC_IP_IRQ_VENDOR_ID_C != MCAL_VENDOR_ID )
    #error "Csec_Ip_Irq.c and Mcal.h have different vendor ids"
#endif

/* Check if Csec_Ip_Irq source file and Mcal.h header file are of the same Software version */
#if ((CSEC_IP_IRQ_SW_MAJOR_VERSION_C != MCAL_SW_MAJOR_VERSION) || \
     (CSEC_IP_IRQ_SW_MINOR_VERSION_C != MCAL_SW_MINOR_VERSION) || \
     (CSEC_IP_IRQ_SW_PATCH_VERSION_C != MCAL_SW_PATCH_VERSION)    \
    )
    #error "Software Version Numbers of Csec_Ip_Irq.c and Mcal.h are different"
#endif

/* Check if CSEC_IP_Irq source file and Csec_Ip.h header file are of the same vendor */
#if (CSEC_IP_IRQ_VENDOR_ID_C != CSEC_IP_VENDOR_ID_H )
    #error "Csec_Ip_Irq.c and Csec_Ip.h have different vendor ids"
#endif

/* Check if Csec_Ip_Irq source file and Csec_Ip.h header file are of the same Software version */
#if ((CSEC_IP_IRQ_SW_MAJOR_VERSION_C != CSEC_IP_SW_MAJOR_VERSION_H) || \
     (CSEC_IP_IRQ_SW_MINOR_VERSION_C != CSEC_IP_SW_MINOR_VERSION_H) || \
     (CSEC_IP_IRQ_SW_PATCH_VERSION_C != CSEC_IP_SW_PATCH_VERSION_H)    \
    )
    #error "Software Version Numbers of Csec_Ip_Irq.c and Csec_Ip.h are different"
#endif

/*==================================================================================================
*                           LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                          LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                    LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL FUNCTIONS PROTOTYPES
==================================================================================================*/
ISR(Csec_Ip_Isr);

/*==================================================================================================
*                                        GLOBAL FUNCTIONS
==================================================================================================*/
#define CRYPTO_START_SEC_CODE
#include "Crypto_MemMap.h"

/**
* @brief   Crypto handler for the Csec interrupt.
* @details This function implements the ISR occurring on Csec.
*
* @isr
*
*/
ISR(Csec_Ip_Isr)
{
    Csec_Ip_IrqHandler();

    /* Added EXIT_INTERRUPT() for ISR handler due to ERR009005 errata */
    EXIT_INTERRUPT();
}


#define CRYPTO_STOP_SEC_CODE
#include "Crypto_MemMap.h"


#ifdef __cplusplus
}
#endif

/** @} */
