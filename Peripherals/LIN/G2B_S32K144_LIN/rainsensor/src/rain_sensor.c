/*
 * rainsensor.c
 *
 *  Created on: 02-May-2025
 *      Author: singh
 */

#include "rain_sensor.h"

/*!
 * @brief Callback function to get time interval in nano seconds
 * @param[out] ns - number of nanoseconds passed since the last call of the function
 * @return dummy value
 */
uint32_t G2B_TimeIntervalCallback0(uint32_t *ns)
{
    static uint32_t previousCountValue = 0UL;
    uint32_t counterValue;

    counterValue = LPTMR_DRV_GetCounterValueByCount(INST_LPTMR_1);
    *ns = ((uint32_t)(counterValue + timerOverflowInterruptCount * TIMER_COMPARE_VAL - previousCountValue)) * 1000U / TIMER_TICKS_1US;
    timerOverflowInterruptCount = 0UL;
    previousCountValue = counterValue;

    return 0UL;
}

/*!
 * @brief LPTMR Interrupt Service Routine
 * The ISR will call LIN timeout service every 500us
 */
void G2B_LPTMR_ISR(void)
{
    /* Timer Interrupt Handler */
    LIN_DRV_TimeoutService(INST_LIN2);
    /* Increment overflow count */
    timerOverflowInterruptCount++;
    /* Clear compare flag */
    LPTMR_DRV_ClearCompareFlag(INST_LPTMR_1);
}

/**
* Func:     CallbackHandler()
* Desc:     Declare Callback handler function
*/
lin_callback_t G2B_CallbackHandler(uint32_t instance, lin_state_t * lin1_State)
{
    lin_callback_t callbackCurrent;
    callbackCurrent = lin1_State->Callback;
    (void)instance;

    switch (lin1_State->currentEventId)
    {
        case LIN_PID_OK:
            /* Set timeout */
            LIN_DRV_SetTimeoutCounter(INST_LIN2, TIMEOUT);

            /* If PID is FRAME_MASTER_RECEIVE_DATA, master node will receive data */
            if(FRAME_MASTER_RECEIVE_DATA == lin1_State->currentId)
            {
                /* Call to Receive Frame DATA Function */
                LIN_DRV_ReceiveFrameData(INST_LIN2, RxBuff1, sizeof(RxBuff1));
            }

            break;
        case LIN_PID_ERROR:
        case LIN_TX_COMPLETED:
        case LIN_RX_COMPLETED:
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
    LPTMR_DRV_Init(INST_LPTMR_1, &lptmr_1_config0, false);
    INT_SYS_InstallHandler(LPTMR0_IRQn, G2B_LPTMR_ISR, (isr_t *)NULL);
    INT_SYS_EnableIRQ(LPTMR0_IRQn);
    LPTMR_DRV_StartCounter(INST_LPTMR_1);
}

void PWM_Init(void)
{
    /* Initialize FTM instance */
    FTM_DRV_Init(INST_FLEXTIMER_PWM_1, &flexTimer_pwm_1_InitConfig, &ftmStateStruct);

    /* Initialize FTM PWM */
    FTM_DRV_InitPwm(INST_FLEXTIMER_PWM_1, &flexTimer_pwm_1_PwmConfig);
}

void LIN_Init(void)
{
    /* Initialize LIN network interface */
    error = LIN_DRV_Init(INST_LIN2, &lin2_MasterConfig, &lin2_State);
    /* Install callback function */
    LIN_DRV_InstallCallback(INST_LIN2, (lin_callback_t)G2B_CallbackHandler);
}
