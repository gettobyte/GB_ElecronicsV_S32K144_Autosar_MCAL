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
#include "Csec_Ip.h"
#include "Csec_Ip_Cfg.h"
#include "Csec_Ip_Pram.h"
#include "SchM_Crypto.h"
#if (STD_ON == CSEC_IP_DEV_ERROR_DETECT)
    #include "Devassert.h"
#endif /* (STD_ON == CSEC_IP_DEV_ERROR_DETECT) */

/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CSEC_IP_VENDOR_ID_C                    43
#define CSEC_IP_SW_MAJOR_VERSION_C             1
#define CSEC_IP_SW_MINOR_VERSION_C             0
#define CSEC_IP_SW_PATCH_VERSION_C             0

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/
/* Check if Csec_Ip source file and Csec_Ip header file are of the same vendor */
#if (CSEC_IP_VENDOR_ID_C != CSEC_IP_VENDOR_ID_H)
    #error "Csec_Ip.c and Csec_Ip.h have different vendor ids"
#endif

/* Check if Csec_Ip source file and Csec_Ip header file are of the same Software version */
#if ((CSEC_IP_SW_MAJOR_VERSION_C != CSEC_IP_SW_MAJOR_VERSION_H) || \
     (CSEC_IP_SW_MINOR_VERSION_C != CSEC_IP_SW_MINOR_VERSION_H) || \
     (CSEC_IP_SW_PATCH_VERSION_C != CSEC_IP_SW_PATCH_VERSION_H)    \
    )
    #error "Software Version Numbers of Csec_Ip.c and Csec_Ip.h are different"
#endif


/* Check if Csec_Ip source file and Csec_Ip_Cfg header file are of the same vendor */
#if (CSEC_IP_VENDOR_ID_C != CSEC_IP_CFG_VENDOR_ID_H)
    #error "Csec_Ip.c and Csec_Ip_Cfg.h have different vendor ids"
#endif

/* Check if Csec_Ip source file and Csec_Ip_Cfg header file are of the same Software version */
#if ((CSEC_IP_SW_MAJOR_VERSION_C != CSEC_IP_CFG_SW_MAJOR_VERSION_H) || \
     (CSEC_IP_SW_MINOR_VERSION_C != CSEC_IP_CFG_SW_MINOR_VERSION_H) || \
     (CSEC_IP_SW_PATCH_VERSION_C != CSEC_IP_CFG_SW_PATCH_VERSION_H)    \
    )
    #error "Software Version Numbers of Csec_Ip.c and Csec_Ip_Cfg.h are different"
#endif

/* Check if Csec_Ip source file and Csec_Ip_Pram header file are of the same vendor */
#if (CSEC_IP_VENDOR_ID_C != CSEC_IP_PRAM_VENDOR_ID_H)
    #error "Csec_Ip.c and Csec_Ip_Pram.h have different vendor ids"
#endif

/* Check if Csec_Ip source file and Csec_Ip_Pram header file are of the same Software version */
#if ((CSEC_IP_SW_MAJOR_VERSION_C != CSEC_IP_PRAM_SW_MAJOR_VERSION_H) || \
     (CSEC_IP_SW_MINOR_VERSION_C != CSEC_IP_PRAM_SW_MINOR_VERSION_H) || \
     (CSEC_IP_SW_PATCH_VERSION_C != CSEC_IP_PRAM_SW_PATCH_VERSION_H)    \
    )
    #error "Software Version Numbers of Csec_Ip.c and Csec_Ip_Pram.h are different"
#endif

/*==================================================================================================
*                           LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/
typedef enum
{
    CSEC_IP_FUNC_FORMAT_COPY,
    CSEC_IP_FUNC_FORMAT_ADDR
} Csec_Ip_FuncFormatType;

/*==================================================================================================
*                                          LOCAL MACROS
==================================================================================================*/
#if (STD_ON == CSEC_IP_DEV_ERROR_DETECT)
    #define CSEC_IP_RAMRDY_IS_SET                   ((CSEC_IP_FLASH->FCNFG & CSEC_IP_FCNFG_RAMRDY_MASK) != 0U)
    #define CSEC_IP_EEERDY_IS_SET                   ((CSEC_IP_FLASH->FCNFG & CSEC_IP_FCNFG_EEERDY_MASK) != 0U)
#endif /* (STD_ON == CSEC_IP_DEV_ERROR_DETECT) */
/* Verifies the status of the CCIF flag, return TRUE if CCIF bit is set */
#define CSEC_IP_CCIF_IS_SET                         ((CSEC_IP_FLASH->FSTAT & CSEC_IP_FSTAT_CCIF_MASK) != 0U)
/* Verifies the status of the CCIE flag, return TRUE if CCIE bit is set */
#define CSEC_IP_CCIE_IS_SET                         ((CSEC_IP_FLASH->FCNFG & CSEC_IP_FCNFG_CCIE_MASK) != 0U)
/* Initialization value for the index in the input buffer of the command in execution */
#define CSEC_IP_START_INDEX_U32                     ((uint32)0U)
/* Represents the shift used for converting CSE_PRAM pages number to/from bytes number */
#define CSEC_IP_BYTES_TO_FROM_PAGES_SHIFT_U8        ((uint8)4U)
/* Represents the shift used for converting a given number of bytes to 4 byte words */
#define CSEC_IP_BYTES_TO_WORD_SHIFT_U8              ((uint8)2U)
/* Represents the number of CSE_PRAM pages available for data (excluding the first page, used for command header) */
#define CSEC_IP_DATA_PAGES_AVAILABLE_U8             ((uint8)7U)
/* CSE_PRAM offset of page 1 */
#define CSEC_IP_PAGE_1_OFFSET_U8                    ((uint8)0x10U)
/* CSE_PRAM offset of page 2 */
#define CSEC_IP_PAGE_2_OFFSET_U8                    ((uint8)0x20U)
/* CSE_PRAM offset of page 3 */
#define CSEC_IP_PAGE_3_OFFSET_U8                    ((uint8)0x30U)
/* CSE_PRAM offset of page 4 */
#define CSEC_IP_PAGE_4_OFFSET_U8                    ((uint8)0x40U)
/* CSE_PRAM offset of page 5 */
#define CSEC_IP_PAGE_5_OFFSET_U8                    ((uint8)0x50U)
/* CSE_PRAM offset of page 7 */
#define CSEC_IP_PAGE_7_OFFSET_U8                    ((uint8)0x70U)
/* Mask for the upper half (2bytes) word */
#define CSEC_IP_UPPER_HALF_MASK_U32                 ((uint32)0xFFFF0000U)
/* Represents the shift used for upper half word */
#define CSEC_IP_UPPER_HALF_SHIFT_U8                 ((uint8)0x10U)
/* Mask for the lower half (2bytes) word */
#define CSEC_IP_LOWER_HALF_MASK_U32                 ((uint32)0x0000FFFFU)
/* Represents the shift used for lower half word */
#define CSEC_IP_LOWER_HALF_SHIFT_U8                 ((uint8)0x00U)
/* CSE_PRAM offset of the page length parameter used by the following commands: CMD_ENC_ECB, CMD_ENC_CBC, CMD_DEC_ECB, CMD_DEC_CBC, CMD_MP_COMPRESS */
#define CSEC_IP_PAGE_LENGTH_OFFSET_U8               ((uint8)0x0EU)
/* CSE_PRAM offset of the message length parameter used by the following commands: CMD_GENERATE_MAC, CMD_VERIFY_MAC (both copy and pointer methods) */
#define CSEC_IP_MESSAGE_LENGTH_OFFSET_U8            ((uint8)0x0CU)
/* CSE_PRAM offset of the MAC length parameter used by the following commands: CMD_VERIFY_MAC (both copy and pointer methods) */
#define CSEC_IP_MAC_LENGTH_OFFSET_U8                ((uint8)0x08U)
/* CSE_PRAM offset of the boot size parameter used by the following commands: CMD_BOOT_DEFINE */
#define CSEC_IP_BOOT_SIZE_OFFSET_U8                 ((uint8)0x1CU)
/* CSE_PRAM offset of the boot flavor parameter used by the following commands: CMD_BOOT_DEFINE */
#define CSEC_IP_BOOT_FLAVOR_OFFSET_U8               ((uint8)0x1BU)
/* CSE_PRAM offset of the Flash start address parameter used by the following commands: CMD_GENERATE_MAC, CMD_VERIFY_MAC (pointer method) */
#define CSEC_IP_FLASH_START_ADDRESS_OFFSET_U8       ((uint8)0x10U)
/* CSE_PRAM offset of the verification status parameter used by the following commands: CMD_VERIFY_MAC (both copy and pointer methods) */
#define CSEC_IP_VERIFICATION_STATUS_OFFSET_U8       ((uint8)0x14U)
/* CSE_PRAM offset of the error bits field contained by all commands */
#define CSEC_IP_ERROR_BITS_OFFSET_U8                ((uint8)0x04U)
/* CSE_PRAM offset of the SREG parameter used by the following commands: CMD_GET_ID */
#define CSEC_IP_SREG_OFFSET_U8                      ((uint8)0x2FU)
/* Represents the word 0 index in Csec_Ip_aPramRegister array */
#define CSEC_IP_WORD_0_INDEX_U8                     ((uint8)0x00U)
/* Represents the initial elapsed time */
#define CSEC_IP_NO_ELAPSED_TIME_U32                 ((uint32)0x00U)
/* Represents the size of a CSE_PRAM page in bytes */
#define CSEC_IP_PAGE_SIZE_IN_BYTES_U8               ((uint8)16U)
/* Represents the shift used for converting bits to/from bytes */
#define CSEC_IP_BYTES_TO_FROM_BITS_SHIFT_U8         ((uint8)3U)
/* Represents the number of bytes in CSE_PRAM available for data (excluding the first page, used for command header) */
#define CSEC_IP_DATA_BYTES_AVAILABLE_U8             ((uint8)112U)
/* Represents the size in bytes of the M1 entry (used for key management) */
#define CSEC_IP_M1_SIZE_IN_BYTES_U8                 ((uint8)16U)
/* Represents the size in bytes of the M2 entry (used for key management) */
#define CSEC_IP_M2_SIZE_IN_BYTES_U8                 ((uint8)32U)
/* Represents the size in bytes of the M3 entry (used for key management) */
#define CSEC_IP_M3_SIZE_IN_BYTES_U8                 ((uint8)16U)
/* Represents the size in bytes of the M4 entry (used for key management) */
#define CSEC_IP_M4_SIZE_IN_BYTES_U8                 ((uint8)32U)
/* Represents the size in bytes of the M5 entry (used for key management) */
#define CSEC_IP_M5_SIZE_IN_BYTES_U8                 ((uint8)16U)

/*==================================================================================================
*                                         LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL VARIABLES
==================================================================================================*/
#define CRYPTO_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "Crypto_MemMap.h"

/*! @brief Pointer to CSEc state structure */
static Csec_Ip_StateType* Csec_Ip_pState;

#define CRYPTO_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "Crypto_MemMap.h"

/*==================================================================================================
*                                        GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                    LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define CRYPTO_START_SEC_RAMCODE
#include "Crypto_MemMap.h"

/*!
 * @brief     Writes the command header to CSE_PRAM and waits for completion.
 * @details   This function writes the header of a command and waits for completion.
 *            The function is always located in RAM, and is used for CSEc commands using pointer methods,
 *            in order to allow the MGATE to read from FLASH without causing a read collision.
 *
 * @param[in] eFuncId     The ID of the operation to be started.
 * @param[in] eFuncFormat Specifies how the data is transferred to/from the CSE.
 * @param[in] eCallSeq    Specifies if the information is the first or a following function call.
 * @param[in] eKeyId      Specify the KeyID to be used to implement the requested cryptographic operation.
 *
 * @return      void
 */
static void Csec_Ip_WriteCmdAndWait
(
    Csec_Ip_CmdType          eFuncId,
    Csec_Ip_FuncFormatType   eFuncFormat,
    Csec_Ip_CallSequenceType eCallSeq,
    Csec_Ip_KeyIdType        eKeyId
);

#define CRYPTO_STOP_SEC_RAMCODE
#include "Crypto_MemMap.h"

#define CRYPTO_START_SEC_CODE
#include "Crypto_MemMap.h"

/*!
 * @brief    Clears the ACCERR and FPVIOL error flags.
 * @details  This function clears ACCERR and FPVIOL flags becuase if one of them is set the CCIF flag cannot be cleared to launch a command.
 *           This function should be called before every command is send to CSEC.
 *
 * @return   void
 */
static inline void Csec_Ip_ClearErrorFlags(void);

/*!
 * @brief     Updtes the driver state.
 * @details   This function updates the internal state of the driver with given data and standard info
 *
 * @param[in] eKeyId       Key used for in the command in execution
 * @param[in] eCmd         Command to be executed
 * @param[in] pInputBuff   Pointer to the input data buffer to execute the command with
 * @param[in] pOutputBuff  Pointer to the output data buffer where to store the result
 * @param[in] u32InputSize The size of the input
 *
 * @return      void
 */
static inline void Csec_Ip_UpdateState
(
    Csec_Ip_KeyIdType eKeyId,
    Csec_Ip_CmdType   eCmd,
    const uint8*      pInputBuff,
    uint8*            pOutputBuff,
    uint32            u32InputSize
);

/*!
 * @brief     This function writes input data in CSE_PRAM.
 * @details   This function writes input data bytes to CSE_PRAM at 32-bit aligned addresses.
 *
 * @param[in] u8Offset    Offset in bytes used in determining the first word to be written
 * @param[in] pInputBytes Pointer to the input data
 * @param[in] u8NumBytes  The size of the input data to be written
 *
 * @return      void
 */
static void Csec_Ip_WriteCommandBytes
(
    const uint8  u8Offset,
    const uint8* pInputBytes,
    const uint8  u8NumBytes
);

/*!
 * @brief     This function writes a single byte to CSE_PRAM.
 *
 * @param[in] u8Offset    Offset in bytes used in determining the word to be written
 * @param[in] u8InputByte The value that must be written.
 *
 * @return      void
 */
static void Csec_Ip_WriteCommandByte
(
    const uint8 u8Offset,
    const uint8 u8InputByte
);

/*!
 * @brief      This function writes a command half word to CSE_PRAM at a 16-bit aligned offset.
 *
 * @param[in] u8Offset    Offset in bytes used in determining the word to be written.
 * @param[in] u16HalfWord The value that must be written.
 *
 * @return      void
 */
static void Csec_Ip_WriteCommandHalfWord
(
    uint8  u8Offset,
    uint16 u16HalfWord
);

/*!
 * @brief      This function writes the command header to CSE_PRAM, triggering the CSEc operation.
 *
 * @param[in] eFuncId     The ID of the operation to be started.
 * @param[in] eFuncFormat Specifies how the data is transferred to/from the CSE.
 * @param[in] eCallSeq    Specifies if the information is the first or a following function call.
 * @param[in] eKeyId      Specify the KeyID to be used in the requested cryptographic operation.
 *
 * @return      void
 */
static inline void Csec_Ip_WriteCommandHeader
(
    Csec_Ip_CmdType          eFuncId,
    Csec_Ip_FuncFormatType   eFuncFormat,
    Csec_Ip_CallSequenceType eCallSeq,
    Csec_Ip_KeyIdType        eKeyId
);

/*!
 * @brief      This function waits for the completion of a CSEc command.
 *
 * @param[in] u32Timeout            Timeout in ticks or microseconds depending on the value (TICKS or SYSTEM) of the 'CSEc Ip Timeout Counter Type' attribute in the configuration.
 * @param[in] u32ElapsedTimeInTicks Elapsed time in ticks until this function is recalled. If the calling function will wait only for one command to complete, this paramter will be zero and
 *                                  this function will be called one time. If the calling function will call multiple commands this parameter must be updated prior to this function call to
 *                                  contain the elapsed time for the other commands.
 *
 * @return      The value of the elapsed ticks.
 */
