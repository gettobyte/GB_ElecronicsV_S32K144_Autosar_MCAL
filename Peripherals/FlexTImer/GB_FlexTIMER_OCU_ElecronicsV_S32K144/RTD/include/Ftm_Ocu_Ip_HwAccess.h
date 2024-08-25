/*==================================================================================================
* Project              : RTD AUTOSAR 4.4
* Platform             : CORTEXM
* Peripheral           : Ftm
* Dependencies         : none
*
* Autosar Version      : 4.4.0
* Autosar Revision     : ASR_REL_4_4_REV_0000
* Autosar Conf.Variant :
* SW Version           : 1.0.0
* Build Version        : S32K1_RTD_1_0_0_D2108_ASR_REL_4_4_REV_0000_20210810
*
* (c) Copyright 2020-2021 NXP Semiconductors
* All Rights Reserved.
*
* NXP Confidential. This software is owned or controlled by NXP and may only be
* used strictly in accordance with the applicable license terms. By expressly
* accepting such terms or by downloading, installing, activating and/or otherwise
* using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms. If you do not agree to be
* bound by the applicable license terms, then you may not retain, install,
* activate or otherwise use the software.
==================================================================================================*/

#ifndef FTM_OCU_IP_HWACCESS_H
#define FTM_OCU_IP_HWACCESS_H

/**
*   @file       Ftm_Ocu_Ip_HwAccess.h
*
*   @internal
*   @addtogroup     ocu_ip Ocu IPL
*   @brief
*
*   @{
*/

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                          INCLUDE FILES
*  1) system and project includes
*  2) needed interfaces from external units
*  3) internal and external interfaces from this unit
==================================================================================================*/

#include "Ftm_Ocu_Ip_Types.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define FTM_OCU_IP_HWACCESS_VENDOR_ID                    43
#define FTM_OCU_IP_HWACCESS_MODULE_ID                    125
#define FTM_OCU_IP_HWACCESS_AR_RELEASE_MAJOR_VERSION     4
#define FTM_OCU_IP_HWACCESS_AR_RELEASE_MINOR_VERSION     4
#define FTM_OCU_IP_HWACCESS_AR_RELEASE_REVISION_VERSION  0
#define FTM_OCU_IP_HWACCESS_SW_MAJOR_VERSION             1
#define FTM_OCU_IP_HWACCESS_SW_MINOR_VERSION             0
#define FTM_OCU_IP_HWACCESS_SW_PATCH_VERSION             0


/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/
#if (FTM_OCU_IP_HWACCESS_VENDOR_ID != FTM_OCU_IP_TYPES_VENDOR_ID)
    #error "Ftm_Ocu_Ip_HwAccess.h and Ftm_Ocu_Ip_Types.h have different vendor ids"
#endif

/* Check if  header file and Ftm_Ocu_Ip_Types.h file are of the same Autosar version */
#if ((FTM_OCU_IP_HWACCESS_AR_RELEASE_MAJOR_VERSION != FTM_OCU_IP_TYPES_AR_RELEASE_MAJOR_VERSION) || \
     (FTM_OCU_IP_HWACCESS_AR_RELEASE_MINOR_VERSION != FTM_OCU_IP_TYPES_AR_RELEASE_MINOR_VERSION) || \
     (FTM_OCU_IP_HWACCESS_AR_RELEASE_REVISION_VERSION != FTM_OCU_IP_TYPES_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Ftm_Ocu_Ip_HwAccess.h and Ftm_Ocu_Ip_Types.h are different"
#endif

/* Check if header file and Ftm_Ocu_Ip_Types.h file are of the same Software version */
#if ((FTM_OCU_IP_HWACCESS_SW_MAJOR_VERSION != FTM_OCU_IP_TYPES_SW_MAJOR_VERSION) || \
     (FTM_OCU_IP_HWACCESS_SW_MINOR_VERSION != FTM_OCU_IP_TYPES_SW_MINOR_VERSION) || \
     (FTM_OCU_IP_HWACCESS_SW_PATCH_VERSION != FTM_OCU_IP_TYPES_SW_PATCH_VERSION))
    #error "Software Version Numbers of Ftm_Ocu_Ip_HwAccess.h and Ftm_Ocu_Ip_Types.h are different"
#endif

/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                        DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                              ENUMS
==================================================================================================*/

/*==================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                  GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
#define OCU_START_SEC_CONST_UNSPECIFIED
#include "Ocu_MemMap.h"

/** @brief  Array of FTM peripheral base pointers */
extern Ftm_Ocu_Ip_xRegLayoutType * const Ftm_Ocu_Ip_gapcxBase[];

#define OCU_STOP_SEC_CONST_UNSPECIFIED
#include "Ocu_MemMap.h"
/*================================================================================================================
*                                      LOCAL FUNCTIONS
==================================================================================================================*/

#define OCU_START_SEC_CODE
#include "Ocu_MemMap.h"

