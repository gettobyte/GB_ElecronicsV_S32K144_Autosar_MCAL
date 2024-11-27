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

	/*Main Loop*/
	for (;;) {
		servo_sweep();
	}
}
