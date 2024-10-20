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
	//Temporary variable for storing the AT Command
	char output[100];

	// Format the command in the "AT+CWJAP=\"SSID\",\"PASSWORD\"" format
	int len = snprintf(output, 100, "AT+CWJAP=\"%s\",\"%s\"\r\n", SSID, Password);

	// Clear any remaining characters in the buffer
	memset(output + len, '\0', sizeof(output) - len);

	/*=================================AT Command Transmitter===================================*/

	Uart_SyncSend(LPUART0_CHANNEL_INDEX, (uint8_t *) output, strlen(output), TIMEOUT);

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
	//Temporary variable for storing the AT Command
	char output[100];

	// Format the command in the "AT+CWJAP=\"SSID\",\"PASSWORD\"" format
	int len = snprintf(output, 100, "AT+CWJAP=\"%s\",\"%s\",%d\r\n", connection_type, thingspeak_url, port_number);

	// Clear any remaining characters in the buffer
	memset(output + len, '\0', sizeof(output) - len);
	/*=================================AT Command Transmitter===================================*/

	Uart_SyncSend(LPUART0_CHANNEL_INDEX, (uint8_t *) output, strlen(output), TIMEOUT);

	/*==========================================================================================*/

	testDelay(15000000);
}


void AT_sendData(int value)
{
	//Temporary variable for storing the AT Command
	char output[100];
	//Store your data to be transmitted
	int field_value = value;

	// Format the command in the "AT+CWJAP=\"SSID\",\"PASSWORD\"" format
	int len = snprintf(output, sizeof(output),"GET /update?api_key=%s&field1=%d", api_key, field_value);

	// Clear any remaining characters in the buffer
	memset(output + len, '\0', sizeof(output) - len);
	/*=================================AT Command Transmitter===================================*/

	Uart_SyncSend(LPUART0_CHANNEL_INDEX, (uint8_t *) send_data, strlen(send_data), TIMEOUT);

	testDelay(15000000);

	Uart_SyncSend(LPUART0_CHANNEL_INDEX, (uint8_t *) output, strlen(output), TIMEOUT);

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
