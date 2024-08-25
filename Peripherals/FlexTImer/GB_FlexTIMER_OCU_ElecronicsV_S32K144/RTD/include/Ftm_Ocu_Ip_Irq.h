/*==================================================================================================
*    Project               : RTD AUTOSAR 4.4
*    Platform              : CORTEXM
*    Peripheral            : Ftm
*    Dependencies          : none
*
*    Autosar Version       : 4.4.0
*    Autosar Revision      : ASR_REL_4_4_REV_0000
*    Autosar Conf.Variant  :
*    SWVersion             : 1.0.0
*    BuildVersion          : S32K1_RTD_1_0_0_D2108_ASR_REL_4_4_REV_0000_20210810
*
*    (c) Copyright 2020-2021 NXP Semiconductors
*    All Rights Reserved.
*
*    NXP Confidential. This software is owned or controlled by NXP and may only be
*    used strictly in accordance with the applicable license terms. By expressly
*    accepting such terms or by downloading, installing, activating and/or otherwise
*    using the software, you are agreeing that you have read, and that you agree to
*    comply with and are bound by, such license terms. If you do not agree to be
*    bound by the applicable license terms, then you may not retain, install,
*    activate or otherwise use the software.
=====================================================================================================*/

#ifndef FTM_OCU_IP_IRQ_H
#define FTM_OCU_IP_IRQ_H

/**
*   @file         Ftm_Ocu_Ip_Irq.h
*
*   @addtogroup   ocu_ip Ocu IPL
*   @brief        Ocu FTM header file support for OCU driver.
*
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                          INCLUDE FILES
*  1) system and project includes
*  2) needed interfaces from external units
*  3) internal and external interfaces from this unit
==================================================================================================*/

#include "Ftm_Ocu_Ip_Types.h"
#include "OsIf.h"
#include "Mcal.h"
/*==================================================================================================
*                               HEADER FILE VERSION INFORMATION
==================================================================================================*/
#define FTM_OCU_IP_IRQ_VENDOR_ID                       43
#define FTM_OCU_IP_IRQ_AR_RELEASE_MAJOR_VERSION        4
#define FTM_OCU_IP_IRQ_AR_RELEASE_MINOR_VERSION        4
#define FTM_OCU_IP_IRQ_AR_RELEASE_REVISION_VERSION     0
#define FTM_OCU_IP_IRQ_SW_MAJOR_VERSION                1
#define FTM_OCU_IP_IRQ_SW_MINOR_VERSION                0
#define FTM_OCU_IP_IRQ_SW_PATCH_VERSION                0
/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/
#if (FTM_OCU_IP_IRQ_VENDOR_ID != FTM_OCU_IP_TYPES_VENDOR_ID)
    #error "Ftm_Ocu_Ip_Irq.h and Ftm_Ocu_Ip_Types.h have different vendor ids"
#endif

