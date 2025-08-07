/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : 
*   Dependencies         : none
*
*   Autosar Version      : 4.4.0
*   Autosar Revision     : ASR_REL_4_4_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 1.0.0
*   Build Version        : S32K1_RTD_1_0_0_ASR_REL_4_4_REV_0000_20210810
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
#include "Clock_Ip.h"
#include "Port.h"
#include "Can.h"
#include "CanIf.h"
#include "SchM_Can.h"

volatile int exit_code = 0;
uint8 CanIf_u8TxConfirmCnt = 0U;
boolean CanIf_bTxFlag = FALSE;
uint8 CanIf_u8RxIndicationCnt = 0U;
boolean CanIf_bRxFlag = FALSE;
uint8 dummyData[8] = {1,2,3,4,5,6,7,8};

void CanIf_ControllerBusOff(uint8 ControllerId)
{
    (void)ControllerId;
}

void CanIf_ControllerModeIndication(uint8 ControllerId, Can_ControllerStateType ControllerMode )
{
    (void)ControllerId;
    (void)ControllerMode;
}

void CanIf_TxConfirmation(PduIdType CanTxPduId)
{
    CanIf_u8TxConfirmCnt++;
    CanIf_bTxFlag = TRUE;
    (void)CanTxPduId;
}

void CanIf_RxIndication(const Can_HwType* Mailbox, const PduInfoType* PduInfoPtr )
{
    CanIf_u8RxIndicationCnt++;
    CanIf_bRxFlag = TRUE;

   uint8 a = PduInfoPtr->SduDataPtr[0];
   uint8 b = PduInfoPtr->SduDataPtr[1];
   uint8 c = PduInfoPtr->SduDataPtr[2];
   uint8 d = PduInfoPtr->SduDataPtr[3];
   uint8 e = PduInfoPtr->SduDataPtr[4];
   uint8 f = PduInfoPtr->SduDataPtr[5];

   (void)Mailbox;
}

void DummyDelay(volatile uint16 ticks)
{
	while(ticks > 0)
	{
		ticks--;
	}
}

/* User includes */

/*!
  \brief The main function for the project.
  \details The startup initialization sequence is the following:
 * - startup asm routine
 * - main()
*/
int main(void)
{
    /* Write your code here */
	Clock_Ip_StatusType clockStatus;
	Std_ReturnType status;
	StatusType stauts;
	uint8 u8TimeOut = 100U;

	clockStatus = Clock_Ip_Init(&Mcu_aClockConfigPB_BOARD_InitPeripherals[0U]);
	while(clockStatus != CLOCK_IP_SUCCESS)
	{
		clockStatus = Clock_Ip_Init(&Mcu_aClockConfigPB_BOARD_InitPeripherals[0U]);
	}

#if defined (CLOCK_IP_HAS_SPLL_CLK)
    /* Busy wait until the System PLL is locked */
    while (CLOCK_IP_PLL_LOCKED != Clock_Ip_GetPllStatus());
    Clock_Ip_DistributePll();
#endif

    /* Initialize all pins using the Port driver */
	Port_Init(NULL_PTR);

	/* Initialize the message structure */
	Can_PduType tx_message = {
		.id = 400U,
		.length = 8U,
		.swPduHandle = 1U,
		.sdu = dummyData
	};

	/* Initialize Can driver */
	Can_Init(&Can_Config_BOARD_InitPeripherals);

	/* Sets the Controller State from STOPPED to STARTED*/
	status = Can_SetControllerMode(CanController_0, CAN_CS_STARTED);

    for(;;)
    {
		status = Can_Write(CanHardwareObject_1, &tx_message);
		while ((!CanIf_bTxFlag) && (u8TimeOut != 0U))
		{
			Can_MainFunction_Write();
			DummyDelay(100U);
			u8TimeOut--;
		}
		CanIf_bTxFlag = FALSE;
		u8TimeOut = 100U;
		while ((!CanIf_bRxFlag) && (u8TimeOut != 0U))
		{
			Can_MainFunction_Read();
			DummyDelay(100U);
			u8TimeOut--;
		}
		CanIf_bRxFlag = FALSE;
        if(exit_code != 0)
        {
            break;
        }
    }
    return exit_code;
}

/** @} */
