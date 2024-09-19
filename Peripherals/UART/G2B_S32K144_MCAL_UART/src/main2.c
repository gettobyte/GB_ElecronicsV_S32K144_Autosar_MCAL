/*
 *  RX_Interrupt.c
 *
 *  Created on: 16-Sep-2024
 *      Author: Rohan
 */

/* Including necessary configuration files. */
#include "Mcal.h"
#include "Mcu.h"
#include "Port.h"
#include "Uart.h"
#include "Platform.h"
#include "Lpuart_Uart_Ip_Irq.h"
#include "string.h"
#include "Uart_Ipw_Types.h"


/* User includes */
volatile int exit_code = 0;
#define buffer_size 100
uint8 rx_Buffer[buffer_size];


int main(void)
{
	/*-------------------Clock_Configuration via MCU Peripheral---------------*/

	Std_ReturnType Mcu_Status;
	Mcu_Init(&Mcu_Config_BOARD_InitPeripherals);

	Mcu_Status = Mcu_InitClock(McuClockSettingConfig_0);

	#if (MCU_NO_PLL == STD_OFF)

		while ( MCU_PLL_LOCKED != Mcu_GetPllStatus() )
		{
			/* Busy wait until the System PLL is locked */
		}

		Mcu_DistributePllClock();
	#endif

	Mcu_SetMode(McuModeSettingConf_0);

	Mcu_Init(&Mcu_Config_BOARD_InitPeripherals);

	/*------------------------------------------------------------------------*/

	/*-------------------------------Port Configuration-----------------------*/

		Port_Init(NULL_PTR);

	/*------------------------------------------------------------------------*/

	/*---------------------------Platform Configuration-----------------------*
	 * This configuration is usually used for enabling interrupt mechanism in any peripheral*/

		Platform_Init(NULL_PTR);
		Platform_InstallIrqHandler(LPUART1_RxTx_IRQn, LPUART_UART_IP_1_IRQHandler, NULL_PTR);

	/*------------------------------------------------------------------------*/

	/*-------------------------------UART Configuration-----------------------*/

		Uart_Init(NULL_PTR);

	/*------------------------------------------------------------------------*/


	Uart_AsyncReceive(0, (uint8_t *)rx_Buffer, 5);
	for(;;)
    {
        if(exit_code != 0)
        {
            break;
        }
    }
    return exit_code;
}

