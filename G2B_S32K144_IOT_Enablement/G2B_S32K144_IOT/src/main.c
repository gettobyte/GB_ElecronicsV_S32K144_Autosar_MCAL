/* Including necessary configuration files. */
#include "Mcal.h"
#include "Mcu.h"
#include "Uart.h"
#include "Platform.h"
#include "Port.h"
#include "string.h"


/* User includes */
#define test_command "AT"
#define command_end "/n/r"
#define RX_BUFFER_SIZE 256
#define TIMEOUT 5000
#define LPUART0_CHANNEL_INDEX 0

volatile int exit_code = 0;
volatile uint8_t rxBuffer[RX_BUFFER_SIZE];
/*=================Function Prototyping===================*/

	void mcu_init();
	void port_init();
	void irq_init();
	void uart_init();
	void sendATcommand();
	void receiveResponse();

/*========================================================*/

/*=================Function Prototyping===================*/
/*========================================================*/

/*=================Function Prototyping===================*/
/*========================================================*/

/*=================Function Prototyping===================*/
/*========================================================*/

/*=================Function Prototyping===================*/
/*========================================================*/

/*=================Function Prototyping===================*/
/*========================================================*/

/*=================Function Prototyping===================*/
/*========================================================*/
int main(void)
{
	mcu_init();
	port_init();
	irq_init();
	uart_init();
    for(;;)
    {


        if(exit_code != 0)
        {
            break;
        }
    }
    return exit_code;
}


void mcu_init(void){

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

}

void port_init(void){

	/*-------------------------------Port Configuration-----------------------*/

		Port_Init(NULL_PTR);

	/*------------------------------------------------------------------------*/

}

void irq_init(void){

	/*----------------------------Platform Configuration----------------------*/

	    /* Initialize IRQs */
	    Platform_Init(NULL_PTR);
	    Platform_InstallIrqHandler(LPUART0_RxTx_IRQn, LPUART_UART_IP_0_IRQHandler, NULL_PTR);

	/*------------------------------------------------------------------------*/

}

void uart_init(void){

	/*-------------------------------UART Configuration-----------------------*/

		Uart_Init(NULL_PTR);

	/*------------------------------------------------------------------------*/

}

void sendATcommand(void){

	Uart_SyncSend(LPUART0_CHANNEL_INDEX, (uint8_t *) test_command, strlen(test_command), TIMEOUT);
	Uart_SyncSend(LPUART0_CHANNEL_INDEX, (uint8_t *) command_end, strlen(command_end), TIMEOUT);

}

void receiveResponse(void){



}
