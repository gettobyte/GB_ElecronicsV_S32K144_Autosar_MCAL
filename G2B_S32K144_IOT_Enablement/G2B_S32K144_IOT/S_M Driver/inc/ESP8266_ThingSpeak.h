/*
 * ESP8266_ThingSpeak.h
 *
 *  Created on: 18-Oct-2024
 *      Author: singh
 */

#ifndef INC_ESP8266_THINGSPEAK_H_
#define INC_ESP8266_THINGSPEAK_H_

#include "Uart.h"
#include "string.h"

#define TIMEOUT 5000
#define LPUART0_CHANNEL_INDEX 0

#define reset_command "AT+RST\r\n"
#define wifi_mode_command "AT+CWMODE=1\r\n"
#define SSID "Excitel_Rohan"
#define Password "zxcvbnm1234"
#define wifi_credential "AT+CWJAP=SSID,Password"
#define single_connection "AT+CIPMUX=0"
#define connection_type "TCP"
#define thingspeak_url "api.thingspeak.com"
#define connection_start "AT+CIPSTART=connection_type,thingspeak_url,80"
#define send_data "AT+CIPSEND=51"
#define transmitted_data "GET /update?api_key=ELCZ6SJ1WE4DVRHZ&field1=143"
#define connection_close "AT+CIPCLOSE"

void testDelay(int32_t microseconds);
void AT_reset(void);
void AT_set_WiFiMODE(void);
void AT_connectWiFi(void);
void AT_singleConnection(void);
void AT_connect_ThingSpeak(void);
void AT_sendData(void);

#endif /* INC_ESP8266_THINGSPEAK_H_ */
