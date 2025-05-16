/*
 * rain_sensor.h
 *
 *  Created on: 02-May-2025
 *      Author: Rohan Gettobyte
 */

#ifndef INC_RAIN_SENSOR_H_
#define INC_RAIN_SENSOR_H_

#include "sdk_project_config.h"

/**
 * @brief LIN Frame ID used by master to send data for the slave node.
 */
#define FRAME_MASTER_SEND_DATA     (59U)

/**
 * @brief LIN Frame ID used by master to receive data from the slave node.
 */
#define FRAME_MASTER_RECIEVE_DATA     (58U)

/**
 * @brief Timer compare value for LPTMR or FTM-based timing.
 *        Used to generate delays or timeouts.
 */
#define TIMER_COMPARE_VAL             ((uint16_t)(2000U))

/**
 * @brief Number of timer ticks for 1 microsecond resolution.
 *        Depends on the system clock (e.g., 4 ticks per 1µs means 4 MHz timer).
 */
#define TIMER_TICKS_1US               ((uint16_t)(4U))

/**
 * @brief General timeout duration used in loops or wait conditions (500 ms or ticks).
 */
#define TIMEOUT                       (5000U)


/**
 * @brief Tracks the number of timer overflows.
 *        Used to measure extended durations or timeouts.
 */
extern uint16_t timerOverflowInterruptCount;

/**
 * @brief Buffer to hold receive data from LIN Master(5 bytes).
 */
extern uint8_t MASTER_RxBuff1[5];

/**
 * @brief Buffer to hold transmit data from LIN Master(5 bytes).
 */
extern uint8_t MASTER_TxBuff1[5];

/**
 * @brief Buffer to hold receive data from LIN Slave(3 bytes).
 */
extern uint8_t SLAVE_RxBuff1[3];

/**
 * @brief Buffer to hold transmit data from LIN Slave(3 bytes).
 */
extern uint8_t SLAVE_TxBuff1[3];

/**
 * @brief Holds the status code of the last driver function (e.g., CLOCK, LIN, PWM).
 *        Used for error checking after initialization or API calls.
 */
extern status_t error;

/**
 * @brief Internal state structure for the FlexTimer Module (FTM).
 *        Passed to driver functions to maintain FTM state context.
 */
extern ftm_state_t ftmStateStruct;

// Boolean Variable Flag for checking whether LIN is asked to wakeup
extern volatile bool wakeupSignalFlag;

// === Control Message: Bit Field Definitions ===
// Byte[0] | Bits 7-6 : CALIBRATION_MODE (2 bits)
//         | Bits 5-3 : DEV_MODE (3 bits) [always 0]
//         | Bits 2-0 : WIPE_MODE[3 MSBs]
// Byte[1] | Bit  7   : WIPE_MODE[LSB]
//         | Bits 6-0 : RAIN_INFORMATION (7 bits)
// Byte[2] | Bits 7-6 : SENSOR_FAILURE (2 bits)
//         | Bits 5-4 : SPLASH (2 bits)
//         | Bits 3-2 : WIPE_REQ (2 bits)
//         | Bit  1   : RESPONSE_ERROR (1 bit)
//         | Bit  0   : Reserved

/**
 * @brief Packs the control fields into a 3-byte message.
 *
 * @param[out] msg 3-byte buffer to hold packed data.
 * @param calibrationMode 2-bit value (0–3)
 * @param devMode         3-bit value (0–7, usually 0)
 * @param wipeMode        4-bit value (0–15)
 * @param rainInfo        8-bit value (0–255)
 * @param sensorFail      2-bit value (0–3)
 * @param splash          2-bit value (0–3)
 * @param wipeReq         2-bit value (0–3)
 * @param responseError   1-bit value (0 or 1)
 */
void SLAVE_packControlMessage(uint8_t msg[3],
                        uint8_t calibrationMode,
                        uint8_t devMode,
                        uint8_t wipeMode,
                        uint8_t rainInfo,
                        uint8_t sensorFail,
                        uint8_t splash,
                        uint8_t wipeReq,
                        uint8_t responseError);

/**
 * @brief Unpacks a 3-byte message into individual control fields.
 *
 * @param[in]  msg           3-byte packed data.
 * @param[out] calibrationMode
 * @param[out] devMode
 * @param[out] wipeMode
 * @param[out] rainInfo
 * @param[out] sensorFail
 * @param[out] splash
 * @param[out] wipeReq
 * @param[out] responseError
 */
