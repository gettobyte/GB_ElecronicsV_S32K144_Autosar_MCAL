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

/**   
*   @file    Lpspi_Ip_PBcfg.c
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
#include "Lpspi_Ip.h"
#if (LPSPI_IP_DMA_USED == STD_ON)
#include "Dma_Ip.h"
#endif

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define LPSPI_IP_BOARD_INITPERIPHERALS_VENDOR_ID_PBCFG_C                        43
#define LPSPI_IP_BOARD_INITPERIPHERALS_AR_RELEASE_MAJOR_VERSION_PBCFG_C         4
#define LPSPI_IP_BOARD_INITPERIPHERALS_AR_RELEASE_MINOR_VERSION_PBCFG_C         4
#define LPSPI_IP_BOARD_INITPERIPHERALS_AR_RELEASE_REVISION_VERSION_PBCFG_C      0
#define LPSPI_IP_BOARD_INITPERIPHERALS_SW_MAJOR_VERSION_PBCFG_C                 1
#define LPSPI_IP_BOARD_INITPERIPHERALS_SW_MINOR_VERSION_PBCFG_C                 0
#define LPSPI_IP_BOARD_INITPERIPHERALS_SW_PATCH_VERSION_PBCFG_C                 0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Lpspi_Ip.h and Lpspi_Ip_PBcfg.c are of the same vendor */
#if (LPSPI_IP_VENDOR_ID != LPSPI_IP_BOARD_INITPERIPHERALS_VENDOR_ID_PBCFG_C)
    #error "Lpspi_Ip.h and Lpspi_Ip_PBcfg.c have different vendor ids"
#endif
/* Check if Lpspi_Ip.h file and Lpspi_Ip_PBcfg.c file are of the same Autosar version */
#if ((LPSPI_IP_AR_RELEASE_MAJOR_VERSION != LPSPI_IP_BOARD_INITPERIPHERALS_AR_RELEASE_MAJOR_VERSION_PBCFG_C) || \
     (LPSPI_IP_AR_RELEASE_MINOR_VERSION != LPSPI_IP_BOARD_INITPERIPHERALS_AR_RELEASE_MINOR_VERSION_PBCFG_C) || \
     (LPSPI_IP_AR_RELEASE_REVISION_VERSION != LPSPI_IP_BOARD_INITPERIPHERALS_AR_RELEASE_REVISION_VERSION_PBCFG_C))
#error "AutoSar Version Numbers of Lpspi_Ip.h and Lpspi_Ip_PBcfg.c are different"
#endif
#if ((LPSPI_IP_SW_MAJOR_VERSION != LPSPI_IP_BOARD_INITPERIPHERALS_SW_MAJOR_VERSION_PBCFG_C) || \
     (LPSPI_IP_SW_MINOR_VERSION != LPSPI_IP_BOARD_INITPERIPHERALS_SW_MINOR_VERSION_PBCFG_C) || \
     (LPSPI_IP_SW_PATCH_VERSION != LPSPI_IP_BOARD_INITPERIPHERALS_SW_PATCH_VERSION_PBCFG_C))
#error "Software Version Numbers of Lpspi_Ip.h and Lpspi_Ip_PBcfg.c are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    #if (LPSPI_IP_DMA_USED == STD_ON)
        /* Check if current file and Dma_Ip header file are of the same Autosar version */
        #if ((DMA_IP_AR_RELEASE_MAJOR_VERSION_H != LPSPI_IP_BOARD_INITPERIPHERALS_AR_RELEASE_MAJOR_VERSION_PBCFG_C) || \
             (DMA_IP_AR_RELEASE_MINOR_VERSION_H != LPSPI_IP_BOARD_INITPERIPHERALS_AR_RELEASE_MINOR_VERSION_PBCFG_C))
        #error "AutoSar Version Numbers of Lpspi_Ip_Cfg.h and Dma_Ip.h are different"
        #endif
    #endif
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
#if (LPSPI_IP_DMA_USED == STD_ON)
    #define SPI_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
#else
    #define SPI_START_SEC_VAR_INIT_UNSPECIFIED
#endif
#include "Spi_MemMap.h"
/* Lpspi_Ip_DeviceParamsCfg_BOARD_InitPeripherals Device Attribute Configuration of Spi*/
static Lpspi_Ip_DeviceParamsType Lpspi_Ip_DeviceParamsCfg_BOARD_InitPeripherals[2U] =
{
    {
        (uint8)8U, /* Frame size */
        (boolean)FALSE, /*Lsb */
        (uint32)0U  /* Default Data */
#if (STD_ON == LPSPI_IP_HALF_DUPLEX_MODE_SUPPORT)        
        , LPSPI_IP_FULL_DUPLEX /* Transfer mode - dummy value */
#endif        
    },
    {
        (uint8)8U, /* Frame size */
        (boolean)FALSE, /*Lsb */
        (uint32)0U  /* Default Data */
#if (STD_ON == LPSPI_IP_HALF_DUPLEX_MODE_SUPPORT)        
        , LPSPI_IP_FULL_DUPLEX /* Transfer mode - dummy value */
#endif        
    }
};
#if (LPSPI_IP_DMA_USED == STD_ON)
    #define SPI_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
#else
    #define SPI_STOP_SEC_VAR_INIT_UNSPECIFIED
