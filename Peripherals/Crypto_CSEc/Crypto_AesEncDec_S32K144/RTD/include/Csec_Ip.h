/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : Crypto
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

#ifndef CSEC_IP_H
#define CSEC_IP_H

/**
*   @file
*
*   @addtogroup CSEC_IP
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                          INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Csec_Ip_Cfg.h"
#include "StandardTypes.h"

/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CSEC_IP_VENDOR_ID_H                       43
#define CSEC_IP_SW_MAJOR_VERSION_H                1
#define CSEC_IP_SW_MINOR_VERSION_H                0
#define CSEC_IP_SW_PATCH_VERSION_H                0

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/

/* Check if Csec_Ip header file and Csec_Ip_Cfg header file are of the same vendor */
#if (CSEC_IP_VENDOR_ID_H != CSEC_IP_CFG_VENDOR_ID_H)
    #error "Csec_Ip.h and Csec_Ip_Cfg.h have different vendor ids"
#endif

/* Check if Csec_Ip header file and Csec_Ip_Cfg header file are of the same Software version */
#if ((CSEC_IP_SW_MAJOR_VERSION_H != CSEC_IP_CFG_SW_MAJOR_VERSION_H) || \
     (CSEC_IP_SW_MINOR_VERSION_H != CSEC_IP_CFG_SW_MINOR_VERSION_H) || \
     (CSEC_IP_SW_PATCH_VERSION_H != CSEC_IP_CFG_SW_PATCH_VERSION_H)    \
    )
    #error "Software Version Numbers of Csec_Ip.h and Csec_Ip_Cfg.h are different"
#endif

/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/
/** @brief The bit is set when CSEC is processing a command. */
#define CSEC_IP_STATUS_BUSY_U8              ((uint8)0x01U)
/** @brief The bit is set if the secure booting is activated. */
#define CSEC_IP_STATUS_SECURE_BOOT_U8       ((uint8)0x02U)
/** @brief The bit is set if the secure booting has been personalized during the boot sequence. */
#define CSEC_IP_STATUS_BOOT_INIT_U8         ((uint8)0x04U)
/**
 * @brief The bit is set when the secure booting has been finished by calling either CMD_BOOT_FAILURE
 *        or CMD_BOOT_OK or if CMD_SECURE_BOOT failed in verifying BOOT_MAC. 
 */
#define CSEC_IP_STATUS_BOOT_FINISHED_U8     ((uint8)0x08U)
/**
 * @brief The bit is set if the secure booting (CMD_SECURE_BOOT) succeeded. If CMD_BOOT_FAILURE is
 *        called the bit is erased.
 */
#define CSEC_IP_STATUS_BOOT_OK_U8           ((uint8)0x10U)
/** @brief The bit is set if the random number generator has been initialized. */
#define CSEC_IP_STATUS_RND_INIT_U8          ((uint8)0x20U)
/** @brief The bit is set if an external debugger is connected to the chip. */
#define CSEC_IP_STATUS_EXT_DEBUGGER_U8      ((uint8)0x40U)
/** @brief The bit is set if the internal debugging mechanisms are activated. */
#define CSEC_IP_STATUS_INT_DEBUGGER_U8      ((uint8)0x80U)

/*==================================================================================================
*                                              ENUMS
==================================================================================================*/

/*==================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
 * @brief Status of the CSEC cryptographic related feature set.
 *        Provides one bit for each status code as per SHE specification.
 *        CSEC IP status masks can be used for status verification.
 * @implements Csec_Ip_StatusType_typedef
 */
typedef uint8 Csec_Ip_StatusType;

/**
 * @brief Enum defining the Key IDs and key memory slot idenfitication.
 * @details Key ID values based on key bank select and key index
 * @implements Csec_Ip_KeyIdType_typedef
 */