/*!
 * @brief Clears the Timer Overflow Flag (TOF).
 * @Note: TOF is set by hardware when the FTM counter passes the value in the MOD register.
 *        The TOF bit is cleared by reading the SC register while TOF is set and then writing a 0 to TOF bit.
 *        Writing a 1 to TOF has no effect.
 * @param[in] acpFtmBase - the FTM base address pointer
 */
static inline void Ftm_Ocu_Ip_ClearTimerOverflowInterruptFlag(Ftm_Ocu_Ip_xRegLayoutType * const acpFtmBase)
{
    acpFtmBase->SC &= ~(FTM_SC_TOF_MASK);
}

/*!
 * @brief   Sets value of MODE Register.
 * @details MODE register contains the global enable bit for FTM-specific features and the control bits used to configure:
 *              • Capture Test mode
 *              • PWM synchronization
 *              • Write protection
 *              • Channel output initialization
 *          These controls relate to all channels within this module.
 *
 * @param[in] acpFtmBase    The FTM base address pointer
 * @param[in] au32Value     The value to be set
 */
static inline void Ftm_Ocu_Ip_SetModeRegVal(Ftm_Ocu_Ip_xRegLayoutType * const acpFtmBase, uint32 au32Value)
{
    uint32 ModeMask =   FTM_MODE_FTMEN_MASK   |
                        FTM_MODE_INIT_MASK    |
                        FTM_MODE_WPDIS_MASK   |
                        FTM_MODE_PWMSYNC_MASK |
                        FTM_MODE_CAPTEST_MASK;

    acpFtmBase->MODE = (acpFtmBase->MODE & ~(ModeMask)) | (au32Value & ModeMask);
}

/*!
 * @brief   Enables or disables the FTM peripheral timer group.
 * @details Set or clear the FTM Enable bit (FTMEN)
 *          This field is write protected. It can be written only when MODE[WPDIS] = 1.
 *              0b - TPM compatibility. Free running counter and synchronization compatible with TPM.
 *              1b - Free running counter and synchronization are different from TPM behavior.
 *
 * @param[in] acpFtmBase - the FTM base address pointer
 * @param[in] aboEn - FTM mode selection
 *                   - True : All registers including FTM-specific registers are available
 *                   - False: Only the TPM-compatible registers are available
 */
static inline void Ftm_Ocu_Ip_SetEnFtmModule(Ftm_Ocu_Ip_xRegLayoutType * const acpFtmBase, boolean aboEn)
{
    uint32 TmpMask = (acpFtmBase->MODE & ~(FTM_MODE_FTMEN_MASK)) | FTM_MODE_FTMEN(aboEn ? 1UL : 0UL);
    acpFtmBase->MODE = TmpMask;
}


/*!
 * @brief  Set the Timer Overflow Interrupt Enable (TOIE) bit.
 *
 * @param[in] acpFtmBase - the FTM base address pointer
 * @param[in] aboEn - enable timer overflow interrupt
 *              - True : Enable TOF interrupts. An interrupt is generated when TOF equals one.
 *              - False: Disable TOF interrupts. Use software polling.
 */
static inline void Ftm_Ocu_Ip_SetTimerOverflowInterruptEn(Ftm_Ocu_Ip_xRegLayoutType * const acpFtmBase, boolean aboEn)
{
    uint32 TmpMask = (acpFtmBase->SC & ~(FTM_SC_TOIE_MASK)) | FTM_SC_TOIE(aboEn ? 1UL : 0UL);
    acpFtmBase->SC = TmpMask;
}

/*!
 * @brief   Set the FlexTimer Clock Source Selection bits (CLKS)
 * @details CLKS bits select one of the three counter clock sources.
 *    This field is write protected. It can be written only when MODE[WPDIS] = 1.
 *    00b - No clock selected. This in effect disables the FTM counter.
 *    01b - FTM input clock
 *    10b - Fixed frequency clock
 *    11b - External clock
 *
 * @param[in] acpFtmBase - the FTM base address pointer
 * @param[in] ClockSource - the FTM peripheral clock selection
 */
static inline void Ftm_Ocu_Ip_SetClockSource(Ftm_Ocu_Ip_xRegLayoutType * const acpFtmBase, uint8 ClockSource)
{
    uint32 TmpMask = (acpFtmBase->SC & ~(FTM_SC_CLKS_MASK)) | FTM_SC_CLKS((uint32)ClockSource);
    acpFtmBase->SC = TmpMask;
}

/*!
 * @brief   Disables the Quadrature Decoder Mode (clear the QUADEN bit).
 *        In this mode, the phase A and B input signals control the FTM counter direction.
 *        The QDEC mode has precedence over the other modes of FTM.
 *        This field is write protected. It can be written only when MODE[WPDIS] = 1.
 *
 * @param[in] acpFtmBase The FTM base address pointer
 *
 */
