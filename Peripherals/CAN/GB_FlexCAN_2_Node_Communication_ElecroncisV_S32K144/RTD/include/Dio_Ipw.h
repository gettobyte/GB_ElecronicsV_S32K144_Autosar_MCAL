/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : GPIO
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

#ifndef DIO_IPW_H
#define DIO_IPW_H

/**
*   @file Dio_Ipw.h
*
*   @internal
*   @defgroup DIO_IPW Dio IPW
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif

/*=================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
=================================================================================================*/

#include "Gpio_Dio_Ip.h"

/*=================================================================================================
*                              SOURCE FILE VERSION INFORMATION
=================================================================================================*/

#define DIO_VENDOR_ID_IPW_H                   43
#define DIO_AR_RELEASE_MAJOR_VERSION_IPW_H    4
#define DIO_AR_RELEASE_MINOR_VERSION_IPW_H    4
#define DIO_AR_RELEASE_REVISION_VERSION_IPW_H 0
#define DIO_SW_MAJOR_VERSION_IPW_H            1
#define DIO_SW_MINOR_VERSION_IPW_H            0
#define DIO_SW_PATCH_VERSION_IPW_H            0

/*=================================================================================================
*                                     FILE VERSION CHECKS
=================================================================================================*/
/* Check if Dio_Ipw header file and Gpio_Dio_Ip header file are of the same vendor */
#if (DIO_VENDOR_ID_IPW_H != GPIO_DIO_IP_VENDOR_ID_H)
    #error "Dio_Ipw.h and Gpio_Dio_Ip.h have different vendor ids"
#endif

/* Check if  Dio_Ipw header file and Gpio_Dio_Ip header file are of the same Autosar version */
#if ((DIO_AR_RELEASE_MAJOR_VERSION_IPW_H    != GPIO_DIO_IP_AR_RELEASE_MAJOR_VERSION_H) || \
     (DIO_AR_RELEASE_MINOR_VERSION_IPW_H    != GPIO_DIO_IP_AR_RELEASE_MINOR_VERSION_H) || \
     (DIO_AR_RELEASE_REVISION_VERSION_IPW_H != GPIO_DIO_IP_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Dio_Ipw.h and Gpio_Dio_Ip.h are different"
#endif

/* Check if Dio_Ipw header file and Gpio_Dio_Ip header file are of the same Software version */
#if ((DIO_SW_MAJOR_VERSION_IPW_H != GPIO_DIO_IP_SW_MAJOR_VERSION_H) || \
     (DIO_SW_MINOR_VERSION_IPW_H != GPIO_DIO_IP_SW_MINOR_VERSION_H) || \
     (DIO_SW_PATCH_VERSION_IPW_H != GPIO_DIO_IP_SW_PATCH_VERSION_H)    \
    )
    #error "Software Version Numbers of Dio_Ipw.h and Gpio_Dio_Ip.h are different"
#endif
/*=================================================================================================
*                                          CONSTANTS
=================================================================================================*/

/*=================================================================================================
*                                      DEFINES AND MACROS
=================================================================================================*/
/** Bit mask for the leftmost channel in a port*/
#if (STD_ON == DIO_DEV_ERROR_DETECT)
#define DIO_BIT1_LEFTMOST_MASK_U32              ((uint32)1U)
#define DIO_CHECK_CHANNEL_VALIDITY(ChannelId)   (DIO_BIT1_LEFTMOST_MASK_U32<<((ChannelId) & GPIO_DIO_IP_CHANNEL_MASK_U32))
#endif

#define DIO_PORTID_SHIFT_U8                     ((uint8)5U)
#define DIO_PORTID_EXTRACT(ChannelId)           ((ChannelId) >> DIO_PORTID_SHIFT_U8)

/*=================================================================================================
*                                             ENUMS
=================================================================================================*/


/*=================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
=================================================================================================*/
#if (STD_ON == DIO_DEV_ERROR_DETECT)
    #ifdef CPU_TYPE
        #if (CPU_TYPE == CPU_TYPE_64)
        /**
        * @brief size of pointer type. on CPU_TYPE_64, the size is 64bits.
        */
        typedef uint64 pointerSizeType;
        #elif (CPU_TYPE == CPU_TYPE_32)
        /**
        * @brief size of pointer type. on CPU_TYPE_32, the size is 32bits.
        */
        typedef uint32 pointerSizeType;
        #elif (CPU_TYPE == CPU_TYPE_16)
        /**
        * @brief size of pointer type. on CPU_TYPE_16, the size is 16bits.
        */
        typedef uint16 pointerSizeType;
        #endif
    #endif
#endif

/*=================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
=================================================================================================*/


/*=================================================================================================
*                                    FUNCTION PROTOTYPES
=================================================================================================*/
#define DIO_START_SEC_CODE
#include "Dio_MemMap.h"
/**
* @brief          Mapping macro between low level layer and high level layer.
*
*/
Dio_LevelType Dio_Ipw_ReadChannel(Dio_ChannelType ChannelId);

/**
* @brief          Mapping macro between low level layer and high level layer.
*
*/
void Dio_Ipw_WriteChannel(Dio_ChannelType ChannelId, Dio_LevelType Level);

#if (STD_ON == DIO_FLIP_CHANNEL_API)
/**
* @brief          Mapping macro between low level layer and high level layer.
*
*/
Dio_LevelType Dio_Ipw_FlipChannel(Dio_ChannelType ChannelId);

#endif /* (STD_ON == DIO_FLIP_CHANNEL_API) */

/**
* @brief          Mapping macro between low level layer and high level layer.
*
*/
Dio_PortLevelType Dio_Ipw_ReadPort(Dio_PortType PortId);

/**
* @brief          Mapping macro between low level layer and high level layer.
*
*/
void Dio_Ipw_WritePort(Dio_PortType PortId,Dio_PortLevelType Level);

/**
* @brief          Mapping macro between low level layer and high level layer.
*
*/
Dio_PortLevelType Dio_Ipw_ReadChannelGroup(const Dio_ChannelGroupType * pChannelGroupIdPtr);

/**
* @brief          Mapping macro between low level layer and high level layer.
*
*/
void Dio_Ipw_WriteChannelGroup(const Dio_ChannelGroupType * pChannelGroupIdPtr,Dio_PortLevelType Level);

#if (STD_ON == DIO_MASKEDWRITEPORT_API)
/**
* @brief          Mapping macro between low level layer and high level layer.
*
*/
void Dio_Ipw_MaskedWritePort(Dio_PortType PortId,Dio_PortLevelType Level,Dio_PortLevelType Mask);

#endif /* (STD_ON == DIO_MASKEDWRITEPORT_API) */

#define DIO_STOP_SEC_CODE
#include "Dio_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* DIO_IPW_H */

/** @} */