void SLAVE_unpackControlMessage(const uint8_t msg[3],
                          uint8_t *calibrationMode,
                          uint8_t *devMode,
                          uint8_t *wipeMode,
                          uint8_t *rainInfo,
                          uint8_t *sensorFail,
                          uint8_t *splash,
                          uint8_t *wipeReq,
                          uint8_t *responseError);

/**
 * @brief Packs the control command parameters into a 5-byte array for LIN transmission (Message ID 59).
 *
 * @param packed_data Pointer to 5-byte array where packed data will be stored.
 * @param vehicle_speed Vehicle speed (8 bits)
 * @param ambient_temp Ambient temperature (8 bits)
 * @param sensitivity Sensitivity setting (4 bits)
 * @param vehicle_type Vehicle type (4 bits)
 * @param windscreen_type Windscreen type (4 bits)
 * @param wash_wipe Wash/wipe command (2 bits)
 * @param wiper_parkpos Wiper park position (2 bits)
 * @param wiping_comm Wiping command (2 bits)
 * @param dev_mode Developer mode (4 bits)
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
								uint8_t dev_mode);

/**
 * @brief Unpacks the 5-byte LIN message (Message ID 59) into individual control command fields.
 *
 * @param packed_data Pointer to 5-byte received data array.
 * @param vehicle_speed Pointer to store vehicle speed (8 bits)
 * @param ambient_temp Pointer to store ambient temperature (8 bits)
 * @param sensitivity Pointer to store sensitivity (4 bits)
 * @param vehicle_type Pointer to store vehicle type (4 bits)
 * @param windscreen_type Pointer to store windscreen type (4 bits)
 * @param wash_wipe Pointer to store wash/wipe command (2 bits)
 * @param wiper_parkpos Pointer to store wiper park position (2 bits)
 * @param wiping_comm Pointer to store wiping command (2 bits)
 * @param dev_mode Pointer to store developer mode (4 bits)
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
										uint8_t *dev_mode);

/**
 * @brief Initializes the system clocks and updates clock configuration.
 *        Sets up the LPUART, GPIO, and other peripheral clocks.
 */
void Clock_Init(void);

/**
 * @brief Configures I/O pins using the PINS driver.
 *        Also sets the LIN transceiver to wake state by controlling sleep pin.
 */
void Port_Init(void);

/**
 * @brief Initializes the LPTMR (Low Power Timer) and sets up its ISR.
 *        Starts the timer for time-based operations.
 */
void Timer_Init(void);

/**
 * @brief Initializes the FlexTimer Module (FTM) for PWM mode.
 *        Also configures initial PWM parameters like channel and mode.
 */
void PWM_Init(void);

/**
 * @brief Initializes the LIN driver for communication as a master node.
 *        Registers the LIN callback handler.
 */
void LIN_Master_Init(void);

/**
 * @brief Initializes the LIN driver for communication as a slave node.
 *        Registers the LIN callback handler.
 */
void LIN_Slave_Init(void);

/**
 * @brief Initializes the ADC module.
 *
 * This function configures the ADC converter with predefined settings
 * and performs auto-calibration to improve accuracy.
 *
 * Must be called before using the ADC to ensure correct operation.
 */
void ADC_Init(void);

/**
 * @brief Performs an ADC conversion and scales the result.
 *
 * Initiates an ADC conversion on the configured channel, waits for
 * completion, retrieves the raw 8-bit result, and scales it to a range of 0–100.
 *
 * @return Scaled ADC value from 0 to 100.
 */
uint8_t ADC_Conv(void);

/**
 * @brief Sets PWM duty cycle (0–100%) for LED channel 1.
 * @param dutyCycle Duty cycle percentage (0–100).
 */
void LED_Dimmer1(uint8_t dutyCycle);

/**
 * @brief Sets PWM duty cycle (0–100%) for LED channel 2.
 * @param dutyCycle Duty cycle percentage (0–100).
 */
void LED_Dimmer2(uint8_t dutyCycle);

/**
 * @brief Changes the frequency of the PWM output in Hz.
 * @param frequencyHz Desired PWM frequency in Hertz.
 */
void LED_SetFrequency(uint32_t frequencyHz);

/**
 * @brief Enables the output drain for channel 1.
 */
void EnableOutputDrain1(void);

/**
 * @brief Enables the output drain for channel 2.
 */
void EnableOutputDrain2(void);

/**
 * @brief Disables the output drain for channel 1.
 */
void DisableOutputDrain1(void);

/**
 * @brief Disables the output drain for channel 2.
 */
void DisableOutputDrain2(void);

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
							  uint8_t wiping_comm);

/*!
 * @brief Master sends the header for receiving the data from Slave node
 */
status_t LIN_MASTER_Receive_Data(void);

#endif /* INC_RAIN_SENSOR_H_ */