static inline void Ftm_Qdec_Ip_ClearQdecModeEn(Ftm_Ocu_Ip_xRegLayoutType * const acpFtmBase)
{
    acpFtmBase->QDCTRL &= ~(FTM_QDCTRL_QUADEN_MASK);
}

/*!
 * @brief   Set the Prescale Factor Selections bits (PS).
 * @details Selects one of 8 division factors for the clock source selected by CLKS.
 *          The new prescaler factor affects the clock source on the next FTM input clock cycle
 *          after the new value is updated into the register bits.
 *          This field is write protected. It can be written only when MODE[WPDIS] = 1.
 *            000b - Divide by 1
 *            001b - Divide by 2
 *            010b - Divide by 4
 *            011b - Divide by 8
 *            100b - Divide by 16
 *            101b - Divide by 32
 *            110b - Divide by 64
 *            111b - Divide by 128
 *
 * @param[in] acpFtmBase - the FTM base address pointer
 * @param[in] ClockPresc The FTM peripheral clock pre-scale divider
 */
static inline void Ftm_Ocu_Ip_SetClockPrescaler(Ftm_Ocu_Ip_xRegLayoutType * const acpFtmBase, uint8 ClockPresc)
{
    uint32 TmpMask = (acpFtmBase->SC & ~(FTM_SC_PS_MASK)) | FTM_SC_PS((uint32)ClockPresc);
    acpFtmBase->SC = TmpMask;
}

/* FTM channel control */

/*!
 * @brief   Enables or disables the FTM peripheral timer channel(n) interrupt.
 *
 * @param[in] acpFtmBas The FTM base address pointer
 * @param[in] NumChannel - the FTM peripheral channel number
 * @param[in] aboEn - Enables the FTM peripheral timer channel(n) interrupt
 *              - True : Enable the FTM peripheral timer channel(n) interrupt.
 *              - False: Disable the FTM peripheral timer channel(n) interrupt.
 */
static inline void Ftm_Ocu_Ip_SetChannelInterruptEnBit(Ftm_Ocu_Ip_xRegLayoutType * const acpFtmBase, uint8 NumChannel, boolean aboEn)
{
    uint32 TmpMask = (acpFtmBase->CONTROLS[NumChannel].CSC & ~(FTM_CSC_CHIE_MASK)) | FTM_CSC_CHIE(aboEn ? 1UL : 0UL);
    acpFtmBase->CONTROLS[NumChannel].CSC = TmpMask;
}

/*!
 * @brief Clear the channel flag by writing a 0 to the CHF bit.
 *
* @param[in] acpFtmBase The FTM base address pointer
* @param[in] NumChannel The FTM peripheral channel number
 */
static inline void Ftm_Ocu_Ip_ClearChannelEventFlag(Ftm_Ocu_Ip_xRegLayoutType * const acpFtmBase, uint8 NumChannel)
{
    acpFtmBase->CONTROLS[NumChannel].CSC &= ~(FTM_CSC_CHF_MASK);
}

/*!
 * @brief Clears the FTM peripheral timer all channel event status.
 *
 * @param[in] acpFtmBase The FTM base address pointer
 * @param[in] NumChannel The FTM peripheral channel number
 *
 */
static inline void Ftm_Ocu_Ip_ClearChannelEventStatus(Ftm_Ocu_Ip_xRegLayoutType * const acpFtmBase, uint8 NumChannel)
{
    acpFtmBase->STATUS &= ~(1UL << NumChannel);
}

/* FTM channel operating mode (Mode, edge and Level Selection) for capture, output, PWM, combine, dual */

/*!
 * @brief   Sets channel output compare mode.
 * @details Sets the MSB:MSA bits into CSC - Channel (n) Status and Control Register
 *
 * @param[in] acpFtmBase    The FTM base address pointer
 * @param[in] NumChannel    The FTM peripheral channel number
 *
 */
static inline void Ftm_Ocu_Ip_SetChannelOutputCompareMode(Ftm_Ocu_Ip_xRegLayoutType * const acpFtmBase, uint8 NumChannel)
{
    /* write MSB:MSA bits */
    uint32 TmpMask = (acpFtmBase->CONTROLS[NumChannel].CSC & ~(FTM_CSC_MSA_MASK | FTM_CSC_MSB_MASK)) | FTM_CSC_MSA(1U) | FTM_CSC_MSB(0U);
    acpFtmBase->CONTROLS[NumChannel].CSC = TmpMask;
}

/*!
 * @brief   Sets the FTM peripheral timer channel edge level.
 * @details Sets the ELSB:ELSA bits into CSC - Channel (n) Status and Control Register
 *
 * @param[in] acpFtmBase    The FTM base address pointer
 * @param[in] NumChannel    The FTM peripheral channel number
 * @param[in] Level         The rising or falling edge to be set, valid value ELSnB:ELSnA :00, 01, 10, 11
 */
