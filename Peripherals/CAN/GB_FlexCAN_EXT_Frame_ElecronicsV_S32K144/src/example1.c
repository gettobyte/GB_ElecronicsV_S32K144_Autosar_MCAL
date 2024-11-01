/* Including necessary configuration files. */
#include "Mcal.h"
#include "Clock_Ip.h"
#include "FlexCAN_Ip.h"
#include "Port.h"
#include "string.h"

#include "IntCtrl_Ip.h"

extern void CAN0_ORED_0_15_MB_IRQHandler(void);
#define GB_RxMailBox_CALLBACK 1

//For Extended Message ID
#define MSG_ID0 0x1AA55AC7
#define RX_MB_IDX0 0U

//For Extended Message ID
#define MSG_ID1 0x15579655
#define RX_MB_IDX1 1U

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
		Flexcan_Ip_StatusType FlexCAN_Api_Status, MbRx0, MbRx1,Rx0, Rx1;

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

		//    For Extended Message ID
		Flexcan_Ip_DataInfoType rx_info_ext = {
				.msg_id_type = FLEXCAN_MSG_ID_EXT,
				.data_length = 8u,
				.is_polling = FALSE,
				.is_remote = FALSE
				};

		Flexcan_Ip_MsgBuffType rxData1, rxData2;

		FlexCAN_Ip_Init(INST_FLEXCAN_0, &FlexCAN_State0, &FlexCAN_Config0);

		FlexCAN_Api_Status = FlexCAN_Ip_SetStartMode(INST_FLEXCAN_0);

		//    For Extended Message ID
		MbRx0 = FlexCAN_Ip_ConfigRxMb(INST_FLEXCAN_0, RX_MB_IDX0, &rx_info_ext, MSG_ID0);
		Rx0 = FlexCAN_Ip_Receive(INST_FLEXCAN_0, RX_MB_IDX0, &rxData1, false);

		//    For Extended Message ID
		MbRx1 = FlexCAN_Ip_ConfigRxMb(INST_FLEXCAN_0, RX_MB_IDX1, &rx_info_ext, MSG_ID1);
		Rx1 = FlexCAN_Ip_Receive(INST_FLEXCAN_0, RX_MB_IDX1, &rxData2, false);

		for(;;)
				{

				}

		return 0;
}
