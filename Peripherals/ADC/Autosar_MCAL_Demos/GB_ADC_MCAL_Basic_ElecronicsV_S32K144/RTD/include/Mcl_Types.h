/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : DMA,CACHE,TRGMUX,FLEXIO
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

#ifndef MCL_TYPES_H_
#define MCL_TYPES_H_

/**
*   @file Mcl_Types.h
*
*   @version 1.0.0
*
*   @brief   AUTOSAR Mcl - MCL driver header file.
*   @details
*
*   @addtogroup MCL_DRIVER MCL Driver
*   @{
*/

#ifdef __cplusplus
extern "C"
{
#endif
/**
* @page misra_violations MISRA-C:2012 violations
*/

/*==================================================================================================
*                                          INCLUDE FILES
*  1) system and project includes
*  2) needed interfaces from external units
*  3) internal and external interfaces from this unit
==================================================================================================*/
#include "CDD_Mcl_Cfg_Defines.h"
#if (MCL_DMA_IS_AVAILABLE == STD_ON)
#include "Dma_Ip.h"
#endif /* MCL_DMA_IS_AVAILABLE == STD_ON */
#if (MCL_CACHE_IS_AVAILABLE == STD_ON)
#include "Cache_Ip.h"
#endif /* MCL_CACHE_IS_AVAILABLE == STD_ON */
#if (MCL_LCU_IS_AVAILABLE == STD_ON)
#include "Lcu_Ip.h"
#endif /* MCL_LCU_IS_AVAILABLE == STD_ON */
#if (MCL_TRGMUX_IS_AVAILABLE == STD_ON)
#include "Trgmux_Ip.h"
#endif /* MCL_TRGMUX_IS_AVAILABLE == STD_ON */
#if (MCL_EMIOS_IS_AVAILABLE == STD_ON)
#include "Emios_Mcl_Ip.h"
#endif /* MCL_EMIOS_IS_AVAILABLE == STD_ON */
#if (MCL_FLEXIO_IS_AVAILABLE == STD_ON)
#include "Flexio_Mcl_Ip.h"
#endif /* MCL_FLEXIO_IS_AVAILABLE == STD_ON */


/*==================================================================================================
*                                SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define MCL_TYPES_VENDOR_ID_H                       43
#define MCL_TYPES_AR_RELEASE_MAJOR_VERSION_H        4
#define MCL_TYPES_AR_RELEASE_MINOR_VERSION_H        4
#define MCL_TYPES_AR_RELEASE_REVISION_VERSION_H     0
#define MCL_TYPES_SW_MAJOR_VERSION_H                1
#define MCL_TYPES_SW_MINOR_VERSION_H                0
#define MCL_TYPES_SW_PATCH_VERSION_H                0

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/
/* Check if header file and CDD_Mcl_Cfg_Defines.h file are of the same vendor */
#if (MCL_TYPES_VENDOR_ID_H != CDD_MCL_CFG_DEFINES_VENDOR_ID_H)
    #error "Mcl_Types.h and CDD_Mcl_Cfg_Defines.h have different vendor ids"
#endif

/* Check if header file and CDD_Mcl_Cfg_Defines.h file are of the same Autosar version */
#if ((MCL_TYPES_AR_RELEASE_MAJOR_VERSION_H != CDD_MCL_CFG_DEFINES_AR_RELEASE_MAJOR_VERSION_H) || \
     (MCL_TYPES_AR_RELEASE_MINOR_VERSION_H != CDD_MCL_CFG_DEFINES_AR_RELEASE_MINOR_VERSION_H) || \
     (MCL_TYPES_AR_RELEASE_REVISION_VERSION_H != CDD_MCL_CFG_DEFINES_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Mcl_Types.h and CDD_Mcl_Cfg_Defines.h are different"
#endif

/* Check if header file and CDD_Mcl_Cfg_Defines.h file are of the same Software version */
#if ((MCL_TYPES_SW_MAJOR_VERSION_H != CDD_MCL_CFG_DEFINES_SW_MAJOR_VERSION_H) || \
     (MCL_TYPES_SW_MINOR_VERSION_H != CDD_MCL_CFG_DEFINES_SW_MINOR_VERSION_H) || \
     (MCL_TYPES_SW_PATCH_VERSION_H != CDD_MCL_CFG_DEFINES_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Mcl_Types.h and CDD_Mcl_Cfg_Defines.h are different"
#endif

#if (MCL_DMA_IS_AVAILABLE == STD_ON)
#if (MCL_TYPES_VENDOR_ID_H != DMA_IP_VENDOR_ID_H)
    #error "Mcl_Types.h and Dma_Ip.h have different vendor ids"
#endif

/* Check if header file and Dma_Ip.h file are of the same Autosar version */
#if ((MCL_TYPES_AR_RELEASE_MAJOR_VERSION_H != DMA_IP_AR_RELEASE_MAJOR_VERSION_H) || \
     (MCL_TYPES_AR_RELEASE_MINOR_VERSION_H != DMA_IP_AR_RELEASE_MINOR_VERSION_H) || \
     (MCL_TYPES_AR_RELEASE_REVISION_VERSION_H != DMA_IP_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Mcl_Types.h and Dma_Ip.h are different"
#endif

/* Check if header file and Dma_Ip.h file are of the same Software version */
#if ((MCL_TYPES_SW_MAJOR_VERSION_H != DMA_IP_SW_MAJOR_VERSION_H) || \
     (MCL_TYPES_SW_MINOR_VERSION_H != DMA_IP_SW_MINOR_VERSION_H) || \
     (MCL_TYPES_SW_PATCH_VERSION_H != DMA_IP_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Mcl_Types.h and Dma_Ip.h are different"
#endif
#endif /* MCL_DMA_IS_AVAILABLE == STD_ON */

#if (MCL_CACHE_IS_AVAILABLE == STD_ON)
#if (MCL_TYPES_VENDOR_ID_H != CACHE_IP_VENDOR_ID_H)
    #error "Mcl_Types.h and Cache_Ip.h have different vendor ids"
#endif

/* Check if header file and Cache_Ip.h file are of the same Autosar version */
#if ((MCL_TYPES_AR_RELEASE_MAJOR_VERSION_H != CACHE_IP_AR_RELEASE_MAJOR_VERSION_H) || \
     (MCL_TYPES_AR_RELEASE_MINOR_VERSION_H != CACHE_IP_AR_RELEASE_MINOR_VERSION_H) || \
     (MCL_TYPES_AR_RELEASE_REVISION_VERSION_H != CACHE_IP_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Mcl_Types.h and Cache_Ip.h are different"
#endif

/* Check if header file and Cache_Ip.h file are of the same Software version */
#if ((MCL_TYPES_SW_MAJOR_VERSION_H != CACHE_IP_SW_MAJOR_VERSION_H) || \
     (MCL_TYPES_SW_MINOR_VERSION_H != CACHE_IP_SW_MINOR_VERSION_H) || \
     (MCL_TYPES_SW_PATCH_VERSION_H != CACHE_IP_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Mcl_Types.h and Cache_Ip.h are different"
#endif
#endif /* MCL_CACHE_IS_AVAILABLE == STD_ON */

#if (MCL_LCU_IS_AVAILABLE == STD_ON)
#if (MCL_TYPES_VENDOR_ID_H != LCU_IP_VENDOR_ID_H)
    #error "Mcl_Types.h and Lcu_Ip.h have different vendor ids"
#endif

/* Check if header file and Lcu_Ip.h file are of the same Autosar version */
#if ((MCL_TYPES_AR_RELEASE_MAJOR_VERSION_H != LCU_IP_AR_RELEASE_MAJOR_VERSION_H) || \
     (MCL_TYPES_AR_RELEASE_MINOR_VERSION_H != LCU_IP_AR_RELEASE_MINOR_VERSION_H) || \
     (MCL_TYPES_AR_RELEASE_REVISION_VERSION_H != LCU_IP_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Mcl_Types.h and Lcu_Ip.h are different"
#endif

/* Check if header file and Lcu_Ip.h file are of the same Software version */
#if ((MCL_TYPES_SW_MAJOR_VERSION_H != LCU_IP_SW_MAJOR_VERSION_H) || \
     (MCL_TYPES_SW_MINOR_VERSION_H != LCU_IP_SW_MINOR_VERSION_H) || \
     (MCL_TYPES_SW_PATCH_VERSION_H != LCU_IP_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Mcl_Types.h and Lcu_Ip.h are different"
#endif
#endif /* MCL_LCU_IS_AVAILABLE == STD_ON */

#if (MCL_TRGMUX_IS_AVAILABLE == STD_ON)
#if (MCL_TYPES_VENDOR_ID_H != TRGMUX_IP_VENDOR_ID_H)
    #error "Mcl_Types.h and Trgmux_Ip.h have different vendor ids"
#endif

/* Check if header file and Trgmux_Ip.h file are of the same Autosar version */
#if ((MCL_TYPES_AR_RELEASE_MAJOR_VERSION_H != TRGMUX_IP_AR_RELEASE_MAJOR_VERSION_H) || \
     (MCL_TYPES_AR_RELEASE_MINOR_VERSION_H != TRGMUX_IP_AR_RELEASE_MINOR_VERSION_H) || \
     (MCL_TYPES_AR_RELEASE_REVISION_VERSION_H != TRGMUX_IP_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Mcl_Types.h and Trgmux_Ip.h are different"
#endif

/* Check if header file and Trgmux_Ip.h file are of the same Software version */
#if ((MCL_TYPES_SW_MAJOR_VERSION_H != TRGMUX_IP_SW_MAJOR_VERSION_H) || \
     (MCL_TYPES_SW_MINOR_VERSION_H != TRGMUX_IP_SW_MINOR_VERSION_H) || \
     (MCL_TYPES_SW_PATCH_VERSION_H != TRGMUX_IP_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Mcl_Types.h and Trgmux_Ip.h are different"
#endif
#endif /* MCL_TRGMUX_IS_AVAILABLE == STD_ON */

#if (MCL_EMIOS_IS_AVAILABLE == STD_ON)
#if (MCL_TYPES_VENDOR_ID_H != EMIOS_MCL_IP_VENDOR_ID_H)
    #error "Mcl_Types.h and Emios_Mcl_Ip.h have different vendor ids"
#endif

/* Check if header file and Emios_Mcl_Ip.h file are of the same Autosar version */
#if ((MCL_TYPES_AR_RELEASE_MAJOR_VERSION_H != EMIOS_MCL_IP_AR_RELEASE_MAJOR_VERSION_H) || \
     (MCL_TYPES_AR_RELEASE_MINOR_VERSION_H != EMIOS_MCL_IP_AR_RELEASE_MINOR_VERSION_H) || \
     (MCL_TYPES_AR_RELEASE_REVISION_VERSION_H != EMIOS_MCL_IP_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Mcl_Types.h and Emios_Mcl_Ip.h are different"
#endif

/* Check if header file and Emios_Mcl_Ip.h file are of the same Software version */
#if ((MCL_TYPES_SW_MAJOR_VERSION_H != EMIOS_MCL_IP_SW_MAJOR_VERSION_H) || \
     (MCL_TYPES_SW_MINOR_VERSION_H != EMIOS_MCL_IP_SW_MINOR_VERSION_H) || \
     (MCL_TYPES_SW_PATCH_VERSION_H != EMIOS_MCL_IP_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Mcl_Types.h and Emios_Mcl_Ip.h are different"
#endif
#endif /* MCL_EMIOS_IS_AVAILABLE == STD_ON */

#if (MCL_FLEXIO_IS_AVAILABLE == STD_ON)
#if (MCL_TYPES_VENDOR_ID_H != FLEXIO_MCL_IP_VENDOR_ID_H)
    #error "Mcl_Types.h and Flexio_Mcl_Ip.h have different vendor ids"
#endif

/* Check if header file and Flexio_Mcl_Ip.h file are of the same Autosar version */
#if ((MCL_TYPES_AR_RELEASE_MAJOR_VERSION_H != FLEXIO_MCL_IP_AR_RELEASE_MAJOR_VERSION_H) || \
     (MCL_TYPES_AR_RELEASE_MINOR_VERSION_H != FLEXIO_MCL_IP_AR_RELEASE_MINOR_VERSION_H) || \
     (MCL_TYPES_AR_RELEASE_REVISION_VERSION_H != FLEXIO_MCL_IP_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Mcl_Types.h and Flexio_Mcl_Ip.h are different"
#endif

/* Check if header file and Flexio_Mcl_Ip.h file are of the same Software version */
#if ((MCL_TYPES_SW_MAJOR_VERSION_H != FLEXIO_MCL_IP_SW_MAJOR_VERSION_H) || \
     (MCL_TYPES_SW_MINOR_VERSION_H != FLEXIO_MCL_IP_SW_MINOR_VERSION_H) || \
     (MCL_TYPES_SW_PATCH_VERSION_H != FLEXIO_MCL_IP_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Mcl_Types.h and Flexio_Mcl_Ip.h are different"
#endif
#endif /* MCL_FLEXIO_IS_AVAILABLE == STD_ON */

/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                        DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                              ENUMS
==================================================================================================*/
/**
 * @brief This type contains the Mcl Return Type.
 * @details The Return Type give information for the execution of interfaces.
 *
 * */
typedef enum{
    MCL_STATUS_SUCCESS     = E_OK,
    MCL_STATUS_ERROR       = E_NOT_OK
}Mcl_ReturnType;

/*==================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
#if (MCL_EMIOS_IS_AVAILABLE == STD_ON)
typedef struct
{
    const uint8                   instance;
    const Emios_Mcl_Ip_ConfigType *emiosInstanceConfig;
} Mcl_EmiosInstanceConfigType;

typedef struct
{
    const uint8                       MclEmiosNumInstances;
    const Mcl_EmiosInstanceConfigType (*pMclEmiosInstanceConfig)[];
} Mcl_EmiosInitConfigType;

#endif /* MCL_EMIOS_IS_AVAILABLE == STD_ON */

/**
 * @brief This type contains the Mcl Configuration.
 * @details The Mcl Configuration structure contains pointers to the Ip's configuration
 *          structure. Based on the available support, specific configurations shall be
 *          stored.
 *
 * */
typedef struct{
#if (MCL_DMA_IS_AVAILABLE == STD_ON)
    const Dma_Ip_InitType * const pxDmaInitType;
#else
    const uint8 * const DummyDmaPtr;
#endif /* MCL_DMA_IS_AVAILABLE == STD_ON */
#if (MCL_TRGMUX_IS_AVAILABLE == STD_ON)
    const Trgmux_Ip_InitType * const pxTrgmuxInitType;
#else
    const uint8 * const DummyTrgmuxPtr;
#endif /* MCL_TRGMUX_IS_AVAILABLE == STD_ON */
#if (MCL_LCU_IS_AVAILABLE == STD_ON)
    const Lcu_Ip_InitType * const pxLcuInitType;
#else
    const uint8 * const DummyLcuPtr;
#endif /* MCL_LCU_IS_AVAILABLE == STD_ON */
#if (MCL_EMIOS_IS_AVAILABLE == STD_ON)
    const Mcl_EmiosInitConfigType * const pEmiosInitType;
#else
    const uint8 * const DummyEmiosPtr;
#endif /* MCL_EMIOS_IS_AVAILABLE == STD_ON */
#if (MCL_FLEXIO_IS_AVAILABLE == STD_ON)
    const Flexio_Ip_InstanceConfigType * const pFlexioInitType;
#else
    const uint8 * const DummyFlexioPtr;
#endif /* MCL_FLEXIO_IS_AVAILABLE == STD_ON */
}Mcl_ConfigType;

/*==================================================================================================
*                                  GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/


/*==================================================================================================
*                                      FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */

#endif  /* MCL_TYPES_H_ */

/*==================================================================================================
 *                                        END OF FILE
==================================================================================================*/