#endif
#include "Spi_MemMap.h"
#if (LPSPI_IP_ENABLE_DMAFASTTRANSFER_SUPPORT == STD_ON)
#define SPI_START_SEC_VAR_CLEARED_UNSPECIFIED_NO_CACHEABLE
#include "Spi_MemMap.h"
#define SPI_STOP_SEC_VAR_CLEARED_UNSPECIFIED_NO_CACHEABLE
#include "Spi_MemMap.h"
#endif /*(LPSPI_IP_ENABLE_DMAFASTTRANSFER_SUPPORT == STD_ON)*/
#define SPI_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Spi_MemMap.h"
/* Lpspi_Ip_DeviceAttributes_SpiExternalDevice_0 Device Attribute Configuration of Spi*/
const Lpspi_Ip_ExternalDeviceType Lpspi_Ip_DeviceAttributes_SpiExternalDevice_0_BOARD_InitPeripherals =
{
    1U,  /* Instance */
        (uint32)(LPSPI_CCR_SCKPCS(47U) | LPSPI_CCR_PCSSCK(47U) | LPSPI_CCR_SCKDIV(1U) | LPSPI_CCR_DBT(255U)), /* ccr */
        (uint32)(LPSPI_TCR_WIDTH(0U) | LPSPI_TCR_CPOL(0U) | LPSPI_TCR_CPHA(0U) | LPSPI_TCR_PRESCALE(0U) | LPSPI_TCR_PCS(3U) | LPSPI_TCR_CONT(0U)) /* TCR */


#if (STD_ON == LPSPI_IP_HALF_DUPLEX_MODE_SUPPORT) 
    ,(uint32)0U /* This device do not support half duplex mode */
#endif
    , &Lpspi_Ip_DeviceParamsCfg_BOARD_InitPeripherals[0U]
};

/* Lpspi_Ip_DeviceAttributes_W25_SPI_Flash Device Attribute Configuration of Spi*/
const Lpspi_Ip_ExternalDeviceType Lpspi_Ip_DeviceAttributes_W25_SPI_Flash_BOARD_InitPeripherals =
{
    0U,  /* Instance */
        (uint32)(LPSPI_CCR_SCKPCS(7U) | LPSPI_CCR_PCSSCK(7U) | LPSPI_CCR_SCKDIV(78U) | LPSPI_CCR_DBT(49U)), /* ccr */
        (uint32)(LPSPI_TCR_WIDTH(0U) | LPSPI_TCR_CPOL(0U) | LPSPI_TCR_CPHA(0U) | LPSPI_TCR_PRESCALE(0U) | LPSPI_TCR_PCS(0U) | LPSPI_TCR_CONT(1U)) /* TCR */


#if (STD_ON == LPSPI_IP_HALF_DUPLEX_MODE_SUPPORT) 
    ,(uint32)0U /* This device do not support half duplex mode */
#endif
    , &Lpspi_Ip_DeviceParamsCfg_BOARD_InitPeripherals[1U]
};

/* SPI controller SpiPhyUnit_0 configuration. */
const Lpspi_Ip_ConfigType Lpspi_Ip_PhyUnitConfig_SpiPhyUnit_0_BOARD_InitPeripherals = 
{
    1U,  /* Instance */
     /* CR */
    (uint32)0,
    /* CFGR1 */
    (uint32)(LPSPI_CFGR1_PINCFG(0U) | LPSPI_CFGR1_PCSPOL(0U) | LPSPI_CFGR1_MASTER(1U) | LPSPI_CFGR1_SAMPLE(0U)),
    #if (LPSPI_IP_SLAVE_SUPPORT == STD_ON)
    (boolean)FALSE,
    #endif
    #if (LPSPI_IP_DMA_USED == STD_ON)
    (boolean)FALSE,
    (uint8)0, /* txDmaChannel */
    (uint8)0, /* rxDmaChannel */
    #if (LPSPI_IP_ENABLE_DMAFASTTRANSFER_SUPPORT == STD_ON)
    (uint8)0U, /* u8NumOfDmaFastTransfer */
    NULL_PTR, /* pCmdDmaFast */
    (uint8)0U,
    (uint8)0U,
    NULL_PTR, /* List of Tx SG Id */
    NULL_PTR, /* List of Rx SG Id */
    #endif
    #endif
    LPSPI_IP_POLLING, /* Transfer mode */
    (uint8)0U /* State structure element from the array */
};

/* SPI controller W25_SPI configuration. */
const Lpspi_Ip_ConfigType Lpspi_Ip_PhyUnitConfig_W25_SPI_BOARD_InitPeripherals = 
{
    0U,  /* Instance */
     /* CR */
    (uint32)0,
    /* CFGR1 */
    (uint32)(LPSPI_CFGR1_PINCFG(0U) | LPSPI_CFGR1_PCSPOL(0U) | LPSPI_CFGR1_MASTER(1U) | LPSPI_CFGR1_SAMPLE(0U)),
    #if (LPSPI_IP_SLAVE_SUPPORT == STD_ON)
    (boolean)FALSE,
    #endif
    #if (LPSPI_IP_DMA_USED == STD_ON)
    (boolean)FALSE,
    (uint8)0, /* txDmaChannel */
    (uint8)0, /* rxDmaChannel */
    #if (LPSPI_IP_ENABLE_DMAFASTTRANSFER_SUPPORT == STD_ON)
    (uint8)0U, /* u8NumOfDmaFastTransfer */
    NULL_PTR, /* pCmdDmaFast */
    (uint8)0U,
    (uint8)0U,
    NULL_PTR, /* List of Tx SG Id */
    NULL_PTR, /* List of Rx SG Id */
    #endif
    #endif
    LPSPI_IP_POLLING, /* Transfer mode */
    (uint8)1U /* State structure element from the array */
};


#define SPI_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Spi_MemMap.h"
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

/** @} */

