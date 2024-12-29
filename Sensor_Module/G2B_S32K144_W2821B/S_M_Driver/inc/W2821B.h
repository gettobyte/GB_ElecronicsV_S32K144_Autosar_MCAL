/*
 * W2821B.h
 *
 *  Created on: 25-Dec-2024
 *      Author: Rohan
 */

#ifndef W2821B_H_
#define W2821B_H_

#include "Pwm.h"

void TestDelay(uint32 delay);

uint16_t PWM_DutyCycle(uint8_t DutyCycle_Percentage);

void Green_Control(void);

void Red_Control(void);

void Blue_Control(void);

#endif /* W2821B_H_ */