/* Check if  header file and Ftm_Ocu_Ip_Types.h file are of the same Autosar version */
#if ((FTM_OCU_IP_IRQ_AR_RELEASE_MAJOR_VERSION != FTM_OCU_IP_TYPES_AR_RELEASE_MAJOR_VERSION) || \
     (FTM_OCU_IP_IRQ_AR_RELEASE_MINOR_VERSION != FTM_OCU_IP_TYPES_AR_RELEASE_MINOR_VERSION) || \
     (FTM_OCU_IP_IRQ_AR_RELEASE_REVISION_VERSION != FTM_OCU_IP_TYPES_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Ftm_Ocu_Ip_Irq.h and Ftm_Ocu_Ip_Types.h are different"
#endif

/* Check if header file and Ftm_Ocu_Ip_Types.h file are of the same Software version */
#if ((FTM_OCU_IP_IRQ_SW_MAJOR_VERSION != FTM_OCU_IP_TYPES_SW_MAJOR_VERSION) || \
     (FTM_OCU_IP_IRQ_SW_MINOR_VERSION != FTM_OCU_IP_TYPES_SW_MINOR_VERSION) || \
     (FTM_OCU_IP_IRQ_SW_PATCH_VERSION != FTM_OCU_IP_TYPES_SW_PATCH_VERSION))
    #error "Software Version Numbers of Ftm_Ocu_Ip_Irq.h and Ftm_Ocu_Ip_Types.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if this header file and OsIf.h file are of the same Autosar version */
    #if ((FTM_OCU_IP_IRQ_AR_RELEASE_MAJOR_VERSION != OSIF_AR_RELEASE_MAJOR_VERSION) || \
        (FTM_OCU_IP_IRQ_AR_RELEASE_MINOR_VERSION != OSIF_AR_RELEASE_MINOR_VERSION))
        #error "AutoSar Version Numbers of Ftm_Ocu_Ip_Irq.h and OsIf.h are different"
    #endif
    /* Check if this header file and Mcal.h file are of the same Autosar version */
    #if ((FTM_OCU_IP_IRQ_AR_RELEASE_MAJOR_VERSION != MCAL_AR_RELEASE_MAJOR_VERSION) || \
        (FTM_OCU_IP_IRQ_AR_RELEASE_MINOR_VERSION != MCAL_AR_RELEASE_MINOR_VERSION))
        #error "AutoSar Version Numbers of Ftm_Ocu_Ip_Irq.h and Mcal.h are different"
    #endif
#endif
/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                        DEFINES AND MACROS
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
*                                      FUNCTION PROTOTYPES
==================================================================================================*/
#define OCU_START_SEC_CODE
#include "Ocu_MemMap.h"

#if (OCU_NOTIFICATION_SUPPORTED == STD_ON)
#ifdef OCU_FTM_0_ISR_USED
   extern ISR(FTM_0_ISR);
#endif

#ifdef OCU_FTM_1_ISR_USED
   extern ISR(FTM_1_ISR);
#endif

#if (defined OCU_FTM_0_CH_0_CH_1_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 0 channel 0 - channel 1.
 */
extern ISR(FTM_0_CH_0_CH_1_ISR);
#endif

#if (defined OCU_FTM_0_CH_2_CH_3_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 0 channel 2 - channel 3.
 */
extern ISR(FTM_0_CH_2_CH_3_ISR);
#endif

#if (defined OCU_FTM_0_CH_4_CH_5_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 0 channel 4 - channel 5.
 */
extern ISR(FTM_0_CH_4_CH_5_ISR);
#endif

#if (defined OCU_FTM_0_CH_6_CH_7_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 0 channel 6 - channel 7.
 */
extern ISR(FTM_0_CH_6_CH_7_ISR);
#endif

#if (defined OCU_FTM_1_CH_0_CH_1_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 1 channel 0 - channel 1.
 */
extern ISR(FTM_1_CH_0_CH_1_ISR);
#endif

#if (defined OCU_FTM_1_CH_2_CH_3_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 1 channel 2 - channel 3.
 */
extern ISR(FTM_1_CH_2_CH_3_ISR);
#endif

#if (defined OCU_FTM_1_CH_4_CH_5_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 1 channel 4 - channel 5.
 */
extern ISR(FTM_1_CH_4_CH_5_ISR);
#endif

#if (defined OCU_FTM_1_CH_6_CH_7_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 1 channel 6 - channel 7.
 */
extern ISR(FTM_1_CH_6_CH_7_ISR);
#endif

#if (defined OCU_FTM_2_CH_0_CH_1_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 2 channel 0 - channel 1.
 */
extern ISR(FTM_2_CH_0_CH_1_ISR);
#endif

#if (defined OCU_FTM_2_CH_2_CH_3_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 2 channel 2 - channel 3.
 */
extern ISR(FTM_2_CH_2_CH_3_ISR);
#endif

#if (defined OCU_FTM_2_CH_4_CH_5_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 2 channel 4 - channel 5.
 */
extern ISR(FTM_2_CH_4_CH_5_ISR);
#endif

#if (defined OCU_FTM_2_CH_6_CH_7_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 2 channel 6 - channel 7.
 */
