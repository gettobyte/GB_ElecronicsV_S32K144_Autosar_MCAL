/*
 *  Master main.c
 *
 *  Created on: 09-Mar-2025
 *      Author: Rohan
 */

/* Including necessary configuration files. */
#include "sdk_project_config.h"
#include "freemaster.h"

volatile int exit_code = 0;


int main(void)
{

	int dutyCycle = 0U;

	Clock_Init();
	Port_Init();
	PWM_Init();
	LIN_Init();
	Timer_Init();

    FMSTR_Init();

    for(;;)
    {
    	/* Header API */
//		error = LIN_DRV_MasterSendHeader(INST_LIN2, FRAME_MASTER_RECEIVE_DATA);
//		OSIF_TimeDelay(50);
//
//		FMSTR_Poll();

        /* Increase the brightness */
        for (dutyCycle = 0; dutyCycle < 32768; dutyCycle += 50)
        {
            FTM_DRV_UpdatePwmChannel(INST_FLEXTIMER_PWM_1,
                                     flexTimer_pwm_1_IndependentChannelsConfig[0].hwChannelId,
                                     FTM_PWM_UPDATE_IN_TICKS, (uint16_t)dutyCycle,
                                     0U,
                                     true);
            OSIF_TimeDelay(1);
        }
        OSIF_TimeDelay(100);

        /* Decrease the brightness */
        for (dutyCycle = 32768; dutyCycle > 0; dutyCycle -= 50)
        {
            FTM_DRV_UpdatePwmChannel(INST_FLEXTIMER_PWM_1,
                                     flexTimer_pwm_1_IndependentChannelsConfig[0].hwChannelId,
                                     FTM_PWM_UPDATE_IN_TICKS, (uint16_t)dutyCycle,
                                     0U,
                                     true);
            OSIF_TimeDelay(1);
        }
        OSIF_TimeDelay(100);

        /* Increase the brightness */
        for (dutyCycle = 0; dutyCycle < 32768; dutyCycle += 50)
        {
            FTM_DRV_UpdatePwmChannel(INST_FLEXTIMER_PWM_1,
                                     flexTimer_pwm_1_IndependentChannelsConfig[1].hwChannelId,
                                     FTM_PWM_UPDATE_IN_TICKS, (uint16_t)dutyCycle,
                                     0U,
                                     true);
            OSIF_TimeDelay(1);
        }
        OSIF_TimeDelay(100);

        /* Decrease the brightness */
        for (dutyCycle = 32768; dutyCycle > 0; dutyCycle -= 50)
        {
            FTM_DRV_UpdatePwmChannel(INST_FLEXTIMER_PWM_1,
                                     flexTimer_pwm_1_IndependentChannelsConfig[1].hwChannelId,
                                     FTM_PWM_UPDATE_IN_TICKS, (uint16_t)dutyCycle,
                                     0U,
                                     true);
            OSIF_TimeDelay(1);
        }
        OSIF_TimeDelay(100);

        /* Increase the brightness */
        for (dutyCycle = 0; dutyCycle < 32768; dutyCycle += 50)
        {
            FTM_DRV_UpdatePwmChannel(INST_FLEXTIMER_PWM_1,
                                     flexTimer_pwm_1_IndependentChannelsConfig[2].hwChannelId,
                                     FTM_PWM_UPDATE_IN_TICKS, (uint16_t)dutyCycle,
                                     0U,
                                     true);
            OSIF_TimeDelay(1);
        }
        OSIF_TimeDelay(100);

        /* Decrease the brightness */
        for (dutyCycle = 32768; dutyCycle > 0; dutyCycle -= 50)
        {
            FTM_DRV_UpdatePwmChannel(INST_FLEXTIMER_PWM_1,
                                     flexTimer_pwm_1_IndependentChannelsConfig[2].hwChannelId,
                                     FTM_PWM_UPDATE_IN_TICKS, (uint16_t)dutyCycle,
                                     0U,
                                     true);
            OSIF_TimeDelay(1);
        }
        OSIF_TimeDelay(100);
//        if ( RxBuff1[0] < 50 )
//        {
//            /* Turn off all LEDs */
//            PINS_DRV_WritePin(LED_GPIO_PORT, PORT_LED1_INDEX, 1U);
//            PINS_DRV_WritePin(LED_GPIO_PORT, PORT_LED0_INDEX, 1U);
//            PINS_DRV_WritePin(LED_GPIO_PORT, PORT_LED2_INDEX, 1U);
//        }
//
//        else if (RxBuff1[0] <= 100)
//        {
//            /* Turn on Green LED */
//            PINS_DRV_WritePin(LED_GPIO_PORT, PORT_LED2_INDEX, 0U);
//            /* Turn off Red LED */
//            PINS_DRV_WritePin(LED_GPIO_PORT, PORT_LED1_INDEX, 1U);
//            /* Turn off Blue LED */
//            PINS_DRV_WritePin(LED_GPIO_PORT, PORT_LED0_INDEX, 1U);
//        }
//
//        else if (RxBuff1[0] <= 175)
//        {
//            /* Turn off Green LED */
//            PINS_DRV_WritePin(LED_GPIO_PORT, PORT_LED2_INDEX, 1U);
//            /* Turn off Red LED */
//            PINS_DRV_WritePin(LED_GPIO_PORT, PORT_LED1_INDEX, 1U);
//            /* Turn on Blue LED */
//            PINS_DRV_WritePin(LED_GPIO_PORT, PORT_LED0_INDEX, 0U);
//        }
//
//        else if (RxBuff1[0] <= 255)
//        {
//            /* Turn off Green LED */
//            PINS_DRV_WritePin(LED_GPIO_PORT, PORT_LED2_INDEX, 1U);
//            /* Turn on Red LED */
//            PINS_DRV_WritePin(LED_GPIO_PORT, PORT_LED1_INDEX, 0U);
//            /* Turn off Blue LED */
//            PINS_DRV_WritePin(LED_GPIO_PORT, PORT_LED0_INDEX, 1U);
//        }
//        else
//        {
//
//        }

        if(exit_code != 0)
        {
            break;
        }
    }
    return exit_code;
}
