/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : S32K14X
*   Dependencies         : none
*
*   Autosar Version      : 4.4.0
*   Autosar Revision     : ASR_REL_4_4_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 1.0.0
*   Build Version        : S32K1_RTD_1_0_0_D2108_ASR_REL_4_4_REV_0000_20210810
*
*   (c) Copyright 2020-2021 NXP Semiconductors
*   All Rights Reserved.
*
*   NXP Confidential. This software is owned or controlled by NXP and may only be
*   used strictly in accordance with the applicable license terms. By expressly
*   accepting such terms or by downloading, installing, activating and/or otherwise
*   using the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms. If you do not agree to be
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
==================================================================================================*/

/**
*   @file main.c
*
*   @addtogroup main_module main module documentation
*   @{
*/

/* Including necessary configuration files. */
#include "Mcal.h"
#include "Mcu.h"
#include "Clock_Ip.h"
#include "SchM_Can.h"  //For multiple CanTx and CanRx
#include "Port.h"
#include "Can.h"
#include "CanIf.h"
#include "CanIf_Can.h"

#define CanInstance0 0U


uint8 dummyData[8] = {0,1,2,3,4,5,6,7};
PduInfoType * localreceivedData;
Can_HwType * mailBoxid;
uint8 receivedData1[8];
uint8 receivedData2[8];
uint8 receivedData3[8];
uint8 receivedData4[8];

//Flexcan_Ip_StateType * state = flexcanState;
Flexcan_Ip_StatusType status;

volatile int exit_code = 0;

void CanIf_ControllerModeIndication( uint8 ControllerId, Can_ControllerStateType ControllerMode )
{
	(void)ControllerId; //used for optimization
	(void)ControllerMode;
}

void CanIf_TxConfirmation(PduIdType CanTxPduId)
{
    (void)CanTxPduId;
}

void CanIf_RxIndication( const Can_HwType * Mailbox, const PduInfoType * PduInfoPtr )
{
	mailBoxid = Mailbox;

	uint32 can_id = mailBoxid -> CanId;
	//mailBoxid -> CanId;
//
	if (can_id == 0x310)
	{
	    localreceivedData = PduInfoPtr;
	    for (int i = 0; i < 8; i++) {
	        receivedData1[i] = localreceivedData->SduDataPtr[i];
	    }
	}

	if (can_id == 0x320)
	{
	    localreceivedData = PduInfoPtr;
	    for (int i = 0; i < 8; i++) {
	        receivedData2[i] = localreceivedData->SduDataPtr[i];
	    }
	}

	if (can_id == 0x330)
	{
	    localreceivedData = PduInfoPtr;
	    for (int i = 0; i < 8; i++) {
	        receivedData3[i] = localreceivedData->SduDataPtr[i];
	    }
	}

	if (can_id == 0x340)
	{
	    localreceivedData = PduInfoPtr;
	    for (int i = 0; i < 8; i++) {
	        receivedData4[i] = localreceivedData->SduDataPtr[i];
	    }
	}

}
void CanIf_ControllerBusOff(uint8 ControllerId)
{
    (void)ControllerId;
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

    Std_ReturnType ret;
    Can_ControllerStateType ctrStateType = CAN_CS_STARTED;


    /* Write your code here */
    Clock_Ip_Init(&Mcu_aClockConfigPB[0]);

    #if defined (FEATURE_CLOCK_IP_HAS_SPLL_CLK)
      while ( CLOCK_IP_PLL_LOCKED != Clock_Ip_GetPllStatus() )
      {
        /* Busy wait until the System PLL is locked */
      }
     Clock_Ip_DistributePll();
    #endif

    /* Initialize all pins using the Port driver */
    Port_Init(NULL_PTR);

    Can_PduType TxData = {

        .id = 800u,
        .swPduHandle = 1u,
        .length = 8u,
        .sdu = dummyData

    };

    Can_Init(&Can_Config_BOARD_InitPeripherals);

    ret = Can_SetControllerMode(CanInstance0, ctrStateType);


    for(;;)
    {
    	  ret = Can_Write(CanHardwareObject_1, &TxData);
    	        //CanHardwareObject_1 from CAN_Cfg.h file in generate file


    	        Can_MainFunction_Write();
    		    TestDelay(1000000);
    		    Can_MainFunction_Read();
//    		    if (FLEXCAN_MB_IDLE == state->mbs[mb_idx].state)
//    		    {
//    		    	status = FLEXCAN_STATUS_SUCCESS;
//    		    }
//               TestDelay(100000);

    }
    return 0;
}

/** @} */
