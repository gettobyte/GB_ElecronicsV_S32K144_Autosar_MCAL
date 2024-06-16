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
#define GB_RXFIFO_CALLBACK 0
#define MSG_ID 800u

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

GB_RxFiFo_CallBack(uint8 instance, Flexcan_Ip_EventType eventType,
                  uint32 buffIdx, const Flexcan_Ip_StateType * flexcanState)

{
#if GB_RXFIFO_CALLBACK
	Flexcan_Ip_StateType * state = flexcanState;
	state->mbs[FLEXCAN_IP_MB_HANDLE_RXFIFO].state = FLEXCAN_MB_RX_BUSY;
#else

	uint8_t callback = 0;
	/* Do Nothing */
#endif
}


// RX FIFO Filter table structure
const Flexcan_Ip_IdTableType GB_FlexCAN_IdFilterTable[8] = {
    		{
    		.isRemoteFrame = FALSE,
			.isExtendedFrame = FALSE,
			.id = 0x320
    		},
			{
			.isRemoteFrame = FALSE,
			.isExtendedFrame = FALSE,
			.id = 0x330
			 },
			 {
			.isRemoteFrame = FALSE,
			.isExtendedFrame = FALSE,
			.id = 0x340
			 },
			 {
			.isRemoteFrame = FALSE,
			.isExtendedFrame = FALSE,
			.id = 0x350
			 },
			 {
			.isRemoteFrame = FALSE,
			.isExtendedFrame = FALSE,
			.id = 0x360
			 },
			 {
			.isRemoteFrame = FALSE,
			.isExtendedFrame = FALSE,
			.id = 0x370
			 },

			 {
			.isRemoteFrame = FALSE,
			.isExtendedFrame = FALSE,
			.id = 0x380
			 },

			 {
			.isRemoteFrame = FALSE,
			.isExtendedFrame = FALSE,
			.id = 0x390
			 }

    };

// Creating an object of Flexcan_Ip_MsgBuffType, which will store the received can data.
Flexcan_Ip_MsgBuffType GB_FlexCAN_Receive_Data;


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
    /* Initilisize FlexCAN Module according to FlexCAN_Config0 data structure */
    FlexCAN_Ip_Init(INST_FLEXCAN_0, &FlexCAN_State0, &FlexCAN_Config0);

    /* Configure the RxFIFO with corresponding ID filter table acceptance format and acceptance message ID's*/
    FlexCAN_Api_Status = FlexCAN_Ip_ConfigRxFifo_Privileged(INST_FLEXCAN_0, FLEXCAN_RX_FIFO_ID_FORMAT_A, &GB_FlexCAN_IdFilterTable);

    /* Start the FlexCAN Module */
    FlexCAN_Api_Status = FlexCAN_Ip_SetStartMode(INST_FLEXCAN_0);

for(;;)
   {
	/* RxFiFo in non-blocking method*/
	FlexCAN_Api_Status = FlexCAN_Ip_RxFifo(INST_FLEXCAN_0, &GB_FlexCAN_Receive_Data);
    TestDelay(20000000);
   }

    return 0;
}

/* END main */
/*!
** @}
*/
