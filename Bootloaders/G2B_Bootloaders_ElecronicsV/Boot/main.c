/************************************************************************************//**
* \file         Demo/ARMCM4_S32K14_S32K144EVB_GCC/Boot/main.c
* \brief        Bootloader application source file.
* \ingroup      Boot_ARMCM4_S32K14_S32K144EVB_GCC
* \internal
*----------------------------------------------------------------------------------------
*                          C O P Y R I G H T
*----------------------------------------------------------------------------------------
*   Copyright (c) 2020  by Feaser    http://www.feaser.com    All rights reserved
*
*----------------------------------------------------------------------------------------
*                            L I C E N S E
*----------------------------------------------------------------------------------------
* This file is part of OpenBLT. OpenBLT is free software: you can redistribute it and/or
* modify it under the terms of the GNU General Public License as published by the Free
* Software Foundation, either version 3 of the License, or (at your option) any later
* version.
*
* OpenBLT is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
* without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
* PURPOSE. See the GNU General Public License for more details.
*
* You have received a copy of the GNU General Public License along with OpenBLT. It
* should be located in ".\Doc\license.html". If not, contact Feaser to obtain a copy.
*
* \endinternal
****************************************************************************************/

/****************************************************************************************
* Include files
****************************************************************************************/
#include "boot.h"                                /* bootloader generic header          */
#include "device_registers.h"                    /* device registers                   */
#include "system_S32K144.h"                      /* device sconfiguration              */

#define TIMEOUT_MS 5000U
#define APP_START_ADDRESS1	0x4000

char * test;
/****************************************************************************************
* Function prototypes
****************************************************************************************/
static void Init(void);
static void SystemClockConfig(void);
void JumpToUserApplication1( unsigned int userSP,  unsigned int userStartup);
void JumpToUserApplication2( unsigned int userSP,  unsigned int userStartup);
//bool CommandCheck(char *data);

/************************************************************************************//**
** \brief     This is the entry point for the bootloader application and is called
**            by the reset interrupt vector after the C-startup routines executed.
** \return    Program return code.
**
****************************************************************************************/
int main(void)
{
  /* Initialize the microcontroller. */
  Init();
  /* Initialize the bootloader. */
  BootInit();

  /* Start the infinite program loop. */
  uint32_t start_time = TimerGet(); // Get the start time
  uint32_t current_time = 0;        // Get the current time
  while((current_time - start_time) < TIMEOUT_MS)
  {
	  BootTask();
	  current_time = TimerGet();    // Reset timer for next check
  }

  JumpToUserApplication1(*((uint32_t*)APP_START_ADDRESS1), *((uint32_t*)(APP_START_ADDRESS1 + 4)));

  /* Program should never get here. */
  while (1);

  return 0;
} /*** end of main ***/


/***************************************************************************************
** \brief     Initializes the microcontroller.
** \return    none.
**
****************************************************************************************/
static void Init(void)
{
  /* Configure the system clock. */
  SystemClockConfig();
  /* Enable the peripheral clock for the ports that are used. */
  PCC->PCCn[PCC_PORTA_INDEX] |= PCC_PCCn_CGC_MASK;
  PCC->PCCn[PCC_PORTC_INDEX] |= PCC_PCCn_CGC_MASK;
  PCC->PCCn[PCC_PORTD_INDEX] |= PCC_PCCn_CGC_MASK;
  PCC->PCCn[PCC_PORTE_INDEX] |= PCC_PCCn_CGC_MASK;
  /* Configure SW1 (PC12) GPIO pin */
  /* Input GPIO pin configuration. PC12 = GPIO, MUX = ALT1. */
  PORTC->PCR[12] |= PORT_PCR_MUX(1);
  /* Disable pull device, as SW1 already has a pull down resistor on the board. */
  PORTC->PCR[12] &= ~PORT_PCR_PE(1);
  /* Configure and enable Port C pin 12 GPIO as digital input */
  PTC->PDDR &= ~GPIO_PDDR_PDD(1 << 12U);
  PTC->PIDR &= ~GPIO_PIDR_PID(1 << 12U);
  /* Configure SW2 (PC13) GPIO pin */
  /* Input GPIO pin configuration. PC13 = GPIO, MUX = ALT1. */
  PORTC->PCR[13] |= PORT_PCR_MUX(1);
  /* Disable pull device, as SW2 already has a pull down resistor on the board. */
  PORTC->PCR[13] &= ~PORT_PCR_PE(1);
  /* Configure and enable Port C pin 12 GPIO as digital input */
  PTC->PDDR &= ~GPIO_PDDR_PDD(1 << 13U);
  PTC->PIDR &= ~GPIO_PIDR_PID(1 << 13U);
#if (BOOT_COM_RS232_ENABLE > 0)
  /* UART RX GPIO pin configuration. PC8 = UART1 RX, MUX = ALT2. */
  PORTC->PCR[8] |= PORT_PCR_MUX(2);
  /* UART TX GPIO pin configuration. PC9 = UART1 TX, MUX = ALT2. */
  PORTC->PCR[9] |= PORT_PCR_MUX(2);
#endif
#if (BOOT_COM_CAN_ENABLE > 0)
  /* CAN RX GPIO pin configuration. PA12 = CAN1 RX, MUX = ALT3. */
  PORTA->PCR[12] |= PORT_PCR_MUX(3);
  /* CAN TX GPIO pin configuration. PA13 = CAN1 TX, MUX = ALT3. */
  PORTA->PCR[13] |= PORT_PCR_MUX(3);
#endif
  /* UART RX GPIO pin configuration. PC6 = UART1 RX, MUX = ALT2. */
  PORTC->PCR[6] |= PORT_PCR_MUX(2);
  /* UART TX GPIO pin configuration. PC7 = UART1 TX, MUX = ALT2. */
  PORTC->PCR[7] |= PORT_PCR_MUX(2);
} /*** end of Init ***/


