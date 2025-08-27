/*
 * rainsensor.c
 *
 *  Created on: 02-May-2025
 *      Author: Rohan Gettobyte
 */

#include "rain_sensor.h"

// Timer overflow count for tracking extended time intervals
uint16_t timerOverflowInterruptCount = 0U;

// Master LIN receive buffer (5 bytes)
uint8_t MASTER_RxBuff1[5];

// Master LIN transmit buffer (5 bytes)
uint8_t MASTER_TxBuff1[5];

// Slave LIN receive buffer (3 bytes)
uint8_t SLAVE_RxBuff1[3];

// Slave LIN transmit buffer (3 bytes)
uint8_t SLAVE_TxBuff1[3];

// Error status returned from various SDK drivers
status_t error;

// FTM (FlexTimer Module) driver state structure
ftm_state_t ftmStateStruct;

// Boolean Variable Flag for checking whether LIN is asked to wakeup
volatile bool wakeupSignalFlag = false;

/*!
 * @brief Get elapsed time since last call in nanoseconds
 * @param[out] ns Number of nanoseconds elapsed
 * @return Always returns 0 (dummy return)
 */
uint32_t G2B_TimeIntervalCallback0(uint32_t *ns)
{
    static uint32_t previousCountValue = 0UL;
    uint32_t counterValue = LPTMR_DRV_GetCounterValueByCount(INST_LPTMR_1);

    *ns = ((counterValue + timerOverflowInterruptCount * TIMER_COMPARE_VAL - previousCountValue)
           * 1000U) / TIMER_TICKS_1US;

    timerOverflowInterruptCount = 0UL;
    previousCountValue = counterValue;

    return 0UL;
}

/*!
 * @brief Get elapsed time since last call in nanoseconds
 * @param[out] ns Number of nanoseconds elapsed
 * @return Always returns 0 (dummy return)
 */
uint32_t G2B_TimeIntervalCallback1(uint32_t *ns)
{
    static uint32_t previousCountValue = 0UL;
    uint32_t counterValue = LPTMR_DRV_GetCounterValueByCount(INST_LPTMR_1);

    *ns = ((counterValue + timerOverflowInterruptCount * TIMER_COMPARE_VAL - previousCountValue)
           * 1000U) / TIMER_TICKS_1US;

    timerOverflowInterruptCount = 0UL;
    previousCountValue = counterValue;

    return 0UL;
}

/*!
 * @brief LPTMR ISR to handle LIN timeout service and overflow count
 */
void G2B_LPTMR_ISR(void)
{
    LIN_DRV_TimeoutService(INST_LIN2);          // Handle timeout logic
    timerOverflowInterruptCount++;              // Track overflows
    LPTMR_DRV_ClearCompareFlag(INST_LPTMR_1);   // Clear interrupt flag
}

/*!
 * @brief LIN communication event handler for Master
 * @param instance LIN driver instance
 * @param lin1_State Pointer to LIN state structure
 * @return Previous registered callback
 */
