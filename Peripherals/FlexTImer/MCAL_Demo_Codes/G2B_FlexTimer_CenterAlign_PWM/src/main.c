/* Including necessary configuration files. */
#include "Mcal.h"
#include "Clock_Ip.h"
#include "Port.h"
#include "Pwm.h"
#include "SG90_Servo.h"


int main(void)
{
	/********************************Clock Configuration for MCU****************************/
	Clock_Ip_StatusType clockStatus;
	clockStatus = Clock_Ip_Init(&Mcu_aClockConfigPB_BOARD_InitPeripherals[0]);
	while (clockStatus != CLOCK_IP_SUCCESS)
	{
		clockStatus = Clock_Ip_Init(&Mcu_aClockConfigPB_BOARD_InitPeripherals[0]);
	}
	/* Busy wait until the System PLL is locked */
	while (CLOCK_IP_PLL_LOCKED != Clock_Ip_GetPllStatus());
	Clock_Ip_DistributePll();
	/***************************************************************************************/

	/* Initialize all pins using the Port driver */
	Port_Init(NULL_PTR);

	/* Initialize all data structure and function of PWM */
	Pwm_Init(&Pwm_Config_BOARD_InitPeripherals);

	/*Sets the our desired frequency 50Hz for Servo*/
	Pwm_SetPeriodAndDuty(0,40000,pwm_duty_cycle(50));
	TestDelay(700000);

	/* As our Servo, responds only from 0.5ms(2.5% Duty Cycle)
	 * to 2.5ms(12.5% Duty Cycle), we create a up-down counter
	 * for simulation
	 */
	double count = 2.5;

	/*
	 * Direction = 0(UP) means the counter goes from 2.5 to 12.5
	 * whereas
	 * Direction = 1(DOWN) means the counter goes from 12.5 to 2.5
	 */
	uint8 direction = 0;

	/*Main Loop*/
	for (;;) {

		if(direction == 0)
		{
			if(count <= 12.5){
				Pwm_SetDutyCycle(0, pwm_duty_cycle(count));
				TestDelay(700000);
				count += 0.5;
			}
			else{
				direction = 1;
			}
		}

		else if(direction == 1)
		{
			if(count >= 2.5){
				Pwm_SetDutyCycle(0, pwm_duty_cycle(count));
				TestDelay(700000);
				count -= 0.5;
			}
			else{
				direction = 0;
			}
		}
	}
}
