
IPA constant propagation start:
Determining dynamic type for call: eProcessJobError_2 = Crypto_GetProcessJobError (pJob_1(D));
  Starting walk at: eProcessJobError_2 = Crypto_GetProcessJobError (pJob_1(D));
  instance pointer: pJob_1(D)  Outer instance pointer: pJob_1(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RetVal_10 = Crypto_GetNonDetErrorsForKeyExchCalcPubVal.isra.0 (9, iftmp.36_3, publicValueLengthPtr_8(D));
  Starting walk at: RetVal_10 = Crypto_GetNonDetErrorsForKeyExchCalcPubVal.isra.0 (9, iftmp.36_3, publicValueLengthPtr_8(D));
  instance pointer: publicValueLengthPtr_8(D)  Outer instance pointer: publicValueLengthPtr_8(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RetVal_12 = Crypto_CopyDataFromPubValKeyElementToUser (0, iftmp.36_3, publicValuePtr_7(D), publicValueLengthPtr_8(D));
  Starting walk at: RetVal_12 = Crypto_CopyDataFromPubValKeyElementToUser (0, iftmp.36_3, publicValuePtr_7(D), publicValueLengthPtr_8(D));
  instance pointer: publicValuePtr_7(D)  Outer instance pointer: publicValuePtr_7(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:RetVal_10 = Crypto_GetNonDetErrorsForKeyExchCalcPubVal.isra.0 (9, iftmp.36_3, publicValueLengthPtr_8(D));
Determining dynamic type for call: RetVal_12 = Crypto_CopyDataFromPubValKeyElementToUser (0, iftmp.36_3, publicValuePtr_7(D), publicValueLengthPtr_8(D));
  Starting walk at: RetVal_12 = Crypto_CopyDataFromPubValKeyElementToUser (0, iftmp.36_3, publicValuePtr_7(D), publicValueLengthPtr_8(D));
  instance pointer: publicValueLengthPtr_8(D)  Outer instance pointer: publicValueLengthPtr_8(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:RetVal_10 = Crypto_GetNonDetErrorsForKeyExchCalcPubVal.isra.0 (9, iftmp.36_3, publicValueLengthPtr_8(D));
Determining dynamic type for call: RetVal_29 = Crypto_CheckForErrorsInKeyElementSet.isra.0 (iftmp.5_20, keyLength_26(D), keyElementId_27(D), &u32CryptoKeyElementIdx);
  Starting walk at: RetVal_29 = Crypto_CheckForErrorsInKeyElementSet.isra.0 (iftmp.5_20, keyLength_26(D), keyElementId_27(D), &u32CryptoKeyElementIdx);
  instance pointer: &u32CryptoKeyElementIdx  Outer instance pointer: u32CryptoKeyElementIdx offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RetVal_12 = Crypto_CheckForErrorsInProcessJob.isra.0 (job_11(D));
  Starting walk at: RetVal_12 = Crypto_CheckForErrorsInProcessJob.isra.0 (job_11(D));
  instance pointer: job_11(D)  Outer instance pointer: job_11(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RetVal_13 = Crypto_ProcessJobAndCheckNonDetErrors.isra.0 (_18);
  Starting walk at: RetVal_13 = Crypto_ProcessJobAndCheckNonDetErrors.isra.0 (_18);
  instance pointer: _18  Outer instance pointer: _18 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RetVal_21 = Crypto_CheckKeyCopyValidKeyElements (u32CryptoKeyIdx_17(D), u32Counter_11, u32TargetKeyIdx_19(D), &bFound);
  Starting walk at: RetVal_21 = Crypto_CheckKeyCopyValidKeyElements (u32CryptoKeyIdx_17(D), u32Counter_11, u32TargetKeyIdx_19(D), &bFound);
  instance pointer: &bFound  Outer instance pointer: bFound offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:RetVal_21 = Crypto_CheckKeyCopyValidKeyElements (u32CryptoKeyIdx_17(D), u32Counter_11, u32TargetKeyIdx_19(D), &bFound);
Determining dynamic type for call: eRetVal_8 = Crypto_GetJobErrorForService (eJobService_5, pJobPrimitiveInputOutput_6, eJobMode_7);
  Starting walk at: eRetVal_8 = Crypto_GetJobErrorForService (eJobService_5, pJobPrimitiveInputOutput_6, eJobMode_7);
  instance pointer: pJobPrimitiveInputOutput_6  Outer instance pointer: pJob_4(D) offset: 64 (bits) vtbl reference: 
Determining dynamic type for call: eRetVal_6 = Crypto_GetJobErrorForOutputPtr (eJobService_3(D), pJobPrimitiveInputOutput_4(D), eJobMode_5(D));
  Starting walk at: eRetVal_6 = Crypto_GetJobErrorForOutputPtr (eJobService_3(D), pJobPrimitiveInputOutput_4(D), eJobMode_5(D));
  instance pointer: pJobPrimitiveInputOutput_4(D)  Outer instance pointer: pJobPrimitiveInputOutput_4(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: eRetVal_7 = Crypto_GetJobErrorForSecondaryOutputPtr (eJobService_3(D), pJobPrimitiveInputOutput_4(D), eJobMode_5(D));
  Starting walk at: eRetVal_7 = Crypto_GetJobErrorForSecondaryOutputPtr (eJobService_3(D), pJobPrimitiveInputOutput_4(D), eJobMode_5(D));
  instance pointer: pJobPrimitiveInputOutput_4(D)  Outer instance pointer: pJobPrimitiveInputOutput_4(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: eRetVal_8 = Crypto_GetJobErrorForVerifyPtr.isra.0 (eJobService_3(D), _9, eJobMode_5(D));
  Starting walk at: eRetVal_8 = Crypto_GetJobErrorForVerifyPtr.isra.0 (eJobService_3(D), _9, eJobMode_5(D));
  instance pointer: _9  Outer instance pointer: pJobPrimitiveInputOutput_4(D) offset: 384 (bits) vtbl reference: 
Determining dynamic type for call: eRetVal_9 = Crypto_GetJobErrorForInputPtr.isra.0 (eJobService_5(D), pJobPrimitiveInputOutput_8(D), eJobMode_7(D));
  Starting walk at: eRetVal_9 = Crypto_GetJobErrorForInputPtr.isra.0 (eJobService_5(D), pJobPrimitiveInputOutput_8(D), eJobMode_7(D));
  instance pointer: pJobPrimitiveInputOutput_8(D)  Outer instance pointer: pJobPrimitiveInputOutput_8(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: eRetVal_10 = Crypto_GetJobErrorForSecondaryInputPtr.isra.0 (eJobService_5(D), _13, eJobMode_7(D));
  Starting walk at: eRetVal_10 = Crypto_GetJobErrorForSecondaryInputPtr.isra.0 (eJobService_5(D), _13, eJobMode_7(D));
  instance pointer: _13  Outer instance pointer: pJobPrimitiveInputOutput_8(D) offset: 64 (bits) vtbl reference: 
Determining dynamic type for call: eRetVal_11 = Crypto_GetJobErrorForTertiaryInputPtr.isra.0 (eJobService_5(D), _14, eJobMode_7(D));
  Starting walk at: eRetVal_11 = Crypto_GetJobErrorForTertiaryInputPtr.isra.0 (eJobService_5(D), _14, eJobMode_7(D));
  instance pointer: _14  Outer instance pointer: pJobPrimitiveInputOutput_8(D) offset: 128 (bits) vtbl reference: 
Determining dynamic type for call: eRetVal_12 = Crypto_GetJobErrorForOutAndVerifyPtrs (eJobService_5(D), pJobPrimitiveInputOutput_8(D), eJobMode_7(D));
  Starting walk at: eRetVal_12 = Crypto_GetJobErrorForOutAndVerifyPtrs (eJobService_5(D), pJobPrimitiveInputOutput_8(D), eJobMode_7(D));
  instance pointer: pJobPrimitiveInputOutput_8(D)  Outer instance pointer: pJobPrimitiveInputOutput_8(D) offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Crypto_GetNonDetErrorsForKeyExchCalcPubVal.isra.0/76:
  Jump functions of caller  Crypto_CheckForErrorsInKeyElementSet.isra.0/75:
  Jump functions of caller  Crypto_CopyKeyElements.isra.0/74:
  Jump functions of caller  Crypto_ReportErrorToDet.part.0/73:
  Jump functions of caller  Crypto_ProcessJobAndCheckNonDetErrors.isra.0/72:
    callsite  Crypto_ProcessJobAndCheckNonDetErrors.isra.0/72 -> Crypto_VerifyKeyValidity/2 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[1, -2]
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Crypto_CheckForErrorsInProcessJob.isra.0/71:
    callsite  Crypto_CheckForErrorsInProcessJob.isra.0/71 -> Crypto_GetProcessJobError/12 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Crypto_MarkKeyAsValid.isra.0/70:
  Jump functions of caller  Crypto_GetJobErrorForVerifyPtr.isra.0/69:
  Jump functions of caller  Crypto_GetJobErrorForTertiaryInputPtr.isra.0/68:
  Jump functions of caller  Crypto_GetJobErrorForSecondaryInputPtr.isra.0/67:
  Jump functions of caller  Crypto_GetJobErrorForInputPtr.isra.0/66:
  Jump functions of caller  Crypto_Ipw_MainFunction/65:
  Jump functions of caller  Crypto_Ipw_CertificateVerify/64:
  Jump functions of caller  Crypto_Ipw_CertificateParse/63:
  Jump functions of caller  Crypto_Ipw_CalcSecret/62:
  Jump functions of caller  Crypto_Ipw_KeyDerive/61:
  Jump functions of caller  Crypto_Ipw_KeyGenerate/60:
  Jump functions of caller  Crypto_Ipw_RandomSeed/59:
  Jump functions of caller  Crypto_Ipw_ExportKey/57:
  Jump functions of caller  Crypto_Util_GetKeyElementIdx/56:
  Jump functions of caller  Crypto_Util_Memcpy8/55:
  Jump functions of caller  Crypto_Ipw_ImportKey/53:
  Jump functions of caller  Crypto_Ipw_CancelJob/52:
  Jump functions of caller  Det_ReportRuntimeError/50:
  Jump functions of caller  Crypto_Ipw_ProcessJob/49:
  Jump functions of caller  Crypto_Util_InitJobQueues/48:
  Jump functions of caller  Crypto_Ipw_Init/47:
  Jump functions of caller  Crypto_ReportErrorToDet/46:
    callsite  Crypto_ReportErrorToDet/46 -> Crypto_ReportErrorToDet.part.0/73 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Crypto_MainFunction/45:
  Jump functions of caller  Crypto_CertificateVerify/44:
  Jump functions of caller  Crypto_CertificateParse/43:
  Jump functions of caller  Crypto_KeyExchangeCalcSecret/42:
    callsite  Crypto_KeyExchangeCalcSecret/42 -> Crypto_ReportErrorToDet/46 : 
       param 0: CONST: 10
         value: 0xa, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Crypto_KeyExchangeCalcSecret/42 -> Crypto_GetNonDetErrorsForKeyExchCalcSecret/18 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[1, -2]
  Jump functions of caller  Crypto_KeyExchangeCalcPubVal/41:
    callsite  Crypto_KeyExchangeCalcPubVal/41 -> Crypto_ReportErrorToDet/46 : 
       param 0: CONST: 9
         value: 0x9, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Crypto_KeyExchangeCalcPubVal/41 -> Crypto_CopyDataFromPubValKeyElementToUser/17 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[1, -2]
       param 2: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Crypto_KeyExchangeCalcPubVal/41 -> Crypto_GetNonDetErrorsForKeyExchCalcPubVal.isra.0/76 : 
       param 0: CONST: 9
         value: 0x9, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[1, -2]
       param 2: PASS THROUGH: 2, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Crypto_KeyDerive/40:
    callsite  Crypto_KeyDerive/40 -> Crypto_ReportErrorToDet/46 : 
       param 0: CONST: 8
         value: 0x8, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Crypto_KeyDerive/40 -> Crypto_GetNonDetErrorsForKeyDerive/15 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[1, -2]
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[1, -2]
  Jump functions of caller  Crypto_KeyGenerate/39:
    callsite  Crypto_KeyGenerate/39 -> Crypto_ReportErrorToDet/46 : 
       param 0: CONST: 7
         value: 0x7, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Crypto_KeyGenerate/39 -> Crypto_GetNonDetErrorsForKeyGenerate/14 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[1, -2]
  Jump functions of caller  Crypto_RandomSeed/38:
    callsite  Crypto_RandomSeed/38 -> Crypto_ReportErrorToDet/46 : 
       param 0: CONST: 13
         value: 0xd, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Crypto_RandomSeed/38 -> Crypto_GetNonDetErrorsForRandomSeed/13 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[1, -2]
  Jump functions of caller  Crypto_KeyElementIdsGet/37:
  Jump functions of caller  Crypto_KeyCopy/36:
    callsite  Crypto_KeyCopy/36 -> Crypto_ReportErrorToDet/46 : 
       param 0: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Crypto_KeyCopy/36 -> Crypto_CopyKeyElements.isra.0/74 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[1, -2]
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[1, -2]
    callsite  Crypto_KeyCopy/36 -> Crypto_CheckKeyCopyValid/20 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[1, -2]
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[1, -2]
  Jump functions of caller  Crypto_KeyElementCopyPartial/35:
    callsite  Crypto_KeyElementCopyPartial/35 -> Crypto_CheckParamAndConfForKeyElementCopyPartial/23 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 4: PASS THROUGH: 4, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Crypto_KeyElementCopy/34:
    callsite  Crypto_KeyElementCopy/34 -> Crypto_ReportErrorToDet/46 : 
       param 0: CONST: 15
         value: 0xf, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Crypto_KeyElementCopy/34 -> Crypto_ReportErrorToDet/46 : 
       param 0: CONST: 15
         value: 0xf, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Crypto_KeyElementCopy/34 -> Crypto_CheckParamAndConfForKeyElementCopy/22 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Crypto_KeyElementGet/33:
    callsite  Crypto_KeyElementGet/33 -> Crypto_ReportErrorToDet/46 : 
       param 0: CONST: 6
         value: 0x6, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Crypto_KeySetValid/32:
    callsite  Crypto_KeySetValid/32 -> Crypto_MarkKeyAsValid.isra.0/70 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[1, -2]
  Jump functions of caller  Crypto_KeyElementSet/31:
    callsite  Crypto_KeyElementSet/31 -> Crypto_ReportErrorToDet/46 : 
       param 0: CONST: 4
         value: 0x4, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Crypto_KeyElementSet/31 -> Crypto_CheckForErrorsInKeyElementSet.isra.0/75 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[1, -2]
       param 1: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  Crypto_CancelJob/30:
    callsite  Crypto_CancelJob/30 -> Crypto_ReportErrorToDet/46 : 
       param 0: CONST: 14
         value: 0xe, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Crypto_ProcessJob/29:
    callsite  Crypto_ProcessJob/29 -> Crypto_ReportErrorToDet/46 : 
       param 0: CONST: 3
         value: 0x3, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Crypto_ProcessJob/29 -> Crypto_ProcessJobAndCheckNonDetErrors.isra.0/72 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Crypto_ProcessJob/29 -> Crypto_CheckForErrorsInProcessJob.isra.0/71 : 
       param 0: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Crypto_GetVersionInfo/28:
  Jump functions of caller  Crypto_Init/27:
  Jump functions of caller  Crypto_CheckParamAndConfForKeyElementCopyPartial/23:
  Jump functions of caller  Crypto_CheckParamAndConfForKeyElementCopy/22:
  Jump functions of caller  Crypto_CheckKeyCopyValidKeyElements/21:
  Jump functions of caller  Crypto_CheckKeyCopyValid/20:
    callsite  Crypto_CheckKeyCopyValid/20 -> Crypto_CheckKeyCopyValidKeyElements/21 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
  Jump functions of caller  Crypto_GetNonDetErrorsForKeyExchCalcSecret/18:
  Jump functions of caller  Crypto_CopyDataFromPubValKeyElementToUser/17:
  Jump functions of caller  Crypto_GetNonDetErrorsForKeyDerive/15:
  Jump functions of caller  Crypto_GetNonDetErrorsForKeyGenerate/14:
  Jump functions of caller  Crypto_GetNonDetErrorsForRandomSeed/13:
  Jump functions of caller  Crypto_GetProcessJobError/12:
    callsite  Crypto_GetProcessJobError/12 -> Crypto_GetJobErrorForService/10 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: ANCESTOR: 0, offset 64, agg_preserved
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Crypto_GetJobErrorForOutAndVerifyPtrs/11:
    callsite  Crypto_GetJobErrorForOutAndVerifyPtrs/11 -> Crypto_GetJobErrorForVerifyPtr.isra.0/69 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Crypto_GetJobErrorForOutAndVerifyPtrs/11 -> Crypto_GetJobErrorForSecondaryOutputPtr/8 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Crypto_GetJobErrorForOutAndVerifyPtrs/11 -> Crypto_GetJobErrorForOutputPtr/7 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Crypto_GetJobErrorForService/10:
    callsite  Crypto_GetJobErrorForService/10 -> Crypto_GetJobErrorForOutAndVerifyPtrs/11 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Crypto_GetJobErrorForService/10 -> Crypto_GetJobErrorForTertiaryInputPtr.isra.0/68 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Crypto_GetJobErrorForService/10 -> Crypto_GetJobErrorForSecondaryInputPtr.isra.0/67 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Crypto_GetJobErrorForService/10 -> Crypto_GetJobErrorForInputPtr.isra.0/66 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Crypto_GetJobErrorForSecondaryOutputPtr/8:
  Jump functions of caller  Crypto_GetJobErrorForOutputPtr/7:
  Jump functions of caller  Crypto_VerifyKeyValidity/2:

 Propagating constants:

Not considering Crypto_MainFunction for cloning; -fipa-cp-clone disabled.
Not considering Crypto_CertificateVerify for cloning; -fipa-cp-clone disabled.
Not considering Crypto_CertificateParse for cloning; -fipa-cp-clone disabled.
Not considering Crypto_KeyExchangeCalcSecret for cloning; -fipa-cp-clone disabled.
Not considering Crypto_KeyExchangeCalcPubVal for cloning; -fipa-cp-clone disabled.
Not considering Crypto_KeyDerive for cloning; -fipa-cp-clone disabled.
Not considering Crypto_KeyGenerate for cloning; -fipa-cp-clone disabled.
Not considering Crypto_RandomSeed for cloning; -fipa-cp-clone disabled.
Not considering Crypto_KeyElementIdsGet for cloning; -fipa-cp-clone disabled.
Not considering Crypto_KeyCopy for cloning; -fipa-cp-clone disabled.
Not considering Crypto_KeyElementCopyPartial for cloning; -fipa-cp-clone disabled.
Not considering Crypto_KeyElementCopy for cloning; -fipa-cp-clone disabled.
Not considering Crypto_KeyElementGet for cloning; -fipa-cp-clone disabled.
Not considering Crypto_KeySetValid for cloning; -fipa-cp-clone disabled.
Not considering Crypto_KeyElementSet for cloning; -fipa-cp-clone disabled.
Not considering Crypto_CancelJob for cloning; -fipa-cp-clone disabled.
Not considering Crypto_ProcessJob for cloning; -fipa-cp-clone disabled.
Not considering Crypto_GetVersionInfo for cloning; -fipa-cp-clone disabled.
Not considering Crypto_Init for cloning; -fipa-cp-clone disabled.

overall_size: 1045, max_new_size: 11001
 - context independent values, size: 17, time_benefit: 1.660000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 13, time_benefit: 1.000000
 - context independent values, size: 13, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.

IPA lattices after all propagation:

Lattices:
  Node: Crypto_GetNonDetErrorsForKeyExchCalcPubVal.isra.0/76:
    param [0]: 9 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x9, mask = 0x0
         const uint8 [9, 9]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         const uint32 ~[1, 4294967294]
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Crypto_CheckForErrorsInKeyElementSet.isra.0/75:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         uint32 ~[1, 4294967294]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         uint32 * ~[0B, 0B]
        AGGS VARIABLE
  Node: Crypto_CopyKeyElements.isra.0/74:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         const uint32 ~[1, 4294967294]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         const uint32 ~[1, 4294967294]
        AGGS VARIABLE
  Node: Crypto_ReportErrorToDet.part.0/73:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0xa, mask = 0x1f
         uint8 [3, 16]
        AGGS VARIABLE
  Node: Crypto_ProcessJobAndCheckNonDetErrors.isra.0/72:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Crypto_CheckForErrorsInProcessJob.isra.0/71:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Crypto_MarkKeyAsValid.isra.0/70:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         const uint32 ~[1, 4294967294]
        AGGS VARIABLE
  Node: Crypto_GetJobErrorForVerifyPtr.isra.0/69:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         Crypto_VerifyResultType * const * ~[0B, 0B]
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Crypto_GetJobErrorForTertiaryInputPtr.isra.0/68:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         const uint8 * const * ~[0B, 0B]
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Crypto_GetJobErrorForSecondaryInputPtr.isra.0/67:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         const uint8 * const * ~[0B, 0B]
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Crypto_GetJobErrorForInputPtr.isra.0/66:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         const uint8 * const * ~[0B, 0B]
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Crypto_ReportErrorToDet/46:
    param [0]: BOTTOM
         ctxs: VARIABLE
         Bits: value = 0xa, mask = 0x1f
         uint8 [3, 16]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Crypto_MainFunction/45:
  Node: Crypto_CertificateVerify/44:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Crypto_CertificateParse/43:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Crypto_KeyExchangeCalcSecret/42:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Crypto_KeyExchangeCalcPubVal/41:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Crypto_KeyDerive/40:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Crypto_KeyGenerate/39:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Crypto_RandomSeed/38:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Crypto_KeyElementIdsGet/37:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Crypto_KeyCopy/36:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Crypto_KeyElementCopyPartial/35:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [3]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [4]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [5]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [6]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Crypto_KeyElementCopy/34:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [3]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Crypto_KeyElementGet/33:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [3]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Crypto_KeySetValid/32:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Crypto_KeyElementSet/31:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [3]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Crypto_CancelJob/30:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Crypto_ProcessJob/29:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Crypto_GetVersionInfo/28:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Crypto_Init/27:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Crypto_CheckParamAndConfForKeyElementCopyPartial/23:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [4]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Crypto_CheckParamAndConfForKeyElementCopy/22:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Crypto_CheckKeyCopyValidKeyElements/21:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         uint32 ~[1, 4294967294]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         uint32 ~[1, 4294967294]
        AGGS VARIABLE
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         boolean * ~[0B, 0B]
        AGGS VARIABLE
  Node: Crypto_CheckKeyCopyValid/20:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         uint32 ~[1, 4294967294]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         uint32 ~[1, 4294967294]
        AGGS VARIABLE
  Node: Crypto_GetNonDetErrorsForKeyExchCalcSecret/18:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         const uint32 ~[1, 4294967294]
        AGGS VARIABLE
  Node: Crypto_CopyDataFromPubValKeyElementToUser/17:
    param [0]: 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x0
         const uint32 [0, 0]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         const uint32 ~[1, 4294967294]
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Crypto_GetNonDetErrorsForKeyDerive/15:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         const uint32 ~[1, 4294967294]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         const uint32 ~[1, 4294967294]
        AGGS VARIABLE
  Node: Crypto_GetNonDetErrorsForKeyGenerate/14:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         const uint32 ~[1, 4294967294]
        AGGS VARIABLE
  Node: Crypto_GetNonDetErrorsForRandomSeed/13:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         const uint32 ~[1, 4294967294]
        AGGS VARIABLE
  Node: Crypto_GetProcessJobError/12:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Crypto_GetJobErrorForOutAndVerifyPtrs/11:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         const struct Crypto_JobPrimitiveInputOutputType * const ~[0B, 0B]
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Crypto_GetJobErrorForService/10:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         const struct Crypto_JobPrimitiveInputOutputType * const ~[0B, 0B]
        AGGS BOTTOM
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Crypto_GetJobErrorForSecondaryOutputPtr/8:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         const struct Crypto_JobPrimitiveInputOutputType * const ~[0B, 0B]
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Crypto_GetJobErrorForOutputPtr/7:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         const struct Crypto_JobPrimitiveInputOutputType * const ~[0B, 0B]
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Crypto_VerifyKeyValidity/2:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         const uint32 ~[1, 4294967294]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE

IPA decision stage:

 - Creating a specialized node of Crypto_GetNonDetErrorsForKeyExchCalcPubVal.isra.0/76 for all known contexts.
    replacing param #0 u8ServiceId with const 9
 - Creating a specialized node of Crypto_CopyDataFromPubValKeyElementToUser/17 for all known contexts.
    replacing param #0 u32PartitionId with const 0
Propagated bits info for function Crypto_CopyDataFromPubValKeyElementToUser.constprop/81:
 param 0: value = 0x0, mask = 0x0
Propagated bits info for function Crypto_GetNonDetErrorsForKeyExchCalcPubVal.isra.0.constprop/80:
 param 0: value = 0x9, mask = 0x0
Propagated bits info for function Crypto_GetNonDetErrorsForKeyExchCalcPubVal.isra.0/76:
 param 0: value = 0x9, mask = 0x0
Propagated bits info for function Crypto_CheckForErrorsInKeyElementSet.isra.0/75:
 param 3: value = 0x0, mask = 0xfffffffc
Propagated bits info for function Crypto_ReportErrorToDet.part.0/73:
 param 0: value = 0xa, mask = 0x1f
Propagated bits info for function Crypto_ReportErrorToDet/46:
 param 0: value = 0xa, mask = 0x1f
Propagated bits info for function Crypto_CopyDataFromPubValKeyElementToUser/17:
 param 0: value = 0x0, mask = 0x0

IPA constant propagation end

Reclaiming functions: Crypto_GetNonDetErrorsForKeyExchCalcPubVal.isra.0/76 Crypto_CopyDataFromPubValKeyElementToUser/17
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Crypto_CopyDataFromPubValKeyElementToUser.constprop.0/81 (Crypto_CopyDataFromPubValKeyElementToUser.constprop) @06af49a0
  Type: function definition analyzed
  Visibility:
  References: 
  Referring: 
  Clone of Crypto_CopyDataFromPubValKeyElementToUser/17
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: Crypto_KeyExchangeCalcPubVal/41 (354334802 (estimated locally),0.33 per call) 
  Calls: Crypto_Util_GetKeyElementIdx/56 (1073741824 (estimated locally),1.00 per call) Crypto_Ipw_ExportKey/57 (1073741824 (estimated locally),1.00 per call) 
Crypto_GetNonDetErrorsForKeyExchCalcPubVal.isra.0.constprop.0/80 (Crypto_GetNonDetErrorsForKeyExchCalcPubVal.isra.0.constprop) @06af4700
  Type: function definition analyzed
  Visibility: artificial
  References: Crypto_aKeyElementList/54 (read)
  Referring: 
  Clone of Crypto_GetNonDetErrorsForKeyExchCalcPubVal.isra.0/76
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: Crypto_KeyExchangeCalcPubVal/41 (1073741824 (estimated locally),1.00 per call) 
  Calls: Crypto_Util_GetKeyElementIdx/56 (1073741824 (estimated locally),1.00 per call) Det_ReportRuntimeError/50 (71717364 (estimated locally),0.07 per call) 
Crypto_GetNonDetErrorsForKeyExchCalcPubVal.isra.0/76 (Crypto_GetNonDetErrorsForKeyExchCalcPubVal.isra.0) @078fa000
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Crypto_CheckForErrorsInKeyElementSet.isra.0/75 (Crypto_CheckForErrorsInKeyElementSet.isra.0) @078fa7e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Crypto_aKeyElementList/54 (read)Crypto_aKeyElementList/54 (read)Crypto_aKeyElementList/54 (read)Crypto_aKeyElementList/54 (read)Crypto_aKeyElementList/54 (read)Crypto_aKeyElementList/54 (read)Crypto_aKeyElementList/54 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: Crypto_KeyElementSet/31 (1073741823 (estimated locally),1.00 per call) 
  Calls: Crypto_Util_GetKeyElementIdx/56 (1073741823 (estimated locally),1.00 per call) 
Crypto_CopyKeyElements.isra.0/74 (Crypto_CopyKeyElements.isra.0) @078e3d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Crypto_aKeyList/58 (read)Crypto_aKeyElementList/54 (read)Crypto_aKeyList/58 (read)Crypto_aKeyElementList/54 (read)Crypto_aKeyElementList/54 (read)Crypto_aKeyElementList/54 (read)Crypto_aKeyElementList/54 (read)Crypto_aKeyElementList/54 (read)Crypto_aKeyElementList/54 (read)Crypto_aKeyList/58 (read)Crypto_aKeyList/58 (read)
  Referring: 
  Availability: local
  Function flags: count:14196617 (estimated locally) body local optimize_size
  Called by: Crypto_KeyCopy/36 (77174120 (estimated locally),0.07 per call) 
  Calls: Crypto_Util_Memcpy8/55 (115052623 (estimated locally),8.10 per call) 
Crypto_ReportErrorToDet.part.0/73 (Crypto_ReportErrorToDet.part.0) @078e3ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Crypto_ReportErrorToDet/46 (357913944 (estimated locally),0.33 per call) 
  Calls: Det_ReportRuntimeError/50 (1073741824 (estimated locally),1.00 per call) 
Crypto_ProcessJobAndCheckNonDetErrors.isra.0/72 (Crypto_ProcessJobAndCheckNonDetErrors.isra.0) @078e38c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_ProcessJob/29 (536870913 (estimated locally),0.50 per call) 
  Calls: Crypto_VerifyKeyValidity/2 (1073741824 (estimated locally),1.00 per call) 
Crypto_CheckForErrorsInProcessJob.isra.0/71 (Crypto_CheckForErrorsInProcessJob.isra.0) @078e3460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_ProcessJob/29 (1073741824 (estimated locally),1.00 per call) 
  Calls: Crypto_GetProcessJobError/12 (1073741824 (estimated locally),1.00 per call) 
Crypto_MarkKeyAsValid.isra.0/70 (Crypto_MarkKeyAsValid.isra.0) @078ad380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Crypto_au8NvramBlob0/51 (read)Crypto_au8NvramBlob0/51 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_KeySetValid/32 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_GetJobErrorForVerifyPtr.isra.0/69 (Crypto_GetJobErrorForVerifyPtr.isra.0) @078ad7e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Crypto_aProcessJobServiceParams/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_GetJobErrorForOutAndVerifyPtrs/11 (268435456 (estimated locally),0.25 per call) 
  Calls: 
Crypto_GetJobErrorForTertiaryInputPtr.isra.0/68 (Crypto_GetJobErrorForTertiaryInputPtr.isra.0) @077c30e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Crypto_aProcessJobServiceParams/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_GetJobErrorForService/10 (179851755 (estimated locally),0.17 per call) 
  Calls: 
Crypto_GetJobErrorForSecondaryInputPtr.isra.0/67 (Crypto_GetJobErrorForSecondaryInputPtr.isra.0) @077c4c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Crypto_aProcessJobServiceParams/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_GetJobErrorForService/10 (359703511 (estimated locally),0.34 per call) 
  Calls: 
Crypto_GetJobErrorForInputPtr.isra.0/66 (Crypto_GetJobErrorForInputPtr.isra.0) @07768460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Crypto_aProcessJobServiceParams/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_GetJobErrorForService/10 (719407022 (estimated locally),0.67 per call) 
  Calls: 
Crypto_Ipw_MainFunction/65 (Crypto_Ipw_MainFunction) @07790700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_MainFunction/45 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_Ipw_CertificateVerify/64 (Crypto_Ipw_CertificateVerify) @07790540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_CertificateVerify/44 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_Ipw_CertificateParse/63 (Crypto_Ipw_CertificateParse) @07790380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_CertificateParse/43 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_Ipw_CalcSecret/62 (Crypto_Ipw_CalcSecret) @077900e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_KeyExchangeCalcSecret/42 (354334802 (estimated locally),0.33 per call) 
  Calls: 
Crypto_Ipw_KeyDerive/61 (Crypto_Ipw_KeyDerive) @07768d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_KeyDerive/40 (354334802 (estimated locally),0.33 per call) 
  Calls: 
Crypto_Ipw_KeyGenerate/60 (Crypto_Ipw_KeyGenerate) @07768a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_KeyGenerate/39 (354334802 (estimated locally),0.33 per call) 
  Calls: 
Crypto_Ipw_RandomSeed/59 (Crypto_Ipw_RandomSeed) @077687e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_RandomSeed/38 (354334802 (estimated locally),0.33 per call) 
  Calls: 
Crypto_aKeyList/58 (Crypto_aKeyList) @07765ca8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Crypto_CheckKeyCopyValid/20 (read)Crypto_CheckKeyCopyValid/20 (read)Crypto_KeyCopy/36 (read)Crypto_KeyCopy/36 (read)Crypto_CopyKeyElements.isra.0/74 (read)Crypto_CheckKeyCopyValidKeyElements/21 (read)Crypto_CopyKeyElements.isra.0/74 (read)Crypto_CheckKeyCopyValidKeyElements/21 (read)Crypto_CopyKeyElements.isra.0/74 (read)Crypto_CheckKeyCopyValidKeyElements/21 (read)Crypto_KeyElementIdsGet/37 (read)Crypto_CopyKeyElements.isra.0/74 (read)Crypto_KeyElementIdsGet/37 (read)
  Availability: not_available
  Varpool flags: read-only
Crypto_Ipw_ExportKey/57 (Crypto_Ipw_ExportKey) @077519a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_CopyDataFromPubValKeyElementToUser.constprop/81 (1073741824 (estimated locally),1.00 per call) Crypto_KeyElementCopy/34 (89223651 (estimated locally),0.08 per call) Crypto_KeyElementGet/33 (47333460 (estimated locally),0.04 per call) 
  Calls: 
Crypto_Util_GetKeyElementIdx/56 (Crypto_Util_GetKeyElementIdx) @07751380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_CopyDataFromPubValKeyElementToUser.constprop/81 (1073741824 (estimated locally),1.00 per call) Crypto_GetNonDetErrorsForKeyExchCalcPubVal.isra.0.constprop/80 (1073741824 (estimated locally),1.00 per call) Crypto_KeyCopy/36 (77174120 (estimated locally),0.07 per call) Crypto_KeyCopy/36 (77174120 (estimated locally),0.07 per call) Crypto_KeyElementCopyPartial/35 (1073741823 (estimated locally),1.00 per call) Crypto_KeyElementCopyPartial/35 (1073741823 (estimated locally),1.00 per call) Crypto_KeyElementCopy/34 (1073741823 (estimated locally),1.00 per call) Crypto_KeyElementCopy/34 (1073741823 (estimated locally),1.00 per call) Crypto_KeyElementGet/33 (1073741824 (estimated locally),1.00 per call) Crypto_GetNonDetErrorsForKeyExchCalcSecret/18 (1073741823 (estimated locally),1.00 per call) Crypto_GetNonDetErrorsForKeyExchCalcSecret/18 (1073741823 (estimated locally),1.00 per call) Crypto_GetNonDetErrorsForKeyExchCalcSecret/18 (1073741823 (estimated locally),1.00 per call) Crypto_GetNonDetErrorsForKeyDerive/15 (1073741824 (estimated locally),1.00 per call) Crypto_GetNonDetErrorsForKeyDerive/15 (1073741824 (estimated locally),1.00 per call) Crypto_GetNonDetErrorsForKeyDerive/15 (1073741824 (estimated locally),1.00 per call) Crypto_GetNonDetErrorsForKeyDerive/15 (1073741824 (estimated locally),1.00 per call) Crypto_GetNonDetErrorsForKeyDerive/15 (1073741824 (estimated locally),1.00 per call) Crypto_GetNonDetErrorsForKeyGenerate/14 (1073741824 (estimated locally),1.00 per call) Crypto_GetNonDetErrorsForKeyGenerate/14 (1073741824 (estimated locally),1.00 per call) Crypto_GetNonDetErrorsForKeyGenerate/14 (1073741824 (estimated locally),1.00 per call) Crypto_GetNonDetErrorsForKeyGenerate/14 (1073741824 (estimated locally),1.00 per call) Crypto_GetNonDetErrorsForRandomSeed/13 (1073741824 (estimated locally),1.00 per call) Crypto_CheckForErrorsInKeyElementSet.isra.0/75 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
Crypto_Util_Memcpy8/55 (Crypto_Util_Memcpy8) @07751000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_KeyElementCopyPartial/35 (173198851 (estimated locally),0.16 per call) Crypto_KeyElementCopy/34 (151115544 (estimated locally),0.14 per call) Crypto_KeyElementGet/33 (49868130 (estimated locally),0.05 per call) Crypto_KeyElementSet/31 (151115544 (estimated locally),0.14 per call) Crypto_CopyKeyElements.isra.0/74 (115052623 (estimated locally),8.10 per call) 
  Calls: 
Crypto_aKeyElementList/54 (Crypto_aKeyElementList) @077505e8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Crypto_CopyKeyElements.isra.0/74 (read)Crypto_CopyKeyElements.isra.0/74 (read)Crypto_CopyKeyElements.isra.0/74 (read)Crypto_CopyKeyElements.isra.0/74 (read)Crypto_CheckForErrorsInKeyElementSet.isra.0/75 (read)Crypto_CheckForErrorsInKeyElementSet.isra.0/75 (read)Crypto_GetNonDetErrorsForKeyDerive/15 (read)Crypto_CheckParamAndConfForKeyElementCopy/22 (read)Crypto_KeyElementCopy/34 (read)Crypto_CheckKeyCopyValidKeyElements/21 (read)Crypto_CheckParamAndConfForKeyElementCopyPartial/23 (read)Crypto_CheckParamAndConfForKeyElementCopyPartial/23 (read)Crypto_CheckParamAndConfForKeyElementCopyPartial/23 (read)Crypto_CheckParamAndConfForKeyElementCopyPartial/23 (read)Crypto_CheckParamAndConfForKeyElementCopyPartial/23 (read)Crypto_CheckForErrorsInKeyElementSet.isra.0/75 (read)Crypto_CheckForErrorsInKeyElementSet.isra.0/75 (read)Crypto_CheckForErrorsInKeyElementSet.isra.0/75 (read)Crypto_GetNonDetErrorsForKeyGenerate/14 (read)Crypto_GetNonDetErrorsForKeyGenerate/14 (read)Crypto_GetNonDetErrorsForKeyGenerate/14 (read)Crypto_GetNonDetErrorsForKeyExchCalcPubVal.isra.0.constprop.0/80 (read)Crypto_CheckParamAndConfForKeyElementCopy/22 (read)Crypto_KeyElementCopy/34 (read)Crypto_CheckForErrorsInKeyElementSet.isra.0/75 (read)Crypto_CheckForErrorsInKeyElementSet.isra.0/75 (read)Crypto_KeyElementSet/31 (read)Crypto_KeyElementSet/31 (read)Crypto_KeyElementSet/31 (read)Crypto_KeyElementSet/31 (read)Crypto_KeyElementSet/31 (read)Crypto_KeyElementSet/31 (read)Crypto_KeyElementCopy/34 (read)Crypto_KeyElementCopy/34 (read)Crypto_KeyElementCopyPartial/35 (read)Crypto_KeyElementCopyPartial/35 (read)Crypto_KeyElementCopy/34 (read)Crypto_KeyElementCopy/34 (read)Crypto_KeyElementCopy/34 (read)Crypto_CheckKeyCopyValidKeyElements/21 (read)Crypto_KeyElementIdsGet/37 (read)Crypto_KeyElementGet/33 (read)Crypto_KeyElementGet/33 (read)Crypto_KeyElementGet/33 (read)Crypto_CheckKeyCopyValidKeyElements/21 (read)Crypto_CheckKeyCopyValidKeyElements/21 (read)Crypto_CheckKeyCopyValidKeyElements/21 (read)Crypto_CheckKeyCopyValidKeyElements/21 (read)Crypto_CheckKeyCopyValid/20 (read)Crypto_KeyElementCopyPartial/35 (read)Crypto_CheckParamAndConfForKeyElementCopy/22 (read)Crypto_CheckParamAndConfForKeyElementCopy/22 (read)Crypto_CheckParamAndConfForKeyElementCopy/22 (read)Crypto_KeyElementCopy/34 (read)Crypto_CopyKeyElements.isra.0/74 (read)Crypto_CopyKeyElements.isra.0/74 (read)Crypto_CopyKeyElements.isra.0/74 (read)
  Availability: not_available
  Varpool flags: read-only
Crypto_Ipw_ImportKey/53 (Crypto_Ipw_ImportKey) @064c2ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_KeyElementCopy/34 (71717364 (estimated locally),0.07 per call) Crypto_KeyElementSet/31 (254253473 (estimated locally),0.24 per call) 
  Calls: 
Crypto_Ipw_CancelJob/52 (Crypto_Ipw_CancelJob) @064c2c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_CancelJob/30 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_au8NvramBlob0/51 (Crypto_au8NvramBlob0) @07747480
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Crypto_MarkKeyAsValid.isra.0/70 (write)Crypto_MarkKeyAsValid.isra.0/70 (read)Crypto_VerifyKeyValidity/2 (read)Crypto_KeyElementSet/31 (read)Crypto_KeyElementSet/31 (write)
  Availability: not_available
  Varpool flags:
Det_ReportRuntimeError/50 (Det_ReportRuntimeError) @06b5a540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_GetNonDetErrorsForKeyExchCalcPubVal.isra.0.constprop/80 (71717364 (estimated locally),0.07 per call) Crypto_KeyElementGet/33 (128554280 (estimated locally),0.12 per call) Crypto_KeyElementGet/33 (4238664 (estimated locally),0.00 per call) Crypto_ProcessJob/29 (217325345 (estimated locally),0.20 per call) Crypto_ReportErrorToDet/46 (357878150 (estimated locally),0.33 per call) Crypto_ReportErrorToDet.part.0/73 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_Ipw_ProcessJob/49 (Crypto_Ipw_ProcessJob) @06b5a2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_ProcessJob/29 (354334802 (estimated locally),0.33 per call) 
  Calls: 
Crypto_Util_InitJobQueues/48 (Crypto_Util_InitJobQueues) @06b5ad20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_Init/27 (116930485 (estimated locally),0.11 per call) 
  Calls: 
Crypto_Ipw_Init/47 (Crypto_Ipw_Init) @06b5ac40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_Init/27 (354334802 (estimated locally),0.33 per call) 
  Calls: 
Crypto_ReportErrorToDet/46 (Crypto_ReportErrorToDet) @06b5a700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_KeyExchangeCalcSecret/42 (90355375 (estimated locally),0.08 per call) Crypto_KeyExchangeCalcPubVal/41 (90355375 (estimated locally),0.08 per call) Crypto_KeyDerive/40 (90355375 (estimated locally),0.08 per call) Crypto_KeyGenerate/39 (90355375 (estimated locally),0.08 per call) Crypto_RandomSeed/38 (90355375 (estimated locally),0.08 per call) Crypto_KeyCopy/36 (19679401 (estimated locally),0.02 per call) Crypto_KeyElementCopy/34 (22752031 (estimated locally),0.02 per call) Crypto_KeyElementCopy/34 (18287928 (estimated locally),0.02 per call) Crypto_KeyElementGet/33 (12070032 (estimated locally),0.01 per call) Crypto_KeyElementSet/31 (64834636 (estimated locally),0.06 per call) Crypto_CancelJob/30 (273804165 (estimated locally),0.25 per call) Crypto_ProcessJob/29 (273804165 (estimated locally),0.25 per call) 
  Calls: Det_ReportRuntimeError/50 (357878150 (estimated locally),0.33 per call) Crypto_ReportErrorToDet.part.0/73 (357913944 (estimated locally),0.33 per call) 
Crypto_MainFunction/45 (Crypto_MainFunction) @06b5a460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_Ipw_MainFunction/65 (1073741824 (estimated locally),1.00 per call) 
Crypto_CertificateVerify/44 (Crypto_CertificateVerify) @06b5a1c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_Ipw_CertificateVerify/64 (1073741824 (estimated locally),1.00 per call) 
Crypto_CertificateParse/43 (Crypto_CertificateParse) @06b528c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_Ipw_CertificateParse/63 (1073741824 (estimated locally),1.00 per call) 
Crypto_KeyExchangeCalcSecret/42 (Crypto_KeyExchangeCalcSecret) @06b52ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_ReportErrorToDet/46 (90355375 (estimated locally),0.08 per call) Crypto_Ipw_CalcSecret/62 (354334802 (estimated locally),0.33 per call) Crypto_GetNonDetErrorsForKeyExchCalcSecret/18 (1073741824 (estimated locally),1.00 per call) 
Crypto_KeyExchangeCalcPubVal/41 (Crypto_KeyExchangeCalcPubVal) @06b52b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_ReportErrorToDet/46 (90355375 (estimated locally),0.08 per call) Crypto_CopyDataFromPubValKeyElementToUser.constprop/81 (354334802 (estimated locally),0.33 per call) Crypto_GetNonDetErrorsForKeyExchCalcPubVal.isra.0.constprop/80 (1073741824 (estimated locally),1.00 per call) 
Crypto_KeyDerive/40 (Crypto_KeyDerive) @06b527e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_ReportErrorToDet/46 (90355375 (estimated locally),0.08 per call) Crypto_Ipw_KeyDerive/61 (354334802 (estimated locally),0.33 per call) Crypto_GetNonDetErrorsForKeyDerive/15 (1073741824 (estimated locally),1.00 per call) 
Crypto_KeyGenerate/39 (Crypto_KeyGenerate) @06b52380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_ReportErrorToDet/46 (90355375 (estimated locally),0.08 per call) Crypto_Ipw_KeyGenerate/60 (354334802 (estimated locally),0.33 per call) Crypto_GetNonDetErrorsForKeyGenerate/14 (1073741824 (estimated locally),1.00 per call) 
Crypto_RandomSeed/38 (Crypto_RandomSeed) @06b52000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_ReportErrorToDet/46 (90355375 (estimated locally),0.08 per call) Crypto_Ipw_RandomSeed/59 (354334802 (estimated locally),0.33 per call) Crypto_GetNonDetErrorsForRandomSeed/13 (1073741824 (estimated locally),1.00 per call) 
Crypto_KeyElementIdsGet/37 (Crypto_KeyElementIdsGet) @0773f540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_aKeyList/58 (read)Crypto_aKeyList/58 (read)Crypto_aKeyElementList/54 (read)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Crypto_KeyCopy/36 (Crypto_KeyCopy) @0773fd20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_aKeyList/58 (read)Crypto_aKeyList/58 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_ReportErrorToDet/46 (19679401 (estimated locally),0.02 per call) Crypto_CopyKeyElements.isra.0/74 (77174120 (estimated locally),0.07 per call) Crypto_Util_GetKeyElementIdx/56 (77174120 (estimated locally),0.07 per call) Crypto_Util_GetKeyElementIdx/56 (77174120 (estimated locally),0.07 per call) Crypto_CheckKeyCopyValid/20 (354334802 (estimated locally),0.33 per call) 
Crypto_KeyElementCopyPartial/35 (Crypto_KeyElementCopyPartial) @0773f8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_aKeyElementList/54 (read)Crypto_aKeyElementList/54 (read)Crypto_aKeyElementList/54 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_Util_Memcpy8/55 (173198851 (estimated locally),0.16 per call) Crypto_CheckParamAndConfForKeyElementCopyPartial/23 (1073741823 (estimated locally),1.00 per call) Crypto_Util_GetKeyElementIdx/56 (1073741823 (estimated locally),1.00 per call) Crypto_Util_GetKeyElementIdx/56 (1073741823 (estimated locally),1.00 per call) 
Crypto_KeyElementCopy/34 (Crypto_KeyElementCopy) @0773f460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_aKeyElementList/54 (read)Crypto_aKeyElementList/54 (read)Crypto_aKeyElementList/54 (read)Crypto_aKeyElementList/54 (read)Crypto_aKeyElementList/54 (read)Crypto_aKeyElementList/54 (read)Crypto_aKeyElementList/54 (read)Crypto_aKeyElementList/54 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_ReportErrorToDet/46 (22752031 (estimated locally),0.02 per call) Crypto_Ipw_ExportKey/57 (89223651 (estimated locally),0.08 per call) Crypto_Util_Memcpy8/55 (151115544 (estimated locally),0.14 per call) Crypto_ReportErrorToDet/46 (18287928 (estimated locally),0.02 per call) Crypto_Ipw_ImportKey/53 (71717364 (estimated locally),0.07 per call) Crypto_CheckParamAndConfForKeyElementCopy/22 (1073741823 (estimated locally),1.00 per call) Crypto_Util_GetKeyElementIdx/56 (1073741823 (estimated locally),1.00 per call) Crypto_Util_GetKeyElementIdx/56 (1073741823 (estimated locally),1.00 per call) 
Crypto_KeyElementGet/33 (Crypto_KeyElementGet) @0773f000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_aKeyElementList/54 (read)Crypto_aKeyElementList/54 (read)Crypto_aKeyElementList/54 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ReportRuntimeError/50 (128554280 (estimated locally),0.12 per call) Det_ReportRuntimeError/50 (4238664 (estimated locally),0.00 per call) Crypto_Util_Memcpy8/55 (49868130 (estimated locally),0.05 per call) Crypto_ReportErrorToDet/46 (12070032 (estimated locally),0.01 per call) Crypto_Ipw_ExportKey/57 (47333460 (estimated locally),0.04 per call) Crypto_Util_GetKeyElementIdx/56 (1073741824 (estimated locally),1.00 per call) 
Crypto_KeySetValid/32 (Crypto_KeySetValid) @07735540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_MarkKeyAsValid.isra.0/70 (1073741824 (estimated locally),1.00 per call) 
Crypto_KeyElementSet/31 (Crypto_KeyElementSet) @07735ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_aKeyElementList/54 (read)Crypto_aKeyElementList/54 (read)Crypto_aKeyElementList/54 (read)Crypto_aKeyElementList/54 (read)Crypto_aKeyElementList/54 (read)Crypto_aKeyElementList/54 (read)Crypto_au8NvramBlob0/51 (read)Crypto_au8NvramBlob0/51 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_Util_Memcpy8/55 (151115544 (estimated locally),0.14 per call) Crypto_ReportErrorToDet/46 (64834636 (estimated locally),0.06 per call) Crypto_Ipw_ImportKey/53 (254253473 (estimated locally),0.24 per call) Crypto_CheckForErrorsInKeyElementSet.isra.0/75 (1073741823 (estimated locally),1.00 per call) 
Crypto_CancelJob/30 (Crypto_CancelJob) @07735b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_ReportErrorToDet/46 (273804165 (estimated locally),0.25 per call) Crypto_Ipw_CancelJob/52 (1073741824 (estimated locally),1.00 per call) 
Crypto_ProcessJob/29 (Crypto_ProcessJob) @077357e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_ReportErrorToDet/46 (273804165 (estimated locally),0.25 per call) Det_ReportRuntimeError/50 (217325345 (estimated locally),0.20 per call) Crypto_Ipw_ProcessJob/49 (354334802 (estimated locally),0.33 per call) Crypto_ProcessJobAndCheckNonDetErrors.isra.0/72 (536870913 (estimated locally),0.50 per call) Crypto_CheckForErrorsInProcessJob.isra.0/71 (1073741824 (estimated locally),1.00 per call) 
Crypto_GetVersionInfo/28 (Crypto_GetVersionInfo) @07735460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Crypto_Init/27 (Crypto_Init) @077351c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_aeDriverState/1 (read)Crypto_aeDriverState/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_Util_InitJobQueues/48 (116930485 (estimated locally),0.11 per call) Crypto_Ipw_Init/47 (354334802 (estimated locally),0.33 per call) 
Crypto_CheckParamAndConfForKeyElementCopyPartial/23 (Crypto_CheckParamAndConfForKeyElementCopyPartial) @076e1d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_aKeyElementList/54 (read)Crypto_aKeyElementList/54 (read)Crypto_aKeyElementList/54 (read)Crypto_aKeyElementList/54 (read)Crypto_aKeyElementList/54 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_KeyElementCopyPartial/35 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
Crypto_CheckParamAndConfForKeyElementCopy/22 (Crypto_CheckParamAndConfForKeyElementCopy) @076e1a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_aKeyElementList/54 (read)Crypto_aKeyElementList/54 (read)Crypto_aKeyElementList/54 (read)Crypto_aKeyElementList/54 (read)Crypto_aKeyElementList/54 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_KeyElementCopy/34 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
Crypto_CheckKeyCopyValidKeyElements/21 (Crypto_CheckKeyCopyValidKeyElements) @076e17e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_aKeyList/58 (read)Crypto_aKeyElementList/54 (read)Crypto_aKeyList/58 (read)Crypto_aKeyElementList/54 (read)Crypto_aKeyElementList/54 (read)Crypto_aKeyElementList/54 (read)Crypto_aKeyElementList/54 (read)Crypto_aKeyElementList/54 (read)Crypto_aKeyList/58 (read)
  Referring: 
  Availability: local
  Function flags: count:51521922 (estimated locally) body local optimize_size
  Called by: Crypto_CheckKeyCopyValid/20 (682732297 (estimated locally),7.16 per call) 
  Calls: 
Crypto_CheckKeyCopyValid/20 (Crypto_CheckKeyCopyValid) @076e1540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_aKeyList/58 (read)Crypto_aKeyElementList/54 (read)Crypto_aKeyList/58 (read)
  Referring: 
  Availability: local
  Function flags: count:95397014 (estimated locally) body local optimize_size
  Called by: Crypto_KeyCopy/36 (354334802 (estimated locally),0.33 per call) 
  Calls: Crypto_CheckKeyCopyValidKeyElements/21 (682732297 (estimated locally),7.16 per call) 
Crypto_GetNonDetErrorsForKeyExchCalcSecret/18 (Crypto_GetNonDetErrorsForKeyExchCalcSecret) @076e1000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: Crypto_KeyExchangeCalcSecret/42 (1073741824 (estimated locally),1.00 per call) 
  Calls: Crypto_Util_GetKeyElementIdx/56 (1073741823 (estimated locally),1.00 per call) Crypto_Util_GetKeyElementIdx/56 (1073741823 (estimated locally),1.00 per call) Crypto_Util_GetKeyElementIdx/56 (1073741823 (estimated locally),1.00 per call) 
Crypto_CopyDataFromPubValKeyElementToUser/17 (Crypto_CopyDataFromPubValKeyElementToUser) @076d7b60
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Crypto_GetNonDetErrorsForKeyDerive/15 (Crypto_GetNonDetErrorsForKeyDerive) @076d70e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_aKeyElementList/54 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_KeyDerive/40 (1073741824 (estimated locally),1.00 per call) 
  Calls: Crypto_Util_GetKeyElementIdx/56 (1073741824 (estimated locally),1.00 per call) Crypto_Util_GetKeyElementIdx/56 (1073741824 (estimated locally),1.00 per call) Crypto_Util_GetKeyElementIdx/56 (1073741824 (estimated locally),1.00 per call) Crypto_Util_GetKeyElementIdx/56 (1073741824 (estimated locally),1.00 per call) Crypto_Util_GetKeyElementIdx/56 (1073741824 (estimated locally),1.00 per call) 
Crypto_GetNonDetErrorsForKeyGenerate/14 (Crypto_GetNonDetErrorsForKeyGenerate) @076d7d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_aKeyElementList/54 (read)Crypto_aKeyElementList/54 (read)Crypto_aKeyElementList/54 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_KeyGenerate/39 (1073741824 (estimated locally),1.00 per call) 
  Calls: Crypto_Util_GetKeyElementIdx/56 (1073741824 (estimated locally),1.00 per call) Crypto_Util_GetKeyElementIdx/56 (1073741824 (estimated locally),1.00 per call) Crypto_Util_GetKeyElementIdx/56 (1073741824 (estimated locally),1.00 per call) Crypto_Util_GetKeyElementIdx/56 (1073741824 (estimated locally),1.00 per call) 
Crypto_GetNonDetErrorsForRandomSeed/13 (Crypto_GetNonDetErrorsForRandomSeed) @076d7a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_RandomSeed/38 (1073741824 (estimated locally),1.00 per call) 
  Calls: Crypto_Util_GetKeyElementIdx/56 (1073741824 (estimated locally),1.00 per call) 
Crypto_GetProcessJobError/12 (Crypto_GetProcessJobError) @076d77e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_CheckForErrorsInProcessJob.isra.0/71 (1073741824 (estimated locally),1.00 per call) 
  Calls: Crypto_GetJobErrorForService/10 (1073741824 (estimated locally),1.00 per call) 
Crypto_GetJobErrorForOutAndVerifyPtrs/11 (Crypto_GetJobErrorForOutAndVerifyPtrs) @076d7540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_GetJobErrorForService/10 (89925878 (estimated locally),0.08 per call) 
  Calls: Crypto_GetJobErrorForVerifyPtr.isra.0/69 (268435456 (estimated locally),0.25 per call) Crypto_GetJobErrorForSecondaryOutputPtr/8 (536870913 (estimated locally),0.50 per call) Crypto_GetJobErrorForOutputPtr/7 (1073741824 (estimated locally),1.00 per call) 
Crypto_GetJobErrorForService/10 (Crypto_GetJobErrorForService) @076d72a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_aProcessJobServiceParams/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: Crypto_GetProcessJobError/12 (1073741824 (estimated locally),1.00 per call) 
  Calls: Crypto_GetJobErrorForOutAndVerifyPtrs/11 (89925878 (estimated locally),0.08 per call) Crypto_GetJobErrorForTertiaryInputPtr.isra.0/68 (179851755 (estimated locally),0.17 per call) Crypto_GetJobErrorForSecondaryInputPtr.isra.0/67 (359703511 (estimated locally),0.34 per call) Crypto_GetJobErrorForInputPtr.isra.0/66 (719407022 (estimated locally),0.67 per call) 
Crypto_GetJobErrorForSecondaryOutputPtr/8 (Crypto_GetJobErrorForSecondaryOutputPtr) @06af4a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_aProcessJobServiceParams/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_GetJobErrorForOutAndVerifyPtrs/11 (536870913 (estimated locally),0.50 per call) 
  Calls: 
Crypto_GetJobErrorForOutputPtr/7 (Crypto_GetJobErrorForOutputPtr) @06af4540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_aProcessJobServiceParams/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_GetJobErrorForOutAndVerifyPtrs/11 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_VerifyKeyValidity/2 (Crypto_VerifyKeyValidity) @06af4460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_au8NvramBlob0/51 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_ProcessJobAndCheckNonDetErrors.isra.0/72 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_aeDriverState/1 (Crypto_aeDriverState) @069eb168
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_Init/27 (read)Crypto_Init/27 (write)
  Availability: available
  Varpool flags:
Crypto_aProcessJobServiceParams/0 (Crypto_aProcessJobServiceParams) @069eb120
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Crypto_GetJobErrorForSecondaryOutputPtr/8 (read)Crypto_GetJobErrorForOutputPtr/7 (read)Crypto_GetJobErrorForVerifyPtr.isra.0/69 (read)Crypto_GetJobErrorForInputPtr.isra.0/66 (read)Crypto_GetJobErrorForSecondaryInputPtr.isra.0/67 (read)Crypto_GetJobErrorForTertiaryInputPtr.isra.0/68 (read)Crypto_GetJobErrorForService/10 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known

;; Function Crypto_ReportErrorToDet (Crypto_ReportErrorToDet, funcdef_no=44, decl_uid=6383, cgraph_uid=45, symbol_order=46)

Modification phase of node Crypto_ReportErrorToDet/46
Adjusting mask for param 0 to 0x1f
Setting value range of param 0 [3, 16]
Crypto_ReportErrorToDet (uint8 u8ServiceId, uint8 u8Error)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  switch (u8Error_2(D)) <default: <L4> [33.33%], case 128: <L0> [33.33%], case 131: <L1> [33.33%]>

  <bb 3> [local count: 357913944]:
<L0>:
  # DEBUG D#11 => u8Error_2(D)
  Crypto_ReportErrorToDet.part.0 (u8ServiceId_4(D));
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 357878150]:
<L1>:
  # DEBUG BEGIN_STMT
  Det_ReportRuntimeError (114, 0, u8ServiceId_4(D), 129);
  # DEBUG BEGIN_STMT

  <bb 5> [local count: 1073634451]:
<L4>:
  return;

}



;; Function Crypto_Init (Crypto_Init, funcdef_no=25, decl_uid=6070, cgraph_uid=26, symbol_order=27)

Modification phase of node Crypto_Init/27
Crypto_Init (const Crypto_ConfigType * configPtr)
{
  Std_ReturnType RetVal;
  <unnamed type> _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG u32PartitionId => 0
  # DEBUG BEGIN_STMT
  _1 = Crypto_aeDriverState[0];
  if (_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  RetVal_5 = Crypto_Ipw_Init (0);
  # DEBUG RetVal => RetVal_5
  # DEBUG BEGIN_STMT
  if (RetVal_5 == 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 4> [local count: 116930485]:
  # DEBUG BEGIN_STMT
  Crypto_Util_InitJobQueues ();
  # DEBUG BEGIN_STMT
  Crypto_aeDriverState[0] = 1;

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Crypto_GetVersionInfo (Crypto_GetVersionInfo, funcdef_no=26, decl_uid=6072, cgraph_uid=27, symbol_order=28)

Modification phase of node Crypto_GetVersionInfo/28
Crypto_GetVersionInfo (struct Std_VersionInfoType * versioninfo)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  versioninfo_2(D)->moduleID = 114;
  # DEBUG BEGIN_STMT
  versioninfo_2(D)->vendorID = 43;
  # DEBUG BEGIN_STMT
  versioninfo_2(D)->sw_major_version = 1;
  # DEBUG BEGIN_STMT
  versioninfo_2(D)->sw_minor_version = 0;
  # DEBUG BEGIN_STMT
  versioninfo_2(D)->sw_patch_version = 0;
  return;

}



;; Function Crypto_ProcessJob (Crypto_ProcessJob, funcdef_no=27, decl_uid=6075, cgraph_uid=28, symbol_order=29)

Modification phase of node Crypto_ProcessJob/29
Crypto_ProcessJob (uint32 objectId, struct Crypto_JobType * job)
{
  Std_ReturnType RetVal;
  signed char RetVal.1_1;
  long unsigned int iftmp.0_5;
  const struct Crypto_JobPrimitiveInfoType * _18;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG u32PartitionId => 0
  # DEBUG BEGIN_STMT
  if (objectId_9(D) == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:

  <bb 4> [local count: 1073741824]:
  # iftmp.0_5 = PHI <0(2), 4294967295(3)>
  # DEBUG u32ObjectIdx => iftmp.0_5
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG D#7 => 0
  # DEBUG D#8 => iftmp.0_5
  RetVal_12 = Crypto_CheckForErrorsInProcessJob.isra.0 (job_11(D));
  # DEBUG RetVal => RetVal_12
  # DEBUG BEGIN_STMT
  if (RetVal_12 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _18 = MEM[(const struct Crypto_JobPrimitiveInfoType * *)job_11(D) + 80B];
  # DEBUG D#9 => job_11(D)
  # DEBUG D#10 => 0
  RetVal_13 = Crypto_ProcessJobAndCheckNonDetErrors.isra.0 (_18);
  # DEBUG RetVal => RetVal_13

  <bb 6> [local count: 1073741824]:
  # RetVal_2 = PHI <RetVal_12(4), RetVal_13(5)>
  # DEBUG RetVal => RetVal_2
  # DEBUG BEGIN_STMT
  if (RetVal_2 == 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  RetVal_15 = Crypto_Ipw_ProcessJob (0, iftmp.0_5, job_11(D));
  # DEBUG RetVal => RetVal_15

  <bb 8> [local count: 1073741824]:
  # RetVal_3 = PHI <RetVal_2(6), RetVal_15(7)>
  # DEBUG RetVal => RetVal_3
  # DEBUG BEGIN_STMT
  if (RetVal_3 == 3)
    goto <bb 9>; [20.24%]
  else
    goto <bb 10>; [79.76%]

  <bb 9> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  Det_ReportRuntimeError (114, 0, 3, 0);

  <bb 10> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  RetVal.1_1 = (signed char) RetVal_3;
  if (RetVal.1_1 < 0)
    goto <bb 11>; [25.50%]
  else
    goto <bb 12>; [74.50%]

  <bb 11> [local count: 273804165]:
  # DEBUG BEGIN_STMT
  Crypto_ReportErrorToDet (3, RetVal_3);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1

  <bb 12> [local count: 1073741824]:
  # RetVal_4 = PHI <RetVal_3(10), 1(11)>
  # DEBUG RetVal => RetVal_4
  # DEBUG BEGIN_STMT
  return RetVal_4;

}



;; Function Crypto_CancelJob (Crypto_CancelJob, funcdef_no=28, decl_uid=6078, cgraph_uid=29, symbol_order=30)

Modification phase of node Crypto_CancelJob/30
Crypto_CancelJob (uint32 objectId, struct Crypto_JobInfoType * job)
{
  Std_ReturnType RetVal;
  signed char RetVal.4_1;
  long unsigned int iftmp.3_3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG u32PartitionId => 0
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  if (objectId_5(D) == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:

  <bb 4> [local count: 1073741824]:
  # iftmp.3_3 = PHI <0(2), 4294967295(3)>
  # DEBUG u32ObjectIdx => iftmp.3_3
  # DEBUG BEGIN_STMT
  RetVal_9 = Crypto_Ipw_CancelJob (0, iftmp.3_3, job_7(D));
  # DEBUG RetVal => RetVal_9
  # DEBUG BEGIN_STMT
  RetVal.4_1 = (signed char) RetVal_9;
  if (RetVal.4_1 < 0)
    goto <bb 5>; [25.50%]
  else
    goto <bb 6>; [74.50%]

  <bb 5> [local count: 273804165]:
  # DEBUG BEGIN_STMT
  Crypto_ReportErrorToDet (14, RetVal_9);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1

  <bb 6> [local count: 1073741824]:
  # RetVal_2 = PHI <RetVal_9(4), 1(5)>
  # DEBUG RetVal => RetVal_2
  # DEBUG BEGIN_STMT
  return RetVal_2;

}



;; Function Crypto_KeyElementSet (Crypto_KeyElementSet, funcdef_no=29, decl_uid=6083, cgraph_uid=30, symbol_order=31)

Modification phase of node Crypto_KeyElementSet/31
Crypto_KeyElementSet (uint32 cryptoKeyId, uint32 keyElementId, const uint8 * keyPtr, uint32 keyLength)
{
  uint32 u32CryptoKeyElementIdx;
  Std_ReturnType RetVal;
  long unsigned int u32CryptoKeyElementIdx.6_1;
  signed char RetVal.7_2;
  long unsigned int u32CryptoKeyElementIdx.8_3;
  uint8 * _4;
  long unsigned int u32CryptoKeyElementIdx.10_5;
  <unnamed type> _6;
  <unnamed type> _7;
  uint32 * _8;
  uint32 * _9;
  uint32 * _10;
  unsigned char _11;
  signed char _12;
  long unsigned int _13;
  int _14;
  signed char _15;
  signed char _16;
  signed char _17;
  unsigned char _18;
  long unsigned int iftmp.5_20;
  long unsigned int _39;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG u32PartitionId => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (cryptoKeyId_23(D) == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870911]:

  <bb 4> [local count: 1073741823]:
  # iftmp.5_20 = PHI <0(2), 4294967295(3)>
  # DEBUG u32CryptoKeyIdx => iftmp.5_20
  # DEBUG BEGIN_STMT
  # DEBUG D#16 => 0
  # DEBUG D#17 => keyPtr_25(D)
  RetVal_29 = Crypto_CheckForErrorsInKeyElementSet.isra.0 (iftmp.5_20, keyLength_26(D), keyElementId_27(D), &u32CryptoKeyElementIdx);
  # DEBUG RetVal => RetVal_29
  # DEBUG BEGIN_STMT
  if (RetVal_29 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 18>; [50.00%]

  <bb 5> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  if (keyElementId_27(D) == 1)
    goto <bb 7>; [20.24%]
  else
    goto <bb 6>; [79.76%]

  <bb 6> [local count: 428208239]:
  if (keyElementId_27(D) == 98)
    goto <bb 7>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 7> [local count: 254253473]:
  # DEBUG BEGIN_STMT
  u32CryptoKeyElementIdx.6_1 = u32CryptoKeyElementIdx;
  RetVal_33 = Crypto_Ipw_ImportKey (0, keyPtr_25(D), keyLength_26(D), iftmp.5_20, u32CryptoKeyElementIdx.6_1);
  # DEBUG RetVal => RetVal_33
  # DEBUG BEGIN_STMT
  RetVal.7_2 = (signed char) RetVal_33;
  if (RetVal.7_2 < 0)
    goto <bb 8>; [25.50%]
  else
    goto <bb 11>; [74.50%]

  <bb 8> [local count: 64834636]:
  # DEBUG BEGIN_STMT
  Crypto_ReportErrorToDet (4, RetVal_33);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  goto <bb 17>; [100.00%]

  <bb 9> [local count: 282617438]:
  # DEBUG BEGIN_STMT
  u32CryptoKeyElementIdx.8_3 = u32CryptoKeyElementIdx;
  _4 = Crypto_aKeyElementList[u32CryptoKeyElementIdx.8_3].pCryptoElementArray;
  if (_4 != 0B)
    goto <bb 10>; [53.47%]
  else
    goto <bb 17>; [46.53%]

  <bb 10> [local count: 151115544]:
  # DEBUG BEGIN_STMT
  Crypto_Util_Memcpy8 (_4, keyPtr_25(D), keyLength_26(D));
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 189418838]:
  # DEBUG RetVal => RetVal_33
  # DEBUG BEGIN_STMT
  if (RetVal_33 == 0)
    goto <bb 12>; [50.00%]
  else
    goto <bb 17>; [50.00%]

  <bb 12> [local count: 245824963]:
  # RetVal_31 = PHI <RetVal_33(11), 0(10)>
  # DEBUG BEGIN_STMT
  u32CryptoKeyElementIdx.10_5 = u32CryptoKeyElementIdx;
  _6 = Crypto_aKeyElementList[u32CryptoKeyElementIdx.10_5].eCryptoKeyFormat;
  if (_6 == 2)
    goto <bb 13>; [34.00%]
  else
    goto <bb 16>; [66.00%]

  <bb 13> [local count: 83580487]:
  # DEBUG BEGIN_STMT
  _7 = Crypto_aKeyElementList[u32CryptoKeyElementIdx.10_5].eCryptoKeyElementWriteAccess;
  if (_7 == 4)
    goto <bb 14>; [34.00%]
  else
    goto <bb 15>; [66.00%]

  <bb 14> [local count: 28417366]:
  # DEBUG BEGIN_STMT
  _8 = Crypto_aKeyElementList[u32CryptoKeyElementIdx.10_5].pu32CryptoElementActualSize;
  *_8 = 16;
  goto <bb 17>; [100.00%]

  <bb 15> [local count: 55163122]:
  # DEBUG BEGIN_STMT
  _9 = Crypto_aKeyElementList[u32CryptoKeyElementIdx.10_5].pu32CryptoElementActualSize;
  *_9 = 112;
  goto <bb 17>; [100.00%]

  <bb 16> [local count: 162244476]:
  # DEBUG BEGIN_STMT
  _10 = Crypto_aKeyElementList[u32CryptoKeyElementIdx.10_5].pu32CryptoElementActualSize;
  *_10 = keyLength_26(D);

  <bb 17> [local count: 536870913]:
  # RetVal_35 = PHI <RetVal_33(11), RetVal_31(15), RetVal_31(16), RetVal_31(14), 1(8), 1(9)>
  # DEBUG RetVal => NULL
  # DEBUG BEGIN_STMT
  _39 = iftmp.5_20 >> 3;
  _11 = Crypto_au8NvramBlob0[_39];
  _12 = (signed char) _11;
  _13 = iftmp.5_20 & 7;
  _14 = 1 << _13;
  _15 = (signed char) _14;
  _16 = ~_15;
  _17 = _12 & _16;
  _18 = (unsigned char) _17;
  Crypto_au8NvramBlob0[_39] = _18;

  <bb 18> [local count: 1073741824]:
  # RetVal_19 = PHI <RetVal_29(4), RetVal_35(17)>
  # DEBUG RetVal => RetVal_19
  # DEBUG BEGIN_STMT
  u32CryptoKeyElementIdx ={v} {CLOBBER};
  return RetVal_19;

}



;; Function Crypto_KeySetValid (Crypto_KeySetValid, funcdef_no=30, decl_uid=6085, cgraph_uid=31, symbol_order=32)

Modification phase of node Crypto_KeySetValid/32
Crypto_KeySetValid (uint32 cryptoKeyId)
{
  Std_ReturnType RetVal;
  long unsigned int iftmp.15_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG u32PartitionId => 0
  # DEBUG BEGIN_STMT
  if (cryptoKeyId_2(D) == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:

  <bb 4> [local count: 1073741824]:
  # iftmp.15_1 = PHI <0(2), 4294967295(3)>
  # DEBUG u32CryptoKeyIdx => iftmp.15_1
  # DEBUG BEGIN_STMT
  # DEBUG D#5 => 0
  # DEBUG D#6 => 5
  RetVal_5 = Crypto_MarkKeyAsValid.isra.0 (iftmp.15_1);
  # DEBUG RetVal => RetVal_5
  # DEBUG BEGIN_STMT
  return RetVal_5;

}



;; Function Crypto_KeyElementGet (Crypto_KeyElementGet, funcdef_no=31, decl_uid=6090, cgraph_uid=32, symbol_order=33)

Modification phase of node Crypto_KeyElementGet/33
Crypto_KeyElementGet (uint32 cryptoKeyId, uint32 keyElementId, uint8 * resultPtr, uint32 * resultLengthPtr)
{
  uint32 u32CryptoKeyElementIdx;
  Std_ReturnType RetVal;
  <unnamed type> _1;
  long unsigned int _2;
  uint32 * _3;
  long unsigned int _4;
  signed char RetVal.17_5;
  uint8 * _6;
  long unsigned int _7;
  long unsigned int iftmp.16_8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG u32PartitionId => 0
  # DEBUG BEGIN_STMT
  if (cryptoKeyId_10(D) == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:

  <bb 4> [local count: 1073741824]:
  # iftmp.16_8 = PHI <0(2), 4294967295(3)>
  # DEBUG u32CryptoKeyIdx => iftmp.16_8
  # DEBUG BEGIN_STMT
  # DEBUG u32CryptoKeyElementExpIdx => 4294967295
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  u32CryptoKeyElementIdx_14 = Crypto_Util_GetKeyElementIdx (iftmp.16_8, keyElementId_12(D));
  # DEBUG u32CryptoKeyElementIdx => u32CryptoKeyElementIdx_14
  # DEBUG BEGIN_STMT
  if (u32CryptoKeyElementIdx_14 != 4294967295)
    goto <bb 5>; [66.00%]
  else
    goto <bb 15>; [34.00%]

  <bb 5> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  _1 = Crypto_aKeyElementList[u32CryptoKeyElementIdx_14].eCryptoKeyElementReadAccess;
  if (_1 == 1)
    goto <bb 15>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 6> [local count: 467721939]:
  # DEBUG BEGIN_STMT
  _2 = *resultLengthPtr_15(D);
  _3 = Crypto_aKeyElementList[u32CryptoKeyElementIdx_14].pu32CryptoElementActualSize;
  _4 = *_3;
  if (_2 < _4)
    goto <bb 15>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 7> [local count: 233860969]:
  # DEBUG BEGIN_STMT
  if (keyElementId_12(D) == 1)
    goto <bb 8>; [20.24%]
  else
    goto <bb 10>; [79.76%]

  <bb 8> [local count: 47333460]:
  # DEBUG BEGIN_STMT
  RetVal_20 = Crypto_Ipw_ExportKey (0, u32CryptoKeyElementIdx_14, 4294967295, resultPtr_16(D), resultLengthPtr_15(D));
  # DEBUG RetVal => RetVal_20
  # DEBUG BEGIN_STMT
  RetVal.17_5 = (signed char) RetVal_20;
  if (RetVal.17_5 < 0)
    goto <bb 9>; [25.50%]
  else
    goto <bb 13>; [74.50%]

  <bb 9> [local count: 12070032]:
  # DEBUG BEGIN_STMT
  Crypto_ReportErrorToDet (6, RetVal_20);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  goto <bb 15>; [100.00%]

  <bb 10> [local count: 186527509]:
  # DEBUG BEGIN_STMT
  if (_4 != 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 11> [local count: 93263755]:
  # DEBUG BEGIN_STMT
  _6 = Crypto_aKeyElementList[u32CryptoKeyElementIdx_14].pCryptoElementArray;
  if (_6 != 0B)
    goto <bb 12>; [53.47%]
  else
    goto <bb 15>; [46.53%]

  <bb 12> [local count: 49868130]:
  # DEBUG BEGIN_STMT
  Crypto_Util_Memcpy8 (resultPtr_16(D), _6, _4);
  # DEBUG BEGIN_STMT
  _7 = *_3;
  *resultLengthPtr_15(D) = _7;
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  goto <bb 15>; [100.00%]

  <bb 13> [local count: 35263428]:
  # DEBUG RetVal => RetVal_20
  # DEBUG BEGIN_STMT
  if (RetVal_20 == 8)
    goto <bb 14>; [12.02%]
  else
    goto <bb 15>; [87.98%]

  <bb 14> [local count: 4238664]:
  # DEBUG BEGIN_STMT
  Det_ReportRuntimeError (114, 0, 6, 1);
  goto <bb 17>; [100.00%]

  <bb 15> [local count: 1069503160]:
  # RetVal_24 = PHI <RetVal_20(13), 1(4), 0(12), 13(10), 1(11), 1(9), 3(6), 6(5)>
  # DEBUG RetVal => NULL
  # DEBUG BEGIN_STMT
  if (RetVal_24 == 6)
    goto <bb 16>; [12.02%]
  else
    goto <bb 17>; [87.98%]

  <bb 16> [local count: 128554280]:
  # DEBUG BEGIN_STMT
  Det_ReportRuntimeError (114, 0, 6, 2);

  <bb 17> [local count: 1073741824]:
  # RetVal_25 = PHI <8(14), RetVal_24(15), 6(16)>
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_25;

}



;; Function Crypto_KeyElementCopy (Crypto_KeyElementCopy, funcdef_no=32, decl_uid=6095, cgraph_uid=33, symbol_order=34)

Modification phase of node Crypto_KeyElementCopy/34
Crypto_KeyElementCopy (uint32 cryptoKeyId, uint32 keyElementId, uint32 targetCryptoKeyId, uint32 targetKeyElementId)
{
  uint32 u32CryptoTargetKeyElementIdx;
  uint32 u32CryptoKeyElementIdx;
  Std_ReturnType RetVal;
  uint8 * _1;
  uint32 * _2;
  long unsigned int _3;
  signed char RetVal.20_4;
  uint8 * _5;
  uint8 * _6;
  uint32 * _7;
  long unsigned int _8;
  uint32 * _9;
  long unsigned int _10;
  uint8 * _11;
  uint32 * _12;
  signed char RetVal.21_13;
  long unsigned int iftmp.18_15;
  long unsigned int iftmp.19_16;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG u32PartitionId => 0
  # DEBUG BEGIN_STMT
  if (cryptoKeyId_18(D) == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870911]:

  <bb 4> [local count: 1073741823]:
  # iftmp.18_15 = PHI <0(2), 4294967295(3)>
  # DEBUG u32CryptoKeyIdx => iftmp.18_15
  # DEBUG BEGIN_STMT
  if (targetCryptoKeyId_19(D) == 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 536870911]:

  <bb 6> [local count: 1073741823]:
  # iftmp.19_16 = PHI <0(4), 4294967295(5)>
  # DEBUG u32TargetKeyIdx => iftmp.19_16
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  u32CryptoKeyElementIdx_23 = Crypto_Util_GetKeyElementIdx (iftmp.18_15, keyElementId_21(D));
  # DEBUG u32CryptoKeyElementIdx => u32CryptoKeyElementIdx_23
  # DEBUG BEGIN_STMT
  u32CryptoTargetKeyElementIdx_26 = Crypto_Util_GetKeyElementIdx (iftmp.19_16, targetKeyElementId_24(D));
  # DEBUG u32CryptoTargetKeyElementIdx => u32CryptoTargetKeyElementIdx_26
  # DEBUG BEGIN_STMT
  RetVal_27 = Crypto_CheckParamAndConfForKeyElementCopy (u32CryptoKeyElementIdx_23, u32CryptoTargetKeyElementIdx_26);
  # DEBUG RetVal => RetVal_27
  # DEBUG BEGIN_STMT
  if (RetVal_27 == 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 16>; [50.00%]

  <bb 7> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  if (keyElementId_21(D) != 1)
    goto <bb 8>; [66.00%]
  else
    goto <bb 13>; [34.00%]

  <bb 8> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  if (targetKeyElementId_24(D) == 1)
    goto <bb 9>; [20.24%]
  else
    goto <bb 11>; [79.76%]

  <bb 9> [local count: 71717364]:
  # DEBUG BEGIN_STMT
  _1 = Crypto_aKeyElementList[u32CryptoKeyElementIdx_23].pCryptoElementArray;
  _2 = Crypto_aKeyElementList[u32CryptoKeyElementIdx_23].pu32CryptoElementActualSize;
  _3 = *_2;
  RetVal_34 = Crypto_Ipw_ImportKey (0, _1, _3, iftmp.19_16, u32CryptoTargetKeyElementIdx_26);
  # DEBUG RetVal => RetVal_34
  # DEBUG BEGIN_STMT
  RetVal.20_4 = (signed char) RetVal_34;
  if (RetVal.20_4 < 0)
    goto <bb 10>; [25.50%]
  else
    goto <bb 16>; [74.50%]

  <bb 10> [local count: 18287928]:
  # DEBUG BEGIN_STMT
  Crypto_ReportErrorToDet (15, RetVal_34);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 16>; [100.00%]

  <bb 11> [local count: 282617438]:
  # DEBUG BEGIN_STMT
  _5 = Crypto_aKeyElementList[u32CryptoTargetKeyElementIdx_26].pCryptoElementArray;
  if (_5 != 0B)
    goto <bb 12>; [53.47%]
  else
    goto <bb 16>; [46.53%]

  <bb 12> [local count: 151115544]:
  # DEBUG BEGIN_STMT
  _6 = Crypto_aKeyElementList[u32CryptoKeyElementIdx_23].pCryptoElementArray;
  _7 = Crypto_aKeyElementList[u32CryptoKeyElementIdx_23].pu32CryptoElementActualSize;
  _8 = *_7;
  Crypto_Util_Memcpy8 (_5, _6, _8);
  # DEBUG BEGIN_STMT
  _9 = Crypto_aKeyElementList[u32CryptoTargetKeyElementIdx_26].pu32CryptoElementActualSize;
  _10 = *_7;
  *_9 = _10;
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  goto <bb 16>; [100.00%]

  <bb 13> [local count: 182536110]:
  # DEBUG BEGIN_STMT
  if (targetKeyElementId_24(D) != 1)
    goto <bb 14>; [48.88%]
  else
    goto <bb 16>; [51.12%]

  <bb 14> [local count: 89223651]:
  # DEBUG BEGIN_STMT
  _11 = Crypto_aKeyElementList[u32CryptoTargetKeyElementIdx_26].pCryptoElementArray;
  _12 = Crypto_aKeyElementList[u32CryptoTargetKeyElementIdx_26].pu32CryptoElementActualSize;
  RetVal_29 = Crypto_Ipw_ExportKey (0, u32CryptoKeyElementIdx_23, 4294967295, _11, _12);
  # DEBUG RetVal => RetVal_29
  # DEBUG BEGIN_STMT
  RetVal.21_13 = (signed char) RetVal_29;
  if (RetVal.21_13 < 0)
    goto <bb 15>; [25.50%]
  else
    goto <bb 16>; [74.50%]

  <bb 15> [local count: 22752031]:
  # DEBUG BEGIN_STMT
  Crypto_ReportErrorToDet (15, RetVal_29);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1

  <bb 16> [local count: 1073741824]:
  # RetVal_14 = PHI <RetVal_27(6), 0(12), 1(15), 1(13), 1(10), RetVal_34(9), 1(11), RetVal_29(14)>
  # DEBUG RetVal => RetVal_14
  # DEBUG BEGIN_STMT
  return RetVal_14;

}



;; Function Crypto_KeyElementCopyPartial (Crypto_KeyElementCopyPartial, funcdef_no=33, decl_uid=6103, cgraph_uid=34, symbol_order=35)

Modification phase of node Crypto_KeyElementCopyPartial/35
Crypto_KeyElementCopyPartial (uint32 cryptoKeyId, uint32 keyElementId, uint32 keyElementSourceOffset, uint32 keyElementTargetOffset, uint32 keyElementCopyLength, uint32 targetCryptoKeyId, uint32 targetKeyElementId)
{
  uint8 * pCryptoTargetElementArray;
  const uint8 * pCryptoSourceElementArray;
  uint32 u32TargetCryptoKeyElementActualSize;
  uint32 u32CryptoTargetKeyElementIdx;
  uint32 u32CryptoKeyElementIdx;
  Std_ReturnType RetVal;
  uint32 * _1;
  uint8 * _2;
  const uint8 * _3;
  long unsigned int _4;
  long unsigned int iftmp.22_6;
  long unsigned int iftmp.23_7;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG u32PartitionId => 0
  # DEBUG BEGIN_STMT
  if (cryptoKeyId_9(D) == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870911]:

  <bb 4> [local count: 1073741823]:
  # iftmp.22_6 = PHI <0(2), 4294967295(3)>
  # DEBUG u32CryptoKeyIdx => iftmp.22_6
  # DEBUG BEGIN_STMT
  if (targetCryptoKeyId_10(D) == 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 536870911]:

  <bb 6> [local count: 1073741823]:
  # iftmp.23_7 = PHI <0(4), 4294967295(5)>
  # DEBUG u32TargetKeyIdx => iftmp.23_7
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  u32CryptoKeyElementIdx_14 = Crypto_Util_GetKeyElementIdx (iftmp.22_6, keyElementId_12(D));
  # DEBUG u32CryptoKeyElementIdx => u32CryptoKeyElementIdx_14
  # DEBUG BEGIN_STMT
  u32CryptoTargetKeyElementIdx_17 = Crypto_Util_GetKeyElementIdx (iftmp.23_7, targetKeyElementId_15(D));
  # DEBUG u32CryptoTargetKeyElementIdx => u32CryptoTargetKeyElementIdx_17
  # DEBUG BEGIN_STMT
  RetVal_21 = Crypto_CheckParamAndConfForKeyElementCopyPartial (u32CryptoKeyElementIdx_14, u32CryptoTargetKeyElementIdx_17, keyElementSourceOffset_18(D), keyElementTargetOffset_19(D), keyElementCopyLength_20(D));
  # DEBUG RetVal => RetVal_21
  # DEBUG BEGIN_STMT
  if (RetVal_21 == 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 7> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  _1 = Crypto_aKeyElementList[u32CryptoTargetKeyElementIdx_17].pu32CryptoElementActualSize;
  u32TargetCryptoKeyElementActualSize_22 = *_1;
  # DEBUG u32TargetCryptoKeyElementActualSize => u32TargetCryptoKeyElementActualSize_22
  # DEBUG BEGIN_STMT
  pCryptoSourceElementArray_23 = Crypto_aKeyElementList[u32CryptoKeyElementIdx_14].pCryptoElementArray;
  # DEBUG pCryptoSourceElementArray => pCryptoSourceElementArray_23
  # DEBUG BEGIN_STMT
  pCryptoTargetElementArray_24 = Crypto_aKeyElementList[u32CryptoTargetKeyElementIdx_17].pCryptoElementArray;
  # DEBUG pCryptoTargetElementArray => pCryptoTargetElementArray_24
  # DEBUG BEGIN_STMT
  if (keyElementId_12(D) != 1)
    goto <bb 8>; [66.00%]
  else
    goto <bb 12>; [34.00%]

  <bb 8> [local count: 354334802]:
  if (targetKeyElementId_15(D) != 1)
    goto <bb 9>; [48.88%]
  else
    goto <bb 12>; [51.12%]

  <bb 9> [local count: 173198851]:
  # DEBUG BEGIN_STMT
  _2 = pCryptoTargetElementArray_24 + keyElementTargetOffset_19(D);
  _3 = pCryptoSourceElementArray_23 + keyElementSourceOffset_18(D);
  Crypto_Util_Memcpy8 (_2, _3, keyElementCopyLength_20(D));
  # DEBUG BEGIN_STMT
  _4 = keyElementTargetOffset_19(D) + keyElementCopyLength_20(D);
  if (_4 > u32TargetCryptoKeyElementActualSize_22)
    goto <bb 10>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 10> [local count: 86599426]:
  # DEBUG BEGIN_STMT
  *_1 = _4;

  <bb 12> [local count: 1073741824]:
  # RetVal_5 = PHI <RetVal_21(6), 0(10), 1(7), 1(8), 0(9)>
  # DEBUG u8ServiceId => NULL
  # DEBUG u8Error => NULL
  # DEBUG RetVal => RetVal_5
  # DEBUG BEGIN_STMT
  return RetVal_5;

}



;; Function Crypto_KeyCopy (Crypto_KeyCopy, funcdef_no=34, decl_uid=6106, cgraph_uid=35, symbol_order=36)

Modification phase of node Crypto_KeyCopy/36
Crypto_KeyCopy (uint32 cryptoKeyId, uint32 targetCryptoKeyId)
{
  Std_ReturnType RetVal;
  long unsigned int _1;
  long unsigned int _2;
  signed char RetVal.26_3;
  long unsigned int iftmp.24_5;
  long unsigned int iftmp.25_6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG u32PartitionId => 0
  # DEBUG BEGIN_STMT
  if (cryptoKeyId_8(D) == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:

  <bb 4> [local count: 1073741824]:
  # iftmp.24_5 = PHI <0(2), 4294967295(3)>
  # DEBUG u32CryptoKeyIdx => iftmp.24_5
  # DEBUG BEGIN_STMT
  if (targetCryptoKeyId_9(D) == 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 536870913]:

  <bb 6> [local count: 1073741824]:
  # iftmp.25_6 = PHI <0(4), 4294967295(5)>
  # DEBUG u32TargetKeyIdx => iftmp.25_6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Crypto_aKeyList[iftmp.24_5].u32NumCryptoKeyElements;
  _2 = Crypto_aKeyList[iftmp.25_6].u32NumCryptoKeyElements;
  if (_1 > _2)
    goto <bb 11>; [67.00%]
  else
    goto <bb 7>; [33.00%]

  <bb 7> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  RetVal_12 = Crypto_CheckKeyCopyValid (iftmp.24_5, iftmp.25_6);
  # DEBUG RetVal => RetVal_12
  # DEBUG BEGIN_STMT
  if (RetVal_12 == 129)
    goto <bb 11>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 8> [local count: 233860969]:
  # DEBUG RetVal => RetVal_12
  # DEBUG BEGIN_STMT
  if (RetVal_12 == 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 11>; [67.00%]

  <bb 9> [local count: 77174120]:
  # DEBUG BEGIN_STMT
  Crypto_Util_GetKeyElementIdx (iftmp.24_5, 1);
  # DEBUG u32KeyMaterialElementIndex => NULL
  # DEBUG BEGIN_STMT
  Crypto_Util_GetKeyElementIdx (iftmp.25_6, 1);
  # DEBUG u32TargetKeyMaterialElementIndex => NULL
  # DEBUG BEGIN_STMT
  # DEBUG D#13 => 0
  # DEBUG D#14 => NULL
  # DEBUG D#15 => NULL
  RetVal_16 = Crypto_CopyKeyElements.isra.0 (iftmp.24_5, iftmp.25_6);
  # DEBUG RetVal => RetVal_16
  # DEBUG BEGIN_STMT
  RetVal.26_3 = (signed char) RetVal_16;
  if (RetVal.26_3 < 0)
    goto <bb 10>; [25.50%]
  else
    goto <bb 11>; [74.50%]

  <bb 10> [local count: 19679401]:
  # DEBUG BEGIN_STMT
  Crypto_ReportErrorToDet (16, RetVal_16);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1

  <bb 11> [local count: 1073741824]:
  # RetVal_4 = PHI <RetVal_12(8), RetVal_16(9), 1(10), 1(6), 1(7)>
  # DEBUG u8ServiceId => NULL
  # DEBUG u8Error => NULL
  # DEBUG RetVal => RetVal_4
  # DEBUG BEGIN_STMT
  return RetVal_4;

}



;; Function Crypto_KeyElementIdsGet (Crypto_KeyElementIdsGet, funcdef_no=35, decl_uid=6110, cgraph_uid=36, symbol_order=37)

Modification phase of node Crypto_KeyElementIdsGet/37
Crypto_KeyElementIdsGet (uint32 cryptoKeyId, uint32 * keyElementIdsPtr, uint32 * keyElementIdsLengthPtr)
{
  uint32 u32Index;
  uint32 * pKeyElementIds;
  long unsigned int _1;
  const uint32 * _2;
  long unsigned int _3;
  const uint32 * _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int iftmp.28_9;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG pKeyElementIds => keyElementIdsPtr_11(D)
  # DEBUG BEGIN_STMT
  if (cryptoKeyId_12(D) == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 59055800]:

  <bb 4> [local count: 118111600]:
  # iftmp.28_9 = PHI <0(2), 4294967295(3)>
  # DEBUG u32CryptoKeyIdx => iftmp.28_9
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Crypto_aKeyList[iftmp.28_9].u32NumCryptoKeyElements;
  *keyElementIdsLengthPtr_14(D) = _1;
  # DEBUG BEGIN_STMT
  # DEBUG u32Index => 0
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  _2 = Crypto_aKeyList[iftmp.28_9].pCryptoKeyElementList;
  _3 = u32Index_8 * 4;
  _4 = _2 + _3;
  _5 = *_4;
  _6 = Crypto_aKeyElementList[_5].u32CryptoKeyElementId;
  *pKeyElementIds_7 = _6;
  # DEBUG BEGIN_STMT
  pKeyElementIds_17 = pKeyElementIds_7 + 4;
  # DEBUG pKeyElementIds => pKeyElementIds_17
  # DEBUG BEGIN_STMT
  u32Index_18 = u32Index_8 + 1;
  # DEBUG u32Index => u32Index_18

  <bb 6> [local count: 1073741824]:
  # pKeyElementIds_7 = PHI <keyElementIdsPtr_11(D)(4), pKeyElementIds_17(5)>
  # u32Index_8 = PHI <0(4), u32Index_18(5)>
  # DEBUG u32Index => u32Index_8
  # DEBUG pKeyElementIds => pKeyElementIds_7
  # DEBUG BEGIN_STMT
  if (_1 > u32Index_8)
    goto <bb 5>; [89.00%]
  else
    goto <bb 7>; [11.00%]

  <bb 7> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Crypto_RandomSeed (Crypto_RandomSeed, funcdef_no=36, decl_uid=6114, cgraph_uid=37, symbol_order=38)

Modification phase of node Crypto_RandomSeed/38
Crypto_RandomSeed (uint32 cryptoKeyId, const uint8 * seedPtr, uint32 seedLength)
{
  Std_ReturnType RetVal;
  signed char RetVal.30_1;
  long unsigned int iftmp.29_3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG u32PartitionId => 0
  # DEBUG BEGIN_STMT
  if (cryptoKeyId_5(D) == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:

  <bb 4> [local count: 1073741824]:
  # iftmp.29_3 = PHI <0(2), 4294967295(3)>
  # DEBUG u32CryptoKeyIdx => iftmp.29_3
  # DEBUG BEGIN_STMT
  RetVal_8 = Crypto_GetNonDetErrorsForRandomSeed (iftmp.29_3);
  # DEBUG RetVal => RetVal_8
  # DEBUG BEGIN_STMT
  if (RetVal_8 == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 5> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  RetVal_12 = Crypto_Ipw_RandomSeed (0, iftmp.29_3, seedPtr_9(D), seedLength_10(D));
  # DEBUG RetVal => RetVal_12
  # DEBUG BEGIN_STMT
  RetVal.30_1 = (signed char) RetVal_12;
  if (RetVal.30_1 < 0)
    goto <bb 6>; [25.50%]
  else
    goto <bb 7>; [74.50%]

  <bb 6> [local count: 90355375]:
  # DEBUG BEGIN_STMT
  Crypto_ReportErrorToDet (13, RetVal_12);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1

  <bb 7> [local count: 1073741824]:
  # RetVal_2 = PHI <RetVal_8(4), RetVal_12(5), 1(6)>
  # DEBUG RetVal => RetVal_2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_2;

}



;; Function Crypto_KeyGenerate (Crypto_KeyGenerate, funcdef_no=37, decl_uid=6116, cgraph_uid=38, symbol_order=39)

Modification phase of node Crypto_KeyGenerate/39
Crypto_KeyGenerate (uint32 cryptoKeyId)
{
  Std_ReturnType RetVal;
  signed char RetVal.32_1;
  long unsigned int iftmp.31_3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG u32PartitionId => 0
  # DEBUG BEGIN_STMT
  if (cryptoKeyId_5(D) == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:

  <bb 4> [local count: 1073741824]:
  # iftmp.31_3 = PHI <0(2), 4294967295(3)>
  # DEBUG u32CryptoKeyIdx => iftmp.31_3
  # DEBUG BEGIN_STMT
  RetVal_8 = Crypto_GetNonDetErrorsForKeyGenerate (iftmp.31_3);
  # DEBUG RetVal => RetVal_8
  # DEBUG BEGIN_STMT
  if (RetVal_8 == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 5> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  RetVal_10 = Crypto_Ipw_KeyGenerate (0, iftmp.31_3);
  # DEBUG RetVal => RetVal_10
  # DEBUG BEGIN_STMT
  RetVal.32_1 = (signed char) RetVal_10;
  if (RetVal.32_1 < 0)
    goto <bb 6>; [25.50%]
  else
    goto <bb 7>; [74.50%]

  <bb 6> [local count: 90355375]:
  # DEBUG BEGIN_STMT
  Crypto_ReportErrorToDet (7, RetVal_10);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1

  <bb 7> [local count: 1073741824]:
  # RetVal_2 = PHI <RetVal_8(4), RetVal_10(5), 1(6)>
  # DEBUG RetVal => RetVal_2
  # DEBUG BEGIN_STMT
  return RetVal_2;

}



;; Function Crypto_KeyDerive (Crypto_KeyDerive, funcdef_no=38, decl_uid=6119, cgraph_uid=39, symbol_order=40)

Modification phase of node Crypto_KeyDerive/40
Crypto_KeyDerive (uint32 cryptoKeyId, uint32 targetCryptoKeyId)
{
  Std_ReturnType RetVal;
  signed char RetVal.35_1;
  long unsigned int iftmp.33_3;
  long unsigned int iftmp.34_4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG u32PartitionId => 0
  # DEBUG BEGIN_STMT
  if (cryptoKeyId_6(D) == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:

  <bb 4> [local count: 1073741824]:
  # iftmp.33_3 = PHI <0(2), 4294967295(3)>
  # DEBUG u32CryptoKeyIdx => iftmp.33_3
  # DEBUG BEGIN_STMT
  if (targetCryptoKeyId_7(D) == 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 536870913]:

  <bb 6> [local count: 1073741824]:
  # iftmp.34_4 = PHI <0(4), 4294967295(5)>
  # DEBUG u32TargetKeyIdx => iftmp.34_4
  # DEBUG BEGIN_STMT
  RetVal_10 = Crypto_GetNonDetErrorsForKeyDerive (iftmp.33_3, iftmp.34_4);
  # DEBUG RetVal => RetVal_10
  # DEBUG BEGIN_STMT
  if (RetVal_10 == 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 9>; [67.00%]

  <bb 7> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  RetVal_12 = Crypto_Ipw_KeyDerive (0, iftmp.33_3, iftmp.34_4);
  # DEBUG RetVal => RetVal_12
  # DEBUG BEGIN_STMT
  RetVal.35_1 = (signed char) RetVal_12;
  if (RetVal.35_1 < 0)
    goto <bb 8>; [25.50%]
  else
    goto <bb 9>; [74.50%]

  <bb 8> [local count: 90355375]:
  # DEBUG BEGIN_STMT
  Crypto_ReportErrorToDet (8, RetVal_12);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1

  <bb 9> [local count: 1073741824]:
  # RetVal_2 = PHI <RetVal_10(6), RetVal_12(7), 1(8)>
  # DEBUG RetVal => RetVal_2
  # DEBUG BEGIN_STMT
  return RetVal_2;

}



;; Function Crypto_KeyExchangeCalcPubVal (Crypto_KeyExchangeCalcPubVal, funcdef_no=39, decl_uid=6123, cgraph_uid=40, symbol_order=41)

Modification phase of node Crypto_KeyExchangeCalcPubVal/41
Crypto_KeyExchangeCalcPubVal (uint32 cryptoKeyId, uint8 * publicValuePtr, uint32 * publicValueLengthPtr)
{
  Std_ReturnType RetVal;
  signed char RetVal.37_1;
  long unsigned int iftmp.36_3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG u32PartitionId => 0
  # DEBUG BEGIN_STMT
  if (cryptoKeyId_5(D) == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:

  <bb 4> [local count: 1073741824]:
  # iftmp.36_3 = PHI <0(2), 4294967295(3)>
  # DEBUG u32CryptoKeyIdx => iftmp.36_3
  # DEBUG BEGIN_STMT
  # DEBUG D#18 => publicValuePtr_7(D)
  RetVal_10 = Crypto_GetNonDetErrorsForKeyExchCalcPubVal.isra.0 (9, iftmp.36_3, publicValueLengthPtr_8(D));
  # DEBUG RetVal => RetVal_10
  # DEBUG BEGIN_STMT
  if (RetVal_10 == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 5> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  RetVal_12 = Crypto_CopyDataFromPubValKeyElementToUser (0, iftmp.36_3, publicValuePtr_7(D), publicValueLengthPtr_8(D));
  # DEBUG RetVal => RetVal_12
  # DEBUG BEGIN_STMT
  RetVal.37_1 = (signed char) RetVal_12;
  if (RetVal.37_1 < 0)
    goto <bb 6>; [25.50%]
  else
    goto <bb 7>; [74.50%]

  <bb 6> [local count: 90355375]:
  # DEBUG BEGIN_STMT
  Crypto_ReportErrorToDet (9, RetVal_12);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1

  <bb 7> [local count: 1073741824]:
  # RetVal_2 = PHI <RetVal_10(4), RetVal_12(5), 1(6)>
  # DEBUG RetVal => RetVal_2
  # DEBUG BEGIN_STMT
  return RetVal_2;

}



;; Function Crypto_KeyExchangeCalcSecret (Crypto_KeyExchangeCalcSecret, funcdef_no=40, decl_uid=6127, cgraph_uid=41, symbol_order=42)

Modification phase of node Crypto_KeyExchangeCalcSecret/42
Crypto_KeyExchangeCalcSecret (uint32 cryptoKeyId, const uint8 * partnerPublicValuePtr, uint32 partnerPublicValueLength)
{
  Std_ReturnType RetVal;
  signed char RetVal.39_1;
  long unsigned int iftmp.38_3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG u32PartitionId => 0
  # DEBUG BEGIN_STMT
  if (cryptoKeyId_5(D) == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:

  <bb 4> [local count: 1073741824]:
  # iftmp.38_3 = PHI <0(2), 4294967295(3)>
  # DEBUG u32CryptoKeyIdx => iftmp.38_3
  # DEBUG BEGIN_STMT
  RetVal_8 = Crypto_GetNonDetErrorsForKeyExchCalcSecret (iftmp.38_3);
  # DEBUG RetVal => RetVal_8
  # DEBUG BEGIN_STMT
  if (RetVal_8 == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 5> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  RetVal_12 = Crypto_Ipw_CalcSecret (0, iftmp.38_3, partnerPublicValuePtr_9(D), partnerPublicValueLength_10(D));
  # DEBUG RetVal => RetVal_12
  # DEBUG BEGIN_STMT
  RetVal.39_1 = (signed char) RetVal_12;
  if (RetVal.39_1 < 0)
    goto <bb 6>; [25.50%]
  else
    goto <bb 7>; [74.50%]

  <bb 6> [local count: 90355375]:
  # DEBUG BEGIN_STMT
  Crypto_ReportErrorToDet (10, RetVal_12);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1

  <bb 7> [local count: 1073741824]:
  # RetVal_2 = PHI <RetVal_8(4), RetVal_12(5), 1(6)>
  # DEBUG RetVal => RetVal_2
  # DEBUG BEGIN_STMT
  return RetVal_2;

}



;; Function Crypto_CertificateParse (Crypto_CertificateParse, funcdef_no=41, decl_uid=6129, cgraph_uid=42, symbol_order=43)

Modification phase of node Crypto_CertificateParse/43
Crypto_CertificateParse (uint32 cryptoKeyId)
{
  Std_ReturnType RetVal;
  signed char RetVal.41_1;
  long unsigned int iftmp.40_3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG u32PartitionId => 0
  # DEBUG BEGIN_STMT
  if (cryptoKeyId_4(D) == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:

  <bb 4> [local count: 1073741824]:
  # iftmp.40_3 = PHI <0(2), 4294967295(3)>
  # DEBUG u32CryptoKeyIdx => iftmp.40_3
  # DEBUG BEGIN_STMT
  RetVal_7 = Crypto_Ipw_CertificateParse (0, iftmp.40_3);
  # DEBUG RetVal => RetVal_7
  # DEBUG BEGIN_STMT
  RetVal.41_1 = (signed char) RetVal_7;
  if (RetVal.41_1 < 0)
    goto <bb 5>; [41.00%]
  else
    goto <bb 6>; [59.00%]

  <bb 5> [local count: 440234148]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1

  <bb 6> [local count: 1073741824]:
  # RetVal_2 = PHI <RetVal_7(4), 1(5)>
  # DEBUG RetVal => RetVal_2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_2;

}



;; Function Crypto_CertificateVerify (Crypto_CertificateVerify, funcdef_no=42, decl_uid=6133, cgraph_uid=43, symbol_order=44)

Modification phase of node Crypto_CertificateVerify/44
Crypto_CertificateVerify (uint32 cryptoKeyId, uint32 verifyCryptoKeyId, Crypto_VerifyResultType * verifyPtr)
{
  Std_ReturnType RetVal;
  signed char RetVal.44_1;
  long unsigned int iftmp.42_3;
  long unsigned int iftmp.43_4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG u32PartitionId => 0
  # DEBUG BEGIN_STMT
  if (cryptoKeyId_5(D) == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:

  <bb 4> [local count: 1073741824]:
  # iftmp.42_3 = PHI <0(2), 4294967295(3)>
  # DEBUG u32CryptoKeyIdx => iftmp.42_3
  # DEBUG BEGIN_STMT
  if (verifyCryptoKeyId_6(D) == 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 536870913]:

  <bb 6> [local count: 1073741824]:
  # iftmp.43_4 = PHI <0(4), 4294967295(5)>
  # DEBUG u32VerifyCryptoKeyIdx => iftmp.43_4
  # DEBUG BEGIN_STMT
  RetVal_10 = Crypto_Ipw_CertificateVerify (0, iftmp.42_3, iftmp.43_4, verifyPtr_8(D));
  # DEBUG RetVal => RetVal_10
  # DEBUG BEGIN_STMT
  RetVal.44_1 = (signed char) RetVal_10;
  if (RetVal.44_1 < 0)
    goto <bb 7>; [41.00%]
  else
    goto <bb 8>; [59.00%]

  <bb 7> [local count: 440234148]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1

  <bb 8> [local count: 1073741824]:
  # RetVal_2 = PHI <RetVal_10(6), 1(7)>
  # DEBUG RetVal => RetVal_2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_2;

}



;; Function Crypto_MainFunction (Crypto_MainFunction, funcdef_no=43, decl_uid=6067, cgraph_uid=44, symbol_order=45)

Modification phase of node Crypto_MainFunction/45
Crypto_MainFunction ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG u32PartitionId => 0
  # DEBUG BEGIN_STMT
  Crypto_Ipw_MainFunction (0);
  return;

}


