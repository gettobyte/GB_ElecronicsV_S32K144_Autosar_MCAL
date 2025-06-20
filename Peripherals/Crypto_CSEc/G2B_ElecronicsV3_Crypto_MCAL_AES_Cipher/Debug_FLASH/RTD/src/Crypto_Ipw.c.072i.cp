
IPA constant propagation start:
Determining dynamic type for call: RetVal_14 = Crypto_Ipw_SheLoadPlainKey (pKey_12(D));
  Starting walk at: RetVal_14 = Crypto_Ipw_SheLoadPlainKey (pKey_12(D));
  instance pointer: pKey_12(D)  Outer instance pointer: pKey_12(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:u32CipherProofKeyElemIdx_11 = Crypto_Util_GetKeyElementIdx (u32CryptoKeyIdx_7(D), 6);
  Function call may change dynamic type:u32MacProofKeyElemIdx_9 = Crypto_Util_GetKeyElementIdx (u32CryptoKeyIdx_7(D), 2);
Determining dynamic type for call: RetVal_16 = Crypto_Ipw_SheLoadEncryptedKey (eKeyId_6, pKey_12(D), u32MacProofKeyElemIdx_9, u32CipherProofKeyElemIdx_11);
  Starting walk at: RetVal_16 = Crypto_Ipw_SheLoadEncryptedKey (eKeyId_6, pKey_12(D), u32MacProofKeyElemIdx_9, u32CipherProofKeyElemIdx_11);
  instance pointer: pKey_12(D)  Outer instance pointer: pKey_12(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:u32CipherProofKeyElemIdx_11 = Crypto_Util_GetKeyElementIdx (u32CryptoKeyIdx_7(D), 6);
  Function call may change dynamic type:u32MacProofKeyElemIdx_9 = Crypto_Util_GetKeyElementIdx (u32CryptoKeyIdx_7(D), 2);
Determining dynamic type for call: RetVal_14 = Crypto_Ipw_ProcessOperation (pJob_12(D));
  Starting walk at: RetVal_14 = Crypto_Ipw_ProcessOperation (pJob_12(D));
  instance pointer: pJob_12(D)  Outer instance pointer: pJob_12(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RetVal_10 = Crypto_Ipw_Random (pJob_7(D));
  Starting walk at: RetVal_10 = Crypto_Ipw_Random (pJob_7(D));
  instance pointer: pJob_7(D)  Outer instance pointer: pJob_7(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RetVal_12 = Crypto_Ipw_EncDec (pJob_7(D), _3);
  Starting walk at: RetVal_12 = Crypto_Ipw_EncDec (pJob_7(D), _3);
  instance pointer: pJob_7(D)  Outer instance pointer: pJob_7(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RetVal_14 = Crypto_Ipw_MacVerify (pJob_7(D));
  Starting walk at: RetVal_14 = Crypto_Ipw_MacVerify (pJob_7(D));
  instance pointer: pJob_7(D)  Outer instance pointer: pJob_7(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RetVal_16 = Crypto_Ipw_MacGenerate (pJob_7(D));
  Starting walk at: RetVal_16 = Crypto_Ipw_MacGenerate (pJob_7(D));
  instance pointer: pJob_7(D)  Outer instance pointer: pJob_7(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: StdRetVal_12 = Crypto_Ipw_ProcessOperation (pJob_10);
  Starting walk at: StdRetVal_12 = Crypto_Ipw_ProcessOperation (pJob_10);
  instance pointer: pJob_10  Outer instance pointer: pJob_10 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Crypto_Ipw_FillVerifyPtr (pCallbackParam_4(D), ErrCode_13(D));
  Starting walk at: Crypto_Ipw_FillVerifyPtr (pCallbackParam_4(D), ErrCode_13(D));
  instance pointer: pCallbackParam_4(D)  Outer instance pointer: pCallbackParam_4(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Crypto_Ipw_PushJobFromCdoQueueToCsec ();
Determining dynamic type for call: Crypto_Ipw_CopyOutputResult (pOutputPtr_8, pOutputLength_9, u32ResultLength_7);
  Starting walk at: Crypto_Ipw_CopyOutputResult (pOutputPtr_8, pOutputLength_9, u32ResultLength_7);
  instance pointer: pOutputPtr_8  Outer instance pointer: pOutputPtr_8 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Crypto_Ipw_FillVerifyPtr (pCallbackParam_4(D), ErrCode_13(D));
  Function call may change dynamic type:Crypto_Ipw_PushJobFromCdoQueueToCsec ();
Determining dynamic type for call: Crypto_Ipw_CopyOutputResult (pOutputPtr_8, pOutputLength_9, u32ResultLength_7);
  Starting walk at: Crypto_Ipw_CopyOutputResult (pOutputPtr_8, pOutputLength_9, u32ResultLength_7);
  instance pointer: pOutputLength_9  Outer instance pointer: pOutputLength_9 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Crypto_Ipw_FillVerifyPtr (pCallbackParam_4(D), ErrCode_13(D));
  Function call may change dynamic type:Crypto_Ipw_PushJobFromCdoQueueToCsec ();
Determining dynamic type for call: Crypto_Ipw_FillVerifyPtr.part.0 (pCryptoJob_4(D), CsecResponse_6(D));
  Starting walk at: Crypto_Ipw_FillVerifyPtr.part.0 (pCryptoJob_4(D), CsecResponse_6(D));
  instance pointer: pCryptoJob_4(D)  Outer instance pointer: pCryptoJob_4(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RetVal_17 = Crypto_Ipw_EncDecEcb (pJob_11(D), eService_15(D), eKeyId_14);
  Starting walk at: RetVal_17 = Crypto_Ipw_EncDecEcb (pJob_11(D), eService_15(D), eKeyId_14);
  instance pointer: pJob_11(D)  Outer instance pointer: pJob_11(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:u32KeyMaterialKeyElemIdx_13 = Crypto_Util_GetKeyElementIdx (iftmp.2_8, 1);
Determining dynamic type for call: RetVal_21 = Crypto_Ipw_EncDecCbc (pJob_11(D), eService_15(D), eKeyId_14, _6);
  Starting walk at: RetVal_21 = Crypto_Ipw_EncDecCbc (pJob_11(D), eService_15(D), eKeyId_14, _6);
  instance pointer: pJob_11(D)  Outer instance pointer: pJob_11(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:u32CipherIvKeyElemIdx_19 = Crypto_Util_GetKeyElementIdx (iftmp.2_8, 5);
  Function call may change dynamic type:u32KeyMaterialKeyElemIdx_13 = Crypto_Util_GetKeyElementIdx (iftmp.2_8, 1);
Determining dynamic type for call: RetVal_21 = Crypto_Ipw_EncDecCbc (pJob_11(D), eService_15(D), eKeyId_14, _6);
  Starting walk at: RetVal_21 = Crypto_Ipw_EncDecCbc (pJob_11(D), eService_15(D), eKeyId_14, _6);
  instance pointer: _6  Outer instance pointer: _6 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:u32CipherIvKeyElemIdx_19 = Crypto_Util_GetKeyElementIdx (iftmp.2_8, 5);
  Function call may change dynamic type:u32KeyMaterialKeyElemIdx_13 = Crypto_Util_GetKeyElementIdx (iftmp.2_8, 1);
Determining dynamic type for call: Crypto_Ipw_FillVerifyPtr (pJob_14(D), CsecResponse_26);
  Starting walk at: Crypto_Ipw_FillVerifyPtr (pJob_14(D), CsecResponse_26);
  instance pointer: pJob_14(D)  Outer instance pointer: pJob_14(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:CsecResponse_26 = Csec_Ip_VerifyMac (&CsecIpReq, eKeyId_20, _6, u32InputBitsLength_16, _7, u16MacBitLen_19, &Crypto_Ipw_State.bMacVerificationSuccessful);
  Function call may change dynamic type:u32KeyMaterialKeyElemIdx_18 = Crypto_Util_GetKeyElementIdx (iftmp.1_9, 1);
Determining dynamic type for call: Crypto_Ipw_CopyOutputResult (pOutputPtr_20, pOutputLength_21, u32ResultLength_19);
  Starting walk at: Crypto_Ipw_CopyOutputResult (pOutputPtr_20, pOutputLength_21, u32ResultLength_19);
  instance pointer: pOutputPtr_20  Outer instance pointer: pOutputPtr_20 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:CsecResponse_28 = Csec_Ip_GenerateMac (&CsecIpReq, eKeyId_22, _7, u32InputBitsLength_16, &u8aOutputResultTemp);
  Function call may change dynamic type:u32KeyMaterialKeyElemIdx_18 = Crypto_Util_GetKeyElementIdx (iftmp.0_9, 1);
Determining dynamic type for call: Crypto_Ipw_CopyOutputResult (pOutputPtr_20, pOutputLength_21, u32ResultLength_19);
  Starting walk at: Crypto_Ipw_CopyOutputResult (pOutputPtr_20, pOutputLength_21, u32ResultLength_19);
  instance pointer: pOutputLength_21  Outer instance pointer: pOutputLength_21 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:CsecResponse_28 = Csec_Ip_GenerateMac (&CsecIpReq, eKeyId_22, _7, u32InputBitsLength_16, &u8aOutputResultTemp);
  Function call may change dynamic type:u32KeyMaterialKeyElemIdx_18 = Crypto_Util_GetKeyElementIdx (iftmp.0_9, 1);
Determining dynamic type for call: Crypto_Ipw_CopyOutputResult.part.0 (pOutputPtr_5(D), pOutputLength_3(D));
  Starting walk at: Crypto_Ipw_CopyOutputResult.part.0 (pOutputPtr_5(D), pOutputLength_3(D));
  instance pointer: pOutputPtr_5(D)  Outer instance pointer: pOutputPtr_5(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Crypto_Ipw_CopyOutputResult.part.0 (pOutputPtr_5(D), pOutputLength_3(D));
  Starting walk at: Crypto_Ipw_CopyOutputResult.part.0 (pOutputPtr_5(D), pOutputLength_3(D));
  instance pointer: pOutputLength_3(D)  Outer instance pointer: pOutputLength_3(D) offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Crypto_Ipw_CopyOutputResult.part.0/69:
  Jump functions of caller  Crypto_Ipw_FillVerifyPtr.part.0/68:
  Jump functions of caller  Csec_Ip_MpCompress/67:
  Jump functions of caller  Csec_Ip_DbgAuth/66:
  Jump functions of caller  Csec_Ip_DbgChal/65:
  Jump functions of caller  Csec_Ip_GetId/64:
  Jump functions of caller  Csec_Ip_GetStatus/63:
  Jump functions of caller  Csec_Ip_BootFailure/62:
  Jump functions of caller  Csec_Ip_BootOk/61:
  Jump functions of caller  Csec_Ip_SetSynchronousCmdTimeout/60:
  Jump functions of caller  Csec_Ip_MainFunction/59:
  Jump functions of caller  Csec_Ip_ExtendSeed/58:
  Jump functions of caller  Csec_Ip_ExportRamKey/57:
  Jump functions of caller  Csec_Ip_LoadPlainKey/56:
  Jump functions of caller  Csec_Ip_LoadKey/55:
  Jump functions of caller  Crypto_Util_DequeueJob/54:
  Jump functions of caller  Csec_Ip_CancelCommand/53:
  Jump functions of caller  Csec_Ip_GenerateRnd/52:
  Jump functions of caller  Csec_Ip_DecryptEcb/51:
  Jump functions of caller  Csec_Ip_EncryptEcb/50:
  Jump functions of caller  Csec_Ip_DecryptCbc/49:
  Jump functions of caller  Csec_Ip_EncryptCbc/48:
  Jump functions of caller  Csec_Ip_VerifyMac/47:
  Jump functions of caller  Crypto_Util_Memcpy8/46:
  Jump functions of caller  Crypto_Util_DequeueHeadJob/45:
  Jump functions of caller  CryIf_CallbackNotification/42:
  Jump functions of caller  Csec_Ip_GenerateMac/41:
  Jump functions of caller  Crypto_Util_GetKeyElementIdx/39:
  Jump functions of caller  Crypto_Util_QueueJob/38:
  Jump functions of caller  Csec_Ip_InitRng/36:
  Jump functions of caller  Csec_Ip_Init/35:
  Jump functions of caller  Crypto_Ipw_SheMPCompression/34:
    callsite  Crypto_Ipw_SheMPCompression/34 -> Crypto_Ipw_TranslateCsecResponse/14 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Crypto_Ipw_SheDebugAuth/33:
    callsite  Crypto_Ipw_SheDebugAuth/33 -> Crypto_Ipw_TranslateCsecResponse/14 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Crypto_Ipw_SheDebugChal/32:
    callsite  Crypto_Ipw_SheDebugChal/32 -> Crypto_Ipw_TranslateCsecResponse/14 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Crypto_Ipw_SheGetId/31:
    callsite  Crypto_Ipw_SheGetId/31 -> Crypto_Ipw_TranslateCsecResponse/14 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Crypto_Ipw_SheGetStatus/30:
  Jump functions of caller  Crypto_Ipw_SheSetBootStatus/29:
    callsite  Crypto_Ipw_SheSetBootStatus/29 -> Crypto_Ipw_TranslateCsecResponse/14 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Crypto_Ipw_SetSynchronousRequestsTimeout/28:
  Jump functions of caller  Crypto_Ipw_MainFunction/27:
  Jump functions of caller  Crypto_Ipw_CertificateVerify/26:
  Jump functions of caller  Crypto_Ipw_CertificateParse/25:
  Jump functions of caller  Crypto_Ipw_CalcSecret/24:
  Jump functions of caller  Crypto_Ipw_KeyDerive/23:
  Jump functions of caller  Crypto_Ipw_KeyGenerate/22:
  Jump functions of caller  Crypto_Ipw_RandomSeed/21:
    callsite  Crypto_Ipw_RandomSeed/21 -> Crypto_Ipw_TranslateCsecResponse/14 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Crypto_Ipw_ExportKey/20:
    callsite  Crypto_Ipw_ExportKey/20 -> Crypto_Ipw_TranslateCsecResponse/14 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Crypto_Ipw_ImportKey/19:
    callsite  Crypto_Ipw_ImportKey/19 -> Crypto_Ipw_SheLoadPlainKey/3 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Crypto_Ipw_ImportKey/19 -> Crypto_Ipw_SheLoadEncryptedKey/2 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Crypto_Ipw_CancelJob/18:
  Jump functions of caller  Crypto_Ipw_ProcessJob/17:
    callsite  Crypto_Ipw_ProcessJob/17 -> Crypto_Ipw_ProcessOperation/13 : 
       param 0: PASS THROUGH: 2, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Crypto_Ipw_Init/16:
    callsite  Crypto_Ipw_Init/16 -> Crypto_Ipw_TranslateCsecResponse/14 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Crypto_Ipw_Random/15:
    callsite  Crypto_Ipw_Random/15 -> Crypto_Ipw_TranslateCsecResponse/14 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Crypto_Ipw_TranslateCsecResponse/14:
  Jump functions of caller  Crypto_Ipw_ProcessOperation/13:
    callsite  Crypto_Ipw_ProcessOperation/13 -> Crypto_Ipw_Random/15 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Crypto_Ipw_ProcessOperation/13 -> Crypto_Ipw_EncDec/7 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Crypto_Ipw_ProcessOperation/13 -> Crypto_Ipw_MacVerify/6 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Crypto_Ipw_ProcessOperation/13 -> Crypto_Ipw_MacGenerate/5 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Crypto_Ipw_PushJobFromCdoQueueToCsec/12:
    callsite  Crypto_Ipw_PushJobFromCdoQueueToCsec/12 -> Crypto_Ipw_ProcessOperation/13 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Crypto_Ipw_ProcessAsyncCsecResponse/11:
    callsite  Crypto_Ipw_ProcessAsyncCsecResponse/11 -> Crypto_Ipw_CopyOutputResult/4 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Crypto_Ipw_ProcessAsyncCsecResponse/11 -> Crypto_Ipw_FillVerifyPtr/10 : 
       param 0: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  Crypto_Ipw_ProcessAsyncCsecResponse/11 -> Crypto_Ipw_TranslateCsecResponse/14 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  Crypto_Ipw_ProcessAsyncCsecResponse/11 -> Crypto_Ipw_PushJobFromCdoQueueToCsec/12 : 
  Jump functions of caller  Crypto_Ipw_FillVerifyPtr/10:
    callsite  Crypto_Ipw_FillVerifyPtr/10 -> Crypto_Ipw_FillVerifyPtr.part.0/68 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Crypto_Ipw_EncDecCbc/9:
    callsite  Crypto_Ipw_EncDecCbc/9 -> Crypto_Ipw_TranslateCsecResponse/14 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Crypto_Ipw_EncDecEcb/8:
    callsite  Crypto_Ipw_EncDecEcb/8 -> Crypto_Ipw_TranslateCsecResponse/14 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Crypto_Ipw_EncDec/7:
    callsite  Crypto_Ipw_EncDec/7 -> Crypto_Ipw_EncDecEcb/8 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Crypto_Ipw_EncDec/7 -> Crypto_Ipw_EncDecCbc/9 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Crypto_Ipw_MacVerify/6:
    callsite  Crypto_Ipw_MacVerify/6 -> Crypto_Ipw_TranslateCsecResponse/14 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  Crypto_Ipw_MacVerify/6 -> Crypto_Ipw_FillVerifyPtr/10 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Crypto_Ipw_MacGenerate/5:
    callsite  Crypto_Ipw_MacGenerate/5 -> Crypto_Ipw_TranslateCsecResponse/14 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  Crypto_Ipw_MacGenerate/5 -> Crypto_Ipw_CopyOutputResult/4 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Crypto_Ipw_CopyOutputResult/4:
    callsite  Crypto_Ipw_CopyOutputResult/4 -> Crypto_Ipw_CopyOutputResult.part.0/69 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Crypto_Ipw_SheLoadPlainKey/3:
    callsite  Crypto_Ipw_SheLoadPlainKey/3 -> Crypto_Ipw_TranslateCsecResponse/14 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Crypto_Ipw_SheLoadEncryptedKey/2:
    callsite  Crypto_Ipw_SheLoadEncryptedKey/2 -> Crypto_Ipw_TranslateCsecResponse/14 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR

 Propagating constants:

Not considering Crypto_Ipw_SheMPCompression for cloning; -fipa-cp-clone disabled.
Not considering Crypto_Ipw_SheDebugAuth for cloning; -fipa-cp-clone disabled.
Not considering Crypto_Ipw_SheDebugChal for cloning; -fipa-cp-clone disabled.
Not considering Crypto_Ipw_SheGetId for cloning; -fipa-cp-clone disabled.
Not considering Crypto_Ipw_SheGetStatus for cloning; -fipa-cp-clone disabled.
Not considering Crypto_Ipw_SheSetBootStatus for cloning; -fipa-cp-clone disabled.
Not considering Crypto_Ipw_SetSynchronousRequestsTimeout for cloning; -fipa-cp-clone disabled.
Not considering Crypto_Ipw_MainFunction for cloning; -fipa-cp-clone disabled.
Not considering Crypto_Ipw_CertificateVerify for cloning; -fipa-cp-clone disabled.
Function Crypto_Ipw_CertificateParse/25 is not versionable, reason: not a tree_versionable_function.
Not considering Crypto_Ipw_CalcSecret for cloning; -fipa-cp-clone disabled.
Not considering Crypto_Ipw_KeyDerive for cloning; -fipa-cp-clone disabled.
Not considering Crypto_Ipw_KeyGenerate for cloning; -fipa-cp-clone disabled.
Not considering Crypto_Ipw_RandomSeed for cloning; -fipa-cp-clone disabled.
Not considering Crypto_Ipw_ExportKey for cloning; -fipa-cp-clone disabled.
Not considering Crypto_Ipw_ImportKey for cloning; -fipa-cp-clone disabled.
Not considering Crypto_Ipw_CancelJob for cloning; -fipa-cp-clone disabled.
Not considering Crypto_Ipw_ProcessJob for cloning; -fipa-cp-clone disabled.
Not considering Crypto_Ipw_Init for cloning; -fipa-cp-clone disabled.
Not considering Crypto_Ipw_ProcessAsyncCsecResponse for cloning; -fipa-cp-clone disabled.

overall_size: 677, max_new_size: 11001
 - context independent values, size: 12, time_benefit: 2.000000
 - context independent values, size: 9, time_benefit: 1.000000
 - context independent values, size: 9, time_benefit: 1.000000
 - context independent values, size: 12, time_benefit: 1.000000
 - context independent values, size: 6, time_benefit: 1.000000
 - context independent values, size: 12, time_benefit: 1.000000
 - context independent values, size: 5, time_benefit: 1.000000
 - context independent values, size: 4, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 4.000000
 - context independent values, size: 3, time_benefit: 4.000000
 - context independent values, size: 3, time_benefit: 3.000000
 - context independent values, size: 1, time_benefit: 2.000000
 - context independent values, size: 9, time_benefit: 3.000000
 - context independent values, size: 23, time_benefit: 2.000000
 - context independent values, size: 26, time_benefit: 2.000000
 - context independent values, size: 12, time_benefit: 1.000000
 - context independent values, size: 35, time_benefit: 1.000000
 - context independent values, size: 11, time_benefit: 1.000000
 - context independent values, size: 38, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: Crypto_Ipw_CopyOutputResult.part.0/69:
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
  Node: Crypto_Ipw_FillVerifyPtr.part.0/68:
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
  Node: Crypto_Ipw_SheMPCompression/34:
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
  Node: Crypto_Ipw_SheDebugAuth/33:
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
  Node: Crypto_Ipw_SheDebugChal/32:
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
  Node: Crypto_Ipw_SheGetId/31:
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
  Node: Crypto_Ipw_SheGetStatus/30:
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
  Node: Crypto_Ipw_SheSetBootStatus/29:
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
  Node: Crypto_Ipw_SetSynchronousRequestsTimeout/28:
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
  Node: Crypto_Ipw_MainFunction/27:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Crypto_Ipw_CertificateVerify/26:
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
  Node: Crypto_Ipw_CertificateParse/25:
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
  Node: Crypto_Ipw_CalcSecret/24:
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
  Node: Crypto_Ipw_KeyDerive/23:
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
  Node: Crypto_Ipw_KeyGenerate/22:
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
  Node: Crypto_Ipw_RandomSeed/21:
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
  Node: Crypto_Ipw_ExportKey/20:
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
  Node: Crypto_Ipw_ImportKey/19:
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
  Node: Crypto_Ipw_CancelJob/18:
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
  Node: Crypto_Ipw_ProcessJob/17:
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
  Node: Crypto_Ipw_Init/16:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Crypto_Ipw_Random/15:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Crypto_Ipw_TranslateCsecResponse/14:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Crypto_Ipw_ProcessOperation/13:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Crypto_Ipw_PushJobFromCdoQueueToCsec/12:
  Node: Crypto_Ipw_ProcessAsyncCsecResponse/11:
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
  Node: Crypto_Ipw_FillVerifyPtr/10:
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
  Node: Crypto_Ipw_EncDecCbc/9:
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
  Node: Crypto_Ipw_EncDecEcb/8:
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
  Node: Crypto_Ipw_EncDec/7:
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
  Node: Crypto_Ipw_MacVerify/6:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Crypto_Ipw_MacGenerate/5:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Crypto_Ipw_CopyOutputResult/4:
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
  Node: Crypto_Ipw_SheLoadPlainKey/3:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Crypto_Ipw_SheLoadEncryptedKey/2:
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

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Crypto_Ipw_CopyOutputResult.part.0/69 (Crypto_Ipw_CopyOutputResult.part.0) @06c51620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: u8aOutputResultTemp/1 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Crypto_Ipw_CopyOutputResult/4 (536870912 (estimated locally),0.50 per call) 
  Calls: Crypto_Util_Memcpy8/46 (1073741824 (estimated locally),1.00 per call) 
Crypto_Ipw_FillVerifyPtr.part.0/68 (Crypto_Ipw_FillVerifyPtr.part.0) @0778ad20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Crypto_Ipw_State/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Crypto_Ipw_FillVerifyPtr/10 (365072224 (estimated locally),0.34 per call) 
  Calls: 
Csec_Ip_MpCompress/67 (Csec_Ip_MpCompress) @0776a540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_Ipw_SheMPCompression/34 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Csec_Ip_DbgAuth/66 (Csec_Ip_DbgAuth) @0776a380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_Ipw_SheDebugAuth/33 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Csec_Ip_DbgChal/65 (Csec_Ip_DbgChal) @0776a1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_Ipw_SheDebugChal/32 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Csec_Ip_GetId/64 (Csec_Ip_GetId) @0776a000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_Ipw_SheGetId/31 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Csec_Ip_GetStatus/63 (Csec_Ip_GetStatus) @07762e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_Ipw_SheGetStatus/30 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Csec_Ip_BootFailure/62 (Csec_Ip_BootFailure) @07762c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_Ipw_SheSetBootStatus/29 (536870913 (estimated locally),0.50 per call) 
  Calls: 
Csec_Ip_BootOk/61 (Csec_Ip_BootOk) @07762b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_Ipw_SheSetBootStatus/29 (536870913 (estimated locally),0.50 per call) 
  Calls: 
Csec_Ip_SetSynchronousCmdTimeout/60 (Csec_Ip_SetSynchronousCmdTimeout) @077629a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_Ipw_SetSynchronousRequestsTimeout/28 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Csec_Ip_MainFunction/59 (Csec_Ip_MainFunction) @077627e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_Ipw_MainFunction/27 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Csec_Ip_ExtendSeed/58 (Csec_Ip_ExtendSeed) @077621c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_Ipw_RandomSeed/21 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Csec_Ip_ExportRamKey/57 (Csec_Ip_ExportRamKey) @07762000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_Ipw_ExportKey/20 (217325345 (estimated locally),0.20 per call) 
  Calls: 
Csec_Ip_LoadPlainKey/56 (Csec_Ip_LoadPlainKey) @07751e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_Ipw_SheLoadPlainKey/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Csec_Ip_LoadKey/55 (Csec_Ip_LoadKey) @07751b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_Ipw_SheLoadEncryptedKey/2 (354334802 (estimated locally),0.33 per call) 
  Calls: 
Crypto_Util_DequeueJob/54 (Crypto_Util_DequeueJob) @077518c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_Ipw_CancelJob/18 (708669605 (estimated locally),0.66 per call) 
  Calls: 
Csec_Ip_CancelCommand/53 (Csec_Ip_CancelCommand) @077517e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_Ipw_CancelJob/18 (365072220 (estimated locally),0.34 per call) 
  Calls: 
Csec_Ip_GenerateRnd/52 (Csec_Ip_GenerateRnd) @07751620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_Ipw_Random/15 (697932186 (estimated locally),0.65 per call) 
  Calls: 
Csec_Ip_DecryptEcb/51 (Csec_Ip_DecryptEcb) @07751460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_Ipw_EncDecEcb/8 (460635243 (estimated locally),0.43 per call) 
  Calls: 
Csec_Ip_EncryptEcb/50 (Csec_Ip_EncryptEcb) @07751380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_Ipw_EncDecEcb/8 (237296943 (estimated locally),0.22 per call) 
  Calls: 
Csec_Ip_DecryptCbc/49 (Csec_Ip_DecryptCbc) @077511c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_Ipw_EncDecCbc/9 (460635243 (estimated locally),0.43 per call) 
  Calls: 
Csec_Ip_EncryptCbc/48 (Csec_Ip_EncryptCbc) @077510e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_Ipw_EncDecCbc/9 (237296943 (estimated locally),0.22 per call) 
  Calls: 
Csec_Ip_VerifyMac/47 (Csec_Ip_VerifyMac) @06bb2e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_Ipw_MacVerify/6 (708669605 (estimated locally),0.66 per call) 
  Calls: 
Crypto_Util_Memcpy8/46 (Crypto_Util_Memcpy8) @06bb2c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_Ipw_CopyOutputResult/4 (536870913 (estimated locally),0.50 per call) Crypto_Ipw_CopyOutputResult.part.0/69 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_Util_DequeueHeadJob/45 (Crypto_Util_DequeueHeadJob) @06bb29a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_Ipw_PushJobFromCdoQueueToCsec/12 (87225041 (estimated locally),0.08 per call) 
  Calls: 
Crypto_aObjectQueueList/44 (Crypto_aObjectQueueList) @0774a240
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Crypto_Ipw_PushJobFromCdoQueueToCsec/12 (read)
  Availability: not_available
  Varpool flags:
Crypto_aeDriverState/43 (Crypto_aeDriverState) @0774a1f8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Crypto_Ipw_PushJobFromCdoQueueToCsec/12 (read)
  Availability: not_available
  Varpool flags:
CryIf_CallbackNotification/42 (CryIf_CallbackNotification) @06bb27e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_Ipw_ProcessAsyncCsecResponse/11 (1073741824 (estimated locally),1.00 per call) Crypto_Ipw_PushJobFromCdoQueueToCsec/12 (28784263 (estimated locally),0.03 per call) 
  Calls: 
Csec_Ip_GenerateMac/41 (Csec_Ip_GenerateMac) @06bb2620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_Ipw_MacGenerate/5 (460635242 (estimated locally),0.43 per call) 
  Calls: 
Crypto_aKeyElementList/40 (Crypto_aKeyElementList) @06bb79d8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Crypto_Ipw_SheLoadEncryptedKey/2 (read)Crypto_Ipw_ImportKey/19 (read)Crypto_Ipw_MacVerify/6 (read)Crypto_Ipw_MacGenerate/5 (read)Crypto_Ipw_EncDec/7 (read)Crypto_Ipw_EncDec/7 (read)Crypto_Ipw_SheLoadEncryptedKey/2 (read)Crypto_Ipw_SheLoadEncryptedKey/2 (read)Crypto_Ipw_SheLoadEncryptedKey/2 (read)Crypto_Ipw_SheLoadEncryptedKey/2 (read)Crypto_Ipw_SheLoadEncryptedKey/2 (read)Crypto_Ipw_ImportKey/19 (read)Crypto_Ipw_ExportKey/20 (read)
  Availability: not_available
  Varpool flags: read-only
Crypto_Util_GetKeyElementIdx/39 (Crypto_Util_GetKeyElementIdx) @06bb2540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_Ipw_ImportKey/19 (1073741824 (estimated locally),1.00 per call) Crypto_Ipw_ImportKey/19 (1073741824 (estimated locally),1.00 per call) Crypto_Ipw_EncDec/7 (143434728 (estimated locally),0.13 per call) Crypto_Ipw_EncDec/7 (1073741824 (estimated locally),1.00 per call) Crypto_Ipw_MacVerify/6 (1073741824 (estimated locally),1.00 per call) Crypto_Ipw_MacGenerate/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_Util_QueueJob/38 (Crypto_Util_QueueJob) @06bb22a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_Ipw_ProcessJob/17 (22943406 (estimated locally),0.02 per call) 
  Calls: 
Crypto_aDriverObjectList/37 (Crypto_aDriverObjectList) @06baef30
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Crypto_Ipw_PushJobFromCdoQueueToCsec/12 (read)Crypto_Ipw_ProcessJob/17 (read)
  Availability: not_available
  Varpool flags: read-only
Csec_Ip_InitRng/36 (Csec_Ip_InitRng) @06bb2000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_Ipw_Init/16 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Csec_Ip_Init/35 (Csec_Ip_Init) @06ba9d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_Ipw_Init/16 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_Ipw_SheMPCompression/34 (Crypto_Ipw_SheMPCompression) @06ba9ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_Ipw_TranslateCsecResponse/14 (1073741824 (estimated locally),1.00 per call) Csec_Ip_MpCompress/67 (1073741824 (estimated locally),1.00 per call) 
Crypto_Ipw_SheDebugAuth/33 (Crypto_Ipw_SheDebugAuth) @06ba9c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_Ipw_TranslateCsecResponse/14 (1073741824 (estimated locally),1.00 per call) Csec_Ip_DbgAuth/66 (1073741824 (estimated locally),1.00 per call) 
Crypto_Ipw_SheDebugChal/32 (Crypto_Ipw_SheDebugChal) @06ba99a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_Ipw_TranslateCsecResponse/14 (1073741824 (estimated locally),1.00 per call) Csec_Ip_DbgChal/65 (1073741824 (estimated locally),1.00 per call) 
Crypto_Ipw_SheGetId/31 (Crypto_Ipw_SheGetId) @06ba9700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_Ipw_TranslateCsecResponse/14 (1073741824 (estimated locally),1.00 per call) Csec_Ip_GetId/64 (1073741824 (estimated locally),1.00 per call) 
Crypto_Ipw_SheGetStatus/30 (Crypto_Ipw_SheGetStatus) @06ba9460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Csec_Ip_GetStatus/63 (1073741824 (estimated locally),1.00 per call) 
Crypto_Ipw_SheSetBootStatus/29 (Crypto_Ipw_SheSetBootStatus) @06ba91c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_Ipw_TranslateCsecResponse/14 (1073741824 (estimated locally),1.00 per call) Csec_Ip_BootFailure/62 (536870913 (estimated locally),0.50 per call) Csec_Ip_BootOk/61 (536870913 (estimated locally),0.50 per call) 
Crypto_Ipw_SetSynchronousRequestsTimeout/28 (Crypto_Ipw_SetSynchronousRequestsTimeout) @06ba4d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Csec_Ip_SetSynchronousCmdTimeout/60 (1073741824 (estimated locally),1.00 per call) 
Crypto_Ipw_MainFunction/27 (Crypto_Ipw_MainFunction) @06ba47e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Csec_Ip_MainFunction/59 (1073741824 (estimated locally),1.00 per call) 
Crypto_Ipw_CertificateVerify/26 (Crypto_Ipw_CertificateVerify) @06ba42a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Crypto_Ipw_CertificateParse/25 (Crypto_Ipw_CertificateParse) @06ba4ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: Crypto_Ipw_KeyGenerate/22 (1073741824 (estimated locally),1.00 per call) 
Crypto_Ipw_CalcSecret/24 (Crypto_Ipw_CalcSecret) @06ba4c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Crypto_Ipw_KeyDerive/23 (Crypto_Ipw_KeyDerive) @06ba49a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Crypto_Ipw_KeyGenerate/22 (Crypto_Ipw_KeyGenerate) @06ba4700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: Crypto_Ipw_CertificateParse/25 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_Ipw_RandomSeed/21 (Crypto_Ipw_RandomSeed) @06ba4460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_Ipw_TranslateCsecResponse/14 (1073741824 (estimated locally),1.00 per call) Csec_Ip_ExtendSeed/58 (1073741824 (estimated locally),1.00 per call) 
Crypto_Ipw_ExportKey/20 (Crypto_Ipw_ExportKey) @06ba41c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_aKeyElementList/40 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_Ipw_TranslateCsecResponse/14 (217325345 (estimated locally),0.20 per call) Csec_Ip_ExportRamKey/57 (217325345 (estimated locally),0.20 per call) 
Crypto_Ipw_ImportKey/19 (Crypto_Ipw_ImportKey) @06b95d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_aKeyElementList/40 (read)Crypto_aKeyElementList/40 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_Ipw_SheLoadPlainKey/3 (173338695 (estimated locally),0.16 per call) Crypto_Ipw_SheLoadEncryptedKey/2 (217325345 (estimated locally),0.20 per call) Crypto_Util_GetKeyElementIdx/39 (1073741824 (estimated locally),1.00 per call) Crypto_Util_GetKeyElementIdx/39 (1073741824 (estimated locally),1.00 per call) 
Crypto_Ipw_CancelJob/18 (Crypto_Ipw_CancelJob) @06b957e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_Ipw_State/0 (read)Crypto_Ipw_State/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_Util_DequeueJob/54 (708669605 (estimated locally),0.66 per call) Csec_Ip_CancelCommand/53 (365072220 (estimated locally),0.34 per call) 
Crypto_Ipw_ProcessJob/17 (Crypto_Ipw_ProcessJob) @06b952a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_aDriverObjectList/37 (read)Crypto_Ipw_State/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_Util_QueueJob/38 (22943406 (estimated locally),0.02 per call) Crypto_Ipw_ProcessOperation/13 (217325345 (estimated locally),0.20 per call) 
Crypto_Ipw_Init/16 (Crypto_Ipw_Init) @06b95ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_Ipw_State/0 (addr)Crypto_Ipw_State/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_Ipw_TranslateCsecResponse/14 (1073741824 (estimated locally),1.00 per call) Csec_Ip_InitRng/36 (1073741824 (estimated locally),1.00 per call) Csec_Ip_Init/35 (1073741824 (estimated locally),1.00 per call) 
Crypto_Ipw_Random/15 (Crypto_Ipw_Random) @06b95c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_Ipw_ProcessAsyncCsecResponse/11 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: Crypto_Ipw_ProcessOperation/13 (214748364 (estimated locally),0.20 per call) 
  Calls: Crypto_Ipw_TranslateCsecResponse/14 (697932186 (estimated locally),0.65 per call) Csec_Ip_GenerateRnd/52 (697932186 (estimated locally),0.65 per call) 
Crypto_Ipw_TranslateCsecResponse/14 (Crypto_Ipw_TranslateCsecResponse) @06b959a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_Ipw_SheMPCompression/34 (1073741824 (estimated locally),1.00 per call) Crypto_Ipw_SheDebugAuth/33 (1073741824 (estimated locally),1.00 per call) Crypto_Ipw_SheDebugChal/32 (1073741824 (estimated locally),1.00 per call) Crypto_Ipw_SheGetId/31 (1073741824 (estimated locally),1.00 per call) Crypto_Ipw_SheSetBootStatus/29 (1073741824 (estimated locally),1.00 per call) Crypto_Ipw_RandomSeed/21 (1073741824 (estimated locally),1.00 per call) Crypto_Ipw_ExportKey/20 (217325345 (estimated locally),0.20 per call) Crypto_Ipw_Init/16 (1073741824 (estimated locally),1.00 per call) Crypto_Ipw_SheLoadPlainKey/3 (1073741824 (estimated locally),1.00 per call) Crypto_Ipw_SheLoadEncryptedKey/2 (354334802 (estimated locally),0.33 per call) Crypto_Ipw_ProcessAsyncCsecResponse/11 (1073741824 (estimated locally),1.00 per call) Crypto_Ipw_Random/15 (697932186 (estimated locally),0.65 per call) Crypto_Ipw_EncDecEcb/8 (697932187 (estimated locally),0.65 per call) Crypto_Ipw_EncDecCbc/9 (697932187 (estimated locally),0.65 per call) Crypto_Ipw_MacVerify/6 (708669605 (estimated locally),0.66 per call) Crypto_Ipw_MacGenerate/5 (460635242 (estimated locally),0.43 per call) 
  Calls: 
Crypto_Ipw_ProcessOperation/13 (Crypto_Ipw_ProcessOperation) @06b95700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: Crypto_Ipw_ProcessJob/17 (217325345 (estimated locally),0.20 per call) Crypto_Ipw_PushJobFromCdoQueueToCsec/12 (178447301 (estimated locally),0.17 per call) 
  Calls: Crypto_Ipw_Random/15 (214748364 (estimated locally),0.20 per call) Crypto_Ipw_EncDec/7 (214748364 (estimated locally),0.20 per call) Crypto_Ipw_MacVerify/6 (214748364 (estimated locally),0.20 per call) Crypto_Ipw_MacGenerate/5 (214748364 (estimated locally),0.20 per call) 
Crypto_Ipw_PushJobFromCdoQueueToCsec/12 (Crypto_Ipw_PushJobFromCdoQueueToCsec) @06b95460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_aeDriverState/43 (read)Crypto_aObjectQueueList/44 (read)Crypto_aDriverObjectList/37 (read)Crypto_Ipw_State/0 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_Ipw_ProcessAsyncCsecResponse/11 (1073741824 (estimated locally),1.00 per call) 
  Calls: CryIf_CallbackNotification/42 (28784263 (estimated locally),0.03 per call) Crypto_Util_DequeueHeadJob/45 (87225041 (estimated locally),0.08 per call) Crypto_Ipw_ProcessOperation/13 (178447301 (estimated locally),0.17 per call) 
Crypto_Ipw_ProcessAsyncCsecResponse/11 (Crypto_Ipw_ProcessAsyncCsecResponse) @06b951c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Crypto_Ipw_State/0 (write)
  Referring: Crypto_Ipw_EncDecCbc/9 (addr)Crypto_Ipw_EncDecEcb/8 (addr)Crypto_Ipw_MacGenerate/5 (addr)Crypto_Ipw_MacVerify/6 (addr)Crypto_Ipw_Random/15 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: CryIf_CallbackNotification/42 (1073741824 (estimated locally),1.00 per call) Crypto_Ipw_CopyOutputResult/4 (134217728 (estimated locally),0.12 per call) Crypto_Ipw_FillVerifyPtr/10 (1073741824 (estimated locally),1.00 per call) Crypto_Ipw_TranslateCsecResponse/14 (1073741824 (estimated locally),1.00 per call) Crypto_Ipw_PushJobFromCdoQueueToCsec/12 (1073741824 (estimated locally),1.00 per call) 
Crypto_Ipw_FillVerifyPtr/10 (Crypto_Ipw_FillVerifyPtr) @06ae9e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_Ipw_ProcessAsyncCsecResponse/11 (1073741824 (estimated locally),1.00 per call) Crypto_Ipw_MacVerify/6 (143434728 (estimated locally),0.13 per call) 
  Calls: Crypto_Ipw_FillVerifyPtr.part.0/68 (365072224 (estimated locally),0.34 per call) 
Crypto_Ipw_EncDecCbc/9 (Crypto_Ipw_EncDecCbc) @06ae9700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_Ipw_ProcessAsyncCsecResponse/11 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_Ipw_EncDec/7 (70110895 (estimated locally),0.07 per call) 
  Calls: Crypto_Ipw_TranslateCsecResponse/14 (697932187 (estimated locally),0.65 per call) Csec_Ip_DecryptCbc/49 (460635243 (estimated locally),0.43 per call) Csec_Ip_EncryptCbc/48 (237296943 (estimated locally),0.22 per call) 
Crypto_Ipw_EncDecEcb/8 (Crypto_Ipw_EncDecEcb) @06ae90e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_Ipw_ProcessAsyncCsecResponse/11 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_Ipw_EncDec/7 (114403539 (estimated locally),0.11 per call) 
  Calls: Crypto_Ipw_TranslateCsecResponse/14 (697932187 (estimated locally),0.65 per call) Csec_Ip_DecryptEcb/51 (460635243 (estimated locally),0.43 per call) Csec_Ip_EncryptEcb/50 (237296943 (estimated locally),0.22 per call) 
Crypto_Ipw_EncDec/7 (Crypto_Ipw_EncDec) @06ae9d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_aKeyElementList/40 (read)Crypto_aKeyElementList/40 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_Ipw_ProcessOperation/13 (214748364 (estimated locally),0.20 per call) 
  Calls: Crypto_Ipw_EncDecEcb/8 (114403539 (estimated locally),0.11 per call) Crypto_Ipw_EncDecCbc/9 (70110895 (estimated locally),0.07 per call) Crypto_Util_GetKeyElementIdx/39 (143434728 (estimated locally),0.13 per call) Crypto_Util_GetKeyElementIdx/39 (1073741824 (estimated locally),1.00 per call) 
Crypto_Ipw_MacVerify/6 (Crypto_Ipw_MacVerify) @06ae99a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_aKeyElementList/40 (read)Crypto_Ipw_ProcessAsyncCsecResponse/11 (addr)Crypto_Ipw_State/0 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_Ipw_ProcessOperation/13 (214748364 (estimated locally),0.20 per call) 
  Calls: Crypto_Ipw_TranslateCsecResponse/14 (708669605 (estimated locally),0.66 per call) Crypto_Ipw_FillVerifyPtr/10 (143434728 (estimated locally),0.13 per call) Csec_Ip_VerifyMac/47 (708669605 (estimated locally),0.66 per call) Crypto_Util_GetKeyElementIdx/39 (1073741824 (estimated locally),1.00 per call) 
Crypto_Ipw_MacGenerate/5 (Crypto_Ipw_MacGenerate) @06ae9620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_aKeyElementList/40 (read)Crypto_Ipw_ProcessAsyncCsecResponse/11 (addr)u8aOutputResultTemp/1 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_Ipw_ProcessOperation/13 (214748364 (estimated locally),0.20 per call) 
  Calls: Crypto_Ipw_TranslateCsecResponse/14 (460635242 (estimated locally),0.43 per call) Crypto_Ipw_CopyOutputResult/4 (31699075 (estimated locally),0.03 per call) Csec_Ip_GenerateMac/41 (460635242 (estimated locally),0.43 per call) Crypto_Util_GetKeyElementIdx/39 (1073741824 (estimated locally),1.00 per call) 
Crypto_Ipw_CopyOutputResult/4 (Crypto_Ipw_CopyOutputResult) @06ae92a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: u8aOutputResultTemp/1 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_Ipw_ProcessAsyncCsecResponse/11 (134217728 (estimated locally),0.12 per call) Crypto_Ipw_MacGenerate/5 (31699075 (estimated locally),0.03 per call) 
  Calls: Crypto_Util_Memcpy8/46 (536870913 (estimated locally),0.50 per call) Crypto_Ipw_CopyOutputResult.part.0/69 (536870912 (estimated locally),0.50 per call) 
Crypto_Ipw_SheLoadPlainKey/3 (Crypto_Ipw_SheLoadPlainKey) @06ae9000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_Ipw_ImportKey/19 (173338695 (estimated locally),0.16 per call) 
  Calls: Crypto_Ipw_TranslateCsecResponse/14 (1073741824 (estimated locally),1.00 per call) Csec_Ip_LoadPlainKey/56 (1073741824 (estimated locally),1.00 per call) 
Crypto_Ipw_SheLoadEncryptedKey/2 (Crypto_Ipw_SheLoadEncryptedKey) @06ae1ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_aKeyElementList/40 (read)Crypto_aKeyElementList/40 (read)Crypto_aKeyElementList/40 (read)Crypto_aKeyElementList/40 (read)Crypto_aKeyElementList/40 (read)Crypto_aKeyElementList/40 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_Ipw_ImportKey/19 (217325345 (estimated locally),0.20 per call) 
  Calls: Crypto_Ipw_TranslateCsecResponse/14 (354334802 (estimated locally),0.33 per call) Csec_Ip_LoadKey/55 (354334802 (estimated locally),0.33 per call) 
u8aOutputResultTemp/1 (u8aOutputResultTemp) @06a98a68
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Crypto_Ipw_CopyOutputResult/4 (addr)Crypto_Ipw_CopyOutputResult.part.0/69 (addr)Crypto_Ipw_MacGenerate/5 (addr)
  Availability: available
  Varpool flags:
Crypto_Ipw_State/0 (Crypto_Ipw_State) @06a989d8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Crypto_Ipw_Init/16 (addr)Crypto_Ipw_PushJobFromCdoQueueToCsec/12 (write)Crypto_Ipw_ProcessAsyncCsecResponse/11 (write)Crypto_Ipw_MacVerify/6 (addr)Crypto_Ipw_FillVerifyPtr.part.0/68 (read)Crypto_Ipw_Init/16 (write)Crypto_Ipw_ProcessJob/17 (write)Crypto_Ipw_CancelJob/18 (read)Crypto_Ipw_CancelJob/18 (write)
  Availability: available
  Varpool flags:

;; Function Crypto_Ipw_TranslateCsecResponse (Crypto_Ipw_TranslateCsecResponse, funcdef_no=12, decl_uid=6278, cgraph_uid=13, symbol_order=14)

Modification phase of node Crypto_Ipw_TranslateCsecResponse/14
Crypto_Ipw_TranslateCsecResponse (Csec_Ip_ErrorCodeType CsecResponse)
{
  Std_ReturnType RetVal;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  switch (CsecResponse_2(D)) <default: <L14> [11.11%], case 1: <L17> [11.11%], case 2: <L3> [11.11%], case 4: <L12> [11.11%], case 8: <L13> [11.11%], case 16: <L10> [11.11%], case 32: <L3> [11.11%], case 64: <L11> [11.11%], case 128: <L3> [11.11%], case 256: <L3> [11.11%], case 512: <L3> [11.11%], case 1024: <L3> [11.11%], case 2048: <L3> [11.11%], case 65534: <L2> [11.11%], case 65535: <L1> [11.11%]>

  <bb 3> [local count: 119292717]:
<L1>:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 2
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 4> [local count: 119292717]:
<L2>:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 128
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 5> [local count: 119292717]:
<L3>:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 6> [local count: 119292717]:
<L10>:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 13
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 7> [local count: 119292717]:
<L11>:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 7
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 8> [local count: 119292717]:
<L12>:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 8
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 9> [local count: 119292717]:
<L13>:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 9
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 10> [local count: 119292717]:
<L14>:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT

  <bb 11> [local count: 1073634452]:
  # RetVal_1 = PHI <0(2), 2(3), 128(4), 1(5), 13(6), 7(7), 8(8), 9(9), 1(10)>
<L17>:
  # DEBUG RetVal => RetVal_1
  # DEBUG BEGIN_STMT
  return RetVal_1;

}



;; Function Crypto_Ipw_ProcessOperation (Crypto_Ipw_ProcessOperation, funcdef_no=11, decl_uid=6276, cgraph_uid=12, symbol_order=13)

Modification phase of node Crypto_Ipw_ProcessOperation/13
Crypto_Ipw_ProcessOperation (struct Crypto_JobType * pJob)
{
  Std_ReturnType RetVal;
  const struct Crypto_JobPrimitiveInfoType * _1;
  const struct Crypto_PrimitiveInfoType * _2;
  <unnamed type> _3;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  pJob_7(D)->jobState = 1;
  # DEBUG BEGIN_STMT
  _1 = pJob_7(D)->jobPrimitiveInfo;
  _2 = _1->primitiveInfo;
  _3 = _2->service;
  switch (_3) <default: <L5> [20.00%], case 1: <L0> [20.00%], case 2: <L1> [20.00%], case 3 ... 4: <L2> [20.00%], case 11: <L4> [20.00%]>

  <bb 3> [local count: 214748364]:
<L0>:
  # DEBUG BEGIN_STMT
  RetVal_16 = Crypto_Ipw_MacGenerate (pJob_7(D));
  # DEBUG RetVal => RetVal_16
  # DEBUG BEGIN_STMT
  goto <bb 8>; [100.00%]

  <bb 4> [local count: 214748364]:
<L1>:
  # DEBUG BEGIN_STMT
  RetVal_14 = Crypto_Ipw_MacVerify (pJob_7(D));
  # DEBUG RetVal => RetVal_14
  # DEBUG BEGIN_STMT
  goto <bb 8>; [100.00%]

  <bb 5> [local count: 214748364]:
<L2>:
  # DEBUG BEGIN_STMT
  RetVal_12 = Crypto_Ipw_EncDec (pJob_7(D), _3);
  # DEBUG RetVal => RetVal_12
  # DEBUG BEGIN_STMT
  goto <bb 8>; [100.00%]

  <bb 6> [local count: 214748364]:
<L4>:
  # DEBUG BEGIN_STMT
  RetVal_10 = Crypto_Ipw_Random (pJob_7(D));
  # DEBUG RetVal => RetVal_10
  # DEBUG BEGIN_STMT
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 214748364]:
<L5>:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  pJob_7(D)->jobState = 0;
  # DEBUG BEGIN_STMT

  <bb 8> [local count: 1073741824]:
  # RetVal_4 = PHI <RetVal_16(3), RetVal_14(4), RetVal_12(5), RetVal_10(6), 1(7)>
  # DEBUG RetVal => RetVal_4
  # DEBUG BEGIN_STMT
  return RetVal_4;

}



;; Function Crypto_Ipw_ProcessAsyncCsecResponse (Crypto_Ipw_ProcessAsyncCsecResponse, funcdef_no=9, decl_uid=6272, cgraph_uid=10, symbol_order=11)

Modification phase of node Crypto_Ipw_ProcessAsyncCsecResponse/11
Crypto_Ipw_ProcessAsyncCsecResponse (Csec_Ip_ErrorCodeType ErrCode, Csec_Ip_CmdType u32CompletedCmd, void * pCallbackParam)
{
  Crypto_ServiceInfoType eService;
  uint32 * pOutputLength;
  uint8 * pOutputPtr;
  uint32 u32ResultLength;
  uint32 u32InputLength;
  Std_ReturnType CryptoErrorCode;
  const struct Crypto_JobPrimitiveInfoType * _1;
  const struct Crypto_PrimitiveInfoType * _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG pCryptoJob => pCallbackParam_4(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  u32InputLength_6 = MEM[(struct Crypto_JobType *)pCallbackParam_4(D)].jobPrimitiveInputOutput.inputLength;
  # DEBUG u32InputLength => u32InputLength_6
  # DEBUG BEGIN_STMT
  _1 = MEM[(struct Crypto_JobType *)pCallbackParam_4(D)].jobPrimitiveInfo;
  _2 = _1->primitiveInfo;
  u32ResultLength_7 = _2->resultLength;
  # DEBUG u32ResultLength => u32ResultLength_7
  # DEBUG BEGIN_STMT
  pOutputPtr_8 = MEM[(struct Crypto_JobType *)pCallbackParam_4(D)].jobPrimitiveInputOutput.outputPtr;
  # DEBUG pOutputPtr => pOutputPtr_8
  # DEBUG BEGIN_STMT
  pOutputLength_9 = MEM[(struct Crypto_JobType *)pCallbackParam_4(D)].jobPrimitiveInputOutput.outputLengthPtr;
  # DEBUG pOutputLength => pOutputLength_9
  # DEBUG BEGIN_STMT
  eService_10 = _2->service;
  # DEBUG eService => eService_10
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Crypto_Ipw_PushJobFromCdoQueueToCsec ();
  # DEBUG BEGIN_STMT
  Crypto_Ipw_State.u32CurrentlyProcessedJobId = 2779404885;
  # DEBUG BEGIN_STMT
  CryptoErrorCode_14 = Crypto_Ipw_TranslateCsecResponse (ErrCode_13(D));
  # DEBUG CryptoErrorCode => CryptoErrorCode_14
  # DEBUG BEGIN_STMT
  Crypto_Ipw_FillVerifyPtr (pCallbackParam_4(D), ErrCode_13(D));
  # DEBUG BEGIN_STMT
  MEM[(struct Crypto_JobType *)pCallbackParam_4(D)].jobState = 0;
  # DEBUG BEGIN_STMT
  if (CryptoErrorCode_14 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  switch (eService_10) <default: <L8> [25.00%], case 1: <L1> [25.00%], case 3 ... 4: <L2> [25.00%], case 11: <L4> [25.00%]>

  <bb 4> [local count: 134217728]:
<L1>:
  # DEBUG BEGIN_STMT
  Crypto_Ipw_CopyOutputResult (pOutputPtr_8, pOutputLength_9, u32ResultLength_7);
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 5> [local count: 134217728]:
<L2>:
  # DEBUG BEGIN_STMT
  *pOutputLength_9 = u32InputLength_6;
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 134217728]:
<L4>:
  # DEBUG BEGIN_STMT
  *pOutputLength_9 = 16;
  # DEBUG BEGIN_STMT

  <bb 7> [local count: 1073741824]:
<L8>:
  # DEBUG BEGIN_STMT
  CryIf_CallbackNotification (pCallbackParam_4(D), CryptoErrorCode_14);
  return;

}



;; Function Crypto_Ipw_Init (Crypto_Ipw_Init, funcdef_no=14, decl_uid=6010, cgraph_uid=15, symbol_order=16)

Modification phase of node Crypto_Ipw_Init/16
Crypto_Ipw_Init (const uint32 u32PartitionId)
{
  Csec_Ip_ErrorCodeType CsecResponse;
  Std_ReturnType RetVal;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Csec_Ip_Init (&Crypto_Ipw_State.Csec_Ip_State);
  # DEBUG BEGIN_STMT
  Crypto_Ipw_State.u32CurrentlyProcessedJobId = 2779404885;
  # DEBUG BEGIN_STMT
  CsecResponse_5 = Csec_Ip_InitRng ();
  # DEBUG CsecResponse => CsecResponse_5
  # DEBUG BEGIN_STMT
  RetVal_6 = Crypto_Ipw_TranslateCsecResponse (CsecResponse_5);
  # DEBUG RetVal => RetVal_6
  # DEBUG BEGIN_STMT
  return RetVal_6;

}



;; Function Crypto_Ipw_ProcessJob (Crypto_Ipw_ProcessJob, funcdef_no=15, decl_uid=6014, cgraph_uid=16, symbol_order=17)

Modification phase of node Crypto_Ipw_ProcessJob/17
Crypto_Ipw_ProcessJob (const uint32 u32PartitionId, const uint32 u32ObjectIdx, struct Crypto_JobType * const pJob)
{
  Std_ReturnType RetVal;
  <unnamed type> _1;
  const struct Crypto_JobPrimitiveInfoType * _2;
  <unnamed type> _3;
  long unsigned int _4;
  _Bool _5;
  const struct Crypto_JobInfoType * _6;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = pJob_12(D)->jobPrimitiveInputOutput.mode;
  if (_1 == 7)
    goto <bb 3>; [20.24%]
  else
    goto <bb 14>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  RetVal_14 = Crypto_Ipw_ProcessOperation (pJob_12(D));
  # DEBUG RetVal => RetVal_14
  # DEBUG BEGIN_STMT
  _2 = pJob_12(D)->jobPrimitiveInfo;
  _3 = _2->processingType;
  if (_3 == 1)
    goto <bb 4>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 4> [local count: 73890617]:
  # DEBUG BEGIN_STMT
  pJob_12(D)->jobState = 0;

  <bb 5> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  if (RetVal_14 == 2)
    goto <bb 6>; [34.00%]
  else
    goto <bb 10>; [66.00%]

  <bb 6> [local count: 73890617]:
  # DEBUG BEGIN_STMT
  if (_3 == 0)
    goto <bb 7>; [65.00%]
  else
    goto <bb 14>; [35.00%]

  <bb 7> [local count: 48028901]:
  _4 = Crypto_aDriverObjectList[u32ObjectIdx_18(D)].u32CryptoQueueSize;
  if (_4 != 0)
    goto <bb 8>; [47.77%]
  else
    goto <bb 14>; [52.23%]

  <bb 8> [local count: 22943406]:
  # DEBUG BEGIN_STMT
  _5 = Crypto_Util_QueueJob (u32ObjectIdx_18(D), pJob_12(D));
  if (_5 != 0)
    goto <bb 14>; [65.00%]
  else
    goto <bb 9>; [35.00%]

  <bb 9> [local count: 8030192]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 5
  goto <bb 14>; [100.00%]

  <bb 10> [local count: 143434728]:
  # DEBUG BEGIN_STMT
  if (RetVal_14 != 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 11> [local count: 71717364]:
  # DEBUG BEGIN_STMT
  pJob_12(D)->jobState = 0;
  goto <bb 14>; [100.00%]

  <bb 12> [local count: 71717364]:
  # DEBUG BEGIN_STMT
  if (_3 == 0)
    goto <bb 13>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 13> [local count: 35858682]:
  # DEBUG BEGIN_STMT
  _6 = pJob_12(D)->jobInfo;
  _7 = _6->jobId;
  Crypto_Ipw_State.u32CurrentlyProcessedJobId = _7;

  <bb 14> [local count: 1073741824]:
  # RetVal_8 = PHI <1(2), 2(7), RetVal_14(11), 0(12), 0(13), 2(6), 5(9), 0(8)>
  # DEBUG RetVal => RetVal_8
  # DEBUG BEGIN_STMT
  return RetVal_8;

}



;; Function Crypto_Ipw_CancelJob (Crypto_Ipw_CancelJob, funcdef_no=16, decl_uid=6018, cgraph_uid=17, symbol_order=18)

Modification phase of node Crypto_Ipw_CancelJob/18
Crypto_Ipw_CancelJob (const uint32 u32PartitionId, const uint32 u32ObjectIdx, const struct Crypto_JobInfoType * const pJobInfo)
{
  long unsigned int _1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Crypto_Ipw_State.u32CurrentlyProcessedJobId;
  _2 = pJobInfo_5(D)->jobId;
  if (_1 == _2)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  Csec_Ip_CancelCommand ();
  # DEBUG BEGIN_STMT
  Crypto_Ipw_State.u32CurrentlyProcessedJobId = 2779404885;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  Crypto_Util_DequeueJob (u32ObjectIdx_6(D), pJobInfo_5(D));

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Crypto_Ipw_ImportKey (Crypto_Ipw_ImportKey, funcdef_no=17, decl_uid=6024, cgraph_uid=18, symbol_order=19)

Modification phase of node Crypto_Ipw_ImportKey/19
Crypto_Ipw_ImportKey (const uint32 u32PartitionId, const uint8 * const pKey, const uint32 u32KeyLength, const uint32 u32CryptoKeyIdx, const uint32 u32CryptoKeyElementIdx)
{
  uint32 u32CipherProofKeyElemIdx;
  uint32 u32MacProofKeyElemIdx;
  Csec_Ip_KeyIdType eKeyId;
  Crypto_KeyElementWriteAccessType eKeyElementWriteAccess;
  Std_ReturnType RetVal;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  eKeyElementWriteAccess_5 = Crypto_aKeyElementList[u32CryptoKeyElementIdx_4(D)].eCryptoKeyElementWriteAccess;
  # DEBUG eKeyElementWriteAccess => eKeyElementWriteAccess_5
  # DEBUG BEGIN_STMT
  eKeyId_6 = Crypto_aKeyElementList[u32CryptoKeyElementIdx_4(D)].eKeyId;
  # DEBUG eKeyId => eKeyId_6
  # DEBUG BEGIN_STMT
  u32MacProofKeyElemIdx_9 = Crypto_Util_GetKeyElementIdx (u32CryptoKeyIdx_7(D), 2);
  # DEBUG u32MacProofKeyElemIdx => u32MacProofKeyElemIdx_9
  # DEBUG BEGIN_STMT
  u32CipherProofKeyElemIdx_11 = Crypto_Util_GetKeyElementIdx (u32CryptoKeyIdx_7(D), 6);
  # DEBUG u32CipherProofKeyElemIdx => u32CipherProofKeyElemIdx_11
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (eKeyElementWriteAccess_5 == 4)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  RetVal_16 = Crypto_Ipw_SheLoadEncryptedKey (eKeyId_6, pKey_12(D), u32MacProofKeyElemIdx_9, u32CipherProofKeyElemIdx_11);
  # DEBUG RetVal => RetVal_16
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 856416480]:
  # DEBUG BEGIN_STMT
  if (eKeyId_6 == 15)
    goto <bb 5>; [20.24%]
  else
    goto <bb 6>; [79.76%]

  <bb 5> [local count: 173338695]:
  # DEBUG BEGIN_STMT
  RetVal_14 = Crypto_Ipw_SheLoadPlainKey (pKey_12(D));
  # DEBUG RetVal => RetVal_14

  <bb 6> [local count: 1073741824]:
  # RetVal_1 = PHI <RetVal_16(3), 1(4), RetVal_14(5)>
  # DEBUG RetVal => RetVal_1
  # DEBUG BEGIN_STMT
  return RetVal_1;

}



;; Function Crypto_Ipw_ExportKey (Crypto_Ipw_ExportKey, funcdef_no=18, decl_uid=6030, cgraph_uid=19, symbol_order=20)

Modification phase of node Crypto_Ipw_ExportKey/20
Crypto_Ipw_ExportKey (const uint32 u32PartitionId, const uint32 u32KeyMaterialKeyElemIdx, const uint32 u32KeyExportKeyElemIdx, uint8 * const pResult, uint32 * const pResultLength)
{
  Csec_Ip_KeyIdType eKeyId;
  Std_ReturnType RetVal;
  Csec_Ip_ErrorCodeType CsecResponse;
  uint8 * _1;
  uint8 * _2;
  uint8 * _3;
  uint8 * _4;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  eKeyId_9 = Crypto_aKeyElementList[u32KeyMaterialKeyElemIdx_8(D)].eKeyId;
  # DEBUG eKeyId => eKeyId_9
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (eKeyId_9 == 15)
    goto <bb 3>; [20.24%]
  else
    goto <bb 5>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  _1 = pResult_10(D) + 16;
  _2 = pResult_10(D) + 48;
  _3 = pResult_10(D) + 64;
  _4 = pResult_10(D) + 96;
  CsecResponse_12 = Csec_Ip_ExportRamKey (pResult_10(D), _1, _2, _3, _4);
  # DEBUG CsecResponse => CsecResponse_12
  # DEBUG BEGIN_STMT
  RetVal_13 = Crypto_Ipw_TranslateCsecResponse (CsecResponse_12);
  # DEBUG RetVal => RetVal_13
  # DEBUG BEGIN_STMT
  if (RetVal_13 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 108662672]:
  # DEBUG BEGIN_STMT
  *pResultLength_14(D) = 112;

  <bb 5> [local count: 1073741824]:
  # RetVal_5 = PHI <1(2), RetVal_13(3), 0(4)>
  # DEBUG RetVal => RetVal_5
  # DEBUG BEGIN_STMT
  return RetVal_5;

}



;; Function Crypto_Ipw_RandomSeed (Crypto_Ipw_RandomSeed, funcdef_no=19, decl_uid=6035, cgraph_uid=20, symbol_order=21)

Modification phase of node Crypto_Ipw_RandomSeed/21
Crypto_Ipw_RandomSeed (const uint32 u32PartitionId, const uint32 u32CryptoKeyIdx, const uint8 * const seedPtr, const uint32 seedLength)
{
  Csec_Ip_ErrorCodeType CsecResponse;
  Std_ReturnType RetVal;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CsecResponse_4 = Csec_Ip_ExtendSeed (seedPtr_2(D));
  # DEBUG CsecResponse => CsecResponse_4
  # DEBUG BEGIN_STMT
  RetVal_5 = Crypto_Ipw_TranslateCsecResponse (CsecResponse_4);
  # DEBUG RetVal => RetVal_5
  # DEBUG BEGIN_STMT
  return RetVal_5;

}



;; Function Crypto_Ipw_KeyGenerate (Crypto_Ipw_KeyGenerate, funcdef_no=20, decl_uid=6038, cgraph_uid=21, symbol_order=22)

Modification phase of node Crypto_Ipw_KeyGenerate/22
Crypto_Ipw_KeyGenerate (const uint32 u32PartitionId, const uint32 u32CryptoKeyIdx)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 129;

}



;; Function Crypto_Ipw_KeyDerive (Crypto_Ipw_KeyDerive, funcdef_no=21, decl_uid=6042, cgraph_uid=22, symbol_order=23)

Modification phase of node Crypto_Ipw_KeyDerive/23
Crypto_Ipw_KeyDerive (const uint32 u32PartitionId, const uint32 u32CryptoKeyIdx, const uint32 u32TargetKeyIdx)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 129;

}



;; Function Crypto_Ipw_CalcSecret (Crypto_Ipw_CalcSecret, funcdef_no=22, decl_uid=6047, cgraph_uid=23, symbol_order=24)

Modification phase of node Crypto_Ipw_CalcSecret/24
Crypto_Ipw_CalcSecret (const uint32 u32PartitionId, const uint32 u32CryptoKeyIdx, const uint8 * const pPartnerPublicValue, const uint32 u32PartnerPublicValueLength)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 129;

}



;; Function Crypto_Ipw_CertificateParse (Crypto_Ipw_CertificateParse, funcdef_no=36, decl_uid=6050, cgraph_uid=24, symbol_order=25)

Modification phase of node Crypto_Ipw_CertificateParse/25
Crypto_Ipw_CertificateParse (const uint32 u32PartitionId, const uint32 u32CryptoKeyIdx)
{
  Std_ReturnType retval.36;

  <bb 2> [local count: 1073741824]:
  retval.36_3 = Crypto_Ipw_KeyGenerate (u32PartitionId_1(D), u32CryptoKeyIdx_2(D)); [tail call]
  return retval.36_3;

}



;; Function Crypto_Ipw_CertificateVerify (Crypto_Ipw_CertificateVerify, funcdef_no=24, decl_uid=6055, cgraph_uid=25, symbol_order=26)

Modification phase of node Crypto_Ipw_CertificateVerify/26
Crypto_Ipw_CertificateVerify (const uint32 u32PartitionId, const uint32 u32CryptoKeyIdx, const uint32 u32VerifyCryptoKeyIdx, const Crypto_VerifyResultType * const verifyPtr)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 129;

}



;; Function Crypto_Ipw_MainFunction (Crypto_Ipw_MainFunction, funcdef_no=25, decl_uid=6057, cgraph_uid=26, symbol_order=27)

Modification phase of node Crypto_Ipw_MainFunction/27
Crypto_Ipw_MainFunction (const uint32 u32PartitionId)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Csec_Ip_MainFunction ();
  return;

}



;; Function Crypto_Ipw_SetSynchronousRequestsTimeout (Crypto_Ipw_SetSynchronousRequestsTimeout, funcdef_no=26, decl_uid=6060, cgraph_uid=27, symbol_order=28)

Modification phase of node Crypto_Ipw_SetSynchronousRequestsTimeout/28
Crypto_Ipw_SetSynchronousRequestsTimeout (const uint32 u32PartitionId, const uint32 u32Timeout)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Csec_Ip_SetSynchronousCmdTimeout (u32Timeout_2(D));
  return;

}



;; Function Crypto_Ipw_SheSetBootStatus (Crypto_Ipw_SheSetBootStatus, funcdef_no=27, decl_uid=6063, cgraph_uid=28, symbol_order=29)

Modification phase of node Crypto_Ipw_SheSetBootStatus/29
Crypto_Ipw_SheSetBootStatus (const uint32 u32PartitionId, const boolean bStatus)
{
  Csec_Ip_ErrorCodeType CsecResponse;
  Std_ReturnType RetVal;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (bStatus_3(D) != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  CsecResponse_8 = Csec_Ip_BootOk ();
  # DEBUG CsecResponse => CsecResponse_8
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  CsecResponse_6 = Csec_Ip_BootFailure ();
  # DEBUG CsecResponse => CsecResponse_6

  <bb 5> [local count: 1073741824]:
  # CsecResponse_1 = PHI <CsecResponse_8(3), CsecResponse_6(4)>
  # DEBUG CsecResponse => CsecResponse_1
  # DEBUG BEGIN_STMT
  RetVal_9 = Crypto_Ipw_TranslateCsecResponse (CsecResponse_1);
  # DEBUG RetVal => RetVal_9
  # DEBUG BEGIN_STMT
  return RetVal_9;

}



;; Function Crypto_Ipw_SheGetStatus (Crypto_Ipw_SheGetStatus, funcdef_no=28, decl_uid=6066, cgraph_uid=29, symbol_order=30)

Modification phase of node Crypto_Ipw_SheGetStatus/30
Crypto_Ipw_SheGetStatus (const uint32 u32PartitionId, uint8 * pStatus)
{
  unsigned char _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Csec_Ip_GetStatus ();
  *pStatus_4(D) = _1;
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Crypto_Ipw_SheGetId (Crypto_Ipw_SheGetId, funcdef_no=29, decl_uid=6072, cgraph_uid=30, symbol_order=31)

Modification phase of node Crypto_Ipw_SheGetId/31
Crypto_Ipw_SheGetId (const uint32 u32PartitionId, const uint8 * pChallenge, uint8 * pId, uint8 * pSreg, uint8 * pMac)
{
  Csec_Ip_ErrorCodeType CsecResponse;
  Std_ReturnType RetVal;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CsecResponse_7 = Csec_Ip_GetId (pChallenge_2(D), pId_3(D), pSreg_4(D), pMac_5(D));
  # DEBUG CsecResponse => CsecResponse_7
  # DEBUG BEGIN_STMT
  RetVal_8 = Crypto_Ipw_TranslateCsecResponse (CsecResponse_7);
  # DEBUG RetVal => RetVal_8
  # DEBUG BEGIN_STMT
  return RetVal_8;

}



;; Function Crypto_Ipw_SheDebugChal (Crypto_Ipw_SheDebugChal, funcdef_no=30, decl_uid=6075, cgraph_uid=31, symbol_order=32)

Modification phase of node Crypto_Ipw_SheDebugChal/32
Crypto_Ipw_SheDebugChal (const uint32 u32PartitionId, uint8 * pChallenge)
{
  Csec_Ip_ErrorCodeType CsecResponse;
  Std_ReturnType RetVal;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CsecResponse_4 = Csec_Ip_DbgChal (pChallenge_2(D));
  # DEBUG CsecResponse => CsecResponse_4
  # DEBUG BEGIN_STMT
  RetVal_5 = Crypto_Ipw_TranslateCsecResponse (CsecResponse_4);
  # DEBUG RetVal => RetVal_5
  # DEBUG BEGIN_STMT
  return RetVal_5;

}



;; Function Crypto_Ipw_SheDebugAuth (Crypto_Ipw_SheDebugAuth, funcdef_no=31, decl_uid=6078, cgraph_uid=32, symbol_order=33)

Modification phase of node Crypto_Ipw_SheDebugAuth/33
Crypto_Ipw_SheDebugAuth (const uint32 u32PartitionId, const uint8 * pAuthorization)
{
  Csec_Ip_ErrorCodeType CsecResponse;
  Std_ReturnType RetVal;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CsecResponse_4 = Csec_Ip_DbgAuth (pAuthorization_2(D));
  # DEBUG CsecResponse => CsecResponse_4
  # DEBUG BEGIN_STMT
  RetVal_5 = Crypto_Ipw_TranslateCsecResponse (CsecResponse_4);
  # DEBUG RetVal => RetVal_5
  # DEBUG BEGIN_STMT
  return RetVal_5;

}



;; Function Crypto_Ipw_SheMPCompression (Crypto_Ipw_SheMPCompression, funcdef_no=32, decl_uid=6084, cgraph_uid=33, symbol_order=34)

Modification phase of node Crypto_Ipw_SheMPCompression/34
Crypto_Ipw_SheMPCompression (const uint32 u32PartitionId, const uint8 * pInput, const uint32 u32InputLen, uint8 * pResult, const uint32 * pResultLen)
{
  uint16 u16InputPageLen;
  Csec_Ip_ErrorCodeType CsecResponse;
  Std_ReturnType RetVal;
  long unsigned int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = u32InputLen_2(D) >> 4;
  u16InputPageLen_3 = (uint16) _1;
  # DEBUG u16InputPageLen => u16InputPageLen_3
  # DEBUG BEGIN_STMT
  CsecResponse_8 = Csec_Ip_MpCompress (pInput_5(D), u16InputPageLen_3, pResult_6(D));
  # DEBUG CsecResponse => CsecResponse_8
  # DEBUG BEGIN_STMT
  RetVal_9 = Crypto_Ipw_TranslateCsecResponse (CsecResponse_8);
  # DEBUG RetVal => RetVal_9
  # DEBUG BEGIN_STMT
  return RetVal_9;

}