static uint32 Csec_Ip_WaitCommandCompletion
(
    uint32 u32Timeout,
    uint32 u32ElapsedTimeInTicks
);

/*!
 * @brief      This function reads a command word from CSE_PRAM, from a 32-bit aligned offset.
 *
 * @param[in] u8Offset The offset (in bytes) from which the word shall be read.
 *
 * @return      The value of the word read.
 */
static inline uint32 Csec_Ip_ReadCommandWord
(
    uint8 u8Offset
);

/*!
 * @brief      This function reads the error bits reported after running a CSEc command.
 *
 * @return      The error code read.
 */
static Csec_Ip_ErrorCodeType Csec_Ip_ReadErrorBits(void);

/*!
 * @brief      This function reads command bytes from CSE_PRAM from a 32-bit aligned offset.
 *
 * @param[in] u8Offset     Offset in bytes used in determining the first word to be read
 * @param[in] pOutputbytes Pointer to the output buffer
 * @param[in] u8NumBytes   The size of the output data to be written
 *
 * @return      void
 */
static void Csec_Ip_ReadCommandBytes
(
    uint8  u8Offset,
    uint8* pOutputbytes,
    uint8  u8NumBytes
);

/*!
 * @brief      This function reads a single byte from CSE_PRAM.
 *
 * @param[in] u8Offset     Offset in bytes used in determining the first word to be read
 *
 * @return      The corresponding byte
 */
static uint8 Csec_Ip_ReadCommandByte
(
    uint8 u8Offset
);

/*!
 * @brief      Continues the execution of encryption/decryption using ECB mode.
 * @details    Reads the partial result, updates the internal state and launches another command, if necessary.
 *
 * @return      void
 */
static void Csec_Ip_ContinueEncDecECBCmd(void);

/*!
 * @brief      This function enables/disables the command completion interrupt.
 *
 * @param[in] bEnable Enable/Disable the command completion interrupt.
 *
 * @return      void
 */
static inline void Csec_Ip_SetInterrupt
(
    boolean bEnable
);

/*!
 * @brief      Initializes the CSE_PRAM and the internal state for encryption/decryption using CBC mode commands.
 *
 * @return      void
 */
static void Csec_Ip_StartEncDecCBCCmd(void);

/*!
 * @brief      Continues the execution of encryption/decryption using CBCmode.
 *             Reads the partial result, updates the internal state and launches another command, if necessary.
 *
 * @return      void
 */
static void Csec_Ip_ContinueEncDecCBCCmd(void);

/*!
 * @brief      Rounds up the number of bits to the first number multiple of 8 and converts it to bytes.
 *
 * @param[in] u32Size The size of data in bits
 *
 * @return      The size in bytes
 */
static inline uint32 Csec_Ip_BitsToBytesWithRound
(
    uint32 u32Size
);

/*!
 * @brief      Writes a command word to CSE_PRAM.
 * @details    This function writes a command word to CSE_PRAM, at a 32-bit aligned offset.
 *
 * @param[in] u8Offset     The offset (in bytes) at which the word shall be written.
 * @param[in] u32Word      The value to be written.
 *
 * @return      void
 */
static void Csec_Ip_WriteCommandWord
(
    const uint8   u8Offset,
    const uint32  u32Word
);

/*!
 * @brief      Initializes the CSE_PRAM and the internal state for the CMAC generation command.
 *
 * @return      void
 */
static void Csec_Ip_StartGenMACCmd(void);

/*!
 * @brief      Continues the execution of CMAC generation. Reads the status of the execution,
 *             updates the internal state and launches another command, if necessary.
 *             If there is no need to launch another command, reads the resulted CMAC.
 *
 * @return      void
 */
static void Csec_Ip_ContinueGenMACCmd(void);

/*!
 * @brief      Initializes the CSE_PRAM and the internal state for the CMAC verification command.
 *
 * @return      void
 */
static void Csec_Ip_StartVerifMACCmd(void);

/*!
 * @brief      Continues the execution of CMAC verification. Reads the status of the execution, updates the internal state and launches another command, if necessary.
 *             If there is no need to launch another command, reads the verification status.
 *
 * @return      void
 */
static void Csec_Ip_ContinueVerifMACCmd(void);

/*!
 * @brief      Processes the CSEc asynchronous responses.
 *
 * @param[in] eReqType Request type
 *
 * @return      void
 */
static void Csec_Ip_ProcessReceivedResponse
(
    Csec_Ip_ReqTypeType eReqType
);

/**
 * @brief Asynchronously performs the AES-128 encryption in ECB mode.
 * @details This function performs the AES-128 encryption in ECB mode of the input
 * plain text buffer, in an asynchronous manner.
 *
 * @param[in]  pRequest   Pointer to a structure that describes the request parameters.
 *
 * @return void
 */
static void Csec_Ip_EncryptEcbAsync
(
    const Csec_Ip_ReqType* pRequest
);

/**
 * @brief Asynchronously performs the AES-128 decryption in ECB mode.
 * @details This function performs the AES-128 decryption in ECB mode of the input
 * cipher text buffer, in an asynchronous manner.
 *
 * @param[in]  pRequest   Pointer to a structure that describes the request parameters.
 *
 * @return void
 */
static void Csec_Ip_DecryptEcbAsync
(
    const Csec_Ip_ReqType* pRequest
);

/**
 * @brief Asynchronously performs the AES-128 encryption in CBC mode.
 * @details This function performs the AES-128 encryption in CBC mode of the input
 * plaintext buffer, in an asynchronous manner.
 *
 * @param[in]  pRequest   Pointer to a structure that describes the request parameters.
 *
 * @return void
 */
static void Csec_Ip_EncryptCbcAsync
(
    const Csec_Ip_ReqType* pRequest
);

/**
 * @brief Asynchronously performs the AES-128 decryption in CBC mode.
 * @details This function performs the AES-128 decryption in CBC mode of the input
 * cipher text buffer, in an asynchronous manner.
 *
 * @param[in]  pRequest   Pointer to a structure that describes the request parameters.
 *
 * @return void
 */
static void Csec_Ip_DecryptCbcAsync
(
    const Csec_Ip_ReqType* pRequest
);

/**
 * @brief Asynchronously calculates the MAC of a given message using CMAC with
 * AES-128.
 * @details This function calculates the MAC of a given message using CMAC with AES-128,
 * in an asynchronous manner.
 *
 * @param[in]  pRequest   Pointer to a structure that describes the request parameters.
 *
 * @return void
 */
static void Csec_Ip_GenerateMacAsync
(
    const Csec_Ip_ReqType* pRequest
);

/**
 * @brief Asynchronously verifies the MAC of a given message using CMAC with
 * AES-128.
 * @details This function verifies the MAC of a given message using CMAC with AES-128,
 * in an asynchronous manner.
 *
 * @param[in]  pRequest   Pointer to a structure that describes the request parameters.
 *
 * @return void
 */
static void Csec_Ip_VerifyMacAsync
(
    const Csec_Ip_ReqType* pRequest
);

#define CRYPTO_STOP_SEC_CODE
#include "Crypto_MemMap.h"

/*==================================================================================================
*                                         LOCAL FUNCTIONS
==================================================================================================*/
#define CRYPTO_START_SEC_RAMCODE
#include "Crypto_MemMap.h"

static void Csec_Ip_WriteCmdAndWait
(
    Csec_Ip_CmdType          eFuncId,
    Csec_Ip_FuncFormatType   eFuncFormat,
    Csec_Ip_CallSequenceType eCallSeq,
    Csec_Ip_KeyIdType        eKeyId
)
{
    /* Write the command header */
    CSEC_IP_PRAM->Csec_Ip_aPramRegister[CSEC_IP_WORD_0_INDEX_U8] =
        CSEC_IP_PRAM_REG_DATA_BYTE_X_U32(CSEC_IP_BYTE_0_U8, eFuncId)     |
        CSEC_IP_PRAM_REG_DATA_BYTE_X_U32(CSEC_IP_BYTE_1_U8, eFuncFormat) |
        CSEC_IP_PRAM_REG_DATA_BYTE_X_U32(CSEC_IP_BYTE_2_U8, eCallSeq)    |
        CSEC_IP_PRAM_REG_DATA_BYTE_X_U32(CSEC_IP_BYTE_3_U8, eKeyId);

    while(!CSEC_IP_CCIF_IS_SET)
    {
        /* Wait until the CCIF flag is set */
    }
}

#define CRYPTO_STOP_SEC_RAMCODE
#include "Crypto_MemMap.h"

#define CRYPTO_START_SEC_CODE
#include "Crypto_MemMap.h"

static inline void Csec_Ip_ClearErrorFlags(void)
{
    /* Clear flags only when CCIF is set */
    if(CSEC_IP_CCIF_IS_SET)
    {
        /* The ACCERR and FPVIOL flags are cleared by writing a 1 to ACCERR and FPVIOL bits in FSTAT register while CCIF is set. */
        CSEC_IP_FLASH->FSTAT = CSEC_IP_FSTAT_ACCERR_MASK | CSEC_IP_FSTAT_FPVIOL_MASK;
    }
}

static inline void Csec_Ip_UpdateState
(
    Csec_Ip_KeyIdType eKeyId,
    Csec_Ip_CmdType   eCmd,
    const uint8*      pInputBuff,
    uint8*            pOutputBuff,
    uint32            u32InputSize
)
{
    /* Update the CSEC IP state */
    Csec_Ip_pState->bCmdInProgress = TRUE;
    Csec_Ip_pState->eCmd           = eCmd;
    Csec_Ip_pState->pInputBuff     = pInputBuff;
    Csec_Ip_pState->pOutputBuff    = pOutputBuff;
    Csec_Ip_pState->eKeyId         = eKeyId;
    Csec_Ip_pState->u32InputSize   = u32InputSize;
    Csec_Ip_pState->u32Index       = CSEC_IP_START_INDEX_U32;
    Csec_Ip_pState->ErrCode        = CSEC_IP_ERC_NO_ERROR;
    Csec_Ip_pState->eSeq           = CSEC_IP_CALL_SEQ_FIRST;
}

static void Csec_Ip_WriteCommandBytes
(
    const uint8  u8Offset,
    const uint8* pInputBytes,
    const uint8  u8NumBytes
)
{
    uint8 u8Index = 0U;

    /* While there remain more than or equal to 4 bytes of input data, write them to CSE_PRAM */
    while ((u8Index + 3U) < u8NumBytes)
    {
        /* Write 4 byte word Csec_Ip_aPramRegister[] with input data */
        CSEC_IP_PRAM->Csec_Ip_aPramRegister[(u8Offset + u8Index) >> CSEC_IP_BYTES_TO_WORD_SHIFT_U8] =
            CSEC_IP_PRAM_REG_DATA_BYTE_X_U32(CSEC_IP_BYTE_0_U8, pInputBytes[u8Index + 0U]) |
            CSEC_IP_PRAM_REG_DATA_BYTE_X_U32(CSEC_IP_BYTE_1_U8, pInputBytes[u8Index + 1U]) |
            CSEC_IP_PRAM_REG_DATA_BYTE_X_U32(CSEC_IP_BYTE_2_U8, pInputBytes[u8Index + 2U]) |
            CSEC_IP_PRAM_REG_DATA_BYTE_X_U32(CSEC_IP_BYTE_3_U8, pInputBytes[u8Index + 3U]);
        /* Go the next word */
        u8Index = (uint8)(u8Index + 4U);
    }
    /* Write remaining bytes that can not form a 4 byte word */
    while (u8Index < u8NumBytes)
    {
        Csec_Ip_WriteCommandByte(u8Offset + u8Index, pInputBytes[u8Index]);
        u8Index++;
    }
}

static void Csec_Ip_WriteCommandByte
(
    const uint8 u8Offset,
    const uint8 u8InputByte
)
{
    /* Save the current word value in a temporary variable */
    uint32 u32Temp = CSEC_IP_PRAM->Csec_Ip_aPramRegister[u8Offset >> CSEC_IP_BYTES_TO_WORD_SHIFT_U8];
    /* Find which byte must be written */
    uint8  u8ByteX = (uint8)(u8Offset & ((uint8)0x03));

    /* Clear the byte before it is written */
    u32Temp &= ~CSEC_IP_PRAM_REG_DATA_BYTE_X_MASK_U32(u8ByteX);
    /* Write the new byte value in the temporary variable */
    u32Temp |= CSEC_IP_PRAM_REG_DATA_BYTE_X_U32(u8ByteX, u8InputByte);

    /* Perform memory word write */
    CSEC_IP_PRAM->Csec_Ip_aPramRegister[u8Offset >> CSEC_IP_BYTES_TO_WORD_SHIFT_U8] = u32Temp;
}

static void Csec_Ip_WriteCommandHalfWord
(
    uint8  u8Offset,
    uint16 u16HalfWord
)
{
    /* Save the current word value in a temporary variable */
    uint32 u32Temp = CSEC_IP_PRAM->Csec_Ip_aPramRegister[u8Offset >> CSEC_IP_BYTES_TO_WORD_SHIFT_U8];

    /* Determine which part of the work must be written */
    if ((u8Offset & ((uint8)2U)) != ((uint8)0U))
    {
        /* Lower half of the word must be written */
        u32Temp &= ~CSEC_IP_LOWER_HALF_MASK_U32;
        u32Temp |= ((((uint32) u16HalfWord) << CSEC_IP_LOWER_HALF_SHIFT_U8) & CSEC_IP_LOWER_HALF_MASK_U32);
    }
    else
    {
        /* Upper half of the word must be written */
        u32Temp &= ~CSEC_IP_UPPER_HALF_MASK_U32;
        u32Temp |= ((((uint32) u16HalfWord) << CSEC_IP_UPPER_HALF_SHIFT_U8) & CSEC_IP_UPPER_HALF_MASK_U32);
    }

    /* Perform memory half word write */
    CSEC_IP_PRAM->Csec_Ip_aPramRegister[(u8Offset >> CSEC_IP_BYTES_TO_WORD_SHIFT_U8)] = u32Temp;
}

static inline void Csec_Ip_WriteCommandHeader
(
    Csec_Ip_CmdType          eFuncId,
    Csec_Ip_FuncFormatType   eFuncFormat,
    Csec_Ip_CallSequenceType eCallSeq,
    Csec_Ip_KeyIdType        eKeyId
)
{
    /* Write the command header */
    CSEC_IP_PRAM->Csec_Ip_aPramRegister[CSEC_IP_WORD_0_INDEX_U8] =
        CSEC_IP_PRAM_REG_DATA_BYTE_X_U32(CSEC_IP_BYTE_0_U8, eFuncId)     |
        CSEC_IP_PRAM_REG_DATA_BYTE_X_U32(CSEC_IP_BYTE_1_U8, eFuncFormat) |
        CSEC_IP_PRAM_REG_DATA_BYTE_X_U32(CSEC_IP_BYTE_2_U8, eCallSeq)    |
        CSEC_IP_PRAM_REG_DATA_BYTE_X_U32(CSEC_IP_BYTE_3_U8, eKeyId);
}

