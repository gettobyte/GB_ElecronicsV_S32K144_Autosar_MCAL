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

/**
*   @file    Flexio_Mcl_Ip.c
*
*   @version 1.0.0
*
*   @brief   AUTOSAR Mcl - Flexio Common driver source file.
*   @details
*
*   @addtogroup FLEXIO_IP_DRIVER FLEXIO IP Driver
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                         INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Flexio_Mcl_Ip.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define FLEXIO_MCL_IP_VENDOR_ID_C                      43
#define FLEXIO_MCL_IP_AR_RELEASE_MAJOR_VERSION_C       4
#define FLEXIO_MCL_IP_AR_RELEASE_MINOR_VERSION_C       4
#define FLEXIO_MCL_IP_AR_RELEASE_REVISION_VERSION_C    0
#define FLEXIO_MCL_IP_SW_MAJOR_VERSION_C               1
#define FLEXIO_MCL_IP_SW_MINOR_VERSION_C               0
#define FLEXIO_MCL_IP_SW_PATCH_VERSION_C               0

/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/

/* Check if Flexio_Mcl_Ip.c file and Flexio_Mcl_Ip.h file are of the same vendor */
#if (FLEXIO_MCL_IP_VENDOR_ID_C != FLEXIO_MCL_IP_VENDOR_ID_H)
    #error "Flexio_Mcl_Ip.c and Flexio_Mcl_Ip.h have different vendor ids"
#endif

/* Check if Flexio_Mcl_Ip.c file and Flexio_Mcl_Ip.h file are of the same Autosar version */
#if ((FLEXIO_MCL_IP_AR_RELEASE_MAJOR_VERSION_C != FLEXIO_MCL_IP_AR_RELEASE_MAJOR_VERSION_H) || \
     (FLEXIO_MCL_IP_AR_RELEASE_MINOR_VERSION_C != FLEXIO_MCL_IP_AR_RELEASE_MINOR_VERSION_H) || \
     (FLEXIO_MCL_IP_AR_RELEASE_REVISION_VERSION_C != FLEXIO_MCL_IP_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Flexio_Mcl_Ip.c and Flexio_Mcl_Ip.h are different"
#endif

/* Check if Flexio_Mcl_Ip.c file and Flexio_Mcl_Ip.h file are of the same Software version */
#if ((FLEXIO_MCL_IP_SW_MAJOR_VERSION_C != FLEXIO_MCL_IP_SW_MAJOR_VERSION_H) || \
     (FLEXIO_MCL_IP_SW_MINOR_VERSION_C != FLEXIO_MCL_IP_SW_MINOR_VERSION_H) || \
     (FLEXIO_MCL_IP_SW_PATCH_VERSION_C != FLEXIO_MCL_IP_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Flexio_Mcl_Ip.c and Flexio_Mcl_Ip.h are different"
#endif

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                   GLOBAL FUNCTIONS PROTOTYPES
==================================================================================================*/
#define MCL_START_SEC_CONST_UNSPECIFIED
#include "Mcl_MemMap.h"

/* Table of base addresses for FLEXIO instances. */
FLEXIO_Type * const flexioBase[FLEXIO_INSTANCE_COUNT] = IP_FLEXIO_BASE_PTRS;

#define MCL_STOP_SEC_CONST_UNSPECIFIED
#include "Mcl_MemMap.h"


#define MCL_START_SEC_VAR_CLEARED_BOOLEAN
#include "Mcl_MemMap.h"

/* Table of base addresses for FLEXIO instances. */
boolean Flexio_Ip_IpIsInitialized[FLEXIO_INSTANCE_COUNT];

#define MCL_STOP_SEC_VAR_CLEARED_BOOLEAN
#include "Mcl_MemMap.h"

/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/
#define MCL_START_SEC_CODE
#include "Mcl_MemMap.h"

Flexio_Ip_CommonStatusType Flexio_Mcl_Ip_InitDevice(const Flexio_Ip_InstanceConfigType * const pFlexioInitType)
{
    FLEXIO_Type *baseAddr;
    Flexio_Ip_CommonStatusType status = FLEXIO_IP_COMMON_STATUS_SUCCESS;

    uint8 LocInstance =  pFlexioInitType->instance;
    boolean LocDebugEnable = pFlexioInitType->debugEnable;
    baseAddr = flexioBase[LocInstance];

    if(Flexio_Ip_IpIsInitialized[LocInstance] == TRUE)
    {
        status = FLEXIO_IP_COMMON_STATUS_FAIL;
    }
    /* Reset FlexIO module */
    Flexio_Mcl_Ip_Init(baseAddr);
    /* Enable module */
    Flexio_Mcl_Ip_SetEnable(baseAddr, TRUE);

    Flexio_Mcl_Ip_SetDebugEnable(baseAddr, LocDebugEnable);

    Flexio_Ip_IpIsInitialized[LocInstance] = TRUE;

    (void)status;
    return status;
}


/*
 * Function Name : FLEXIO_DRV_DeinitDevice
 * Description   : De-initializes the FlexIO device
*/
void Flexio_Mcl_Ip_DeinitDevice(uint32 instance)
{
    FLEXIO_Type *baseAddr;

    baseAddr = flexioBase[instance];
    /* Reset FlexIO module */
    Flexio_Mcl_Ip_Init(baseAddr);
    Flexio_Ip_IpIsInitialized[instance] = FALSE;
}


#define MCL_STOP_SEC_CODE
#include "Mcl_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