typedef enum
{
    CSEC_IP_SECRET_KEY           = 0x00, /**< @brief Secret key */
    CSEC_IP_MASTER_ECU_KEY       = 0x01, /**< @brief Master ECU key */
    CSEC_IP_BOOT_MAC_KEY         = 0x02, /**< @brief Boot MAC key used by the secure booting mechanism to verify the authenticity of the software */
    CSEC_IP_BOOT_MAC             = 0x03, /**< @brief Stores the MAC of the Bootloader for the secure booting mechanism */
    CSEC_IP_KEY_1                = 0x04, /**< @brief User key 1 */
    CSEC_IP_KEY_2                = 0x05, /**< @brief User key 2 */
    CSEC_IP_KEY_3                = 0x06, /**< @brief User key 3 */
    CSEC_IP_KEY_4                = 0x07, /**< @brief User key 4 */
    CSEC_IP_KEY_5                = 0x08, /**< @brief User key 5 */
    CSEC_IP_KEY_6                = 0x09, /**< @brief User key 6 */
    CSEC_IP_KEY_7                = 0x0A, /**< @brief User key 7 */
    CSEC_IP_KEY_8                = 0x0B, /**< @brief User key 8 */
    CSEC_IP_KEY_9                = 0x0C, /**< @brief User key 9 */
    CSEC_IP_KEY_10               = 0x0D, /**< @brief User key 10 */
    CSEC_IP_RAM_KEY              = 0x0F, /**< @brief A volatile key that can be used for arbitrary operations */
    CSEC_IP_KEY_11               = 0x14, /**< @brief User key 11 */
    CSEC_IP_KEY_12               = 0x15, /**< @brief User key 12 */
    CSEC_IP_KEY_13               = 0x16, /**< @brief User key 13 */
    CSEC_IP_KEY_14               = 0x17, /**< @brief User key 14 */
    CSEC_IP_KEY_15               = 0x18, /**< @brief User key 15 */
    CSEC_IP_KEY_16               = 0x19, /**< @brief User key 16 */
    CSEC_IP_KEY_17               = 0x1A, /**< @brief User key 17 */
    CSEC_IP_KEY_18               = 0x1B, /**< @brief User key 18 */
    CSEC_IP_KEY_19               = 0x1C, /**< @brief User key 19 */
    CSEC_IP_KEY_20               = 0x1D, /**< @brief User key 20 */
    CSEC_IP_KEY_INVALID          = 0xFF  /**< @brief Invalid key */
} Csec_Ip_KeyIdType;

/**
 * @brief Enum defining SHE compliant commands present in the CSEc command set.
 * @implements Csec_Ip_CmdType_typedef
 */
typedef enum
{
    CSEC_IP_CMD_ENC_ECB        = 0x01, /**< @brief AES-128 encryption in ECB mode */
    CSEC_IP_CMD_ENC_CBC        = 0x02, /**< @brief AES-128 encryption in CBC mode */
    CSEC_IP_CMD_DEC_ECB        = 0x03, /**< @brief AES-128 decryption in ECB mode */
    CSEC_IP_CMD_DEC_CBC        = 0x04, /**< @brief AES-128 decryption in CBC mode */
    CSEC_IP_CMD_GENERATE_MAC   = 0x05, /**< @brief AES-128 based CMAC generation */
    CSEC_IP_CMD_VERIFY_MAC     = 0x06, /**< @brief AES-128 based CMAC verification */
    CSEC_IP_CMD_LOAD_KEY       = 0x07, /**< @brief Internal key update */
    CSEC_IP_CMD_LOAD_PLAIN_KEY = 0x08, /**< @brief RAM key update */
    CSEC_IP_CMD_EXPORT_RAM_KEY = 0x09, /**< @brief RAM key export */
    CSEC_IP_CMD_INIT_RNG       = 0x0A, /**< @brief PRNG initialization */
    CSEC_IP_CMD_EXTEND_SEED    = 0x0B, /**< @brief PRNG seed entropy extension */
    CSEC_IP_CMD_RND            = 0x0C, /**< @brief Random number generation */
    CSEC_IP_CMD_BOOT_FAILURE   = 0x0E, /**< @brief Impose sanctions during invalid boot */
    CSEC_IP_CMD_BOOT_OK        = 0x0F, /**< @brief Finish boot verification */
    CSEC_IP_CMD_GET_ID         = 0x10, /**< @brief Get UID */
    CSEC_IP_CMD_BOOT_DEFINE    = 0x11, /**< @brief Secure boot configuration */
    CSEC_IP_CMD_DBG_CHAL       = 0x12, /**< @brief Get debug challenge */
    CSEC_IP_CMD_DBG_AUTH       = 0x13, /**< @brief Debug authentication */
    CSEC_IP_CMD_MP_COMPRESS    = 0x16  /**< @brief Miyaguchi-Preneel compression */
} Csec_Ip_CmdType;

/**
 * @brief Enum defining call sequence.
 * @details Data can be processed in one function call or, if it is too large and can not be done in a single function call,
 * a series of function calls can be used to process the data set. This enum will provide the information regarding the call sequence,
 * if it is the first or a following function call.
 * @implements Csec_Ip_CallSequenceType_typedef
 */
typedef enum
{
    CSEC_IP_CALL_SEQ_FIRST,            /**< @brief 1st function call */
    CSEC_IP_CALL_SEQ_SUBSEQUENT        /**< @brief 2nd to nth function call */
} Csec_Ip_CallSequenceType;

/**
 * @brief Enum defining the boot type for the BOOT_DEFINE command.
 * @implements Csec_Ip_BootFlavorType_typedef
 */
typedef enum
{
    CSEC_IP_BOOT_STRICT,               /**< @brief Strict Boot method */
    CSEC_IP_BOOT_SERIAL,               /**< @brief Serial Boot method */
    CSEC_IP_BOOT_PARALLEL,             /**< @brief Parallel Boot method */
    CSEC_IP_BOOT_NOT_DEFINED           /**< @brief No Boot defined or non-CSEC enabled part */
} Csec_Ip_BootFlavorType;

/**
 * @brief Unsigned integer defining the CSEC error codes.
 * @details A 16 bitfield that provides one bit for each error code.
 * @implements Csec_Ip_ErrorCodeType_typedef
 */
typedef uint16 Csec_Ip_ErrorCodeType;
#define CSEC_IP_ERC_NO_ERROR            ((Csec_Ip_ErrorCodeType)0x0001) /**< @brief No error has occurred. */
#define CSEC_IP_ERC_SEQUENCE_ERROR      ((Csec_Ip_ErrorCodeType)0x0002) /**< @brief The call sequence of the commands is invalid. */
#define CSEC_IP_ERC_KEY_NOT_AVAILABLE   ((Csec_Ip_ErrorCodeType)0x0004) /**< @brief The used key has DBG Attached flag and debugger is active. */
#define CSEC_IP_ERC_KEY_INVALID         ((Csec_Ip_ErrorCodeType)0x0008) /**< @brief A function is called to perform an operation with a key that is not allowed for the given operation. */
#define CSEC_IP_ERC_KEY_EMPTY           ((Csec_Ip_ErrorCodeType)0x0010) /**< @brief Key slot is empty (not initialized)/not present or higher slot (not partitioned). */
#define CSEC_IP_ERC_NO_SECURE_BOOT      ((Csec_Ip_ErrorCodeType)0x0020) /**< @brief Not applicable, BOOT_DEFINE once configured, will automatically run secure boot. */
#define CSEC_IP_ERC_KEY_WRITE_PROTECTED ((Csec_Ip_ErrorCodeType)0x0040) /**< @brief A key update is attempted on a write protected key slot or the debugger is started while a key is write-protected. */
#define CSEC_IP_ERC_KEY_UPDATE_ERROR    ((Csec_Ip_ErrorCodeType)0x0080) /**< @brief A key update did not succeed due to errors in verification of the messages. */
#define CSEC_IP_ERC_RNG_SEED            ((Csec_Ip_ErrorCodeType)0x0100) /**< @brief The PRNG seed has not yet been initialized. */
#define CSEC_IP_ERC_NO_DEBUGGING        ((Csec_Ip_ErrorCodeType)0x0200) /**< @brief Internal debugging is not possible because the authentication did not succeed. */
#define CSEC_IP_ERC_MEMORY_FAILURE      ((Csec_Ip_ErrorCodeType)0x0400) /**< @brief General memory technology failure (multi-bit ECC error, common fault detection). */
#define CSEC_IP_ERC_GENERAL_ERROR       ((Csec_Ip_ErrorCodeType)0x0800) /**< @brief Detected error that is not covered by the other error codes. */
#define CSEC_IP_ERC_NO_RESPONSE         ((Csec_Ip_ErrorCodeType)0xFFFE) /**< @brief No response received from Csec Ip in the timeout window. */
#define CSEC_IP_ERC_STATUS_BUSY         ((Csec_Ip_ErrorCodeType)0xFFFF) /**< @brief Another command is in progress. */

/**
 * @brief Callback for asynchronous command.
 * @implements pfCsecIpResponseCallbackType_typedef
 */
typedef void (*pfCsecIpResponseCallbackType)(Csec_Ip_ErrorCodeType ErrCode, Csec_Ip_CmdType eCompletedCmd, void* pCallbackParam);

/**
 * @brief Enum defining the possible asynchronous types of service requests.
 * @implements Csec_Ip_ReqTypeType_typedef
 */
typedef enum
{
    CSEC_IP_REQTYPE_SYNC,         /**< Synchronous - the service request function does not return until the CSEC completes
                                       the request, or the timeout expires */
    CSEC_IP_REQTYPE_ASYNC_IRQ,    /**< Asynchronous using interrupts - the service request function returns right after
                                       sending the request to CSEc; an interrupt is triggered when CSEc completes the request
                                       (application can be notified through the callback) */
    CSEC_IP_REQTYPE_ASYNC_POLL    /**< Asynchronous polling - the service request function returns right after sending the
                                       request to CSEc; application must poll the driver by calling Csec_Ip_MainFunction */
} Csec_Ip_ReqTypeType;

/**
 * @brief Structure defining driver state.
 * @implements Csec_Ip_StateType_typedef
 */
typedef struct
{
    boolean                      bCmdInProgress; /**< Specifies if a command is in progress. If a command is in progress this boolean will be set to TRUE */
    Csec_Ip_CmdType              eCmd;           /**< Specifies the type of the command in execution */
    const uint8*                 pInputBuff;     /**< Specifies the input pointer of the command in execution */
    uint8*                       pOutputBuff;    /**< Specifies the output pointer of the command in execution */
    uint32                       u32Index;       /**< Specifies the index in the input buffer of the command in execution */
    uint32                       u32InputSize;   /**< Specifies the size of the input of the command in execution */
    uint8                        u8PartialSize;  /**< Specifies the size of the currently processed chunck of the input */
    Csec_Ip_KeyIdType            eKeyId;         /**< Specifies the key used for the command in execution */
    Csec_Ip_ErrorCodeType        ErrCode;        /**< Specifies the error code of the last executed command */
    const uint8*                 pIV;            /**< Specifies the IV of the command in execution (for encryption/decryption using CBC mode) */
    Csec_Ip_CallSequenceType     eSeq;           /**< Specifies if the information is the first or a following function call. */
    uint32                       u32MsgLen;      /**< Specifies the message size (in bits) for the command in execution (for MAC generation/verification) */
    boolean*                     pbVerifStatus;  /**< Specifies the result of the last executed MAC verification command */
    boolean                      bMacWritten;    /**< Specifies if the MAC to be verified was written in CSE_PRAM for a MAC verification command */
    const uint8*                 pMac;           /**< Specifies the MAC to be verified for a MAC verification command */
    uint16                       u16MacLen;      /**< Specifies the number of bits of the MAC to be verified for a MAC verification command */
    pfCsecIpResponseCallbackType pfCallback;     /**< The callback invoked when an asynchronous command is completed */
    void*                        pCallbackParam; /**< User parameter for the command completion callback */
    Csec_Ip_ReqTypeType          eReqType;       /**< Selects the request type, asynchronous using interrupts or asynchronous polling */
    uint32                       u32Timeout;     /**< Timeout for a command in ticks or microseconds depending on the value (TICKS or SYSTEM) of the 'CSEc Ip Timeout Counter Type' attribute in the configuration. */
} Csec_Ip_StateType;

/**
 * @brief Structure defining request parameters.
 * @implements Csec_Ip_ReqType_typedef
 */
typedef struct
{
    Csec_Ip_ReqTypeType          eReqType;       /**< Selects the request type (POLL/IRQ) */
    pfCsecIpResponseCallbackType pfCallback;     /**< The callback for asynchronous request */
    void*                        pCallbackParam; /**< Parameter used to call the asynchronous callback(can be NULL) */
} Csec_Ip_ReqType;

/*==================================================================================================
*                                  GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                       FUNCTION PROTOTYPES
==================================================================================================*/
#define CRYPTO_START_SEC_CODE
#include "Crypto_MemMap.h"

/**
 * @brief Initializes the internal state of the driver.
 *
 * @param[in] pState Pointer to the state structure which will be used for holding
 * the internal state of the driver.
 * 
 * @return      void
 */
void Csec_Ip_Init
(
    Csec_Ip_StateType* pState
);

/**
 * @brief Clears the internal state of the driver.
 * 
 * @return      void
 */
void Csec_Ip_Deinit(void);

/**
 * @brief Performs the AES-128 encryption in ECB mode.
 * @details This function performs the AES-128 encryption in ECB mode of the input
 * plain text buffer
 * The request can be performed synchronous or asynchronous.
 *
 * @param[in]  pRequest     Pointer to a structure that describes the request parameters,
 * containing the request type (sync/async polling/async interrupt),
 * pointer to the callback to be called when async operation completes,
 * parameter to send to the callback when async operation completes.
 * @param[in]  eKeyId       KeyID used to perform the cryptographic operation.
 * @param[in]  pPlainText   Pointer to the plain text buffer.
 * @param[in]  u32Length    Number of bytes of plain text message to be encrypted.
 *                          It should be multiple of 16 bytes.
 * @param[out] pCipherText Pointer to the cipher text buffer. The buffer shall
 * have the same size as the plain text buffer.
 * 
 * @return Error Code after command execution. Output parameters are valid if
 * the error code is CSEC_IP_ERC_NO_ERROR.
 */
Csec_Ip_ErrorCodeType Csec_Ip_EncryptEcb
(
    const Csec_Ip_ReqType* pRequest,
    Csec_Ip_KeyIdType      eKeyId,
    const uint8*           pPlainText,
    uint32                 u32Length,
    uint8*                 pCipherText
);

/**
 * @brief Performs the AES-128 decryption in ECB mode.
 * @details This function performs the AES-128 decryption in ECB mode of the input
 * cipher text buffer.
 * The request can be performed synchronous or asynchronous.
 *
 * @param[in]  pRequest    Pointer to a structure that describes the request parameters,
 * containing the request type (sync/async polling/async interrupt),
 * pointer to the callback to be called when async operation completes,
 * parameter to send to the callback when async operation completes.
 * @param[in]  eKeyId      KeyID used to perform the cryptographic operation
 * @param[in]  pCipherText Pointer to the cipher text buffer.
 * @param[in]  u32Length   Number of bytes of cipher text message to be decrypted.
 *                        It should be multiple of 16 bytes.
 * @param[out] pPlainText Pointer to the plain text buffer. The buffer shall
 * have the same size as the cipher text buffer.
 * 
 * @return Error Code after command execution. Output parameters are valid if
 * the error code is CSEC_IP_ERC_NO_ERROR.
 */
Csec_Ip_ErrorCodeType Csec_Ip_DecryptEcb
(
    const Csec_Ip_ReqType* pRequest,
    Csec_Ip_KeyIdType      eKeyId,
    const uint8*           pCipherText,
    uint32                 u32Length,
    uint8*                 pPlainText
);

/**
 * @brief Performs the AES-128 encryption in CBC mode.
 * @details This function performs the AES-128 encryption in CBC mode of the input
 * plaintext buffer.
 * The request can be performed synchronous or asynchronous.
 *
 * @param[in]  pRequest    Pointer to a structure that describes the request parameters,
 * containing the request type (sync/async polling/async interrupt),
 * pointer to the callback to be called when async operation completes,
 * parameter to send to the callback when async operation completes.
 * @param[in]  eKeyId      KeyID used to perform the cryptographic operation.
 * @param[in]  pPlainText  Pointer to the plain text buffer.
 * @param[in]  u32Length   Number of bytes of plain text message to be encrypted.
 * It should be multiple of 16 bytes.
 * @param[in]  pIV         Pointer to the initialization vector buffer.
 * @param[out] pCipherText Pointer to the cipher text buffer. The buffer shall
 * have the same size as the plain text buffer.
 * 
 * @return Error Code after command execution. Output parameters are valid if
 * the error code is CSEC_IP_ERC_NO_ERROR.
 */
Csec_Ip_ErrorCodeType Csec_Ip_EncryptCbc
(
    const Csec_Ip_ReqType* pRequest,
    Csec_Ip_KeyIdType      eKeyId,
    const uint8*           pPlainText,
    uint32                 u32Length,
    const uint8*           pIV,
    uint8*                 pCipherText
);

/**
 * @brief Performs the AES-128 decryption in CBC mode.
 * @details This function performs the AES-128 decryption in CBC mode of the input
 * cipher text buffer.
 * The request can be performed synchronous or asynchronous.
 *
 * @param[in]  pRequest    Pointer to a structure that describes the request parameters,
 * containing the request type (sync/async polling/async interrupt),
 * pointer to the callback to be called when async operation completes,
 * parameter to send to the callback when async operation completes.
 * @param[in]  eKeyId      KeyID used to perform the cryptographic operation.
 * @param[in]  pCipherText Pointer to the cipher text buffer.
 * @param[in]  u32Length   Number of bytes of cipher text message to be decrypted.
 * It should be multiple of 16 bytes.
 * @param[in]  pIV Pointer to the initialization vector buffer.
 * @param[out] pPlainText  Pointer to the plain text buffer. The buffer shall
 * have the same size as the cipher text buffer.
 * 
 * @return Error Code after command execution. Output parameters are valid if
 * the error code is CSEC_IP_ERC_NO_ERROR.
 */
Csec_Ip_ErrorCodeType Csec_Ip_DecryptCbc
(
    const Csec_Ip_ReqType* pRequest,
    Csec_Ip_KeyIdType      eKeyId,
    const uint8*           pCipherText,
    uint32                 u32Length,
    const uint8*           pIV,
    uint8*                 pPlainText
);

/**
 * @brief Calculates the MAC of a given message using CMAC with AES-128.
 * @details This function calculates the MAC of a given message using CMAC with AES-128.
 * The request can be performed synchronous or asynchronous.
 *
 * @param[in]  pRequest   Pointer to a structure that describes the request parameters,
 * containing the request type (sync/async polling/async interrupt),
 * pointer to the callback to be called when async operation completes,
 * parameter to send to the callback when async operation completes.
 * @param[in]  eKeyId     KeyID used to perform the cryptographic operation.
 * @param[in]  pMsg       Pointer to the message buffer.
 * @param[in]  u32MsgLen  Number of bits of message on which CMAC will be computed.
 * @param[out] pCmac      Pointer to the buffer containing the result of the CMAC
 * computation.
 * 
 * @return Error Code after command execution. Output parameters are valid if
 * the error code is CSEC_IP_ERC_NO_ERROR.
 */
Csec_Ip_ErrorCodeType Csec_Ip_GenerateMac
(
    const Csec_Ip_ReqType* pRequest,
    Csec_Ip_KeyIdType      eKeyId,
    const uint8*           pMsg,
    uint32                 u32MsgLen,
    uint8*                 pCmac
);


/**
 * @brief Verifies the MAC of a given message using CMAC with AES-128.
 * @details This function verifies the MAC of a given message using CMAC with AES-128.
 * The request can be performed synchronous or asynchronous.
 *
 * @param[in]  pRequest      Pointer to a structure that describes the request parameters,
 * containing the request type (sync/async polling/async interrupt),
 * pointer to the callback to be called when async operation completes,
 * parameter to send to the callback when async operation completes.
 * @param[in]  eKeyId        KeyID used to perform the cryptographic operation.
 * @param[in]  pMsg          Pointer to the message buffer.
 * @param[in]  pMsg          Number of bits of message on which CMAC will be computed.
 * @param[in]  pMac          Pointer to the buffer containing the CMAC to be verified.
 * @param[in]  u16MacLen     Number of bits of the CMAC to be compared. A macLength
 * value of zero indicates that all 128-bits are compared.
 * @param[out] pbVerifStatus Status of MAC verification command (true:
 * verification operation passed, false: verification operation failed).
 * 
 * @return Error Code after command execution. Output parameters are valid if
 * the error code is CSEC_IP_ERC_NO_ERROR.
 */
Csec_Ip_ErrorCodeType Csec_Ip_VerifyMac
(
    const Csec_Ip_ReqType* pRequest,
    Csec_Ip_KeyIdType      eKeyId,
    const uint8*           pMsg,
    uint32                 u32MsgLen,
    const uint8*           pMac,
    uint16                 u16MacLen,
    boolean*               pbVerifStatus
);


/**
 * @brief Updates an internal key per the SHE specification.
 * @details This function updates an internal key per the SHE specification.
 *
 * @param[in]  eKeyId KeyID of the key to be updated.
 * @param[in]  pM1    Pointer to the 128-bit M1 message containing the UID, Key ID
 * and Authentication Key ID.
 * @param[in]  pM2    Pointer to the 256-bit M2 message contains the new security
 * flags, counter and the key value all encrypted using a derived key generated
 * from the Authentication Key.
 * @param[in]  pM3    Pointer to the 128-bit M3 message is a MAC generated over
 * messages M1 and M2.
 * @param[out] pM4    Pointer to a 256 bits buffer where the computed M4 parameter
 * is stored.
 * @param[out] pM5    Pointer to a 128 bits buffer where the computed M5 parameters
 * is stored.
 * 
 * @return Error Code after command execution. Output parameters are valid if
 * the error code is CSEC_IP_ERC_NO_ERROR.
 */
Csec_Ip_ErrorCodeType Csec_Ip_LoadKey
(
    Csec_Ip_KeyIdType eKeyId,
    const uint8*      pM1,
    const uint8*      pM2,
    const uint8*      pM3,
    uint8*            pM4,
    uint8*            pM5
);

/**
 * @brief Updates the RAM key memory slot with a 128-bit plaintext.
 * @details The function updates the RAM key memory slot with a 128-bit plaintext. The
 * key is loaded without encryption and verification of the key, i.e. the key is
 * handed over in plaintext. A plain key can only be loaded into the RAM_KEY
 * slot.
 *
 * @param[in]  pPlainKey Pointer to the 128-bit buffer containing the key that
 * needs to be copied in RAM_KEY slot.
 * 
 * @return Error Code after command execution.
 */
Csec_Ip_ErrorCodeType Csec_Ip_LoadPlainKey
(
    const uint8* pPlainKey
);

/**
 * @brief Exports the RAM_KEY into a format protected by SECRET_KEY.
 * @details This function exports the RAM_KEY into a format protected by SECRET_KEY.
 *
 * @param[out] pM1 Pointer to a buffer where the M1 parameter will be exported.
 * @param[out] pM2 Pointer to a buffer where the M2 parameter will be exported.
 * @param[out] pM3 Pointer to a buffer where the M3 parameter will be exported.
 * @param[out] pM4 Pointer to a buffer where the M4 parameter will be exported.
 * @param[out] pM5 Pointer to a buffer where the M5 parameter will be exported.
 * 
 * @return Error Code after command execution. Output parameters are valid if
 * the error code is CSEC_IP_ERC_NO_ERROR.
 */
Csec_Ip_ErrorCodeType Csec_Ip_ExportRamKey
(
    uint8* pM1,
    uint8* pM2,
    uint8* pM3,
    uint8* pM4,
    uint8* pM5
);

/**
 * @brief Initializes the seed and derives a key for the PRNG.
 * @details The function initializes the seed and derives a key for the PRNG.
 * The function must be called before CMD_RND after every power cycle/reset.
 *
 * @return Error Code after command execution.
 */
Csec_Ip_ErrorCodeType Csec_Ip_InitRng(void);

/**
 * @brief Extends the seed of the PRNG.
 * @details Extends the seed of the PRNG by compressing the former seed value and the
 * supplied entropy into a new seed. This new seed is then to be used to
 * generate a random number by invoking the CMD_RND command. The random number
 * generator must be initialized by CMD_INIT_RNG before the seed may be
 * extended.
 *
 * @param[in] pEntropy Pointer to a 128-bit buffer containing the entropy.
 * 
 * @return Error Code after command execution. Output parameters are valid if
 * the error code is CSEC_IP_ERC_NO_ERROR.
 */
Csec_Ip_ErrorCodeType Csec_Ip_ExtendSeed
(
    const uint8* pEntropy
);

/**
 * @brief Generates a vector of 128 random bits.
 * @details The function returns a vector of 128 random bits. The random number generator
 * has to be initialized by calling Csec_Ip_InitRng before random numbers can
 * be supplied.
 *
 * @param[in]  pRequest  Pointer to a structure that describes the request parameters,
 * containing the request type (sync/async polling/async interrupt),
 * pointer to the callback to be called when async operation completes,
 * parameter to send to the callback when async operation completes.
 * @param[out] pRnd      Pointer to a 128-bit buffer where the generated random number
 * has to be stored.
 * 
 * @return Error Code after command execution. Output parameters are valid if
 * the error code is CSEC_IP_ERC_NO_ERROR.
 */
Csec_Ip_ErrorCodeType Csec_Ip_GenerateRnd
(
    const Csec_Ip_ReqType* pRequest,
    uint8* pRnd
);

/**
 * @brief Signals a failure detected during later stages of the boot process.
 * @details The function is called during later stages of the boot process to detect a
 * failure.
 *
 * @return Error Code after command execution.
 */
Csec_Ip_ErrorCodeType Csec_Ip_BootFailure(void);

/**
 * @brief Marks a successful boot verification during later stages of the boot
 * process.
 * @details The function is called during later stages of the boot process to mark
 * successful boot verification.
 *
 * @return Error Code after command execution.
 */
Csec_Ip_ErrorCodeType Csec_Ip_BootOk(void);

/**
 * @brief Implements an extension of the SHE standard to define both the user
 * boot size and boot method.
 * @details The function implements an extension of the SHE standard to define both the
 * user boot size and boot method.
 *
 * @param[in] u32BootSize Number of blocks of 128-bit data to check on boot.
 * Maximum size is 512kBytes.
 * @param[in] eBootFlavor The boot method.
 * 
 * @return Error Code after command execution.
 */
Csec_Ip_ErrorCodeType Csec_Ip_BootDefine
(
    uint32                 u32BootSize,
    Csec_Ip_BootFlavorType eBootFlavor
);

/**
 * @brief Returns the content of the status register.
 * @details The function shall return the content of the status register.
 *
 * @return Value of the status register.
 *
 */
Csec_Ip_StatusType Csec_Ip_GetStatus(void);

/**
 * @brief Returns the identity (UID) and the value of the status register
 * protected by a MAC over a challenge and the data.
 * @details This function returns the identity (UID) and the value of the status register
 * protected by a MAC over a challenge and the data.
 *
 * @param[in]  pChallenge Pointer to the 128-bit buffer containing Challenge data.
 * @param[out] pUid       Pointer to 120 bit buffer where the UID will be stored.
 * @param[out] pSreg      Value of the status register.
 * @param[out] pMac       Pointer to the 128 bit buffer where the MAC generated over
 * challenge and UID and status  will be stored.
 * 
 * @return Error Code after command execution. Output parameters are valid if
 * the error code is CSEC_IP_ERC_NO_ERROR.
 */
Csec_Ip_ErrorCodeType Csec_Ip_GetId
(
    const uint8* pChallenge,
          uint8* pUid,
          uint8* pSreg,
          uint8* pMac
);

/**
 * @brief Obtains a random number which the user shall use along with the
 * MASTER_ECU_KEY and UID to return an authorization request.
 * @details This function obtains a random number which the user shall use along with the
 * MASTER_ECU_KEY and UID to return an authorization request.
 *
 * @param[out] pChallenge Pointer to the 128-bit buffer where the challenge data
 * will be stored.
 * 
 * @return Error Code after command execution. Output parameters are valid if
 * the error code is CSEC_IP_ERC_NO_ERROR.
 */
Csec_Ip_ErrorCodeType Csec_Ip_DbgChal
(
    uint8* pChallenge
);

/**
 * @brief Erases all keys (actual and outdated) stored in NVM Memory if the
 * authorization is confirmed by CSEc.
 * @details This function erases all keys (actual and outdated) stored in NVM Memory if
 * the authorization is confirmed by CSEc.
 *
 * @param[in] pAuthorization Pointer to the 128-bit buffer containing the
 * authorization value.
 * @return Error Code after command execution.
 */
Csec_Ip_ErrorCodeType Csec_Ip_DbgAuth
(
    const uint8* pAuthorization
);

/**
 * @brief Compresses the given messages by accessing the Miyaguchi-Preneel
 * compression feature from the CSEc feature set.
 * @details This function accesses a Miyaguchi-Preneel compression feature within the
 * CSEc feature set to compress the given messages.
 *
 * @param[in]  pMsg        Pointer to the messages to be compressed. Messages must be
 * pre-processed per SHE specification if they do not already meet the full
 * 128-bit block size requirement.
 * @param[in]  u16MsgLen   The number of 128 bit messages to be compressed.
 * @param[out] pMpCompress Pointer to the 128 bit buffer storing the compressed
 * data.
 * 
 * @return Error Code after command execution. Output parameters are valid if
 * the error code is CSEC_IP_ERC_NO_ERROR.
 */
Csec_Ip_ErrorCodeType Csec_Ip_MpCompress
(
    const uint8* pMsg,
    uint16       u16MsgLen,
    uint8*       pMpCompress
);

/**
 * @brief Function that should be called cyclically to process the requests sent using asynchronous poll method.
 * @details After an asynchronous poll request is sent, the layer on top of the Csec_Ip
 *          should call periodically the Csec_Ip_MainFunction() in order to retrieve message processing status from CSEc
 *          and when a response is received, call the callback sent at request time.
 *
 * @return void.
 */
void Csec_Ip_MainFunction(void);

/**
 * @brief Cancels a previously launched asynchronous command.
 * 
 * @return      void
 */
void Csec_Ip_CancelCommand(void);

/**
 * @brief Updates the timeout for the synchronous commands
 * @details Updates the internal driver state with the given timeout. After calling this function the synchronous API calls will use the new timeout value.
 * 
 * @param[in] u32Timeout Timeout for a command in ticks or microseconds depending on the value (TICKS or SYSTEM) of the 'CSEc Ip Timeout Counter Type' attribute in the configuration.
 * 
 * @return      void
 */
void Csec_Ip_SetSynchronousCmdTimeout
(
    uint32 u32Timeout
);

/**
 * @brief    Interrupt handler.
 * @details  This function processes the related interrupts from CSEC
 *
 * @return      void
 */
void Csec_Ip_IrqHandler(void);

#define CRYPTO_STOP_SEC_CODE
#include "Crypto_MemMap.h"

#define CRYPTO_START_SEC_RAMCODE
#include "Crypto_MemMap.h"

/**
 * @brief Verifies the MAC of a given message (located in Flash) using CMAC with
 * AES-128.
 * @details This function verifies the MAC of a given message using CMAC with AES-128.
 * It is different from the Csec_Ip_VerifyMac function in the sense that it
 * does not involve an extra copy of the data on which the CMAC is computed and
 * the message pointer should be a pointer to Flash memory.
 *
 * @param[in]  eKeyId        KeyID used to perform the cryptographic operation.
 * @param[in]  pMsg          Pointer to the message buffer (pointing to Flash memory).
 * @param[in]  u32MsgLen     Number of bits of message on which CMAC will be computed.
 * @param[in]  pMac          Pointer to the buffer containing the CMAC to be verified.
 * @param[in]  u16MacLen     Number of bits of the CMAC to be compared. A macLength
 * value of zero indicates that all 128-bits are compared.
 * @param[out] pbVerifStatus Status of MAC verification command (true:
 * verification operation passed, false: verification operation failed).
 * 
 * @return Error Code after command execution. Output parameters are valid if
 * the error code is CSEC_IP_ERC_NO_ERROR.
 */
Csec_Ip_ErrorCodeType Csec_Ip_VerifyMacAddrMode
(
    Csec_Ip_KeyIdType eKeyId,
    const uint8*      pMsg,
    uint32            u32MsgLen,
    const uint8*      pMac,
    uint16            u16MacLen,
    boolean*          pbVerifStatus
);

/**
 * @brief Calculates the MAC of a given message (located in Flash) using CMAC
 * with AES-128.
 * @details This function calculates the MAC of a given message using CMAC with AES-128.
 * It is different from the Csec_Ip_GenerateMac function in the sense that it
 * does not involve an extra copy of the data on which the CMAC is computed and
 * the message pointer should be a pointer to Flash memory.
 *
 * @param[in]  eKeyId    KeyID used to perform the cryptographic operation.
 * @param[in]  pMsg      Pointer to the message buffer (pointing to Flash memory).
 * @param[in]  u32MsgLen Number of bits of message on which CMAC will be computed.
 * @param[out] pCmac     Pointer to the buffer containing the result of the CMAC
 * computation.
 * 
 * @return Error Code after command execution. Output parameters are valid if
 * the error code is CSEC_IP_ERC_NO_ERROR.
 */
Csec_Ip_ErrorCodeType Csec_Ip_GenerateMacAddrMode
(
    Csec_Ip_KeyIdType eKeyId,
    const uint8*      pMsg,
    uint32            u32MsgLen,
    uint8*            pCmac
);

#define CRYPTO_STOP_SEC_RAMCODE
#include "Crypto_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */

#endif /* CSEC_IP_H */
