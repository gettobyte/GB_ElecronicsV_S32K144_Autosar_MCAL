/*
 * rain_sensor.h
 *
 *  Created on: 02-May-2025
 *      Author: singh
 */

#ifndef INC_RAIN_SENSOR_H_
#define INC_RAIN_SENSOR_H_

#include "sdk_project_config.h"

#define FRAME_MASTER_RECEIVE_DATA     (59U)
#define TIMER_COMPARE_VAL             (uint16_t)(2000U)
#define TIMER_TICKS_1US               (uint16_t)(4U)
#define TIMEOUT                       (500U)
#define LED_GPIO_PORT             (PTD)
#define PORT_LED0_INDEX           (0u)
#define PORT_LED1_INDEX           (15u)
#define PORT_LED2_INDEX           (16u)

uint16_t timerOverflowInterruptCount = 0U;
uint8_t RxBuff1[8];
status_t error;
ftm_state_t ftmStateStruct;

void Clock_Init(void);
void Port_Init(void);
void Timer_Init(void);
void PWM_Init(void);
void LIN_Init(void);


#endif /* INC_RAIN_SENSOR_H_ */
