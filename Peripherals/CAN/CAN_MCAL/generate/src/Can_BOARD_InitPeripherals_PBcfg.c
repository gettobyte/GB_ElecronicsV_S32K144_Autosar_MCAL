/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : FLEXCAN
*   Dependencies         : 
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
*   @file    Can_PBcfg_BOARD_InitPeripherals.c
*   @version 1.0.0
*
*   @brief   AUTOSAR Can - module interface
*   @details Configuration Structures for PostBuild
*
*   @addtogroup CAN_DRIVER
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif

/**
* @page misra_violations MISRA-C:2012 violations
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.1, External identifiers shall be distinct.
* The used compilers use more than 31 chars for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.2, Identifiers declared in the same scope and name space shall be distinct.
* The used compilers use more than 31 chars for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.4, Macro identifiers shall be distinct.
* The used compilers use more than 31 chars for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.5, Identifiers shall be distinct from macro names.
* The used compilers use more than 31 chars for identifiers.
*
* @section Can_PBcfg_BOARD_InitPeripherals_c_REF_1
* Violates MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents
* of a header file being included more than once
* This violation is not fixed since the inclusion of <MA>_MemMap.h is as per AUTOSAR requirement [SWS_MemMap_00003].
*
* @section Can_PBcfg_BOARD_InitPeripherals_c_REF_2
* Violates MISRA 2012 Advisory Rule 20.1, #include directives should only be preceded by preprocessor directives or comments.
* AUTOSAR imposes the specification of the sections in which certain parts of the driver must be placed.
*
* @section Can_PBcfg_BOARD_InitPeripherals_c_REF_3
* Violates MISRA 2012 Advisory Rule 8.7, Function and objects should not be defined with external linkage if they
* are referenced in only one translation unit.
* This constant variable will be called by higher layer.
*
* @section Can_PBcfg_BOARD_InitPeripherals_c_REF_4
* Violates MISRA 2012 Advisory Rule 8.9, An object should be defined at block scope if identifier only appears in a single function.
* These objects are used when Precompile is supported.
*
* @section Can_PBcfg_BOARD_InitPeripherals_c_REF_5
* Violates MISRA 2012 Required Rule 8.4, A compatible declaration shall be visible when an object or function with external linkage is defined.
*
*/
/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Can.h"
#include "Can_Ipw_Types.h"
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/*
* @file           Can_PBcfg_BOARD_InitPeripherals.c
*/
#define CAN_VENDOR_ID_PBCFG_BOARD_InitPeripherals_C                      43
#define CAN_AR_RELEASE_MAJOR_VERSION_PBCFG_BOARD_InitPeripherals_C       4
#define CAN_AR_RELEASE_MINOR_VERSION_PBCFG_BOARD_InitPeripherals_C       4
#define CAN_AR_RELEASE_REVISION_VERSION_PBCFG_BOARD_InitPeripherals_C    0
#define CAN_SW_MAJOR_VERSION_PBCFG_BOARD_InitPeripherals_C               1
#define CAN_SW_MINOR_VERSION_PBCFG_BOARD_InitPeripherals_C               0
#define CAN_SW_PATCH_VERSION_PBCFG_BOARD_InitPeripherals_C               0
/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and Can.h are of the same vendor */
#if (CAN_VENDOR_ID_PBCFG_BOARD_InitPeripherals_C != CAN_VENDOR_ID)
    #error "Can_PBcfg_BOARD_InitPeripherals.c and Can.h have different vendor ids"