static uint32 Csec_Ip_WaitCommandCompletion
(
    uint32 u32Timeout,
    uint32 u32ElapsedTimeInTicks
)
{
    uint32 u32ElapsedTicks = u32ElapsedTimeInTicks;
    uint32 u32TimeoutTicks;
    uint32 u32CurrentTicks;

    /* Convert from microseconds to ticks */
    u32TimeoutTicks = OsIf_MicrosToTicks(u32Timeout, (OsIf_CounterType)CSEC_IP_TIMEOUT_OSIF_COUNTER_TYPE);

    /* Read the current value of the counter */
    u32CurrentTicks = OsIf_GetCounter((OsIf_CounterType)CSEC_IP_TIMEOUT_OSIF_COUNTER_TYPE);

    /* Wait for the CSEC response as long as there is still time allocated to command processing */
    while((!CSEC_IP_CCIF_IS_SET) && (u32ElapsedTicks < u32TimeoutTicks))
    {
        /* Update the elapsed ticks, current ticks will be updated too by the OsIf function */
        u32ElapsedTicks += OsIf_GetElapsed(&u32CurrentTicks, (OsIf_CounterType)CSEC_IP_TIMEOUT_OSIF_COUNTER_TYPE);
    }

    /* If timeout expired, report timeout error */
    if ( u32ElapsedTicks >= u32TimeoutTicks )
    {
        Csec_Ip_pState->ErrCode = CSEC_IP_ERC_NO_RESPONSE;
    }

    return u32ElapsedTicks;
}

static inline uint32 Csec_Ip_ReadCommandWord
(
    uint8 u8Offset
)
{
    /* Read 4 byte word from offset */
    return CSEC_IP_PRAM->Csec_Ip_aPramRegister[u8Offset >> CSEC_IP_BYTES_TO_WORD_SHIFT_U8];
}

static Csec_Ip_ErrorCodeType Csec_Ip_ReadErrorBits(void)
{
    uint32                u32ErrWord;
    Csec_Ip_ErrorCodeType CsecResponse;

    /* Read Word 1, which has the error bits*/
    u32ErrWord = Csec_Ip_ReadCommandWord(CSEC_IP_ERROR_BITS_OFFSET_U8);

    /* Extract the error bits */
    CsecResponse = (Csec_Ip_ErrorCodeType)((u32ErrWord & CSEC_IP_UPPER_HALF_MASK_U32) >> CSEC_IP_UPPER_HALF_SHIFT_U8);

    return CsecResponse;
}

static uint8 Csec_Ip_ReadCommandByte
(
    uint8 u8Offset
)
{
    /* Save the current word value in a temporary variable */
    uint32 u32Temp = CSEC_IP_PRAM->Csec_Ip_aPramRegister[u8Offset >> CSEC_IP_BYTES_TO_WORD_SHIFT_U8];
    /* Find which byte must be read */
    uint8  u8ByteX = (uint8)(u8Offset & ((uint8)0x03));
    /* Read the corresponding byte */
    uint8  u8ByteValue = (uint8)((u32Temp & CSEC_IP_PRAM_REG_DATA_BYTE_X_MASK_U32(u8ByteX)) >> CSEC_IP_PRAM_REG_DATA_BYTE_X_SHIFT_U32(u8ByteX));

    return u8ByteValue;
}

static void Csec_Ip_ReadCommandBytes
(
    uint8  u8Offset,
    uint8* pOutputbytes,
    uint8  u8NumBytes
)
{
    uint8  u8Index = 0U;
    uint32 u32Temp;
#if (STD_ON == CSEC_IP_DEV_ERROR_DETECT)
    /* Check the validity of the input parameter */
    DevAssert((pOutputbytes != NULL_PTR));
#endif /* (STD_ON == CSEC_IP_DEV_ERROR_DETECT) */

    /* While there remain more than or equal to 4 bytes of output data, write them to pOutputbytes */
    while ((u8Index + 3U) < u8NumBytes)
    {
        /* Read 4 byte word Csec_Ip_aPramRegister[] with output data */
        u32Temp = CSEC_IP_PRAM->Csec_Ip_aPramRegister[(u8Offset + u8Index) >> CSEC_IP_BYTES_TO_WORD_SHIFT_U8];

        /* Write in the output buffer the values read */
        pOutputbytes[u8Index + 0U] = (uint8)((u32Temp & CSEC_IP_PRAM_REG_DATA_BYTE_X_MASK_U32(CSEC_IP_BYTE_0_U8)) >> CSEC_IP_PRAM_REG_DATA_BYTE_X_SHIFT_U32(CSEC_IP_BYTE_0_U8));
        pOutputbytes[u8Index + 1U] = (uint8)((u32Temp & CSEC_IP_PRAM_REG_DATA_BYTE_X_MASK_U32(CSEC_IP_BYTE_1_U8)) >> CSEC_IP_PRAM_REG_DATA_BYTE_X_SHIFT_U32(CSEC_IP_BYTE_1_U8));
        pOutputbytes[u8Index + 2U] = (uint8)((u32Temp & CSEC_IP_PRAM_REG_DATA_BYTE_X_MASK_U32(CSEC_IP_BYTE_2_U8)) >> CSEC_IP_PRAM_REG_DATA_BYTE_X_SHIFT_U32(CSEC_IP_BYTE_2_U8));
        pOutputbytes[u8Index + 3U] = (uint8)((u32Temp & CSEC_IP_PRAM_REG_DATA_BYTE_X_MASK_U32(CSEC_IP_BYTE_3_U8)) >> CSEC_IP_PRAM_REG_DATA_BYTE_X_SHIFT_U32(CSEC_IP_BYTE_3_U8));

        /* Update the index and go to the next word */
        u8Index = (uint8)(u8Index + 4U);
    }
    /* Write remaining bytes that can not form a 4 byte word */
    while (u8Index < u8NumBytes)
    {
        pOutputbytes[u8Index] = Csec_Ip_ReadCommandByte(u8Offset + u8Index);
        u8Index++;
    }
}

static inline void Csec_Ip_SetInterrupt
(
    boolean bEnable
)
{
    /* FCNFG is a register to enable the interrupt. We need a critical section in order to make atomic the operation of read-modify-write for this register */
    SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_12();

    uint8 u8FCNFG        = CSEC_IP_FLASH->FCNFG;

    /* Based on bEnable set or clear CCIE(Command Complete Interrupt Enable) flag */
    CSEC_IP_FLASH->FCNFG = (uint8)((u8FCNFG & ~CSEC_IP_FCNFG_CCIE_MASK) | CSEC_IP_FCNFG_CCIE(bEnable ? 1U : 0U));

    /* Exit critical section */
    SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_12();
}

static inline uint32 Csec_Ip_BitsToBytesWithRound
(
    uint32 u32Size
)
{
    /* Round the size */
    uint32 u32Result = (u32Size + (uint32)7U) & ~((uint32)7U);

    /* Convert from bits to bytes */
    u32Result = (uint32)(u32Result >> CSEC_IP_BYTES_TO_FROM_BITS_SHIFT_U8);

    return u32Result;
}

static void Csec_Ip_WriteCommandWord
(
    const uint8   u8Offset,
    const uint32  u32Word
)
{
    uint8 u8IndexWord = (uint8)(u8Offset >> CSEC_IP_BYTES_TO_WORD_SHIFT_U8);

    /* Write the word in CSE_PRAM */
    CSEC_IP_PRAM->Csec_Ip_aPramRegister[u8IndexWord] = u32Word;
}

static void Csec_Ip_StartEncDecECBCmd(void)
{
    /* Compute the number of pages left to process. u32InputSize must be multiple of 16 bytes.*/
    uint32 u32NumPagesLeft = (Csec_Ip_pState->u32InputSize - Csec_Ip_pState->u32Index) >> CSEC_IP_BYTES_TO_FROM_PAGES_SHIFT_U8;
    /* If the number of pages left exceeds the total available pages process the maximum number of pages possbile */
    uint16 u16NumPages     = (uint16)((u32NumPagesLeft > CSEC_IP_DATA_PAGES_AVAILABLE_U8) ? CSEC_IP_DATA_PAGES_AVAILABLE_U8 : u32NumPagesLeft);
    /* Number of bytes to be written */
    uint8  u8NumBytes      = (uint8)(u16NumPages << CSEC_IP_BYTES_TO_FROM_PAGES_SHIFT_U8);

    /* Write the plain/cipher text */
    Csec_Ip_WriteCommandBytes(CSEC_IP_PAGE_1_OFFSET_U8, &Csec_Ip_pState->pInputBuff[Csec_Ip_pState->u32Index], u8NumBytes);
    /* Write the size of the plain/cipher text (in pages) */
    Csec_Ip_WriteCommandHalfWord(CSEC_IP_PAGE_LENGTH_OFFSET_U8, u16NumPages);

    /* Save the number of bytes written */
    Csec_Ip_pState->u8PartialSize = u8NumBytes;

    /* Write the command header. This will trigger the command execution. */
    Csec_Ip_WriteCommandHeader(Csec_Ip_pState->eCmd, CSEC_IP_FUNC_FORMAT_COPY, Csec_Ip_pState->eSeq, Csec_Ip_pState->eKeyId);
}

static void Csec_Ip_ContinueEncDecECBCmd(void)
{
    /* Read the last error code returned by CSEc */
    Csec_Ip_pState->ErrCode = Csec_Ip_ReadErrorBits();

    if (Csec_Ip_pState->ErrCode != CSEC_IP_ERC_NO_ERROR)
    {
        /* Do not continue launching commands if an error occurred */
        Csec_Ip_pState->bCmdInProgress = FALSE;
    }
    else
    {
        /* Get partial result */
        Csec_Ip_ReadCommandBytes(CSEC_IP_PAGE_1_OFFSET_U8, &Csec_Ip_pState->pOutputBuff[Csec_Ip_pState->u32Index], Csec_Ip_pState->u8PartialSize);

        /* Update the index */
        Csec_Ip_pState->u32Index += (uint32)Csec_Ip_pState->u8PartialSize;

        /* Decide if more commands are needed */
        if (Csec_Ip_pState->u32Index >= Csec_Ip_pState->u32InputSize)
        {
            /* There is no input data left, stop processing */
            Csec_Ip_pState->bCmdInProgress = FALSE;
        }
        else
        {
            /* Continue launching commands */
            Csec_Ip_StartEncDecECBCmd();
        }
    }
}

static void Csec_Ip_StartEncDecCBCCmd(void)
{
    /* Compute the number of pages left to process. u32InputSize must be multiple of 16 bytes.*/
    uint32 u32NumPagesLeft = (Csec_Ip_pState->u32InputSize - Csec_Ip_pState->u32Index) >> CSEC_IP_BYTES_TO_FROM_PAGES_SHIFT_U8;
    /* If the number of pages left exceeds the total available pages process the maximum number of pages possbile */
    uint16 u16NumPages     = (uint16)((u32NumPagesLeft > CSEC_IP_DATA_PAGES_AVAILABLE_U8) ? CSEC_IP_DATA_PAGES_AVAILABLE_U8 : u32NumPagesLeft);
    /* Number of bytes to be written */
    uint8  u8NumBytes      = (uint8)(u16NumPages << CSEC_IP_BYTES_TO_FROM_PAGES_SHIFT_U8);

    if(CSEC_IP_CALL_SEQ_FIRST == Csec_Ip_pState->eSeq)
    {
        /* For the first call the IV is written in the first page, so the u16NumPages and u8NumBytes for the input buffer must be recomputed */
        u16NumPages     = (uint16)((u32NumPagesLeft > (CSEC_IP_DATA_PAGES_AVAILABLE_U8 - 1U)) ? (CSEC_IP_DATA_PAGES_AVAILABLE_U8 - 1U) : u32NumPagesLeft);
        u8NumBytes      = (uint8)(u16NumPages << CSEC_IP_BYTES_TO_FROM_PAGES_SHIFT_U8);

        /* Write the initialization vector in the first page */
        Csec_Ip_WriteCommandBytes(CSEC_IP_PAGE_1_OFFSET_U8, Csec_Ip_pState->pIV, CSEC_IP_PAGE_SIZE_IN_BYTES_U8);
        /* Write the plain/cipher text in the second page  */
        Csec_Ip_WriteCommandBytes(CSEC_IP_PAGE_2_OFFSET_U8, &Csec_Ip_pState->pInputBuff[Csec_Ip_pState->u32Index], u8NumBytes);
    }
    else
    {
        /* Write the plain/cipher text */
        Csec_Ip_WriteCommandBytes(CSEC_IP_PAGE_1_OFFSET_U8, &Csec_Ip_pState->pInputBuff[Csec_Ip_pState->u32Index], u8NumBytes);
    }

    /* Write the size of the plain/cipher text (in pages) */
    Csec_Ip_WriteCommandHalfWord(CSEC_IP_PAGE_LENGTH_OFFSET_U8, (uint16)(Csec_Ip_pState->u32InputSize >> CSEC_IP_BYTES_TO_FROM_PAGES_SHIFT_U8));

    /* Save the number of bytes written */
    Csec_Ip_pState->u8PartialSize = u8NumBytes;

    /* Write the command header. This will trigger the command execution. */
    Csec_Ip_WriteCommandHeader(Csec_Ip_pState->eCmd, CSEC_IP_FUNC_FORMAT_COPY, Csec_Ip_pState->eSeq, Csec_Ip_pState->eKeyId);
}

static void Csec_Ip_ContinueEncDecCBCCmd(void)
{
    /* Read the last error code returned by CSEc */
    Csec_Ip_pState->ErrCode = Csec_Ip_ReadErrorBits();

    if (Csec_Ip_pState->ErrCode != CSEC_IP_ERC_NO_ERROR)
    {
        /* Do not continue launching commands if an error occurred */
        Csec_Ip_pState->bCmdInProgress = FALSE;
    }
    else
    {
        if (CSEC_IP_CALL_SEQ_FIRST == Csec_Ip_pState->eSeq)
        {
            /* Get partial result */
            Csec_Ip_ReadCommandBytes(CSEC_IP_PAGE_2_OFFSET_U8, &Csec_Ip_pState->pOutputBuff[Csec_Ip_pState->u32Index], Csec_Ip_pState->u8PartialSize);
            Csec_Ip_pState->eSeq = CSEC_IP_CALL_SEQ_SUBSEQUENT;
        }
        else
        {
            /* Get partial result */
            Csec_Ip_ReadCommandBytes(CSEC_IP_PAGE_1_OFFSET_U8, &Csec_Ip_pState->pOutputBuff[Csec_Ip_pState->u32Index], Csec_Ip_pState->u8PartialSize);
        }

        /* Update the index */
        Csec_Ip_pState->u32Index += (uint32)Csec_Ip_pState->u8PartialSize;

        /* Decide if more commands are needed */
        if (Csec_Ip_pState->u32Index >= Csec_Ip_pState->u32InputSize)
        {
            /* There is no input data left, stop processing */
            Csec_Ip_pState->bCmdInProgress = FALSE;
        }
        else
        {
            /* Continue launching commands */
            Csec_Ip_StartEncDecCBCCmd();
        }
    }
}

static void Csec_Ip_StartGenMACCmd(void)
{
    /* Number of bytes to be written */
    uint8 u8NumBytes = (uint8)(((Csec_Ip_pState->u32InputSize - Csec_Ip_pState->u32Index) > CSEC_IP_DATA_BYTES_AVAILABLE_U8) ? CSEC_IP_DATA_BYTES_AVAILABLE_U8 : (Csec_Ip_pState->u32InputSize - Csec_Ip_pState->u32Index));

    /* Write the input text */
    Csec_Ip_WriteCommandBytes(CSEC_IP_PAGE_1_OFFSET_U8, &Csec_Ip_pState->pInputBuff[Csec_Ip_pState->u32Index], u8NumBytes);

    /* Write the size of the message (in bits) */
    Csec_Ip_WriteCommandWord(CSEC_IP_MESSAGE_LENGTH_OFFSET_U8, Csec_Ip_pState->u32MsgLen);

    /* Save the number of bytes written */
    Csec_Ip_pState->u8PartialSize = u8NumBytes;

    /* Write the command header. This will trigger the command execution. */
    Csec_Ip_WriteCommandHeader(Csec_Ip_pState->eCmd, CSEC_IP_FUNC_FORMAT_COPY, Csec_Ip_pState->eSeq, Csec_Ip_pState->eKeyId);
}