lin_callback_t G2B_Master_CallbackHandler(uint32_t instance, lin_state_t * lin1_State)
{
    lin_callback_t callbackCurrent = lin1_State->Callback;
    (void)instance;

    switch (lin1_State->currentEventId)
    {
        case LIN_PID_OK:
            LIN_DRV_SetTimeoutCounter(INST_LIN2, TIMEOUT);

            if(FRAME_MASTER_SEND_DATA == lin1_State->currentId)
            {
            	LIN_DRV_SendFrameData(instance, MASTER_TxBuff1, sizeof(MASTER_TxBuff1));
            }

            if(FRAME_MASTER_RECIEVE_DATA == lin1_State->currentId)
			{
            	LIN_DRV_ReceiveFrameData(instance, SLAVE_RxBuff1, sizeof(SLAVE_RxBuff1));
			}

            break;

        case LIN_PID_ERROR:
        	/* Go to idle mode */
			LIN_DRV_GoToSleepMode(INST_LIN2);
			DisableOutputDrain1();
			DisableOutputDrain2();
			LED_Dimmer1(0);
			LED_Dimmer2(0);
			break;
        case LIN_TX_COMPLETED:
        case LIN_RX_COMPLETED:
        	/* Go to idle mode */
        	LIN_DRV_GotoIdleState(INST_LIN2);
        	break;
        case LIN_CHECKSUM_ERROR:
        case LIN_READBACK_ERROR:
        case LIN_FRAME_ERROR:
        case LIN_RECV_BREAK_FIELD_OK:
            LIN_DRV_SetTimeoutCounter(INST_LIN2, TIMEOUT);
            break;
        case LIN_WAKEUP_SIGNAL:
            /* Set wakeup signal flag */
            wakeupSignalFlag = true;
            break;
        case LIN_SYNC_ERROR:
        case LIN_BAUDRATE_ADJUSTED:
        case LIN_NO_EVENT:
        case LIN_SYNC_OK:
        default:
            break;
    }
    return callbackCurrent;
}

/*!
 * @brief LIN communication event handler for Slave
 * @param instance LIN driver instance
 * @param lin1_State Pointer to LIN state structure
 * @return Previous registered callback
 */
lin_callback_t G2B_Slave_CallbackHandler(uint32_t instance, lin_state_t * lin1_State)
{
    lin_callback_t callbackCurrent;
    callbackCurrent = lin1_State->Callback;
    (void)instance;

    switch (lin1_State->currentEventId)
    {
        case LIN_PID_OK:
            /* Set timeout */
            LIN_DRV_SetTimeoutCounter(INST_LIN2, TIMEOUT);

        	if(FRAME_MASTER_SEND_DATA == lin1_State->currentId)
        	{
        		LIN_DRV_ReceiveFrameData(INST_LIN2, MASTER_RxBuff1, sizeof(MASTER_RxBuff1));
        	}

        	if(FRAME_MASTER_RECIEVE_DATA == lin1_State->currentId)
        	{
        		LIN_DRV_SendFrameData(INST_LIN2, SLAVE_TxBuff1, sizeof(SLAVE_TxBuff1));
        	}

            break;
        case LIN_PID_ERROR:
        	/* Go to idle mode */
			LIN_DRV_GoToSleepMode(INST_LIN2);
			DisableOutputDrain1();
			DisableOutputDrain2();
			LED_Dimmer1(0);
			LED_Dimmer2(0);
			break;
        case LIN_TX_COMPLETED:
        case LIN_RX_COMPLETED:
        	/* Go to idle mode */
			LIN_DRV_GoToSleepMode(INST_LIN2);
			break;
        case LIN_CHECKSUM_ERROR:
        case LIN_READBACK_ERROR:
        case LIN_FRAME_ERROR:
        case LIN_RECV_BREAK_FIELD_OK:
            /* Set timeout */
            LIN_DRV_SetTimeoutCounter(INST_LIN2, TIMEOUT);
            break;
        case LIN_WAKEUP_SIGNAL:
        case LIN_SYNC_ERROR:
        case LIN_BAUDRATE_ADJUSTED:
        case LIN_NO_EVENT:
        case LIN_SYNC_OK:
        default:
        /* do nothing */
            break;
    }
    return callbackCurrent;
}

/*!
 * @brief Slave Packs control message into 3-byte array for transmission
 */
void SLAVE_packControlMessage(uint8_t msg[3],
                        uint8_t calibrationMode,
                        uint8_t devMode,
                        uint8_t wipeMode,
                        uint8_t rainInfo,
                        uint8_t sensorFail,
                        uint8_t splash,
                        uint8_t wipeReq,
                        uint8_t responseError)
{
    uint32_t packed = 0;

    packed |= ((calibrationMode & 0x03) << 22);
    packed |= ((devMode         & 0x07) << 19);
    packed |= ((wipeMode        & 0x0F) << 15);
    packed |= ((rainInfo        & 0xFF) << 7);
    packed |= ((sensorFail      & 0x03) << 5);
    packed |= ((splash          & 0x03) << 3);
    packed |= ((wipeReq         & 0x03) << 1);
    packed |= ((responseError   & 0x01) << 0);

    msg[0] = (packed >> 16) & 0xFF;
    msg[1] = (packed >> 8)  & 0xFF;
    msg[2] = (packed >> 0)  & 0xFF;
}