#endif
/* Check if current file and Can.h are of the same Autosar version */
#if ((CAN_AR_RELEASE_MAJOR_VERSION_PBCFG_BOARD_InitPeripherals_C != CAN_AR_RELEASE_MAJOR_VERSION) || \
     (CAN_AR_RELEASE_MINOR_VERSION_PBCFG_BOARD_InitPeripherals_C != CAN_AR_RELEASE_MINOR_VERSION) || \
     (CAN_AR_RELEASE_REVISION_VERSION_PBCFG_BOARD_InitPeripherals_C != CAN_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Can_PBcfg_BOARD_InitPeripherals.c and Can.h are different"
#endif
/* Check if current file and Can.h are of the same Software version */
#if ((CAN_SW_MAJOR_VERSION_PBCFG_BOARD_InitPeripherals_C != CAN_SW_MAJOR_VERSION) || \
     (CAN_SW_MINOR_VERSION_PBCFG_BOARD_InitPeripherals_C != CAN_SW_MINOR_VERSION) || \
     (CAN_SW_PATCH_VERSION_PBCFG_BOARD_InitPeripherals_C != CAN_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Can_PBcfg_BOARD_InitPeripherals.c and Can.h are different"
#endif

/* Check if current file and Can_Ipw_Types.h are of the same vendor */
#if (CAN_VENDOR_ID_PBCFG_BOARD_InitPeripherals_C != CAN_IPW_TYPES_VENDOR_ID_H)
    #error "Can_PBcfg_BOARD_InitPeripherals.c and Can_Ipw_Types.h have different vendor IDs"
#endif
/* Check if current file and Can_Ipw_Types.h are of the same Autosar version */
#if ((CAN_AR_RELEASE_MAJOR_VERSION_PBCFG_BOARD_InitPeripherals_C != CAN_IPW_TYPES_AR_RELEASE_MAJOR_VERSION_H) || \
    (CAN_AR_RELEASE_MINOR_VERSION_PBCFG_BOARD_InitPeripherals_C !=  CAN_IPW_TYPES_AR_RELEASE_MINOR_VERSION_H) || \
    (CAN_AR_RELEASE_REVISION_VERSION_PBCFG_BOARD_InitPeripherals_C != CAN_IPW_TYPES_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Can_PBcfg_BOARD_InitPeripherals.c and Can_Ipw_Types.h are different"
#endif
/* Check if current file and Can_Ipw_Types.h are of the same software version */
#if ((CAN_SW_MAJOR_VERSION_PBCFG_BOARD_InitPeripherals_C != CAN_IPW_TYPES_SW_MAJOR_VERSION_H) || \
    (CAN_SW_MINOR_VERSION_PBCFG_BOARD_InitPeripherals_C != CAN_IPW_TYPES_SW_MINOR_VERSION_H) || \
    (CAN_SW_PATCH_VERSION_PBCFG_BOARD_InitPeripherals_C != CAN_IPW_TYPES_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Can_PBcfg_BOARD_InitPeripherals.c and Can_Ipw_Types.h are different"
#endif
/*==================================================================================================
*                                   GLOBAL VARIABLES
==================================================================================================*/
#if (CAN_FEATURE_HAS_DMA_ENABLE == STD_ON)
    /* CAN_START_SEC_VAR_CLEARED_UNSPECIFIED_NO_CACHEABLE */
    #define CAN_START_SEC_VAR_CLEARED_UNSPECIFIED_NO_CACHEABLE
    #include "Can_MemMap.h"


    #define CAN_STOP_SEC_VAR_CLEARED_UNSPECIFIED_NO_CACHEABLE
    #include "Can_MemMap.h"
    /* CAN_STOP_SEC_VAR_CLEARED_UNSPECIFIED_NO_CACHEABLE */
#endif /* (CAN_FEATURE_HAS_DMA_ENABLE == STD_ON) */
/*==================================================================================================
*                                   GLOBAL FUNCTION PROTOTYPES
==================================================================================================*/
#define CAN_START_SEC_CODE
/* @violates @ref Can_PBcfg_BOARD_InitPeripherals_c_REF_1 MISRA 2012 Required Directive 4.10 */
#include "Can_MemMap.h"
#if (CAN_TIMESTAMP_ENABLE == STD_ON)
#endif
#define CAN_STOP_SEC_CODE
/* @violates @ref Can_PBcfg_BOARD_InitPeripherals_c_REF_1 MISRA 2012 Required Directive 4.10 */
/* @violates @ref Can_PBcfg_BOARD_InitPeripherals_c_REF_2 MISRA 2012 Advisory Rule 20.1 */
#include "Can_MemMap.h"
/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/
#define CAN_START_SEC_CONFIG_DATA_32
#include "Can_MemMap.h"

/**
*   @brief  Hardware Buffer Address of CanController_0
*/
static const uint32 Can_au32HwBufferAddr_Ctrl0[5U] =
{
    (FLEXCAN_0_BASE + (uint32)0x80U),
    (FLEXCAN_0_BASE + (uint32)0x90U),
    (FLEXCAN_0_BASE + (uint32)0xa0U),
    (FLEXCAN_0_BASE + (uint32)0xb0U),
    (FLEXCAN_0_BASE + (uint32)0xc0U)
};

/**
*   @brief  Hardware Filter of CanHardwareObject_0
*/
static const Can_HwFilterType Can_aHwFilter_Object0=
{
    (uint32)0x310U,
    (uint32)0xdffc0000U
};
/**
*   @brief  Hardware Filter of CanHardwareObject_1
*/
static const Can_HwFilterType Can_aHwFilter_Object1=
{
    (uint32)0x320U,
    (uint32)0xdffc0000U
};
/**
*   @brief  Hardware Filter of CanHardwareObject_2
*/
static const Can_HwFilterType Can_aHwFilter_Object2=
{
    (uint32)0x330U,
    (uint32)0xdffc0000U
};
/**
*   @brief  Hardware Filter of CanHardwareObject_3
*/
static const Can_HwFilterType Can_aHwFilter_Object3=
{
    (uint32)0x340U,
    (uint32)0xdffc0000U
};

#define CAN_STOP_SEC_CONFIG_DATA_32
#include "Can_MemMap.h"

#define CAN_START_SEC_CONFIG_DATA_8
#include "Can_MemMap.h"

/**
*   @brief  Mapping Controller ID to Controller hardware offset
*/
static const uint8 Can_aCtrlOffsetToCtrlIDMap[CAN_HWCONTROLLER_SUPPORT]=
{
    (uint8)0U,
    (uint8)CAN_CONTROLLER_UNUSED,
    (uint8)CAN_CONTROLLER_UNUSED
};
/**
*   @brief  Mapping Controller ID to Hardware Object ID
*/
static const uint8 Can_aHwObjIDToCtrlIDMap[CAN_HWOBJECT_CONFIG_COUNT]=
{
    (uint8)0U,
    (uint8)0U,
    (uint8)0U,
    (uint8)0U,
    (uint8)0U
};

#define CAN_STOP_SEC_CONFIG_DATA_8
#include "Can_MemMap.h"

#define CAN_START_SEC_CONFIG_DATA_UNSPECIFIED
/* @violates @ref Can_PBcfg_BOARD_InitPeripherals_c_REF_1 MISRA 2012 Required Directive 4.10 */
/* @violates @ref Can_PBcfg_BOARD_InitPeripherals_c_REF_2 MISRA 2012 Advisory Rule 20.1 */
#include "Can_MemMap.h"

/**
*   @brief  Can Hardware Object Config
*/
/* @violates @ref Can_PBcfg_BOARD_InitPeripherals_c_REF_5 MISRA 2012 Required Rule 8.4*/
static const Can_HwObjectConfigType Can_aHwObjectConfig[CAN_HWOBJECT_CONFIG_COUNT]=
{
    /* CanHardwareObject_0 of CanController_0 */
    {
        /* Hardware Object ID */
        (Can_HwHandleType)0U,
        /* Hardware Object handle type */
        CAN_RECEIVE,
        /* ID Message type */
        CAN_STANDARD,
        /* Object uses polling */
        (boolean)TRUE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)CanMainFunctionRWPeriods_0,
        /* Data Payload length */
        (uint8)8U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)1U,
        /* Hw Filter Config */
        &Can_aHwFilter_Object0,
        /* Message Buffer is Type */
        CAN_RX_NORMAL,
        /* Buffer Index in Message buffer ram */
        (uint8)0U,
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl0[0U]
        #if (CAN_TIMESTAMP_ENABLE == STD_ON)
        /* Time Stamp Enable */
        ,(boolean)FALSE
        #endif
    },
    /* CanHardwareObject_1 of CanController_0 */
    {
        /* Hardware Object ID */
        (Can_HwHandleType)1U,
        /* Hardware Object handle type */
        CAN_RECEIVE,
        /* ID Message type */
        CAN_STANDARD,
        /* Object uses polling */
        (boolean)TRUE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)CanMainFunctionRWPeriods_0,
        /* Data Payload length */
        (uint8)8U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)1U,
        /* Hw Filter Config */
        &Can_aHwFilter_Object1,
        /* Message Buffer is Type */
        CAN_RX_NORMAL,
        /* Buffer Index in Message buffer ram */
        (uint8)1U,
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl0[1U]
        #if (CAN_TIMESTAMP_ENABLE == STD_ON)
        /* Time Stamp Enable */
        ,(boolean)FALSE
        #endif
    },
    /* CanHardwareObject_2 of CanController_0 */
    {
        /* Hardware Object ID */
        (Can_HwHandleType)2U,
        /* Hardware Object handle type */
        CAN_RECEIVE,
        /* ID Message type */
        CAN_STANDARD,
        /* Object uses polling */
        (boolean)TRUE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)CanMainFunctionRWPeriods_0,
        /* Data Payload length */
        (uint8)8U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)1U,
        /* Hw Filter Config */
        &Can_aHwFilter_Object2,
        /* Message Buffer is Type */
        CAN_RX_NORMAL,
        /* Buffer Index in Message buffer ram */
        (uint8)2U,
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl0[2U]
        #if (CAN_TIMESTAMP_ENABLE == STD_ON)
        /* Time Stamp Enable */
        ,(boolean)FALSE
        #endif
    },
    /* CanHardwareObject_3 of CanController_0 */
    {
        /* Hardware Object ID */
        (Can_HwHandleType)3U,
        /* Hardware Object handle type */
        CAN_RECEIVE,
        /* ID Message type */
        CAN_STANDARD,
        /* Object uses polling */
        (boolean)TRUE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)CanMainFunctionRWPeriods_0,
        /* Data Payload length */
        (uint8)8U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)1U,
        /* Hw Filter Config */
        &Can_aHwFilter_Object3,
        /* Message Buffer is Type */
        CAN_RX_NORMAL,
        /* Buffer Index in Message buffer ram */
        (uint8)3U,
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl0[3U]
        #if (CAN_TIMESTAMP_ENABLE == STD_ON)
        /* Time Stamp Enable */
        ,(boolean)FALSE
        #endif
    },
    /* CanHardwareObject_4 of CanController_0 */
    {
        /* Hardware Object ID */
        (Can_HwHandleType)4U,
        /* Hardware Object handle type */
        CAN_TRANSMIT,
        /* ID Message type */
        CAN_STANDARD,
        /* Object uses polling */
        (boolean)TRUE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)CanMainFunctionRWPeriods_0,
        /* Data Payload length */
        (uint8)8U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)0U,
        /* Hw Filter Config */
        NULL_PTR,
        /* Message Buffer is Type */
        CAN_TX_NORMAL,
        /* Buffer Index in Message buffer ram */
        (uint8)4U,
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl0[4U]
        #if (CAN_TIMESTAMP_ENABLE == STD_ON)
        /* Time Stamp Enable */
        ,(boolean)FALSE
        #endif
    }
};



