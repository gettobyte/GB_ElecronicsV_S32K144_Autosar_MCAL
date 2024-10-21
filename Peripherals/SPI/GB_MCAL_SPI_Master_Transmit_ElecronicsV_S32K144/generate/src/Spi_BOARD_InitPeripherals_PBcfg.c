/**   
*   @file    Spi_PBcfg.c
*   @implements Spi_PBcfg.c_Artifact
*   @version 1.0.0
*
*   @brief   AUTOSAR Spi - Post-Build(PB) configuration file code template.
*   @details Code template for Post-Build(PB) configuration file generation.
*
*   @addtogroup SPI_DRIVER_CONFIGURATION Spi Driver Configuration
*   @{
*/
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

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/

#include "Spi.h"
#include "Spi_Ipw_BOARD_InitPeripherals_PBcfg.h"

#if (SPI_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
#include "Dem.h"
#endif

/*==================================================================================================
*                                    SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define SPI_BOARD_INITPERIPHERALS_MODULE_ID_PBCFG_C                        83
#define SPI_BOARD_INITPERIPHERALS_VENDOR_ID_PBCFG_C                        43
#define SPI_BOARD_INITPERIPHERALS_AR_RELEASE_MAJOR_VERSION_PBCFG_C         4
#define SPI_BOARD_INITPERIPHERALS_AR_RELEASE_MINOR_VERSION_PBCFG_C         4

#define SPI_BOARD_INITPERIPHERALS_AR_RELEASE_REVISION_VERSION_PBCFG_C      0
#define SPI_BOARD_INITPERIPHERALS_SW_MAJOR_VERSION_PBCFG_C                 1
#define SPI_BOARD_INITPERIPHERALS_SW_MINOR_VERSION_PBCFG_C                 0
#define SPI_BOARD_INITPERIPHERALS_SW_PATCH_VERSION_PBCFG_C                 0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and SPI header file are of the same vendor */
#if (SPI_BOARD_INITPERIPHERALS_VENDOR_ID_PBCFG_C != SPI_VENDOR_ID)
    #error "Spi_PBCfg.c and Spi.h have different vendor ids"
#endif
/* Check if current file and SPI header file are of the same Autosar version */
#if ((SPI_BOARD_INITPERIPHERALS_AR_RELEASE_MAJOR_VERSION_PBCFG_C    != SPI_AR_RELEASE_MAJOR_VERSION) || \
     (SPI_BOARD_INITPERIPHERALS_AR_RELEASE_MINOR_VERSION_PBCFG_C    != SPI_AR_RELEASE_MINOR_VERSION) || \
     (SPI_BOARD_INITPERIPHERALS_AR_RELEASE_REVISION_VERSION_PBCFG_C != SPI_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Spi_PBCfg.c and Spi.h are different"
#endif
/* Check if current file and SPI header file are of the same Software version */
#if ((SPI_BOARD_INITPERIPHERALS_SW_MAJOR_VERSION_PBCFG_C != SPI_SW_MAJOR_VERSION) || \
     (SPI_BOARD_INITPERIPHERALS_SW_MINOR_VERSION_PBCFG_C != SPI_SW_MINOR_VERSION) || \
     (SPI_BOARD_INITPERIPHERALS_SW_PATCH_VERSION_PBCFG_C != SPI_SW_PATCH_VERSION))
    #error "Software Version Numbers of Spi_PBCfg.c and Spi.h are different"
#endif

/* Check if current file and SPI header file are of the same vendor */
#if (SPI_BOARD_INITPERIPHERALS_VENDOR_ID_PBCFG_C != SPI_IPW_VENDOR_ID_BOARD_INITPERIPHERALS_PBCFG_H)
    #error "Spi_PBCfg.c and Spi_Ipw_PBCfg.h have different vendor ids"
#endif
/* Check if current file and SPI header file are of the same Autosar version */
#if ((SPI_BOARD_INITPERIPHERALS_AR_RELEASE_MAJOR_VERSION_PBCFG_C    != SPI_IPW_AR_RELEASE_MAJOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_H) || \
     (SPI_BOARD_INITPERIPHERALS_AR_RELEASE_MINOR_VERSION_PBCFG_C    != SPI_IPW_AR_RELEASE_MINOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_H) || \
     (SPI_BOARD_INITPERIPHERALS_AR_RELEASE_REVISION_VERSION_PBCFG_C != SPI_IPW_AR_RELEASE_REVISION_VERSION_BOARD_INITPERIPHERALS_PBCFG_H ))
    #error "AutoSar Version Numbers of Spi_PBCfg.c and Spi_Ipw_PBCfg.h are different"
#endif
/* Check if current file and SPI header file are of the same Software version */
#if ((SPI_BOARD_INITPERIPHERALS_SW_MAJOR_VERSION_PBCFG_C != SPI_IPW_SW_MAJOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_H) || \
     (SPI_BOARD_INITPERIPHERALS_SW_MINOR_VERSION_PBCFG_C != SPI_IPW_SW_MINOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_H) || \
     (SPI_BOARD_INITPERIPHERALS_SW_PATCH_VERSION_PBCFG_C != SPI_IPW_SW_PATCH_VERSION_BOARD_INITPERIPHERALS_PBCFG_H))
    #error "Software Version Numbers of Spi_PBCfg.c and Spi_Ipw_PBCfg.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
#if (SPI_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
/* Check if current file and Dem.h file are of the same Autosar version */
#if ((SPI_BOARD_INITPERIPHERALS_AR_RELEASE_MAJOR_VERSION_PBCFG_C    != DEM_AR_RELEASE_MAJOR_VERSION) || \
     (SPI_BOARD_INITPERIPHERALS_AR_RELEASE_MINOR_VERSION_PBCFG_C    != DEM_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Spi_PBCfg.c and Dem.h are different"
#endif
#endif
#endif

/*==================================================================================================
*                         LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/


/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/
/*==================================================================================================
*                                  LOCAL FUNCTION PROTOTYPES
==================================================================================================*/


/*==================================================================================================
*                                      LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL FUNCTIONS
==================================================================================================*/
#define SPI_START_SEC_CODE
#include "Spi_MemMap.h"

/* List Of Notification Functions */
/* Job start/end Notifications */
/* Sequence End Notifications */

#define SPI_STOP_SEC_CODE
#include "Spi_MemMap.h"
/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/
#if ((SPI_DMA_USED == STD_ON) && \
    ((SPI_LEVEL_DELIVERED == LEVEL1) || (SPI_LEVEL_DELIVERED == LEVEL2)))
    #define SPI_START_SEC_VAR_CLEARED_UNSPECIFIED_NO_CACHEABLE
#else
    #define SPI_START_SEC_VAR_CLEARED_UNSPECIFIED
#endif /* ((SPI_DMA_USED == STD_ON) && ((SPI_LEVEL_DELIVERED == LEVEL1) ||
        (SPI_LEVEL_DELIVERED == LEVEL2))) */
#include "Spi_MemMap.h"

/* Buffers Descriptors for EB Channels and Allocate Buffers for IB Channels */
static Spi_DataBufferType Spi_BufferTX_BOARD_InitPeripherals_SpiChannel_0[4];
static Spi_DataBufferType Spi_BufferRX_BOARD_InitPeripherals_SpiChannel_0[4];
static Spi_BufferDescriptorType Spi_Buffer_BOARD_InitPeripherals_SpiChannel_1;
static Spi_DataBufferType Spi_BufferTX_BOARD_InitPeripherals_G2B_W25Q_Flash_Reset_Channel[2];
static Spi_DataBufferType Spi_BufferRX_BOARD_InitPeripherals_G2B_W25Q_Flash_Reset_Channel[2];
static Spi_DataBufferType Spi_BufferTX_BOARD_InitPeripherals_G2B_W25Q_Flash_WrEn_Channel[1];
static Spi_DataBufferType Spi_BufferRX_BOARD_InitPeripherals_G2B_W25Q_Flash_WrEn_Channel[1];
static Spi_DataBufferType Spi_BufferTX_BOARD_InitPeripherals_G2B_W25Q_Flash_ReData_Channel[40];
static Spi_DataBufferType Spi_BufferRX_BOARD_InitPeripherals_G2B_W25Q_Flash_ReData_Channel[40];
static Spi_DataBufferType Spi_BufferTX_BOARD_InitPeripherals_G2B_W25Q_Flash_WrCommand_Channel[4];
static Spi_DataBufferType Spi_BufferRX_BOARD_InitPeripherals_G2B_W25Q_Flash_WrCommand_Channel[4];
static Spi_DataBufferType Spi_BufferTX_BOARD_InitPeripherals_G2B_W25Q_Flash_ReJedID_Channel[4];
static Spi_DataBufferType Spi_BufferRX_BOARD_InitPeripherals_G2B_W25Q_Flash_ReJedID_Channel[4];
static Spi_DataBufferType Spi_BufferTX_BOARD_InitPeripherals_G2B_W25Q_Flash_WrData_Channel[40];
static Spi_DataBufferType Spi_BufferRX_BOARD_InitPeripherals_G2B_W25Q_Flash_WrData_Channel[40];
static Spi_DataBufferType Spi_BufferTX_BOARD_InitPeripherals_G2B_W25Q_Flash_ErSec4kb_Channel[4];
static Spi_DataBufferType Spi_BufferRX_BOARD_InitPeripherals_G2B_W25Q_Flash_ErSec4kb_Channel[4];
static Spi_DataBufferType Spi_BufferTX_BOARD_InitPeripherals_G2B_W25Q_Flash_ErSec32kb_Channel[4];
static Spi_DataBufferType Spi_BufferRX_BOARD_InitPeripherals_G2B_W25Q_Flash_ErSec32kb_Channel[4];
static Spi_DataBufferType Spi_BufferTX_BOARD_InitPeripherals_G2B_W25Q_Flash_ErSec64kb_Channel[4];
static Spi_DataBufferType Spi_BufferRX_BOARD_InitPeripherals_G2B_W25Q_Flash_ErSec64kb_Channel[4];
static Spi_DataBufferType Spi_BufferTX_BOARD_InitPeripherals_G2B_W25Q_Flash_ChiEra_Channel[1];
static Spi_DataBufferType Spi_BufferRX_BOARD_InitPeripherals_G2B_W25Q_Flash_ChiEra_Channel[1];
static Spi_DataBufferType Spi_BufferTX_BOARD_InitPeripherals_G2B_W25Q_Flash_WrSR_Channel[2];
static Spi_DataBufferType Spi_BufferRX_BOARD_InitPeripherals_G2B_W25Q_Flash_WrSR_Channel[2];
static Spi_DataBufferType Spi_BufferTX_BOARD_InitPeripherals_G2B_W25Q_Flash_ReSRCommand_Job[2];
static Spi_DataBufferType Spi_BufferRX_BOARD_InitPeripherals_G2B_W25Q_Flash_ReSRCommand_Job[2];
static Spi_DataBufferType Spi_BufferTX_BOARD_InitPeripherals_G2B_W25Q_Flash_ReSRData_Job[1];
static Spi_DataBufferType Spi_BufferRX_BOARD_InitPeripherals_G2B_W25Q_Flash_ReSRData_Job[1];

