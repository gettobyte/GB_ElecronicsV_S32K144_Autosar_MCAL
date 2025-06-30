/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : 
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
*   @file
*
*   @addtogroup IntCtrl_Ip
*   @{
*/

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

#include "IntCtrl_Ip.h"
#include "Mcal.h"
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define PLATFORM_INTCTRL_IP_VENDOR_ID_C                    43
#define PLATFORM_INTCTRL_IP_SW_MAJOR_VERSION_C                   1
#define PLATFORM_INTCTRL_IP_SW_MINOR_VERSION_C                   0
#define PLATFORM_INTCTRL_IP_SW_PATCH_VERSION_C                   0
/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and IntCtrl_Ip header file are of the same vendor */
#if (PLATFORM_INTCTRL_IP_VENDOR_ID_C != PLATFORM_INTCTRL_IP_VENDOR_ID)
    #error "IntCtrl_Ip.c and IntCtrl_Ip.h have different vendor ids"
#endif

/* Check if current file and Fls header file are of the same Software version */
#if ((PLATFORM_INTCTRL_IP_SW_MAJOR_VERSION_C != PLATFORM_INTCTRL_IP_SW_MAJOR_VERSION) || \
     (PLATFORM_INTCTRL_IP_SW_MINOR_VERSION_C != PLATFORM_INTCTRL_IP_SW_MINOR_VERSION) || \
     (PLATFORM_INTCTRL_IP_SW_PATCH_VERSION_C != PLATFORM_INTCTRL_IP_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of IntCtrl_Ip.c and IntCtrl_Ip.h are different"
#endif

/*==================================================================================================
*                                       GLOBAL VARIABLES
==================================================================================================*/
extern uint32 __INT_SRAM_START[1U];
/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
#if ((STD_ON == INTCTRL_PLATFORM_ENABLE_USER_MODE_SUPPORT) && (defined (MCAL_ENABLE_USER_MODE_SUPPORT)))
    #define Call_IntCtrl_Ip_InstallHandlerPrivileged(eIrqNumber,pfNewHandler,pfOldHandler)  \
                OsIf_Trusted_Call3params(IntCtrl_Ip_InstallHandlerPrivileged,(eIrqNumber),(pfNewHandler),(pfOldHandler))
    #define Call_IntCtrl_Ip_EnableIrqPrivileged(eIrqNumber)  \
                OsIf_Trusted_Call1param(IntCtrl_Ip_EnableIrqPrivileged,(eIrqNumber))
    #define Call_IntCtrl_Ip_DisableIrqPrivileged(eIrqNumber)  \
                OsIf_Trusted_Call1param(IntCtrl_Ip_DisableIrqPrivileged,(eIrqNumber))
    #define Call_IntCtrl_Ip_SetPriorityPrivileged(eIrqNumber,u8Priority)  \
                OsIf_Trusted_Call2params(IntCtrl_Ip_SetPriorityPrivileged,(eIrqNumber),(u8Priority))
    #define Call_IntCtrl_Ip_GetPriorityPrivileged(eIrqNumber)  \
                OsIf_Trusted_Call_Return1param(IntCtrl_Ip_GetPriorityPrivileged,(eIrqNumber))
    #define Call_IntCtrl_Ip_ClearPendingPrivileged(eIrqNumber)  \
                OsIf_Trusted_Call1param(IntCtrl_Ip_ClearPendingPrivileged,(eIrqNumber))
#if (INT_CTRL_IP_CORTEXR == STD_ON)
    #define Call_IntCtrl_Ip_Group1Privileged(eIrqNumber)  \
                OsIf_Trusted_Call1param(IntCtrl_Ip_Group1Privileged,(eIrqNumber))
    #define Call_IntCtrl_Ip_ConfigureSpiPrivileged(eIrqNumber,conf)  \
                OsIf_Trusted_Call2params(IntCtrl_Ip_ConfigureSpiPrivileged,(eIrqNumber),(conf))
    #define Call_IntCtrl_Ip_SetIntTargetPrivileged(eIrqNumber, target)  \
                OsIf_Trusted_Call2params(IntCtrl_Ip_SetIntTargetPrivileged,(eIrqNumber),(target)) 
#endif /*INT_CTRL_IP_CORTEXR == STD_ON */
#if (INT_CTRL_IP_STANDALONE_APIS == STD_ON)
    #define Call_IntCtrl_Ip_SetPendingPrivileged(eIrqNumber)  \
                OsIf_Trusted_Call1param(IntCtrl_Ip_SetPendingPrivileged,(eIrqNumber))
    #define Call_IntCtrl_Ip_GetPendingPrivileged(eIrqNumber)  \
                OsIf_Trusted_Call_Return1param(IntCtrl_Ip_GetPendingPrivileged,(eIrqNumber))
#if (INT_CTRL_IP_CORTEXM4 == STD_ON)             
    #define Call_IntCtrl_Ip_GetActivePrivileged(eIrqNumber)  \
                OsIf_Trusted_Call_Return1param(IntCtrl_Ip_GetActivePrivileged,(eIrqNumber))
#endif                
#endif
#if ((INT_CTRL_IP_MSCM_SYSTEM_INTERRUPT_ROUTER == STD_ON) && (INT_CTRL_IP_ROUTING_CONTROL_REGISTER == STD_ON))
    #define Call_IntCtrl_Ip_SetTargetCoresPrivileged(eIrqNumber,u8TargetCores)  \
                OsIf_Trusted_Call2params(IntCtrl_Ip_SetTargetCoresPrivileged,(eIrqNumber),(u8TargetCores))
#endif
#if (INT_CTRL_IP_MSI_AVAILABLE == STD_ON)
    #define Call_IntCtrl_Ip_GenerateDirectedCpuInterruptPrivileged(eIrqNumber,eCpuTarget)  \
                OsIf_Trusted_Call2params(IntCtrl_Ip_GenerateDirectedCpuInterruptPrivileged,(eIrqNumber),(eCpuTarget))
    #define Call_IntCtrl_Ip_ClearDirectedCpuInterruptPrivileged(eIrqNumber)  \
                OsIf_Trusted_Call1param(IntCtrl_Ip_ClearDirectedCpuInterruptPrivileged,(eIrqNumber))
    #define Call_IntCtrl_Ip_GetDirectedCpuInterruptPrivileged(eIrqNumber)  \
                OsIf_Trusted_Call_Return1param(IntCtrl_Ip_GetDirectedCpuInterruptPrivileged,(eIrqNumber))
#endif
#else /*STD_ON == INTCTRL_PLATFORM_ENABLE_USER_MODE_SUPPORT*/
    #define Call_IntCtrl_Ip_InstallHandlerPrivileged(eIrqNumber,pfNewHandler,pfOldHandler)  \
                IntCtrl_Ip_InstallHandlerPrivileged((eIrqNumber),(pfNewHandler),(pfOldHandler))
    #define Call_IntCtrl_Ip_EnableIrqPrivileged(eIrqNumber)  \
                IntCtrl_Ip_EnableIrqPrivileged((eIrqNumber))
    #define Call_IntCtrl_Ip_DisableIrqPrivileged(eIrqNumber)  \
                IntCtrl_Ip_DisableIrqPrivileged((eIrqNumber))
    #define Call_IntCtrl_Ip_SetPriorityPrivileged(eIrqNumber,u8Priority)  \
                IntCtrl_Ip_SetPriorityPrivileged((eIrqNumber),(u8Priority))
    #define Call_IntCtrl_Ip_GetPriorityPrivileged(eIrqNumber)  \
                IntCtrl_Ip_GetPriorityPrivileged((eIrqNumber))
    #define Call_IntCtrl_Ip_ClearPendingPrivileged(eIrqNumber)  \
                IntCtrl_Ip_ClearPendingPrivileged((eIrqNumber))
#if (INT_CTRL_IP_CORTEXR == STD_ON)
    #define Call_IntCtrl_Ip_Group1Privileged(eIrqNumber)  \
                IntCtrl_Ip_Group1Privileged((eIrqNumber))
    #define Call_IntCtrl_Ip_ConfigureSpiPrivileged(eIrqNumber,conf)  \
                IntCtrl_Ip_ConfigureSpiPrivileged((eIrqNumber),(conf)) 
    #define Call_IntCtrl_Ip_SetIntTargetPrivileged(eIrqNumber,target)  \
                IntCtrl_Ip_SetIntTargetPrivileged((eIrqNumber),(target))
#endif
#if (INT_CTRL_IP_STANDALONE_APIS == STD_ON)
    #define Call_IntCtrl_Ip_SetPendingPrivileged(eIrqNumber)  \
                IntCtrl_Ip_SetPendingPrivileged((eIrqNumber))
    #define Call_IntCtrl_Ip_GetPendingPrivileged(eIrqNumber)  \
                IntCtrl_Ip_GetPendingPrivileged((eIrqNumber))
#if (INT_CTRL_IP_CORTEXM4 == STD_ON)              
    #define Call_IntCtrl_Ip_GetActivePrivileged(eIrqNumber)  \
                IntCtrl_Ip_GetActivePrivileged((eIrqNumber))
#endif               
#endif
#if ((INT_CTRL_IP_MSCM_SYSTEM_INTERRUPT_ROUTER == STD_ON) && (INT_CTRL_IP_ROUTING_CONTROL_REGISTER == STD_ON))
    #define Call_IntCtrl_Ip_SetTargetCoresPrivileged(eIrqNumber,u8TargetCores)  \
                IntCtrl_Ip_SetTargetCoresPrivileged((eIrqNumber),(u8TargetCores))
#endif
#if (INT_CTRL_IP_MSI_AVAILABLE == STD_ON)
    #define Call_IntCtrl_Ip_GenerateDirectedCpuInterruptPrivileged(eIrqNumber,eCpuTarget)  \
                IntCtrl_Ip_GenerateDirectedCpuInterruptPrivileged((eIrqNumber),(eCpuTarget))
    #define Call_IntCtrl_Ip_ClearDirectedCpuInterruptPrivileged(eIrqNumber)  \
                IntCtrl_Ip_ClearDirectedCpuInterruptPrivileged(eIrqNumber)
    #define Call_IntCtrl_Ip_GetDirectedCpuInterruptPrivileged(eIrqNumber)  \
                IntCtrl_Ip_GetDirectedCpuInterruptPrivileged(eIrqNumber)
#endif
#endif /*STD_ON == INTCTRL_PLATFORM_ENABLE_USER_MODE_SUPPORT*/

#define PLATFORM_START_SEC_CODE
#include "Platform_MemMap.h"
static inline void IntCtrl_Ip_InstallHandlerPrivileged(IRQn_Type eIrqNumber,
                               const IntCtrl_Ip_IrqHandlerType pfNewHandler,
                               IntCtrl_Ip_IrqHandlerType* const pfOldHandler);
static inline void IntCtrl_Ip_EnableIrqPrivileged(IRQn_Type eIrqNumber);
static inline void IntCtrl_Ip_DisableIrqPrivileged(IRQn_Type eIrqNumber);
static inline void IntCtrl_Ip_SetPriorityPrivileged(IRQn_Type eIrqNumber, uint8 u8Priority);
static inline uint8 IntCtrl_Ip_GetPriorityPrivileged(IRQn_Type eIrqNumber);
static inline void IntCtrl_Ip_ClearPendingPrivileged(IRQn_Type eIrqNumber);
#if (INT_CTRL_IP_CORTEXR == STD_ON)
static inline void IntCtrl_Ip_Group1Privileged(IRQn_Type eIrqNumber);
static inline void IntCtrl_Ip_ConfigureSpiPrivileged(IRQn_Type eIrqNumber, IntCtrl_Ip_TriggerType conf);
static inline void IntCtrl_Ip_SetIntTargetPrivileged(IRQn_Type eIrqNumber, IntCtrl_Ip_Routing_ModeType target);
#endif
#if (INT_CTRL_IP_STANDALONE_APIS == STD_ON)
static inline void IntCtrl_Ip_SetPendingPrivileged(IRQn_Type eIrqNumber);
static inline boolean IntCtrl_Ip_GetPendingPrivileged(IRQn_Type eIrqNumber);
#if (INT_CTRL_IP_CORTEXM4 == STD_ON)
static inline boolean IntCtrl_Ip_GetActivePrivileged(IRQn_Type eIrqNumber);
#endif
#endif
#if ((INT_CTRL_IP_MSCM_SYSTEM_INTERRUPT_ROUTER == STD_ON) && (INT_CTRL_IP_ROUTING_CONTROL_REGISTER == STD_ON))
static inline void IntCtrl_Ip_SetTargetCoresPrivileged(IRQn_Type eIrqNumber, uint8 u8TargetCores);
#endif
#if (INT_CTRL_IP_MSI_AVAILABLE == STD_ON)
static inline void IntCtrl_Ip_GenerateDirectedCpuInterruptPrivileged(IRQn_Type eIrqNumber, IntCtrl_Ip_IrqTargetType eCpuTarget);
static inline void IntCtrl_Ip_ClearDirectedCpuInterruptPrivileged(IRQn_Type eIrqNumber);
static inline boolean IntCtrl_Ip_GetDirectedCpuInterruptPrivileged(IRQn_Type eIrqNumber);
#endif


static inline void IntCtrl_Ip_InstallHandlerPrivileged(IRQn_Type eIrqNumber,
                               const IntCtrl_Ip_IrqHandlerType pfNewHandler,
                               IntCtrl_Ip_IrqHandlerType* const pfOldHandler)
{
#if (INT_CTRL_IP_DEV_ERROR_DETECT == STD_ON)

    /* Check IRQ number - dev_irqNumber is used to avoid compiler warning */
    sint32 dev_irqNumber = (sint32)eIrqNumber;
    DevAssert(INT_CTRL_IP_IRQ_MIN <= dev_irqNumber);
    DevAssert(dev_irqNumber <= (sint32)INT_CTRL_IP_IRQ_MAX);
    DevAssert(S32_SCB->VTOR >= (uint32)__INT_SRAM_START);

#endif /*(INT_CTRL_IP_DEV_ERROR_DETECT == STD_ON) */

#if (INT_CTRL_IP_CORTEXR == STD_ON)
    /* The 'irq_id' parameter is in r0 and the 'isr_handler' parameter is in r1 according to AAPCS */

    /* r2 = &VTABLE */
    ASM_KEYWORD("ldr r3,=VTABLE");
    /* r2 = &VTABLE[irq_id] */
    ASM_KEYWORD("add r3,r3,r0,lsl #2");
    /* Save the former handler pointer */
    if (pfOldHandler != NULL_PTR)
    {
        /* *pfOldHandler =  */
        ASM_KEYWORD("ldr r4,[r3]");
        ASM_KEYWORD("str r4,[r2]");
        
    }
    /* VTABLE[irq_id] = isr_handler */
    ASM_KEYWORD("str r1,[r3]");

    (void)eIrqNumber;
    (void)pfNewHandler;
#else
    uint32 * pVectorRam = (uint32 *)S32_SCB->VTOR;

    /* Save the former handler pointer */
    if (pfOldHandler != NULL_PTR)
    {
        *pfOldHandler = (IntCtrl_Ip_IrqHandlerType)pVectorRam[((sint32)eIrqNumber) + 16];
    }

    /* Set handler into vector table */
    pVectorRam[((sint32)eIrqNumber) + 16] = (uint32)pfNewHandler;
#if (INT_CTRL_IP_INVALIDATE_CACHE == STD_ON)
    /* Invalidate ICache */
    S32_SCB->ICIALLU = 0UL;
#endif
    
#endif
    ASM_KEYWORD("dsb");
    ASM_KEYWORD("isb");
    MCAL_INSTRUCTION_SYNC_BARRIER();
    MCAL_DATA_SYNC_BARRIER();
}

static inline void IntCtrl_Ip_EnableIrqPrivileged(IRQn_Type eIrqNumber)
{
#if (INT_CTRL_IP_DEV_ERROR_DETECT == STD_ON)
    /* Check IRQ number - dev_irqNumber is used to avoid compiler warning */
    DevAssert(0 <= (sint32)eIrqNumber);
    DevAssert((sint32)eIrqNumber <= (sint32)INT_CTRL_IP_IRQ_MAX);
#endif /*(INT_CTRL_IP_DEV_ERROR_DETECT == STD_ON) */
    /* Enable interrupt */
#if (INT_CTRL_IP_CORTEXR == STD_ON)
    S32_GICD->GICD_ISENABLER[((uint32)(eIrqNumber) >> 5U) - 1] = (uint32)(1UL << ((uint32)(eIrqNumber) & (uint32)0x1FU));    
#else
    S32_NVIC->ISER[(uint32)(eIrqNumber) >> 5U] = (uint32)(1UL << ((uint32)(eIrqNumber) & (uint32)0x1FU));    
#endif
}

static inline void IntCtrl_Ip_DisableIrqPrivileged(IRQn_Type eIrqNumber)
{
#if (INT_CTRL_IP_DEV_ERROR_DETECT == STD_ON)
    /* Check IRQ number - dev_irqNumber is used to avoid compiler warning */
    DevAssert(0 <= (sint32)eIrqNumber);
    DevAssert((sint32)eIrqNumber <= (sint32)INT_CTRL_IP_IRQ_MAX);
#endif /*(INT_CTRL_IP_DEV_ERROR_DETECT == STD_ON) */
    /* Disable interrupt */
#if(INT_CTRL_IP_CORTEXR == STD_ON)    
    S32_GICD->GICD_ICENABLER[((uint32)(eIrqNumber) >> 5U)-1] = (uint32)(1UL << ((uint32)(eIrqNumber) & (uint32)0x1FU));
#else
    S32_NVIC->ICER[(uint32)(eIrqNumber) >> 5U] = (uint32)(1UL << ((uint32)(eIrqNumber) & (uint32)0x1FU));
#endif
}

static inline void IntCtrl_Ip_SetPriorityPrivileged(IRQn_Type eIrqNumber, uint8 u8Priority)
{
#if (INT_CTRL_IP_DEV_ERROR_DETECT == STD_ON)

    /* Check IRQ number and priority - dev_irqNumber is used to avoid compiler warning */
    DevAssert(INT_CTRL_IP_IRQ_MIN <= (sint32)eIrqNumber);
    DevAssert((sint32)eIrqNumber <= (sint32)INT_CTRL_IP_IRQ_MAX);
    DevAssert(u8Priority < (uint8)(1U << INT_CTRL_IP_NVIC_PRIO_BITS));

#endif /* (INT_CTRL_IP_DEV_ERROR_DETECT == STD_ON) */

    uint8 shift = (uint8) (8U - INT_CTRL_IP_NVIC_PRIO_BITS);

#if (INT_CTRL_IP_CORTEXM4 == STD_ON)
    /* Set Priority for device specific Interrupts */  
    S32_NVIC->IP[(uint32)(eIrqNumber)] = (uint8)((((uint32)u8Priority) << shift) & 0xFFUL);
#elif (INT_CTRL_IP_CORTEXR == STD_ON)
    uint32_t iprVectorId = ((uint32_t)(eIrqNumber) >> 2U) - 8;
    uint8_t priByteShift = (uint8_t)((((uint8_t)eIrqNumber) & 0x3U) << 3U);

    /* Clear the old value from the register */
    S32_GICD->GICD_IPRIORITYR[iprVectorId] &= ~(0xFFUL << priByteShift);

    S32_GICD->GICD_IPRIORITYR[iprVectorId] |= ((uint32_t)(((((uint32_t)u8Priority) << shift)) & 0xFFUL)) << priByteShift;
#else
    uint32_t iprVectorId = (uint32_t)(eIrqNumber) >> 2U;
    uint8_t priByteShift = (uint8_t)((((uint8_t)eIrqNumber) & 0x3U) << 3U);

    /* Clear the old value from the register */
    S32_NVIC->IP[iprVectorId] &= ~(0xFFUL << priByteShift);

    S32_NVIC->IP[iprVectorId] |= ((uint32_t)(((((uint32_t)u8Priority) << shift)) & 0xFFUL)) << priByteShift;
#endif
}

static inline uint8 IntCtrl_Ip_GetPriorityPrivileged(IRQn_Type eIrqNumber)
{
#if (INT_CTRL_IP_DEV_ERROR_DETECT == STD_ON)

    /* Check IRQ number */
    DevAssert(INT_CTRL_IP_IRQ_MIN <= eIrqNumber);
    DevAssert((sint32)eIrqNumber <= (sint32)INT_CTRL_IP_IRQ_MAX);

#endif /*(INT_CTRL_IP_DEV_ERROR_DETECT == STD_ON) */

    uint8 priority;
    uint8 shift = (uint8)(8U - INT_CTRL_IP_NVIC_PRIO_BITS);
    
#if (INT_CTRL_IP_CORTEXM4 == STD_ON)
    /* Get Priority for device specific Interrupts  */  
    priority = (uint8)(S32_NVIC->IP[(uint32)(eIrqNumber)] >> shift);
#elif (INT_CTRL_IP_CORTEXR == STD_ON)
    uint32_t iprVectorId = ((uint32_t)(eIrqNumber) >> 2U) - 8;
    uint8_t priByteShift = (uint8_t)((((uint8_t)(eIrqNumber)) & 0x3U) << 3U);
    priority = ((uint8_t)(S32_GICD->GICD_IPRIORITYR[iprVectorId] >> priByteShift)) >> shift;   
#else    
    uint32_t iprVectorId = (uint32_t)(eIrqNumber) >> 2U;
    uint8_t priByteShift = (uint8_t)((((uint8_t)(eIrqNumber)) & 0x3U) << 3U);
    priority = ((uint8_t)(S32_NVIC->IP[iprVectorId] >> priByteShift)) >> shift;
#endif
    return priority;
}

static inline void IntCtrl_Ip_ClearPendingPrivileged(IRQn_Type eIrqNumber)
{
#if (INT_CTRL_IP_DEV_ERROR_DETECT == STD_ON)
    /* Check IRQ number */
    DevAssert(0 <= (sint32)eIrqNumber);
    DevAssert((sint32)eIrqNumber <= (sint32)INT_CTRL_IP_IRQ_MAX);
#endif /* (INT_CTRL_IP_DEV_ERROR_DETECT == STD_ON) */
#if (INT_CTRL_IP_CORTEXR == STD_ON)
    /* Clear Pending Interrupt */
    S32_GICD->GICD_ICPENDR[((uint32)(eIrqNumber) >> 5U) - 1] = (uint32)(1UL << ((uint32)(eIrqNumber) & (uint32)0x1FU));
#else
    /* Clear Pending Interrupt */
    S32_NVIC->ICPR[(uint32)(eIrqNumber) >> 5U] = (uint32)(1UL << ((uint32)(eIrqNumber) & (uint32)0x1FU));
#endif
    
}

#if (INT_CTRL_IP_CORTEXR == STD_ON)
static inline void IntCtrl_Ip_Group1Privileged(IRQn_Type eIrqNumber)
{
#if (INT_CTRL_IP_DEV_ERROR_DETECT == STD_ON)
    /* Check IRQ number */
    DevAssert(0 <= (sint32)eIrqNumber);
    DevAssert((sint32)eIrqNumber <= (sint32)INT_CTRL_IP_IRQ_MAX);
#endif /* (INT_CTRL_IP_DEV_ERROR_DETECT == STD_ON) */
    /* MAKE INT GROUP1 */
    S32_GICD->GICD_IGROUPR[((uint32)(eIrqNumber) >> 5U) - 1U] |= (uint32)(1UL << ((uint32)(eIrqNumber) & (uint32)0x1FU));
}
#endif 

#if (INT_CTRL_IP_CORTEXR == STD_ON)
static inline void IntCtrl_Ip_ConfigureSpiPrivileged(IRQn_Type eIrqNumber, IntCtrl_Ip_TriggerType conf)
{
    uint32 bank, tmp;
 #if (INT_CTRL_IP_DEV_ERROR_DETECT == STD_ON)
    /* Check IRQ number */
    DevAssert(0 <= (sint32)eIrqNumber);
    DevAssert((sint32)eIrqNumber <= (sint32)INT_CTRL_IP_IRQ_MAX);
#endif /* (INT_CTRL_IP_DEV_ERROR_DETECT == STD_ON) */

    
    conf = conf & 0x3;            /* Mask out unused bits */
    
    bank = (eIrqNumber / 16) - 2;         /* There are 16 IDs per register, need to work out which register to access */
    eIrqNumber   = eIrqNumber & 0xF;              /* ... and which field within the register */
    eIrqNumber   = eIrqNumber * 2;                /* Convert from which field to a bit offset (2-bits per field) */
    
    conf = conf << eIrqNumber;            /* Move configuration value into correct bit position */

    tmp = S32_GICD->GICD_ICFGR[bank]; /* Read current value */
    tmp = tmp & ~(0x3 << eIrqNumber);         /* Clear the bits for the specified field */
    tmp = tmp | conf;                 /* OR in new configuration */
    S32_GICD->GICD_ICFGR[bank] = tmp; /* Write updated value back */ 
}
#endif    

#if (INT_CTRL_IP_CORTEXR == STD_ON)
static inline void IntCtrl_Ip_SetIntTargetPrivileged(IRQn_Type eIrqNumber, IntCtrl_Ip_Routing_ModeType target)
{
#if (INT_CTRL_IP_DEV_ERROR_DETECT == STD_ON)
    /* Check IRQ number */
    DevAssert(0 <= (sint32)eIrqNumber);
    DevAssert((sint32)eIrqNumber <= (sint32)INT_CTRL_IP_IRQ_MAX);
#endif /* (INT_CTRL_IP_DEV_ERROR_DETECT == STD_ON) */
    /* MAKE INT GROUP1 */
    S32_GICD->GICD_IROUTER[eIrqNumber - 32] = (uint64)target;
}
#endif /*INT_CTRL_IP_CORTEXR */

#if (INT_CTRL_IP_STANDALONE_APIS == STD_ON)
static inline void IntCtrl_Ip_SetPendingPrivileged(IRQn_Type eIrqNumber)
{
#if (INT_CTRL_IP_DEV_ERROR_DETECT == STD_ON)
    /* Check IRQ number - dev_irqNumber is used to avoid compiler warning */
    DevAssert(0 <= (sint32)eIrqNumber);
    DevAssert(((sint32)eIrqNumber) <= (sint32)INT_CTRL_IP_IRQ_MAX);
#endif /*(INT_CTRL_IP_DEV_ERROR_DETECT == STD_ON) */
#if (INT_CTRL_IP_CORTEXR == STD_ON)
    /* Set Pending Interrupt */
    S32_GICD->GICD_ISPENDR[((uint32)(eIrqNumber) >> 5U)-1] = (uint32)(1UL << ((uint32)(eIrqNumber) & (uint32)0x1FU));
#else
    /* Set Pending Interrupt */
    S32_NVIC->ISPR[(uint32)(eIrqNumber) >> 5U] = (uint32)(1UL << ((uint32)(eIrqNumber) & (uint32)0x1FU));    
#endif

}

static inline boolean IntCtrl_Ip_GetPendingPrivileged(IRQn_Type eIrqNumber)
{
#if (INT_CTRL_IP_DEV_ERROR_DETECT == STD_ON)
    /* Check IRQ number */
    DevAssert(0 <= (sint32)eIrqNumber);
    DevAssert(((sint32)eIrqNumber) <= (sint32)INT_CTRL_IP_IRQ_MAX);
#endif /*(INT_CTRL_IP_DEV_ERROR_DETECT == STD_ON) */
#if (INT_CTRL_IP_CORTEXR == STD_ON)
    /* Get Pending Interrupt */
    return ((((S32_GICD->GICD_ICPENDR[(((uint32)eIrqNumber) >> 5UL) - 1] & (1UL << (((uint32)eIrqNumber) & 0x1FUL))) != 0UL) ? TRUE : FALSE));
#else
    /* Get Pending Interrupt */
    return ((((S32_NVIC->ISPR[(((uint32)eIrqNumber) >> 5UL)] & (1UL << (((uint32)eIrqNumber) & 0x1FUL))) != 0UL) ? TRUE : FALSE));    
#endif    
}
#if (INT_CTRL_IP_CORTEXM4 == STD_ON)
static inline boolean IntCtrl_Ip_GetActivePrivileged(IRQn_Type eIrqNumber)
{
#if (INT_CTRL_IP_DEV_ERROR_DETECT == STD_ON)
    /* Check IRQ number */
    DevAssert(0 <= (sint32)eIrqNumber);
    DevAssert(((sint32)eIrqNumber) <= (sint32)INT_CTRL_IP_IRQ_MAX);
#endif /*(INT_CTRL_IP_DEV_ERROR_DETECT == STD_ON) */
    /* Get Active Interrupt */
    return ((((S32_NVIC->IABR[(((uint32)eIrqNumber) >> 5UL)] & (1UL << (((uint32)eIrqNumber) & 0x1FUL))) != 0UL) ? TRUE : FALSE));
}
#endif
#endif /*#if (INT_CTRL_IP_STANDALONE_APIS == STD_ON)*/

#if ((INT_CTRL_IP_MSCM_SYSTEM_INTERRUPT_ROUTER == STD_ON) && (INT_CTRL_IP_ROUTING_CONTROL_REGISTER == STD_ON))
/**
 * @internal
 * @brief         Sets the target cores for an interrupt request.
 * @implements    IntCtrl_Ip_SetTargetCores_Activity
 */
static inline void IntCtrl_Ip_SetTargetCoresPrivileged(IRQn_Type eIrqNumber, uint8 u8TargetCores)
{
#if (INT_CTRL_IP_DEV_ERROR_DETECT == STD_ON)
    /* Check IRQ number */
    DevAssert(0 <= (sint32)eIrqNumber);
    DevAssert(((sint32)eIrqNumber) <= (sint32)INT_CTRL_IP_IRQ_MAX);
    /* Check interrupt routing is not locked for this IRQ */
    DevAssert((IP_MSCM->IRSPRC[eIrqNumber] & (uint16)(MSCM_IRSPRC_LOCK_MASK)) == (uint16)MSCM_IRSPRC_LOCK(0));
#endif /*(INT_CTRL_IP_DEV_ERROR_DETECT == STD_ON) */
    DevAssert(((uint16)u8TargetCores) <= (uint16)INTCTRL_IP_CORE_MASK);   
    IP_MSCM->IRSPRC[eIrqNumber] = (uint16)u8TargetCores & (uint16)INTCTRL_IP_CORE_MASK;
}


#endif

#if (INT_CTRL_IP_MSI_AVAILABLE == STD_ON)

static inline void IntCtrl_Ip_ClearDirectedCpuInterruptPrivileged(IRQn_Type eIrqNumber)
{
#if (INT_CTRL_IP_DEV_ERROR_DETECT == STD_ON)
    /* Check IRQ number */
    DevAssert(INTCTRL_IP_DIRECTED_CPU_INT_MIN <= eIrqNumber);
    DevAssert((sint32)eIrqNumber <= INTCTRL_IP_DIRECTED_CPU_INT_MAX);
#endif /* (INT_CTRL_IP_DEV_ERROR_DETECT == STD_ON) */

    uint32 currentCpu;
    uint32 irqId;

    currentCpu = MSCM_CPXNUM_CPN_MASK & (IP_MSCM->CPXNUM);
    irqId = (uint32)eIrqNumber - (uint32)INTCTRL_IP_DIRECTED_CPU_INT_MIN;
    /* Clear Directed CPU Pending Interrupt */
    MSCM_IRCPnIRx->IRCPnIRx[currentCpu][irqId].IntStatusR = 0x7FU;

}

static inline boolean IntCtrl_Ip_GetDirectedCpuInterruptPrivileged(IRQn_Type eIrqNumber)
{
#if (INT_CTRL_IP_DEV_ERROR_DETECT == STD_ON)
    /* Check IRQ number */
    DevAssert(INTCTRL_IP_DIRECTED_CPU_INT_MIN <= eIrqNumber);
    DevAssert(eIrqNumber <= INTCTRL_IP_DIRECTED_CPU_INT_MAX);
#endif /*(INT_CTRL_IP_DEV_ERROR_DETECT == STD_ON) */


    uint32 currentCpu;
    uint32 irqId;

    currentCpu = MSCM_CPXNUM_CPN_MASK & (IP_MSCM->CPXNUM);
    irqId = (uint32)eIrqNumber - (uint32)INTCTRL_IP_DIRECTED_CPU_INT_MIN;

    return ((MSCM_IRCPnIRx->IRCPnIRx[currentCpu][irqId].IntStatusR != 0U) ? TRUE : FALSE); 
}


static inline void IntCtrl_Ip_GenerateDirectedCpuInterruptPrivileged(IRQn_Type eIrqNumber, IntCtrl_Ip_IrqTargetType eCpuTarget)
{
#if (INT_CTRL_IP_DEV_ERROR_DETECT == STD_ON)
    /* Check IRQ number */
    DevAssert(INTCTRL_IP_DIRECTED_CPU_INT_MIN <= (sint32)eIrqNumber);
    DevAssert((sint32)eIrqNumber <= INTCTRL_IP_DIRECTED_CPU_INT_MAX);
#endif

    uint32 irqId = (uint32)eIrqNumber - (uint32)INTCTRL_IP_DIRECTED_CPU_INT_MIN;
    uint32 core;
    uint32 target;

    if (eCpuTarget == INTCTRL_IP_TARGET_OTHERS)
    {
        for (core = 0U; core < INTCTRL_IP_MSI_CORE_CNT; core++)
        {
            /* Generate a Directed CPU Interrupt to every other core */
            if (core != (MSCM_CPXNUM_CPN_MASK & (IP_MSCM->CPXNUM)))
            {
                MSCM_IRCPnIRx->IRCPnIRx[core][irqId].IGR = 0x1U;
            }
        }
    }
    else
    {
        if (eCpuTarget == INTCTRL_IP_TARGET_SELF)
        {
            target = MSCM_CPXNUM_CPN_MASK & (IP_MSCM->CPXNUM);
        }
        else
        {
            target = (uint32)eCpuTarget;
        }

        /* Generate Directed CPU Interrupt to target core */
        MSCM_IRCPnIRx->IRCPnIRx[target][irqId].IGR = 0x1U;
    }
}
#endif /* INT_CTRL_IP_MSI_AVAILABLE == STD_ON */

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/





/**
 * @internal
 * @brief         Initializes the configured interrupts at interrupt controller level.
 * @implements    IntCtrl_Ip_Init_Activity
 */
IntCtrl_Ip_StatusType IntCtrl_Ip_Init(const IntCtrl_Ip_CtrlConfigType *pIntCtrlCtrlConfig)
{
#if (INT_CTRL_IP_DEV_ERROR_DETECT == STD_ON)
    DevAssert(pIntCtrlCtrlConfig != NULL_PTR);
    DevAssert(pIntCtrlCtrlConfig->u32ConfigIrqCount <= INT_CTRL_IP_IRQ_COUNT);
#endif
    uint32 irqIdx;
    for (irqIdx = 0; irqIdx < pIntCtrlCtrlConfig->u32ConfigIrqCount; irqIdx++)
    {
        IntCtrl_Ip_SetPriority(pIntCtrlCtrlConfig->aIrqConfig[irqIdx].eIrqNumber,
                               pIntCtrlCtrlConfig->aIrqConfig[irqIdx].u8IrqPriority);

        if (pIntCtrlCtrlConfig->aIrqConfig[irqIdx].bIrqEnabled)
        {
            IntCtrl_Ip_EnableIrq(pIntCtrlCtrlConfig->aIrqConfig[irqIdx].eIrqNumber);
        }
        else
        {
            IntCtrl_Ip_DisableIrq(pIntCtrlCtrlConfig->aIrqConfig[irqIdx].eIrqNumber);
        }
    }

    return INTCTRL_IP_STATUS_SUCCESS;
}

#if (INT_CTRL_IP_MSCM_SYSTEM_INTERRUPT_ROUTER == STD_ON)
/**
 * @internal
 * @brief         Initializes the configured routing interrupts.
 * @implements    IntCtrl_Ip_ConfigIrqRouting_Activity
 */
IntCtrl_Ip_StatusType IntCtrl_Ip_ConfigIrqRouting(const IntCtrl_Ip_GlobalRouteConfigType *routeConfig)
{
#if (INT_CTRL_IP_DEV_ERROR_DETECT == STD_ON)
    DevAssert(routeConfig != NULL_PTR);
    DevAssert(routeConfig->u32ConfigIrqCount <= INT_CTRL_IP_IRQ_COUNT);
#endif
    uint32 irqIdx;
    for (irqIdx = 0; irqIdx < routeConfig->u32ConfigIrqCount; irqIdx++)
    {
#if (INT_CTRL_IP_ROUTING_CONTROL_REGISTER == STD_ON)        
        /* Configure routing */
        IntCtrl_Ip_SetTargetCores(routeConfig->aIrqConfig[irqIdx].eIrqNumber,
                                  routeConfig->aIrqConfig[irqIdx].u8TargetCores);
#endif                                  
        /* Install the configured handler */
        IntCtrl_Ip_InstallHandler(routeConfig->aIrqConfig[irqIdx].eIrqNumber,
                                  routeConfig->aIrqConfig[irqIdx].pfHandler,
                                  NULL_PTR);
    }
    return INTCTRL_IP_STATUS_SUCCESS;
}
#endif

/**
 * @internal
 * @brief         Installs a handler for an IRQ.
 * @implements    IntCtrl_Ip_InstallHandler_Activity
 */
void IntCtrl_Ip_InstallHandler(IRQn_Type eIrqNumber,
                               const IntCtrl_Ip_IrqHandlerType pfNewHandler,
                               IntCtrl_Ip_IrqHandlerType* const pfOldHandler)
{
    Call_IntCtrl_Ip_InstallHandlerPrivileged(eIrqNumber,pfNewHandler,pfOldHandler);
}

/**
 * @internal
 * @brief         Enables an interrupt request.
 * @implements    IntCtrl_Ip_EnableIrq_Activity
 */
void IntCtrl_Ip_EnableIrq(IRQn_Type eIrqNumber)
{
    Call_IntCtrl_Ip_EnableIrqPrivileged(eIrqNumber);
}

/**
 * @internal
 * @brief         Disables an interrupt request.
 * @implements    IntCtrl_Ip_DisableIrq_Activity
 */
void IntCtrl_Ip_DisableIrq(IRQn_Type eIrqNumber)
{
    Call_IntCtrl_Ip_DisableIrqPrivileged(eIrqNumber);
}

/**
 * @internal
 * @brief         Sets the priority for an interrupt request.
 * @implements    IntCtrl_Ip_SetPriority_Activity
 */
void IntCtrl_Ip_SetPriority(IRQn_Type eIrqNumber, uint8 u8Priority)
{
    Call_IntCtrl_Ip_SetPriorityPrivileged(eIrqNumber,u8Priority);
}

/**
 * @internal
 * @brief         Gets the priority for an interrupt request.
 * @implements    IntCtrl_Ip_GetPriority_Activity
 */
uint8 IntCtrl_Ip_GetPriority(IRQn_Type eIrqNumber)
{
    return (uint8)Call_IntCtrl_Ip_GetPriorityPrivileged(eIrqNumber);
}

/**
 * @internal
 * @brief         Clears the pending flag for an interrupt request.
 * @implements    IntCtrl_Ip_ClearPending_Activity
 */
void IntCtrl_Ip_ClearPending(IRQn_Type eIrqNumber)
{
    Call_IntCtrl_Ip_ClearPendingPrivileged(eIrqNumber);
}

#if (INT_CTRL_IP_CORTEXR == STD_ON)
void IntCtrl_Ip_Group1(IRQn_Type eIrqNumber)
{
    Call_IntCtrl_Ip_Group1Privileged(eIrqNumber);
}

void IntCtrl_Ip_ConfigureSpi(IRQn_Type eIrqNumber, IntCtrl_Ip_TriggerType conf)
{
    Call_IntCtrl_Ip_ConfigureSpiPrivileged(eIrqNumber, conf);
}
#endif

#if (INT_CTRL_IP_CORTEXR == STD_ON)
void IntCtrl_Ip_SetIntTarget(IRQn_Type eIrqNumber, IntCtrl_Ip_Routing_ModeType target)
{
    Call_IntCtrl_Ip_SetIntTargetPrivileged(eIrqNumber, target);
}
#endif /* NT_CTRL_IP_CORTEXR == STD_ON */

#if (INT_CTRL_IP_STANDALONE_APIS == STD_ON)
/**
 * @internal
 * @brief         Sets the pending flag for an interrupt request.
 * @implements    IntCtrl_Ip_SetPending_Activity
 */
void IntCtrl_Ip_SetPending(IRQn_Type eIrqNumber)
{
    Call_IntCtrl_Ip_SetPendingPrivileged(eIrqNumber);
}

/**
 * @internal
 * @brief         Gets the pending flag for an interrupt request.
 * @implements    IntCtrl_Ip_GetPending_Activity
 */
boolean IntCtrl_Ip_GetPending(IRQn_Type eIrqNumber)
{
    return (boolean)Call_IntCtrl_Ip_GetPendingPrivileged(eIrqNumber);
}

/**
 * @internal
 * @brief         Gets the active flag for an interrupt request.
 * @implements    IntCtrl_Ip_GetActive_Activity
 */
#if (INT_CTRL_IP_CORTEXM4 == STD_ON)
boolean IntCtrl_Ip_GetActive(IRQn_Type eIrqNumber)
{
    return (boolean)Call_IntCtrl_Ip_GetActivePrivileged(eIrqNumber);
}
#endif
#endif /* INT_CTRL_IP_STANDALONE_APIS*/

#if ((INT_CTRL_IP_MSCM_SYSTEM_INTERRUPT_ROUTER == STD_ON) && (INT_CTRL_IP_ROUTING_CONTROL_REGISTER == STD_ON))
/**
 * @internal
 * @brief         Sets the target cores for an interrupt request.
 * @implements    IntCtrl_Ip_SetTargetCores_Activity
 */
void IntCtrl_Ip_SetTargetCores(IRQn_Type eIrqNumber, uint8 u8TargetCores)
{
    Call_IntCtrl_Ip_SetTargetCoresPrivileged(eIrqNumber,u8TargetCores);
}
#endif

#if (INT_CTRL_IP_MSI_AVAILABLE == STD_ON)
/**
 * @internal
 * @brief         Clear directed cpu Interrupt interrupt flag.
 * @implements    IntCtrl_Ip_ClearDirectedCpuInterruptPrivileged_Activity
 */
void IntCtrl_Ip_ClearDirectedCpuInterrupt(IRQn_Type eIrqNumber)
{
    Call_IntCtrl_Ip_ClearDirectedCpuInterruptPrivileged(eIrqNumber);
}
/**
 * @internal
 * @brief         Get directed cpu Interrupt interrupt flag.
 * @implements    IntCtrl_Ip_GetDirectedCpuInterrupt_Activity
 */
boolean IntCtrl_Ip_GetDirectedCpuInterrupt(IRQn_Type eIrqNumber)
{
    return Call_IntCtrl_Ip_GetDirectedCpuInterruptPrivileged(eIrqNumber);
}
/**
 * @internal
 * @brief         Generates an interrupt request to a CPU target.
 * @implements    IntCtrl_Ip_GenerateDirectedCpuInterrupt_Activity
 */
void IntCtrl_Ip_GenerateDirectedCpuInterrupt(IRQn_Type eIrqNumber, IntCtrl_Ip_IrqTargetType eCpuTarget)
{
    Call_IntCtrl_Ip_GenerateDirectedCpuInterruptPrivileged(eIrqNumber,eCpuTarget);
}
#endif /* INT_CTRL_IP_MSI_AVAILABLE == STD_ON */

#define PLATFORM_STOP_SEC_CODE
#include "Platform_MemMap.h"

/** @} */