/*!
 * @brief Slave Packs control message into 3-byte array for transmission
 */
void SLAVE_unpackControlMessage(const uint8_t msg[3],
                          uint8_t *calibrationMode,
                          uint8_t *devMode,
                          uint8_t *wipeMode,
                          uint8_t *rainInfo,
                          uint8_t *sensorFail,
                          uint8_t *splash,
                          uint8_t *wipeReq,
                          uint8_t *responseError)
{
    uint32_t packed = (msg[0] << 16) | (msg[1] << 8) | msg[2];

    *calibrationMode = (packed >> 22) & 0x03;
    *devMode         = (packed >> 19) & 0x07;
    *wipeMode        = (packed >> 15) & 0x0F;
    *rainInfo        = (packed >> 7)  & 0xFF;
    *sensorFail      = (packed >> 5)  & 0x03;
    *splash          = (packed >> 3)  & 0x03;
    *wipeReq         = (packed >> 1)  & 0x03;
    *responseError   = (packed >> 0)  & 0x01;
}

/*!
 * @brief Master Packs control message into 5-byte array for transmission
 */
void MASTER_packControl_Command(uint8_t packed_data[5],
							  uint8_t vehicle_speed,
							  uint8_t ambient_temp,
							  uint8_t sensitivity,
							  uint8_t vehicle_type,
							  uint8_t windscreen_type,
							  uint8_t wash_wipe,
							  uint8_t wiper_parkpos,
							  uint8_t wiping_comm,
							  uint8_t dev_mode)
{
    packed_data[0] = vehicle_speed;
    packed_data[1] = ambient_temp;
    packed_data[2] = ((sensitivity & 0x0F) << 4) | (vehicle_type & 0x0F);
    packed_data[3] = ((windscreen_type & 0x0F) << 4) |
                     ((wash_wipe & 0x03) << 2) |
                     (wiper_parkpos & 0x03);
    packed_data[4] = ((wiping_comm & 0x03) << 6) |
                     ((dev_mode & 0x0F) << 2);  // Reserved 2 LSBs set to 0
}

/*!
 * @brief Master Packs control message into 5-byte array for transmission
 */
void MASTER_unpackControl_Command(const uint8_t packed_data[5],
									  uint8_t *vehicle_speed,
									  uint8_t *ambient_temp,
									  uint8_t *sensitivity,
									  uint8_t *vehicle_type,
									  uint8_t *windscreen_type,
									  uint8_t *wash_wipe,
									  uint8_t *wiper_parkpos,
									  uint8_t *wiping_comm,
									  uint8_t *dev_mode)
{
    *vehicle_speed    = packed_data[0];
    *ambient_temp     = packed_data[1];
    *sensitivity      = (packed_data[2] >> 4) & 0x0F;
    *vehicle_type     = packed_data[2] & 0x0F;
    *windscreen_type  = (packed_data[3] >> 4) & 0x0F;
    *wash_wipe        = (packed_data[3] >> 2) & 0x03;
    *wiper_parkpos    = packed_data[3] & 0x03;
    *wiping_comm      = (packed_data[4] >> 6) & 0x03;
    *dev_mode         = (packed_data[4] >> 2) & 0x0F;
}

