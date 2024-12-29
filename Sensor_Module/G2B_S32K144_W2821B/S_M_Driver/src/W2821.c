/*
 * W2821.c
 *
 *  Created on: 25-Dec-2024
 *      Author: Rohan
 */

#include "W2821B.h"

void TestDelay(uint32 delay)
{
   static volatile uint32 DelayTimer = 0;
   while(DelayTimer<delay)
   {
       DelayTimer++;
   }
   DelayTimer=0;
}

uint16_t PWM_DutyCycle(uint8_t DutyCycle_Percentage)
{
	/*
	 * Duty Cycle variation follow the range of 0x0000 to 0x8000
	 * which is 0 to 32768 in decimal. Therefore this conversion
	 * is important for proper duty cycle adjustment.
	 */
	uint16_t Converted_DutyCycle = ((32768 * DutyCycle_Percentage)/100);
	return (Converted_DutyCycle);
}

