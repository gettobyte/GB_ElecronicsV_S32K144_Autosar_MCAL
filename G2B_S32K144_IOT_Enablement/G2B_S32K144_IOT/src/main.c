/* Including necessary configuration files. */
#include "Mcal.h"
#include "Mcu.h"
#include "Uart.h"
#include "Platform.h"
#include "Port.h"
#include "Lpuart_Uart_Ip_Irq.h"
#include "ESP8266_ThingSpeak.h"

/* User includes */
#define RX_BUFFER_SIZE 512
#define LPUART1_CHANNEL_INDEX 1


extern void LPUART_UART_IP_0_IRQHandler(void);
volatile int exit_code = 0;

// uint8_t array for storing the received data
volatile uint8_t rxBuffer[RX_BUFFER_SIZE];
// Create a char array to store the string (2 chars per byte + null terminator)
char str[RX_BUFFER_SIZE * 2 + 1];
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
	uart_init();
	receiveResponse();

	AT_reset();

	AT_set_WiFiMODE();

	AT_connectWiFi();

	AT_singleConnection();

	AT_connect_ThingSpeak();

	AT_sendData(239);

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

void uart_init(void)
{

	/*-------------------------------UART Configuration-----------------------*/

		Uart_Init(NULL_PTR);

	/*------------------------------------------------------------------------*/

}

void sendATcommand(void)
{
	/*=================================AT Command Transmitter===================================*/

	Uart_SyncSend(LPUART0_CHANNEL_INDEX, (uint8_t *) reset_command, strlen(reset_command), TIMEOUT);

	/*==========================================================================================*/
}

void receiveResponse(void)
{
	/*=================================AT Command Receiver======================================*/

	Uart_AsyncReceive(LPUART0_CHANNEL_INDEX, (uint8_t *) rxBuffer, RX_BUFFER_SIZE);

	/*==========================================================================================*/
}


void echoCallback(void)
{

    // Convert uint8_t array to string
    uint8ArrayToString(rxBuffer, RX_BUFFER_SIZE, str);

    //Transmit the received data to LPUART1
	Uart_SyncSend(LPUART1_CHANNEL_INDEX, (uint8_t *) rxBuffer, strlen(rxBuffer), 10000);

}


/* Helper function to convert a single byte to its hexadecimal representation */
void byteToHex(uint8_t byte, char* hexStr)
{
    char hexDigits[] = "0123456789ABCDEF";

    hexStr[0] = hexDigits[(byte >> 4) & 0x0F]; // Extract high nibble
    hexStr[1] = hexDigits[byte & 0x0F];        // Extract low nibble
}


/* Function to convert uint8_t array to string */
void uint8ArrayToString(uint8_t* arr, int length, char* str)
{
    for (int i = 0; i < length; i++)
    {
        byteToHex(arr[i], &str[i * 2]);  // Convert each byte to 2 hex chars
    }
    str[length * 2] = '\0';  // Null-terminate the string
}


void uint8Array_Clear(void)
{
	// Clear the array using memset
	memset(rxBuffer, 0, sizeof(rxBuffer));  // Set all elements to 0
}
