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

volatile int exit_code = 0;
/* User includes */

/*!
  \brief The main function for the project.
  \details The startup initialization sequence is the following:
 * - startup asm routine
 * - main()
*/
/* Defines related to the CSEc Hw Ip, depending on the derivative */
#ifdef S32K148
    /* FlexNVM Partition Code (512-64) Kbs Data Flash, 64 Kbs EEPROM backup */
    #define T_DEPART        (0x04U)
#else
    #if (defined S32K116|| defined S32K118)
        /* FlexNVM Partition Code - 8 Kbs Data Flash, 24 Kbs EEPROM backup */
        #define T_DEPART    (0x09U)
    #else
        /* FlexNVM Partition Code - 32 Kbs Data Flash, 32 Kbs EEPROM backup */
        #define T_DEPART    (0x03U)
    #endif
#endif

#if defined(S32K142W) || defined(S32K144W)
    #define KEY_SIZE        (0x07U)
#else
    #define KEY_SIZE        (0x03U)
#endif

#if (defined S32K116|| defined S32K118)
    #define FLASH_FLEXNVM_EEPROM    (0x03U)
#else
    #define FLASH_FLEXNVM_EEPROM    (0x02U)
#endif

#define SFE                         (0x00U)

#if (STD_ON == CSEC_IP_FTFM_MODULE)
    #define APP_CSEC_IP_FCNFG_RAMRDY_MASK         FTFM_FCNFG_RAMRDY_MASK
    #define APP_CSEC_IP_FCNFG_EEERDY_MASK         FTFM_FCNFG_EEERDY_MASK
    #define APP_CSEC_IP_MGSTAT0_MASK              FTFM_FSTAT_MGSTAT0_MASK
#else
    #define APP_CSEC_IP_FCNFG_RAMRDY_MASK         FTFC_FCNFG_RAMRDY_MASK
    #define APP_CSEC_IP_FCNFG_EEERDY_MASK         FTFC_FCNFG_EEERDY_MASK
    #define APP_CSEC_IP_MGSTAT0_MASK              FTFC_FSTAT_MGSTAT0_MASK
#endif

#define APP_CSEC_IP_RAMRDY_IS_SET       ((CSEC_IP_FLASH->FCNFG & APP_CSEC_IP_FCNFG_RAMRDY_MASK) != 0U)
#define APP_CSEC_IP_EEERDY_IS_SET       ((CSEC_IP_FLASH->FCNFG & APP_CSEC_IP_FCNFG_EEERDY_MASK) != 0U)

static uint32 u32NumFailedApiCalls = 0U;
#define App_SetSuccessStatus(value)         (u32NumFailedApiCalls += ((value) ? 0U : 1U))


static Std_ReturnType App_InitCsecHw
(
    uint8 u8KeySize,
    uint8 u8Sfe
)
{
    Std_ReturnType RetVal  = (Std_ReturnType)E_NOT_OK;
    uint8          u8FStat = 0U;

    /* CSEc IP hardware is not initialized if RAMRDY bit is set or EEERDY bit is clear */
    if ((APP_CSEC_IP_RAMRDY_IS_SET) || (!APP_CSEC_IP_EEERDY_IS_SET))
    {
        /* Run PGMPART command to start initialize HW */
        /* PGMPART command */
        CSEC_IP_FLASH->FCCOB[3] = 0x80U;
        /* CSEc Key Size */
        CSEC_IP_FLASH->FCCOB[2] = u8KeySize;
        /* Security Flag Extension */
        CSEC_IP_FLASH->FCCOB[1] = u8Sfe;

        CSEC_IP_FLASH->FCCOB[0] = 0;
        /* EEPROM Data Set Size Code */
        CSEC_IP_FLASH->FCCOB[7] = FLASH_FLEXNVM_EEPROM;
        /* FlexNVM Partition Code - 32 Kbs Data Flash, 32 Kbs EEPROM backup */
        CSEC_IP_FLASH->FCCOB[6] = (uint8)T_DEPART;
        /* Clear CCIF */
        CSEC_IP_FLASH->FSTAT = CSEC_IP_FSTAT_CCIF_MASK;

        /* Wait for command to finish */
        while (!((CSEC_IP_FLASH->FSTAT) & CSEC_IP_FSTAT_CCIF_MASK));

        u8FStat = CSEC_IP_FLASH->FSTAT;
        if( 0x00U == ((u8FStat & APP_CSEC_IP_MGSTAT0_MASK) | (u8FStat & CSEC_IP_FSTAT_ACCERR_MASK)) )
        {
           RetVal = (Std_ReturnType)E_OK;
        }
    }
    else
    {
        /* Csec IP hardware is already initialized */
        RetVal = (Std_ReturnType)E_OK;
    }

    return RetVal;
}

#define KEY_SIZE                    (0x03U)
#define SFE                         (0x00U)


#define G2B_AES128_ECB_PLAIN_TEXT_SIZE 16
static uint8_t G2B_Aes128EcbPlaintext_1[G2B_AES128_ECB_PLAIN_TEXT_SIZE]=
{
		   0x10, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f
};

#define G2B_AES128_ECB_RESULT_TEXT_SIZE 16
#define APP_AES128_KEY_SIZE 16
static uint8_t App_au8Aes128EcbResult[G2B_AES128_ECB_RESULT_TEXT_SIZE];

static uint8_t App_au8Aes128EcbOriginalMessage[G2B_AES128_ECB_RESULT_TEXT_SIZE];

#define APP_AES128_KEY_ID CryptoConf_CryptoKey_CryptoKey_AES
#define KEY_MATERIAL_ELEMENT_ID_U32 CryptoConf_CryptoKeyElement_CryptoKeyElement_AES_KEY
#define APP_AES128_CDO_ID CryptoConf_CryptoDriverObject_CryptoDriverObject_AES_ECB

