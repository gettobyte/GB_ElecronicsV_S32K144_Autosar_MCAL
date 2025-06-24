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
#include "Crypto.h"
#include "Clock_Ip.h"
#include "Comman.h"

volatile int exit_code = 0;
/* User includes */

/*!
  \brief The main function for the project.
  \details The startup initialization sequence is the following:
 * - startup asm routine
 * - main()
*/
/* Defines related to the CSEc Hw Ip, depending on the derivative */


#define G2B_AES128_CMAC_Original_Message_TEXT_SIZE 16
#define G2B_MAC_Generated_Message_TEXT_SIZE 16
#define G2B_MAC_Verify_Message_TEXT_SIZE 16


#define APP_AES128_CMAC_KEY_SIZE 16


static uint8_t G2B_Aes128_CMAC_Original_Message[G2B_AES128_CMAC_Original_Message_TEXT_SIZE]=
{
		   0x10, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f
};

static uint8_t G2B_Aes128_CMAC_Original_Message_false[G2B_AES128_CMAC_Original_Message_TEXT_SIZE]=
{
		   0x20, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f
};


static uint8_t App_au8Aes128Mac_Generated_Message[G2B_MAC_Generated_Message_TEXT_SIZE];
//static uint8_t App_au8Aes128Mac_Verify_Message[G2B_MAC_Verify_Message_TEXT_SIZE];

#define APP_AES128_MAC_KEY_ID CryptoConf_CryptoKey_CryptoKey_AES_CMAC
#define KEY_MATERIAL_MAC_ELEMENT_ID_U32 CryptoConf_CryptoKeyElement_CryptoKeyElement_CMAC
#define APP_AES128_CDO_ID CryptoConf_CryptoDriverObject_CryptoDriverObject_MAC

uint32 ResultLength = 16;


static Crypto_JobType G2B_AES128_MAC_Generate_ProcessJob =
{
		.jobId = 1U,
		.jobState = CRYPTO_JOBSTATE_IDLE,

	// Crypto_JobPrimitiveInputOutputType: structure, in this we specify different
	// buffer value's to input and out put data.

		 .jobPrimitiveInputOutput =
		 {
			.inputPtr = G2B_Aes128_CMAC_Original_Message,
			.inputLength = G2B_AES128_CMAC_Original_Message_TEXT_SIZE,
			.secondaryInputPtr = NULL_PTR,
			.secondaryInputLength = 0,
			.tertiaryInputPtr = NULL_PTR,
			.tertiaryInputLength = 0,
			.outputPtr = App_au8Aes128Mac_Generated_Message,
			.outputLengthPtr = &ResultLength,
			.secondaryOutputPtr = NULL_PTR,
			.secondaryOutputLengthPtr = NULL_PTR,
			.input64 = 0,
			.verifyPtr = NULL_PTR,
			.output64Ptr = NULL_PTR,
			.mode = CRYPTO_OPERATIONMODE_SINGLECALL,
			.cryIfKeyId = 0,
			.targetCryIfKeyId = 0,
		 },

	// Crypto_JobPrimitiveInfoType: structure, in this we brief about the crypto primitive that
	// we need to use.
	.jobPrimitiveInfo = &(Crypto_JobPrimitiveInfoType)
	{
			.callbackId = 0,
			.primitiveInfo = &(Crypto_PrimitiveInfoType)
					{
				       .resultLength = G2B_AES128_CMAC_Original_Message_TEXT_SIZE,
					   .service = CRYPTO_MACGENERATE,
					   .algorithm =
					   {
							.family = CRYPTO_ALGOFAM_CUSTOM,
							.secondaryFamily = CRYPTO_ALGOFAM_CUSTOM ,
							.keyLength = 128, // 16 bytes which is 128 in bits
							.mode = CRYPTO_ALGOMODE_CMAC,// Type of AES Mode we want to perform
					   },
					},

			 .cryIfKeyId = APP_AES128_MAC_KEY_ID,
			 .processingType = CRYPTO_PROCESSING_SYNC,
			 .callbackUpdateNotification = FALSE,

	},

	.jobInfo = &(Crypto_JobInfoType)
	{
	//Crypto_JobInfoType: structure, in which we specify particular job will be
	//performed at which priority and ID.
	.jobId = 0,
	.jobPriority = 0,
	},


	.jobRedirectionInfoRef = NULL_PTR

};