static inline void Ftm_Ocu_Ip_SetChEdgeLevel(Ftm_Ocu_Ip_xRegLayoutType * const acpFtmBase, uint8 NumChannel, Ftm_Ocu_Ip_OutputCompareModeType Level)
{
    /* write ELSB:ELSA bits */
    uint32 TmpMask =    (acpFtmBase->CONTROLS[NumChannel].CSC & ~(FTM_CSC_ELSA_MASK | FTM_CSC_ELSB_MASK))   |
                        FTM_CSC_ELSA((0U != ((uint8)Level & 0x01U)) ? 1U : 0U)                                    |
                        FTM_CSC_ELSB((0U != ((uint8)Level & 0x02U)) ? 1U : 0U);
    acpFtmBase->CONTROLS[NumChannel].CSC = TmpMask;
}

/*!
 * @brief   Sets value of Channel (n) Status and Control (C0SC - C5SC) Register.
 * @details CnSC register contains channel (n) status bits and control bits that select the channel (n) mode and its functionality.
 *
 * @param[in] acpFtmBase    The FTM base address pointer
 * @param[in] NumChannel    The FTM peripheral channel number
 * @param[in] au32Value     The value to be set
 */
static inline void Ftm_Ocu_Ip_SetChStatusAndControlReg(Ftm_Ocu_Ip_xRegLayoutType * const acpFtmBase, uint8 NumChannel, uint32 au32Value)
{
    acpFtmBase->CONTROLS[NumChannel].CSC = au32Value;
}

/*!
 * @brief   Disables DMA transfers for the channel.
 *
 * @param[in] acpFtmBase The FTM base address pointer
 * @param[in] NumChannel  The FTM peripheral channel number
 */
static inline void Ftm_Ocu_Ip_DisablesDmaTransfersForChannel(Ftm_Ocu_Ip_xRegLayoutType * const acpFtmBase, uint8 NumChannel)
{
    /* write DMA bit */
    acpFtmBase->CONTROLS[NumChannel].CSC &= ~(FTM_CSC_DMA_MASK);
}

/*!
 * @brief   Sets the Channel (n) Value (C0V - C5V).
 * @details These registers contain the captured FTM counter value for the input modes or the match value for the output modes.
 *          In Input Capture , Capture Test, and Dual Edge Capture modes, any write to a CnV register is ignored.
 *          In output modes, writes to the CnV register are done on its write buffer. The CnV register is updated with its write buffer value
 *          according to Registers updated from write buffers. If FTMEN = 0, a write to CnSC register resets manually this write coherency mechanism.
 *
 * @param[in] acpFtmBase    The FTM base address pointer
 * @param[in] NumChannel    The FTM peripheral channel number
 * @param[in] au32Value     counter value to be set
 */
static inline void Ftm_Ocu_Ip_SetChCounterMatchVal(Ftm_Ocu_Ip_xRegLayoutType * const acpFtmBase, uint8 NumChannel, uint32 au32Value)
{
    acpFtmBase->CONTROLS[NumChannel].CV = au32Value;
}

/*!
 * @brief  Clears the Center-Aligned PWM Select (CPWMS) bit
 * @details Selects CPWM mode. This mode configures the FTM to operate in Up-Down Counting mode.
 *          This field is write protected. It can be written only when MODE[WPDIS] = 1.
 *              0b - FTM counter operates in Up Counting mode.
 *              1b - FTM counter operates in Up-Down Counting mode.
 *
 * @param[in] acpFtmBase - the FTM base address pointer
 */
static inline void Ftm_Ocu_Ip_SetUpCountingMode(Ftm_Ocu_Ip_xRegLayoutType * const acpFtmBase)
{
    acpFtmBase->SC &= ~(FTM_SC_CPWMS_MASK);
}

/*!
 * @brief   Sets Channel n PWM enable bit (PWMENn)
 * @details This bit enables the PWM channel output. This bit should be set to 0 (output disabled) when an input mode is used.
 *              0b - Channel output port is disabled.
 *              1b - Channel output port is enabled.
 *
 * @param[in] acpFtmBase    The FTM base address pointer
 * @param[in] au32Value     The value to be set
 *
 */
static inline void Ftm_Ocu_Ip_EnablePwmChannelOutput(Ftm_Ocu_Ip_xRegLayoutType * const acpFtmBase, uint32 au32Value)
{
    uint32 AllPwmMasks =    FTM_SC_PWMEN0_MASK |
                            FTM_SC_PWMEN1_MASK |
                            FTM_SC_PWMEN2_MASK |
                            FTM_SC_PWMEN3_MASK |
                            FTM_SC_PWMEN4_MASK |
                            FTM_SC_PWMEN5_MASK;

    acpFtmBase->SC |= au32Value & AllPwmMasks;
}

#if(OCU_DEINIT_API == STD_ON)
/*!
 * @brief   Sets value of Status and Control Register (SC).
 * @details SC register contains the overflow status flag and control bits used to configure the interrupt enable, FTM configuration,
 *          clock source, filter prescaler, and prescaler factor.
 *          This register also contains the output enable control bits and the reload opportunity flag control.
 *          These controls relate to all channels within this module.
 *
 * @param[in] acpFtmBase    The FTM base address pointer
 * @param[in] au32Value     The value to be set
 */