uint32 ResultLength = 16;


static Crypto_JobType G2B_AES128_ECB_Decrypt_ProcessJob =
{
		.jobId = 1U,
		.jobState = CRYPTO_JOBSTATE_IDLE,

	// Crypto_JobPrimitiveInputOutputType: structure, in this we specify different
	// buffer value's to input and out put data.

		 .jobPrimitiveInputOutput =
		 {
			.inputPtr = App_au8Aes128EcbResult,
			.inputLength = G2B_AES128_ECB_PLAIN_TEXT_SIZE,
			.secondaryInputPtr = NULL_PTR,
			.secondaryInputLength = 0,
			.tertiaryInputPtr = NULL_PTR,
			.tertiaryInputLength = 0,
			.outputPtr = App_au8Aes128EcbOriginalMessage,
			.outputLengthPtr = &ResultLength,
			.secondaryOutputPtr = NULL_PTR,
			.secondaryOutputLengthPtr = NULL_PTR,
			.input64 = 0,
			.verifyPtr = NULL_PTR,
			.output64Ptr = NULL_PTR,
			.mode = CRYPTO_OPERATIONMODE_SINGLECALL,
			.cryIfKeyId = APP_AES128_KEY_ID,
			.targetCryIfKeyId = 0,
		 },

	// Crypto_JobPrimitiveInfoType: structure, in this we brief about the crypto primitive that
	// we need to use.
	.jobPrimitiveInfo = &(Crypto_JobPrimitiveInfoType)
	{
			.callbackId = 0,
			.primitiveInfo = &(Crypto_PrimitiveInfoType)
					{
				       .resultLength = G2B_AES128_ECB_RESULT_TEXT_SIZE,
					   .service = CRYPTO_DECRYPT,
					   .algorithm =
					   {
							.family = CRYPTO_ALGOFAM_AES,
							.secondaryFamily = CRYPTO_ALGOFAM_NOT_SET ,
							.keyLength = 128, // 16 bytes which is 128 in bits
							.mode = CRYPTO_ALGOMODE_ECB,// Type of AES Mode we want to perform
					   },
					},

			 .cryIfKeyId = APP_AES128_KEY_ID,
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




static Crypto_JobType G2B_AES128_ECB_Encrypt_ProcessJob =
{
		.jobId = 1U,
		.jobState = CRYPTO_JOBSTATE_IDLE,

	// Crypto_JobPrimitiveInputOutputType: structure, in this we specify different
	// buffer value's to input and out put data.

		 .jobPrimitiveInputOutput =
		 {
			.inputPtr = G2B_Aes128EcbPlaintext_1,
			.inputLength = G2B_AES128_ECB_PLAIN_TEXT_SIZE,
			.secondaryInputPtr = NULL_PTR,
			.secondaryInputLength = 0,
			.tertiaryInputPtr = NULL_PTR,
			.tertiaryInputLength = 0,
			.outputPtr = App_au8Aes128EcbResult,
			.outputLengthPtr = &ResultLength,
			.secondaryOutputPtr = NULL_PTR,
			.secondaryOutputLengthPtr = NULL_PTR,
			.input64 = 0,
			.verifyPtr = NULL_PTR,
			.output64Ptr = NULL_PTR,
			.mode = CRYPTO_OPERATIONMODE_SINGLECALL,
			.cryIfKeyId = APP_AES128_KEY_ID,
			.targetCryIfKeyId = 0,
		 },

	// Crypto_JobPrimitiveInfoType: structure, in this we brief about the crypto primitive that
	// we need to use.
	.jobPrimitiveInfo = &(Crypto_JobPrimitiveInfoType)
	{
			.callbackId = 0,
			.primitiveInfo = &(Crypto_PrimitiveInfoType)
					{
				       .resultLength = G2B_AES128_ECB_RESULT_TEXT_SIZE,
					   .service = CRYPTO_ENCRYPT,
					   .algorithm =
					   {
							.family = CRYPTO_ALGOFAM_AES,
							.secondaryFamily = CRYPTO_ALGOFAM_NOT_SET ,
							.keyLength = 128, // 16 bytes which is 128 in bits
							.mode = CRYPTO_ALGOMODE_ECB,// Type of AES Mode we want to perform
					   },
					},

			 .cryIfKeyId = APP_AES128_KEY_ID,
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

static uint8_t AES_128_EcbKey[APP_AES128_KEY_SIZE] = {
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

    	RetVal = Crypto_KeyElementSet(APP_AES128_KEY_ID, KEY_MATERIAL_ELEMENT_ID_U32, AES_128_EcbKey, APP_AES128_KEY_SIZE  );
        App_SetSuccessStatus((Std_ReturnType)E_OK == RetVal);


    	RetVal = Crypto_KeySetValid(APP_AES128_KEY_ID);
        App_SetSuccessStatus((Std_ReturnType)E_OK == RetVal);

    	RetVal = Crypto_ProcessJob(APP_AES128_CDO_ID, &G2B_AES128_ECB_Encrypt_ProcessJob);
        App_SetSuccessStatus((Std_ReturnType)E_OK == RetVal);


    	RetVal = Crypto_ProcessJob(APP_AES128_CDO_ID, &G2B_AES128_ECB_Decrypt_ProcessJob);
        App_SetSuccessStatus((Std_ReturnType)E_OK == RetVal);

//		//Run AES128 Encryption/Decryption()
//
//
//		Run CMAC generate/verify example()



    }
    return exit_code;
}

/** @} */