static void Csec_Ip_ContinueGenMACCmd(void)
{
    /* Read the last error code returned by CSEc */
    Csec_Ip_pState->ErrCode = Csec_Ip_ReadErrorBits();

    if (Csec_Ip_pState->ErrCode != CSEC_IP_ERC_NO_ERROR)
    {
        /* Do not continue launching commands if an error occurred */
        Csec_Ip_pState->bCmdInProgress = FALSE;
    }
    else
    {
        /* If this was the first call for mac generation advance the sequence */
        if (CSEC_IP_CALL_SEQ_FIRST == Csec_Ip_pState->eSeq)
        {
            Csec_Ip_pState->eSeq = CSEC_IP_CALL_SEQ_SUBSEQUENT;
        }

        /* Update the index */
        Csec_Ip_pState->u32Index += (uint32)Csec_Ip_pState->u8PartialSize;

        /* Decide if more commands are needed */
        if (Csec_Ip_pState->u32Index >= Csec_Ip_pState->u32InputSize)
        {
            /* There is no input data left, stop processing */
            Csec_Ip_pState->bCmdInProgress = FALSE;
            /* Read the output */
            Csec_Ip_ReadCommandBytes(CSEC_IP_PAGE_2_OFFSET_U8, Csec_Ip_pState->pOutputBuff, CSEC_IP_PAGE_SIZE_IN_BYTES_U8);
        }
        else
        {
            /* Continue launching commands */
            Csec_Ip_StartGenMACCmd();
        }
    }
}

static void Csec_Ip_StartVerifMACCmd(void)
{
    /* Number of bytes to be written */
    uint8 u8NumBytes = (uint8)(((Csec_Ip_pState->u32InputSize - Csec_Ip_pState->u32Index) > CSEC_IP_DATA_BYTES_AVAILABLE_U8) ? CSEC_IP_DATA_BYTES_AVAILABLE_U8 : (Csec_Ip_pState->u32InputSize - Csec_Ip_pState->u32Index));

    /* Round up the value to the first number multiple of 16 */
    uint8 u8MacOffset = (uint8)((u8NumBytes + (uint8)15U) & ~((uint8)15U));

    /* Write the input text */
    Csec_Ip_WriteCommandBytes(CSEC_IP_PAGE_1_OFFSET_U8, &Csec_Ip_pState->pInputBuff[Csec_Ip_pState->u32Index], u8NumBytes);

    /* Write the size of the message (in bits) */
    Csec_Ip_WriteCommandWord(CSEC_IP_MESSAGE_LENGTH_OFFSET_U8, Csec_Ip_pState->u32MsgLen);

    /* Write the number of bits of the MAC to be compared */
    Csec_Ip_WriteCommandHalfWord(CSEC_IP_MAC_LENGTH_OFFSET_U8, Csec_Ip_pState->u16MacLen);

    /* If there is available space in CSE_PRAM, write the MAC to be verified */
    if ((u8MacOffset + CSEC_IP_PAGE_SIZE_IN_BYTES_U8) < CSEC_IP_DATA_BYTES_AVAILABLE_U8)
    {
        Csec_Ip_WriteCommandBytes(CSEC_IP_PAGE_1_OFFSET_U8 + u8MacOffset, Csec_Ip_pState->pMac, CSEC_IP_PAGE_SIZE_IN_BYTES_U8);
        /* Mark the fact the mac was written */
        Csec_Ip_pState->bMacWritten = TRUE;
    }

    /* Save the number of bytes written */
    Csec_Ip_pState->u8PartialSize = u8NumBytes;

    /* Write the command header. This will trigger the command execution. */
    Csec_Ip_WriteCommandHeader(Csec_Ip_pState->eCmd, CSEC_IP_FUNC_FORMAT_COPY, Csec_Ip_pState->eSeq, Csec_Ip_pState->eKeyId);
}

static void Csec_Ip_ContinueVerifMACCmd(void)
{
    uint32 u32VerifWord;

    /* Read the last error code returned by CSEc */
    Csec_Ip_pState->ErrCode = Csec_Ip_ReadErrorBits();

    if (Csec_Ip_pState->ErrCode != CSEC_IP_ERC_NO_ERROR)
    {
        /* Do not continue launching commands if an error occurred */
        Csec_Ip_pState->bCmdInProgress = FALSE;
    }
    else
    {
        /* If this was the first call for mac verify advance the sequence */
        if (CSEC_IP_CALL_SEQ_FIRST == Csec_Ip_pState->eSeq)
        {
            Csec_Ip_pState->eSeq = CSEC_IP_CALL_SEQ_SUBSEQUENT;
        }

        /* Update the index */
        Csec_Ip_pState->u32Index += (uint32)Csec_Ip_pState->u8PartialSize;

        /* Decide if more commands are needed */
        Csec_Ip_pState->bCmdInProgress = !Csec_Ip_pState->bMacWritten;

        if (Csec_Ip_pState->bCmdInProgress)
        {
            /* Continue launching commands */
            Csec_Ip_StartVerifMACCmd();
        }
        else
        {
            /* Read the word containing verification status */
            u32VerifWord = Csec_Ip_ReadCommandWord(CSEC_IP_VERIFICATION_STATUS_OFFSET_U8);

            /* Read the status, verification status is computed like this (0 != (MACcalc – MACref)) */
            *Csec_Ip_pState->pbVerifStatus = ((u32VerifWord & CSEC_IP_UPPER_HALF_MASK_U32) == (uint32)0U);
        }
    }
}

static void Csec_Ip_ProcessReceivedResponse
(
    Csec_Ip_ReqTypeType eReqType
)
{
    /* Check if previous command execution has ended and continue execution */
    if (CSEC_IP_CCIF_IS_SET && Csec_Ip_pState->bCmdInProgress)
    {
        switch(Csec_Ip_pState->eCmd)
        {
            case CSEC_IP_CMD_ENC_ECB:
            case CSEC_IP_CMD_DEC_ECB:
                Csec_Ip_ContinueEncDecECBCmd();
                break;
            case CSEC_IP_CMD_ENC_CBC:
            case CSEC_IP_CMD_DEC_CBC:
                Csec_Ip_ContinueEncDecCBCCmd();
                break;
            case CSEC_IP_CMD_GENERATE_MAC:
                Csec_Ip_ContinueGenMACCmd();
                break;
            case CSEC_IP_CMD_VERIFY_MAC:
                Csec_Ip_ContinueVerifMACCmd();
                break;
            case CSEC_IP_CMD_RND:
                /* If the command has run successfully read the random number */
                if (CSEC_IP_ERC_NO_ERROR == Csec_Ip_ReadErrorBits())
                {
                    Csec_Ip_ReadCommandBytes(CSEC_IP_PAGE_1_OFFSET_U8, Csec_Ip_pState->pOutputBuff, CSEC_IP_PAGE_SIZE_IN_BYTES_U8);
                }
                /* Command execution completed and no command continuation */
                Csec_Ip_pState->bCmdInProgress = FALSE;
                break;
            default:
                /* Do nothing, all the asynchronous operations were checked above */
                break;
        }

        /* If finished processing, call the callback */
        if (!Csec_Ip_pState->bCmdInProgress)
        {
            /* Disable interrupt */
            if ((CSEC_IP_REQTYPE_ASYNC_IRQ == eReqType))
            {
                Csec_Ip_SetInterrupt(FALSE);
            }

            if (NULL_PTR != Csec_Ip_pState->pfCallback)
            {
                /* Read the error code */
                Csec_Ip_pState->ErrCode = Csec_Ip_ReadErrorBits();

                /* Call the installed callback */
                Csec_Ip_pState->pfCallback(Csec_Ip_pState->ErrCode, Csec_Ip_pState->eCmd, Csec_Ip_pState->pCallbackParam);
            }
        }
    }
}

static void Csec_Ip_EncryptEcbAsync
(
    const Csec_Ip_ReqType* pRequest
)
{
    /* Update the internal state of the driver for asynchronous operation */
    Csec_Ip_pState->pfCallback     = pRequest->pfCallback;
    Csec_Ip_pState->pCallbackParam = pRequest->pCallbackParam;
    Csec_Ip_pState->eReqType       = pRequest->eReqType;

    /* Start processing the request */
    Csec_Ip_StartEncDecECBCmd();

    /* Enable interrupt */
    if (CSEC_IP_REQTYPE_ASYNC_IRQ == pRequest->eReqType)
    {
        Csec_Ip_SetInterrupt(TRUE);
    }
}

static void Csec_Ip_DecryptEcbAsync
(
    const Csec_Ip_ReqType* pRequest
)
{
    /* Update the internal state of the driver for asynchronous operation */
    Csec_Ip_pState->pfCallback     = pRequest->pfCallback;
    Csec_Ip_pState->pCallbackParam = pRequest->pCallbackParam;
    Csec_Ip_pState->eReqType       = pRequest->eReqType;

    /* Start processing the request */
    Csec_Ip_StartEncDecECBCmd();

    /* Enable interrupt */
    if (CSEC_IP_REQTYPE_ASYNC_IRQ == pRequest->eReqType)
    {
        Csec_Ip_SetInterrupt(TRUE);
    }
}

static void Csec_Ip_EncryptCbcAsync
(
    const Csec_Ip_ReqType* pRequest
)
{
    /* Update the internal state of the driver for asynchronous operation */
    Csec_Ip_pState->pfCallback     = pRequest->pfCallback;
    Csec_Ip_pState->pCallbackParam = pRequest->pCallbackParam;
    Csec_Ip_pState->eReqType       = pRequest->eReqType;

    /* Start processing the request */
    Csec_Ip_StartEncDecCBCCmd();

    /* Enable interrupt */
    if (CSEC_IP_REQTYPE_ASYNC_IRQ == pRequest->eReqType)
    {
        Csec_Ip_SetInterrupt(TRUE);
    }
}

static void Csec_Ip_DecryptCbcAsync
(
    const Csec_Ip_ReqType* pRequest
)
{
    /* Update the internal state of the driver for asynchronous operation */
    Csec_Ip_pState->pfCallback     = pRequest->pfCallback;
    Csec_Ip_pState->pCallbackParam = pRequest->pCallbackParam;
    Csec_Ip_pState->eReqType       = pRequest->eReqType;

    /* Start processing the request */
    Csec_Ip_StartEncDecCBCCmd();

    /* Enable interrupt */
    if (CSEC_IP_REQTYPE_ASYNC_IRQ == pRequest->eReqType)
    {
        Csec_Ip_SetInterrupt(TRUE);
    }
}

static void Csec_Ip_GenerateMacAsync
(
    const Csec_Ip_ReqType* pRequest
)
{
    /* Update the internal state of the driver for asynchronous operation */
    Csec_Ip_pState->pfCallback     = pRequest->pfCallback;
    Csec_Ip_pState->pCallbackParam = pRequest->pCallbackParam;
    Csec_Ip_pState->eReqType       = pRequest->eReqType;

    /* Start processing the request */
    Csec_Ip_StartGenMACCmd();

    /* Enable interrupt */
    if (CSEC_IP_REQTYPE_ASYNC_IRQ == pRequest->eReqType)
    {
        Csec_Ip_SetInterrupt(TRUE);
    }
}

static void Csec_Ip_VerifyMacAsync
(
    const Csec_Ip_ReqType* pRequest
)
{
    /* Update the internal state of the driver for asynchronous operation */
    Csec_Ip_pState->pfCallback     = pRequest->pfCallback;
    Csec_Ip_pState->pCallbackParam = pRequest->pCallbackParam;
    Csec_Ip_pState->eReqType       = pRequest->eReqType;

    /* Start processing the request */
    Csec_Ip_StartVerifMACCmd();

    /* Enable interrupt */
    if (CSEC_IP_REQTYPE_ASYNC_IRQ == pRequest->eReqType)
    {
        Csec_Ip_SetInterrupt(TRUE);
    }
}

/*==================================================================================================
*                                        GLOBAL FUNCTIONS PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL FUNCTIONS
==================================================================================================*/


/**
* @implements     Csec_Ip_Init_Activity
*/
void Csec_Ip_Init
(
    Csec_Ip_StateType* pState
)
{
#if (STD_ON == CSEC_IP_DEV_ERROR_DETECT)
    /* Check the validity of the input parameter */
    DevAssert((pState != NULL_PTR));
    /* Check that the driver is not already initialized */
    DevAssert((Csec_Ip_pState == NULL_PTR));
    /* Once the device is configured successfully for CSEc operation, the FCNFG register fields are set to the following:
       FCNFG[RAMRDY] == 0 and FCNFG[EEERDY] == 1 */
    DevAssert((!CSEC_IP_RAMRDY_IS_SET));
    DevAssert((CSEC_IP_EEERDY_IS_SET));
#endif /* (STD_ON == CSEC_IP_DEV_ERROR_DETECT) */

    /* Save the reference to the state structure allocated by the application */
    Csec_Ip_pState = pState;

    /* Fill the state structure with default values */
    Csec_Ip_pState->bCmdInProgress = FALSE;
    Csec_Ip_pState->u32Timeout     = CSEC_IP_TIMEOUT_DURATION_U32;
}

/**
 * @implements     Csec_Ip_Deinit_Activity
 */
void Csec_Ip_Deinit(void)
{
    /* Remove the reference to the state structure allocated by the application */
    Csec_Ip_pState = NULL_PTR;
}

/**
 * @implements     Csec_Ip_EncryptEcb_Activity
 */
Csec_Ip_ErrorCodeType Csec_Ip_EncryptEcb
(
    const Csec_Ip_ReqType* pRequest,
    Csec_Ip_KeyIdType      eKeyId,
    const uint8*           pPlainText,
    uint32                 u32Length,
    uint8*                 pCipherText
)
{
    uint32 u32ElapsedTime = 0U;

#if (STD_ON == CSEC_IP_DEV_ERROR_DETECT)
    /* Check the validity of the pointer parameters */
    DevAssert((pRequest != NULL_PTR));
    DevAssert((pPlainText != NULL_PTR));
    DevAssert((pCipherText != NULL_PTR));
    /* Check reference to the state structure allocated by the application */
    DevAssert((Csec_Ip_pState != NULL_PTR));
#endif /* (STD_ON == CSEC_IP_DEV_ERROR_DETECT) */

    /* Check if a command is in progress */
    if (Csec_Ip_pState->bCmdInProgress)
    {
        /* A command is in progress, return busy error */
        Csec_Ip_pState->ErrCode = CSEC_IP_ERC_STATUS_BUSY;
    }
    else
    {
        /* Clears the ACCERR and FPVIOL error flags */
        Csec_Ip_ClearErrorFlags();

        /* Update the internal state of the driver */
        Csec_Ip_UpdateState(eKeyId, CSEC_IP_CMD_ENC_ECB, pPlainText, pCipherText, u32Length);

        /* Check the request type */
        if (CSEC_IP_REQTYPE_SYNC == pRequest->eReqType)
        {
            /* Start the cryptographic operation with the parameters saved in internal state */
            Csec_Ip_StartEncDecECBCmd();

            /* Loop while command is in progress */
            while (Csec_Ip_pState->bCmdInProgress)
            {
                /* Wait for the command complete */
                u32ElapsedTime = Csec_Ip_WaitCommandCompletion(Csec_Ip_pState->u32Timeout, u32ElapsedTime);

                /* Check the error code */
                if (CSEC_IP_ERC_NO_RESPONSE == Csec_Ip_pState->ErrCode)
                {
                    /* There is no time left, cancel the command*/
                    Csec_Ip_CancelCommand();
                    /* Stop further processing */
                    Csec_Ip_pState->bCmdInProgress = FALSE;
                }
                else
                {
                    /* Continue the input processing */
                    Csec_Ip_ContinueEncDecECBCmd();
                }
            }
        }
        else
        {
            /* Make an asynchronous request */
            Csec_Ip_EncryptEcbAsync(pRequest);
        }
    }

    return Csec_Ip_pState->ErrCode;
}