static inline void Ftm_Ocu_Ip_SetSCRegVal(Ftm_Ocu_Ip_xRegLayoutType * const acpFtmBase, uint32 au32Value)
{
    acpFtmBase->SC = au32Value;
}
#endif

/*!
 * @brief   Sets value of Synchronization & Configuration Register (SYNCONF).
 *
 * @param[in] acpFtmBase    The FTM base address pointer
 * @param[in] au32Value     The value to be set
 */
static inline void Ftm_Ocu_Ip_SetSyncAndConfigfReg(Ftm_Ocu_Ip_xRegLayoutType * const acpFtmBase, uint32 au32Value)
{
    acpFtmBase->SYNCONF = au32Value;
}

/*!
 * @brief   Selects the FTM behavior in Debug mode.
 *
 * @param[in] acpcFtmBase The FTM base address pointer
 * @param[in] BdmModeVal - the FTM behavior in Debug mode
 *                - FTM_BDM_MODE_00: FTM counter stopped, CH(n)F bit can be set, FTM channels
 *                                   in functional mode, writes to MOD, CNTIN and C(n)V registers bypass
 *                                   the register buffers
 *                - FTM_BDM_MODE_01: FTM counter stopped, CH(n)F bit is not set, FTM channels
 *                                   outputs are forced to their safe value, writes to MOD, CNTIN and
 *                                   C(n)V registers bypass the register buffers
 *                - FTM_BDM_MODE_10: FTM counter stopped, CH(n)F bit is not set, FTM channels
 *                                   outputs are frozen when chip enters in BDM mode, writes to MOD,
 *                                   CNTIN and C(n)V registers bypass the register buffers
 *                - FTM_BDM_MODE_11: FTM counter in functional mode, CH(n)F bit can be set,
 *                                   FTM channels in functional mode, writes to MOD, CNTIN and C(n)V
 *                                   registers is in fully functional mode
 */
static inline void Ftm_Ocu_Ip_SetBehaviorInDebugMode(Ftm_Ocu_Ip_xRegLayoutType * const acpFtmBase, uint8 BdmModeVal)
{
    uint32 TmpMask = (acpFtmBase->CONF & ~(FTM_CONF_BDMMODE_MASK)) | FTM_CONF_BDMMODE((uint32)BdmModeVal);
    acpFtmBase->CONF = TmpMask;
}

#if((OCU_GET_COUNTER_API == STD_ON)||(OCU_SET_RELATIVE_THRESHOLD_API == STD_ON)||(OCU_SET_ABSOLUTE_THRESHOLD_API == STD_ON))
/*!
 * @brief Returns the FTM peripheral current counter value.
 *
 * @param[in] acpcFtmBase The FTM base address pointer
 *
 * @return The current FTM timer counter value
 */
static inline Ftm_Ocu_Ip_ValueType Ftm_Ocu_Ip_GetCntVal(const Ftm_Ocu_Ip_xRegLayoutType * const acpcFtmBase)
{
  return (Ftm_Ocu_Ip_ValueType)(((acpcFtmBase->CNT) & FTM_CNT_COUNT_MASK) >> FTM_CNT_COUNT_SHIFT);
}
#endif

/*!
 * @brief   Set the FTM peripheral timer counter minimum value - Counter Initial Value (CNTIN).
 * @details The Counter Initial Value register contains the initial value for the FTM counter.
 *          Writing to the CNTIN register latches the value into a buffer. The CNTIN register is updated with the value of its write buffer
 *          according to Registers updated from write buffers.
 *          When the FTM clock is initially selected, by writing a non-zero value to the CLKS bits, the FTM counter starts with the value 0x0000.
 *          To avoid this behavior, before the first write to select the FTM clock, write the new value to the CNTIN register and then
 *          initialize the FTM counter by writing any value to the CNT register.
 *
 * @param[in] acpcFtmBase The FTM base address pointer
 * @param[in] au16MinVal minimum value to be set
 */
static inline void Ftm_Ocu_Ip_SetCounterInitialVal(Ftm_Ocu_Ip_xRegLayoutType * const acpFtmBase, uint16 au16MinVal)
{
    acpFtmBase->CNTIN = ((uint32)au16MinVal) & (FTM_CNTIN_INIT_MASK);
}

/*!
 * @brief   Sets the FTM peripheral timer modulo value - Modulo register (MOD).
 * @details The Modulo register contains the modulo value for the FTM counter.
 *          After the FTM counter reaches the modulo value, the overflow flag (TOF) becomes set at the next clock cycle,
 *          and the next value of FTM counter depends on the selected counting method.
 *          Writes to the MOD register are done on its write buffer. The MOD register is updated with its write buffer value according to
 *          'Registers updated from write buffers'. If FTMEN = 0, a write to SC register resets manually this write coherency mechanism.
 * @Note: Initialize the FTM counter, by writing to CNT, before writing to the MOD register
 *        to avoid confusion about when the first counter overflow will occur.
 *
 * @param[in] acpcFtmBase The FTM base address pointer
 * @param[in] au16ModVal The value to be set to the timer modulo
 */