#if ((SPI_DMA_USED == STD_ON) && \
    ((SPI_LEVEL_DELIVERED == LEVEL1) || (SPI_LEVEL_DELIVERED == LEVEL2)))
    #define SPI_STOP_SEC_VAR_CLEARED_UNSPECIFIED_NO_CACHEABLE
#else
    #define SPI_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#endif /* ((SPI_DMA_USED == STD_ON) && ((SPI_LEVEL_DELIVERED == LEVEL1) ||
        (SPI_LEVEL_DELIVERED == LEVEL2))) */
#include "Spi_MemMap.h"

#define SPI_START_SEC_VAR_INIT_UNSPECIFIED
#include "Spi_MemMap.h"

/* Buffers Descriptors for IB Channels */
/*  Buffers Descriptors for IB Channel SpiChannel_0 */
static Spi_BufferDescriptorType Spi_Buffer_BOARD_InitPeripherals_SpiChannel_0 =
{
    Spi_BufferTX_BOARD_InitPeripherals_SpiChannel_0,  /* BufferTX */
    Spi_BufferRX_BOARD_InitPeripherals_SpiChannel_0   /* BufferRX */
};
/*  Buffers Descriptors for IB Channel G2B_W25Q_Flash_Reset_Channel */
static Spi_BufferDescriptorType Spi_Buffer_BOARD_InitPeripherals_G2B_W25Q_Flash_Reset_Channel =
{
    Spi_BufferTX_BOARD_InitPeripherals_G2B_W25Q_Flash_Reset_Channel,  /* BufferTX */
    Spi_BufferRX_BOARD_InitPeripherals_G2B_W25Q_Flash_Reset_Channel   /* BufferRX */
};
/*  Buffers Descriptors for IB Channel G2B_W25Q_Flash_WrEn_Channel */
static Spi_BufferDescriptorType Spi_Buffer_BOARD_InitPeripherals_G2B_W25Q_Flash_WrEn_Channel =
{
    Spi_BufferTX_BOARD_InitPeripherals_G2B_W25Q_Flash_WrEn_Channel,  /* BufferTX */
    Spi_BufferRX_BOARD_InitPeripherals_G2B_W25Q_Flash_WrEn_Channel   /* BufferRX */
};
/*  Buffers Descriptors for IB Channel G2B_W25Q_Flash_ReData_Channel */
static Spi_BufferDescriptorType Spi_Buffer_BOARD_InitPeripherals_G2B_W25Q_Flash_ReData_Channel =
{
    Spi_BufferTX_BOARD_InitPeripherals_G2B_W25Q_Flash_ReData_Channel,  /* BufferTX */
    Spi_BufferRX_BOARD_InitPeripherals_G2B_W25Q_Flash_ReData_Channel   /* BufferRX */
};
/*  Buffers Descriptors for IB Channel G2B_W25Q_Flash_WrCommand_Channel */
static Spi_BufferDescriptorType Spi_Buffer_BOARD_InitPeripherals_G2B_W25Q_Flash_WrCommand_Channel =
{
    Spi_BufferTX_BOARD_InitPeripherals_G2B_W25Q_Flash_WrCommand_Channel,  /* BufferTX */
    Spi_BufferRX_BOARD_InitPeripherals_G2B_W25Q_Flash_WrCommand_Channel   /* BufferRX */
};
/*  Buffers Descriptors for IB Channel G2B_W25Q_Flash_ReJedID_Channel */
static Spi_BufferDescriptorType Spi_Buffer_BOARD_InitPeripherals_G2B_W25Q_Flash_ReJedID_Channel =
{
    Spi_BufferTX_BOARD_InitPeripherals_G2B_W25Q_Flash_ReJedID_Channel,  /* BufferTX */
    Spi_BufferRX_BOARD_InitPeripherals_G2B_W25Q_Flash_ReJedID_Channel   /* BufferRX */
};
/*  Buffers Descriptors for IB Channel G2B_W25Q_Flash_WrData_Channel */
static Spi_BufferDescriptorType Spi_Buffer_BOARD_InitPeripherals_G2B_W25Q_Flash_WrData_Channel =
{
    Spi_BufferTX_BOARD_InitPeripherals_G2B_W25Q_Flash_WrData_Channel,  /* BufferTX */
    Spi_BufferRX_BOARD_InitPeripherals_G2B_W25Q_Flash_WrData_Channel   /* BufferRX */
};
/*  Buffers Descriptors for IB Channel G2B_W25Q_Flash_ErSec4kb_Channel */
static Spi_BufferDescriptorType Spi_Buffer_BOARD_InitPeripherals_G2B_W25Q_Flash_ErSec4kb_Channel =
{
    Spi_BufferTX_BOARD_InitPeripherals_G2B_W25Q_Flash_ErSec4kb_Channel,  /* BufferTX */
    Spi_BufferRX_BOARD_InitPeripherals_G2B_W25Q_Flash_ErSec4kb_Channel   /* BufferRX */
};
/*  Buffers Descriptors for IB Channel G2B_W25Q_Flash_ErSec32kb_Channel */
static Spi_BufferDescriptorType Spi_Buffer_BOARD_InitPeripherals_G2B_W25Q_Flash_ErSec32kb_Channel =
{
    Spi_BufferTX_BOARD_InitPeripherals_G2B_W25Q_Flash_ErSec32kb_Channel,  /* BufferTX */
    Spi_BufferRX_BOARD_InitPeripherals_G2B_W25Q_Flash_ErSec32kb_Channel   /* BufferRX */
};
/*  Buffers Descriptors for IB Channel G2B_W25Q_Flash_ErSec64kb_Channel */
static Spi_BufferDescriptorType Spi_Buffer_BOARD_InitPeripherals_G2B_W25Q_Flash_ErSec64kb_Channel =
{
    Spi_BufferTX_BOARD_InitPeripherals_G2B_W25Q_Flash_ErSec64kb_Channel,  /* BufferTX */
    Spi_BufferRX_BOARD_InitPeripherals_G2B_W25Q_Flash_ErSec64kb_Channel   /* BufferRX */
};
/*  Buffers Descriptors for IB Channel G2B_W25Q_Flash_ChiEra_Channel */
static Spi_BufferDescriptorType Spi_Buffer_BOARD_InitPeripherals_G2B_W25Q_Flash_ChiEra_Channel =
{
    Spi_BufferTX_BOARD_InitPeripherals_G2B_W25Q_Flash_ChiEra_Channel,  /* BufferTX */
    Spi_BufferRX_BOARD_InitPeripherals_G2B_W25Q_Flash_ChiEra_Channel   /* BufferRX */
};
/*  Buffers Descriptors for IB Channel G2B_W25Q_Flash_WrSR_Channel */
static Spi_BufferDescriptorType Spi_Buffer_BOARD_InitPeripherals_G2B_W25Q_Flash_WrSR_Channel =
{
    Spi_BufferTX_BOARD_InitPeripherals_G2B_W25Q_Flash_WrSR_Channel,  /* BufferTX */
    Spi_BufferRX_BOARD_InitPeripherals_G2B_W25Q_Flash_WrSR_Channel   /* BufferRX */
};
/*  Buffers Descriptors for IB Channel G2B_W25Q_Flash_ReSRCommand_Job */
static Spi_BufferDescriptorType Spi_Buffer_BOARD_InitPeripherals_G2B_W25Q_Flash_ReSRCommand_Job =
{
    Spi_BufferTX_BOARD_InitPeripherals_G2B_W25Q_Flash_ReSRCommand_Job,  /* BufferTX */
    Spi_BufferRX_BOARD_InitPeripherals_G2B_W25Q_Flash_ReSRCommand_Job   /* BufferRX */
};
/*  Buffers Descriptors for IB Channel G2B_W25Q_Flash_ReSRData_Job */
static Spi_BufferDescriptorType Spi_Buffer_BOARD_InitPeripherals_G2B_W25Q_Flash_ReSRData_Job =
{
    Spi_BufferTX_BOARD_InitPeripherals_G2B_W25Q_Flash_ReSRData_Job,  /* BufferTX */
    Spi_BufferRX_BOARD_InitPeripherals_G2B_W25Q_Flash_ReSRData_Job   /* BufferRX */
};

#define SPI_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Spi_MemMap.h"
/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/
#define SPI_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Spi_MemMap.h"

