/*==================================================================================================
* Project : RTD AUTOSAR 4.4
* Platform : CORTEXM
* Peripheral : S32K14X
* Dependencies : none
*
* Autosar Version : 4.4.0
* Autosar Revision : ASR_REL_4_4_REV_0000
* Autosar Conf.Variant :
* SW Version : 1.0.1
* Build Version : S32K1_RTD_1_0_1_D2202_ASR_REL_4_4_REV_0000_20220224
*
* (c) Copyright 2020-2022 NXP Semiconductors
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
*   @addtogroup osif_drv
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                          INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "OsIf.h"
#include "OsIf_Interrupts.h"

#if defined(USING_OS_ZEPHYR)
#include "zephyr.h"

/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define OSIF_INTERRUPTS_VENDOR_ID_C                    43
#define OSIF_INTERRUPTS_AR_RELEASE_MAJOR_VERSION_C     4
#define OSIF_INTERRUPTS_AR_RELEASE_MINOR_VERSION_C     4
#define OSIF_INTERRUPTS_AR_RELEASE_REVISION_VERSION_C  0
#define OSIF_INTERRUPTS_SW_MAJOR_VERSION_C             1
#define OSIF_INTERRUPTS_SW_MINOR_VERSION_C             0
#define OSIF_INTERRUPTS_SW_PATCH_VERSION_C             1

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/
/* Checks against OsIf.h */
#if (OSIF_INTERRUPTS_VENDOR_ID_C != OSIF_VENDOR_ID)
    #error "OsIf_Interrupts.c and OsIf.h have different vendor ids"
#endif
#if ((OSIF_INTERRUPTS_AR_RELEASE_MAJOR_VERSION_C    != OSIF_AR_RELEASE_MAJOR_VERSION) || \
     (OSIF_INTERRUPTS_AR_RELEASE_MINOR_VERSION_C    != OSIF_AR_RELEASE_MINOR_VERSION) || \
     (OSIF_INTERRUPTS_AR_RELEASE_REVISION_VERSION_C != OSIF_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR Version Numbers of OsIf_Interrupts.c and OsIf.h are different"
#endif
#if ((OSIF_INTERRUPTS_SW_MAJOR_VERSION_C != OSIF_SW_MAJOR_VERSION) || \
     (OSIF_INTERRUPTS_SW_MINOR_VERSION_C != OSIF_SW_MINOR_VERSION) || \
     (OSIF_INTERRUPTS_SW_PATCH_VERSION_C != OSIF_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of OsIf_Interrupts.c and OsIf.h are different"
#endif

/* Checks against OsIf_Interrupts.h */
#if (OSIF_INTERRUPTS_VENDOR_ID_C != OSIF_INTERRUPTS_VENDOR_ID)
    #error "OsIf_Interrupts.c and OsIf_Interrupts.h have different vendor ids"
#endif
#if ((OSIF_INTERRUPTS_AR_RELEASE_MAJOR_VERSION_C    != OSIF_INTERRUPTS_AR_RELEASE_MAJOR_VERSION) || \
     (OSIF_INTERRUPTS_AR_RELEASE_MINOR_VERSION_C    != OSIF_INTERRUPTS_AR_RELEASE_MINOR_VERSION) || \
     (OSIF_INTERRUPTS_AR_RELEASE_REVISION_VERSION_C != OSIF_INTERRUPTS_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR Version Numbers of OsIf_Interrupts.c and OsIf_Interrupts.h are different"
#endif
#if ((OSIF_INTERRUPTS_SW_MAJOR_VERSION_C != OSIF_INTERRUPTS_SW_MAJOR_VERSION) || \
     (OSIF_INTERRUPTS_SW_MINOR_VERSION_C != OSIF_INTERRUPTS_SW_MINOR_VERSION) || \
     (OSIF_INTERRUPTS_SW_PATCH_VERSION_C != OSIF_INTERRUPTS_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of OsIf_Interrupts.c and OsIf_Interrupts.h are different"
#endif

/*==================================================================================================
*                           LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                          LOCAL MACROS
==================================================================================================*/
#if (STD_ON == OSIF_ENABLE_MULTICORE_SUPPORT)
    #define OsIfCoreID()        (OsIf_GetCoreID())
#else
    #define OsIfCoreID()        (0U)
#endif
/*==================================================================================================
*                                         LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL VARIABLES
==================================================================================================*/
#define BASE_START_SEC_VAR_CLEARED_32
#include "Base_MemMap.h"

static uint32 OsIf_au32OldIrqMask[OSIF_MAX_COREIDX_SUPPORTED];
static uint32 OsIf_au32SuspendLevel[OSIF_MAX_COREIDX_SUPPORTED];

#define BASE_STOP_SEC_VAR_CLEARED_32
#include "Base_MemMap.h"

/*==================================================================================================
*                                        GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                    LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL FUNCTIONS
==================================================================================================*/
#define BASE_START_SEC_CODE
#include "Base_MemMap.h"

void OsIf_Interrupts_SuspendAllInterrupts(void)
{
    uint32 CoreId = OsIfCoreID();

    if (OsIf_au32SuspendLevel[CoreId]++ == 0U)
    {
        OsIf_au32OldIrqMask[CoreId] = arch_irq_lock();
    }
}

void OsIf_Interrupts_ResumeAllInterrupts(void)
{
    uint32 CoreId = OsIfCoreID();

    if (--OsIf_au32SuspendLevel[CoreId] == 0U)
    {
       arch_irq_unlock(OsIf_au32OldIrqMask[CoreId]);
    }
}

#define BASE_STOP_SEC_CODE
#include "Base_MemMap.h"

#endif /* defined(USING_OS_ZEPHYR) */

#ifdef __cplusplus
}
#endif

/** @} */
