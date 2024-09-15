/*
 * RX_Polling.c
 *
 *  Created on: 14-Sep-2024
 *      Author: Rohan
 */

/* Including necessary configuration files. */
#include "Mcal.h"
#include "Mcu.h"
#include "Port.h"
#include "Uart.h"
#include "Lpuart_Uart_Ip_Irq.h"
#include "string.h"

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

	/*-------------------------------UART Configuration-----------------------*/

		Uart_Init(NULL_PTR);

	/*------------------------------------------------------------------------*/


	for(;;)
    {
		// TIMEOUT parameter is configured in microseconds. Therefore, always
		// convert your required time with respect to microseconds.
		// 1 second = 1000000(TIMEOUT)
		// As well as, 3rd parameter defines the length of input data
		// Either data fits in given length or timeout gets reached
		Uart_SyncReceive(0, (uint8_t *)rx_Buffer, 5, 10000000);
        if(exit_code != 0)
        {
            break;
        }
    }
    return exit_code;
}