/* Channel Configuration */
/* Channel Configuration for SpiChannel_0 */
static const Spi_ChannelConfigType Spi_ChannelConfig_SpiChannel_0_BOARD_InitPeripherals =
{
        IB,  /* BufferType IB or EB */
        8U,   /* Frame size */
        (boolean)FALSE, /* Bite order, 1:LSB, 0: MSB */
#ifdef SPI_HALF_DUPLEX_MODE_SUPPORT
  #if (STD_ON == SPI_HALF_DUPLEX_MODE_SUPPORT)
            SPI_FULL_DUPLEX,
          #endif
#endif
        (uint32)0U,  /* DefaultTransmitValue (configured) */
        4U, /* length of buffer */
        &Spi_Buffer_BOARD_InitPeripherals_SpiChannel_0, /* BufferDescriptor */
        SPI_SPURIOUS_CORE_ID,  /* Core Id */
        &Spi_axSpiChannelState[0U] /* ChannelState pointer */
};
/* Channel Configuration for SpiChannel_1 */
static const Spi_ChannelConfigType Spi_ChannelConfig_SpiChannel_1_BOARD_InitPeripherals =
{
        EB,  /* BufferType IB or EB */
        8U,   /* Frame size */
        (boolean)FALSE, /* Bite order, 1:LSB, 0: MSB */
#ifdef SPI_HALF_DUPLEX_MODE_SUPPORT
  #if (STD_ON == SPI_HALF_DUPLEX_MODE_SUPPORT)
            SPI_FULL_DUPLEX,
          #endif
#endif
        (uint32)0U,  /* DefaultTransmitValue (configured) */
        4U, /* length of buffer */
        &Spi_Buffer_BOARD_InitPeripherals_SpiChannel_1, /* BufferDescriptor */
        SPI_SPURIOUS_CORE_ID,  /* Core Id */
        &Spi_axSpiChannelState[1U] /* ChannelState pointer */
};
/* Channel Configuration for G2B_W25Q_Flash_Reset_Channel */
static const Spi_ChannelConfigType Spi_ChannelConfig_G2B_W25Q_Flash_Reset_Channel_BOARD_InitPeripherals =
{
        IB,  /* BufferType IB or EB */
        8U,   /* Frame size */
        (boolean)FALSE, /* Bite order, 1:LSB, 0: MSB */
#ifdef SPI_HALF_DUPLEX_MODE_SUPPORT
  #if (STD_ON == SPI_HALF_DUPLEX_MODE_SUPPORT)
            SPI_FULL_DUPLEX,
          #endif
#endif
        (uint32)0U,  /* DefaultTransmitValue (configured) */
        2U, /* length of buffer */
        &Spi_Buffer_BOARD_InitPeripherals_G2B_W25Q_Flash_Reset_Channel, /* BufferDescriptor */
        SPI_SPURIOUS_CORE_ID,  /* Core Id */
        &Spi_axSpiChannelState[2U] /* ChannelState pointer */
};
/* Channel Configuration for G2B_W25Q_Flash_WrEn_Channel */
static const Spi_ChannelConfigType Spi_ChannelConfig_G2B_W25Q_Flash_WrEn_Channel_BOARD_InitPeripherals =
{
        IB,  /* BufferType IB or EB */
        8U,   /* Frame size */
        (boolean)FALSE, /* Bite order, 1:LSB, 0: MSB */
#ifdef SPI_HALF_DUPLEX_MODE_SUPPORT
  #if (STD_ON == SPI_HALF_DUPLEX_MODE_SUPPORT)
            SPI_FULL_DUPLEX,
          #endif
#endif
        (uint32)0U,  /* DefaultTransmitValue (configured) */
        1U, /* length of buffer */
        &Spi_Buffer_BOARD_InitPeripherals_G2B_W25Q_Flash_WrEn_Channel, /* BufferDescriptor */
        SPI_SPURIOUS_CORE_ID,  /* Core Id */
        &Spi_axSpiChannelState[3U] /* ChannelState pointer */
};
/* Channel Configuration for G2B_W25Q_Flash_ReData_Channel */
static const Spi_ChannelConfigType Spi_ChannelConfig_G2B_W25Q_Flash_ReData_Channel_BOARD_InitPeripherals =
{
        IB,  /* BufferType IB or EB */
        8U,   /* Frame size */
        (boolean)FALSE, /* Bite order, 1:LSB, 0: MSB */
#ifdef SPI_HALF_DUPLEX_MODE_SUPPORT
  #if (STD_ON == SPI_HALF_DUPLEX_MODE_SUPPORT)
            SPI_FULL_DUPLEX,
          #endif
#endif
        (uint32)1U,  /* DefaultTransmitValue (configured) */
        40U, /* length of buffer */
        &Spi_Buffer_BOARD_InitPeripherals_G2B_W25Q_Flash_ReData_Channel, /* BufferDescriptor */
        SPI_SPURIOUS_CORE_ID,  /* Core Id */
        &Spi_axSpiChannelState[4U] /* ChannelState pointer */
};
/* Channel Configuration for G2B_W25Q_Flash_WrCommand_Channel */
static const Spi_ChannelConfigType Spi_ChannelConfig_G2B_W25Q_Flash_WrCommand_Channel_BOARD_InitPeripherals =
{
        IB,  /* BufferType IB or EB */
        8U,   /* Frame size */
        (boolean)FALSE, /* Bite order, 1:LSB, 0: MSB */
#ifdef SPI_HALF_DUPLEX_MODE_SUPPORT
  #if (STD_ON == SPI_HALF_DUPLEX_MODE_SUPPORT)
            SPI_FULL_DUPLEX,
          #endif
#endif
        (uint32)0U,  /* DefaultTransmitValue (configured) */
        4U, /* length of buffer */
        &Spi_Buffer_BOARD_InitPeripherals_G2B_W25Q_Flash_WrCommand_Channel, /* BufferDescriptor */
        SPI_SPURIOUS_CORE_ID,  /* Core Id */
        &Spi_axSpiChannelState[5U] /* ChannelState pointer */
};
/* Channel Configuration for G2B_W25Q_Flash_ReJedID_Channel */
static const Spi_ChannelConfigType Spi_ChannelConfig_G2B_W25Q_Flash_ReJedID_Channel_BOARD_InitPeripherals =
{
        IB,  /* BufferType IB or EB */
        8U,   /* Frame size */
        (boolean)FALSE, /* Bite order, 1:LSB, 0: MSB */
#ifdef SPI_HALF_DUPLEX_MODE_SUPPORT
  #if (STD_ON == SPI_HALF_DUPLEX_MODE_SUPPORT)
            SPI_FULL_DUPLEX,
          #endif
#endif
        (uint32)0U,  /* DefaultTransmitValue (configured) */
        4U, /* length of buffer */
        &Spi_Buffer_BOARD_InitPeripherals_G2B_W25Q_Flash_ReJedID_Channel, /* BufferDescriptor */
        SPI_SPURIOUS_CORE_ID,  /* Core Id */
        &Spi_axSpiChannelState[6U] /* ChannelState pointer */
};
/* Channel Configuration for G2B_W25Q_Flash_WrData_Channel */
static const Spi_ChannelConfigType Spi_ChannelConfig_G2B_W25Q_Flash_WrData_Channel_BOARD_InitPeripherals =
{
        IB,  /* BufferType IB or EB */
        8U,   /* Frame size */
        (boolean)FALSE, /* Bite order, 1:LSB, 0: MSB */
#ifdef SPI_HALF_DUPLEX_MODE_SUPPORT
  #if (STD_ON == SPI_HALF_DUPLEX_MODE_SUPPORT)
            SPI_FULL_DUPLEX,
          #endif
#endif
        (uint32)0U,  /* DefaultTransmitValue (configured) */
        40U, /* length of buffer */
        &Spi_Buffer_BOARD_InitPeripherals_G2B_W25Q_Flash_WrData_Channel, /* BufferDescriptor */
        SPI_SPURIOUS_CORE_ID,  /* Core Id */
        &Spi_axSpiChannelState[7U] /* ChannelState pointer */
};
/* Channel Configuration for G2B_W25Q_Flash_ErSec4kb_Channel */
static const Spi_ChannelConfigType Spi_ChannelConfig_G2B_W25Q_Flash_ErSec4kb_Channel_BOARD_InitPeripherals =
{
        IB,  /* BufferType IB or EB */
        8U,   /* Frame size */
        (boolean)FALSE, /* Bite order, 1:LSB, 0: MSB */
#ifdef SPI_HALF_DUPLEX_MODE_SUPPORT
  #if (STD_ON == SPI_HALF_DUPLEX_MODE_SUPPORT)
            SPI_FULL_DUPLEX,
          #endif
#endif
        (uint32)0U,  /* DefaultTransmitValue (configured) */
        4U, /* length of buffer */
        &Spi_Buffer_BOARD_InitPeripherals_G2B_W25Q_Flash_ErSec4kb_Channel, /* BufferDescriptor */
        SPI_SPURIOUS_CORE_ID,  /* Core Id */
        &Spi_axSpiChannelState[8U] /* ChannelState pointer */
};
/* Channel Configuration for G2B_W25Q_Flash_ErSec32kb_Channel */
static const Spi_ChannelConfigType Spi_ChannelConfig_G2B_W25Q_Flash_ErSec32kb_Channel_BOARD_InitPeripherals =
{
        IB,  /* BufferType IB or EB */
        8U,   /* Frame size */
        (boolean)FALSE, /* Bite order, 1:LSB, 0: MSB */
#ifdef SPI_HALF_DUPLEX_MODE_SUPPORT
  #if (STD_ON == SPI_HALF_DUPLEX_MODE_SUPPORT)
            SPI_FULL_DUPLEX,
          #endif
#endif
        (uint32)0U,  /* DefaultTransmitValue (configured) */
        4U, /* length of buffer */
        &Spi_Buffer_BOARD_InitPeripherals_G2B_W25Q_Flash_ErSec32kb_Channel, /* BufferDescriptor */
        SPI_SPURIOUS_CORE_ID,  /* Core Id */
        &Spi_axSpiChannelState[9U] /* ChannelState pointer */
};
/* Channel Configuration for G2B_W25Q_Flash_ErSec64kb_Channel */
static const Spi_ChannelConfigType Spi_ChannelConfig_G2B_W25Q_Flash_ErSec64kb_Channel_BOARD_InitPeripherals =
{
        IB,  /* BufferType IB or EB */
        8U,   /* Frame size */
        (boolean)FALSE, /* Bite order, 1:LSB, 0: MSB */
#ifdef SPI_HALF_DUPLEX_MODE_SUPPORT
  #if (STD_ON == SPI_HALF_DUPLEX_MODE_SUPPORT)
            SPI_FULL_DUPLEX,
          #endif
#endif
        (uint32)0U,  /* DefaultTransmitValue (configured) */
        4U, /* length of buffer */
        &Spi_Buffer_BOARD_InitPeripherals_G2B_W25Q_Flash_ErSec64kb_Channel, /* BufferDescriptor */
        SPI_SPURIOUS_CORE_ID,  /* Core Id */
        &Spi_axSpiChannelState[10U] /* ChannelState pointer */
};
/* Channel Configuration for G2B_W25Q_Flash_ChiEra_Channel */
static const Spi_ChannelConfigType Spi_ChannelConfig_G2B_W25Q_Flash_ChiEra_Channel_BOARD_InitPeripherals =
{
        IB,  /* BufferType IB or EB */
        8U,   /* Frame size */
        (boolean)FALSE, /* Bite order, 1:LSB, 0: MSB */
#ifdef SPI_HALF_DUPLEX_MODE_SUPPORT
  #if (STD_ON == SPI_HALF_DUPLEX_MODE_SUPPORT)
            SPI_FULL_DUPLEX,
          #endif
#endif
        (uint32)0U,  /* DefaultTransmitValue (configured) */
        1U, /* length of buffer */
        &Spi_Buffer_BOARD_InitPeripherals_G2B_W25Q_Flash_ChiEra_Channel, /* BufferDescriptor */
        SPI_SPURIOUS_CORE_ID,  /* Core Id */
        &Spi_axSpiChannelState[11U] /* ChannelState pointer */
};
/* Channel Configuration for G2B_W25Q_Flash_WrSR_Channel */
static const Spi_ChannelConfigType Spi_ChannelConfig_G2B_W25Q_Flash_WrSR_Channel_BOARD_InitPeripherals =
{
        IB,  /* BufferType IB or EB */
        8U,   /* Frame size */
        (boolean)FALSE, /* Bite order, 1:LSB, 0: MSB */
#ifdef SPI_HALF_DUPLEX_MODE_SUPPORT
  #if (STD_ON == SPI_HALF_DUPLEX_MODE_SUPPORT)
            SPI_FULL_DUPLEX,
          #endif
#endif
        (uint32)0U,  /* DefaultTransmitValue (configured) */
        2U, /* length of buffer */
        &Spi_Buffer_BOARD_InitPeripherals_G2B_W25Q_Flash_WrSR_Channel, /* BufferDescriptor */
        SPI_SPURIOUS_CORE_ID,  /* Core Id */
        &Spi_axSpiChannelState[12U] /* ChannelState pointer */
};
/* Channel Configuration for G2B_W25Q_Flash_ReSRCommand_Job */
static const Spi_ChannelConfigType Spi_ChannelConfig_G2B_W25Q_Flash_ReSRCommand_Job_BOARD_InitPeripherals =
{
        IB,  /* BufferType IB or EB */
        8U,   /* Frame size */
        (boolean)FALSE, /* Bite order, 1:LSB, 0: MSB */
#ifdef SPI_HALF_DUPLEX_MODE_SUPPORT
  #if (STD_ON == SPI_HALF_DUPLEX_MODE_SUPPORT)
            SPI_FULL_DUPLEX,
          #endif
#endif
        (uint32)0U,  /* DefaultTransmitValue (configured) */
        2U, /* length of buffer */
        &Spi_Buffer_BOARD_InitPeripherals_G2B_W25Q_Flash_ReSRCommand_Job, /* BufferDescriptor */
        SPI_SPURIOUS_CORE_ID,  /* Core Id */
        &Spi_axSpiChannelState[13U] /* ChannelState pointer */
};
/* Channel Configuration for G2B_W25Q_Flash_ReSRData_Job */
static const Spi_ChannelConfigType Spi_ChannelConfig_G2B_W25Q_Flash_ReSRData_Job_BOARD_InitPeripherals =
{
        IB,  /* BufferType IB or EB */
        8U,   /* Frame size */
        (boolean)FALSE, /* Bite order, 1:LSB, 0: MSB */
#ifdef SPI_HALF_DUPLEX_MODE_SUPPORT
  #if (STD_ON == SPI_HALF_DUPLEX_MODE_SUPPORT)
            SPI_FULL_DUPLEX,
          #endif
#endif
        (uint32)0U,  /* DefaultTransmitValue (configured) */
        1U, /* length of buffer */
        &Spi_Buffer_BOARD_InitPeripherals_G2B_W25Q_Flash_ReSRData_Job, /* BufferDescriptor */
        SPI_SPURIOUS_CORE_ID,  /* Core Id */
        &Spi_axSpiChannelState[14U] /* ChannelState pointer */
};
/* Spi_aChannelConfigList_BOARD_InitPeripherals Channel Configuration */
static const Spi_ChannelsCfgType Spi_aChannelConfigList_BOARD_InitPeripherals[15] =
{
    /* SpiChannel_0 */
    {
        &Spi_ChannelConfig_SpiChannel_0_BOARD_InitPeripherals
    },
    /* SpiChannel_1 */
    {
        &Spi_ChannelConfig_SpiChannel_1_BOARD_InitPeripherals
    },
    /* G2B_W25Q_Flash_Reset_Channel */
    {
        &Spi_ChannelConfig_G2B_W25Q_Flash_Reset_Channel_BOARD_InitPeripherals
    },
    /* G2B_W25Q_Flash_WrEn_Channel */
    {
        &Spi_ChannelConfig_G2B_W25Q_Flash_WrEn_Channel_BOARD_InitPeripherals
    },
    /* G2B_W25Q_Flash_ReData_Channel */
    {
        &Spi_ChannelConfig_G2B_W25Q_Flash_ReData_Channel_BOARD_InitPeripherals
    },
    /* G2B_W25Q_Flash_WrCommand_Channel */
    {
        &Spi_ChannelConfig_G2B_W25Q_Flash_WrCommand_Channel_BOARD_InitPeripherals
    },
    /* G2B_W25Q_Flash_ReJedID_Channel */
    {
        &Spi_ChannelConfig_G2B_W25Q_Flash_ReJedID_Channel_BOARD_InitPeripherals
    },
    /* G2B_W25Q_Flash_WrData_Channel */
    {
        &Spi_ChannelConfig_G2B_W25Q_Flash_WrData_Channel_BOARD_InitPeripherals
    },
    /* G2B_W25Q_Flash_ErSec4kb_Channel */
    {
        &Spi_ChannelConfig_G2B_W25Q_Flash_ErSec4kb_Channel_BOARD_InitPeripherals
    },
    /* G2B_W25Q_Flash_ErSec32kb_Channel */
    {
        &Spi_ChannelConfig_G2B_W25Q_Flash_ErSec32kb_Channel_BOARD_InitPeripherals
    },
    /* G2B_W25Q_Flash_ErSec64kb_Channel */
    {
        &Spi_ChannelConfig_G2B_W25Q_Flash_ErSec64kb_Channel_BOARD_InitPeripherals
    },
    /* G2B_W25Q_Flash_ChiEra_Channel */
    {
        &Spi_ChannelConfig_G2B_W25Q_Flash_ChiEra_Channel_BOARD_InitPeripherals
    },
    /* G2B_W25Q_Flash_WrSR_Channel */
    {
        &Spi_ChannelConfig_G2B_W25Q_Flash_WrSR_Channel_BOARD_InitPeripherals
    },
    /* G2B_W25Q_Flash_ReSRCommand_Job */
    {
        &Spi_ChannelConfig_G2B_W25Q_Flash_ReSRCommand_Job_BOARD_InitPeripherals
    },
    /* G2B_W25Q_Flash_ReSRData_Job */
    {
        &Spi_ChannelConfig_G2B_W25Q_Flash_ReSRData_Job_BOARD_InitPeripherals
    }
};

/* Channel Assignment of Jobs */
/* SpiJob_0 */
static const Spi_ChannelType Spi_SpiJob_0_ChannelAssignment_BOARD_InitPeripherals[1] =
{
    SpiConf_SpiChannel_SpiChannel_0 
};
/* SpiJob_1 */
static const Spi_ChannelType Spi_SpiJob_1_ChannelAssignment_BOARD_InitPeripherals[1] =
{
    SpiConf_SpiChannel_SpiChannel_1 
};
/* G2B_W25Q_Flash_Reset_Job */
static const Spi_ChannelType Spi_G2B_W25Q_Flash_Reset_Job_ChannelAssignment_BOARD_InitPeripherals[1] =
{
    SpiConf_SpiChannel_G2B_W25Q_Flash_Reset_Channel 
};
/* G2B_W25Q_Flash_WrEn_Job */
static const Spi_ChannelType Spi_G2B_W25Q_Flash_WrEn_Job_ChannelAssignment_BOARD_InitPeripherals[1] =
{
    SpiConf_SpiChannel_G2B_W25Q_Flash_WrEn_Channel 
};
/* G2B_W25Q_Flash_ReData_Job */
static const Spi_ChannelType Spi_G2B_W25Q_Flash_ReData_Job_ChannelAssignment_BOARD_InitPeripherals[1] =
{
    SpiConf_SpiChannel_G2B_W25Q_Flash_ReData_Channel 
};
/* G2B_W25Q_Flash_WrCommand_Job */
static const Spi_ChannelType Spi_G2B_W25Q_Flash_WrCommand_Job_ChannelAssignment_BOARD_InitPeripherals[2] =
{
    SpiConf_SpiChannel_G2B_W25Q_Flash_WrCommand_Channel ,
    SpiConf_SpiChannel_G2B_W25Q_Flash_WrData_Channel 
};
/* G2B_W25Q_Flash_ReJedID_Job */
static const Spi_ChannelType Spi_G2B_W25Q_Flash_ReJedID_Job_ChannelAssignment_BOARD_InitPeripherals[1] =
{
    SpiConf_SpiChannel_G2B_W25Q_Flash_ReJedID_Channel 
};
/* G2B_W25Q_Flash_WrData_Job */
static const Spi_ChannelType Spi_G2B_W25Q_Flash_WrData_Job_ChannelAssignment_BOARD_InitPeripherals[1] =
{
    SpiConf_SpiChannel_G2B_W25Q_Flash_WrData_Channel 
};
/* G2B_W25Q_Flash_ErSec4kb_Job */
static const Spi_ChannelType Spi_G2B_W25Q_Flash_ErSec4kb_Job_ChannelAssignment_BOARD_InitPeripherals[1] =
{
    SpiConf_SpiChannel_G2B_W25Q_Flash_ErSec4kb_Channel 
};
/* G2B_W25Q_Flash_ErSec32kb_Job */
static const Spi_ChannelType Spi_G2B_W25Q_Flash_ErSec32kb_Job_ChannelAssignment_BOARD_InitPeripherals[1] =
{
    SpiConf_SpiChannel_G2B_W25Q_Flash_ErSec32kb_Channel 
};
/* G2B_W25Q_Flash_ErSec64kb_Job */
static const Spi_ChannelType Spi_G2B_W25Q_Flash_ErSec64kb_Job_ChannelAssignment_BOARD_InitPeripherals[1] =
{
    SpiConf_SpiChannel_G2B_W25Q_Flash_ErSec64kb_Channel 
};
/* G2B_W25Q_Flash_ChiEra_Job */
static const Spi_ChannelType Spi_G2B_W25Q_Flash_ChiEra_Job_ChannelAssignment_BOARD_InitPeripherals[1] =
{
    SpiConf_SpiChannel_G2B_W25Q_Flash_ChiEra_Channel 
};
/* G2B_W25Q_Flash_WrSR_Job */
static const Spi_ChannelType Spi_G2B_W25Q_Flash_WrSR_Job_ChannelAssignment_BOARD_InitPeripherals[1] =
{
    SpiConf_SpiChannel_G2B_W25Q_Flash_WrSR_Channel 
};
/* G2B_W25Q_Flash_ReSRCommand_Job */
static const Spi_ChannelType Spi_G2B_W25Q_Flash_ReSRCommand_Job_ChannelAssignment_BOARD_InitPeripherals[1] =
{
    SpiConf_SpiChannel_G2B_W25Q_Flash_ReSRCommand_Job 
};
/* G2B_W25Q_Flash_ReSRData_Job */
static const Spi_ChannelType Spi_G2B_W25Q_Flash_ReSRData_Job_ChannelAssignment_BOARD_InitPeripherals[1] =
{
    SpiConf_SpiChannel_G2B_W25Q_Flash_ReSRData_Job 
};

/* Configuration of Jobs */
/* Job Configuration for SpiJob_0 */
static const Spi_JobConfigType Spi_JobConfig_SpiJob_0_BOARD_InitPeripherals =
{
        (Spi_ChannelType)1U, /* NumChannels field */
        Spi_SpiJob_0_ChannelAssignment_BOARD_InitPeripherals, /* List of Channels */
        NULL_PTR, /* End Notification */
        NULL_PTR, /* Start Notification */
        (sint8)0, /* Priority */
        SPI_SPURIOUS_CORE_ID,    /* Core ID */
        &Spi_axSpiJobState[0], /* JobState instance */
        CSIB0, /* HWUnit index */
        SPI_SpiExternalDevice_0, /* External Device */
        &Spi_aExternalDeviceConfigList_BOARD_InitPeripherals[SPI_SpiExternalDevice_0] /* ExternalDeviceConfig - pointer to the external device configuration */
};
/* Job Configuration for SpiJob_1 */
static const Spi_JobConfigType Spi_JobConfig_SpiJob_1_BOARD_InitPeripherals =
{
        (Spi_ChannelType)1U, /* NumChannels field */
        Spi_SpiJob_1_ChannelAssignment_BOARD_InitPeripherals, /* List of Channels */
        NULL_PTR, /* End Notification */
        NULL_PTR, /* Start Notification */
        (sint8)0, /* Priority */
        SPI_SPURIOUS_CORE_ID,    /* Core ID */
        &Spi_axSpiJobState[1], /* JobState instance */
        CSIB0, /* HWUnit index */
        SPI_SpiExternalDevice_0, /* External Device */
        &Spi_aExternalDeviceConfigList_BOARD_InitPeripherals[SPI_SpiExternalDevice_0] /* ExternalDeviceConfig - pointer to the external device configuration */
};
/* Job Configuration for G2B_W25Q_Flash_Reset_Job */
static const Spi_JobConfigType Spi_JobConfig_G2B_W25Q_Flash_Reset_Job_BOARD_InitPeripherals =
{
        (Spi_ChannelType)1U, /* NumChannels field */
        Spi_G2B_W25Q_Flash_Reset_Job_ChannelAssignment_BOARD_InitPeripherals, /* List of Channels */
        NULL_PTR, /* End Notification */
        NULL_PTR, /* Start Notification */
        (sint8)0, /* Priority */
        SPI_SPURIOUS_CORE_ID,    /* Core ID */
        &Spi_axSpiJobState[2], /* JobState instance */
        CSIB0, /* HWUnit index */
        SPI_SpiExternalDevice_0, /* External Device */
        &Spi_aExternalDeviceConfigList_BOARD_InitPeripherals[SPI_SpiExternalDevice_0] /* ExternalDeviceConfig - pointer to the external device configuration */
};
/* Job Configuration for G2B_W25Q_Flash_WrEn_Job */
static const Spi_JobConfigType Spi_JobConfig_G2B_W25Q_Flash_WrEn_Job_BOARD_InitPeripherals =
{
        (Spi_ChannelType)1U, /* NumChannels field */
        Spi_G2B_W25Q_Flash_WrEn_Job_ChannelAssignment_BOARD_InitPeripherals, /* List of Channels */
        NULL_PTR, /* End Notification */
        NULL_PTR, /* Start Notification */
        (sint8)0, /* Priority */
        SPI_SPURIOUS_CORE_ID,    /* Core ID */
        &Spi_axSpiJobState[3], /* JobState instance */
        CSIB0, /* HWUnit index */
        SPI_SpiExternalDevice_0, /* External Device */
        &Spi_aExternalDeviceConfigList_BOARD_InitPeripherals[SPI_SpiExternalDevice_0] /* ExternalDeviceConfig - pointer to the external device configuration */
};
/* Job Configuration for G2B_W25Q_Flash_ReData_Job */
static const Spi_JobConfigType Spi_JobConfig_G2B_W25Q_Flash_ReData_Job_BOARD_InitPeripherals =
{
        (Spi_ChannelType)1U, /* NumChannels field */
        Spi_G2B_W25Q_Flash_ReData_Job_ChannelAssignment_BOARD_InitPeripherals, /* List of Channels */
        NULL_PTR, /* End Notification */
        NULL_PTR, /* Start Notification */
        (sint8)0, /* Priority */
        SPI_SPURIOUS_CORE_ID,    /* Core ID */
        &Spi_axSpiJobState[4], /* JobState instance */
        CSIB0, /* HWUnit index */
        SPI_SpiExternalDevice_0, /* External Device */
        &Spi_aExternalDeviceConfigList_BOARD_InitPeripherals[SPI_SpiExternalDevice_0] /* ExternalDeviceConfig - pointer to the external device configuration */
};
/* Job Configuration for G2B_W25Q_Flash_WrCommand_Job */
static const Spi_JobConfigType Spi_JobConfig_G2B_W25Q_Flash_WrCommand_Job_BOARD_InitPeripherals =
{
        (Spi_ChannelType)2U, /* NumChannels field */
        Spi_G2B_W25Q_Flash_WrCommand_Job_ChannelAssignment_BOARD_InitPeripherals, /* List of Channels */
        NULL_PTR, /* End Notification */
        NULL_PTR, /* Start Notification */
        (sint8)0, /* Priority */
        SPI_SPURIOUS_CORE_ID,    /* Core ID */
        &Spi_axSpiJobState[5], /* JobState instance */
        CSIB0, /* HWUnit index */
        SPI_SpiExternalDevice_0, /* External Device */
        &Spi_aExternalDeviceConfigList_BOARD_InitPeripherals[SPI_SpiExternalDevice_0] /* ExternalDeviceConfig - pointer to the external device configuration */
};
/* Job Configuration for G2B_W25Q_Flash_ReJedID_Job */
static const Spi_JobConfigType Spi_JobConfig_G2B_W25Q_Flash_ReJedID_Job_BOARD_InitPeripherals =
{
        (Spi_ChannelType)1U, /* NumChannels field */
        Spi_G2B_W25Q_Flash_ReJedID_Job_ChannelAssignment_BOARD_InitPeripherals, /* List of Channels */
        NULL_PTR, /* End Notification */
        NULL_PTR, /* Start Notification */
        (sint8)0, /* Priority */
        SPI_SPURIOUS_CORE_ID,    /* Core ID */
        &Spi_axSpiJobState[6], /* JobState instance */
        CSIB0, /* HWUnit index */
        SPI_SpiExternalDevice_0, /* External Device */
        &Spi_aExternalDeviceConfigList_BOARD_InitPeripherals[SPI_SpiExternalDevice_0] /* ExternalDeviceConfig - pointer to the external device configuration */
};
/* Job Configuration for G2B_W25Q_Flash_WrData_Job */
static const Spi_JobConfigType Spi_JobConfig_G2B_W25Q_Flash_WrData_Job_BOARD_InitPeripherals =
{
        (Spi_ChannelType)1U, /* NumChannels field */
        Spi_G2B_W25Q_Flash_WrData_Job_ChannelAssignment_BOARD_InitPeripherals, /* List of Channels */
        NULL_PTR, /* End Notification */
        NULL_PTR, /* Start Notification */
        (sint8)0, /* Priority */
        SPI_SPURIOUS_CORE_ID,    /* Core ID */
        &Spi_axSpiJobState[7], /* JobState instance */
        CSIB0, /* HWUnit index */
        SPI_SpiExternalDevice_0, /* External Device */
        &Spi_aExternalDeviceConfigList_BOARD_InitPeripherals[SPI_SpiExternalDevice_0] /* ExternalDeviceConfig - pointer to the external device configuration */
};
/* Job Configuration for G2B_W25Q_Flash_ErSec4kb_Job */
static const Spi_JobConfigType Spi_JobConfig_G2B_W25Q_Flash_ErSec4kb_Job_BOARD_InitPeripherals =
{
        (Spi_ChannelType)1U, /* NumChannels field */
        Spi_G2B_W25Q_Flash_ErSec4kb_Job_ChannelAssignment_BOARD_InitPeripherals, /* List of Channels */
        NULL_PTR, /* End Notification */
        NULL_PTR, /* Start Notification */
        (sint8)0, /* Priority */
        SPI_SPURIOUS_CORE_ID,    /* Core ID */
        &Spi_axSpiJobState[8], /* JobState instance */
        CSIB0, /* HWUnit index */
        SPI_SpiExternalDevice_0, /* External Device */
        &Spi_aExternalDeviceConfigList_BOARD_InitPeripherals[SPI_SpiExternalDevice_0] /* ExternalDeviceConfig - pointer to the external device configuration */
};
/* Job Configuration for G2B_W25Q_Flash_ErSec32kb_Job */
static const Spi_JobConfigType Spi_JobConfig_G2B_W25Q_Flash_ErSec32kb_Job_BOARD_InitPeripherals =
{
        (Spi_ChannelType)1U, /* NumChannels field */
        Spi_G2B_W25Q_Flash_ErSec32kb_Job_ChannelAssignment_BOARD_InitPeripherals, /* List of Channels */
        NULL_PTR, /* End Notification */
        NULL_PTR, /* Start Notification */
        (sint8)0, /* Priority */
        SPI_SPURIOUS_CORE_ID,    /* Core ID */
        &Spi_axSpiJobState[9], /* JobState instance */
        CSIB0, /* HWUnit index */
        SPI_SpiExternalDevice_0, /* External Device */
        &Spi_aExternalDeviceConfigList_BOARD_InitPeripherals[SPI_SpiExternalDevice_0] /* ExternalDeviceConfig - pointer to the external device configuration */
};
/* Job Configuration for G2B_W25Q_Flash_ErSec64kb_Job */
static const Spi_JobConfigType Spi_JobConfig_G2B_W25Q_Flash_ErSec64kb_Job_BOARD_InitPeripherals =
{
        (Spi_ChannelType)1U, /* NumChannels field */
        Spi_G2B_W25Q_Flash_ErSec64kb_Job_ChannelAssignment_BOARD_InitPeripherals, /* List of Channels */
        NULL_PTR, /* End Notification */
        NULL_PTR, /* Start Notification */
        (sint8)0, /* Priority */
        SPI_SPURIOUS_CORE_ID,    /* Core ID */
        &Spi_axSpiJobState[10], /* JobState instance */
        CSIB0, /* HWUnit index */
        SPI_SpiExternalDevice_0, /* External Device */
        &Spi_aExternalDeviceConfigList_BOARD_InitPeripherals[SPI_SpiExternalDevice_0] /* ExternalDeviceConfig - pointer to the external device configuration */
};
/* Job Configuration for G2B_W25Q_Flash_ChiEra_Job */
static const Spi_JobConfigType Spi_JobConfig_G2B_W25Q_Flash_ChiEra_Job_BOARD_InitPeripherals =
{
        (Spi_ChannelType)1U, /* NumChannels field */
        Spi_G2B_W25Q_Flash_ChiEra_Job_ChannelAssignment_BOARD_InitPeripherals, /* List of Channels */
        NULL_PTR, /* End Notification */
        NULL_PTR, /* Start Notification */
        (sint8)0, /* Priority */
        SPI_SPURIOUS_CORE_ID,    /* Core ID */
        &Spi_axSpiJobState[11], /* JobState instance */
        CSIB0, /* HWUnit index */
        SPI_SpiExternalDevice_0, /* External Device */
        &Spi_aExternalDeviceConfigList_BOARD_InitPeripherals[SPI_SpiExternalDevice_0] /* ExternalDeviceConfig - pointer to the external device configuration */
};
/* Job Configuration for G2B_W25Q_Flash_WrSR_Job */
static const Spi_JobConfigType Spi_JobConfig_G2B_W25Q_Flash_WrSR_Job_BOARD_InitPeripherals =
{
        (Spi_ChannelType)1U, /* NumChannels field */
        Spi_G2B_W25Q_Flash_WrSR_Job_ChannelAssignment_BOARD_InitPeripherals, /* List of Channels */
        NULL_PTR, /* End Notification */
        NULL_PTR, /* Start Notification */
        (sint8)0, /* Priority */
        SPI_SPURIOUS_CORE_ID,    /* Core ID */
        &Spi_axSpiJobState[12], /* JobState instance */
        CSIB0, /* HWUnit index */
        SPI_SpiExternalDevice_0, /* External Device */
        &Spi_aExternalDeviceConfigList_BOARD_InitPeripherals[SPI_SpiExternalDevice_0] /* ExternalDeviceConfig - pointer to the external device configuration */
};
/* Job Configuration for G2B_W25Q_Flash_ReSRCommand_Job */
static const Spi_JobConfigType Spi_JobConfig_G2B_W25Q_Flash_ReSRCommand_Job_BOARD_InitPeripherals =
{
        (Spi_ChannelType)1U, /* NumChannels field */
        Spi_G2B_W25Q_Flash_ReSRCommand_Job_ChannelAssignment_BOARD_InitPeripherals, /* List of Channels */
        NULL_PTR, /* End Notification */
        NULL_PTR, /* Start Notification */
        (sint8)0, /* Priority */
        SPI_SPURIOUS_CORE_ID,    /* Core ID */
        &Spi_axSpiJobState[13], /* JobState instance */
        CSIB0, /* HWUnit index */
        SPI_SpiExternalDevice_0, /* External Device */
        &Spi_aExternalDeviceConfigList_BOARD_InitPeripherals[SPI_SpiExternalDevice_0] /* ExternalDeviceConfig - pointer to the external device configuration */
};
/* Job Configuration for G2B_W25Q_Flash_ReSRData_Job */
static const Spi_JobConfigType Spi_JobConfig_G2B_W25Q_Flash_ReSRData_Job_BOARD_InitPeripherals =
{
        (Spi_ChannelType)1U, /* NumChannels field */
        Spi_G2B_W25Q_Flash_ReSRData_Job_ChannelAssignment_BOARD_InitPeripherals, /* List of Channels */
        NULL_PTR, /* End Notification */
        NULL_PTR, /* Start Notification */
        (sint8)0, /* Priority */
        SPI_SPURIOUS_CORE_ID,    /* Core ID */
        &Spi_axSpiJobState[14], /* JobState instance */
        CSIB0, /* HWUnit index */
        SPI_SpiExternalDevice_0, /* External Device */
        &Spi_aExternalDeviceConfigList_BOARD_InitPeripherals[SPI_SpiExternalDevice_0] /* ExternalDeviceConfig - pointer to the external device configuration */
};
/* Spi_aJobConfigList_BOARD_InitPeripherals Job Configuration*/
static const Spi_JobsCfgType Spi_aJobConfigList_BOARD_InitPeripherals[15] =
{
    /* SpiJob_0 */
    {
        &Spi_JobConfig_SpiJob_0_BOARD_InitPeripherals
    },
    /* SpiJob_1 */
    {
        &Spi_JobConfig_SpiJob_1_BOARD_InitPeripherals
    },
    /* G2B_W25Q_Flash_Reset_Job */
    {
        &Spi_JobConfig_G2B_W25Q_Flash_Reset_Job_BOARD_InitPeripherals
    },
    /* G2B_W25Q_Flash_WrEn_Job */
    {
        &Spi_JobConfig_G2B_W25Q_Flash_WrEn_Job_BOARD_InitPeripherals
    },
    /* G2B_W25Q_Flash_ReData_Job */
    {
        &Spi_JobConfig_G2B_W25Q_Flash_ReData_Job_BOARD_InitPeripherals
    },
    /* G2B_W25Q_Flash_WrCommand_Job */
    {
        &Spi_JobConfig_G2B_W25Q_Flash_WrCommand_Job_BOARD_InitPeripherals
    },
    /* G2B_W25Q_Flash_ReJedID_Job */
    {
        &Spi_JobConfig_G2B_W25Q_Flash_ReJedID_Job_BOARD_InitPeripherals
    },
    /* G2B_W25Q_Flash_WrData_Job */
    {
        &Spi_JobConfig_G2B_W25Q_Flash_WrData_Job_BOARD_InitPeripherals
    },
    /* G2B_W25Q_Flash_ErSec4kb_Job */
    {
        &Spi_JobConfig_G2B_W25Q_Flash_ErSec4kb_Job_BOARD_InitPeripherals
    },
    /* G2B_W25Q_Flash_ErSec32kb_Job */
    {
        &Spi_JobConfig_G2B_W25Q_Flash_ErSec32kb_Job_BOARD_InitPeripherals
    },
    /* G2B_W25Q_Flash_ErSec64kb_Job */
    {
        &Spi_JobConfig_G2B_W25Q_Flash_ErSec64kb_Job_BOARD_InitPeripherals
    },
    /* G2B_W25Q_Flash_ChiEra_Job */
    {
        &Spi_JobConfig_G2B_W25Q_Flash_ChiEra_Job_BOARD_InitPeripherals
    },
    /* G2B_W25Q_Flash_WrSR_Job */
    {
        &Spi_JobConfig_G2B_W25Q_Flash_WrSR_Job_BOARD_InitPeripherals
    },
    /* G2B_W25Q_Flash_ReSRCommand_Job */
    {
        &Spi_JobConfig_G2B_W25Q_Flash_ReSRCommand_Job_BOARD_InitPeripherals
    },
    /* G2B_W25Q_Flash_ReSRData_Job */
    {
        &Spi_JobConfig_G2B_W25Q_Flash_ReSRData_Job_BOARD_InitPeripherals
    }
};