extern ISR(FTM_2_CH_6_CH_7_ISR);
#endif

#if (defined OCU_FTM_3_CH_0_CH_1_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 3 channel 0 - channel 1.
 */
extern ISR(FTM_3_CH_0_CH_1_ISR);
#endif

#if (defined OCU_FTM_3_CH_2_CH_3_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 3 channel 2 - channel 3.
 */
extern ISR(FTM_3_CH_2_CH_3_ISR);
#endif

#if (defined OCU_FTM_3_CH_4_CH_5_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 3 channel 4 - channel 5.
 */
extern ISR(FTM_3_CH_4_CH_5_ISR);
#endif

#if (defined OCU_FTM_3_CH_6_CH_7_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 3 channel 6 - channel 7.
 */
extern ISR(FTM_3_CH_6_CH_7_ISR);
#endif

#if (defined OCU_FTM_4_CH_0_CH_1_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 4 channel 0 - channel 1.
 */
extern ISR(FTM_4_CH_0_CH_1_ISR);
#endif

#if (defined OCU_FTM_4_CH_2_CH_3_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 4 channel 2 - channel 3.
 */
extern ISR(FTM_4_CH_2_CH_3_ISR);
#endif

#if (defined OCU_FTM_4_CH_4_CH_5_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 4 channel 4 - channel 5.
 */
extern ISR(FTM_4_CH_4_CH_5_ISR);
#endif

#if (defined OCU_FTM_4_CH_6_CH_7_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 4 channel 6 - channel 7.
 */
extern ISR(FTM_4_CH_6_CH_7_ISR);
#endif

#if (defined OCU_FTM_5_CH_0_CH_1_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 5 channel 0 - channel 1.
 */
extern ISR(FTM_5_CH_0_CH_1_ISR);
#endif

#if (defined OCU_FTM_5_CH_2_CH_3_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 5 channel 2 - channel 3.
 */
extern ISR(FTM_5_CH_2_CH_3_ISR);
#endif

#if (defined OCU_FTM_5_CH_4_CH_5_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 5 channel 4 - channel 5.
 */
extern ISR(FTM_5_CH_4_CH_5_ISR);
#endif

#if (defined OCU_FTM_5_CH_6_CH_7_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 5 channel 6 - channel 7.
 */
extern ISR(FTM_5_CH_6_CH_7_ISR);
#endif

#if (defined OCU_FTM_6_CH_0_CH_1_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 6 channel 0 - channel 1.
 */
extern ISR(FTM_6_CH_0_CH_1_ISR);
#endif

#if (defined OCU_FTM_6_CH_2_CH_3_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 6 channel 2 - channel 3.
 */
extern ISR(FTM_6_CH_2_CH_3_ISR);
#endif

#if (defined OCU_FTM_6_CH_4_CH_5_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 6 channel 4 - channel 5.
 */
extern ISR(FTM_6_CH_4_CH_5_ISR);
#endif

#if (defined OCU_FTM_6_CH_6_CH_7_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 6 channel 6 - channel 7.
 */
extern ISR(FTM_6_CH_6_CH_7_ISR);
#endif

#if (defined OCU_FTM_7_CH_0_CH_1_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 7 channel 0 - channel 1.
 */
extern ISR(FTM_7_CH_0_CH_1_ISR);
#endif

#if (defined OCU_FTM_7_CH_2_CH_3_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 7 channel 2 - channel 3.
 */
extern ISR(FTM_7_CH_2_CH_3_ISR);
#endif

#if (defined OCU_FTM_7_CH_4_CH_5_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 7 channel 4 - channel 5.
 */
extern ISR(FTM_7_CH_4_CH_5_ISR);
#endif

#if (defined OCU_FTM_7_CH_6_CH_7_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 7 channel 6 - channel 7.
 */
extern ISR(FTM_7_CH_6_CH_7_ISR);
#endif

#endif

#define OCU_STOP_SEC_CODE
#include "Ocu_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */

#endif  /* FTM_OCU_IP_IRQ_H */