static inline void Ftm_Ocu_Ip_SetModuloRegVal(Ftm_Ocu_Ip_xRegLayoutType * const acpFtmBase, uint16 au16ModVal)
{
    acpFtmBase->MOD = ((uint32)au16ModVal) & (FTM_MOD_MOD_MASK);
}

/**
 * @{
 * @brief   FTM Software Output Control (SWOCTRL) register.
 * @details This register enables software control of channel (n) output and defines the value forced to the channel (n) output:
 *              • The CH(n)OC bits enable the control of the corresponding channel (n) output by software.
 *              • The CH(n)OCV bits select the value that is forced at the corresponding channel (n) output.
 *              This register has a write buffer. The fields are updated by the SWOCTRL register synchronization.
 *
 *              13-8 CHnOCV bits:   Channel n Software Output Control Value
 *                  • 0b - the software output control forces 0 to the channel output.
 *                  • 1b - the software output control forces 1 to the channel output.
 *              5-0 CHnOC bits:   Channel n Software Output Control Enable
 *                  • 0b - the channel output is not affected by software output control.
 *                  • 1b - the channel output is affected by software output control.
 */

/*!
 * @brief   Disables the channel software output control.
 * @param[in] acpFtmBase - the FTM base address pointer
 * @param[in] NumChannel - Channel to be enabled or disabled
 *
 */
static inline void Ftm_Ocu_Ip_ClearChSwOutputControlEn(Ftm_Ocu_Ip_xRegLayoutType * const acpFtmBase, uint8 NumChannel)
{
    acpFtmBase->SWOCTRL &=  ~(1UL << NumChannel);
}

#if(OCU_DEINIT_API == STD_ON)
/*!
 * @brief   Clears the channel software output control value.
 * Despite the odd channels are configured as HIGH/LOW, they will be inverted in the following
 * configuration: COMP bit = 1 and CH(n)OCV and CH(n+1)OCV are HIGH. Please check Software
 * output control behavior chapter from RM.
 *
 * @param[in] acpFtmBase - the FTM base address pointer.
 * @param[in] NumChannel - Channel to be configured
 *
 */
static inline void Ftm_Ocu_Ip_ClearChSwOutputControlVal(Ftm_Ocu_Ip_xRegLayoutType * const acpFtmBase, uint8 NumChannel)
{
    acpFtmBase->SWOCTRL &=  ~(1UL << (NumChannel + FTM_SWOCTRL_CH0OCV_SHIFT));
}
#endif

/*!
 * @brief   Sets value of FTM Software Output Control register.
 *
 * @param[in] acpFtmBase    The FTM base address pointer
 * @param[in] au32Value     The value to be set
 */
static inline void Ftm_Ocu_Ip_SetSwOutputControlReg(Ftm_Ocu_Ip_xRegLayoutType * const acpFtmBase, uint32 au32Value)
{
    acpFtmBase->SWOCTRL = au32Value;
}

#if(OCU_SET_PIN_STATE_API == STD_ON)
/*!
 * @brief   Gets value of FTM Software Output Control register.
 *
 * @param[in] acpcFtmBase   The FTM base address pointer
 * @return                  the value of software output control register
 */
static inline uint32 Ftm_Ocu_Ip_GetSwOutputControlReg(const Ftm_Ocu_Ip_xRegLayoutType * const acpcFtmBase)
{
    return acpcFtmBase->SWOCTRL;
}
#endif

/** @} */

/*!
 * @brief   Clear Channel n Polarity (POLn).
 * @details POLn - Channel n Polarity bit
 *          Defines the polarity of the channel output.
 *          This field is write protected. It can be written only when MODE[WPDIS] = 1.
 *              0b - the channel polarity is active high.
 *              1b - the channel polarity is active low.
 *
 * @param[in] acpFtmBase - the FTM base address pointer.
 * @param[in] NumChannel - Channel to be configured
 *
 */
static inline void Ftm_Ocu_Ip_ClearChannelPolarity(Ftm_Ocu_Ip_xRegLayoutType * const acpFtmBase, uint8 NumChannel)
{
    /* configure channel n polarity bit */
    uint32 TmpMask = (acpFtmBase->POL & ~(1UL << NumChannel)) | (0UL << NumChannel);
    acpFtmBase->POL = TmpMask;
}


/* FTM synchronization control */

/*!
 * @brief   Selects when the OUTMASK register is updated with the value of its buffer (SYNCHOM bit).
 *              0b - OUTMASK register is updated with the value of its buffer in all rising edges of the FTM input clock.
 *              1b - OUTMASK register is updated with the value of its buffer only by the PWM synchronization.
 *
 * @param[in] acpFtmBase The FTM base address pointer
 *
 */