void Clock_Init(void)
{
    /* Initialize and configure clocks
     *  -   Setup system clocks, dividers
     *  -   Configure LPUART clock, GPIO clock
     *  -   see clock manager component for more details
     */
    error = CLOCK_SYS_Init(g_clockManConfigsArr, CLOCK_MANAGER_CONFIG_CNT,
                        g_clockManCallbacksArr, CLOCK_MANAGER_CALLBACK_CNT);
    error = CLOCK_SYS_UpdateConfiguration(0U, CLOCK_MANAGER_POLICY_AGREEMENT);
}

void Port_Init(void)
{
    /* Initialize pins
     *  -   Init LPUART and GPIO pins
     *  -   See PinSettings component for more info
     */
    error = PINS_DRV_Init(NUM_OF_CONFIGURED_PINS0, g_pin_mux_InitConfigArr0);

    /* Set LIN transceiver sleep pin direction */
    PINS_DRV_SetPinsDirection(PTE, (0x1u << (9UL)));
    /* Wake up LIN transceiver */
    PINS_DRV_SetPins(PTE, (0x1u << (9UL)));
}

void Timer_Init(void)
{
    /* Initialize LPTMR */

	// LPTMR Init for LIN Timeout Service
    LPTMR_DRV_Init(INST_LPTMR_1, &lptmr_1_config0, false);
    // ISR Installer for LIN Timeout Service
    INT_SYS_InstallHandler(LPTMR0_IRQn, G2B_LPTMR_ISR, (isr_t *)NULL);
    // IRQ Enable
    INT_SYS_EnableIRQ(LPTMR0_IRQn);

    // Starting the counter
    LPTMR_DRV_StartCounter(INST_LPTMR_1);
}

void PWM_Init(void)
{
    /* Initialize FTM instance */
    FTM_DRV_Init(INST_FLEXTIMER_PWM_1, &flexTimer_pwm_1_InitConfig, &ftmStateStruct);

    /* Initialize FTM PWM */
    FTM_DRV_InitPwm(INST_FLEXTIMER_PWM_1, &flexTimer_pwm_1_PwmConfig);
}

void LIN_Master_Init(void)
{
    /* Initialize LIN network interface */
    error = LIN_DRV_Init(INST_LIN2, &lin2_MasterConfig, &lin2_State);
    /* Install callback function */
    LIN_DRV_InstallCallback(INST_LIN2, (lin_callback_t)G2B_Master_CallbackHandler);
}

void LIN_Slave_Init(void)
{
    /* Initialize LIN network interface */
    error = LIN_DRV_Init(INST_LIN2, &lin2_SlaveConfig, &lin2_State);
    /* Install callback function */
    LIN_DRV_InstallCallback(INST_LIN2, (lin_callback_t)G2B_Slave_CallbackHandler);
}

/**
 * @brief Initializes and calibrates the ADC.
 *
 * This function sets up the ADC converter using the configuration structure
 * defined in adc_driver_cfg.h and triggers the auto-calibration sequence.
 */
void ADC_Init(void)
{
	ADC_DRV_ConfigConverter(INST_ADC_CONFIG_1, &adc_config_1_ConvConfig0);
	ADC_DRV_AutoCalibration(INST_ADC_CONFIG_1);
}


/**
 * @brief Triggers an ADC conversion and returns the scaled value.
 *
 * Configures the ADC channel, triggers a conversion, waits for completion,
 * retrieves the raw ADC value (8-bit), and scales it from 0–255 to 0–100.
 *
 * @return uint8_t Scaled ADC value in the range 0–100.
 */
uint8_t ADC_Conv(void)
{
	uint16_t adcRawValue;

	/* Configure ADC channel and software trigger a conversion */
	ADC_DRV_ConfigChan(INST_ADC_CONFIG_1, 0U, &adc_config_1_ChnConfig0);
	/* Wait for the conversion to be done */
	ADC_DRV_WaitConvDone(INST_ADC_CONFIG_1);
	/* Store the channel result into a local variable */
	ADC_DRV_GetChanResult(INST_ADC_CONFIG_1, 0U, &adcRawValue);

    // Scale the 8-bit result (0–255) to range 0–100
    uint8_t scaledValue = (adcRawValue * 100U) / 255U;

	return scaledValue;
}

