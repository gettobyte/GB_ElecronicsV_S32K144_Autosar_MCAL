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
#include "Platform.h"

#define CanInstance0 0U

#define CanTX 1U

uint8 dummyData0[8] = {0,1,2,3,4,5,6,7};
uint8 dummyData1[8] = {8,9,10,11,12,13,14,15};
uint8 dummyData2[8] = {16,17,18,19,20,21,22,23};

extern void CAN0_ORED_0_15_MB_IRQHandler(void);


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
	(void) Mailbox;
	(void) PduInfoPtr;
}
void CanIf_ControllerBusOff(uint8 ControllerId)
{
     (void)ControllerId;
}

//Can_CommonIrqCallback(u8Instance, event, u32buffIdx, driverState)
//{
////	Flexcan_Ip_StateType * state = flexcanState;
////	state->mbs[buffIdx].state = FLEXCAN_MB_TX_BUSY;
//}

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
    Flexcan_Ip_MbStateType state;


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

    Platform_Init(NULL_PTR);  //Interrupts Activate

    Can_PduType DataInfo0 = {

        .id = 600u,
        .swPduHandle = 1u,
        .length = 8u,
        .sdu = dummyData0

    };

    Can_PduType DataInfo1 = {

        .id = 700u,
        .swPduHandle = 1u,
        .length = 8u,
        .sdu = dummyData1

    };

    Can_PduType DataInfo2 = {

        .id = 800u,
        .swPduHandle = 1u,
        .length = 8u,
        .sdu = dummyData2

    };


    Can_Init(&Can_Config_BOARD_InitPeripherals);

    ret = Can_SetControllerMode(CanInstance0, ctrStateType);


    Can_EnableControllerInterrupts(0U);

// This API (Can_MainFunction_Write) is called when we want send data multiple times in same msg_id for ex:- in a loop.

    Can_MainFunction_Write();
    ret = Can_Write(CanTX, &DataInfo0);

       		    TestDelay(1000000);

       		    ret = Can_Write(CanTX, &DataInfo1);
       		          Can_MainFunction_Write();
       		       		    TestDelay(1000000);

       		       	    ret = Can_Write(CanTX, &DataInfo2);
       		       	          Can_MainFunction_Write();
       		       	       		    TestDelay(1000000);


    for(;;)
    {


    //		    Can_MainFunction_Read();
                TestDelay(1000000);

    }
    return 0;
}

/** @} */