/************************************************************************************//**
** \brief     System Clock Configuration. This code was derived from a S32 Design Studio
**            example program. It uses the 8 MHz external crystal as a source for the
**            PLL and configures the normal RUN mode for the following clock settings:
**            - SPLL_CLK     = 160    MHz
**            - CORE_CLK     =  80    MHz
**            - SYS_CLK      =  80    MHz
**            - BUS_CLK      =  40    MHz
**            - FLASH_CLK    =  26.67 MHz
**            - SIRCDIV1_CLK =   8    MHz
**            - SIRCDIV2_CLK =   8    MHz
** \return    none.
**
****************************************************************************************/
static void SystemClockConfig(void)
{
  /* --------- SOSC Initialization (8 MHz) ------------------------------------------- */
  /* SOSCDIV1 & SOSCDIV2 =1: divide by 1. */
//  SCG->SOSCDIV = SCG_SOSCDIV_SOSCDIV1(1) | SCG_SOSCDIV_SOSCDIV2(1);
  /* Range=2: Medium freq (SOSC betw 1MHz-8MHz).
   * HGO=0:   Config xtal osc for low power.
   * EREFS=1: Input is external XTAL.
   */
//  SCG->SOSCCFG = SCG_SOSCCFG_RANGE(2) | SCG_SOSCCFG_EREFS_MASK;
  /* Ensure SOSCCSR unlocked. */
//  while (SCG->SOSCCSR & SCG_SOSCCSR_LK_MASK)
//  {
//    ;
//  }
  /* LK=0:          SOSCCSR can be written.
   * SOSCCMRE=0:    OSC CLK monitor IRQ if enabled.
   * SOSCCM=0:      OSC CLK monitor disabled.
   * SOSCERCLKEN=0: Sys OSC 3V ERCLK output clk disabled.
   * SOSCLPEN=0:    Sys OSC disabled in VLP modes.
   * SOSCSTEN=0:    Sys OSC disabled in Stop modes.
   * SOSCEN=1:      Enable oscillator.
   */
//  SCG->SOSCCSR = SCG_SOSCCSR_SOSCEN_MASK;
  /* Wait for system OSC clock to become valid. */
//  while (!(SCG->SOSCCSR & SCG_SOSCCSR_SOSCVLD_MASK))
//  {
//    ;
//  }

  /* --------- SPLL Initialization (160 MHz) ----------------------------------------- */
  /* Ensure SPLLCSR is unlocked. */
//  while (SCG->SPLLCSR & SCG_SPLLCSR_LK_MASK)
//  {
//    ;
//  }
  /* SPLLEN=0: SPLL is disabled (default). */
//  SCG->SPLLCSR &= ~SCG_SPLLCSR_SPLLEN_MASK;
  /* SPLLDIV1 divide by 2 and SPLLDIV2 divide by 4. */
//  SCG->SPLLDIV |= SCG_SPLLDIV_SPLLDIV1(2) | SCG_SPLLDIV_SPLLDIV2(3);
  /* PREDIV=0: Divide SOSC_CLK by 0+1=1.
   * MULT=24:  Multiply sys pll by 4+24=40.
   * SPLL_CLK = 8MHz / 1 * 40 / 2 = 160 MHz.
   */
//  SCG->SPLLCFG = SCG_SPLLCFG_MULT(24);
  /* Ensure SPLLCSR is unlocked. */
//  while (SCG->SPLLCSR & SCG_SPLLCSR_LK_MASK)
//  {
//    ;
//  }
  /* LK=0:        SPLLCSR can be written.
   * SPLLCMRE=0:  SPLL CLK monitor IRQ if enabled.
   * SPLLCM=0:    SPLL CLK monitor disabled.
   * SPLLSTEN=0:  SPLL disabled in Stop modes.
   * SPLLEN=1:    Enable SPLL.
   */
//  SCG->SPLLCSR |= SCG_SPLLCSR_SPLLEN_MASK;
  /* Wait for SPLL to become valid. */
//  while (!(SCG->SPLLCSR & SCG_SPLLCSR_SPLLVLD_MASK))
//  {
//    ;
//  }

  /* --------- SIRC Initialization --------------------------------------------------- */
  /* Slow IRC is enabled with high range (8 MHz) in reset.
   */
//	.sircConfig =
//	        {
//	            .initialize = true,
//	            .enableInStop = true,                 /* Enable SIRC in stop mode */
//	            .enableInLowPower = true,             /* Enable SIRC in low power mode */
//	            .locked = false,                      /* unlocked */
//	            .range = SCG_SIRC_RANGE_HIGH,         /* Slow IRC high range clock (8 MHz) */
//	            .div1 = SCG_ASYNC_CLOCK_DIV_BY_1,     /* Slow IRC Clock Divider 1: divided by 1 */
//	            .div2 = SCG_ASYNC_CLOCK_DIV_BY_1,     /* Slow IRC Clock Divider 3: divided by 1 */
//	        }
  SCG->SIRCDIV = SCG_SIRCDIV_SIRCDIV1(1U) | SCG_SIRCDIV_SIRCDIV2(1U);
  SCG->SIRCCFG = SCG_SIRCCFG_RANGE(1U);
  SCG->SIRCCSR = SCG_SIRCCSR_SIRCEN(1U)   |
          	  	 SCG_SIRCCSR_SIRCSTEN(1U) |
				 SCG_SIRCCSR_SIRCLPEN(1U) |
				 SCG_SIRCCSR_LK(0U);
  while (!(SCG->SIRCCSR & SCG_SIRCCSR_SIRCVLD_MASK))
  {
    ;
  }

  /* --------- FIRC Initialization --------------------------------------------------- */
  /* Fast IRC is enabled with high range (48 MHz) in reset.
   */
//  .fircConfig =
//          {
//              .initialize = true,
//              .regulator = true,                    /* FIRC regulator is enabled */
//              .locked = false,                      /* unlocked */
//              .range = SCG_FIRC_RANGE_48M,           /*!< RANGE      */
//              .div1 = SCG_ASYNC_CLOCK_DIV_BY_1,     /* Fast IRC Clock Divider 1: divided by 1 */
//              .div2 = SCG_ASYNC_CLOCK_DIV_BY_1,     /* Fast IRC Clock Divider 3: divided by 1 */
//          }
  SCG->FIRCDIV = SCG_FIRCDIV_FIRCDIV1(1U) | SCG_FIRCDIV_FIRCDIV2(1U);
  SCG->SIRCCFG = SCG_FIRCCFG_RANGE(0U);
  SCG->SIRCCSR = SCG_FIRCCSR_FIRCEN(1U)                             |
           	   	 SCG_FIRCCSR_FIRCREGOFF(1U)    |
				 SCG_FIRCCSR_LK(0U);
  while (!(SCG->FIRCCSR & SCG_FIRCCSR_FIRCVLD_MASK))
  {
    ;
  }

  /* --------- Change to normal RUN mode with 48MHz FIRC ------------------ */
  /* Note that flash memory should not be programmed or erased when the microcontroller
   * is operating in VLPr or HSRUN mode. Therefore normal RUN mode is configured.
   */
  /* Select FIRC as clock source.
   * DIVCORE=1, div. by 2: Core clock = 160/2 MHz = 80 MHz.
   * DIVBUS=1, div. by 2: bus clock = 40 MHz.
   * DIVSLOW=2, div. by 2: SCG slow, flash clock= 26 2/3 MHz.
   */
   SCG->RCCR= SCG_RCCR_SCS(3) | SCG_RCCR_DIVCORE(0) | SCG_RCCR_DIVBUS(0) |
              SCG_RCCR_DIVSLOW(1);
   /* Wait until system clock source is FIRC. */
   while (((SCG->CSR & SCG_CSR_SCS_MASK) >> SCG_CSR_SCS_SHIFT ) != 3U)
   {
     ;
   }
   /* Evaluate the clock register settings and calculates the current core clock. This
    * function must be called when the clock manager component is not used.
    */
   SystemCoreClockUpdate();
} /*** end of SystemClockConfig ***/



/**
 * Used to jump to the entry point of the user application
 * The Vector table of the user application must be located at 0x4000
 * */
void JumpToUserApplication1( unsigned int userSP,  unsigned int userStartup)
{
	/* Check if Entry address is erased and return if erased */
	if(userSP == 0xFFFFFFFF){
		return;
	}

	/* Set up stack pointer */
	__asm("msr msp, r0");
	__asm("msr psp, r0");

	/* Relocate vector table */
	S32_SCB->VTOR = (uint32_t)APP_START_ADDRESS1;

	/* Jump to application PC (r1) */
	__asm("mov pc, r1");
}

/*
 * Used for verification of incoming signal
 */
//bool CommandCheck(char *data)
//{
//	bool result = false;
//
//	  /* Check if a new byte was received by means of the RDRF-bit. */
//	  if (((LPUART1->STAT & LPUART_STAT_RDRF_MASK) >> LPUART_STAT_RDRF_SHIFT) != 0U)
//	  {
//	    /* Retrieve and store the newly received byte. */
//	    *data = LPUART1->DATA;
//	    /* Update the result. */
//	    result = true;
//	  }
//
//	  /* Give the result back to the caller. */
//	  return result;
//}
/*********************************** end of main.c *************************************/
