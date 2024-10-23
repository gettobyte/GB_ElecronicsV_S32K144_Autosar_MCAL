/* Including necessary configuration files. */
#include "Mcal.h"
#include "Mcu.h"
#include "Uart.h"
#include "Platform.h"
#include "Port.h"
#include "Lpuart_Uart_Ip_Irq.h"
#include "ESP8266_ThingSpeak.h"

extern void LPUART_UART_IP_0_IRQHandler(void);
volatile int exit_code = 0;

/*=================Function Prototyping===================*/

	void mcu_init(void);
	void port_init(void);
	void irq_init(void);
	void uart_init(void);
	void sendATcommand(void);
	void receiveResponse(void);
	void echoCallback(void);
	void byteToHex(uint8_t byte, char* hexStr);
	void uint8ArrayToString(uint8_t* arr, int length, char* str);
	void uint8Array_Clear(void);

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

	AT_init();
	AT_receiveResponse();

	AT_reset();

	AT_set_WiFiMODE();

	AT_connectWiFi();

	AT_singleConnection();

	AT_connect_ThingSpeak();

	AT_sendData(91);

	testDelay(8000000);

    for(;;)
    {

        if(exit_code != 0)
        {
            break;
        }
    }
    return exit_code;
}


void mcu_init(void)
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

}

void port_init(void)
{

	/*-------------------------------Port Configuration-----------------------*/

		Port_Init(NULL_PTR);

	/*------------------------------------------------------------------------*/

}

void irq_init(void)
{

	/*----------------------------Platform Configuration----------------------*/

	    /* Initialize IRQs */
	    Platform_Init(NULL_PTR);
	    Platform_InstallIrqHandler(LPUART0_RxTx_IRQn, LPUART_UART_IP_0_IRQHandler, NULL_PTR);

	/*------------------------------------------------------------------------*/

}