/**
 * @implements     Csec_Ip_DecryptEcb_Activity
 */
Csec_Ip_ErrorCodeType Csec_Ip_DecryptEcb
(
    const Csec_Ip_ReqType* pRequest,
    Csec_Ip_KeyIdType      eKeyId,
    const uint8*           pCipherText,
    uint32                 u32Length,
    uint8*                 pPlainText
)
{
    uint32 u32ElapsedTime = 0U;

#if (STD_ON == CSEC_IP_DEV_ERROR_DETECT)
    /* Check the validity of the pointer parameters */
    DevAssert((pRequest != NULL_PTR));
    DevAssert((pPlainText != NULL_PTR));
    DevAssert((pCipherText != NULL_PTR));
    /* Check reference to the state structure allocated by the application */
    DevAssert((Csec_Ip_pState != NULL_PTR));
#endif /* (STD_ON == CSEC_IP_DEV_ERROR_DETECT) */

    /* Check if a command is in progress */
    if (Csec_Ip_pState->bCmdInProgress)
    {
        /* A command is in progress, return busy error */
        Csec_Ip_pState->ErrCode = CSEC_IP_ERC_STATUS_BUSY;
    }
    else
    {
        /* Clears the ACCERR and FPVIOL error flags */
        Csec_Ip_ClearErrorFlags();

        /* Update the internal state of the driver */
        Csec_Ip_UpdateState(eKeyId, CSEC_IP_CMD_DEC_ECB, pCipherText, pPlainText, u32Length);

        /* Check the request type */
        if (CSEC_IP_REQTYPE_SYNC == pRequest->eReqType)
        {
            /* Start the cryptographic operation with the parameters saved in internal state */
            Csec_Ip_StartEncDecECBCmd();

            /* Loop while command is in progress */
            while (Csec_Ip_pState->bCmdInProgress)
            {
                /* Wait for the command complete */
                u32ElapsedTime = Csec_Ip_WaitCommandCompletion(Csec_Ip_pState->u32Timeout, u32ElapsedTime);

                /* Check the error code */
                if (CSEC_IP_ERC_NO_RESPONSE == Csec_Ip_pState->ErrCode)
                {
                    /* There is no time left, cancel the command*/
                    Csec_Ip_CancelCommand();
                    /* Stop further processing */
                    Csec_Ip_pState->bCmdInProgress = FALSE;
                }
                else
                {
                    /* Continue the input processing */
                    Csec_Ip_ContinueEncDecECBCmd();
                }
            }
        }
        else
        {
            /* Make an asynchronous request */
            Csec_Ip_DecryptEcbAsync(pRequest);
        }
    }

    return Csec_Ip_pState->ErrCode;
}

/**
 * @implements     Csec_Ip_EncryptCbc_Activity
 */
Csec_Ip_ErrorCodeType Csec_Ip_EncryptCbc
(
    const Csec_Ip_ReqType* pRequest,
    Csec_Ip_KeyIdType      eKeyId,
    const uint8*           pPlainText,
    uint32                 u32Length,
    const uint8*           pIV,
    uint8*                 pCipherText
)
{
    uint32 u32ElapsedTime = 0U;

#if (STD_ON == CSEC_IP_DEV_ERROR_DETECT)
    /* Check the validity of the pointer parameters */
    DevAssert((pRequest != NULL_PTR));
    DevAssert((pPlainText != NULL_PTR));
    DevAssert((pCipherText != NULL_PTR));
    DevAssert((pIV != NULL_PTR));
    /* Check reference to the state structure allocated by the application */
    DevAssert((Csec_Ip_pState != NULL_PTR));
#endif /* (STD_ON == CSEC_IP_DEV_ERROR_DETECT) */

    /* Check if a command is in progress */
    if (Csec_Ip_pState->bCmdInProgress)
    {
        /* A command is in progress, return busy error */
        Csec_Ip_pState->ErrCode = CSEC_IP_ERC_STATUS_BUSY;
    }
    else
    {
        /* Clears the ACCERR and FPVIOL error flags */
        Csec_Ip_ClearErrorFlags();

        /* Update the internal state of the driver */
        Csec_Ip_UpdateState(eKeyId, CSEC_IP_CMD_ENC_CBC, pPlainText, pCipherText, u32Length);
        Csec_Ip_pState->pIV = pIV;

        /* Check the request type */
        if (CSEC_IP_REQTYPE_SYNC == pRequest->eReqType)
        {
            /* Start the cryptographic operation with the parameters saved in internal state */
            Csec_Ip_StartEncDecCBCCmd();

            /* Loop while command is in progress */
            while (Csec_Ip_pState->bCmdInProgress)
            {
                /* Wait for the command complete */
                u32ElapsedTime = Csec_Ip_WaitCommandCompletion(Csec_Ip_pState->u32Timeout, u32ElapsedTime);

                /* Check the error code */
                if (CSEC_IP_ERC_NO_RESPONSE == Csec_Ip_pState->ErrCode)
                {
                    /* There is no time left, cancel the command*/
                    Csec_Ip_CancelCommand();
                    /* Stop further processing */
                    Csec_Ip_pState->bCmdInProgress = FALSE;
                }
                else
                {
                    /* Continue the input processing */
                    Csec_Ip_ContinueEncDecCBCCmd();
                }
            }
        }
        else
        {
            /* Make an asynchronous request */
            Csec_Ip_EncryptCbcAsync(pRequest);
        }
    }

    return Csec_Ip_pState->ErrCode;
}

/**
 * @implements     Csec_Ip_DecryptCbc_Activity
 */
Csec_Ip_ErrorCodeType Csec_Ip_DecryptCbc
(
    const Csec_Ip_ReqType* pRequest,
    Csec_Ip_KeyIdType      eKeyId,
    const uint8*           pCipherText,
    uint32                 u32Length,
    const uint8*           pIV,
    uint8*                 pPlainText
)
{
    uint32 u32ElapsedTime = 0U;

#if (STD_ON == CSEC_IP_DEV_ERROR_DETECT)
    /* Check the validity of the pointer parameters */
    DevAssert((pRequest != NULL_PTR));
    DevAssert((pPlainText != NULL_PTR));
    DevAssert((pCipherText != NULL_PTR));
    DevAssert((pIV != NULL_PTR));
    /* Check reference to the state structure allocated by the application */
    DevAssert((Csec_Ip_pState != NULL_PTR));
#endif /* (STD_ON == CSEC_IP_DEV_ERROR_DETECT) */

    /* Check if a command is in progress */
    if (Csec_Ip_pState->bCmdInProgress)
    {
        /* A command is in progress, return busy error */
        Csec_Ip_pState->ErrCode = CSEC_IP_ERC_STATUS_BUSY;
    }
    else
    {
        /* Clears the ACCERR and FPVIOL error flags */
        Csec_Ip_ClearErrorFlags();

        /* Update the internal state of the driver */
        Csec_Ip_UpdateState(eKeyId, CSEC_IP_CMD_DEC_CBC, pCipherText, pPlainText, u32Length);
        Csec_Ip_pState->pIV = pIV;

        /* Check the request type */
        if (CSEC_IP_REQTYPE_SYNC == pRequest->eReqType)
        {
            /* Start the cryptographic operation with the parameters saved in internal state */
            Csec_Ip_StartEncDecCBCCmd();

            /* Loop while command is in progress */
            while (Csec_Ip_pState->bCmdInProgress)
            {
                /* Wait for the command complete */
                u32ElapsedTime = Csec_Ip_WaitCommandCompletion(Csec_Ip_pState->u32Timeout, u32ElapsedTime);

                /* Check the error code */
                if (CSEC_IP_ERC_NO_RESPONSE == Csec_Ip_pState->ErrCode)
                {
                    /* There is no time left, cancel the command*/
                    Csec_Ip_CancelCommand();
                    /* Stop further processing */
                    Csec_Ip_pState->bCmdInProgress = FALSE;
                }
                else
                {
                    /* Continue the input processing */
                    Csec_Ip_ContinueEncDecCBCCmd();
                }
            }
        }
        else
        {
            /* Make an asynchronous request */
            Csec_Ip_DecryptCbcAsync(pRequest);
        }
    }

    return Csec_Ip_pState->ErrCode;
}

/**
 * @implements     Csec_Ip_GenerateMac_Activity
 */
Csec_Ip_ErrorCodeType Csec_Ip_GenerateMac
(
    const Csec_Ip_ReqType* pRequest,
    Csec_Ip_KeyIdType      eKeyId,
    const uint8*           pMsg,
    uint32                 u32MsgLen,
    uint8*                 pCmac
)
{
    uint32 u32ElapsedTime = 0U;
    uint32 u32ByteSize;

#if (STD_ON == CSEC_IP_DEV_ERROR_DETECT)
    /* Check the validity of the pointer parameters */
    DevAssert((pRequest != NULL_PTR));
    DevAssert((pMsg != NULL_PTR));
    DevAssert((pCmac != NULL_PTR));
    /* Check reference to the state structure allocated by the application */
    DevAssert((Csec_Ip_pState != NULL_PTR));
#endif /* (STD_ON == CSEC_IP_DEV_ERROR_DETECT) */

    /* Check if a command is in progress */
    if (Csec_Ip_pState->bCmdInProgress)
    {
        /* A command is in progress, return busy error */
        Csec_Ip_pState->ErrCode = CSEC_IP_ERC_STATUS_BUSY;
    }
    else
    {
        /* Clears the ACCERR and FPVIOL error flags */
        Csec_Ip_ClearErrorFlags();

        /* Convert bits to bytes */
        u32ByteSize = Csec_Ip_BitsToBytesWithRound(u32MsgLen);

        /* Update the internal state of the driver */
        Csec_Ip_UpdateState(eKeyId, CSEC_IP_CMD_GENERATE_MAC, pMsg, pCmac, u32ByteSize);
        Csec_Ip_pState->u32MsgLen = u32MsgLen;

        /* Check the request type */
        if (CSEC_IP_REQTYPE_SYNC == pRequest->eReqType)
        {
            /* Start the cryptographic operation with the parameters saved in internal state */
            Csec_Ip_StartGenMACCmd();

            /* Loop while command is in progress */
            while (Csec_Ip_pState->bCmdInProgress)
            {
                /* Wait for the command complete */
                u32ElapsedTime = Csec_Ip_WaitCommandCompletion(Csec_Ip_pState->u32Timeout, u32ElapsedTime);

                /* Check the error code */
                if (CSEC_IP_ERC_NO_RESPONSE == Csec_Ip_pState->ErrCode)
                {
                    /* There is no time left, cancel the command*/
                    Csec_Ip_CancelCommand();
                    /* Stop further processing */
                    Csec_Ip_pState->bCmdInProgress = FALSE;
                }
                else
                {
                    /* Continue the input processing */
                    Csec_Ip_ContinueGenMACCmd();
                }
            }
        }
        else
        {
            /* Make an asynchronous request */
            Csec_Ip_GenerateMacAsync(pRequest);
        }
    }

    return Csec_Ip_pState->ErrCode;
}

/**
 * @implements     Csec_Ip_VerifyMac_Activity
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
)
{
    uint32 u32ElapsedTime = 0U;
    uint32 u32ByteSize;

#if (STD_ON == CSEC_IP_DEV_ERROR_DETECT)
    /* Check the validity of the pointer parameters */
    DevAssert((pRequest != NULL_PTR));
    DevAssert((pMsg != NULL_PTR));
    DevAssert((pMac != NULL_PTR));
    DevAssert((pbVerifStatus != NULL_PTR));
    /* Check reference to the state structure allocated by the application */
    DevAssert((Csec_Ip_pState != NULL_PTR));
#endif /* (STD_ON == CSEC_IP_DEV_ERROR_DETECT) */

    /* Check if a command is in progress */
    if (Csec_Ip_pState->bCmdInProgress)
    {
        /* A command is in progress, return busy error */
        Csec_Ip_pState->ErrCode = CSEC_IP_ERC_STATUS_BUSY;
    }
    else
    {
        /* Clears the ACCERR and FPVIOL error flags */
        Csec_Ip_ClearErrorFlags();

        /* Convert bits to bytes */
        u32ByteSize = Csec_Ip_BitsToBytesWithRound(u32MsgLen);

        /* Update the internal state of the driver */
        Csec_Ip_UpdateState(eKeyId, CSEC_IP_CMD_VERIFY_MAC, pMsg, NULL_PTR, u32ByteSize);
        Csec_Ip_pState->u32MsgLen     = u32MsgLen;
        Csec_Ip_pState->pbVerifStatus = pbVerifStatus;
        Csec_Ip_pState->bMacWritten   = FALSE;
        Csec_Ip_pState->pMac          = pMac;
        Csec_Ip_pState->u16MacLen     = u16MacLen;

        /* Check the request type */
        if (CSEC_IP_REQTYPE_SYNC == pRequest->eReqType)
        {
            /* Start the cryptographic operation with the parameters saved in internal state */
            Csec_Ip_StartVerifMACCmd();

            /* Loop while command is in progress */
            while (Csec_Ip_pState->bCmdInProgress)
            {
                /* Wait for the command complete */
                u32ElapsedTime = Csec_Ip_WaitCommandCompletion(Csec_Ip_pState->u32Timeout, u32ElapsedTime);

                /* Check the error code */
                if (CSEC_IP_ERC_NO_RESPONSE == Csec_Ip_pState->ErrCode)
                {
                    /* There is no time left, cancel the command*/
                    Csec_Ip_CancelCommand();
                    /* Stop further processing */
                    Csec_Ip_pState->bCmdInProgress = FALSE;
                }
                else
                {
                    /* Continue the input processing */
                    Csec_Ip_ContinueVerifMACCmd();
                }
            }
        }
        else
        {
            /* Make an asynchronous request */
            Csec_Ip_VerifyMacAsync(pRequest);
        }
    }

    return Csec_Ip_pState->ErrCode;
}

/**
 * @implements     Csec_Ip_LoadKey_Activity
 */