Crypto_VerifyResultType MAC_verify_status;

static Crypto_JobType G2B_AES128_MAC_Verify_ProcessJob =
{
		.jobId = 1U,
		.jobState = CRYPTO_JOBSTATE_IDLE,

	// Crypto_JobPrimitiveInputOutputType: structure, in this we specify different
	// buffer value's to input and out put data.

		 .jobPrimitiveInputOutput =
		 {
			.inputPtr = G2B_Aes128_CMAC_Original_Message_false,
			.inputLength = G2B_AES128_CMAC_Original_Message_TEXT_SIZE,
			.secondaryInputPtr = App_au8Aes128Mac_Generated_Message,
			.secondaryInputLength = G2B_AES128_CMAC_Original_Message_TEXT_SIZE,
			.tertiaryInputPtr = NULL_PTR,
			.tertiaryInputLength = 0,
			.outputPtr = NULL_PTR,
			.outputLengthPtr = 0,
			.secondaryOutputPtr = NULL_PTR,
			.secondaryOutputLengthPtr = NULL_PTR,
			.input64 = 0,
			.verifyPtr = &MAC_verify_status,
			.output64Ptr = NULL_PTR,
			.mode = CRYPTO_OPERATIONMODE_SINGLECALL,
			.cryIfKeyId = 0,
			.targetCryIfKeyId = 0,
		 },

	// Crypto_JobPrimitiveInfoType: structure, in this we brief about the crypto primitive that
	// we need to use.
	.jobPrimitiveInfo = &(Crypto_JobPrimitiveInfoType)
	{
			.callbackId = 0,
			.primitiveInfo = &(Crypto_PrimitiveInfoType)
					{
				       .resultLength = G2B_AES128_CMAC_Original_Message_TEXT_SIZE,
					   .service = CRYPTO_MACVERIFY,
					   .algorithm =
					   {
							.family = CRYPTO_ALGOFAM_CUSTOM,
							.secondaryFamily = CRYPTO_ALGOFAM_CUSTOM ,
							.keyLength = 128, // 16 bytes which is 128 in bits
							.mode = CRYPTO_ALGOMODE_CMAC,// Type of AES Mode we want to perform
					   },
					},

			 .cryIfKeyId = APP_AES128_MAC_KEY_ID,
			 .processingType = CRYPTO_PROCESSING_SYNC,
			 .callbackUpdateNotification = FALSE,

	},

	.jobInfo = &(Crypto_JobInfoType)
	{
	//Crypto_JobInfoType: structure, in which we specify particular job will be
	//performed at which priority and ID.
	.jobId = 0,
	.jobPriority = 0,
	},


	.jobRedirectionInfoRef = NULL_PTR

};



