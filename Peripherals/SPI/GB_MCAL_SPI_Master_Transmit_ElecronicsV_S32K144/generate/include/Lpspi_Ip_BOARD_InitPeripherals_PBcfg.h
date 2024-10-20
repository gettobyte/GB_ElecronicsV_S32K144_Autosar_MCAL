/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : LPSPI
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

#ifndef LPSPI_IP_BOARD_INITPERIPHERALS_PBCFG_H
#define LPSPI_IP_BOARD_INITPERIPHERALS_PBCFG_H

/**   
*   @file    Lpspi_Ip_PBcfg.h
*   @version 1.0.0
*
*   @brief   AUTOSAR Spi - Post-Build(PB) configuration file code template.
*   @details Code template for Post-Build(PB) configuration file generation.
*
*   @addtogroup LPSPI_DRIVER_CONFIGURATION Lpspi Driver Configuration
*   @{
*/

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/* Inclusion of incompatible header files shall be avoided */
#define LPSPI_IP_BOARD_INITPERIPHERALS_VENDOR_ID_PBCFG                        43
#define LPSPI_IP_BOARD_INITPERIPHERALS_AR_RELEASE_MAJOR_VERSION_PBCFG         4
#define LPSPI_IP_BOARD_INITPERIPHERALS_AR_RELEASE_MINOR_VERSION_PBCFG         4
#define LPSPI_IP_BOARD_INITPERIPHERALS_AR_RELEASE_REVISION_VERSION_PBCFG      0
#define LPSPI_IP_BOARD_INITPERIPHERALS_SW_MAJOR_VERSION_PBCFG                 1
#define LPSPI_IP_BOARD_INITPERIPHERALS_SW_MINOR_VERSION_PBCFG                 0
#define LPSPI_IP_BOARD_INITPERIPHERALS_SW_PATCH_VERSION_PBCFG                 0

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/


/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
#define LPSPI_IP_CONFIG_BOARD_InitPeripherals_PB \
    extern const Lpspi_Ip_ExternalDeviceType Lpspi_Ip_DeviceAttributes_SpiExternalDevice_0_BOARD_InitPeripherals; \
    extern const Lpspi_Ip_ConfigType Lpspi_Ip_PhyUnitConfig_W25_SPI_BOARD_InitPeripherals; \

/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/


/*==================================================================================================
                                       LOCAL FUNCTIONS
==================================================================================================*/


/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif 

/** @} */