/**
*   @brief  Can Baudrate Config of CanController_0
*/
static const Can_BaudrateConfigType Can_aBaudrateConfig_Ctrl0[1U]=
{
    { /* Start BaudConfig Struct 0 */
        /*Can_bEnhanceCBTEnable*/
        (boolean)FALSE,
        /* Tx Bit Rate Switch - Can_bBitRateSwitch */
        (boolean)FALSE,
        /* FD Enable - Can_bFDFrame*/
        (boolean)FALSE,
        /*Nominal Bit Rate - Can_TimeSegmentType Can_NominalBitRate*/
        {
            (uint8)4U,
            (uint8)7U,
            (uint8)1U,
            /* BaudratePrescaler -Can_u16Prescaler  */
            (uint16)5U,
        #if (CAN_DUAL_CLOCK_MODE == STD_ON)
            /* Alternative Baudrate Prescaler  Can_u16PrescalerAlternate*/
            (uint16)9U,
        #endif
            (uint8)0U
        },
        /* Data bit rate - Can_TimeSegmentType Can_DataBitRate */
        {
            (uint8)0U,
            (uint8)0U,
            (uint8)0U,
            (uint16)0U,
            #if (CAN_DUAL_CLOCK_MODE == STD_ON)
            (uint16)0U,
            #endif
            (uint8)0U
        },
        /* Tx Arbitration Start delay - Can_u8TxArbitrationStartDelay */
        (uint8)12U,
        /*Transmiter Delay Compensation Enable */
        (boolean)FALSE,
        /*Specifies the Transmiter Delay Compensation Offset - Can_u8TrcvDelayCompOffset */
        (uint8)0U
        } /* End BaudConfig Struct 0 */
};
/**
*   @brief  HwObjects pointer structure of CanController_0
*/
static const Can_HwObjectConfigType * const Can_apHwObject_Ctrl0[5U]=
{
    &Can_aHwObjectConfig[0U],
    &Can_aHwObjectConfig[1U],
    &Can_aHwObjectConfig[2U],
    &Can_aHwObjectConfig[3U],
    &Can_aHwObjectConfig[4U]
};

