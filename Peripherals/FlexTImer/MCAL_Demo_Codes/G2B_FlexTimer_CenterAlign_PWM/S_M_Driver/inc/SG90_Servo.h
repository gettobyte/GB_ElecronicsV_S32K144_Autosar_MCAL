/*
 * SG90_Servo.h
 *
 *  Created on: 17-Oct-2024
 *      Author: singh
 */

#ifndef INC_SG90_SERVO_H_
#define INC_SG90_SERVO_H_

#include "stdint.h"
#include "Std_Types.h"
#include "Pwm.h"

#define Servo_minimum 2.5
#define Servo_maximum 12.5

void TestDelay(uint32 delay);

uint16_t pwm_duty_cycle(uint8_t duty_cycle_percent);

void servo_setPosition(int32_t degree);

void servo_sweep(void);

void servo_sweep_with_step(float32 steps);

#endif /* INC_SG90_SERVO_H_ */