Csec_Ip_ErrorCodeType Csec_Ip_LoadKey
(
    Csec_Ip_KeyIdType eKeyId,
    const uint8*      pM1,
    const uint8*      pM2,
    const uint8*      pM3,
    uint8*            pM4,
    uint8*            pM5
)
{
#if (STD_ON == CSEC_IP_DEV_ERROR_DETECT)
    /* Check the validity of the pointer parameters */
    DevAssert((pM1 != NULL_PTR));
    DevAssert((pM2 != NULL_PTR));
    DevAssert((pM3 != NULL_PTR));
    DevAssert((pM4 != NULL_PTR));
    DevAssert((pM5 != NULL_PTR));
    /* Check reference to the state structure allocated by the application */
    DevAssert((Csec_Ip_pState != NULL_PTR));
#endif /* (STD_ON == CSEC_IP_DEV_ERROR_DETECT) */

    /* Check if a command is in progress */
    if (Csec_Ip_pState->bCmdInProgress)
    {
        /* A command is in progress, return busy error */
        Csec_Ip_pState->ErrCode = CSEC_IP_ERC_STATUS_BUSY;
    }
    else
    {
        /* The command processing has started */
        Csec_Ip_pState->bCmdInProgress = TRUE;

        /* Clear previous error stored in driver state */
        Csec_Ip_pState->ErrCode        = CSEC_IP_ERC_NO_ERROR;

        /* Clears the ACCERR and FPVIOL error flags */
        Csec_Ip_ClearErrorFlags();

        /* Write the values of M1-M3 */
        Csec_Ip_WriteCommandBytes(CSEC_IP_PAGE_1_OFFSET_U8, pM1, CSEC_IP_M1_SIZE_IN_BYTES_U8);
        Csec_Ip_WriteCommandBytes(CSEC_IP_PAGE_2_OFFSET_U8, pM2, CSEC_IP_M2_SIZE_IN_BYTES_U8);
        Csec_Ip_WriteCommandBytes(CSEC_IP_PAGE_4_OFFSET_U8, pM3, CSEC_IP_M3_SIZE_IN_BYTES_U8);

        /* Write the command header. This will trigger the command execution. */
        Csec_Ip_WriteCommandHeader(CSEC_IP_CMD_LOAD_KEY, CSEC_IP_FUNC_FORMAT_COPY, CSEC_IP_CALL_SEQ_FIRST, eKeyId);

        /* Wait until the execution of the command is complete */
        (void)Csec_Ip_WaitCommandCompletion(Csec_Ip_pState->u32Timeout, CSEC_IP_NO_ELAPSED_TIME_U32);

        /* If no error was reported by wait command function, read the error bits */
        if (CSEC_IP_ERC_NO_ERROR == Csec_Ip_pState->ErrCode)
        {
            /* Read the error code */
            Csec_Ip_pState->ErrCode = Csec_Ip_ReadErrorBits();
        }

        /* If the command has run successfully read the M4 and M5 */
        if (CSEC_IP_ERC_NO_ERROR == Csec_Ip_pState->ErrCode)
        {
            Csec_Ip_ReadCommandBytes(CSEC_IP_PAGE_5_OFFSET_U8, pM4, CSEC_IP_M4_SIZE_IN_BYTES_U8);
            Csec_Ip_ReadCommandBytes(CSEC_IP_PAGE_7_OFFSET_U8, pM5, CSEC_IP_M5_SIZE_IN_BYTES_U8);
        }

        /* The command was finished */
        Csec_Ip_pState->bCmdInProgress = FALSE;
    }

    return Csec_Ip_pState->ErrCode;
}

/**
 * @implements     Csec_Ip_LoadPlainKey_Activity
 */
Csec_Ip_ErrorCodeType Csec_Ip_LoadPlainKey
(
    const uint8* pPlainKey
)
{
#if (STD_ON == CSEC_IP_DEV_ERROR_DETECT)
    /* Check the validity of the pointer parameter */
    DevAssert((pPlainKey != NULL_PTR));
    /* Check reference to the state structure allocated by the application */
    DevAssert((Csec_Ip_pState != NULL_PTR));
#endif /* (STD_ON == CSEC_IP_DEV_ERROR_DETECT) */

    /* Check if a command is in progress */
    if (Csec_Ip_pState->bCmdInProgress)
    {
        /* A command is in progress, return busy error */
        Csec_Ip_pState->ErrCode = CSEC_IP_ERC_STATUS_BUSY;
    }
    else
    {
        /* The command processing has started */
        Csec_Ip_pState->bCmdInProgress = TRUE;

        /* Clear previous error stored in driver state */
        Csec_Ip_pState->ErrCode        = CSEC_IP_ERC_NO_ERROR;

        /* Clears the ACCERR and FPVIOL error flags */
        Csec_Ip_ClearErrorFlags();

        /* Write the bytes of the key */
        Csec_Ip_WriteCommandBytes(CSEC_IP_PAGE_1_OFFSET_U8, pPlainKey, CSEC_IP_PAGE_SIZE_IN_BYTES_U8);

        /* Write the command header. This will trigger the command execution. */
        Csec_Ip_WriteCommandHeader(CSEC_IP_CMD_LOAD_PLAIN_KEY, CSEC_IP_FUNC_FORMAT_COPY, CSEC_IP_CALL_SEQ_FIRST, CSEC_IP_RAM_KEY);

        /* Wait until the execution of the command is complete */
        (void)Csec_Ip_WaitCommandCompletion(Csec_Ip_pState->u32Timeout, CSEC_IP_NO_ELAPSED_TIME_U32);

        /* If no error was reported by wait command function, read the error bits */
        if (CSEC_IP_ERC_NO_ERROR == Csec_Ip_pState->ErrCode)
        {
            /* Read the error code */
            Csec_Ip_pState->ErrCode = Csec_Ip_ReadErrorBits();
        }

        /* The command was finished */
        Csec_Ip_pState->bCmdInProgress = FALSE;
    }

    return Csec_Ip_pState->ErrCode;
}

/**
 * @implements     Csec_Ip_ExportRamKey_Activity
 */
Csec_Ip_ErrorCodeType Csec_Ip_ExportRamKey
(
    uint8* pM1,
    uint8* pM2,
    uint8* pM3,
    uint8* pM4,
    uint8* pM5
)
{
#if (STD_ON == CSEC_IP_DEV_ERROR_DETECT)
    /* Check the validity of the pointer parameters */
    DevAssert((pM1 != NULL_PTR));
    DevAssert((pM2 != NULL_PTR));
    DevAssert((pM3 != NULL_PTR));
    DevAssert((pM4 != NULL_PTR));
    DevAssert((pM5 != NULL_PTR));
    /* Check reference to the state structure allocated by the application */
    DevAssert((Csec_Ip_pState != NULL_PTR));
#endif /* (STD_ON == CSEC_IP_DEV_ERROR_DETECT) */

    /* Check if a command is in progress */
    if (Csec_Ip_pState->bCmdInProgress)
    {
        /* A command is in progress, return busy error */
        Csec_Ip_pState->ErrCode = CSEC_IP_ERC_STATUS_BUSY;
    }
    else
    {
        /* The command processing has started */
        Csec_Ip_pState->bCmdInProgress = TRUE;

        /* Clear previous error stored in driver state */
        Csec_Ip_pState->ErrCode        = CSEC_IP_ERC_NO_ERROR;

        /* Clears the ACCERR and FPVIOL error flags */
        Csec_Ip_ClearErrorFlags();

        /* Write the command header. This will trigger the command execution. */
        Csec_Ip_WriteCommandHeader(CSEC_IP_CMD_EXPORT_RAM_KEY, CSEC_IP_FUNC_FORMAT_COPY, CSEC_IP_CALL_SEQ_FIRST, CSEC_IP_RAM_KEY);

        /* Wait until the execution of the command is complete */
        (void)Csec_Ip_WaitCommandCompletion(Csec_Ip_pState->u32Timeout, CSEC_IP_NO_ELAPSED_TIME_U32);

        /* If no error was reported by wait command function, read the error bits */
        if (CSEC_IP_ERC_NO_ERROR == Csec_Ip_pState->ErrCode)
        {
            /* Read the error code */
            Csec_Ip_pState->ErrCode = Csec_Ip_ReadErrorBits();
        }

        /* If the command has run successfully read M1 to M5 */
        if (CSEC_IP_ERC_NO_ERROR == Csec_Ip_pState->ErrCode)
        {
            Csec_Ip_ReadCommandBytes(CSEC_IP_PAGE_1_OFFSET_U8, pM1, CSEC_IP_M1_SIZE_IN_BYTES_U8);
            Csec_Ip_ReadCommandBytes(CSEC_IP_PAGE_2_OFFSET_U8, pM2, CSEC_IP_M2_SIZE_IN_BYTES_U8);
            Csec_Ip_ReadCommandBytes(CSEC_IP_PAGE_4_OFFSET_U8, pM3, CSEC_IP_M3_SIZE_IN_BYTES_U8);
            Csec_Ip_ReadCommandBytes(CSEC_IP_PAGE_5_OFFSET_U8, pM4, CSEC_IP_M4_SIZE_IN_BYTES_U8);
            Csec_Ip_ReadCommandBytes(CSEC_IP_PAGE_7_OFFSET_U8, pM5, CSEC_IP_M5_SIZE_IN_BYTES_U8);
        }

        /* The command was finished */
        Csec_Ip_pState->bCmdInProgress = FALSE;
    }

    return Csec_Ip_pState->ErrCode;
}

/**
 * @implements     Csec_Ip_InitRng_Activity
 */
Csec_Ip_ErrorCodeType Csec_Ip_InitRng(void)
{
#if (STD_ON == CSEC_IP_DEV_ERROR_DETECT)
    /* Check reference to the state structure allocated by the application */
    DevAssert((Csec_Ip_pState != NULL_PTR));
#endif /* (STD_ON == CSEC_IP_DEV_ERROR_DETECT) */

    /* Check if a command is in progress */
    if (Csec_Ip_pState->bCmdInProgress)
    {
        /* A command is in progress, return busy error */
        Csec_Ip_pState->ErrCode = CSEC_IP_ERC_STATUS_BUSY;
    }
    else
    {
        /* The command processing has started */
        Csec_Ip_pState->bCmdInProgress = TRUE;

        /* Clear previous error stored in driver state */
        Csec_Ip_pState->ErrCode        = CSEC_IP_ERC_NO_ERROR;

        /* Clears the ACCERR and FPVIOL error flags */
        Csec_Ip_ClearErrorFlags();

        /* Write the command header. This will trigger the command execution. */
        Csec_Ip_WriteCommandHeader(CSEC_IP_CMD_INIT_RNG, CSEC_IP_FUNC_FORMAT_COPY, CSEC_IP_CALL_SEQ_FIRST, CSEC_IP_SECRET_KEY);

        /* Wait until the execution of the command is complete */
        (void)Csec_Ip_WaitCommandCompletion(Csec_Ip_pState->u32Timeout, CSEC_IP_NO_ELAPSED_TIME_U32);

        /* If no error was reported by wait command function, read the error bits */
        if (CSEC_IP_ERC_NO_ERROR == Csec_Ip_pState->ErrCode)
        {
            /* Read the error code */
            Csec_Ip_pState->ErrCode = Csec_Ip_ReadErrorBits();
        }

        /* The command was finished */
        Csec_Ip_pState->bCmdInProgress = FALSE;
    }

    return Csec_Ip_pState->ErrCode;
}

/**
 * @implements     Csec_Ip_ExtendSeed_Activity
 */
Csec_Ip_ErrorCodeType Csec_Ip_ExtendSeed
(
    const uint8* pEntropy
)
{
#if (STD_ON == CSEC_IP_DEV_ERROR_DETECT)
    /* Check the validity of the pointer parameter */
    DevAssert((pEntropy != NULL_PTR));
    /* Check reference to the state structure allocated by the application */
    DevAssert((Csec_Ip_pState != NULL_PTR));
#endif /* (STD_ON == CSEC_IP_DEV_ERROR_DETECT) */

    /* Check if a command is in progress */
    if (Csec_Ip_pState->bCmdInProgress)
    {
        /* A command is in progress, return busy error */
        Csec_Ip_pState->ErrCode = CSEC_IP_ERC_STATUS_BUSY;
    }
    else
    {
        /* The command processing has started */
        Csec_Ip_pState->bCmdInProgress = TRUE;

        /* Clear previous error stored in driver state */
        Csec_Ip_pState->ErrCode        = CSEC_IP_ERC_NO_ERROR;

        /* Clears the ACCERR and FPVIOL error flags */
        Csec_Ip_ClearErrorFlags();

        /* Write the entropy parameter */
        Csec_Ip_WriteCommandBytes(CSEC_IP_PAGE_1_OFFSET_U8, pEntropy, CSEC_IP_PAGE_SIZE_IN_BYTES_U8);

        /* Write the command header. This will trigger the command execution. */
        Csec_Ip_WriteCommandHeader(CSEC_IP_CMD_EXTEND_SEED, CSEC_IP_FUNC_FORMAT_COPY, CSEC_IP_CALL_SEQ_FIRST, CSEC_IP_SECRET_KEY);

        /* Wait until the execution of the command is complete */
        (void)Csec_Ip_WaitCommandCompletion(Csec_Ip_pState->u32Timeout, CSEC_IP_NO_ELAPSED_TIME_U32);

        /* If no error was reported by wait command function, read the error bits */
        if (CSEC_IP_ERC_NO_ERROR == Csec_Ip_pState->ErrCode)
        {
            /* Read the error code */
            Csec_Ip_pState->ErrCode = Csec_Ip_ReadErrorBits();
        }

        /* The command was finished */
        Csec_Ip_pState->bCmdInProgress = FALSE;
    }

    return Csec_Ip_pState->ErrCode;
}

/**
 * @implements     Csec_Ip_GenerateRnd_Activity
 */
Csec_Ip_ErrorCodeType Csec_Ip_GenerateRnd
(
    const Csec_Ip_ReqType* pRequest,
    uint8*                 pRnd
)
{
#if (STD_ON == CSEC_IP_DEV_ERROR_DETECT)
    /* Check the validity of the pointer parameters */
    DevAssert((pRequest != NULL_PTR));
    DevAssert((pRnd != NULL_PTR));
    /* Check reference to the state structure allocated by the application */
    DevAssert((Csec_Ip_pState != NULL_PTR));
#endif /* (STD_ON == CSEC_IP_DEV_ERROR_DETECT) */

    /* Check if a command is in progress */
    if (Csec_Ip_pState->bCmdInProgress)
    {
        /* A command is in progress, return busy error */
        Csec_Ip_pState->ErrCode = CSEC_IP_ERC_STATUS_BUSY;
    }
    else
    {
        /* The command processing has started */
        Csec_Ip_pState->bCmdInProgress = TRUE;

        /* Update the internal state of the driver */
        Csec_Ip_UpdateState(CSEC_IP_KEY_INVALID, CSEC_IP_CMD_RND, NULL_PTR, pRnd, (uint32)0U);

        /* Clears the ACCERR and FPVIOL error flags */
        Csec_Ip_ClearErrorFlags();

        /* Check the request type */
        if (CSEC_IP_REQTYPE_SYNC == pRequest->eReqType)
        {
            /* Write the command header. This will trigger the command execution. */
            Csec_Ip_WriteCommandHeader(CSEC_IP_CMD_RND, CSEC_IP_FUNC_FORMAT_COPY, CSEC_IP_CALL_SEQ_FIRST, CSEC_IP_SECRET_KEY);

            /* Wait until the execution of the command is complete */
            (void)Csec_Ip_WaitCommandCompletion(Csec_Ip_pState->u32Timeout, CSEC_IP_NO_ELAPSED_TIME_U32);

            /* If no error was reported by wait command function, read the error bits */
            if (CSEC_IP_ERC_NO_ERROR == Csec_Ip_pState->ErrCode)
            {
                /* Read the error code */
                Csec_Ip_pState->ErrCode = Csec_Ip_ReadErrorBits();
            }

            /* If the command has run successfully read the random number */
            if (CSEC_IP_ERC_NO_ERROR == Csec_Ip_pState->ErrCode)
            {
                Csec_Ip_ReadCommandBytes(CSEC_IP_PAGE_1_OFFSET_U8, pRnd, CSEC_IP_PAGE_SIZE_IN_BYTES_U8);
            }

            /* The command was finished */
            Csec_Ip_pState->bCmdInProgress = FALSE;
        }
        else
        {
            /* Make an asynchronous request */

            /* Update the internal state of the driver for asynchronous operation */
            Csec_Ip_pState->pfCallback     = pRequest->pfCallback;
            Csec_Ip_pState->pCallbackParam = pRequest->pCallbackParam;
            Csec_Ip_pState->eReqType       = pRequest->eReqType;

            /* Write the command header. This will trigger the command execution. */
            Csec_Ip_WriteCommandHeader(CSEC_IP_CMD_RND, CSEC_IP_FUNC_FORMAT_COPY, CSEC_IP_CALL_SEQ_FIRST, CSEC_IP_SECRET_KEY);

            /* Enable interrupt */
            if (CSEC_IP_REQTYPE_ASYNC_IRQ == pRequest->eReqType)
            {
                Csec_Ip_SetInterrupt(TRUE);
            }
        }
    }

    return Csec_Ip_pState->ErrCode;
}

/**
 * @implements     Csec_Ip_BootFailure_Activity
 */
Csec_Ip_ErrorCodeType Csec_Ip_BootFailure(void)
{
#if (STD_ON == CSEC_IP_DEV_ERROR_DETECT)
    /* Check reference to the state structure allocated by the application */
    DevAssert((Csec_Ip_pState != NULL_PTR));
#endif /* (STD_ON == CSEC_IP_DEV_ERROR_DETECT) */

    /* Check if a command is in progress */
    if (Csec_Ip_pState->bCmdInProgress)
    {
        /* A command is in progress, return busy error */
        Csec_Ip_pState->ErrCode = CSEC_IP_ERC_STATUS_BUSY;
    }
    else
    {
        /* The command processing has started */
        Csec_Ip_pState->bCmdInProgress = TRUE;

        /* Clear previous error stored in driver state */
        Csec_Ip_pState->ErrCode        = CSEC_IP_ERC_NO_ERROR;

        /* Clears the ACCERR and FPVIOL error flags */
        Csec_Ip_ClearErrorFlags();

        /* Write the command header. This will trigger the command execution. */
        Csec_Ip_WriteCommandHeader(CSEC_IP_CMD_BOOT_FAILURE, CSEC_IP_FUNC_FORMAT_COPY, CSEC_IP_CALL_SEQ_FIRST, CSEC_IP_SECRET_KEY);

        /* Wait until the execution of the command is complete */
        (void)Csec_Ip_WaitCommandCompletion(Csec_Ip_pState->u32Timeout, CSEC_IP_NO_ELAPSED_TIME_U32);

        /* If no error was reported by wait command function, read the error bits */
        if (CSEC_IP_ERC_NO_ERROR == Csec_Ip_pState->ErrCode)
        {
            /* Read the error code */
            Csec_Ip_pState->ErrCode = Csec_Ip_ReadErrorBits();
        }

        /* The command was finished */
        Csec_Ip_pState->bCmdInProgress = FALSE;
    }

    return Csec_Ip_pState->ErrCode;
}

/**
 * @implements     Csec_Ip_BootOk_Activity
 */
Csec_Ip_ErrorCodeType Csec_Ip_BootOk(void)
{
#if (STD_ON == CSEC_IP_DEV_ERROR_DETECT)
    /* Check reference to the state structure allocated by the application */
    DevAssert((Csec_Ip_pState != NULL_PTR));
#endif /* (STD_ON == CSEC_IP_DEV_ERROR_DETECT) */

    /* Check if a command is in progress */
    if (Csec_Ip_pState->bCmdInProgress)
    {
        /* A command is in progress, return busy error */
        Csec_Ip_pState->ErrCode = CSEC_IP_ERC_STATUS_BUSY;
    }
    else
    {
        /* The command processing has started */
        Csec_Ip_pState->bCmdInProgress = TRUE;

        /* Clear previous error stored in driver state */
        Csec_Ip_pState->ErrCode        = CSEC_IP_ERC_NO_ERROR;

        /* Clears the ACCERR and FPVIOL error flags */
        Csec_Ip_ClearErrorFlags();

        /* Write the command header. This will trigger the command execution. */
        Csec_Ip_WriteCommandHeader(CSEC_IP_CMD_BOOT_OK, CSEC_IP_FUNC_FORMAT_COPY, CSEC_IP_CALL_SEQ_FIRST, CSEC_IP_SECRET_KEY);

        /* Wait until the execution of the command is complete */
        (void)Csec_Ip_WaitCommandCompletion(Csec_Ip_pState->u32Timeout, CSEC_IP_NO_ELAPSED_TIME_U32);

        /* If no error was reported by wait command function, read the error bits */
        if (CSEC_IP_ERC_NO_ERROR == Csec_Ip_pState->ErrCode)
        {
            /* Read the error code */
            Csec_Ip_pState->ErrCode = Csec_Ip_ReadErrorBits();
        }

        /* The command was finished */
        Csec_Ip_pState->bCmdInProgress = FALSE;
    }

    return Csec_Ip_pState->ErrCode;
}

/**
 * @implements     Csec_Ip_BootDefine_Activity
 */
Csec_Ip_ErrorCodeType Csec_Ip_BootDefine
(
    uint32                 u32BootSize,
    Csec_Ip_BootFlavorType eBootFlavor
)
{
#if (STD_ON == CSEC_IP_DEV_ERROR_DETECT)
    /* Check reference to the state structure allocated by the application */
    DevAssert((Csec_Ip_pState != NULL_PTR));
#endif /* (STD_ON == CSEC_IP_DEV_ERROR_DETECT) */

    /* Check if a command is in progress */
    if (Csec_Ip_pState->bCmdInProgress)
    {
        /* A command is in progress, return busy error */
        Csec_Ip_pState->ErrCode = CSEC_IP_ERC_STATUS_BUSY;
    }
    else
    {
        /* The command processing has started */
        Csec_Ip_pState->bCmdInProgress = TRUE;

        /* Clear previous error stored in driver state */
        Csec_Ip_pState->ErrCode        = CSEC_IP_ERC_NO_ERROR;

        /* Clears the ACCERR and FPVIOL error flags */
        Csec_Ip_ClearErrorFlags();

        /* Write the boot size and the boot flavor parameters */
        Csec_Ip_WriteCommandWord(CSEC_IP_BOOT_SIZE_OFFSET_U8, u32BootSize);
        Csec_Ip_WriteCommandByte(CSEC_IP_BOOT_FLAVOR_OFFSET_U8, (uint8)eBootFlavor);

        /* Write the command header. This will trigger the command execution. */
        Csec_Ip_WriteCommandHeader(CSEC_IP_CMD_BOOT_DEFINE, CSEC_IP_FUNC_FORMAT_COPY, CSEC_IP_CALL_SEQ_FIRST, CSEC_IP_SECRET_KEY);

        /* Wait until the execution of the command is complete */
        (void)Csec_Ip_WaitCommandCompletion(Csec_Ip_pState->u32Timeout, CSEC_IP_NO_ELAPSED_TIME_U32);

        /* If no error was reported by wait command function, read the error bits */
        if (CSEC_IP_ERC_NO_ERROR == Csec_Ip_pState->ErrCode)
        {
            /* Read the error code */
            Csec_Ip_pState->ErrCode = Csec_Ip_ReadErrorBits();
        }

        /* The command was finished */
        Csec_Ip_pState->bCmdInProgress = FALSE;
    }

    return Csec_Ip_pState->ErrCode;
}

/**
 * @implements     Csec_Ip_GetId_Activity
 */
Csec_Ip_ErrorCodeType Csec_Ip_GetId
(
    const uint8* pChallenge,
          uint8* pUid,
          uint8* pSreg,
          uint8* pMac
)
{
#if (STD_ON == CSEC_IP_DEV_ERROR_DETECT)
    /* Check the validity of the pointer parameters */
    DevAssert((pChallenge != NULL_PTR));
    DevAssert((pUid != NULL_PTR));
    DevAssert((pSreg != NULL_PTR));
    DevAssert((pMac != NULL_PTR));
    /* Check reference to the state structure allocated by the application */
    DevAssert((Csec_Ip_pState != NULL_PTR));
#endif /* (STD_ON == CSEC_IP_DEV_ERROR_DETECT) */

    /* Check if a command is in progress */
    if (Csec_Ip_pState->bCmdInProgress)
    {
        /* A command is in progress, return busy error */
        Csec_Ip_pState->ErrCode = CSEC_IP_ERC_STATUS_BUSY;
    }
    else
    {
        /* The command processing has started */
        Csec_Ip_pState->bCmdInProgress = TRUE;

        /* Clear previous error stored in driver state */
        Csec_Ip_pState->ErrCode        = CSEC_IP_ERC_NO_ERROR;

        /* Clears the ACCERR and FPVIOL error flags */
        Csec_Ip_ClearErrorFlags();

        /* Write the challenge */
        Csec_Ip_WriteCommandBytes(CSEC_IP_PAGE_1_OFFSET_U8, pChallenge, CSEC_IP_PAGE_SIZE_IN_BYTES_U8);

        /* Write the command header. This will trigger the command execution. */
        Csec_Ip_WriteCommandHeader(CSEC_IP_CMD_GET_ID, CSEC_IP_FUNC_FORMAT_COPY, CSEC_IP_CALL_SEQ_FIRST, CSEC_IP_SECRET_KEY);

        /* Wait until the execution of the command is complete */
        (void)Csec_Ip_WaitCommandCompletion(Csec_Ip_pState->u32Timeout, CSEC_IP_NO_ELAPSED_TIME_U32);

        /* If no error was reported by wait command function, read the error bits */
        if (CSEC_IP_ERC_NO_ERROR == Csec_Ip_pState->ErrCode)
        {
            /* Read the error code */
            Csec_Ip_pState->ErrCode = Csec_Ip_ReadErrorBits();
        }

        /* If the command has run successfully read the UID, SREG and MAC */
        if (CSEC_IP_ERC_NO_ERROR == Csec_Ip_pState->ErrCode)
        {
             /* Read the UID */
            Csec_Ip_ReadCommandBytes(CSEC_IP_PAGE_2_OFFSET_U8, pUid, (uint8)(CSEC_IP_PAGE_SIZE_IN_BYTES_U8 - 1U));
            /* Read the value of the SREG register */
            *pSreg = Csec_Ip_ReadCommandByte(CSEC_IP_SREG_OFFSET_U8);
            /* Read the MAC over the UID and the SREG */
            Csec_Ip_ReadCommandBytes(CSEC_IP_PAGE_3_OFFSET_U8, pMac, CSEC_IP_PAGE_SIZE_IN_BYTES_U8);
        }

        /* The command was finished */
        Csec_Ip_pState->bCmdInProgress = FALSE;
    }

    return Csec_Ip_pState->ErrCode;
}

/**
 * @implements     Csec_Ip_DbgChal_Activity
 */
Csec_Ip_ErrorCodeType Csec_Ip_DbgChal
(
    uint8* pChallenge
)
{
#if (STD_ON == CSEC_IP_DEV_ERROR_DETECT)
    /* Check the validity of the pointer parameter */
    DevAssert((pChallenge != NULL_PTR));
    /* Check reference to the state structure allocated by the application */
    DevAssert((Csec_Ip_pState != NULL_PTR));
#endif /* (STD_ON == CSEC_IP_DEV_ERROR_DETECT) */

    /* Check if a command is in progress */
    if (Csec_Ip_pState->bCmdInProgress)
    {
        /* A command is in progress, return busy error */
        Csec_Ip_pState->ErrCode = CSEC_IP_ERC_STATUS_BUSY;
    }
    else
    {
        /* The command processing has started */
        Csec_Ip_pState->bCmdInProgress = TRUE;

        /* Clear previous error stored in driver state */
        Csec_Ip_pState->ErrCode        = CSEC_IP_ERC_NO_ERROR;

        /* Clears the ACCERR and FPVIOL error flags */
        Csec_Ip_ClearErrorFlags();

        /* Write the command header. This will trigger the command execution. */
        Csec_Ip_WriteCommandHeader(CSEC_IP_CMD_DBG_CHAL, CSEC_IP_FUNC_FORMAT_COPY, CSEC_IP_CALL_SEQ_FIRST, CSEC_IP_SECRET_KEY);

        /* Wait until the execution of the command is complete */
        (void)Csec_Ip_WaitCommandCompletion(Csec_Ip_pState->u32Timeout, CSEC_IP_NO_ELAPSED_TIME_U32);

        /* If no error was reported by wait command function, read the error bits */
        if (CSEC_IP_ERC_NO_ERROR == Csec_Ip_pState->ErrCode)
        {
            /* Read the error code */
            Csec_Ip_pState->ErrCode = Csec_Ip_ReadErrorBits();
        }

        /* If the command has run successfully read the challenge */
        if (CSEC_IP_ERC_NO_ERROR == Csec_Ip_pState->ErrCode)
        {
            /* Read the challenge */
            Csec_Ip_ReadCommandBytes(CSEC_IP_PAGE_1_OFFSET_U8, pChallenge, CSEC_IP_PAGE_SIZE_IN_BYTES_U8);
        }

        /* The command was finished */
        Csec_Ip_pState->bCmdInProgress = FALSE;
    }

    return Csec_Ip_pState->ErrCode;
}

/**
 * @implements     Csec_Ip_DbgAuth_Activity
 */
Csec_Ip_ErrorCodeType Csec_Ip_DbgAuth
(
    const uint8* pAuthorization
)
{
#if (STD_ON == CSEC_IP_DEV_ERROR_DETECT)
    /* Check the validity of the pointer parameter */
    DevAssert((pAuthorization != NULL_PTR));
    /* Check reference to the state structure allocated by the application */
    DevAssert((Csec_Ip_pState != NULL_PTR));
#endif /* (STD_ON == CSEC_IP_DEV_ERROR_DETECT) */

    /* Check if a command is in progress */
    if (Csec_Ip_pState->bCmdInProgress)
    {
        /* A command is in progress, return busy error */
        Csec_Ip_pState->ErrCode = CSEC_IP_ERC_STATUS_BUSY;
    }
    else
    {
        /* The command processing has started */
        Csec_Ip_pState->bCmdInProgress = TRUE;

        /* Clear previous error stored in driver state */
        Csec_Ip_pState->ErrCode        = CSEC_IP_ERC_NO_ERROR;

        /* Clears the ACCERR and FPVIOL error flags */
        Csec_Ip_ClearErrorFlags();

        /* Write the authorization computed from the challenge */
        Csec_Ip_WriteCommandBytes(CSEC_IP_PAGE_1_OFFSET_U8, pAuthorization, CSEC_IP_PAGE_SIZE_IN_BYTES_U8);

        /* Write the command header. This will trigger the command execution. */
        Csec_Ip_WriteCommandHeader(CSEC_IP_CMD_DBG_AUTH, CSEC_IP_FUNC_FORMAT_COPY, CSEC_IP_CALL_SEQ_FIRST, CSEC_IP_SECRET_KEY);

        /* Wait until the execution of the command is complete */
        (void)Csec_Ip_WaitCommandCompletion(Csec_Ip_pState->u32Timeout, CSEC_IP_NO_ELAPSED_TIME_U32);

        /* If no error was reported by wait command function, read the error bits */
        if (CSEC_IP_ERC_NO_ERROR == Csec_Ip_pState->ErrCode)
        {
            /* Read the error code */
            Csec_Ip_pState->ErrCode = Csec_Ip_ReadErrorBits();
        }

#if (STD_ON == CSEC_IP_FTFM_MODULE)
        /* For high temperature chips (S32K14XW) the returned result of the CMD_DBG AUTH command is different from the S32K1XX chips:
           After successful authentication, the DFlash User IFR, DFlash space, and Flash Keys (including EFlash and FlexRAM space) have been erased.
           Then, a reset must be performed. At this point, the FlexRAM is no longer configured for emulated EEPROM and is now available as traditional RAM (EEERDY == 0, RAMRDY == 1).
           For the FTFM, CMD_DBG AUTH will clear EEERDY and set RAMRDY, which was the original intent, PRAM no longer can be accessed making the PRAM reads to return zeros. */
        if ((Csec_Ip_ErrorCodeType)0U == Csec_Ip_pState->ErrCode)
        {
            Csec_Ip_pState->ErrCode = CSEC_IP_ERC_NO_ERROR;
        }
#endif /* (STD_ON == CSEC_IP_FTFM_MODULE) */

        /* The command was finished */
        Csec_Ip_pState->bCmdInProgress = FALSE;
    }

    return Csec_Ip_pState->ErrCode;
}

/**
 * @implements     Csec_Ip_MpCompress_Activity
 */
Csec_Ip_ErrorCodeType Csec_Ip_MpCompress
(
    const uint8* pMsg,
    uint16       u16MsgLen,
    uint8*       pMpCompress
)
{
    uint32 u32NumBytes;
    uint32 u32ElapsedTime  = 0U;
    uint16 u16NumPagesLeft = u16MsgLen;
    uint8  u8NumPages;
    uint8  u8NumBytes;

#if (STD_ON == CSEC_IP_DEV_ERROR_DETECT)
    /* Check the validity of the pointer parameters */
    DevAssert((pMsg != NULL_PTR));
    DevAssert((pMpCompress != NULL_PTR));
    /* Check reference to the state structure allocated by the application */
    DevAssert((Csec_Ip_pState != NULL_PTR));
#endif /* (STD_ON == CSEC_IP_DEV_ERROR_DETECT) */

    /* Check if a command is in progress */
    if (Csec_Ip_pState->bCmdInProgress)
    {
        /* A command is in progress, return busy error */
        Csec_Ip_pState->ErrCode = CSEC_IP_ERC_STATUS_BUSY;
    }
    else
    {
        /* Clears the ACCERR and FPVIOL error flags */
        Csec_Ip_ClearErrorFlags();

        /* Convert the number of 128 bit messages to bytes */
        u32NumBytes = (uint32)u16MsgLen << CSEC_IP_BYTES_TO_FROM_PAGES_SHIFT_U8;

        /* Update the internal state of the driver */
        Csec_Ip_UpdateState(CSEC_IP_SECRET_KEY, CSEC_IP_CMD_MP_COMPRESS, pMsg, pMpCompress, u32NumBytes);

        /* Loop and launch commands until the end of the message */
        while (u16NumPagesLeft > (uint16)0U)
        {
            /* Compute the number of pages that can be written */
            u8NumPages = (uint8)((u16NumPagesLeft > CSEC_IP_DATA_PAGES_AVAILABLE_U8) ? CSEC_IP_DATA_PAGES_AVAILABLE_U8 : u16NumPagesLeft);

            /* Convert pages to bytes */
            u8NumBytes = (uint8)(u8NumPages << CSEC_IP_BYTES_TO_FROM_PAGES_SHIFT_U8);

            /* Write the message */
            Csec_Ip_WriteCommandBytes(CSEC_IP_PAGE_1_OFFSET_U8, &pMsg[Csec_Ip_pState->u32Index], u8NumBytes);

            /* Write the size of the message */
            Csec_Ip_WriteCommandHalfWord(CSEC_IP_PAGE_LENGTH_OFFSET_U8, u16MsgLen);

            /* Write the command header. This will trigger the command execution. */
            Csec_Ip_WriteCommandHeader(CSEC_IP_CMD_MP_COMPRESS, CSEC_IP_FUNC_FORMAT_COPY, Csec_Ip_pState->eSeq, CSEC_IP_SECRET_KEY);

            /* Wait for the command complete */
            u32ElapsedTime = Csec_Ip_WaitCommandCompletion(Csec_Ip_pState->u32Timeout, u32ElapsedTime);

            /* Check the error code */
            if (CSEC_IP_ERC_NO_RESPONSE == Csec_Ip_pState->ErrCode)
            {
                /* There is no time left, cancel the command*/
                Csec_Ip_CancelCommand();
                /* Stop further processing */
                Csec_Ip_pState->bCmdInProgress = FALSE;
            }
            else
            {
                /* Read the error code */
                Csec_Ip_pState->ErrCode = Csec_Ip_ReadErrorBits();
            }

            /* If there was an error stop the while loop */
            if (CSEC_IP_ERC_NO_ERROR != Csec_Ip_pState->ErrCode)
            {
                break;
            }

            /* Compute the number of pages left */
            u16NumPagesLeft = (uint16)(u16NumPagesLeft - u8NumPages);

            /* Update the index */
            Csec_Ip_pState->u32Index = (uint32)(Csec_Ip_pState->u32Index + u8NumBytes);

            if (CSEC_IP_CALL_SEQ_FIRST == Csec_Ip_pState->eSeq)
            {
                Csec_Ip_pState->eSeq = CSEC_IP_CALL_SEQ_SUBSEQUENT;
            }
        }

        /* If the operation was successful read the result */
        if (CSEC_IP_ERC_NO_ERROR == Csec_Ip_pState->ErrCode)
        {
            Csec_Ip_ReadCommandBytes(CSEC_IP_PAGE_1_OFFSET_U8, pMpCompress, CSEC_IP_PAGE_SIZE_IN_BYTES_U8);
        }

        /* The command was finished */
        Csec_Ip_pState->bCmdInProgress = FALSE;
    }

    return Csec_Ip_pState->ErrCode;
}

/**
 * @implements     Csec_Ip_MainFunction_Activity
 */
void Csec_Ip_MainFunction(void)
{
    Csec_Ip_ProcessReceivedResponse(CSEC_IP_REQTYPE_ASYNC_POLL);
}

/**
 * @implements     Csec_Ip_CancelCommand_Activity
 */
void Csec_Ip_CancelCommand(void)
{
#if (STD_ON == CSEC_IP_DEV_ERROR_DETECT)
    /* Check reference to the state structure allocated by the application */
    DevAssert((Csec_Ip_pState != NULL_PTR));
#endif /* (STD_ON == CSEC_IP_DEV_ERROR_DETECT) */

    if (Csec_Ip_pState->bCmdInProgress)
    {
        /* Disable the command completion interrupt */
        Csec_Ip_SetInterrupt(FALSE);

        /* Clear the error code as it will be used by wait command function to signal an error */
        Csec_Ip_pState->ErrCode = CSEC_IP_ERC_NO_ERROR;

        /* Wait until the execution of the previous command is complete */
        (void)Csec_Ip_WaitCommandCompletion(CSEC_IP_CANCEL_CMD_TIMEOUT_U32, CSEC_IP_NO_ELAPSED_TIME_U32);

        /* Check if the previous command has finished */
        if(CSEC_IP_ERC_NO_ERROR == Csec_Ip_pState->ErrCode)
        {
            /* AES ECB does not have a continuation feature so the command is finished  */
            if ((Csec_Ip_pState->eCmd != CSEC_IP_CMD_ENC_ECB) && (Csec_Ip_pState->eCmd != CSEC_IP_CMD_DEC_ECB))
            {
                /* If there is data to be further processed, break the sequence */
                if (Csec_Ip_pState->u32InputSize != Csec_Ip_pState->u32Index)
                {
                    /* Write the command header. CallSeq is set to 0 in order to trigger a command that will generate a sequence error, breaking the chain of calls. */
                    Csec_Ip_WriteCommandHeader(Csec_Ip_pState->eCmd, CSEC_IP_FUNC_FORMAT_COPY, CSEC_IP_CALL_SEQ_FIRST, Csec_Ip_pState->eKeyId);

                    /* Wait until the execution of the command is complete */
                    (void)Csec_Ip_WaitCommandCompletion(CSEC_IP_CANCEL_CMD_TIMEOUT_U32, CSEC_IP_NO_ELAPSED_TIME_U32);
                }
            }
            /* Check if the launched command has finished */
            if(CSEC_IP_ERC_NO_ERROR == Csec_Ip_pState->ErrCode)
            {
                /* No command is in the processing stage at this point */
                Csec_Ip_pState->bCmdInProgress = FALSE;
            }
            else
            {
                /* The command has not finished executing, CSEc might be stuck, leave the command in progress state unchanged */
            }
        }
        else
        {
            /* The command has not finished executing, CSEc might be stuck, leave the command in progress state unchanged */
        }
    }
}

/**
 * @implements     Csec_Ip_IrqHandler_Activity
 */
void Csec_Ip_IrqHandler(void)
{
    if (!CSEC_IP_CCIE_IS_SET)
    {
        /* This is a spurious interrupt as the Command Complete Interrupt Enable is not enabled, do nothing */
    }
    else if (NULL_PTR == Csec_Ip_pState)
    {
        /* The ip layer is not initialized, this is a spurious interrupt, do nothing and need to disable interrupt */
        Csec_Ip_SetInterrupt(FALSE);
    }
    else if (!Csec_Ip_pState->bCmdInProgress)
    {
        /* There is no command in progress, this is a spurious interrupt, do nothing and need to disable interrupt */
        Csec_Ip_SetInterrupt(FALSE);
    }
    else if (!CSEC_IP_CCIF_IS_SET)
    {
        /* Csec firmware is processing the command, this is a spurious interrupt, do nothing */
    }
    else
    {
        /* Valid interrupt, call the function to handle it */
        Csec_Ip_ProcessReceivedResponse(CSEC_IP_REQTYPE_ASYNC_IRQ);
    }
}

/**
 * @implements     Csec_Ip_SetSynchronousCmdTimeout_Activity
 */
void Csec_Ip_SetSynchronousCmdTimeout
(
    uint32 u32Timeout
)
{
#if (STD_ON == CSEC_IP_DEV_ERROR_DETECT)
    /* Check reference to the state structure allocated by the application */
    DevAssert((Csec_Ip_pState != NULL_PTR));
#endif /* (STD_ON == CSEC_IP_DEV_ERROR_DETECT) */

    /* Update the internal driver state with the given timeout. */
    Csec_Ip_pState->u32Timeout = u32Timeout;
}

/**
 * @implements     Csec_Ip_GetStatus_Activity
 */
Csec_Ip_StatusType Csec_Ip_GetStatus(void)
{

#if (STD_ON == CSEC_IP_FTFM_MODULE)
    return (CSEC_IP_FLASH->FCSESTAT1);
#else
    return (CSEC_IP_FLASH->FCSESTAT);
#endif /* (STD_ON == CSEC_IP_FTFM_MODULE) */

}

#define CRYPTO_STOP_SEC_CODE
#include "Crypto_MemMap.h"

#define CRYPTO_START_SEC_RAMCODE
#include "Crypto_MemMap.h"

/**
 * @implements     Csec_Ip_VerifyMacAddrMode_Activity
 */
Csec_Ip_ErrorCodeType Csec_Ip_VerifyMacAddrMode
(
    Csec_Ip_KeyIdType eKeyId,
    const uint8*      pMsg,
    uint32            u32MsgLen,
    const uint8*      pMac,
    uint16            u16MacLen,
    boolean*          pbVerifStatus
)
{
    uint32 u32VerifWord;

#if (STD_ON == CSEC_IP_DEV_ERROR_DETECT)
    /* Check the validity of the pointer parameters */
    DevAssert((pMac != NULL_PTR));
    DevAssert((pbVerifStatus != NULL_PTR));
    /* Check reference to the state structure allocated by the application */
    DevAssert((Csec_Ip_pState != NULL_PTR));
#endif /* (STD_ON == CSEC_IP_DEV_ERROR_DETECT) */

    /* Check if a command is in progress */
    if (Csec_Ip_pState->bCmdInProgress)
    {
        /* A command is in progress, return busy error */
        Csec_Ip_pState->ErrCode = CSEC_IP_ERC_STATUS_BUSY;
    }
    else
    {
        /* The command processing has started */
        Csec_Ip_pState->bCmdInProgress = TRUE;

        /* Clears the ACCERR and FPVIOL error flags */
        Csec_Ip_ClearErrorFlags();

        /* Write the address of the message */
        Csec_Ip_WriteCommandWord(CSEC_IP_FLASH_START_ADDRESS_OFFSET_U8, (uint32)pMsg);

        /* Write the MAC to be verified */
        Csec_Ip_WriteCommandBytes(CSEC_IP_PAGE_2_OFFSET_U8, pMac, CSEC_IP_PAGE_SIZE_IN_BYTES_U8);

        /* Write the size of the message (in bits) */
        Csec_Ip_WriteCommandWord(CSEC_IP_MESSAGE_LENGTH_OFFSET_U8, u32MsgLen);

        /* Write the number of bits of the MAC to be compared */
        Csec_Ip_WriteCommandHalfWord(CSEC_IP_MAC_LENGTH_OFFSET_U8, u16MacLen);

        /* Write the command header. This will trigger the command execution. */
        Csec_Ip_WriteCmdAndWait(CSEC_IP_CMD_VERIFY_MAC, CSEC_IP_FUNC_FORMAT_ADDR, CSEC_IP_CALL_SEQ_FIRST, eKeyId);

        /* Read the error code */
        Csec_Ip_pState->ErrCode = Csec_Ip_ReadErrorBits();

        /* If the command has run successfully update the verification status */
        if (CSEC_IP_ERC_NO_ERROR == Csec_Ip_pState->ErrCode)
        {
            /* Read the word containing verification status */
            u32VerifWord = Csec_Ip_ReadCommandWord(CSEC_IP_VERIFICATION_STATUS_OFFSET_U8);

            /* Read the status, verification status is computed like this (0 != (MACcalc – MACref)) */
            *pbVerifStatus = ((u32VerifWord & CSEC_IP_UPPER_HALF_MASK_U32) == (uint32)0U);
        }

        /* The command was finished */
        Csec_Ip_pState->bCmdInProgress = FALSE;
    }

    return Csec_Ip_pState->ErrCode;
}

/**
 * @implements     Csec_Ip_GenerateMacAddrMode_Activity
 */
Csec_Ip_ErrorCodeType Csec_Ip_GenerateMacAddrMode
(
    Csec_Ip_KeyIdType eKeyId,
    const uint8*      pMsg,
    uint32            u32MsgLen,
    uint8*            pCmac
)
{

#if (STD_ON == CSEC_IP_DEV_ERROR_DETECT)
    /* Check the validity of the pointer parameters */
    DevAssert((pCmac != NULL_PTR));
    /* Check reference to the state structure allocated by the application */
    DevAssert((Csec_Ip_pState != NULL_PTR));
#endif /* (STD_ON == CSEC_IP_DEV_ERROR_DETECT) */

    /* Check if a command is in progress */
    if (Csec_Ip_pState->bCmdInProgress)
    {
        /* A command is in progress, return busy error */
        Csec_Ip_pState->ErrCode = CSEC_IP_ERC_STATUS_BUSY;
    }
    else
    {
        /* The command processing has started */
        Csec_Ip_pState->bCmdInProgress = TRUE;

        /* Clears the ACCERR and FPVIOL error flags */
        Csec_Ip_ClearErrorFlags();

        /* Write the address of the message */
        Csec_Ip_WriteCommandWord(CSEC_IP_FLASH_START_ADDRESS_OFFSET_U8, (uint32)pMsg);

        /* Write the size of the message (in bits) */
        Csec_Ip_WriteCommandWord(CSEC_IP_MESSAGE_LENGTH_OFFSET_U8, u32MsgLen);

        /* Write the command header. This will trigger the command execution. */
        Csec_Ip_WriteCmdAndWait(CSEC_IP_CMD_GENERATE_MAC, CSEC_IP_FUNC_FORMAT_ADDR, CSEC_IP_CALL_SEQ_FIRST, eKeyId);

        /* Read the error code */
        Csec_Ip_pState->ErrCode = Csec_Ip_ReadErrorBits();

        /* If the command has run successfully read the cmac */
        if (CSEC_IP_ERC_NO_ERROR == Csec_Ip_pState->ErrCode)
        {
            Csec_Ip_ReadCommandBytes(CSEC_IP_PAGE_2_OFFSET_U8, pCmac, CSEC_IP_PAGE_SIZE_IN_BYTES_U8);
        }

        /* The command was finished */
        Csec_Ip_pState->bCmdInProgress = FALSE;
    }

    return Csec_Ip_pState->ErrCode;
}

#define CRYPTO_STOP_SEC_RAMCODE
#include "Crypto_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