CAN_IPW_EXT
/**
*   @brief  Can Controller Config
*/
static const Can_ControllerConfigType Can_aControllerConfig[CAN_CONTROLLER_CONFIG_COUNT]=
{
    {   /* Start Generation of ControllerConfig_0 structure */
        /* Abstracted CanIf Controller ID */
        (uint8)0U,
        /* Controller ID */
        (uint8)0U,
        /* Controller Offset */
        (uint8)0U,
        /* Controller Base Address */
        FLEXCAN_0_BASE,
        /* Controller Activation */
        (boolean)TRUE,
        /* Bus Off uses polling */
        (boolean)TRUE,
    /* --- Default values when Legacy FIFO is not available --- */
    /* Global mask of Legacy FIFO */
    (uint32)0xFFFFFFFFU,
    /* ID Acceptance Mode */
    CAN_LEGACY_FIFO_FORMAT_A,
    /* Legacy FIFO Warning Notification */
    NULL_PTR,
    /* Legacy FIFO Overflow Notification */
    NULL_PTR,
    /* Enhanced FIFO Overflow Notification */
    NULL_PTR,
    #if (CAN_FEATURE_HAS_DMA_ENABLE == STD_ON)
    /* Enhance FIFO Dma Error Notification */
    NULL_PTR,
    /* DMA is not enabled */
    NULL_PTR,
    #endif /* (CAN_FEATURE_HAS_DMA_ENABLE == STD_ON) */
    /* Error interrupt enable */
    (boolean)FALSE,
    /* Error Notification */
    NULL_PTR,
    /* Error FD Notification */
    NULL_PTR,
    /* Default Baudrate ID */
    (uint16)0U,
    /* Baudrate config Count*/
    (uint16)1U,
    /* Baudrate config Pointer Structure */
    Can_aBaudrateConfig_Ctrl0,
    /* Pointer to IPW structure to IP config */
    &CanIpwHwChannelConfig_BOARD_InitPeripherals0,
    /* Hw Object reference count */
    (uint8)5U,
    /* Pointer point to Group of Hw Object that refer to Controller */
        Can_apHwObject_Ctrl0
    }
};  /* End of generation Can_ControllerConfigType */


static const Can_ControllerConfigType * const Can_apController[CAN_CONTROLLER_CONFIG_COUNT]=
{
    &Can_aControllerConfig[0U]
};
/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/
/**
*   @brief  Top level structure contain all Can driver Config
*/
const Can_ConfigType Can_Config_BOARD_InitPeripherals =
{
    /* Configuration Core ID */
    (uint32)0U,
    /* The HTH first Index after HRH consecutive */
    (Can_HwHandleType)4U,
    /* Mapping Controller ID to Controller Hw Offset */
    Can_aCtrlOffsetToCtrlIDMap,
    /* Mapping Controller ID to Hardware Object ID */
    Can_aHwObjIDToCtrlIDMap,
    /* Pointer point to Can Hw Object Config */
    Can_aHwObjectConfig,
    /* Array of Pointer to Controller infomation have aligned by Controller ID */
    Can_apController
};

#define CAN_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/* @violates @ref Can_PBcfg_BOARD_InitPeripherals_c_REF_1 MISRA 2012 Required Directive 4.10 */
/* @violates @ref Can_PBcfg_BOARD_InitPeripherals_c_REF_2 MISRA 2012 Advisory Rule 20.1 */
#include "Can_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */

