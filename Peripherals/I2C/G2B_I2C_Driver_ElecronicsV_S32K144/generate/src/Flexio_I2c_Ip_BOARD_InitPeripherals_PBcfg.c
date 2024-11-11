/*==================================================================================================
* Project : RTD AUTOSAR 4.4
* Platform : CORTEXM
* Peripheral : LPI2C
* Dependencies : none
*
* Autosar Version : 4.4.0
* Autosar Revision : ASR_REL_4_4_REV_0000
* Autosar Conf.Variant :
* SW Version : 1.0.0
* Build Version : S32K1_RTD_1_0_0_D2108_ASR_REL_4_4_REV_0000_20210810
*
* (c) Copyright 2020-2021 NXP Semiconductors
* All Rights Reserved.
*
* NXP Confidential. This software is owned or controlled by NXP and may only be
* used strictly in accordance with the applicable license terms. By expressly
* accepting such terms or by downloading, installing, activating and/or otherwise
* using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms. If you do not agree to be
* bound by the applicable license terms, then you may not retain, install,
* activate or otherwise use the software.
==================================================================================================*/

/**
*   @file
*
*   @addtogroup FLEXIO_I2C_DRIVER_CONFIGURATION Flexio_I2c Driver Configurations
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

#include "Flexio_I2c_Ip.h"

#if(FLEXIO_I2C_IP_ENABLE == STD_ON)
#if (STD_ON == FLEXIO_I2C_IP_DMA_FEATURE_AVAILABLE)
#include "Dma_Ip.h"
#endif
#endif
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define FLEXIO_I2C_IP_BOARD_INITPERIPHERALS_PBCFG_VENDOR_ID_C                      43
#define FLEXIO_I2C_IP_BOARD_INITPERIPHERALS_PBCFG_MODULE_ID_C                      255
#define FLEXIO_I2C_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MAJOR_VERSION_C       4
#define FLEXIO_I2C_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MINOR_VERSION_C       4
#define FLEXIO_I2C_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_REVISION_VERSION_C    0
#define FLEXIO_I2C_IP_BOARD_INITPERIPHERALS_PBCFG_SW_MAJOR_VERSION_C               1
#define FLEXIO_I2C_IP_BOARD_INITPERIPHERALS_PBCFG_SW_MINOR_VERSION_C               0
#define FLEXIO_I2C_IP_BOARD_INITPERIPHERALS_PBCFG_SW_PATCH_VERSION_C               0


/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/

/* Check if current file and Flexio_I2c_Ip.h are of the same vendor */
#if (FLEXIO_I2C_IP_BOARD_INITPERIPHERALS_PBCFG_VENDOR_ID_C != FLEXIO_I2C_IP_VENDOR_ID)
    #error "Flexio_I2c_Ip_BOARD_INITPERIPHERALS_PBCfg.c and Flexio_I2c_Ip.h have different vendor ids"
#endif
/* Check if current file and Flexio_I2c_Ip.h are of the same Autosar version */
#if ((FLEXIO_I2C_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MAJOR_VERSION_C != 4) || \
     (FLEXIO_I2C_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MINOR_VERSION_C != 4) || \
     (FLEXIO_I2C_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_REVISION_VERSION_C != 0))
    #error "AutoSar Version Numbers of Flexio_I2c_Ip_BOARD_INITPERIPHERALS_PBCfg.c and Flexio_I2c_Ip.h are different"
#endif
/* Check if current file and Flexio_I2c_Ip.h are of the same Software version */
#if ((FLEXIO_I2C_IP_BOARD_INITPERIPHERALS_PBCFG_SW_MAJOR_VERSION_C != 1) || \
     (FLEXIO_I2C_IP_BOARD_INITPERIPHERALS_PBCFG_SW_MINOR_VERSION_C != 0) || \
     (FLEXIO_I2C_IP_BOARD_INITPERIPHERALS_PBCFG_SW_PATCH_VERSION_C != 0))
    #error "Software Version Numbers of Flexio_I2c_Ip_BOARD_INITPERIPHERALS_PBCfg.c and Flexio_I2c_Ip.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    #if(FLEXIO_I2C_IP_ENABLE == STD_ON)
        #if(STD_ON == FLEXIO_I2C_IP_DMA_FEATURE_AVAILABLE)
            /* Check if current file and Dma_Ip.h header file are of the same Autosar version */
            #if ((FLEXIO_I2C_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MAJOR_VERSION_C != DMA_IP_AR_RELEASE_MAJOR_VERSION_H) || \
                  (FLEXIO_I2C_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MINOR_VERSION_C != DMA_IP_AR_RELEASE_MINOR_VERSION_H))
                #error "AutoSar Version Numbers of Flexio_I2c_Ip_BOARD_INITPERIPHERALS_PBCfg.c and Dma_Ip.h are different"
            #endif
        #endif /* (STD_ON == FLEXIO_I2C_IP_DMA_FEATURE_AVAILABLE) */
    #endif /* (FLEXIO_I2C_IP_ENABLE == STD_ON) */
#endif /* DISABLE_MCAL_INTERMODULE_ASR_CHECK */

/*==================================================================================================
                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
                                       LOCAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/


/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/
#if(FLEXIO_I2C_IP_ENABLE == STD_ON)

#define I2C_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "I2c_MemMap.h"



#define I2C_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "I2c_MemMap.h"

/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/


/*==================================================================================================
                                       LOCAL FUNCTIONS
==================================================================================================*/


/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/
#endif /* FLEXIO_I2C_IP_ENABLE == STD_OFF */

#ifdef __cplusplus
}
#endif

/** @} */

