/*
 * SG90_Servo.c
 *
 *  Created on: 17-Oct-2024
 *      Author: singh
 */

#include "SG90_Servo.h"

void TestDelay(uint32_t delay)
{
   static volatile uint32_t DelayTimer = 0;
   while(DelayTimer<delay)
   {
       DelayTimer++;
   }
   DelayTimer=0;
}

uint16_t pwm_duty_cycle(uint8_t duty_cycle_percent)
{

	uint16_t duty_cycle = ((32768 * duty_cycle_percent)/100);

	return (duty_cycle);

}

void servo_setPosition(int32_t degree)
{
	float32 x = (degree / 180);
	float32 y = x * 10;
	float32 z = y + 2.5;
//	float32 output = (((degree / 180) * 10) + 2.5);

	Pwm_SetDutyCycle(0, pwm_duty_cycle(z));

	TestDelay(10000);
}

void servo_sweep(void)
{
	Pwm_SetDutyCycle(0, pwm_duty_cycle(Servo_minimum));

	/* As our Servo, responds only from 0.5ms(2.5% Duty Cycle)
	 * to 2.5ms(12.5% Duty Cycle), we create a up-down counter
	 * for simulation
	 */
	float32 currentValue = Servo_minimum;
	/*
	 * Direction = 0(UP) means the counter goes from 2.5 to 12.5
	 * whereas
	 * Direction = 1(DOWN) means the counter goes from 12.5 to 2.5
	 */
	int8_t direction = 0;

	float32 step = 0.1;
	while(1)
	{
		if(direction == 0)
			{
				if(currentValue <= 12.5)
				{
					Pwm_SetDutyCycle(0, pwm_duty_cycle(currentValue));
					TestDelay(10000);
					currentValue += step;
				}
				else
				{
					direction = 1;
				}
			}

			else if(direction == 1)
			{
				if(currentValue >= 2.5)
				{
					Pwm_SetDutyCycle(0, pwm_duty_cycle(currentValue));
					TestDelay(10000);
					currentValue -= step;
				}
				else
				{
					direction = 0;
				}
			}
	}
}

void servo_sweep_with_step(float32 steps)
{
	Pwm_SetDutyCycle(0, pwm_duty_cycle(Servo_minimum));

		/* As our Servo, responds only from 0.5ms(2.5% Duty Cycle)
		 * to 2.5ms(12.5% Duty Cycle), we create a up-down counter
		 * for simulation
		 */
		float32 currentValue = Servo_minimum;
		/*
		 * Direction = 0(UP) means the counter goes from 2.5 to 12.5
		 * whereas
		 * Direction = 1(DOWN) means the counter goes from 12.5 to 2.5
		 */
		int8_t direction = 0;

		float32 step = steps;
		while(1)
		{
			if(direction == 0)
				{
					if(currentValue <= 12.5)
					{
						Pwm_SetDutyCycle(0, pwm_duty_cycle(currentValue));
						TestDelay(100000);
						currentValue += step;
					}
					else
					{
						direction = 1;
					}
				}

				else if(direction == 1)
				{
					if(currentValue >= 2.5)
					{
						Pwm_SetDutyCycle(0, pwm_duty_cycle(currentValue));
						TestDelay(100000);
						currentValue -= step;
					}
					else
					{
						direction = 0;
					}
				}
		}
}

