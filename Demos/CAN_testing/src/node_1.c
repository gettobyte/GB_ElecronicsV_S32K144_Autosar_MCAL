/* Including necessary configuration files. */
#include "Mcal.h"
#include "Clock_Ip.h"
#include "FlexCAN_Ip.h"
#include "Port.h"
#include "IntCtrl_Ip.h"
#include "Dio.h"

//Tx for standard frame
#define MSG_ID0 0x500
#define TX_MB_IDX0 0

//Rx for extended frame
#define MSG_ID1 0x152F5AA
#define RX_MB_IDX0 1

//Tx for standard remote frame
#define MSG_ID2 0x700
#define TX_MB_IDX1 2

//Rx for extended remote frame
#define MSG_ID3 0x176B455B
#define RX_MB_IDX1 3

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

    Flexcan_Ip_DataInfoType tx_info_std = {
            .msg_id_type = FLEXCAN_MSG_ID_STD,
            .data_length = 8u,
            .is_polling = FALSE,
            .is_remote = FALSE
    };

    Flexcan_Ip_DataInfoType tx_info_std_remote = {
                .msg_id_type = FLEXCAN_MSG_ID_STD,
                .data_length = 8u,
                .is_polling = FALSE,
                .is_remote = TRUE
        };

    Flexcan_Ip_DataInfoType tx_info_ext = {
    		.msg_id_type = FLEXCAN_MSG_ID_EXT,
			.data_length = 8u,
			.is_polling = FALSE,
			.is_remote = FALSE,
    };

    Flexcan_Ip_DataInfoType tx_info_ext_remote = {
        		.msg_id_type = FLEXCAN_MSG_ID_EXT,
    			.data_length = 8u,
    			.is_polling = FALSE,
    			.is_remote = TRUE,
	};

    Flexcan_Ip_MsgBuffType txData1, txData2;

    FlexCAN_Ip_Init(INST_FLEXCAN_0, &FlexCAN_State0, &FlexCAN_Config0);
    FlexCAN_Api_Status = FlexCAN_Ip_SetStartMode(INST_FLEXCAN_0);


    FlexCAN_Api_Status = FlexCAN_Ip_ConfigRxMb(INST_FLEXCAN_0, RX_MB_IDX0, &tx_info_ext, MSG_ID1);
	FlexCAN_Api_Status = FlexCAN_Ip_ConfigRxMb(INST_FLEXCAN_0, RX_MB_IDX1, &tx_info_ext_remote, MSG_ID3);


	FlexCAN_Api_Status = FlexCAN_Ip_Receive(INST_FLEXCAN_0, RX_MB_IDX0, &txData1, false);
	FlexCAN_Api_Status = FlexCAN_Ip_Receive(INST_FLEXCAN_0, RX_MB_IDX1, &txData2, false);

	// Sending Data Frame(Standard) from Node 1:
	FlexCAN_Api_Status = FlexCAN_Ip_Send(INST_FLEXCAN_0, TX_MB_IDX0, &tx_info_std, MSG_ID0, (uint8 *)&CanData1);
	TestDelay(2000000);


//	   Receiving Data Frame(Extended) from Node 2:
	   boolean temp = false;
	   while(temp != true)
	   {
		   if(txData1.msgId == 22214058)
		   {
				for (int var = 0; var < 5; var++)
					{
						Dio_WriteChannel(DioConf_DioChannel_RED_LED, STD_LOW);
						TestDelay(2000000);
						Dio_WriteChannel(DioConf_DioChannel_RED_LED, STD_HIGH);
						TestDelay(2000000);
					}
				temp = true;
		   }
	   }


   for(;;)
   {



//     Sending Remote Frame(Standard) from Node 1:
//	   FlexCAN_Api_Status = FlexCAN_Ip_Send(INST_FLEXCAN_0, TX_MB_IDX1, &tx_info_std_remote, MSG_ID2, (uint8 *)&CanData1);
//	   TestDelay(2000000);

//	   Receiving Remote Frame(Extended) from Node 2:
//	   if(rxData2->msgId == 392906075)
	   //	   {
	   //			for (int var = 0; var < 5; var++)
	   //				{
	   //					Dio_WriteChannel(DioConf_DioChannel_BLUE_LED, STD_LOW);
	   //					TDelay(2000000);
	   //					Dio_WriteChannel(DioConf_DioChannel_BLUE_LED, STD_HIGH);
	   //					TDelay(2000000);
	   //				}
	   //	   }
   }

    return 0;
}
