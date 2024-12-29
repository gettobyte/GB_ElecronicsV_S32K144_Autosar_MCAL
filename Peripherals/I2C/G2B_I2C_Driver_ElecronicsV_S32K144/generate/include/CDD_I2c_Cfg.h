/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : LPI2C
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
#ifndef CDD_I2C_CFG_H
#define CDD_I2C_CFG_H

/**
*   @file
*
*   @addtogroup I2C_DRIVER_CONFIGURATION I2c Driver Configurations
*   @{
*/

#ifdef __cplusplus
extern "C"
{
#endif


/**
* @page misra_violations MISRA-C:2012 violations
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.1, Identifiers (internal and external) shall not rely on the significance of more than 31 characters. 
* The used compilers use more than 31 chars for identifiers.
*
* @section CDD_I2c_Cfg_h_REF_1
* Violates MISRA 2012 Required Rule 1.4, The compiler/linker shall be checked to ensure that 31 character significance and case sensitivity are supported 
* for external identifiers. This violation is due to the requirement that requests to have a file version check.
*
* @section CDD_I2c_Cfg_h_REF_2
* Violates MISRA 2012 Required Rule 8.7, Objects shall be defined at block scope if they are only accessed from within a single function
*
* @section CDD_I2c_Cfg_h_REF_3
* Violates MISRA 2012 Advisory Rule 19.7, Function-like macro defined. This violation is due to function like macros defined for register operations.
* Function like macros are used to reduce code complexity.
*
* @section CDD_I2c_Cfg_h_REF_4
* Violates MISRA 2012 Required Rule 19.4, C macros shall only expand to braced initialiser,
* a constant, a parenthesized expression, a type qualifier, a storage class specifier, or
* a do-while-zero construct
**
* @section CDD_I2c_Cfg_h_REF_5
* Violates MISRA 2012 Required Rule 19.10, In the definition of a function-like macro each instance of a
* parameter shall be enclosed in parentheses unless it is used as * the operand of # or ##.
* This is used to define user configurable callbacks with parameters.
*
*/

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Mcal.h"
#include "CDD_I2C_BOARD_InitPeripherals_PBcfg.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/* Inclusion of incompatible header files shall be avoided */

#define I2C_VENDOR_ID_CFG                    43
#define I2C_MODULE_ID_CFG                    255
#define I2C_AR_RELEASE_MAJOR_VERSION_CFG     4
#define I2C_AR_RELEASE_MINOR_VERSION_CFG     4
/*
* @violates @ref CDD_I2c_Cfg_h_REF_1 The compiler/linker shall be checked to
* ensure that 31 character significance and case sensitivity are supported for
* external identifiers.
*/
#define I2C_AR_RELEASE_REVISION_VERSION_CFG  0
#define I2C_SW_MAJOR_VERSION_CFG             1
#define I2C_SW_MINOR_VERSION_CFG             0
#define I2C_SW_PATCH_VERSION_CFG             0
/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/



/**
* @brief   macro contains all PB configuration macros.
*/
#define I2C_CONFIG_EXT \
    I2C_CONFIG_BOARD_INITPERIPHERALS_PB

/**
* @brief          Precompile Support On.
* @details        VARIANT-PRE-COMPILE: Only parameters with "Pre-compile time"
*                 configuration are allowed in this variant.
*/
#define I2C_PRECOMPILE_SUPPORT   STD_OFF
/**
* @brief   Total number of I2c channel configured.
*/
#define I2C_HW_MAX_CONFIG        1U 

/**
* @brief   Total number of available hardware I2C channels.
*/
#define I2C_HW_MAX_MODULES       3U    

/**
* @brief   Total number of available hardware Lpi2c channels.
*/
#define I2C_LPI2C_MAX_MODULES      1U 

/**
* @brief            This is the ID of the first FLEXIO channel.
*/
#define I2C_FLEXIO_FIRST_CHANNEL_U8   (I2C_LPI2C_MAX_MODULES)

/**
* @brief            TIMEOUT for sync transmissions
*/
#define I2C_TIMEOUT 1000U

/**
* @brief   Switches the Development Error Detection and Notification ON or OFF.
*/
#define I2C_DEV_ERROR_DETECT      STD_OFF /* Disable Development Error Detection */
/**
* @brief          Support for version info API.
*/
#define I2C_VERSION_INFO_API      STD_OFF /* Disable API I2c_GetVersionInfo      */
/**
* @brief          Link I2C channels symbolic names with I2C channel IDs.
*/
#define I2C_LPI2C_0  0U
/**
* @brief          spurious coreid.
*/
#define I2C_SPURIOUS_CORE_ID     0U

/**
* @brief          Symbolic names for configured channels.
*/
#define I2cConf_I2cChannel_I2cChannel_0  0U


/**
* @brief            Enable/Disable the API for reporting the Dem Error.
*/
#define I2C_DISABLE_DEM_REPORT_ERROR_STATUS   STD_ON
/**
* @brief            Enable/Disable Multi Core Support.
*/
#define I2C_MULTICORE_SUPPORT    STD_OFF
/**
* @brief            DMA is used for at least one channel (STD_ON/STD_OFF)
*/

#define I2C_DMA_USED   STD_OFF
/**
* @brief            FlexIO is used (STD_ON/STD_OFF)
*/
#define I2C_FLEXIO_USED   STD_OFF

#if (I2C_MULTICORE_SUPPORT == STD_ON)
    #define I2c_GetCoreID()            OsIf_GetCoreID()
#else
    #define I2c_GetCoreID()            ((uint32)0UL)
#endif /* (I2C_MULTICORE_SUPPORT == STD_ON) */



/**
* @brief        Variable storing number of maximum partitions using in configuration.
*/
#define I2C_MAX_CORE_ID     1U

/**
* @brief    the value initialization un init for each core.
*/
#define I2C_UNINIT_CORE \
{ I2C_UNINIT }
/**
* @brief    the value initialization null pointer for each core.
*/
#define I2C_NULL_PTR \
{ NULL_PTR }
/**
* @brief    the value initialization Hardware Map.
*/
#define I2C_HW_MAP_INIT \
{ -1, -1, -1 }

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/
/**
 * @brief Definition of the type of activation or procession mechanism of an I2C hw unit
 * @implements     I2c_DataDirectionType_enumeration
 * 
 */
typedef enum
{
    I2C_SEND_DATA       = 0x0U, /**< @brief Used to send data to a slave */
    I2C_RECEIVE_DATA    = 0x1U  /**< @brief Used to receive data from a slave */
} I2c_DataDirectionType;

/**
 * @brief Definition of the hardware channel type
 * 
 */
typedef enum
{
    I2C_LPI2C_CHANNEL       = 0x0U, /**< @brief This is used for LPI2C channels */
    I2C_FLEXIO_CHANNEL      = 0x1U  /**< @brief This is used for FlexIO channels */
} I2c_HwChannelType;

/*==================================================================================================
*                                STRUCTURES AND OTHER S
==================================================================================================*/
/**
* @brief            DEM error reporting configuration.
* @details          This structure contains information DEM error reporting
*/
typedef struct
{
    Mcal_DemErrorType I2c_E_TimeoutFailureCfg;

} I2c_DemConfigType;


/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
#define I2C_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "I2c_MemMap.h"

extern const I2c_DemConfigType I2c_DemConfig;

#define I2C_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "I2c_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */

#endif /* CDD_I2C_CFG_H */