/* Job Assignment of Sequences  */
/* SpiSequence_0 */
static const Spi_JobType Spi_SpiSequence_0_JobAssignment_BOARD_InitPeripherals[1] =
{
    SpiConf_SpiJob_SpiJob_0 
};
/* SpiSequence_1 */
static const Spi_JobType Spi_SpiSequence_1_JobAssignment_BOARD_InitPeripherals[1] =
{
    SpiConf_SpiJob_SpiJob_1 
};
/* G2B_W25Q_Flash_Reset_Seq */
static const Spi_JobType Spi_G2B_W25Q_Flash_Reset_Seq_JobAssignment_BOARD_InitPeripherals[1] =
{
    SpiConf_SpiJob_G2B_W25Q_Flash_Reset_Job 
};
/* G2B_W25Q_Flash_WrEn_Seq */
static const Spi_JobType Spi_G2B_W25Q_Flash_WrEn_Seq_JobAssignment_BOARD_InitPeripherals[1] =
{
    SpiConf_SpiJob_G2B_W25Q_Flash_WrEn_Job 
};
/* G2B_W25Q_Flash_ReData_Seq */
static const Spi_JobType Spi_G2B_W25Q_Flash_ReData_Seq_JobAssignment_BOARD_InitPeripherals[1] =
{
    SpiConf_SpiJob_G2B_W25Q_Flash_ReData_Job 
};
/* G2B_W25Q_Flash_WrCommand_Seq */
static const Spi_JobType Spi_G2B_W25Q_Flash_WrCommand_Seq_JobAssignment_BOARD_InitPeripherals[1] =
{
    SpiConf_SpiJob_G2B_W25Q_Flash_WrCommand_Job 
};
/* G2B_W25Q_Flash_ReJedID_Seq */
static const Spi_JobType Spi_G2B_W25Q_Flash_ReJedID_Seq_JobAssignment_BOARD_InitPeripherals[1] =
{
    SpiConf_SpiJob_G2B_W25Q_Flash_ReJedID_Job 
};
/* G2B_W25Q_Flash_WrData_Seq */
static const Spi_JobType Spi_G2B_W25Q_Flash_WrData_Seq_JobAssignment_BOARD_InitPeripherals[1] =
{
    SpiConf_SpiJob_G2B_W25Q_Flash_WrData_Job 
};
/* G2B_W25Q_Flash_ErSec4kb_Seq */
static const Spi_JobType Spi_G2B_W25Q_Flash_ErSec4kb_Seq_JobAssignment_BOARD_InitPeripherals[1] =
{
    SpiConf_SpiJob_G2B_W25Q_Flash_ErSec4kb_Job 
};
/* G2B_W25Q_Flash_ErSec32kb_Seq */
static const Spi_JobType Spi_G2B_W25Q_Flash_ErSec32kb_Seq_JobAssignment_BOARD_InitPeripherals[1] =
{
    SpiConf_SpiJob_G2B_W25Q_Flash_ErSec32kb_Job 
};
/* G2B_W25Q_Flash_ErSec64kb_Seq */
static const Spi_JobType Spi_G2B_W25Q_Flash_ErSec64kb_Seq_JobAssignment_BOARD_InitPeripherals[1] =
{
    SpiConf_SpiJob_G2B_W25Q_Flash_ErSec64kb_Job 
};
/* G2B_W25Q_Flash_ChiEra_Seq */
static const Spi_JobType Spi_G2B_W25Q_Flash_ChiEra_Seq_JobAssignment_BOARD_InitPeripherals[1] =
{
    SpiConf_SpiJob_G2B_W25Q_Flash_ChiEra_Job 
};
/* G2B_W25Q_Flash_WrSR_Seq */
static const Spi_JobType Spi_G2B_W25Q_Flash_WrSR_Seq_JobAssignment_BOARD_InitPeripherals[1] =
{
    SpiConf_SpiJob_G2B_W25Q_Flash_WrSR_Job 
};
/* G2B_W25Q_Flash_ReSRCommand_Seq */
static const Spi_JobType Spi_G2B_W25Q_Flash_ReSRCommand_Seq_JobAssignment_BOARD_InitPeripherals[1] =
{
    SpiConf_SpiJob_G2B_W25Q_Flash_ReSRCommand_Job 
};
/* G2B_W25Q_Flash_ReSRData_Seq */
static const Spi_JobType Spi_G2B_W25Q_Flash_ReSRData_Seq_JobAssignment_BOARD_InitPeripherals[1] =
{
    SpiConf_SpiJob_G2B_W25Q_Flash_ReSRData_Job 
};