static inline void Ftm_Ocu_Ip_SetOutmaskSyncOnRisingEdges(Ftm_Ocu_Ip_xRegLayoutType * const acpFtmBase)
{
    acpFtmBase->SYNC &= ~(FTM_SYNC_SYNCHOM_MASK);
}

/*!
 * @brief   Disables the FTM peripheral timer channel pair output combine mode.
 * @details COMBINE0/2/4 - Combine Channels For n = 0, 2, 4
 *          Used on the selection of the combine mode for channels (n) and (n+1). See Channel Modes.
 *          This field is write protected. It can be written only when MODE[WPDIS] = 1.
 *
 * @param[in] acpFtmBase The FTM base address pointer
 * @param[in] ChPairNum The FTM peripheral channel pair number
 *
 */
static inline void Ftm_Ocu_Ip_ClearDualChCombineMode(Ftm_Ocu_Ip_xRegLayoutType * const acpFtmBase, uint8 ChPairNum)
{
    acpFtmBase->COMBINE &= ~((uint32)FTM_COMBINE_COMBINE0_MASK << (ChPairNum * FTM_COMBINE_CH_CTRL_WIDTH));
}


/*!
 * @brief   Disables the FTM peripheral timer dual edge capture mode.
 * @details
 *          DECAPEN0/2/4 - Dual Edge Capture Mode Enable for n = 0, 2, 4
 *          Enables the Dual Edge Capture mode in the channels (n) and (n+1). See Channel Modes.
 *          This field is write protected. It can be written only when MODE[WPDIS] = 1.
 *
 *          DECAP0/2/4 Dual Edge Capture Mode Captures for n = 0, 2, 4
 *          Enables the capture of the FTM counter value according to the channel (n) input event and the configuration of the dual edge capture bits.
 *          This field applies only when DECAPEN = 1.
 *          DECAP bit is cleared automatically by hardware if dual edge capture – one-shot mode is selected and when the capture of channel (n+1) event is made.
 *              0b - the dual edge captures are inactive.
 *              1b - the dual edge captures are active.
 *
 * @param[in] acpFtmBase    The FTM base address pointer
 * @param[in] ChPairNum     The FTM peripheral channel pair number
 *
 */
static inline void Ftm_Ocu_Ip_ClearDualEdgeCaptureMode(Ftm_Ocu_Ip_xRegLayoutType * const acpFtmBase, uint8 ChPairNum)
{
    acpFtmBase->COMBINE &= ~(((uint32)FTM_COMBINE_DECAPEN0_MASK | (uint32)FTM_COMBINE_DECAP0_MASK) << (ChPairNum * FTM_COMBINE_CH_CTRL_WIDTH));
}

/*!
 * @brief   Disables the FTM peripheral timer channel modified combine mode.
 * @details MCOMBINE0/2/4 - Modified Combine Mode For n = 0, 2, 4
 *          Used on the selection of the modified combine mode for channels (n) and (n+1). See Channel Modes.
 *          This field is write protected. It can be written only when MODE[WPDIS] = 1.
 *
 * @param[in] acpFtmBase The FTM base address pointer
 * @param[in] ChPairNum The FTM peripheral channel pair number
 *
 */
static inline void Ftm_Ocu_Ip_ClearDualChModifiedCombineMode(Ftm_Ocu_Ip_xRegLayoutType * const acpFtmBase, uint8 ChPairNum)
{
    acpFtmBase->COMBINE &= ~((uint32)FTM_COMBINE_MCOMBINE0_MASK << (ChPairNum * FTM_COMBINE_CH_CTRL_WIDTH));
}

/*!
 * @brief   Disables the FTM peripheral timer channel pair counter PWM sync.
 * @details SYNCEN0/4/6 - Synchronization Enable For n = 0, 2, 6
 *          Enables PWM synchronization of registers C(n)V and C(n+1)V.
 *              0b - the PWM synchronization in this pair of channels is disabled.
 *              1b - the PWM synchronization in this pair of channels is enabled.
 *
 * @param[in] acpFtmBase The FTM base address pointer
 * @param[in] ChPairNum The FTM peripheral channel pair number
 *
 */
static inline void Ftm_Ocu_Ip_ClearDualChPwmSyncEn(Ftm_Ocu_Ip_xRegLayoutType * const acpFtmBase, uint8 ChPairNum)
{
    acpFtmBase->COMBINE &= ~((uint32)FTM_COMBINE_SYNCEN0_MASK << (ChPairNum * FTM_COMBINE_CH_CTRL_WIDTH));
}

