/*!
** Copyright 2019 NXP
** @file main.c
** @brief
**         Main module.
**         This module contains user's application code.
*/
/*!
**  @addtogroup main_module main module documentation
**  @{
*/
/* MODULE main */


/* Including necessary configuration files. */
#include "Mcal.h"
#include "Clock_Ip.h"
#include "FlexCAN_Ip.h"
#include "Port.h"

#include "IntCtrl_Ip.h"

extern void CAN0_ORED_0_15_MB_IRQHandler(void);
GB_MailBox_CallBack(uint8 instance, Flexcan_Ip_EventType eventType,
                  uint32 buffIdx, const Flexcan_Ip_StateType * flexcanState)
{
#if GB_RxMailBox_CALLBACK
	Flexcan_Ip_StateType * state = flexcanState;
	state->mbs[buffIdx].state = FLEXCAN_MB_RX_BUSY;
#else

	uint8_t callback = 0;
	/* Do Nothing */
#endif
}

#define MSG_ID1 0x500
#define TX_MB_IDX1 0

#define MSG_ID2 0x600
#define TX_MB_IDX2 1

#define MSG_ID3 0x700
#define TX_MB_IDX3 2

#define MSG_ID4 0x800
#define TX_MB_IDX4 3


/* User includes */
uint8 CanData1[8] = {1,2,3,4,5,6,7,8};  // 8 Bytes of Data
uint8 CanData2[8] = {11,22,33,44,55};   // 5 Bytes of Data
uint8 CanData3[8] = {10,20,30};      //3 Bytes of Data
uint8 CanData4[8] = {21,22,23,24,25,26,27};    //7 Bytes of Data

void TestDelay(uint32 delay);
void TestDelay(uint32 delay)
{
   static volatile uint32 DelayTimer = 0;
   while(DelayTimer<delay)
   {
       DelayTimer++;
   }
   DelayTimer=0;
}


int main(void)
{
	Flexcan_Ip_StatusType FlexCAN_Api_Status;
    /* Write your code here */
    Clock_Ip_Init(&Mcu_aClockConfigPB[0]);

#if defined (FEATURE_CLOCK_IP_HAS_SPLL_CLK)
    while ( CLOCK_IP_PLL_LOCKED != Clock_Ip_GetPllStatus() )
    {
        /* Busy wait until the System PLL is locked */
    }
    Clock_Ip_DistributePll();
#endif

    IntCtrl_Ip_EnableIrq(CAN0_ORed_0_15_MB_IRQn);
    IntCtrl_Ip_InstallHandler(CAN0_ORed_0_15_MB_IRQn, CAN0_ORED_0_15_MB_IRQHandler, NULL_PTR);

    /* Initialize all pins using the Port driver */
    Port_Init(NULL_PTR);

    Flexcan_Ip_DataInfoType rx_info = {
            .msg_id_type = FLEXCAN_MSG_ID_STD,
            .data_length = 8u,
            .is_polling = FALSE,
            .is_remote = FALSE
    };

    FlexCAN_Ip_Init(INST_FLEXCAN_0, &FlexCAN_State0, &FlexCAN_Config0);

    FlexCAN_Api_Status = FlexCAN_Ip_SetStartMode(INST_FLEXCAN_0);

   for(;;)
   {
	   // Sending CAN Data at MailBox 1, whose address is:
	   FlexCAN_Api_Status = FlexCAN_Ip_Send(INST_FLEXCAN_0, TX_MB_IDX1, &rx_info, MSG_ID1, (uint8 *)&CanData1);
	   TestDelay(2000000);

	   FlexCAN_Api_Status = FlexCAN_Ip_Send(INST_FLEXCAN_0, TX_MB_IDX2, &rx_info, MSG_ID2, (uint8 *)&CanData2);
	   TestDelay(2000000);

	   FlexCAN_Api_Status = FlexCAN_Ip_Send(INST_FLEXCAN_0, TX_MB_IDX3, &rx_info, MSG_ID3, (uint8 *)&CanData3);
	   TestDelay(2000000);

	   FlexCAN_Api_Status = FlexCAN_Ip_Send(INST_FLEXCAN_0, TX_MB_IDX4, &rx_info, MSG_ID4, (uint8 *)&CanData4);
	   TestDelay(2000000);

   }

    return 0;
}

/* END main */
/*!
** @}
*/