/* Configuration of Sequences */
/* Sequence Configuration for SpiSequence_0 */
static const Spi_SequenceConfigType Spi_SequenceConfig_SpiSequence_0_BOARD_InitPeripherals =
{
        (Spi_JobType)1U,  /* Number of Job in Seq */
        SPI_SPURIOUS_CORE_ID,
        Spi_SpiSequence_0_JobAssignment_BOARD_InitPeripherals, /* List of Jobs */
        NULL_PTR, /* End Notification */
        (uint8)FALSE  /* Interruptible */
        #if ((SPI_DMA_USED == STD_ON) && (SPI_ENABLE_DMAFASTTRANSFER_SUPPORT == STD_ON))
        , (boolean)FALSE /* Enable Dma fast transfer */
        #endif
};
/* Sequence Configuration for SpiSequence_1 */
static const Spi_SequenceConfigType Spi_SequenceConfig_SpiSequence_1_BOARD_InitPeripherals =
{
        (Spi_JobType)1U,  /* Number of Job in Seq */
        SPI_SPURIOUS_CORE_ID,
        Spi_SpiSequence_1_JobAssignment_BOARD_InitPeripherals, /* List of Jobs */
        NULL_PTR, /* End Notification */
        (uint8)FALSE  /* Interruptible */
        #if ((SPI_DMA_USED == STD_ON) && (SPI_ENABLE_DMAFASTTRANSFER_SUPPORT == STD_ON))
        , (boolean)FALSE /* Enable Dma fast transfer */
        #endif
};
/* Sequence Configuration for G2B_W25Q_Flash_Reset_Seq */
static const Spi_SequenceConfigType Spi_SequenceConfig_G2B_W25Q_Flash_Reset_Seq_BOARD_InitPeripherals =
{
        (Spi_JobType)1U,  /* Number of Job in Seq */
        SPI_SPURIOUS_CORE_ID,
        Spi_G2B_W25Q_Flash_Reset_Seq_JobAssignment_BOARD_InitPeripherals, /* List of Jobs */
        NULL_PTR, /* End Notification */
        (uint8)FALSE  /* Interruptible */
        #if ((SPI_DMA_USED == STD_ON) && (SPI_ENABLE_DMAFASTTRANSFER_SUPPORT == STD_ON))
        , (boolean)FALSE /* Enable Dma fast transfer */
        #endif
};
/* Sequence Configuration for G2B_W25Q_Flash_WrEn_Seq */
static const Spi_SequenceConfigType Spi_SequenceConfig_G2B_W25Q_Flash_WrEn_Seq_BOARD_InitPeripherals =
{
        (Spi_JobType)1U,  /* Number of Job in Seq */
        SPI_SPURIOUS_CORE_ID,
        Spi_G2B_W25Q_Flash_WrEn_Seq_JobAssignment_BOARD_InitPeripherals, /* List of Jobs */
        NULL_PTR, /* End Notification */
        (uint8)FALSE  /* Interruptible */
        #if ((SPI_DMA_USED == STD_ON) && (SPI_ENABLE_DMAFASTTRANSFER_SUPPORT == STD_ON))
        , (boolean)FALSE /* Enable Dma fast transfer */
        #endif
};
/* Sequence Configuration for G2B_W25Q_Flash_ReData_Seq */
static const Spi_SequenceConfigType Spi_SequenceConfig_G2B_W25Q_Flash_ReData_Seq_BOARD_InitPeripherals =
{
        (Spi_JobType)1U,  /* Number of Job in Seq */
        SPI_SPURIOUS_CORE_ID,
        Spi_G2B_W25Q_Flash_ReData_Seq_JobAssignment_BOARD_InitPeripherals, /* List of Jobs */
        NULL_PTR, /* End Notification */
        (uint8)FALSE  /* Interruptible */
        #if ((SPI_DMA_USED == STD_ON) && (SPI_ENABLE_DMAFASTTRANSFER_SUPPORT == STD_ON))
        , (boolean)FALSE /* Enable Dma fast transfer */
        #endif
};
/* Sequence Configuration for G2B_W25Q_Flash_WrCommand_Seq */
static const Spi_SequenceConfigType Spi_SequenceConfig_G2B_W25Q_Flash_WrCommand_Seq_BOARD_InitPeripherals =
{
        (Spi_JobType)1U,  /* Number of Job in Seq */
        SPI_SPURIOUS_CORE_ID,
        Spi_G2B_W25Q_Flash_WrCommand_Seq_JobAssignment_BOARD_InitPeripherals, /* List of Jobs */
        NULL_PTR, /* End Notification */
        (uint8)FALSE  /* Interruptible */
        #if ((SPI_DMA_USED == STD_ON) && (SPI_ENABLE_DMAFASTTRANSFER_SUPPORT == STD_ON))
        , (boolean)FALSE /* Enable Dma fast transfer */
        #endif
};
/* Sequence Configuration for G2B_W25Q_Flash_ReJedID_Seq */
static const Spi_SequenceConfigType Spi_SequenceConfig_G2B_W25Q_Flash_ReJedID_Seq_BOARD_InitPeripherals =
{
        (Spi_JobType)1U,  /* Number of Job in Seq */
        SPI_SPURIOUS_CORE_ID,
        Spi_G2B_W25Q_Flash_ReJedID_Seq_JobAssignment_BOARD_InitPeripherals, /* List of Jobs */
        NULL_PTR, /* End Notification */
        (uint8)FALSE  /* Interruptible */
        #if ((SPI_DMA_USED == STD_ON) && (SPI_ENABLE_DMAFASTTRANSFER_SUPPORT == STD_ON))
        , (boolean)FALSE /* Enable Dma fast transfer */
        #endif
};
/* Sequence Configuration for G2B_W25Q_Flash_WrData_Seq */
static const Spi_SequenceConfigType Spi_SequenceConfig_G2B_W25Q_Flash_WrData_Seq_BOARD_InitPeripherals =
{
        (Spi_JobType)1U,  /* Number of Job in Seq */
        SPI_SPURIOUS_CORE_ID,
        Spi_G2B_W25Q_Flash_WrData_Seq_JobAssignment_BOARD_InitPeripherals, /* List of Jobs */
        NULL_PTR, /* End Notification */
        (uint8)FALSE  /* Interruptible */
        #if ((SPI_DMA_USED == STD_ON) && (SPI_ENABLE_DMAFASTTRANSFER_SUPPORT == STD_ON))
        , (boolean)FALSE /* Enable Dma fast transfer */
        #endif
};
/* Sequence Configuration for G2B_W25Q_Flash_ErSec4kb_Seq */
static const Spi_SequenceConfigType Spi_SequenceConfig_G2B_W25Q_Flash_ErSec4kb_Seq_BOARD_InitPeripherals =
{
        (Spi_JobType)1U,  /* Number of Job in Seq */
        SPI_SPURIOUS_CORE_ID,
        Spi_G2B_W25Q_Flash_ErSec4kb_Seq_JobAssignment_BOARD_InitPeripherals, /* List of Jobs */
        NULL_PTR, /* End Notification */
        (uint8)FALSE  /* Interruptible */
        #if ((SPI_DMA_USED == STD_ON) && (SPI_ENABLE_DMAFASTTRANSFER_SUPPORT == STD_ON))
        , (boolean)FALSE /* Enable Dma fast transfer */
        #endif
};
/* Sequence Configuration for G2B_W25Q_Flash_ErSec32kb_Seq */
static const Spi_SequenceConfigType Spi_SequenceConfig_G2B_W25Q_Flash_ErSec32kb_Seq_BOARD_InitPeripherals =
{
        (Spi_JobType)1U,  /* Number of Job in Seq */
        SPI_SPURIOUS_CORE_ID,
        Spi_G2B_W25Q_Flash_ErSec32kb_Seq_JobAssignment_BOARD_InitPeripherals, /* List of Jobs */
        NULL_PTR, /* End Notification */
        (uint8)FALSE  /* Interruptible */
        #if ((SPI_DMA_USED == STD_ON) && (SPI_ENABLE_DMAFASTTRANSFER_SUPPORT == STD_ON))
        , (boolean)FALSE /* Enable Dma fast transfer */
        #endif
};
/* Sequence Configuration for G2B_W25Q_Flash_ErSec64kb_Seq */
static const Spi_SequenceConfigType Spi_SequenceConfig_G2B_W25Q_Flash_ErSec64kb_Seq_BOARD_InitPeripherals =
{
        (Spi_JobType)1U,  /* Number of Job in Seq */
        SPI_SPURIOUS_CORE_ID,
        Spi_G2B_W25Q_Flash_ErSec64kb_Seq_JobAssignment_BOARD_InitPeripherals, /* List of Jobs */
        NULL_PTR, /* End Notification */
        (uint8)FALSE  /* Interruptible */
        #if ((SPI_DMA_USED == STD_ON) && (SPI_ENABLE_DMAFASTTRANSFER_SUPPORT == STD_ON))
        , (boolean)FALSE /* Enable Dma fast transfer */
        #endif
};
/* Sequence Configuration for G2B_W25Q_Flash_ChiEra_Seq */
static const Spi_SequenceConfigType Spi_SequenceConfig_G2B_W25Q_Flash_ChiEra_Seq_BOARD_InitPeripherals =
{
        (Spi_JobType)1U,  /* Number of Job in Seq */
        SPI_SPURIOUS_CORE_ID,
        Spi_G2B_W25Q_Flash_ChiEra_Seq_JobAssignment_BOARD_InitPeripherals, /* List of Jobs */
        NULL_PTR, /* End Notification */
        (uint8)FALSE  /* Interruptible */
        #if ((SPI_DMA_USED == STD_ON) && (SPI_ENABLE_DMAFASTTRANSFER_SUPPORT == STD_ON))
        , (boolean)FALSE /* Enable Dma fast transfer */
        #endif
};
/* Sequence Configuration for G2B_W25Q_Flash_WrSR_Seq */
static const Spi_SequenceConfigType Spi_SequenceConfig_G2B_W25Q_Flash_WrSR_Seq_BOARD_InitPeripherals =
{
        (Spi_JobType)1U,  /* Number of Job in Seq */
        SPI_SPURIOUS_CORE_ID,
        Spi_G2B_W25Q_Flash_WrSR_Seq_JobAssignment_BOARD_InitPeripherals, /* List of Jobs */
        NULL_PTR, /* End Notification */
        (uint8)FALSE  /* Interruptible */
        #if ((SPI_DMA_USED == STD_ON) && (SPI_ENABLE_DMAFASTTRANSFER_SUPPORT == STD_ON))
        , (boolean)FALSE /* Enable Dma fast transfer */
        #endif
};
/* Sequence Configuration for G2B_W25Q_Flash_ReSRCommand_Seq */
static const Spi_SequenceConfigType Spi_SequenceConfig_G2B_W25Q_Flash_ReSRCommand_Seq_BOARD_InitPeripherals =
{
        (Spi_JobType)1U,  /* Number of Job in Seq */
        SPI_SPURIOUS_CORE_ID,
        Spi_G2B_W25Q_Flash_ReSRCommand_Seq_JobAssignment_BOARD_InitPeripherals, /* List of Jobs */
        NULL_PTR, /* End Notification */
        (uint8)FALSE  /* Interruptible */
        #if ((SPI_DMA_USED == STD_ON) && (SPI_ENABLE_DMAFASTTRANSFER_SUPPORT == STD_ON))
        , (boolean)FALSE /* Enable Dma fast transfer */
        #endif
};
/* Sequence Configuration for G2B_W25Q_Flash_ReSRData_Seq */
static const Spi_SequenceConfigType Spi_SequenceConfig_G2B_W25Q_Flash_ReSRData_Seq_BOARD_InitPeripherals =
{
        (Spi_JobType)1U,  /* Number of Job in Seq */
        SPI_SPURIOUS_CORE_ID,
        Spi_G2B_W25Q_Flash_ReSRData_Seq_JobAssignment_BOARD_InitPeripherals, /* List of Jobs */
        NULL_PTR, /* End Notification */
        (uint8)FALSE  /* Interruptible */
        #if ((SPI_DMA_USED == STD_ON) && (SPI_ENABLE_DMAFASTTRANSFER_SUPPORT == STD_ON))
        , (boolean)FALSE /* Enable Dma fast transfer */
        #endif
};
/* Spi_aSequenceConfigList_BOARD_InitPeripherals Sequence Configuration */
static const Spi_SeqsConfigType Spi_aSequenceConfigList_BOARD_InitPeripherals[15] =
{
    /* SpiSequence_0 */
    {
        &Spi_SequenceConfig_SpiSequence_0_BOARD_InitPeripherals
    },
    /* SpiSequence_1 */
    {
        &Spi_SequenceConfig_SpiSequence_1_BOARD_InitPeripherals
    },
    /* G2B_W25Q_Flash_Reset_Seq */
    {
        &Spi_SequenceConfig_G2B_W25Q_Flash_Reset_Seq_BOARD_InitPeripherals
    },
    /* G2B_W25Q_Flash_WrEn_Seq */
    {
        &Spi_SequenceConfig_G2B_W25Q_Flash_WrEn_Seq_BOARD_InitPeripherals
    },
    /* G2B_W25Q_Flash_ReData_Seq */
    {
        &Spi_SequenceConfig_G2B_W25Q_Flash_ReData_Seq_BOARD_InitPeripherals
    },
    /* G2B_W25Q_Flash_WrCommand_Seq */
    {
        &Spi_SequenceConfig_G2B_W25Q_Flash_WrCommand_Seq_BOARD_InitPeripherals
    },
    /* G2B_W25Q_Flash_ReJedID_Seq */
    {
        &Spi_SequenceConfig_G2B_W25Q_Flash_ReJedID_Seq_BOARD_InitPeripherals
    },
    /* G2B_W25Q_Flash_WrData_Seq */
    {
        &Spi_SequenceConfig_G2B_W25Q_Flash_WrData_Seq_BOARD_InitPeripherals
    },
    /* G2B_W25Q_Flash_ErSec4kb_Seq */
    {
        &Spi_SequenceConfig_G2B_W25Q_Flash_ErSec4kb_Seq_BOARD_InitPeripherals
    },
    /* G2B_W25Q_Flash_ErSec32kb_Seq */
    {
        &Spi_SequenceConfig_G2B_W25Q_Flash_ErSec32kb_Seq_BOARD_InitPeripherals
    },
    /* G2B_W25Q_Flash_ErSec64kb_Seq */
    {
        &Spi_SequenceConfig_G2B_W25Q_Flash_ErSec64kb_Seq_BOARD_InitPeripherals
    },
    /* G2B_W25Q_Flash_ChiEra_Seq */
    {
        &Spi_SequenceConfig_G2B_W25Q_Flash_ChiEra_Seq_BOARD_InitPeripherals
    },
    /* G2B_W25Q_Flash_WrSR_Seq */
    {
        &Spi_SequenceConfig_G2B_W25Q_Flash_WrSR_Seq_BOARD_InitPeripherals
    },
    /* G2B_W25Q_Flash_ReSRCommand_Seq */
    {
        &Spi_SequenceConfig_G2B_W25Q_Flash_ReSRCommand_Seq_BOARD_InitPeripherals
    },
    /* G2B_W25Q_Flash_ReSRData_Seq */
    {
        &Spi_SequenceConfig_G2B_W25Q_Flash_ReSRData_Seq_BOARD_InitPeripherals
    }
};
/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/
/* Spi Configuration */
 const Spi_ConfigType Spi_Config_BOARD_InitPeripherals=
{
    1U,  /* MaxExternalDevice - number of external devices */
    14U, /* SpiMaxChannel - number of channels */
    14U, /* SpiMaxJob - number of jobs */
    14U, /* SpiMaxSequence - number of sequences */
    SPI_SPURIOUS_CORE_ID,   /* SpiCoreUse - used core */
    Spi_aChannelConfigList_BOARD_InitPeripherals, /* ChannelConfig */
    Spi_aJobConfigList_BOARD_InitPeripherals, /* JobConfig */
    Spi_aSequenceConfigList_BOARD_InitPeripherals, /* SequenceConfig */
    Spi_aExternalDeviceConfigList_BOARD_InitPeripherals, /* ExternalDeviceConfig */
    Spi_aHwUnitConfigList_BOARD_InitPeripherals /* HWUnitConfig */
#if (SPI_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
    ,{ (uint32)STD_OFF, (uint32)0U} /* SPI_E_HARDWARE_ERROR parameters*/
#endif /* SPI_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF */  
};


#define SPI_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Spi_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */


