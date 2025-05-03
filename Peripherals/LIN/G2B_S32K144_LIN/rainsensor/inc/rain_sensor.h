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

extern uint16_t timerOverflowInterruptCount;
extern uint8_t RxBuff1[8];
extern status_t error;
extern ftm_state_t ftmStateStruct;

void Clock_Init(void);
void Port_Init(void);
void Timer_Init(void);
void PWM_Init(void);
void LIN_Init(void);
void LED_Dimmer1(uint8_t dutyCycle);
void LED_Dimmer2(uint8_t dutyCycle);
void LED_SetFrequency(uint32_t frequencyHz);

#endif /* INC_RAIN_SENSOR_H_ */
