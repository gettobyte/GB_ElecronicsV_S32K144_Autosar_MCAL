/*
 * ESP8266_ThingSpeak.c
 *
 *  Created on: 18-Oct-2024
 *      Author: singh
 */

#include "ESP8266_ThingSpeak.h"


void AT_reset(void)
{
	/*=================================AT Command Transmitter===================================*/

	Uart_SyncSend(LPUART0_CHANNEL_INDEX, (uint8_t *) reset_command, strlen(reset_command), TIMEOUT);

	/*==========================================================================================*/

	testDelay(15000000);
}


void AT_set_WiFiMODE(void)
{
	/*=================================AT Command Transmitter===================================*/

	Uart_SyncSend(LPUART0_CHANNEL_INDEX, (uint8_t *) wifi_mode_command, strlen(wifi_mode_command), TIMEOUT);

	/*==========================================================================================*/

	testDelay(10000000);
}


void AT_connectWiFi(void)
{
	/*=================================AT Command Transmitter===================================*/

	Uart_SyncSend(LPUART0_CHANNEL_INDEX, (uint8_t *) wifi_credential, strlen(wifi_credential), TIMEOUT);

	/*==========================================================================================*/

	testDelay(15000000);
}


void AT_singleConnection(void)
{
	/*=================================AT Command Transmitter===================================*/

	Uart_SyncSend(LPUART0_CHANNEL_INDEX, (uint8_t *) single_connection, strlen(single_connection), TIMEOUT);

	/*==========================================================================================*/

	testDelay(15000000);
}


void AT_connect_ThingSpeak(void)
{
	/*=================================AT Command Transmitter===================================*/

	Uart_SyncSend(LPUART0_CHANNEL_INDEX, (uint8_t *) connection_start, strlen(connection_start), TIMEOUT);

	/*==========================================================================================*/

	testDelay(15000000);
}


void AT_sendData(void)
{
	/*=================================AT Command Transmitter===================================*/

	Uart_SyncSend(LPUART0_CHANNEL_INDEX, (uint8_t *) send_data, strlen(send_data), TIMEOUT);

	testDelay(15000000);

	Uart_SyncSend(LPUART0_CHANNEL_INDEX, (uint8_t *) transmitted_data, strlen(transmitted_data), TIMEOUT);

	testDelay(15000000);

	Uart_SyncSend(LPUART0_CHANNEL_INDEX, (uint8_t *) connection_close, strlen(connection_close), TIMEOUT);

	testDelay(15000000);

	/*==========================================================================================*/

}

/*=================Function Prototyping for delay generation===================*/
void testDelay(int32_t microseconds)
{
	while(microseconds > 0)
	{
		microseconds--;
	}
}
/*=============================================================================*/
