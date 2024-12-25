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
*   @implements startup.c_Artifact
*/
/**
 * @page misra_violations MISRA-C:2012 violations
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 8.9, An object should be defined at block
 * scope if its identifier only appears in a single function.
 * All variables with this problem are defined in the linker files.
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 8.11, When an array with external linkage
 * is declared, its size should be explicitly specified.
 * The size of the arrays can not be explicitly determined.
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 11.4, A conversion should not be performed
 * between a pointer to object and an integer type.
 * The cast is required to initialize a pointer with an unsigned int define,
 * representing an address.
 *
 * @section [global]
 * Violates MISRA 2012 Required Rule 11.6, A cast shall not be performed
 * between pointer to void and an arithmetic type.
 * The cast is required to initialize a pointer with an unsigned int define,
 * representing an address.
 *
 * @section [global]
 * Violates MISRA 2012 Required Rule 2.1, A project shall not contain unreachable
 * code.
 * The condition compares two address defined in linker files that can be different.
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 8.7, External could be made static.
 * Function is defined for usage by application code.
 *
 * @section [global]
 * Violates MISRA 2012 Required Rule 1.3, Unusual pointer cast (incompatible
 * indirect types).
 * The cast is required to cast the address of linker section to initialization layout.
 *
 * @section [global]
 * Violates MISRA 2012 Required Rule 11.3, Cast performed between a pointer
 * to object type and a pointer to a different object type.
 * The cast is required to cast the address of linker section to initialization layout.
 *
 * @section [global]
 * Violates MISRA 2012 Required Rule 11.8, Attempt to cast away const/volatile from a pointer or reference.
 * The cast is required to cast the initialization layout structure.
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 18.4, Pointer arithmetic other than array indexing used.
 * This is required to increment the source address.
 *
 */
#include "Std_Types.h"

/*******************************************************************************
 * Definitions
 *******************************************************************************/
 /*!
 * @brief Defines the init table layout
 */
typedef struct
{
    uint8 * ram_start; /*!< Start address of section in RAM */
    uint8 * rom_start; /*!< Start address of section in ROM */
    uint8 * rom_end;   /*!< End address of section in ROM */
} Sys_CopyLayoutType;

/*!
 * @brief Defines the zero table layout
 */
typedef struct
{
    uint8 * ram_start; /*!< Start address of section in RAM */
    uint8 * ram_end;   /*!< End address of section in RAM */
} Sys_ZeroLayoutType;

extern uint32 __INIT_TABLE[];
extern uint32 __ZERO_TABLE[];
#if (defined(__ARMCC_VERSION))
    extern uint32 __VECTOR_RAM;
#else
    extern uint32 __VECTOR_RAM[];
#endif

/*******************************************************************************
 * Static Variables
 ******************************************************************************/

/*******************************************************************************
 * Code
 ******************************************************************************/
/*FUNCTION**********************************************************************
 *
 * Function Name : init_data_bss
 * Description   : Make necessary initializations for RAM.
 * - Copy the vector table from ROM to RAM.
 * - Copy initialized data from ROM to RAM.
 * - Copy code that should reside in RAM from ROM
 * - Clear the zero-initialized data section.
 *
 * Tool Chains:
 *   __GNUC__           : GNU Compiler Collection
 *   __ghs__            : Green Hills ARM Compiler
 *   __ICCARM__         : IAR ARM Compiler
 *   __DCC__            : Wind River Diab Compiler
 *   __ARMCC_VERSION    : ARMC Compiler
 *
 * Implements    : init_data_bss_Activity
 *END**************************************************************************/
void init_data_bss(void);

void init_data_bss(void)
{
    const Sys_CopyLayoutType * copy_layout;
    const Sys_ZeroLayoutType * zero_layout;
    const uint8 * rom;
    uint8 * ram;
    uint32 len = 0U;
    uint32 size = 0U;
    uint32 i = 0U;
    uint32 j = 0U;

    const uint32 * initTable_Ptr = (uint32 *)__INIT_TABLE;
    const uint32 * zeroTable_Ptr = (uint32*)__ZERO_TABLE;

    /* Copy initialized table */
    len = *initTable_Ptr;
    initTable_Ptr++;
    copy_layout = (const Sys_CopyLayoutType *)initTable_Ptr;
    for(i = 0; i < len; i++)
    {
        rom = copy_layout[i].rom_start;
        ram = copy_layout[i].ram_start;
        size = (uint32)copy_layout[i].rom_end - (uint32)copy_layout[i].rom_start;

        for(j = 0UL; j < size; j++)
        {
            ram[j] = rom[j];
        }
    }
    
    /* Clear zero table */
    len = *zeroTable_Ptr;
    zeroTable_Ptr++;
    zero_layout = (const Sys_ZeroLayoutType *)zeroTable_Ptr;
    for(i = 0; i < len; i++)
    {
        ram = zero_layout[i].ram_start;
        size = (uint32)zero_layout[i].ram_end - (uint32)zero_layout[i].ram_start;

        for(j = 0UL; j < size; j++)
        {
            ram[j] = 0U;
        }
    }
}
/*******************************************************************************
 * EOF
 ******************************************************************************/
