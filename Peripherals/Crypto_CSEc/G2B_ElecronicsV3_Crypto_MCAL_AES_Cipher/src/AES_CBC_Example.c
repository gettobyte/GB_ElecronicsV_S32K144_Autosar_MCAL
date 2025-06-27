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


#define G2B_AES128_CBC_Original_Message_TEXT_SIZE 16
#define G2B_AES128_CBC_Encrypted_Message_TEXT_SIZE 16
#define G2B_AES128_CBC_Decrypted_Message_TEXT_SIZE 16
#define G2B_AES128_CBC_IV_TEXT_SIZE 16


#define APP_AES128_KEY_SIZE 16


static uint8_t G2B_Aes128CBC_Original_Message[G2B_AES128_CBC_Original_Message_TEXT_SIZE]=
{
		   0x10, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f
};

static uint8_t G2B_Aes128CBC_IV[G2B_AES128_CBC_IV_TEXT_SIZE]=
{
		   0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35
};


static uint8_t App_au8Aes128Ecb_Encrypted_Message[G2B_AES128_CBC_Encrypted_Message_TEXT_SIZE];
static uint8_t App_au8Aes128Ecb_Decrypted_Message[G2B_AES128_CBC_Decrypted_Message_TEXT_SIZE];

#define APP_AES128_CBC_KEY_ID CryptoConf_CryptoKey_CryptoKey_AES_CBC

#define KEY_MATERIAL_AES_CBC_ELEMENT_ID_U32 CryptoConf_CryptoKeyElement_CryptoKeyElement_AES_KEY_CBC
#define KEY_MATERIAL_AES_CBC_IV_ELEMENT_ID_U32 CryptoConf_CryptoKeyElement_CryptoKeyElement_AES_KEY_CBC_IV

#define APP_AES128_CDO_ID CryptoConf_CryptoDriverObject_CryptoDriverObject_AES

uint32 ResultLength = 16;