//
//static Crypto_JobType G2B_AES128_CBC_Decrypt_ProcessJob =
//{
//		.jobId = 1U,
//		.jobState = CRYPTO_JOBSTATE_IDLE,
//
//	// Crypto_JobPrimitiveInputOutputType: structure, in this we specify different
//	// buffer value's to input and out put data.
//
//		 .jobPrimitiveInputOutput =
//		 {
//			.inputPtr = App_au8Aes128Ecb_Encrypted_Message,
//			.inputLength = G2B_AES128_CBC_Encrypted_Message_TEXT_SIZE,
//			.secondaryInputPtr = G2B_Aes128CBC_IV,
//			.secondaryInputLength = G2B_AES128_CBC_IV_TEXT_SIZE,
//			.tertiaryInputPtr = NULL_PTR,
//			.tertiaryInputLength = 0,
//			.outputPtr = App_au8Aes128Ecb_Decrypted_Message,
//			.outputLengthPtr = &ResultLength,
//			.secondaryOutputPtr = NULL_PTR,
//			.secondaryOutputLengthPtr = NULL_PTR,
//			.input64 = 0,
//			.verifyPtr = NULL_PTR,
//			.output64Ptr = NULL_PTR,
//			.mode = CRYPTO_OPERATIONMODE_SINGLECALL,
//			.cryIfKeyId = APP_AES128_CBC_KEY_ID,
//			.targetCryIfKeyId = 0,
//		 },
//
//	// Crypto_JobPrimitiveInfoType: structure, in this we brief about the crypto primitive that
//	// we need to use.
//	.jobPrimitiveInfo = &(Crypto_JobPrimitiveInfoType)
//	{
//			.callbackId = 0,
//			.primitiveInfo = &(Crypto_PrimitiveInfoType)
//					{
//				       .resultLength = G2B_AES128_CBC_Decrypted_Message_TEXT_SIZE,
//					   .service = CRYPTO_DECRYPT,
//					   .algorithm =
//					   {
//							.family = CRYPTO_ALGOFAM_AES,
//							.secondaryFamily = CRYPTO_ALGOFAM_NOT_SET ,
//							.keyLength = 128, // 16 bytes which is 128 in bits
//							.mode = CRYPTO_ALGOMODE_CBC,// Type of AES Mode we want to perform
//					   },
//					},
//
//			 .cryIfKeyId = APP_AES128_CBC_KEY_ID,
//			 .processingType = CRYPTO_PROCESSING_SYNC,
//			 .callbackUpdateNotification = FALSE,
//
//	},
//
//	.jobInfo = &(Crypto_JobInfoType)
//	{
//	//Crypto_JobInfoType: structure, in which we specify particular job will be
//	//performed at which priority and ID.
//	.jobId = 0,
//	.jobPriority = 0,
//	},
//
//
//	.jobRedirectionInfoRef = NULL_PTR
//
//};


static uint8_t AES_128_CMACKey[APP_AES128_CMAC_KEY_SIZE] = {
		   0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f
};


int main(void)
{
    /* Write your code here */

    Std_ReturnType RetVal;

    Clock_Ip_StatusType clockStatus;
    clockStatus = Clock_Ip_Init(&Mcu_aClockConfigPB[0]);
    while (clockStatus != CLOCK_IP_SUCCESS)
    {
       clockStatus = Clock_Ip_Init(&Mcu_aClockConfigPB[0]);
    }

    //This function will initialize CSEc Peripheral
    RetVal = App_InitCsecHw(KEY_SIZE,SFE);
    //Initialize Crypto driver */
    Crypto_Init(NULL_PTR);


    for(;;)
    {

    	RetVal = Crypto_KeyElementSet(APP_AES128_MAC_KEY_ID, KEY_MATERIAL_MAC_ELEMENT_ID_U32, AES_128_CMACKey, APP_AES128_CMAC_KEY_SIZE  );
        App_SetSuccessStatus((Std_ReturnType)E_OK == RetVal);


    	RetVal = Crypto_KeySetValid(APP_AES128_MAC_KEY_ID);
        App_SetSuccessStatus((Std_ReturnType)E_OK == RetVal);

    	RetVal = Crypto_ProcessJob(APP_AES128_CDO_ID, &G2B_AES128_MAC_Generate_ProcessJob);
        App_SetSuccessStatus((Std_ReturnType)E_OK == RetVal);

    	RetVal = Crypto_ProcessJob(APP_AES128_CDO_ID, &G2B_AES128_MAC_Verify_ProcessJob);
        App_SetSuccessStatus((Std_ReturnType)E_OK == RetVal);



//    	RetVal = Crypto_ProcessJob(APP_AES128_CDO_ID, &G2B_AES128_CBC_Decrypt_ProcessJob);
//        App_SetSuccessStatus((Std_ReturnType)E_OK == RetVal);

//		//Run AES128 Encryption/Decryption()
//
//
//		Run CMAC generate/verify example()



    }
    return exit_code;
}

/** @} */