/*!
 * @brief   Disables the FTM peripheral timer channel pair deadtime insertion.
 * @details DTEN0/2/4 - DeadTime Enable For n = 0, 2, 4
 *          Enables the deadtime insertion in the channels (n) and (n+1).
 *          This field is write protected. It can be written only when MODE[WPDIS] = 1.
 *              0b - the deadtime insertion in this pair of channels is disabled.
 *              1b - the deadtime insertion in this pair of channels is enabled.
 *
 * @param[in] acpFtmBase The FTM base address pointer
 * @param[in] ChPairNum The FTM peripheral channel pair number
 *
 */
static inline void Ftm_Ocu_Ip_ClearDualChDeadTimeInsertionEn(Ftm_Ocu_Ip_xRegLayoutType * const acpFtmBase, uint8 ChPairNum)
{
    acpFtmBase->COMBINE &= ~((uint32)FTM_COMBINE_DTEN0_MASK << (ChPairNum * FTM_COMBINE_CH_CTRL_WIDTH));
}

/*!
 * @brief   Disables the FTM peripheral timer channel pair output complement mode.
 * @details COMP0/2/4 - - Complement Of Channel (n) For n = 0, 2, 4
 *          In Complementary mode the channel (n+1) output is the inverse of the channel (n) output.
 *          This field is write protected. It can be written only when MODE[WPDIS] = 1.
 *              0b - If the channels (n) and (n+1) are in Combine Mode or Modified Combine PWM Mode, the
 *                  channel (n+1) output is the same as the channel (n) output. If the channel (n+1) is in Output
 *                  Compare Mode, EPWM or CPWM, the channel (n+1) output is independent from channel (n) output.
 *              1b - the channel (n+1) output is the complement of the channel (n) output.
 *
 * @param[in] acpFtmBase The FTM base address pointer
 * @param[in] ChPairNum The FTM peripheral channel pair number
 *
 */
static inline void Ftm_Ocu_Ip_ClearDualChComplementEn(Ftm_Ocu_Ip_xRegLayoutType * const acpFtmBase, uint8 ChPairNum)
{
    acpFtmBase->COMBINE &= ~((uint32)FTM_COMBINE_COMP0_MASK << (ChPairNum * FTM_COMBINE_CH_CTRL_WIDTH));
}


#if (OCU_NOTIFICATION_SUPPORTED == STD_ON)
/*!
 * @brief   Gets the FTM peripheral timer channel event status.
 * @details The STATUS register contains a copy of the status flag CHF bit in CnSC for each FTM channel for software convenience.
 *          Each CHF bit in STATUS is a mirror of CHF bit in CnSC. All CHF bits can be checked using only one read of STATUS.
 *          All CHF bits can be cleared by reading STATUS followed by writing 0x00 to STATUS.
 *          Hardware sets the individual channel flags when an event occurs on the channel. CHF is cleared by reading STATUS while CHF
 *          is set and then writing a 0 to the CHF bit. Writing a 1 to CHF has no effect.
 *          If another event occurs between the read and write operations, the write operation has no effect; therefore, CHF remains set
 *          indicating an event has occurred. In this case, a CHF interrupt request is not lost due to the clearing sequence for a previous CHF.
 *
 * @param[in] acpcFtmBase The FTM base address pointer
 * @param[in] NumChannel The FTM peripheral channel number
 *
 * @return Channel event status
 *         - True : A channel event has occurred
 *         - False: No channel event has occurred
 *
 */
static inline boolean Ftm_Ocu_Ip_GetChannelEventStatus(const Ftm_Ocu_Ip_xRegLayoutType * const acpcFtmBase, uint8 NumChannel)
{
    return (0U != (acpcFtmBase->STATUS & (1UL << NumChannel))) ? TRUE : FALSE;
}

#if ((defined OCU_FTM_0_ISR_USED) || (defined OCU_FTM_1_ISR_USED))
/*!
 * @brief   Gets the FTM peripheral timer status info for all channels.
 *
 * @param[in] acpFtmBase The FTM base address pointer
 *
 * @return Channel event status value
 *
 */
static inline uint32 Ftm_Ocu_Ip_GetEventStatus(const Ftm_Ocu_Ip_xRegLayoutType * const acpcFtmBase)
{
    return (acpcFtmBase->STATUS & 0xFFU);
}
#endif

#endif

#if (defined(OCU_SIM_AVAILABLE) && (STD_ON == OCU_SIM_AVAILABLE))
/*!
 * @brief   Set OBE CTRL bit in SIM module to set all channel pin of respective instance is output mode
 *
 * @param[in] The FTM peripheral Instance number
 *
 *
 */
static inline void Ftm_Ocu_Ip_SetOutputPinCtrlBit(uint8 InstNum)
{
    IP_SIM->MISCTRL0 |= ((uint32_t)(((uint32_t)(1U)) << (SIM_MISCTRL0_FTM0_OBE_CTRL_SHIFT + InstNum)));
}
#endif

#define OCU_STOP_SEC_CODE
#include "Ocu_MemMap.h"

#ifdef __cplusplus
}
#endif

/*! @}*/

#endif /* FTM_OCU_IP_HWACCESS_H */