static Crypto_JobType G2B_AES128_CBC_Encrypt_ProcessJob =
{
		.jobId = 1U,
		.jobState = CRYPTO_JOBSTATE_IDLE,

	// Crypto_JobPrimitiveInputOutputType: structure, in this we specify different
	// buffer value's to input and out put data.

		 .jobPrimitiveInputOutput =
		 {
			.inputPtr = G2B_Aes128CBC_Original_Message,
			.inputLength = G2B_AES128_CBC_Original_Message_TEXT_SIZE,
			.secondaryInputPtr = G2B_Aes128CBC_IV,
			.secondaryInputLength = G2B_AES128_CBC_IV_TEXT_SIZE,
			.tertiaryInputPtr = NULL_PTR,
			.tertiaryInputLength = 0,
			.outputPtr = App_au8Aes128Ecb_Encrypted_Message,
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
				       .resultLength = G2B_AES128_CBC_Encrypted_Message_TEXT_SIZE,
					   .service = CRYPTO_ENCRYPT,
					   .algorithm =
					   {
							.family = CRYPTO_ALGOFAM_AES,
							.secondaryFamily = CRYPTO_ALGOFAM_NOT_SET ,
							.keyLength = 128, // 16 bytes which is 128 in bits
							.mode = CRYPTO_ALGOMODE_CBC,// Type of AES Mode we want to perform
					   },
					},

			 .cryIfKeyId = APP_AES128_CBC_KEY_ID,
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



static Crypto_JobType G2B_AES128_CBC_Decrypt_ProcessJob =
{
		.jobId = 1U,
		.jobState = CRYPTO_JOBSTATE_IDLE,

	// Crypto_JobPrimitiveInputOutputType: structure, in this we specify different
	// buffer value's to input and out put data.

		 .jobPrimitiveInputOutput =
		 {
			.inputPtr = App_au8Aes128Ecb_Encrypted_Message,
			.inputLength = G2B_AES128_CBC_Encrypted_Message_TEXT_SIZE,
			.secondaryInputPtr = G2B_Aes128CBC_IV,
			.secondaryInputLength = G2B_AES128_CBC_IV_TEXT_SIZE,
			.tertiaryInputPtr = NULL_PTR,
			.tertiaryInputLength = 0,
			.outputPtr = App_au8Aes128Ecb_Decrypted_Message,
			.outputLengthPtr = &ResultLength,
			.secondaryOutputPtr = NULL_PTR,
			.secondaryOutputLengthPtr = NULL_PTR,
			.input64 = 0,
			.verifyPtr = NULL_PTR,
			.output64Ptr = NULL_PTR,
			.mode = CRYPTO_OPERATIONMODE_SINGLECALL,
			.cryIfKeyId = APP_AES128_CBC_KEY_ID,
			.targetCryIfKeyId = 0,
		 },

	// Crypto_JobPrimitiveInfoType: structure, in this we brief about the crypto primitive that
	// we need to use.
	.jobPrimitiveInfo = &(Crypto_JobPrimitiveInfoType)
	{
			.callbackId = 0,
			.primitiveInfo = &(Crypto_PrimitiveInfoType)
					{
				       .resultLength = G2B_AES128_CBC_Decrypted_Message_TEXT_SIZE,
					   .service = CRYPTO_DECRYPT,
					   .algorithm =
					   {
							.family = CRYPTO_ALGOFAM_AES,
							.secondaryFamily = CRYPTO_ALGOFAM_NOT_SET ,
							.keyLength = 128, // 16 bytes which is 128 in bits
							.mode = CRYPTO_ALGOMODE_CBC,// Type of AES Mode we want to perform
					   },
					},

			 .cryIfKeyId = APP_AES128_CBC_KEY_ID,
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


static uint8_t AES_128_CbcKey[APP_AES128_KEY_SIZE] = {
		   0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f
};

static const uint32 u32Counter = 2U;

static const uint8 u8Flags     = 0U;


static const uint8 aEmptyKey[16] =
{
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};

static const uint8 aEmptyUID[15] =
{
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static uint8 aK1Plain[32U] =
{
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x01, 0x53, 0x48, 0x45, 0x00, 0x80, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb0
};

static uint8 aK2Plain[32U] =
{
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x02, 0x53, 0x48, 0x45, 0x00, 0x80, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb0
};


static const uint8 aEmptyIV[16] = { 0x00 };

static uint8 aK1[16]      = { 0x00 };
static uint8 aK2[16]      = { 0x00 };
static uint8 aK3[16]      = { 0x00 };
static uint8 aK4[16]      = { 0x00 };

static uint8 aM1[16]      = { 0x00 };
static uint8 aM2[32]      = { 0x00 };
static uint8 aM2Plain[32] = { 0x00 };
static uint8 aM3[16]      = { 0x00 };
static uint8 aM4Ref[16]   = { 0x00 };
static uint8 aM4Plain[16] = { 0x00 };
static uint8 aM4[32]      = { 0x00 };
static uint8 aM5[16]      = { 0x00 };
static uint8 aM1M2[48]    = { 0x00 };

static void App_LoadCsecKey
(
    uint8  keyId,
    uint8  authKeyId,
    const  uint8* pNewKey,
    const  uint8* pAuthKey,
    uint32 counter,
    uint8  flags,
    const  uint8* pUID
)
{

    Csec_Ip_ErrorCodeType CsecResponse;
    uint8                 u8Idx;
    boolean               bValidationStatus = (boolean)TRUE;
    Csec_Ip_ReqType       CsecIpReq;

    /* Mark the future requests made to Csec Ip as synchronous */
    CsecIpReq.eReqType = CSEC_IP_REQTYPE_SYNC;

    /* Generate K1 & K2 */
    for (u8Idx = 0; u8Idx < 16U; u8Idx++)
    {
        aK1Plain[u8Idx] = pAuthKey[u8Idx];
        aK2Plain[u8Idx] = pAuthKey[u8Idx];
    }

    CsecResponse = Csec_Ip_MpCompress(aK1Plain, 2, aK1);
    App_SetSuccessStatus(CSEC_IP_ERC_NO_ERROR == CsecResponse);

    CsecResponse = Csec_Ip_MpCompress(aK2Plain, 2, aK2);
    App_SetSuccessStatus(CSEC_IP_ERC_NO_ERROR == CsecResponse);

    /* Prepare M1 */
    for (u8Idx = 0; u8Idx < 15U; u8Idx++)
    {
        aM1[u8Idx] = pUID[u8Idx];
    }

    aM1[15] = (authKeyId & 0x0F) | ((keyId & 0x0F) << 4);

    /* Generate M2 */
    for (u8Idx = 0; u8Idx < 16; u8Idx++)
    {
        aM2Plain[u8Idx + 16U] = pNewKey[u8Idx];
    }

    aM2Plain[0] = ((counter << 0x04) & 0xff000000) >> 0x18;
    aM2Plain[1] = ((counter << 0x04) & 0x00ff0000) >> 0x10;
    aM2Plain[2] = ((counter << 0x04) & 0x0000ff00) >> 0x08;
    aM2Plain[3] = ((counter << 0x04) & 0x000000ff) >> 0x00;

    aM2Plain[3] |= (flags & 0x1e) >> 1U;
    aM2Plain[4] |= (flags & 0x01) << 7U;

    /* Encrypt M2 */
    CsecResponse = Csec_Ip_LoadPlainKey(aK1);
    App_SetSuccessStatus(CSEC_IP_ERC_NO_ERROR == CsecResponse);

    CsecResponse = Csec_Ip_EncryptCbc(&CsecIpReq, CSEC_IP_RAM_KEY, aM2Plain, 32, aEmptyIV, aM2);
    App_SetSuccessStatus(CSEC_IP_ERC_NO_ERROR == CsecResponse);

    /* Generate M3 */
    for (u8Idx = 0; u8Idx < 16U; u8Idx++)
    {
        aM1M2[u8Idx]       = aM1[u8Idx];
        aM1M2[u8Idx + 16U] = aM2[u8Idx];
        aM1M2[u8Idx + 32U] = aM2[u8Idx + 16U];
    }

    CsecResponse = Csec_Ip_LoadPlainKey(aK2);
    App_SetSuccessStatus(CSEC_IP_ERC_NO_ERROR == CsecResponse);

    CsecResponse = Csec_Ip_GenerateMac(&CsecIpReq, CSEC_IP_RAM_KEY, aM1M2, 384, aM3);
    App_SetSuccessStatus(CSEC_IP_ERC_NO_ERROR == CsecResponse);

    /* Load Key */
    CsecResponse = Csec_Ip_LoadKey((Csec_Ip_KeyIdType)keyId, aM1, aM2, aM3, aM4, aM5);
    App_SetSuccessStatus(CSEC_IP_ERC_NO_ERROR == CsecResponse);

    /* Generate K3 & K4 */
    for (u8Idx = 0; u8Idx < 16; u8Idx++)
    {
        aK1Plain[u8Idx] = pNewKey[u8Idx];
        aK2Plain[u8Idx] = pNewKey[u8Idx];
    }

    CsecResponse = Csec_Ip_MpCompress(aK1Plain, 2, aK3);
    App_SetSuccessStatus(CSEC_IP_ERC_NO_ERROR == CsecResponse);

    CsecResponse = Csec_Ip_MpCompress(aK2Plain, 2, aK4);
    App_SetSuccessStatus(CSEC_IP_ERC_NO_ERROR == CsecResponse);

    /* Prepare M4' (aM4Ref) */
    aM4Plain[0]  = ((counter << 0x04) & 0xff000000) >> 0x18;
    aM4Plain[1]  = ((counter << 0x04) & 0x00ff0000) >> 0x10;
    aM4Plain[2]  = ((counter << 0x04) & 0x0000ff00) >> 0x08;
    aM4Plain[3]  = ((counter << 0x04) & 0x000000ff) >> 0x00;
    aM4Plain[3] |= 0x08;

    CsecResponse = Csec_Ip_LoadPlainKey(aK3);
    App_SetSuccessStatus(CSEC_IP_ERC_NO_ERROR == CsecResponse);

    CsecResponse = Csec_Ip_EncryptEcb(&CsecIpReq, CSEC_IP_RAM_KEY, aM4Plain, 16, aM4Ref);
    App_SetSuccessStatus(CSEC_IP_ERC_NO_ERROR == CsecResponse);

    /* Validate M4 */
    App_SetSuccessStatus(((aM4[15] & 0xf0) >> 4) == (keyId & 0x0f));
    App_SetSuccessStatus((aM4[15] & 0x0f) == (authKeyId & 0x0f));

    for (u8Idx = 0; u8Idx < 16U; u8Idx++)
    {
        if (aM4Ref[u8Idx] != aM4[u8Idx + 16U])
        {
            bValidationStatus = (boolean)FALSE;
        }
    }

    App_SetSuccessStatus((boolean)TRUE == bValidationStatus);

    /* Generate M5 */
    CsecResponse = Csec_Ip_LoadPlainKey(aK4);
    App_SetSuccessStatus(CSEC_IP_ERC_NO_ERROR == CsecResponse);

    /* Validate M5 */
    CsecResponse = Csec_Ip_VerifyMac(&CsecIpReq, CSEC_IP_RAM_KEY, aM4, 256, aM5, 0, &bValidationStatus);
    App_SetSuccessStatus(CSEC_IP_ERC_NO_ERROR == CsecResponse);
    App_SetSuccessStatus((boolean)TRUE == bValidationStatus);
}



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

    	App_LoadCsecKey(CSEC_IP_KEY_1, CSEC_IP_MASTER_ECU_KEY, AES_128_CbcKey, aEmptyKey, u32Counter, u8Flags, aEmptyUID  );

//    	//for importing CBC Key ( RAM_Key_Slot)
//    	RetVal = Crypto_KeyElementSet(APP_AES128_CBC_KEY_ID, KEY_MATERIAL_AES_CBC_ELEMENT_ID_U32, AES_128_CbcKey, APP_AES128_KEY_SIZE  );
//        App_SetSuccessStatus((Std_ReturnType)E_OK == RetVal);
//

        // IV value for CBC is stored not on CSEc IP but stored in internal buffer's
    	RetVal = Crypto_KeyElementSet(APP_AES128_CBC_KEY_ID, KEY_MATERIAL_AES_CBC_IV_ELEMENT_ID_U32, G2B_Aes128CBC_IV, APP_AES128_KEY_SIZE  );
        App_SetSuccessStatus((Std_ReturnType)E_OK == RetVal);


    	RetVal = Crypto_KeySetValid(APP_AES128_CBC_KEY_ID);
        App_SetSuccessStatus((Std_ReturnType)E_OK == RetVal);

    	RetVal = Crypto_ProcessJob(APP_AES128_CDO_ID, &G2B_AES128_CBC_Encrypt_ProcessJob);
        App_SetSuccessStatus((Std_ReturnType)E_OK == RetVal);


    	RetVal = Crypto_ProcessJob(APP_AES128_CDO_ID, &G2B_AES128_CBC_Decrypt_ProcessJob);
        App_SetSuccessStatus((Std_ReturnType)E_OK == RetVal);

//		//Run AES128 Encryption/Decryption()
//
//
//		Run CMAC generate/verify example()



    }
    return exit_code;
}

/** @} */
