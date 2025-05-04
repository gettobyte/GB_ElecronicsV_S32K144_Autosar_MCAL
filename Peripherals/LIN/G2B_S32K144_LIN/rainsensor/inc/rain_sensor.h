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
 * @brief LIN Frame ID used by master to receive data from the slave node.
 */
#define FRAME_MASTER_RECEIVE_DATA     (59U)

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
#define TIMEOUT                       (500U)


/**
 * @brief Tracks the number of timer overflows.
 *        Used to measure extended durations or timeouts.
 */
extern uint16_t timerOverflowInterruptCount;

/**
 * @brief Buffer to hold received LIN data (8 bytes max typical in LIN).
 */
extern uint8_t RxBuff1[8];

/**
 * @brief Buffer to hold transmit LIN data (8 bytes max typical in LIN).
 */
extern uint8_t TxBuff1[8];

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
void packControlMessage(uint8_t msg[3],
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
void unpackControlMessage(const uint8_t msg[3],
                          uint8_t *calibrationMode,
                          uint8_t *devMode,
                          uint8_t *wipeMode,
                          uint8_t *rainInfo,
                          uint8_t *sensorFail,
                          uint8_t *splash,
                          uint8_t *wipeReq,
                          uint8_t *responseError);

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

/*!
 * @brief Packs control data and transmits it over LIN
 *
 * @param instance         LIN driver instance
 * @param frameId          LIN frame ID to transmit
 * @param calibrationMode  2-bit field
 * @param devMode          3-bit field
 * @param wipeMode         4-bit field
 * @param rainInfo         8-bit field
 * @param sensorFail       2-bit field
 * @param splash           2-bit field
 * @param wipeReq          2-bit field
 * @param responseError    1-bit field
 *
 * @return Status code from last API call (LIN status)
 */
status_t LIN_Transmit_Data(uint32_t instance,
					   uint8_t frameID,
					   uint8_t calibrationMode,
					   uint8_t wipeMode,
					   uint8_t rainInfo,
					   uint8_t sensorFail,
					   uint8_t splash,
					   uint8_t wipeReq,
					   uint8_t responseError);

#endif /* INC_RAIN_SENSOR_H_ */
