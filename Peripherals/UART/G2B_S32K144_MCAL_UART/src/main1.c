/*
 * TX_Polling.c
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
#define WELCOME_MSG_1 "Hello, This message is sent via Uart!\n"

Std_ReturnType x;
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
		/* DON'T REDUCE TIMEOUT VALUE BELOW 3000 as API wont be able to sent complete *
		 * data and transmitted data length is directly dependent on TIMEOUT value. *
		 * More the length  =  MORE TIMEOUT you have to increase to avoid missing data */
		Uart_SyncSend(0, (uint8_t *)WELCOME_MSG_1, strlen(WELCOME_MSG_1), 5000);

        if(exit_code != 0)
        {
            break;
        }
    }
    return exit_code;
}