void LED_Dimmer1(uint8_t dutyCycle)
{
	if (dutyCycle > 100)
	{
		dutyCycle = 100;  // Clamp to max 100%
	}

	// Scaling the input to internal reference of duty cycle
	uint16_t converted_dutyCycle = ((dutyCycle * 0x8000) / 100);

	// PWM Duty Cycle Updated
	FTM_DRV_UpdatePwmChannel(INST_FLEXTIMER_PWM_1,
	                         flexTimer_pwm_1_IndependentChannelsConfig[0].hwChannelId,
							 FTM_PWM_UPDATE_IN_DUTY_CYCLE,
							 converted_dutyCycle, 0U,
	                         true);
}

void LED_Dimmer2(uint8_t dutyCycle)
{
	if (dutyCycle > 100)
	{
		dutyCycle = 100;  // Clamp to max 100%
	}

	uint16_t converted_dutyCycle = ((dutyCycle * 0x8000) / 100);

	FTM_DRV_UpdatePwmChannel(INST_FLEXTIMER_PWM_1,
	                         flexTimer_pwm_1_IndependentChannelsConfig[1].hwChannelId,
							 FTM_PWM_UPDATE_IN_DUTY_CYCLE,
							 converted_dutyCycle, 0U,
	                         true);
}

void LED_SetFrequency(uint32_t frequencyHz)
{
	FTM_DRV_UpdatePwmPeriod(INST_FLEXTIMER_PWM_1, FTM_PWM_UPDATE_IN_DUTY_CYCLE,
							frequencyHz, true);
}

void EnableOutputDrain1(void)
{
	PINS_DRV_SetPins(PTB, (0x1u << (0UL)));
}

void EnableOutputDrain2(void)
{
	PINS_DRV_SetPins(PTB, (0x1u << (1UL)));
}

void DisableOutputDrain1(void)
{
	PINS_DRV_ClearPins(PTB, (0x1u << (0UL)));
}

void DisableOutputDrain2(void)
{
	PINS_DRV_ClearPins(PTB, (0x1u << (1UL)));
}

/**
 * @brief Prepares and transmits control command (Message ID 59) from master to slave.
 *
 * @param vehicle_speed 8-bit vehicle speed.
 * @param ambient_temp 8-bit ambient temperature.
 * @param sensitivity 4-bit sensitivity value.
 * @param vehicle_type 4-bit vehicle type value.
 * @param windscreen_type 4-bit windscreen type value.
 * @param wash_wipe 2-bit wash wipe value.
 * @param wiper_parkpos 2-bit wiper park position.
 * @param wiping_comm 2-bit wiping command.
 * @param dev_mode 4-bit developer mode value.
 */
status_t LIN_MASTER_Transmit_Data(uint8_t vehicle_speed,
	    						  uint8_t ambient_temp,
								  uint8_t sensitivity,
								  uint8_t vehicle_type,
								  uint8_t windscreen_type,
								  uint8_t wash_wipe,
								  uint8_t wiper_parkpos,
								  uint8_t wiping_comm)
// add the DEV module parameter with passing in API
{
	// Master Pack control message fields into a 5-byte LIN data array
	MASTER_packControl_Command(MASTER_TxBuff1, vehicle_speed, ambient_temp,
							   sensitivity, vehicle_type, windscreen_type,
							   wash_wipe, wiper_parkpos, wiping_comm, 0U);

	// Send LIN frame header with specified frame ID
	status_t headerStatus = LIN_DRV_MasterSendHeader(INST_LIN2, 59U);

	return headerStatus;
}

/*!
 * @brief Master sends the header for receiving the data from Slave node
 */
status_t LIN_MASTER_Receive_Data(void)
{
	// Send LIN frame header with specified frame ID
	status_t headerStatus = LIN_DRV_MasterSendHeader(INST_LIN2, 58U);

	return headerStatus;
}
