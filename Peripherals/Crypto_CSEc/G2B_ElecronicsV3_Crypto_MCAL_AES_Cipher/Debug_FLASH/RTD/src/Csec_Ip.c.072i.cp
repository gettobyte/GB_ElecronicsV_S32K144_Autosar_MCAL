
IPA constant propagation start:
Determining dynamic type for call: Csec_Ip_ReadCommandBytes (16, _7, 16);
  Starting walk at: Csec_Ip_ReadCommandBytes (16, _7, 16);
  instance pointer: _7  Outer instance pointer: _7 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _13 (CsecResponse_16, _17, _18);
  Starting walk at: _13 (CsecResponse_16, _17, _18);
  instance pointer: _18  Outer instance pointer: _18 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Csec_Ip_ContinueEncDecECBCmd ();
  Function call may change dynamic type:Csec_Ip_ContinueEncDecCBCCmd ();
  Function call may change dynamic type:Csec_Ip_ContinueGenMACCmd ();
  Function call may change dynamic type:Csec_Ip_ContinueVerifMACCmd ();
  Function call may change dynamic type:Csec_Ip_ReadCommandBytes (16, _7, 16);
  Function call may change dynamic type:Csec_Ip_SetInterrupt (0);
Determining dynamic type for call: Csec_Ip_ReadCommandBytes (32, pCmac_17(D), 16);
  Starting walk at: Csec_Ip_ReadCommandBytes (32, pCmac_17(D), 16);
  instance pointer: pCmac_17(D)  Outer instance pointer: pCmac_17(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Csec_Ip_WriteCmdAndWait (5, 1, 0, eKeyId_14(D));
  Function call may change dynamic type:Csec_Ip_ClearErrorFlags ();
Determining dynamic type for call: Csec_Ip_WriteCommandBytes (32, pMac_14(D), 16);
  Starting walk at: Csec_Ip_WriteCommandBytes (32, pMac_14(D), 16);
  instance pointer: pMac_14(D)  Outer instance pointer: pMac_14(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Csec_Ip_ClearErrorFlags ();
Determining dynamic type for call: Csec_Ip_UpdateState (0, 22, pMsg_39(D), pMpCompress_40(D), u32NumBytes_38);
  Starting walk at: Csec_Ip_UpdateState (0, 22, pMsg_39(D), pMpCompress_40(D), u32NumBytes_38);
  instance pointer: pMsg_39(D)  Outer instance pointer: pMsg_39(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Csec_Ip_ClearErrorFlags ();
Determining dynamic type for call: Csec_Ip_UpdateState (0, 22, pMsg_39(D), pMpCompress_40(D), u32NumBytes_38);
  Starting walk at: Csec_Ip_UpdateState (0, 22, pMsg_39(D), pMpCompress_40(D), u32NumBytes_38);
  instance pointer: pMpCompress_40(D)  Outer instance pointer: pMpCompress_40(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Csec_Ip_ClearErrorFlags ();
Determining dynamic type for call: Csec_Ip_WriteCommandBytes (16, _6, u8NumBytes_42);
  Starting walk at: Csec_Ip_WriteCommandBytes (16, _6, u8NumBytes_42);
  instance pointer: _6  Outer instance pointer: _6 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Csec_Ip_CancelCommand ();
  Function call may change dynamic type:u32ElapsedTime_46 = Csec_Ip_WaitCommandCompletion (_10, u32ElapsedTime_27);
  Function call may change dynamic type:Csec_Ip_WriteCommandHalfWord (14, u16MsgLen_35(D));
  Function call may change dynamic type:Csec_Ip_WriteCommandBytes (16, _6, u8NumBytes_42);
  Function call may change dynamic type:Csec_Ip_UpdateState (0, 22, pMsg_39(D), pMpCompress_40(D), u32NumBytes_38);
  Function call may change dynamic type:Csec_Ip_ClearErrorFlags ();
Determining dynamic type for call: Csec_Ip_ReadCommandBytes (16, pMpCompress_40(D), 16);
  Starting walk at: Csec_Ip_ReadCommandBytes (16, pMpCompress_40(D), 16);
  instance pointer: pMpCompress_40(D)  Outer instance pointer: pMpCompress_40(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Csec_Ip_CancelCommand ();
  Function call may change dynamic type:u32ElapsedTime_46 = Csec_Ip_WaitCommandCompletion (_10, u32ElapsedTime_27);
  Function call may change dynamic type:Csec_Ip_WriteCommandHalfWord (14, u16MsgLen_35(D));
  Function call may change dynamic type:Csec_Ip_WriteCommandBytes (16, _6, u8NumBytes_42);
  Function call may change dynamic type:Csec_Ip_UpdateState (0, 22, pMsg_39(D), pMpCompress_40(D), u32NumBytes_38);
  Function call may change dynamic type:Csec_Ip_ClearErrorFlags ();
Determining dynamic type for call: Csec_Ip_WriteCommandBytes (16, pAuthorization_14(D), 16);
  Starting walk at: Csec_Ip_WriteCommandBytes (16, pAuthorization_14(D), 16);
  instance pointer: pAuthorization_14(D)  Outer instance pointer: pAuthorization_14(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Csec_Ip_ClearErrorFlags ();
Determining dynamic type for call: Csec_Ip_ReadCommandBytes (16, pChallenge_19(D), 16);
  Starting walk at: Csec_Ip_ReadCommandBytes (16, pChallenge_19(D), 16);
  instance pointer: pChallenge_19(D)  Outer instance pointer: pChallenge_19(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Csec_Ip_WaitCommandCompletion (_4, 0);
  Function call may change dynamic type:Csec_Ip_ClearErrorFlags ();
Determining dynamic type for call: Csec_Ip_WriteCommandBytes (16, pChallenge_17(D), 16);
  Starting walk at: Csec_Ip_WriteCommandBytes (16, pChallenge_17(D), 16);
  instance pointer: pChallenge_17(D)  Outer instance pointer: pChallenge_17(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Csec_Ip_ClearErrorFlags ();
Determining dynamic type for call: Csec_Ip_ReadCommandBytes (32, pUid_21(D), 15);
  Starting walk at: Csec_Ip_ReadCommandBytes (32, pUid_21(D), 15);
  instance pointer: pUid_21(D)  Outer instance pointer: pUid_21(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Csec_Ip_WaitCommandCompletion (_4, 0);
  Function call may change dynamic type:Csec_Ip_WriteCommandBytes (16, pChallenge_17(D), 16);
  Function call may change dynamic type:Csec_Ip_ClearErrorFlags ();
Determining dynamic type for call: Csec_Ip_ReadCommandBytes (48, pMac_25(D), 16);
  Starting walk at: Csec_Ip_ReadCommandBytes (48, pMac_25(D), 16);
  instance pointer: pMac_25(D)  Outer instance pointer: pMac_25(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Csec_Ip_ReadCommandBytes (32, pUid_21(D), 15);
  Function call may change dynamic type:Csec_Ip_WaitCommandCompletion (_4, 0);
  Function call may change dynamic type:Csec_Ip_WriteCommandBytes (16, pChallenge_17(D), 16);
  Function call may change dynamic type:Csec_Ip_ClearErrorFlags ();
Determining dynamic type for call: Csec_Ip_UpdateState (255, 12, 0B, pRnd_19(D), 0);
  Starting walk at: Csec_Ip_UpdateState (255, 12, 0B, pRnd_19(D), 0);
  instance pointer: 0B  Outer instance pointer: 0B offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Csec_Ip_UpdateState (255, 12, 0B, pRnd_19(D), 0);
  Starting walk at: Csec_Ip_UpdateState (255, 12, 0B, pRnd_19(D), 0);
  instance pointer: pRnd_19(D)  Outer instance pointer: pRnd_19(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Csec_Ip_ReadCommandBytes (16, pRnd_19(D), 16);
  Starting walk at: Csec_Ip_ReadCommandBytes (16, pRnd_19(D), 16);
  instance pointer: pRnd_19(D)  Outer instance pointer: pRnd_19(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Csec_Ip_WaitCommandCompletion (_5, 0);
  Function call may change dynamic type:Csec_Ip_ClearErrorFlags ();
  Function call may change dynamic type:Csec_Ip_UpdateState (255, 12, 0B, pRnd_19(D), 0);
Determining dynamic type for call: Csec_Ip_WriteCommandBytes (16, pEntropy_14(D), 16);
  Starting walk at: Csec_Ip_WriteCommandBytes (16, pEntropy_14(D), 16);
  instance pointer: pEntropy_14(D)  Outer instance pointer: pEntropy_14(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Csec_Ip_ClearErrorFlags ();
Determining dynamic type for call: Csec_Ip_ReadCommandBytes (16, pM1_19(D), 16);
  Starting walk at: Csec_Ip_ReadCommandBytes (16, pM1_19(D), 16);
  instance pointer: pM1_19(D)  Outer instance pointer: pM1_19(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Csec_Ip_WaitCommandCompletion (_4, 0);
  Function call may change dynamic type:Csec_Ip_ClearErrorFlags ();
Determining dynamic type for call: Csec_Ip_ReadCommandBytes (32, pM2_21(D), 32);
  Starting walk at: Csec_Ip_ReadCommandBytes (32, pM2_21(D), 32);
  instance pointer: pM2_21(D)  Outer instance pointer: pM2_21(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Csec_Ip_ReadCommandBytes (16, pM1_19(D), 16);
  Function call may change dynamic type:Csec_Ip_WaitCommandCompletion (_4, 0);
  Function call may change dynamic type:Csec_Ip_ClearErrorFlags ();
Determining dynamic type for call: Csec_Ip_ReadCommandBytes (64, pM3_23(D), 16);
  Starting walk at: Csec_Ip_ReadCommandBytes (64, pM3_23(D), 16);
  instance pointer: pM3_23(D)  Outer instance pointer: pM3_23(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Csec_Ip_ReadCommandBytes (32, pM2_21(D), 32);
  Function call may change dynamic type:Csec_Ip_ReadCommandBytes (16, pM1_19(D), 16);
  Function call may change dynamic type:Csec_Ip_WaitCommandCompletion (_4, 0);
  Function call may change dynamic type:Csec_Ip_ClearErrorFlags ();
Determining dynamic type for call: Csec_Ip_ReadCommandBytes (80, pM4_25(D), 32);
  Starting walk at: Csec_Ip_ReadCommandBytes (80, pM4_25(D), 32);
  instance pointer: pM4_25(D)  Outer instance pointer: pM4_25(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Csec_Ip_ReadCommandBytes (64, pM3_23(D), 16);
  Function call may change dynamic type:Csec_Ip_ReadCommandBytes (32, pM2_21(D), 32);
  Function call may change dynamic type:Csec_Ip_ReadCommandBytes (16, pM1_19(D), 16);
  Function call may change dynamic type:Csec_Ip_WaitCommandCompletion (_4, 0);
  Function call may change dynamic type:Csec_Ip_ClearErrorFlags ();
Determining dynamic type for call: Csec_Ip_ReadCommandBytes (112, pM5_27(D), 16);
  Starting walk at: Csec_Ip_ReadCommandBytes (112, pM5_27(D), 16);
  instance pointer: pM5_27(D)  Outer instance pointer: pM5_27(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Csec_Ip_ReadCommandBytes (80, pM4_25(D), 32);
  Function call may change dynamic type:Csec_Ip_ReadCommandBytes (64, pM3_23(D), 16);
  Function call may change dynamic type:Csec_Ip_ReadCommandBytes (32, pM2_21(D), 32);
  Function call may change dynamic type:Csec_Ip_ReadCommandBytes (16, pM1_19(D), 16);
  Function call may change dynamic type:Csec_Ip_WaitCommandCompletion (_4, 0);
  Function call may change dynamic type:Csec_Ip_ClearErrorFlags ();
Determining dynamic type for call: Csec_Ip_WriteCommandBytes (16, pPlainKey_14(D), 16);
  Starting walk at: Csec_Ip_WriteCommandBytes (16, pPlainKey_14(D), 16);
  instance pointer: pPlainKey_14(D)  Outer instance pointer: pPlainKey_14(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Csec_Ip_ClearErrorFlags ();
Determining dynamic type for call: Csec_Ip_WriteCommandBytes (16, pM1_17(D), 16);
  Starting walk at: Csec_Ip_WriteCommandBytes (16, pM1_17(D), 16);
  instance pointer: pM1_17(D)  Outer instance pointer: pM1_17(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Csec_Ip_ClearErrorFlags ();
Determining dynamic type for call: Csec_Ip_WriteCommandBytes (32, pM2_19(D), 32);
  Starting walk at: Csec_Ip_WriteCommandBytes (32, pM2_19(D), 32);
  instance pointer: pM2_19(D)  Outer instance pointer: pM2_19(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Csec_Ip_WriteCommandBytes (16, pM1_17(D), 16);
  Function call may change dynamic type:Csec_Ip_ClearErrorFlags ();
Determining dynamic type for call: Csec_Ip_WriteCommandBytes (64, pM3_21(D), 16);
  Starting walk at: Csec_Ip_WriteCommandBytes (64, pM3_21(D), 16);
  instance pointer: pM3_21(D)  Outer instance pointer: pM3_21(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Csec_Ip_WriteCommandBytes (32, pM2_19(D), 32);
  Function call may change dynamic type:Csec_Ip_WriteCommandBytes (16, pM1_17(D), 16);
  Function call may change dynamic type:Csec_Ip_ClearErrorFlags ();
Determining dynamic type for call: Csec_Ip_ReadCommandBytes (80, pM4_26(D), 32);
  Starting walk at: Csec_Ip_ReadCommandBytes (80, pM4_26(D), 32);
  instance pointer: pM4_26(D)  Outer instance pointer: pM4_26(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Csec_Ip_WaitCommandCompletion (_4, 0);
  Function call may change dynamic type:Csec_Ip_WriteCommandBytes (64, pM3_21(D), 16);
  Function call may change dynamic type:Csec_Ip_WriteCommandBytes (32, pM2_19(D), 32);
  Function call may change dynamic type:Csec_Ip_WriteCommandBytes (16, pM1_17(D), 16);
  Function call may change dynamic type:Csec_Ip_ClearErrorFlags ();
Determining dynamic type for call: Csec_Ip_ReadCommandBytes (112, pM5_28(D), 16);
  Starting walk at: Csec_Ip_ReadCommandBytes (112, pM5_28(D), 16);
  instance pointer: pM5_28(D)  Outer instance pointer: pM5_28(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Csec_Ip_ReadCommandBytes (80, pM4_26(D), 32);
  Function call may change dynamic type:Csec_Ip_WaitCommandCompletion (_4, 0);
  Function call may change dynamic type:Csec_Ip_WriteCommandBytes (64, pM3_21(D), 16);
  Function call may change dynamic type:Csec_Ip_WriteCommandBytes (32, pM2_19(D), 32);
  Function call may change dynamic type:Csec_Ip_WriteCommandBytes (16, pM1_17(D), 16);
  Function call may change dynamic type:Csec_Ip_ClearErrorFlags ();
Determining dynamic type for call: Csec_Ip_UpdateState (eKeyId_20(D), 6, pMsg_21(D), 0B, _41);
  Starting walk at: Csec_Ip_UpdateState (eKeyId_20(D), 6, pMsg_21(D), 0B, _41);
  instance pointer: pMsg_21(D)  Outer instance pointer: pMsg_21(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Csec_Ip_ClearErrorFlags ();
Determining dynamic type for call: Csec_Ip_UpdateState (eKeyId_20(D), 6, pMsg_21(D), 0B, _41);
  Starting walk at: Csec_Ip_UpdateState (eKeyId_20(D), 6, pMsg_21(D), 0B, _41);
  instance pointer: 0B  Outer instance pointer: 0B offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Csec_Ip_ClearErrorFlags ();
Determining dynamic type for call: Csec_Ip_VerifyMacAsync (pRequest_31(D));
  Starting walk at: Csec_Ip_VerifyMacAsync (pRequest_31(D));
  instance pointer: pRequest_31(D)  Outer instance pointer: pRequest_31(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Csec_Ip_UpdateState (eKeyId_20(D), 6, pMsg_21(D), 0B, _41);
  Function call may change dynamic type:Csec_Ip_ClearErrorFlags ();
Determining dynamic type for call: Csec_Ip_UpdateState (eKeyId_20(D), 5, pMsg_21(D), pCmac_22(D), _35);
  Starting walk at: Csec_Ip_UpdateState (eKeyId_20(D), 5, pMsg_21(D), pCmac_22(D), _35);
  instance pointer: pMsg_21(D)  Outer instance pointer: pMsg_21(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Csec_Ip_ClearErrorFlags ();
Determining dynamic type for call: Csec_Ip_UpdateState (eKeyId_20(D), 5, pMsg_21(D), pCmac_22(D), _35);
  Starting walk at: Csec_Ip_UpdateState (eKeyId_20(D), 5, pMsg_21(D), pCmac_22(D), _35);
  instance pointer: pCmac_22(D)  Outer instance pointer: pCmac_22(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Csec_Ip_ClearErrorFlags ();
Determining dynamic type for call: Csec_Ip_GenerateMacAsync (pRequest_25(D));
  Starting walk at: Csec_Ip_GenerateMacAsync (pRequest_25(D));
  instance pointer: pRequest_25(D)  Outer instance pointer: pRequest_25(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Csec_Ip_UpdateState (eKeyId_20(D), 5, pMsg_21(D), pCmac_22(D), _35);
  Function call may change dynamic type:Csec_Ip_ClearErrorFlags ();
Determining dynamic type for call: Csec_Ip_UpdateState (eKeyId_19(D), 4, pCipherText_20(D), pPlainText_21(D), u32Length_22(D));
  Starting walk at: Csec_Ip_UpdateState (eKeyId_19(D), 4, pCipherText_20(D), pPlainText_21(D), u32Length_22(D));
  instance pointer: pCipherText_20(D)  Outer instance pointer: pCipherText_20(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Csec_Ip_ClearErrorFlags ();
Determining dynamic type for call: Csec_Ip_UpdateState (eKeyId_19(D), 4, pCipherText_20(D), pPlainText_21(D), u32Length_22(D));
  Starting walk at: Csec_Ip_UpdateState (eKeyId_19(D), 4, pCipherText_20(D), pPlainText_21(D), u32Length_22(D));
  instance pointer: pPlainText_21(D)  Outer instance pointer: pPlainText_21(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Csec_Ip_ClearErrorFlags ();
Determining dynamic type for call: Csec_Ip_DecryptCbcAsync (pRequest_26(D));
  Starting walk at: Csec_Ip_DecryptCbcAsync (pRequest_26(D));
  instance pointer: pRequest_26(D)  Outer instance pointer: pRequest_26(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Csec_Ip_UpdateState (eKeyId_19(D), 4, pCipherText_20(D), pPlainText_21(D), u32Length_22(D));
  Function call may change dynamic type:Csec_Ip_ClearErrorFlags ();
Determining dynamic type for call: Csec_Ip_UpdateState (eKeyId_19(D), 2, pPlainText_20(D), pCipherText_21(D), u32Length_22(D));
  Starting walk at: Csec_Ip_UpdateState (eKeyId_19(D), 2, pPlainText_20(D), pCipherText_21(D), u32Length_22(D));
  instance pointer: pPlainText_20(D)  Outer instance pointer: pPlainText_20(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Csec_Ip_ClearErrorFlags ();
Determining dynamic type for call: Csec_Ip_UpdateState (eKeyId_19(D), 2, pPlainText_20(D), pCipherText_21(D), u32Length_22(D));
  Starting walk at: Csec_Ip_UpdateState (eKeyId_19(D), 2, pPlainText_20(D), pCipherText_21(D), u32Length_22(D));
  instance pointer: pCipherText_21(D)  Outer instance pointer: pCipherText_21(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Csec_Ip_ClearErrorFlags ();
Determining dynamic type for call: Csec_Ip_EncryptCbcAsync (pRequest_26(D));
  Starting walk at: Csec_Ip_EncryptCbcAsync (pRequest_26(D));
  instance pointer: pRequest_26(D)  Outer instance pointer: pRequest_26(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Csec_Ip_UpdateState (eKeyId_19(D), 2, pPlainText_20(D), pCipherText_21(D), u32Length_22(D));
  Function call may change dynamic type:Csec_Ip_ClearErrorFlags ();
Determining dynamic type for call: Csec_Ip_UpdateState (eKeyId_18(D), 3, pCipherText_19(D), pPlainText_20(D), u32Length_21(D));
  Starting walk at: Csec_Ip_UpdateState (eKeyId_18(D), 3, pCipherText_19(D), pPlainText_20(D), u32Length_21(D));
  instance pointer: pCipherText_19(D)  Outer instance pointer: pCipherText_19(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Csec_Ip_ClearErrorFlags ();
Determining dynamic type for call: Csec_Ip_UpdateState (eKeyId_18(D), 3, pCipherText_19(D), pPlainText_20(D), u32Length_21(D));
  Starting walk at: Csec_Ip_UpdateState (eKeyId_18(D), 3, pCipherText_19(D), pPlainText_20(D), u32Length_21(D));
  instance pointer: pPlainText_20(D)  Outer instance pointer: pPlainText_20(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Csec_Ip_ClearErrorFlags ();
Determining dynamic type for call: Csec_Ip_DecryptEcbAsync (pRequest_23(D));
  Starting walk at: Csec_Ip_DecryptEcbAsync (pRequest_23(D));
  instance pointer: pRequest_23(D)  Outer instance pointer: pRequest_23(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Csec_Ip_UpdateState (eKeyId_18(D), 3, pCipherText_19(D), pPlainText_20(D), u32Length_21(D));
  Function call may change dynamic type:Csec_Ip_ClearErrorFlags ();
Determining dynamic type for call: Csec_Ip_UpdateState (eKeyId_18(D), 1, pPlainText_19(D), pCipherText_20(D), u32Length_21(D));
  Starting walk at: Csec_Ip_UpdateState (eKeyId_18(D), 1, pPlainText_19(D), pCipherText_20(D), u32Length_21(D));
  instance pointer: pPlainText_19(D)  Outer instance pointer: pPlainText_19(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Csec_Ip_ClearErrorFlags ();
Determining dynamic type for call: Csec_Ip_UpdateState (eKeyId_18(D), 1, pPlainText_19(D), pCipherText_20(D), u32Length_21(D));
  Starting walk at: Csec_Ip_UpdateState (eKeyId_18(D), 1, pPlainText_19(D), pCipherText_20(D), u32Length_21(D));
  instance pointer: pCipherText_20(D)  Outer instance pointer: pCipherText_20(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Csec_Ip_ClearErrorFlags ();
Determining dynamic type for call: Csec_Ip_EncryptEcbAsync (pRequest_23(D));
  Starting walk at: Csec_Ip_EncryptEcbAsync (pRequest_23(D));
  instance pointer: pRequest_23(D)  Outer instance pointer: pRequest_23(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Csec_Ip_UpdateState (eKeyId_18(D), 1, pPlainText_19(D), pCipherText_20(D), u32Length_21(D));
  Function call may change dynamic type:Csec_Ip_ClearErrorFlags ();
Determining dynamic type for call: Csec_Ip_WriteCommandBytes (16, _9, iftmp.157_21);
  Starting walk at: Csec_Ip_WriteCommandBytes (16, _9, iftmp.157_21);
  instance pointer: _9  Outer instance pointer: _9 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Csec_Ip_WriteCommandBytes (_13, _15, 16);
  Starting walk at: Csec_Ip_WriteCommandBytes (_13, _15, 16);
  instance pointer: _15  Outer instance pointer: _15 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Csec_Ip_WriteCommandHalfWord (8, _12);
  Function call may change dynamic type:Csec_Ip_WriteCommandBytes (16, _9, iftmp.157_21);
Determining dynamic type for call: Csec_Ip_ReadCommandBytes (32, _8, 16);
  Starting walk at: Csec_Ip_ReadCommandBytes (32, _8, 16);
  instance pointer: _8  Outer instance pointer: _8 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Csec_Ip_WriteCommandBytes (16, _8, iftmp.118_14);
  Starting walk at: Csec_Ip_WriteCommandBytes (16, _8, iftmp.118_14);
  instance pointer: _8  Outer instance pointer: _8 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Csec_Ip_ReadCommandBytes (16, _12, _13);
  Starting walk at: Csec_Ip_ReadCommandBytes (16, _12, _13);
  instance pointer: _12  Outer instance pointer: _12 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Csec_Ip_ReadCommandBytes (32, _7, _8);
  Starting walk at: Csec_Ip_ReadCommandBytes (32, _7, _8);
  instance pointer: _7  Outer instance pointer: _7 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Csec_Ip_WriteCommandBytes (16, _16, u8NumBytes_31);
  Starting walk at: Csec_Ip_WriteCommandBytes (16, _16, u8NumBytes_31);
  instance pointer: _16  Outer instance pointer: _16 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Csec_Ip_WriteCommandBytes (16, _9, 16);
  Starting walk at: Csec_Ip_WriteCommandBytes (16, _9, 16);
  instance pointer: _9  Outer instance pointer: _9 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Csec_Ip_WriteCommandBytes (32, _13, u8NumBytes_33);
  Starting walk at: Csec_Ip_WriteCommandBytes (32, _13, u8NumBytes_33);
  instance pointer: _13  Outer instance pointer: _13 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Csec_Ip_WriteCommandBytes (16, _9, 16);
Determining dynamic type for call: Csec_Ip_ReadCommandBytes (16, _4, _5);
  Starting walk at: Csec_Ip_ReadCommandBytes (16, _4, _5);
  instance pointer: _4  Outer instance pointer: _4 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Csec_Ip_WriteCommandBytes (16, _8, u8NumBytes_16);
  Starting walk at: Csec_Ip_WriteCommandBytes (16, _8, u8NumBytes_16);
  instance pointer: _8  Outer instance pointer: _8 offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Csec_Ip_CancelCommand.part.0/103:
  Jump functions of caller  Csec_Ip_ProcessReceivedResponse.part.0/75:
    callsite  Csec_Ip_ProcessReceivedResponse.part.0/75 -> Csec_Ip_ContinueEncDecECBCmd/17 : 
    callsite  Csec_Ip_ProcessReceivedResponse.part.0/75 -> Csec_Ip_ContinueEncDecCBCCmd/19 : 
    callsite  Csec_Ip_ProcessReceivedResponse.part.0/75 -> Csec_Ip_ContinueGenMACCmd/21 : 
    callsite  Csec_Ip_ProcessReceivedResponse.part.0/75 -> Csec_Ip_ContinueVerifMACCmd/23 : 
    callsite  Csec_Ip_ProcessReceivedResponse.part.0/75 -> Csec_Ip_ReadCommandBytes/12 : 
       param 0: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
    callsite  Csec_Ip_ProcessReceivedResponse.part.0/75 -> Csec_Ip_SetInterrupt/13 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _13 (CsecResponse_16, _17, _18);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Csec_Ip_ContinueEncDecCBCCmd.part.0/67:
    callsite  Csec_Ip_ContinueEncDecCBCCmd.part.0/67 -> Csec_Ip_StartEncDecCBCCmd/18 : 
  Jump functions of caller  SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_12/63:
  Jump functions of caller  SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_12/62:
  Jump functions of caller  OsIf_GetElapsed/61:
  Jump functions of caller  OsIf_GetCounter/60:
  Jump functions of caller  OsIf_MicrosToTicks/59:
  Jump functions of caller  Csec_Ip_GenerateMacAddrMode/58:
    callsite  Csec_Ip_GenerateMacAddrMode/58 -> Csec_Ip_ReadCommandBytes/12 : 
       param 0: CONST: 32
         value: 0x20, mask: 0x0
         Unknown VR
       param 1: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
    callsite  Csec_Ip_GenerateMacAddrMode/58 -> Csec_Ip_WriteCmdAndWait/1 : 
       param 0: CONST: 5
         value: 0x5, mask: 0x0
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 3: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Csec_Ip_GenerateMacAddrMode/58 -> Csec_Ip_ClearErrorFlags/2 : 
  Jump functions of caller  Csec_Ip_VerifyMacAddrMode/57:
    callsite  Csec_Ip_VerifyMacAddrMode/57 -> Csec_Ip_WriteCmdAndWait/1 : 
       param 0: CONST: 6
         value: 0x6, mask: 0x0
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 3: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Csec_Ip_VerifyMacAddrMode/57 -> Csec_Ip_WriteCommandHalfWord/6 : 
       param 0: CONST: 8
         value: 0x8, mask: 0x0
         Unknown VR
       param 1: PASS THROUGH: 4, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  Csec_Ip_VerifyMacAddrMode/57 -> Csec_Ip_WriteCommandBytes/4 : 
       param 0: CONST: 32
         value: 0x20, mask: 0x0
         Unknown VR
       param 1: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
    callsite  Csec_Ip_VerifyMacAddrMode/57 -> Csec_Ip_ClearErrorFlags/2 : 
  Jump functions of caller  Csec_Ip_GetStatus/56:
  Jump functions of caller  Csec_Ip_SetSynchronousCmdTimeout/55:
  Jump functions of caller  Csec_Ip_IrqHandler/54:
    callsite  Csec_Ip_IrqHandler/54 -> Csec_Ip_ProcessReceivedResponse/24 : 
       param 0: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
    callsite  Csec_Ip_IrqHandler/54 -> Csec_Ip_SetInterrupt/13 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Csec_Ip_IrqHandler/54 -> Csec_Ip_SetInterrupt/13 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  Csec_Ip_CancelCommand/53:
    callsite  Csec_Ip_CancelCommand/53 -> Csec_Ip_CancelCommand.part.0/103 : 
    callsite  Csec_Ip_CancelCommand/53 -> Csec_Ip_WaitCommandCompletion/8 : 
       param 0: CONST: 10000000
         value: 0x989680, mask: 0x0
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Csec_Ip_CancelCommand/53 -> Csec_Ip_WriteCommandHeader/7 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 2: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Csec_Ip_CancelCommand/53 -> Csec_Ip_WaitCommandCompletion/8 : 
       param 0: CONST: 10000000
         value: 0x989680, mask: 0x0
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Csec_Ip_CancelCommand/53 -> Csec_Ip_SetInterrupt/13 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  Csec_Ip_MainFunction/52:
    callsite  Csec_Ip_MainFunction/52 -> Csec_Ip_ProcessReceivedResponse/24 : 
       param 0: CONST: 2
         value: 0x2, mask: 0x0
         Unknown VR
  Jump functions of caller  Csec_Ip_MpCompress/51:
    callsite  Csec_Ip_MpCompress/51 -> Csec_Ip_ReadCommandBytes/12 : 
       param 0: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
       param 1: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
    callsite  Csec_Ip_MpCompress/51 -> Csec_Ip_CancelCommand/53 : 
    callsite  Csec_Ip_MpCompress/51 -> Csec_Ip_WaitCommandCompletion/8 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Csec_Ip_MpCompress/51 -> Csec_Ip_WriteCommandHalfWord/6 : 
       param 0: CONST: 14
         value: 0xe, mask: 0x0
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  Csec_Ip_MpCompress/51 -> Csec_Ip_WriteCommandBytes/4 : 
       param 0: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0x70
         VR  [16, 112]
    callsite  Csec_Ip_MpCompress/51 -> Csec_Ip_UpdateState/3 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 1: CONST: 22
         value: 0x16, mask: 0x0
         Unknown VR
       param 2: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 4: UNKNOWN
         value: 0x0, mask: 0xffff0
         VR  [0, 1048560]
    callsite  Csec_Ip_MpCompress/51 -> Csec_Ip_ClearErrorFlags/2 : 
  Jump functions of caller  Csec_Ip_DbgAuth/50:
    callsite  Csec_Ip_DbgAuth/50 -> Csec_Ip_WaitCommandCompletion/8 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Csec_Ip_DbgAuth/50 -> Csec_Ip_WriteCommandBytes/4 : 
       param 0: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
       param 1: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
    callsite  Csec_Ip_DbgAuth/50 -> Csec_Ip_ClearErrorFlags/2 : 
  Jump functions of caller  Csec_Ip_DbgChal/49:
    callsite  Csec_Ip_DbgChal/49 -> Csec_Ip_ReadCommandBytes/12 : 
       param 0: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
       param 1: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
    callsite  Csec_Ip_DbgChal/49 -> Csec_Ip_WaitCommandCompletion/8 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Csec_Ip_DbgChal/49 -> Csec_Ip_ClearErrorFlags/2 : 
  Jump functions of caller  Csec_Ip_GetId/48:
    callsite  Csec_Ip_GetId/48 -> Csec_Ip_ReadCommandBytes/12 : 
       param 0: CONST: 48
         value: 0x30, mask: 0x0
         Unknown VR
       param 1: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
    callsite  Csec_Ip_GetId/48 -> Csec_Ip_ReadCommandBytes/12 : 
       param 0: CONST: 32
         value: 0x20, mask: 0x0
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: CONST: 15
         value: 0xf, mask: 0x0
         Unknown VR
    callsite  Csec_Ip_GetId/48 -> Csec_Ip_WaitCommandCompletion/8 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Csec_Ip_GetId/48 -> Csec_Ip_WriteCommandBytes/4 : 
       param 0: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
       param 1: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
    callsite  Csec_Ip_GetId/48 -> Csec_Ip_ClearErrorFlags/2 : 
  Jump functions of caller  Csec_Ip_BootDefine/47:
    callsite  Csec_Ip_BootDefine/47 -> Csec_Ip_WaitCommandCompletion/8 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Csec_Ip_BootDefine/47 -> Csec_Ip_WriteCommandByte/5 : 
       param 0: CONST: 27
         value: 0x1b, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Csec_Ip_BootDefine/47 -> Csec_Ip_ClearErrorFlags/2 : 
  Jump functions of caller  Csec_Ip_BootOk/46:
    callsite  Csec_Ip_BootOk/46 -> Csec_Ip_WaitCommandCompletion/8 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Csec_Ip_BootOk/46 -> Csec_Ip_ClearErrorFlags/2 : 
  Jump functions of caller  Csec_Ip_BootFailure/45:
    callsite  Csec_Ip_BootFailure/45 -> Csec_Ip_WaitCommandCompletion/8 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Csec_Ip_BootFailure/45 -> Csec_Ip_ClearErrorFlags/2 : 
  Jump functions of caller  Csec_Ip_GenerateRnd/44:
    callsite  Csec_Ip_GenerateRnd/44 -> Csec_Ip_SetInterrupt/13 : 
       param 0: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
    callsite  Csec_Ip_GenerateRnd/44 -> Csec_Ip_ReadCommandBytes/12 : 
       param 0: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
    callsite  Csec_Ip_GenerateRnd/44 -> Csec_Ip_WaitCommandCompletion/8 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Csec_Ip_GenerateRnd/44 -> Csec_Ip_ClearErrorFlags/2 : 
    callsite  Csec_Ip_GenerateRnd/44 -> Csec_Ip_UpdateState/3 : 
       param 0: CONST: 255
         value: 0xff, mask: 0x0
         Unknown VR
       param 1: CONST: 12
         value: 0xc, mask: 0x0
         Unknown VR
       param 2: CONST: 0B
         value: 0x0, mask: 0xfffffff8
         Unknown VR
       param 3: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 4: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  Csec_Ip_ExtendSeed/43:
    callsite  Csec_Ip_ExtendSeed/43 -> Csec_Ip_WaitCommandCompletion/8 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Csec_Ip_ExtendSeed/43 -> Csec_Ip_WriteCommandBytes/4 : 
       param 0: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
       param 1: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
    callsite  Csec_Ip_ExtendSeed/43 -> Csec_Ip_ClearErrorFlags/2 : 
  Jump functions of caller  Csec_Ip_InitRng/42:
    callsite  Csec_Ip_InitRng/42 -> Csec_Ip_WaitCommandCompletion/8 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Csec_Ip_InitRng/42 -> Csec_Ip_ClearErrorFlags/2 : 
  Jump functions of caller  Csec_Ip_ExportRamKey/41:
    callsite  Csec_Ip_ExportRamKey/41 -> Csec_Ip_ReadCommandBytes/12 : 
       param 0: CONST: 112
         value: 0x70, mask: 0x0
         Unknown VR
       param 1: PASS THROUGH: 4, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
    callsite  Csec_Ip_ExportRamKey/41 -> Csec_Ip_ReadCommandBytes/12 : 
       param 0: CONST: 80
         value: 0x50, mask: 0x0
         Unknown VR
       param 1: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: CONST: 32
         value: 0x20, mask: 0x0
         Unknown VR
    callsite  Csec_Ip_ExportRamKey/41 -> Csec_Ip_ReadCommandBytes/12 : 
       param 0: CONST: 64
         value: 0x40, mask: 0x0
         Unknown VR
       param 1: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
    callsite  Csec_Ip_ExportRamKey/41 -> Csec_Ip_ReadCommandBytes/12 : 
       param 0: CONST: 32
         value: 0x20, mask: 0x0
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: CONST: 32
         value: 0x20, mask: 0x0
         Unknown VR
    callsite  Csec_Ip_ExportRamKey/41 -> Csec_Ip_ReadCommandBytes/12 : 
       param 0: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
       param 1: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
    callsite  Csec_Ip_ExportRamKey/41 -> Csec_Ip_WaitCommandCompletion/8 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Csec_Ip_ExportRamKey/41 -> Csec_Ip_ClearErrorFlags/2 : 
  Jump functions of caller  Csec_Ip_LoadPlainKey/40:
    callsite  Csec_Ip_LoadPlainKey/40 -> Csec_Ip_WaitCommandCompletion/8 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Csec_Ip_LoadPlainKey/40 -> Csec_Ip_WriteCommandBytes/4 : 
       param 0: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
       param 1: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
    callsite  Csec_Ip_LoadPlainKey/40 -> Csec_Ip_ClearErrorFlags/2 : 
  Jump functions of caller  Csec_Ip_LoadKey/39:
    callsite  Csec_Ip_LoadKey/39 -> Csec_Ip_ReadCommandBytes/12 : 
       param 0: CONST: 112
         value: 0x70, mask: 0x0
         Unknown VR
       param 1: PASS THROUGH: 5, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
    callsite  Csec_Ip_LoadKey/39 -> Csec_Ip_ReadCommandBytes/12 : 
       param 0: CONST: 80
         value: 0x50, mask: 0x0
         Unknown VR
       param 1: PASS THROUGH: 4, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: CONST: 32
         value: 0x20, mask: 0x0
         Unknown VR
    callsite  Csec_Ip_LoadKey/39 -> Csec_Ip_WaitCommandCompletion/8 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Csec_Ip_LoadKey/39 -> Csec_Ip_WriteCommandBytes/4 : 
       param 0: CONST: 64
         value: 0x40, mask: 0x0
         Unknown VR
       param 1: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
    callsite  Csec_Ip_LoadKey/39 -> Csec_Ip_WriteCommandBytes/4 : 
       param 0: CONST: 32
         value: 0x20, mask: 0x0
         Unknown VR
       param 1: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: CONST: 32
         value: 0x20, mask: 0x0
         Unknown VR
    callsite  Csec_Ip_LoadKey/39 -> Csec_Ip_WriteCommandBytes/4 : 
       param 0: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
    callsite  Csec_Ip_LoadKey/39 -> Csec_Ip_ClearErrorFlags/2 : 
  Jump functions of caller  Csec_Ip_VerifyMac/38:
    callsite  Csec_Ip_VerifyMac/38 -> Csec_Ip_VerifyMacAsync/30 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Csec_Ip_VerifyMac/38 -> Csec_Ip_ContinueVerifMACCmd/23 : 
    callsite  Csec_Ip_VerifyMac/38 -> Csec_Ip_CancelCommand/53 : 
    callsite  Csec_Ip_VerifyMac/38 -> Csec_Ip_WaitCommandCompletion/8 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Csec_Ip_VerifyMac/38 -> Csec_Ip_StartVerifMACCmd/22 : 
    callsite  Csec_Ip_VerifyMac/38 -> Csec_Ip_UpdateState/3 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 6
         value: 0x6, mask: 0x0
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: CONST: 0B
         value: 0x0, mask: 0xfffffff8
         Unknown VR
       param 4: UNKNOWN
         value: 0x0, mask: 0x1fffffff
         VR  [0, 536870911]
    callsite  Csec_Ip_VerifyMac/38 -> Csec_Ip_ClearErrorFlags/2 : 
  Jump functions of caller  Csec_Ip_GenerateMac/37:
    callsite  Csec_Ip_GenerateMac/37 -> Csec_Ip_GenerateMacAsync/29 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Csec_Ip_GenerateMac/37 -> Csec_Ip_ContinueGenMACCmd/21 : 
    callsite  Csec_Ip_GenerateMac/37 -> Csec_Ip_CancelCommand/53 : 
    callsite  Csec_Ip_GenerateMac/37 -> Csec_Ip_WaitCommandCompletion/8 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Csec_Ip_GenerateMac/37 -> Csec_Ip_StartGenMACCmd/20 : 
    callsite  Csec_Ip_GenerateMac/37 -> Csec_Ip_UpdateState/3 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 5
         value: 0x5, mask: 0x0
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: PASS THROUGH: 4, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 4: UNKNOWN
         value: 0x0, mask: 0x1fffffff
         VR  [0, 536870911]
    callsite  Csec_Ip_GenerateMac/37 -> Csec_Ip_ClearErrorFlags/2 : 
  Jump functions of caller  Csec_Ip_DecryptCbc/36:
    callsite  Csec_Ip_DecryptCbc/36 -> Csec_Ip_DecryptCbcAsync/28 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Csec_Ip_DecryptCbc/36 -> Csec_Ip_ContinueEncDecCBCCmd/19 : 
    callsite  Csec_Ip_DecryptCbc/36 -> Csec_Ip_CancelCommand/53 : 
    callsite  Csec_Ip_DecryptCbc/36 -> Csec_Ip_WaitCommandCompletion/8 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Csec_Ip_DecryptCbc/36 -> Csec_Ip_StartEncDecCBCCmd/18 : 
    callsite  Csec_Ip_DecryptCbc/36 -> Csec_Ip_UpdateState/3 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 4
         value: 0x4, mask: 0x0
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: PASS THROUGH: 5, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 4: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Csec_Ip_DecryptCbc/36 -> Csec_Ip_ClearErrorFlags/2 : 
  Jump functions of caller  Csec_Ip_EncryptCbc/35:
    callsite  Csec_Ip_EncryptCbc/35 -> Csec_Ip_EncryptCbcAsync/27 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Csec_Ip_EncryptCbc/35 -> Csec_Ip_ContinueEncDecCBCCmd/19 : 
    callsite  Csec_Ip_EncryptCbc/35 -> Csec_Ip_CancelCommand/53 : 
    callsite  Csec_Ip_EncryptCbc/35 -> Csec_Ip_WaitCommandCompletion/8 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Csec_Ip_EncryptCbc/35 -> Csec_Ip_StartEncDecCBCCmd/18 : 
    callsite  Csec_Ip_EncryptCbc/35 -> Csec_Ip_UpdateState/3 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 2
         value: 0x2, mask: 0x0
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: PASS THROUGH: 5, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 4: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Csec_Ip_EncryptCbc/35 -> Csec_Ip_ClearErrorFlags/2 : 
  Jump functions of caller  Csec_Ip_DecryptEcb/34:
    callsite  Csec_Ip_DecryptEcb/34 -> Csec_Ip_DecryptEcbAsync/26 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Csec_Ip_DecryptEcb/34 -> Csec_Ip_ContinueEncDecECBCmd/17 : 
    callsite  Csec_Ip_DecryptEcb/34 -> Csec_Ip_CancelCommand/53 : 
    callsite  Csec_Ip_DecryptEcb/34 -> Csec_Ip_WaitCommandCompletion/8 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Csec_Ip_DecryptEcb/34 -> Csec_Ip_StartEncDecECBCmd/16 : 
    callsite  Csec_Ip_DecryptEcb/34 -> Csec_Ip_UpdateState/3 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 3
         value: 0x3, mask: 0x0
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: PASS THROUGH: 4, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 4: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Csec_Ip_DecryptEcb/34 -> Csec_Ip_ClearErrorFlags/2 : 
  Jump functions of caller  Csec_Ip_EncryptEcb/33:
    callsite  Csec_Ip_EncryptEcb/33 -> Csec_Ip_EncryptEcbAsync/25 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Csec_Ip_EncryptEcb/33 -> Csec_Ip_ContinueEncDecECBCmd/17 : 
    callsite  Csec_Ip_EncryptEcb/33 -> Csec_Ip_CancelCommand/53 : 
    callsite  Csec_Ip_EncryptEcb/33 -> Csec_Ip_WaitCommandCompletion/8 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Csec_Ip_EncryptEcb/33 -> Csec_Ip_StartEncDecECBCmd/16 : 
    callsite  Csec_Ip_EncryptEcb/33 -> Csec_Ip_UpdateState/3 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: PASS THROUGH: 4, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 4: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Csec_Ip_EncryptEcb/33 -> Csec_Ip_ClearErrorFlags/2 : 
  Jump functions of caller  Csec_Ip_Deinit/32:
  Jump functions of caller  Csec_Ip_Init/31:
  Jump functions of caller  Csec_Ip_VerifyMacAsync/30:
    callsite  Csec_Ip_VerifyMacAsync/30 -> Csec_Ip_SetInterrupt/13 : 
       param 0: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
    callsite  Csec_Ip_VerifyMacAsync/30 -> Csec_Ip_StartVerifMACCmd/22 : 
  Jump functions of caller  Csec_Ip_GenerateMacAsync/29:
    callsite  Csec_Ip_GenerateMacAsync/29 -> Csec_Ip_SetInterrupt/13 : 
       param 0: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
    callsite  Csec_Ip_GenerateMacAsync/29 -> Csec_Ip_StartGenMACCmd/20 : 
  Jump functions of caller  Csec_Ip_DecryptCbcAsync/28:
  Jump functions of caller  Csec_Ip_EncryptCbcAsync/27:
    callsite  Csec_Ip_EncryptCbcAsync/27 -> Csec_Ip_SetInterrupt/13 : 
       param 0: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
    callsite  Csec_Ip_EncryptCbcAsync/27 -> Csec_Ip_StartEncDecCBCCmd/18 : 
  Jump functions of caller  Csec_Ip_DecryptEcbAsync/26:
  Jump functions of caller  Csec_Ip_EncryptEcbAsync/25:
    callsite  Csec_Ip_EncryptEcbAsync/25 -> Csec_Ip_SetInterrupt/13 : 
       param 0: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
    callsite  Csec_Ip_EncryptEcbAsync/25 -> Csec_Ip_StartEncDecECBCmd/16 : 
  Jump functions of caller  Csec_Ip_ProcessReceivedResponse/24:
    callsite  Csec_Ip_ProcessReceivedResponse/24 -> Csec_Ip_ProcessReceivedResponse.part.0/75 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Csec_Ip_ContinueVerifMACCmd/23:
    callsite  Csec_Ip_ContinueVerifMACCmd/23 -> Csec_Ip_StartVerifMACCmd/22 : 
  Jump functions of caller  Csec_Ip_StartVerifMACCmd/22:
    callsite  Csec_Ip_StartVerifMACCmd/22 -> Csec_Ip_WriteCommandHeader/7 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Csec_Ip_StartVerifMACCmd/22 -> Csec_Ip_WriteCommandBytes/4 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x70
         VR  [16, 111]
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
    callsite  Csec_Ip_StartVerifMACCmd/22 -> Csec_Ip_WriteCommandHalfWord/6 : 
       param 0: CONST: 8
         value: 0x8, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  Csec_Ip_StartVerifMACCmd/22 -> Csec_Ip_WriteCommandBytes/4 : 
       param 0: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Csec_Ip_ContinueGenMACCmd/21:
    callsite  Csec_Ip_ContinueGenMACCmd/21 -> Csec_Ip_StartGenMACCmd/20 : 
    callsite  Csec_Ip_ContinueGenMACCmd/21 -> Csec_Ip_ReadCommandBytes/12 : 
       param 0: CONST: 32
         value: 0x20, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
  Jump functions of caller  Csec_Ip_StartGenMACCmd/20:
    callsite  Csec_Ip_StartGenMACCmd/20 -> Csec_Ip_WriteCommandHeader/7 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Csec_Ip_StartGenMACCmd/20 -> Csec_Ip_WriteCommandBytes/4 : 
       param 0: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Csec_Ip_ContinueEncDecCBCCmd/19:
    callsite  Csec_Ip_ContinueEncDecCBCCmd/19 -> Csec_Ip_ContinueEncDecCBCCmd.part.0/67 : 
    callsite  Csec_Ip_ContinueEncDecCBCCmd/19 -> Csec_Ip_ReadCommandBytes/12 : 
       param 0: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Csec_Ip_ContinueEncDecCBCCmd/19 -> Csec_Ip_ReadCommandBytes/12 : 
       param 0: CONST: 32
         value: 0x20, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Csec_Ip_StartEncDecCBCCmd/18:
    callsite  Csec_Ip_StartEncDecCBCCmd/18 -> Csec_Ip_WriteCommandHeader/7 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Csec_Ip_StartEncDecCBCCmd/18 -> Csec_Ip_WriteCommandHalfWord/6 : 
       param 0: CONST: 14
         value: 0xe, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  Csec_Ip_StartEncDecCBCCmd/18 -> Csec_Ip_WriteCommandBytes/4 : 
       param 0: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0x70
         VR  [0, 112]
    callsite  Csec_Ip_StartEncDecCBCCmd/18 -> Csec_Ip_WriteCommandBytes/4 : 
       param 0: CONST: 32
         value: 0x20, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0x70
         VR  [0, 96]
    callsite  Csec_Ip_StartEncDecCBCCmd/18 -> Csec_Ip_WriteCommandBytes/4 : 
       param 0: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
  Jump functions of caller  Csec_Ip_ContinueEncDecECBCmd/17:
    callsite  Csec_Ip_ContinueEncDecECBCmd/17 -> Csec_Ip_StartEncDecECBCmd/16 : 
    callsite  Csec_Ip_ContinueEncDecECBCmd/17 -> Csec_Ip_ReadCommandBytes/12 : 
       param 0: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Csec_Ip_StartEncDecECBCmd/16:
    callsite  Csec_Ip_StartEncDecECBCmd/16 -> Csec_Ip_WriteCommandHeader/7 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Csec_Ip_StartEncDecECBCmd/16 -> Csec_Ip_WriteCommandHalfWord/6 : 
       param 0: CONST: 14
         value: 0xe, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0x7
         VR  [0, 7]
    callsite  Csec_Ip_StartEncDecECBCmd/16 -> Csec_Ip_WriteCommandBytes/4 : 
       param 0: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0x70
         VR  [0, 112]
  Jump functions of caller  Csec_Ip_SetInterrupt/13:
  Jump functions of caller  Csec_Ip_ReadCommandBytes/12:
    callsite  Csec_Ip_ReadCommandBytes/12 -> Csec_Ip_ReadCommandByte/11 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Csec_Ip_ReadCommandByte/11:
  Jump functions of caller  Csec_Ip_WaitCommandCompletion/8:
  Jump functions of caller  Csec_Ip_WriteCommandHeader/7:
  Jump functions of caller  Csec_Ip_WriteCommandHalfWord/6:
  Jump functions of caller  Csec_Ip_WriteCommandByte/5:
  Jump functions of caller  Csec_Ip_WriteCommandBytes/4:
    callsite  Csec_Ip_WriteCommandBytes/4 -> Csec_Ip_WriteCommandByte/5 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Csec_Ip_UpdateState/3:
  Jump functions of caller  Csec_Ip_ClearErrorFlags/2:
  Jump functions of caller  Csec_Ip_WriteCmdAndWait/1:

 Propagating constants:

Not considering Csec_Ip_GenerateMacAddrMode for cloning; -fipa-cp-clone disabled.
Not considering Csec_Ip_VerifyMacAddrMode for cloning; -fipa-cp-clone disabled.
Not considering Csec_Ip_GetStatus for cloning; -fipa-cp-clone disabled.
Not considering Csec_Ip_SetSynchronousCmdTimeout for cloning; -fipa-cp-clone disabled.
Not considering Csec_Ip_IrqHandler for cloning; -fipa-cp-clone disabled.
Not considering Csec_Ip_CancelCommand for cloning; -fipa-cp-clone disabled.
Not considering Csec_Ip_MainFunction for cloning; -fipa-cp-clone disabled.
Not considering Csec_Ip_MpCompress for cloning; -fipa-cp-clone disabled.
Not considering Csec_Ip_DbgAuth for cloning; -fipa-cp-clone disabled.
Not considering Csec_Ip_DbgChal for cloning; -fipa-cp-clone disabled.
Not considering Csec_Ip_GetId for cloning; -fipa-cp-clone disabled.
Not considering Csec_Ip_BootDefine for cloning; -fipa-cp-clone disabled.
Not considering Csec_Ip_BootOk for cloning; -fipa-cp-clone disabled.
Not considering Csec_Ip_BootFailure for cloning; -fipa-cp-clone disabled.
Not considering Csec_Ip_GenerateRnd for cloning; -fipa-cp-clone disabled.
Not considering Csec_Ip_ExtendSeed for cloning; -fipa-cp-clone disabled.
Not considering Csec_Ip_InitRng for cloning; -fipa-cp-clone disabled.
Not considering Csec_Ip_ExportRamKey for cloning; -fipa-cp-clone disabled.
Not considering Csec_Ip_LoadPlainKey for cloning; -fipa-cp-clone disabled.
Not considering Csec_Ip_LoadKey for cloning; -fipa-cp-clone disabled.
Not considering Csec_Ip_VerifyMac for cloning; -fipa-cp-clone disabled.
Not considering Csec_Ip_GenerateMac for cloning; -fipa-cp-clone disabled.
Not considering Csec_Ip_DecryptCbc for cloning; -fipa-cp-clone disabled.
Not considering Csec_Ip_EncryptCbc for cloning; -fipa-cp-clone disabled.
Not considering Csec_Ip_DecryptEcb for cloning; -fipa-cp-clone disabled.
Not considering Csec_Ip_EncryptEcb for cloning; -fipa-cp-clone disabled.
Not considering Csec_Ip_Deinit for cloning; -fipa-cp-clone disabled.
Not considering Csec_Ip_Init for cloning; -fipa-cp-clone disabled.

overall_size: 1540, max_new_size: 11001
 - context independent values, size: 6, time_benefit: 3.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 8, time_benefit: 6.000000
     Decided to specialize for all known contexts, code not going to grow.

IPA lattices after all propagation:

Lattices:
  Node: Csec_Ip_CancelCommand.part.0/103:
  Node: Csec_Ip_ProcessReceivedResponse.part.0/75:
    param [0]: 1 [loc_time: 1, loc_size: 60, prop_time: 0, prop_size: 0]
               2 [loc_time: 1, loc_size: 58, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x1, mask = 0x3
         Csec_Ip_ReqTypeType [1, 2]
        AGGS VARIABLE
  Node: Csec_Ip_ContinueEncDecCBCCmd.part.0/67:
  Node: Csec_Ip_GenerateMacAddrMode/58:
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
  Node: Csec_Ip_VerifyMacAddrMode/57:
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
  Node: Csec_Ip_GetStatus/56:
  Node: Csec_Ip_SetSynchronousCmdTimeout/55:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Csec_Ip_IrqHandler/54:
  Node: Csec_Ip_CancelCommand/53:
  Node: Csec_Ip_MainFunction/52:
  Node: Csec_Ip_MpCompress/51:
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
  Node: Csec_Ip_DbgAuth/50:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Csec_Ip_DbgChal/49:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Csec_Ip_GetId/48:
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
  Node: Csec_Ip_BootDefine/47:
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
  Node: Csec_Ip_BootOk/46:
  Node: Csec_Ip_BootFailure/45:
  Node: Csec_Ip_GenerateRnd/44:
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
  Node: Csec_Ip_ExtendSeed/43:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Csec_Ip_InitRng/42:
  Node: Csec_Ip_ExportRamKey/41:
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
  Node: Csec_Ip_LoadPlainKey/40:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Csec_Ip_LoadKey/39:
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
  Node: Csec_Ip_VerifyMac/38:
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
  Node: Csec_Ip_GenerateMac/37:
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
  Node: Csec_Ip_DecryptCbc/36:
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
  Node: Csec_Ip_EncryptCbc/35:
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
  Node: Csec_Ip_DecryptEcb/34:
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
  Node: Csec_Ip_EncryptEcb/33:
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
  Node: Csec_Ip_Deinit/32:
  Node: Csec_Ip_Init/31:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Csec_Ip_VerifyMacAsync/30:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Csec_Ip_GenerateMacAsync/29:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Csec_Ip_EncryptCbcAsync/27:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Csec_Ip_EncryptEcbAsync/25:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Csec_Ip_ProcessReceivedResponse/24:
    param [0]: 2 [loc_time: 1, loc_size: 8, prop_time: 0, prop_size: 0]
               1 [loc_time: 1, loc_size: 8, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x1, mask = 0x3
         Csec_Ip_ReqTypeType [1, 2]
        AGGS VARIABLE
  Node: Csec_Ip_ContinueVerifMACCmd/23:
  Node: Csec_Ip_StartVerifMACCmd/22:
  Node: Csec_Ip_ContinueGenMACCmd/21:
  Node: Csec_Ip_StartGenMACCmd/20:
  Node: Csec_Ip_ContinueEncDecCBCCmd/19:
  Node: Csec_Ip_StartEncDecCBCCmd/18:
  Node: Csec_Ip_ContinueEncDecECBCmd/17:
  Node: Csec_Ip_StartEncDecECBCmd/16:
  Node: Csec_Ip_SetInterrupt/13:
    param [0]: 1 [loc_time: 3, loc_size: 9, prop_time: 0, prop_size: 0]
               0 [loc_time: 3, loc_size: 9, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         boolean [0, 1]
        AGGS VARIABLE
  Node: Csec_Ip_ReadCommandBytes/12:
    param [0]: 64 [loc_time: 1, loc_size: 32, prop_time: 0, prop_size: 0]
               80 [loc_time: 1, loc_size: 32, prop_time: 0, prop_size: 0]
               112 [loc_time: 1, loc_size: 32, prop_time: 0, prop_size: 0]
               48 [loc_time: 1, loc_size: 32, prop_time: 0, prop_size: 0]
               16 [loc_time: 1, loc_size: 32, prop_time: 0, prop_size: 0]
               32 [loc_time: 1, loc_size: 32, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x20, mask = 0x70
         uint8 [16, 112]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [2]: VARIABLE
               32 [loc_time: 1, loc_size: 32, prop_time: 0, prop_size: 0]
               15 [loc_time: 1, loc_size: 32, prop_time: 0, prop_size: 0]
               16 [loc_time: 1, loc_size: 32, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Csec_Ip_ReadCommandByte/11:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Csec_Ip_WaitCommandCompletion/8:
    param [0]: VARIABLE
               10000000 [loc_time: 1, loc_size: 25, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
               0 [loc_time: 1, loc_size: 25, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Csec_Ip_WriteCommandHeader/7:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x0
         Csec_Ip_FuncFormatType [0, 0]
        AGGS VARIABLE
    param [2]: VARIABLE
               0 [loc_time: 6, loc_size: 9, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Csec_Ip_WriteCommandHalfWord/6:
    param [0]: 14 [loc_time: 53, loc_size: 10, prop_time: 0, prop_size: 0]
               8 [loc_time: 53, loc_size: 10, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x8, mask = 0x6
         uint8 [8, 14]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Csec_Ip_WriteCommandByte/5:
    param [0]: VARIABLE
               27 [loc_time: 54, loc_size: 9, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Csec_Ip_WriteCommandBytes/4:
    param [0]: VARIABLE
               64 [loc_time: 1, loc_size: 35, prop_time: 0, prop_size: 0]
               16 [loc_time: 1, loc_size: 35, prop_time: 0, prop_size: 0]
               32 [loc_time: 1, loc_size: 35, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x20, mask = 0x70
         const uint8 [16, 111]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [2]: VARIABLE
               32 [loc_time: 1, loc_size: 35, prop_time: 0, prop_size: 0]
               16 [loc_time: 1, loc_size: 35, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Csec_Ip_UpdateState/3:
    param [0]: VARIABLE
               255 [loc_time: 1, loc_size: 13, prop_time: 0, prop_size: 0]
               0 [loc_time: 1, loc_size: 13, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: 1 [loc_time: 1, loc_size: 13, prop_time: 0, prop_size: 0]
               3 [loc_time: 1, loc_size: 13, prop_time: 0, prop_size: 0]
               2 [loc_time: 1, loc_size: 13, prop_time: 0, prop_size: 0]
               4 [loc_time: 1, loc_size: 13, prop_time: 0, prop_size: 0]
               5 [loc_time: 1, loc_size: 13, prop_time: 0, prop_size: 0]
               6 [loc_time: 1, loc_size: 13, prop_time: 0, prop_size: 0]
               12 [loc_time: 1, loc_size: 13, prop_time: 0, prop_size: 0]
               22 [loc_time: 1, loc_size: 13, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x16, mask = 0x1f
         Csec_Ip_CmdType [1, 22]
        AGGS VARIABLE
    param [2]: VARIABLE
               0B [loc_time: 1, loc_size: 13, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [3]: VARIABLE
               0B [loc_time: 1, loc_size: 13, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [4]: VARIABLE
               0 [loc_time: 1, loc_size: 13, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Csec_Ip_ClearErrorFlags/2:
  Node: Csec_Ip_WriteCmdAndWait/1:
    param [0]: 6 [loc_time: 10, loc_size: 9, prop_time: 0, prop_size: 0]
               5 [loc_time: 10, loc_size: 9, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x5, mask = 0x3
         Csec_Ip_CmdType [5, 6]
        AGGS VARIABLE
    param [1]: 1 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x1, mask = 0x0
         Csec_Ip_FuncFormatType [1, 1]
        AGGS VARIABLE
    param [2]: 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x0
         Csec_Ip_CallSequenceType [0, 0]
        AGGS VARIABLE
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE

IPA decision stage:

 - Creating a specialized node of Csec_Ip_WriteCommandHeader/7 for all known contexts.
    replacing param #1 eFuncFormat with const 0
 - Creating a specialized node of Csec_Ip_WriteCmdAndWait/1 for all known contexts.
    replacing param #1 eFuncFormat with const 1
    replacing param #2 eCallSeq with const 0
Propagated bits info for function Csec_Ip_WriteCmdAndWait.constprop/112:
 param 0: value = 0x5, mask = 0x3
 param 1: value = 0x1, mask = 0x0
 param 2: value = 0x0, mask = 0x0
Propagated bits info for function Csec_Ip_WriteCommandHeader.constprop/111:
 param 1: value = 0x0, mask = 0x0
Propagated bits info for function Csec_Ip_ProcessReceivedResponse.part.0/75:
 param 0: value = 0x1, mask = 0x3
Propagated bits info for function Csec_Ip_ProcessReceivedResponse/24:
 param 0: value = 0x1, mask = 0x3
Propagated bits info for function Csec_Ip_ReadCommandBytes/12:
 param 0: value = 0x20, mask = 0x70
Propagated bits info for function Csec_Ip_WriteCommandHeader/7:
 param 1: value = 0x0, mask = 0x0
Propagated bits info for function Csec_Ip_WriteCommandHalfWord/6:
 param 0: value = 0x8, mask = 0x6
Propagated bits info for function Csec_Ip_WriteCommandBytes/4:
 param 0: value = 0x20, mask = 0x70
Propagated bits info for function Csec_Ip_UpdateState/3:
 param 1: value = 0x16, mask = 0x1f
Propagated bits info for function Csec_Ip_WriteCmdAndWait/1:
 param 0: value = 0x5, mask = 0x3
 param 1: value = 0x1, mask = 0x0
 param 2: value = 0x0, mask = 0x0

IPA constant propagation end

Reclaiming functions: Csec_Ip_WriteCommandHeader/7 Csec_Ip_WriteCmdAndWait/1
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Csec_Ip_WriteCmdAndWait.constprop.0/112 (Csec_Ip_WriteCmdAndWait.constprop) @0697b460
  Type: function definition analyzed
  Visibility:
  References: 
  Referring: 
  Clone of Csec_Ip_WriteCmdAndWait/1
  Availability: local
  Function flags: count:118111600 (estimated locally) local optimize_size
  Called by: Csec_Ip_VerifyMacAddrMode/57 (354334802 (estimated locally),0.33 per call) Csec_Ip_GenerateMacAddrMode/58 (354334802 (estimated locally),0.33 per call) 
  Calls: 
Csec_Ip_WriteCommandHeader.constprop.0/111 (Csec_Ip_WriteCommandHeader.constprop) @06983620
  Type: function definition analyzed
  Visibility:
  References: 
  Referring: 
  Clone of Csec_Ip_WriteCommandHeader/7
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: Csec_Ip_StartEncDecECBCmd/16 (1073741824 (estimated locally),1.00 per call) Csec_Ip_StartEncDecCBCCmd/18 (1073741824 (estimated locally),1.00 per call) Csec_Ip_StartGenMACCmd/20 (1073741824 (estimated locally),1.00 per call) Csec_Ip_StartVerifMACCmd/22 (1073741824 (estimated locally),1.00 per call) Csec_Ip_CancelCommand/53 (25651443 (estimated locally),0.02 per call) 
  Calls: 
Csec_Ip_CancelCommand.part.0/103 (Csec_Ip_CancelCommand.part.0) @071ff7e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Csec_Ip_pState/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Csec_Ip_CancelCommand/53 (120473834 (estimated locally),0.11 per call) 
  Calls: 
Csec_Ip_ProcessReceivedResponse.part.0/75 (Csec_Ip_ProcessReceivedResponse.part.0) @071ff1c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073634462 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Csec_Ip_ProcessReceivedResponse/24 (440216095 (estimated locally),0.41 per call) 
  Calls: Csec_Ip_ContinueEncDecECBCmd/17 (89487432 (estimated locally),0.08 per call) Csec_Ip_ContinueEncDecCBCCmd/19 (89487432 (estimated locally),0.08 per call) Csec_Ip_ContinueGenMACCmd/21 (89487432 (estimated locally),0.08 per call) Csec_Ip_ContinueVerifMACCmd/23 (89487432 (estimated locally),0.08 per call) Csec_Ip_ReadCommandBytes/12 (18112256 (estimated locally),0.02 per call) Csec_Ip_SetInterrupt/13 (54336769 (estimated locally),0.05 per call) 
   Indirect call(187923608 (estimated locally),0.18 per call) 
Csec_Ip_ContinueEncDecCBCCmd.part.0/67 (Csec_Ip_ContinueEncDecCBCCmd.part.0) @06b0dc40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Csec_Ip_pState/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Csec_Ip_ContinueEncDecCBCCmd/19 (365072220 (estimated locally),0.34 per call) 
  Calls: Csec_Ip_StartEncDecCBCCmd/18 (354334802 (estimated locally),0.33 per call) 
SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_12/63 (SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_12) @06a5bee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Csec_Ip_SetInterrupt/13 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_12/62 (SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_12) @06a5be00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Csec_Ip_SetInterrupt/13 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OsIf_GetElapsed/61 (OsIf_GetElapsed) @06a5b620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Csec_Ip_WaitCommandCompletion/8 (958878293 (estimated locally),8.35 per call) 
  Calls: 
OsIf_GetCounter/60 (OsIf_GetCounter) @06a5b540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Csec_Ip_WaitCommandCompletion/8 (114863532 (estimated locally),1.00 per call) 
  Calls: 
OsIf_MicrosToTicks/59 (OsIf_MicrosToTicks) @06a5b460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Csec_Ip_WaitCommandCompletion/8 (114863532 (estimated locally),1.00 per call) 
  Calls: 
Csec_Ip_GenerateMacAddrMode/58 (Csec_Ip_GenerateMacAddrMode) @06a4e540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Csec_Ip_ReadCommandBytes/12 (71717364 (estimated locally),0.07 per call) Csec_Ip_WriteCmdAndWait.constprop/112 (354334802 (estimated locally),0.33 per call) Csec_Ip_ClearErrorFlags/2 (354334802 (estimated locally),0.33 per call) 
Csec_Ip_VerifyMacAddrMode/57 (Csec_Ip_VerifyMacAddrMode) @06a4e2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Csec_Ip_WriteCmdAndWait.constprop/112 (354334802 (estimated locally),0.33 per call) Csec_Ip_WriteCommandHalfWord/6 (354334802 (estimated locally),0.33 per call) Csec_Ip_WriteCommandBytes/4 (354334802 (estimated locally),0.33 per call) Csec_Ip_ClearErrorFlags/2 (354334802 (estimated locally),0.33 per call) 
Csec_Ip_GetStatus/56 (Csec_Ip_GetStatus) @06a45b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Csec_Ip_SetSynchronousCmdTimeout/55 (Csec_Ip_SetSynchronousCmdTimeout) @06a45620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Csec_Ip_pState/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Csec_Ip_IrqHandler/54 (Csec_Ip_IrqHandler) @06a450e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Csec_Ip_pState/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Csec_Ip_ProcessReceivedResponse/24 (62104203 (estimated locally),0.06 per call) Csec_Ip_SetInterrupt/13 (119955441 (estimated locally),0.11 per call) Csec_Ip_SetInterrupt/13 (76732812 (estimated locally),0.07 per call) 
Csec_Ip_CancelCommand/53 (Csec_Ip_CancelCommand) @06a45d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Csec_Ip_MpCompress/51 (205372451 (estimated locally),0.59 per call) Csec_Ip_VerifyMac/38 (324914276 (estimated locally),0.45 per call) Csec_Ip_GenerateMac/37 (324914276 (estimated locally),0.45 per call) Csec_Ip_DecryptCbc/36 (324914276 (estimated locally),0.45 per call) Csec_Ip_EncryptCbc/35 (324914276 (estimated locally),0.45 per call) Csec_Ip_DecryptEcb/34 (324914276 (estimated locally),0.45 per call) Csec_Ip_EncryptEcb/33 (324914276 (estimated locally),0.45 per call) 
  Calls: Csec_Ip_CancelCommand.part.0/103 (120473834 (estimated locally),0.11 per call) Csec_Ip_WaitCommandCompletion/8 (25651443 (estimated locally),0.02 per call) Csec_Ip_WriteCommandHeader.constprop/111 (25651443 (estimated locally),0.02 per call) Csec_Ip_WaitCommandCompletion/8 (354334802 (estimated locally),0.33 per call) Csec_Ip_SetInterrupt/13 (354334802 (estimated locally),0.33 per call) 
Csec_Ip_MainFunction/52 (Csec_Ip_MainFunction) @06a45a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Csec_Ip_ProcessReceivedResponse/24 (1073741824 (estimated locally),1.00 per call) 
Csec_Ip_MpCompress/51 (Csec_Ip_MpCompress) @06a457e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)
  Referring: 
  Availability: available
  Function flags: count:348071315 (estimated locally) body optimize_size
  Called by: 
  Calls: Csec_Ip_ReadCommandBytes/12 (23248379 (estimated locally),0.07 per call) Csec_Ip_CancelCommand/53 (205372451 (estimated locally),0.59 per call) Csec_Ip_WaitCommandCompletion/8 (1014686025 (estimated locally),2.92 per call) Csec_Ip_WriteCommandHalfWord/6 (1014686025 (estimated locally),2.92 per call) Csec_Ip_WriteCommandBytes/4 (1014686025 (estimated locally),2.92 per call) Csec_Ip_UpdateState/3 (114863534 (estimated locally),0.33 per call) Csec_Ip_ClearErrorFlags/2 (114863534 (estimated locally),0.33 per call) 
Csec_Ip_DbgAuth/50 (Csec_Ip_DbgAuth) @06a45540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Csec_Ip_WaitCommandCompletion/8 (354334802 (estimated locally),0.33 per call) Csec_Ip_WriteCommandBytes/4 (354334802 (estimated locally),0.33 per call) Csec_Ip_ClearErrorFlags/2 (354334802 (estimated locally),0.33 per call) 
Csec_Ip_DbgChal/49 (Csec_Ip_DbgChal) @06a452a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Csec_Ip_ReadCommandBytes/12 (71717364 (estimated locally),0.07 per call) Csec_Ip_WaitCommandCompletion/8 (354334802 (estimated locally),0.33 per call) Csec_Ip_ClearErrorFlags/2 (354334802 (estimated locally),0.33 per call) 
Csec_Ip_GetId/48 (Csec_Ip_GetId) @06a45000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Csec_Ip_ReadCommandBytes/12 (71717364 (estimated locally),0.07 per call) Csec_Ip_ReadCommandBytes/12 (71717364 (estimated locally),0.07 per call) Csec_Ip_WaitCommandCompletion/8 (354334802 (estimated locally),0.33 per call) Csec_Ip_WriteCommandBytes/4 (354334802 (estimated locally),0.33 per call) Csec_Ip_ClearErrorFlags/2 (354334802 (estimated locally),0.33 per call) 
Csec_Ip_BootDefine/47 (Csec_Ip_BootDefine) @06a38b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Csec_Ip_WaitCommandCompletion/8 (354334802 (estimated locally),0.33 per call) Csec_Ip_WriteCommandByte/5 (354334802 (estimated locally),0.33 per call) Csec_Ip_ClearErrorFlags/2 (354334802 (estimated locally),0.33 per call) 
Csec_Ip_BootOk/46 (Csec_Ip_BootOk) @06a38620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Csec_Ip_WaitCommandCompletion/8 (354334802 (estimated locally),0.33 per call) Csec_Ip_ClearErrorFlags/2 (354334802 (estimated locally),0.33 per call) 
Csec_Ip_BootFailure/45 (Csec_Ip_BootFailure) @06a380e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Csec_Ip_WaitCommandCompletion/8 (354334802 (estimated locally),0.33 per call) Csec_Ip_ClearErrorFlags/2 (354334802 (estimated locally),0.33 per call) 
Csec_Ip_GenerateRnd/44 (Csec_Ip_GenerateRnd) @06a38d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Csec_Ip_SetInterrupt/13 (48050634 (estimated locally),0.04 per call) Csec_Ip_ReadCommandBytes/12 (23666730 (estimated locally),0.02 per call) Csec_Ip_WaitCommandCompletion/8 (116930485 (estimated locally),0.11 per call) Csec_Ip_ClearErrorFlags/2 (354334802 (estimated locally),0.33 per call) Csec_Ip_UpdateState/3 (354334802 (estimated locally),0.33 per call) 
Csec_Ip_ExtendSeed/43 (Csec_Ip_ExtendSeed) @06a38a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Csec_Ip_WaitCommandCompletion/8 (354334802 (estimated locally),0.33 per call) Csec_Ip_WriteCommandBytes/4 (354334802 (estimated locally),0.33 per call) Csec_Ip_ClearErrorFlags/2 (354334802 (estimated locally),0.33 per call) 
Csec_Ip_InitRng/42 (Csec_Ip_InitRng) @06a387e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Csec_Ip_WaitCommandCompletion/8 (354334802 (estimated locally),0.33 per call) Csec_Ip_ClearErrorFlags/2 (354334802 (estimated locally),0.33 per call) 
Csec_Ip_ExportRamKey/41 (Csec_Ip_ExportRamKey) @06a38540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Csec_Ip_ReadCommandBytes/12 (71717364 (estimated locally),0.07 per call) Csec_Ip_ReadCommandBytes/12 (71717364 (estimated locally),0.07 per call) Csec_Ip_ReadCommandBytes/12 (71717364 (estimated locally),0.07 per call) Csec_Ip_ReadCommandBytes/12 (71717364 (estimated locally),0.07 per call) Csec_Ip_ReadCommandBytes/12 (71717364 (estimated locally),0.07 per call) Csec_Ip_WaitCommandCompletion/8 (354334802 (estimated locally),0.33 per call) Csec_Ip_ClearErrorFlags/2 (354334802 (estimated locally),0.33 per call) 
Csec_Ip_LoadPlainKey/40 (Csec_Ip_LoadPlainKey) @06a382a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Csec_Ip_WaitCommandCompletion/8 (354334802 (estimated locally),0.33 per call) Csec_Ip_WriteCommandBytes/4 (354334802 (estimated locally),0.33 per call) Csec_Ip_ClearErrorFlags/2 (354334802 (estimated locally),0.33 per call) 
Csec_Ip_LoadKey/39 (Csec_Ip_LoadKey) @06a38000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Csec_Ip_ReadCommandBytes/12 (71717364 (estimated locally),0.07 per call) Csec_Ip_ReadCommandBytes/12 (71717364 (estimated locally),0.07 per call) Csec_Ip_WaitCommandCompletion/8 (354334802 (estimated locally),0.33 per call) Csec_Ip_WriteCommandBytes/4 (354334802 (estimated locally),0.33 per call) Csec_Ip_WriteCommandBytes/4 (354334802 (estimated locally),0.33 per call) Csec_Ip_WriteCommandBytes/4 (354334802 (estimated locally),0.33 per call) Csec_Ip_ClearErrorFlags/2 (354334802 (estimated locally),0.33 per call) 
Csec_Ip_VerifyMac/38 (Csec_Ip_VerifyMac) @06a28b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)
  Referring: 
  Availability: available
  Function flags: count:715827892 (estimated locally) body optimize_size
  Called by: 
  Calls: Csec_Ip_VerifyMacAsync/30 (118111602 (estimated locally),0.16 per call) Csec_Ip_ContinueVerifMACCmd/23 (630715948 (estimated locally),0.88 per call) Csec_Ip_CancelCommand/53 (324914276 (estimated locally),0.45 per call) Csec_Ip_WaitCommandCompletion/8 (955630224 (estimated locally),1.33 per call) Csec_Ip_StartVerifMACCmd/22 (118111602 (estimated locally),0.16 per call) Csec_Ip_UpdateState/3 (236223204 (estimated locally),0.33 per call) Csec_Ip_ClearErrorFlags/2 (236223204 (estimated locally),0.33 per call) 
Csec_Ip_GenerateMac/37 (Csec_Ip_GenerateMac) @06a28620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)
  Referring: 
  Availability: available
  Function flags: count:715827892 (estimated locally) body optimize_size
  Called by: 
  Calls: Csec_Ip_GenerateMacAsync/29 (118111602 (estimated locally),0.16 per call) Csec_Ip_ContinueGenMACCmd/21 (630715948 (estimated locally),0.88 per call) Csec_Ip_CancelCommand/53 (324914276 (estimated locally),0.45 per call) Csec_Ip_WaitCommandCompletion/8 (955630224 (estimated locally),1.33 per call) Csec_Ip_StartGenMACCmd/20 (118111602 (estimated locally),0.16 per call) Csec_Ip_UpdateState/3 (236223204 (estimated locally),0.33 per call) Csec_Ip_ClearErrorFlags/2 (236223204 (estimated locally),0.33 per call) 
Csec_Ip_DecryptCbc/36 (Csec_Ip_DecryptCbc) @06a280e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)
  Referring: 
  Availability: available
  Function flags: count:715827892 (estimated locally) body optimize_size
  Called by: 
  Calls: Csec_Ip_DecryptCbcAsync/28 (118111602 (estimated locally),0.16 per call) Csec_Ip_ContinueEncDecCBCCmd/19 (630715948 (estimated locally),0.88 per call) Csec_Ip_CancelCommand/53 (324914276 (estimated locally),0.45 per call) Csec_Ip_WaitCommandCompletion/8 (955630224 (estimated locally),1.33 per call) Csec_Ip_StartEncDecCBCCmd/18 (118111602 (estimated locally),0.16 per call) Csec_Ip_UpdateState/3 (236223204 (estimated locally),0.33 per call) Csec_Ip_ClearErrorFlags/2 (236223204 (estimated locally),0.33 per call) 
Csec_Ip_EncryptCbc/35 (Csec_Ip_EncryptCbc) @06a28d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)
  Referring: 
  Availability: available
  Function flags: count:715827892 (estimated locally) body optimize_size
  Called by: 
  Calls: Csec_Ip_EncryptCbcAsync/27 (118111602 (estimated locally),0.16 per call) Csec_Ip_ContinueEncDecCBCCmd/19 (630715948 (estimated locally),0.88 per call) Csec_Ip_CancelCommand/53 (324914276 (estimated locally),0.45 per call) Csec_Ip_WaitCommandCompletion/8 (955630224 (estimated locally),1.33 per call) Csec_Ip_StartEncDecCBCCmd/18 (118111602 (estimated locally),0.16 per call) Csec_Ip_UpdateState/3 (236223204 (estimated locally),0.33 per call) Csec_Ip_ClearErrorFlags/2 (236223204 (estimated locally),0.33 per call) 
Csec_Ip_DecryptEcb/34 (Csec_Ip_DecryptEcb) @06a28a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)
  Referring: 
  Availability: available
  Function flags: count:715827892 (estimated locally) body optimize_size
  Called by: 
  Calls: Csec_Ip_DecryptEcbAsync/26 (118111602 (estimated locally),0.16 per call) Csec_Ip_ContinueEncDecECBCmd/17 (630715948 (estimated locally),0.88 per call) Csec_Ip_CancelCommand/53 (324914276 (estimated locally),0.45 per call) Csec_Ip_WaitCommandCompletion/8 (955630224 (estimated locally),1.33 per call) Csec_Ip_StartEncDecECBCmd/16 (118111602 (estimated locally),0.16 per call) Csec_Ip_UpdateState/3 (236223204 (estimated locally),0.33 per call) Csec_Ip_ClearErrorFlags/2 (236223204 (estimated locally),0.33 per call) 
Csec_Ip_EncryptEcb/33 (Csec_Ip_EncryptEcb) @06a287e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)
  Referring: 
  Availability: available
  Function flags: count:715827892 (estimated locally) body optimize_size
  Called by: 
  Calls: Csec_Ip_EncryptEcbAsync/25 (118111602 (estimated locally),0.16 per call) Csec_Ip_ContinueEncDecECBCmd/17 (630715948 (estimated locally),0.88 per call) Csec_Ip_CancelCommand/53 (324914276 (estimated locally),0.45 per call) Csec_Ip_WaitCommandCompletion/8 (955630224 (estimated locally),1.33 per call) Csec_Ip_StartEncDecECBCmd/16 (118111602 (estimated locally),0.16 per call) Csec_Ip_UpdateState/3 (236223204 (estimated locally),0.33 per call) Csec_Ip_ClearErrorFlags/2 (236223204 (estimated locally),0.33 per call) 
Csec_Ip_Deinit/32 (Csec_Ip_Deinit) @06a28540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Csec_Ip_pState/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Csec_Ip_Init/31 (Csec_Ip_Init) @06a282a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Csec_Ip_pState/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Csec_Ip_VerifyMacAsync/30 (Csec_Ip_VerifyMacAsync) @06a28000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Csec_Ip_pState/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Csec_Ip_VerifyMac/38 (118111602 (estimated locally),0.16 per call) 
  Calls: Csec_Ip_SetInterrupt/13 (217325345 (estimated locally),0.20 per call) Csec_Ip_StartVerifMACCmd/22 (1073741824 (estimated locally),1.00 per call) 
Csec_Ip_GenerateMacAsync/29 (Csec_Ip_GenerateMacAsync) @06991b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Csec_Ip_pState/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Csec_Ip_GenerateMac/37 (118111602 (estimated locally),0.16 per call) 
  Calls: Csec_Ip_SetInterrupt/13 (217325345 (estimated locally),0.20 per call) Csec_Ip_StartGenMACCmd/20 (1073741824 (estimated locally),1.00 per call) 
Csec_Ip_DecryptCbcAsync/28 (Csec_Ip_DecryptCbcAsync) @06991620
  Type: function definition analyzed alias
  Visibility: prevailing_def_ironly
  References: Csec_Ip_EncryptCbcAsync/27 (alias)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) local icf_merged optimize_size
  Called by: Csec_Ip_DecryptCbc/36 (118111602 (estimated locally),0.16 per call) 
  Calls: 
Csec_Ip_EncryptCbcAsync/27 (Csec_Ip_EncryptCbcAsync) @069910e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Csec_Ip_pState/0 (read)
  Referring: Csec_Ip_DecryptCbcAsync/28 (alias)
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local icf_merged optimize_size
  Called by: Csec_Ip_EncryptCbc/35 (118111602 (estimated locally),0.16 per call) 
  Calls: Csec_Ip_SetInterrupt/13 (217325345 (estimated locally),0.20 per call) Csec_Ip_StartEncDecCBCCmd/18 (1073741824 (estimated locally),1.00 per call) 
Csec_Ip_DecryptEcbAsync/26 (Csec_Ip_DecryptEcbAsync) @06991d20
  Type: function definition analyzed alias
  Visibility: prevailing_def_ironly
  References: Csec_Ip_EncryptEcbAsync/25 (alias)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) local icf_merged optimize_size
  Called by: Csec_Ip_DecryptEcb/34 (118111602 (estimated locally),0.16 per call) 
  Calls: 
Csec_Ip_EncryptEcbAsync/25 (Csec_Ip_EncryptEcbAsync) @06991a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Csec_Ip_pState/0 (read)
  Referring: Csec_Ip_DecryptEcbAsync/26 (alias)
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local icf_merged optimize_size
  Called by: Csec_Ip_EncryptEcb/33 (118111602 (estimated locally),0.16 per call) 
  Calls: Csec_Ip_SetInterrupt/13 (217325345 (estimated locally),0.20 per call) Csec_Ip_StartEncDecECBCmd/16 (1073741824 (estimated locally),1.00 per call) 
Csec_Ip_ProcessReceivedResponse/24 (Csec_Ip_ProcessReceivedResponse) @069917e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073697803 (estimated locally) body local optimize_size
  Called by: Csec_Ip_IrqHandler/54 (62104203 (estimated locally),0.06 per call) Csec_Ip_MainFunction/52 (1073741824 (estimated locally),1.00 per call) 
  Calls: Csec_Ip_ProcessReceivedResponse.part.0/75 (440216095 (estimated locally),0.41 per call) 
Csec_Ip_ContinueVerifMACCmd/23 (Csec_Ip_ContinueVerifMACCmd) @06991540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Csec_Ip_pState/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: Csec_Ip_VerifyMac/38 (630715948 (estimated locally),0.88 per call) Csec_Ip_ProcessReceivedResponse.part.0/75 (89487432 (estimated locally),0.08 per call) 
  Calls: Csec_Ip_StartVerifMACCmd/22 (120473832 (estimated locally),0.11 per call) 
Csec_Ip_StartVerifMACCmd/22 (Csec_Ip_StartVerifMACCmd) @069912a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Csec_Ip_VerifyMac/38 (118111602 (estimated locally),0.16 per call) Csec_Ip_VerifyMacAsync/30 (1073741824 (estimated locally),1.00 per call) Csec_Ip_ContinueVerifMACCmd/23 (120473832 (estimated locally),0.11 per call) 
  Calls: Csec_Ip_WriteCommandHeader.constprop/111 (1073741824 (estimated locally),1.00 per call) Csec_Ip_WriteCommandBytes/4 (354334802 (estimated locally),0.33 per call) Csec_Ip_WriteCommandHalfWord/6 (1073741824 (estimated locally),1.00 per call) Csec_Ip_WriteCommandBytes/4 (1073741824 (estimated locally),1.00 per call) 
Csec_Ip_ContinueGenMACCmd/21 (Csec_Ip_ContinueGenMACCmd) @06991000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Csec_Ip_pState/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Csec_Ip_GenerateMac/37 (630715948 (estimated locally),0.88 per call) Csec_Ip_ProcessReceivedResponse.part.0/75 (89487432 (estimated locally),0.08 per call) 
  Calls: Csec_Ip_StartGenMACCmd/20 (182536110 (estimated locally),0.17 per call) Csec_Ip_ReadCommandBytes/12 (182536110 (estimated locally),0.17 per call) 
Csec_Ip_StartGenMACCmd/20 (Csec_Ip_StartGenMACCmd) @06983c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Csec_Ip_GenerateMac/37 (118111602 (estimated locally),0.16 per call) Csec_Ip_GenerateMacAsync/29 (1073741824 (estimated locally),1.00 per call) Csec_Ip_ContinueGenMACCmd/21 (182536110 (estimated locally),0.17 per call) 
  Calls: Csec_Ip_WriteCommandHeader.constprop/111 (1073741824 (estimated locally),1.00 per call) Csec_Ip_WriteCommandBytes/4 (1073741824 (estimated locally),1.00 per call) 
Csec_Ip_ContinueEncDecCBCCmd/19 (Csec_Ip_ContinueEncDecCBCCmd) @06983460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: Csec_Ip_DecryptCbc/36 (630715948 (estimated locally),0.88 per call) Csec_Ip_EncryptCbc/35 (630715948 (estimated locally),0.88 per call) Csec_Ip_ProcessReceivedResponse.part.0/75 (89487432 (estimated locally),0.08 per call) 
  Calls: Csec_Ip_ContinueEncDecCBCCmd.part.0/67 (365072220 (estimated locally),0.34 per call) Csec_Ip_ReadCommandBytes/12 (182536110 (estimated locally),0.17 per call) Csec_Ip_ReadCommandBytes/12 (182536110 (estimated locally),0.17 per call) 
Csec_Ip_StartEncDecCBCCmd/18 (Csec_Ip_StartEncDecCBCCmd) @06983e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Csec_Ip_DecryptCbc/36 (118111602 (estimated locally),0.16 per call) Csec_Ip_EncryptCbc/35 (118111602 (estimated locally),0.16 per call) Csec_Ip_EncryptCbcAsync/27 (1073741824 (estimated locally),1.00 per call) Csec_Ip_ContinueEncDecCBCCmd.part.0/67 (354334802 (estimated locally),0.33 per call) 
  Calls: Csec_Ip_WriteCommandHeader.constprop/111 (1073741824 (estimated locally),1.00 per call) Csec_Ip_WriteCommandHalfWord/6 (1073741824 (estimated locally),1.00 per call) Csec_Ip_WriteCommandBytes/4 (536870913 (estimated locally),0.50 per call) Csec_Ip_WriteCommandBytes/4 (536870913 (estimated locally),0.50 per call) Csec_Ip_WriteCommandBytes/4 (536870913 (estimated locally),0.50 per call) 
Csec_Ip_ContinueEncDecECBCmd/17 (Csec_Ip_ContinueEncDecECBCmd) @06983b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Csec_Ip_DecryptEcb/34 (630715948 (estimated locally),0.88 per call) Csec_Ip_EncryptEcb/33 (630715948 (estimated locally),0.88 per call) Csec_Ip_ProcessReceivedResponse.part.0/75 (89487432 (estimated locally),0.08 per call) 
  Calls: Csec_Ip_StartEncDecECBCmd/16 (71717364 (estimated locally),0.07 per call) Csec_Ip_ReadCommandBytes/12 (217325345 (estimated locally),0.20 per call) 
Csec_Ip_StartEncDecECBCmd/16 (Csec_Ip_StartEncDecECBCmd) @069838c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Csec_Ip_pState/0 (read)Csec_Ip_pState/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Csec_Ip_DecryptEcb/34 (118111602 (estimated locally),0.16 per call) Csec_Ip_EncryptEcb/33 (118111602 (estimated locally),0.16 per call) Csec_Ip_EncryptEcbAsync/25 (1073741824 (estimated locally),1.00 per call) Csec_Ip_ContinueEncDecECBCmd/17 (71717364 (estimated locally),0.07 per call) 
  Calls: Csec_Ip_WriteCommandHeader.constprop/111 (1073741824 (estimated locally),1.00 per call) Csec_Ip_WriteCommandHalfWord/6 (1073741824 (estimated locally),1.00 per call) Csec_Ip_WriteCommandBytes/4 (1073741824 (estimated locally),1.00 per call) 
Csec_Ip_SetInterrupt/13 (Csec_Ip_SetInterrupt) @069830e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Csec_Ip_IrqHandler/54 (119955441 (estimated locally),0.11 per call) Csec_Ip_IrqHandler/54 (76732812 (estimated locally),0.07 per call) Csec_Ip_CancelCommand/53 (354334802 (estimated locally),0.33 per call) Csec_Ip_GenerateRnd/44 (48050634 (estimated locally),0.04 per call) Csec_Ip_ProcessReceivedResponse.part.0/75 (54336769 (estimated locally),0.05 per call) Csec_Ip_VerifyMacAsync/30 (217325345 (estimated locally),0.20 per call) Csec_Ip_GenerateMacAsync/29 (217325345 (estimated locally),0.20 per call) Csec_Ip_EncryptCbcAsync/27 (217325345 (estimated locally),0.20 per call) Csec_Ip_EncryptEcbAsync/25 (217325345 (estimated locally),0.20 per call) 
  Calls: SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_12/63 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_12/62 (1073741824 (estimated locally),1.00 per call) 
Csec_Ip_ReadCommandBytes/12 (Csec_Ip_ReadCommandBytes) @0697b7e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:118111600 (estimated locally) body local optimize_size
  Called by: Csec_Ip_GenerateMacAddrMode/58 (71717364 (estimated locally),0.07 per call) Csec_Ip_MpCompress/51 (23248379 (estimated locally),0.07 per call) Csec_Ip_DbgChal/49 (71717364 (estimated locally),0.07 per call) Csec_Ip_GetId/48 (71717364 (estimated locally),0.07 per call) Csec_Ip_GetId/48 (71717364 (estimated locally),0.07 per call) Csec_Ip_GenerateRnd/44 (23666730 (estimated locally),0.02 per call) Csec_Ip_ExportRamKey/41 (71717364 (estimated locally),0.07 per call) Csec_Ip_ExportRamKey/41 (71717364 (estimated locally),0.07 per call) Csec_Ip_ExportRamKey/41 (71717364 (estimated locally),0.07 per call) Csec_Ip_ExportRamKey/41 (71717364 (estimated locally),0.07 per call) Csec_Ip_ExportRamKey/41 (71717364 (estimated locally),0.07 per call) Csec_Ip_LoadKey/39 (71717364 (estimated locally),0.07 per call) Csec_Ip_LoadKey/39 (71717364 (estimated locally),0.07 per call) Csec_Ip_ProcessReceivedResponse.part.0/75 (18112256 (estimated locally),0.02 per call) Csec_Ip_ContinueGenMACCmd/21 (182536110 (estimated locally),0.17 per call) Csec_Ip_ContinueEncDecCBCCmd/19 (182536110 (estimated locally),0.17 per call) Csec_Ip_ContinueEncDecCBCCmd/19 (182536110 (estimated locally),0.17 per call) Csec_Ip_ContinueEncDecECBCmd/17 (217325345 (estimated locally),0.20 per call) 
  Calls: Csec_Ip_ReadCommandByte/11 (955630224 (estimated locally),8.09 per call) 
Csec_Ip_ReadCommandByte/11 (Csec_Ip_ReadCommandByte) @0697bc40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Csec_Ip_ReadCommandBytes/12 (955630224 (estimated locally),8.09 per call) 
  Calls: 
Csec_Ip_WaitCommandCompletion/8 (Csec_Ip_WaitCommandCompletion) @0697b1c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Csec_Ip_pState/0 (read)
  Referring: 
  Availability: local
  Function flags: count:114863532 (estimated locally) body local optimize_size
  Called by: Csec_Ip_MpCompress/51 (1014686025 (estimated locally),2.92 per call) Csec_Ip_VerifyMac/38 (955630224 (estimated locally),1.33 per call) Csec_Ip_GenerateMac/37 (955630224 (estimated locally),1.33 per call) Csec_Ip_DecryptCbc/36 (955630224 (estimated locally),1.33 per call) Csec_Ip_EncryptCbc/35 (955630224 (estimated locally),1.33 per call) Csec_Ip_DecryptEcb/34 (955630224 (estimated locally),1.33 per call) Csec_Ip_EncryptEcb/33 (955630224 (estimated locally),1.33 per call) Csec_Ip_CancelCommand/53 (25651443 (estimated locally),0.02 per call) Csec_Ip_CancelCommand/53 (354334802 (estimated locally),0.33 per call) Csec_Ip_DbgAuth/50 (354334802 (estimated locally),0.33 per call) Csec_Ip_DbgChal/49 (354334802 (estimated locally),0.33 per call) Csec_Ip_GetId/48 (354334802 (estimated locally),0.33 per call) Csec_Ip_BootDefine/47 (354334802 (estimated locally),0.33 per call) Csec_Ip_BootOk/46 (354334802 (estimated locally),0.33 per call) Csec_Ip_BootFailure/45 (354334802 (estimated locally),0.33 per call) Csec_Ip_GenerateRnd/44 (116930485 (estimated locally),0.11 per call) Csec_Ip_ExtendSeed/43 (354334802 (estimated locally),0.33 per call) Csec_Ip_InitRng/42 (354334802 (estimated locally),0.33 per call) Csec_Ip_ExportRamKey/41 (354334802 (estimated locally),0.33 per call) Csec_Ip_LoadPlainKey/40 (354334802 (estimated locally),0.33 per call) Csec_Ip_LoadKey/39 (354334802 (estimated locally),0.33 per call) 
  Calls: OsIf_GetElapsed/61 (958878293 (estimated locally),8.35 per call) OsIf_GetCounter/60 (114863532 (estimated locally),1.00 per call) OsIf_MicrosToTicks/59 (114863532 (estimated locally),1.00 per call) 
Csec_Ip_WriteCommandHeader/7 (Csec_Ip_WriteCommandHeader) @068d4c40
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Csec_Ip_WriteCommandHalfWord/6 (Csec_Ip_WriteCommandHalfWord) @068d4b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Csec_Ip_VerifyMacAddrMode/57 (354334802 (estimated locally),0.33 per call) Csec_Ip_MpCompress/51 (1014686025 (estimated locally),2.92 per call) Csec_Ip_StartVerifMACCmd/22 (1073741824 (estimated locally),1.00 per call) Csec_Ip_StartEncDecCBCCmd/18 (1073741824 (estimated locally),1.00 per call) Csec_Ip_StartEncDecECBCmd/16 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Csec_Ip_WriteCommandByte/5 (Csec_Ip_WriteCommandByte) @068d48c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Csec_Ip_BootDefine/47 (354334802 (estimated locally),0.33 per call) Csec_Ip_WriteCommandBytes/4 (955630224 (estimated locally),8.09 per call) 
  Calls: 
Csec_Ip_WriteCommandBytes/4 (Csec_Ip_WriteCommandBytes) @068d41c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:118111600 (estimated locally) body local optimize_size
  Called by: Csec_Ip_VerifyMacAddrMode/57 (354334802 (estimated locally),0.33 per call) Csec_Ip_MpCompress/51 (1014686025 (estimated locally),2.92 per call) Csec_Ip_DbgAuth/50 (354334802 (estimated locally),0.33 per call) Csec_Ip_GetId/48 (354334802 (estimated locally),0.33 per call) Csec_Ip_ExtendSeed/43 (354334802 (estimated locally),0.33 per call) Csec_Ip_LoadPlainKey/40 (354334802 (estimated locally),0.33 per call) Csec_Ip_LoadKey/39 (354334802 (estimated locally),0.33 per call) Csec_Ip_LoadKey/39 (354334802 (estimated locally),0.33 per call) Csec_Ip_LoadKey/39 (354334802 (estimated locally),0.33 per call) Csec_Ip_StartVerifMACCmd/22 (354334802 (estimated locally),0.33 per call) Csec_Ip_StartVerifMACCmd/22 (1073741824 (estimated locally),1.00 per call) Csec_Ip_StartGenMACCmd/20 (1073741824 (estimated locally),1.00 per call) Csec_Ip_StartEncDecCBCCmd/18 (536870913 (estimated locally),0.50 per call) Csec_Ip_StartEncDecCBCCmd/18 (536870913 (estimated locally),0.50 per call) Csec_Ip_StartEncDecCBCCmd/18 (536870913 (estimated locally),0.50 per call) Csec_Ip_StartEncDecECBCmd/16 (1073741824 (estimated locally),1.00 per call) 
  Calls: Csec_Ip_WriteCommandByte/5 (955630224 (estimated locally),8.09 per call) 
Csec_Ip_UpdateState/3 (Csec_Ip_UpdateState) @068cbee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Csec_Ip_pState/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Csec_Ip_MpCompress/51 (114863534 (estimated locally),0.33 per call) Csec_Ip_VerifyMac/38 (236223204 (estimated locally),0.33 per call) Csec_Ip_GenerateMac/37 (236223204 (estimated locally),0.33 per call) Csec_Ip_DecryptCbc/36 (236223204 (estimated locally),0.33 per call) Csec_Ip_EncryptCbc/35 (236223204 (estimated locally),0.33 per call) Csec_Ip_DecryptEcb/34 (236223204 (estimated locally),0.33 per call) Csec_Ip_EncryptEcb/33 (236223204 (estimated locally),0.33 per call) Csec_Ip_GenerateRnd/44 (354334802 (estimated locally),0.33 per call) 
  Calls: 
Csec_Ip_ClearErrorFlags/2 (Csec_Ip_ClearErrorFlags) @068cbc40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Csec_Ip_GenerateMacAddrMode/58 (354334802 (estimated locally),0.33 per call) Csec_Ip_VerifyMacAddrMode/57 (354334802 (estimated locally),0.33 per call) Csec_Ip_MpCompress/51 (114863534 (estimated locally),0.33 per call) Csec_Ip_VerifyMac/38 (236223204 (estimated locally),0.33 per call) Csec_Ip_GenerateMac/37 (236223204 (estimated locally),0.33 per call) Csec_Ip_DecryptCbc/36 (236223204 (estimated locally),0.33 per call) Csec_Ip_EncryptCbc/35 (236223204 (estimated locally),0.33 per call) Csec_Ip_DecryptEcb/34 (236223204 (estimated locally),0.33 per call) Csec_Ip_EncryptEcb/33 (236223204 (estimated locally),0.33 per call) Csec_Ip_DbgAuth/50 (354334802 (estimated locally),0.33 per call) Csec_Ip_DbgChal/49 (354334802 (estimated locally),0.33 per call) Csec_Ip_GetId/48 (354334802 (estimated locally),0.33 per call) Csec_Ip_BootDefine/47 (354334802 (estimated locally),0.33 per call) Csec_Ip_BootOk/46 (354334802 (estimated locally),0.33 per call) Csec_Ip_BootFailure/45 (354334802 (estimated locally),0.33 per call) Csec_Ip_GenerateRnd/44 (354334802 (estimated locally),0.33 per call) Csec_Ip_ExtendSeed/43 (354334802 (estimated locally),0.33 per call) Csec_Ip_InitRng/42 (354334802 (estimated locally),0.33 per call) Csec_Ip_ExportRamKey/41 (354334802 (estimated locally),0.33 per call) Csec_Ip_LoadPlainKey/40 (354334802 (estimated locally),0.33 per call) Csec_Ip_LoadKey/39 (354334802 (estimated locally),0.33 per call) 
  Calls: 
Csec_Ip_WriteCmdAndWait/1 (Csec_Ip_WriteCmdAndWait) @068cb7e0
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Csec_Ip_pState/0 (Csec_Ip_pState) @0692dbd0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Csec_Ip_BootFailure/45 (read)Csec_Ip_LoadPlainKey/40 (read)Csec_Ip_VerifyMacAsync/30 (read)Csec_Ip_ProcessReceivedResponse.part.0/75 (read)Csec_Ip_LoadPlainKey/40 (read)Csec_Ip_LoadPlainKey/40 (read)Csec_Ip_ContinueGenMACCmd/21 (read)Csec_Ip_DbgAuth/50 (read)Csec_Ip_DbgAuth/50 (read)Csec_Ip_DbgAuth/50 (read)Csec_Ip_DbgAuth/50 (read)Csec_Ip_MpCompress/51 (read)Csec_Ip_IrqHandler/54 (read)Csec_Ip_MpCompress/51 (read)Csec_Ip_MpCompress/51 (read)Csec_Ip_MpCompress/51 (read)Csec_Ip_MpCompress/51 (read)Csec_Ip_MpCompress/51 (read)Csec_Ip_MpCompress/51 (read)Csec_Ip_SetSynchronousCmdTimeout/55 (read)Csec_Ip_DecryptCbc/36 (read)Csec_Ip_LoadKey/39 (read)Csec_Ip_ExtendSeed/43 (read)Csec_Ip_ProcessReceivedResponse.part.0/75 (read)Csec_Ip_MpCompress/51 (read)Csec_Ip_VerifyMacAddrMode/57 (read)Csec_Ip_VerifyMacAddrMode/57 (read)Csec_Ip_VerifyMacAddrMode/57 (read)Csec_Ip_StartVerifMACCmd/22 (read)Csec_Ip_VerifyMac/38 (read)Csec_Ip_VerifyMac/38 (read)Csec_Ip_VerifyMac/38 (read)Csec_Ip_DecryptCbc/36 (read)Csec_Ip_ProcessReceivedResponse.part.0/75 (read)Csec_Ip_ExtendSeed/43 (read)Csec_Ip_ExtendSeed/43 (read)Csec_Ip_DecryptCbc/36 (read)Csec_Ip_DecryptCbc/36 (read)Csec_Ip_DecryptCbc/36 (read)Csec_Ip_DecryptCbc/36 (read)Csec_Ip_UpdateState/3 (read)Csec_Ip_StartVerifMACCmd/22 (read)Csec_Ip_StartVerifMACCmd/22 (read)Csec_Ip_ContinueVerifMACCmd/23 (read)Csec_Ip_BootOk/46 (read)Csec_Ip_BootOk/46 (read)Csec_Ip_BootOk/46 (read)Csec_Ip_CancelCommand.part.0/103 (read)Csec_Ip_CancelCommand/53 (read)Csec_Ip_CancelCommand/53 (read)Csec_Ip_CancelCommand/53 (read)Csec_Ip_ExportRamKey/41 (read)Csec_Ip_ExportRamKey/41 (read)Csec_Ip_WaitCommandCompletion/8 (read)Csec_Ip_Init/31 (write)Csec_Ip_LoadKey/39 (read)Csec_Ip_BootOk/46 (read)Csec_Ip_EncryptEcb/33 (read)Csec_Ip_EncryptEcb/33 (read)Csec_Ip_EncryptEcb/33 (read)Csec_Ip_EncryptEcb/33 (read)Csec_Ip_EncryptEcb/33 (read)Csec_Ip_VerifyMac/38 (read)Csec_Ip_GenerateRnd/44 (read)Csec_Ip_GenerateRnd/44 (read)Csec_Ip_GenerateMacAddrMode/58 (read)Csec_Ip_ExportRamKey/41 (read)Csec_Ip_DbgChal/49 (read)Csec_Ip_DbgChal/49 (read)Csec_Ip_DbgChal/49 (read)Csec_Ip_DbgChal/49 (read)Csec_Ip_DbgChal/49 (read)Csec_Ip_BootDefine/47 (read)Csec_Ip_StartEncDecECBCmd/16 (read)Csec_Ip_StartEncDecECBCmd/16 (read)Csec_Ip_VerifyMac/38 (read)Csec_Ip_VerifyMac/38 (read)Csec_Ip_MpCompress/51 (read)Csec_Ip_BootDefine/47 (read)Csec_Ip_BootFailure/45 (read)Csec_Ip_LoadKey/39 (read)Csec_Ip_InitRng/42 (read)Csec_Ip_InitRng/42 (read)Csec_Ip_StartVerifMACCmd/22 (read)Csec_Ip_StartVerifMACCmd/22 (read)Csec_Ip_LoadKey/39 (read)Csec_Ip_GenerateRnd/44 (read)Csec_Ip_GenerateMacAsync/29 (read)Csec_Ip_LoadKey/39 (read)Csec_Ip_ExportRamKey/41 (read)Csec_Ip_ContinueEncDecECBCmd/17 (read)Csec_Ip_ContinueEncDecECBCmd/17 (read)Csec_Ip_Deinit/32 (write)Csec_Ip_LoadPlainKey/40 (read)Csec_Ip_EncryptEcbAsync/25 (read)Csec_Ip_GetId/48 (read)Csec_Ip_StartGenMACCmd/20 (read)Csec_Ip_StartGenMACCmd/20 (read)Csec_Ip_DecryptEcb/34 (read)Csec_Ip_DecryptEcb/34 (read)Csec_Ip_DecryptEcb/34 (read)Csec_Ip_DecryptEcb/34 (read)Csec_Ip_DecryptEcb/34 (read)Csec_Ip_GenerateRnd/44 (read)Csec_Ip_ProcessReceivedResponse.part.0/75 (read)Csec_Ip_GenerateMacAddrMode/58 (read)Csec_Ip_ExtendSeed/43 (read)Csec_Ip_GetId/48 (read)Csec_Ip_EncryptCbc/35 (read)Csec_Ip_EncryptCbc/35 (read)Csec_Ip_EncryptCbc/35 (read)Csec_Ip_EncryptCbc/35 (read)Csec_Ip_EncryptCbc/35 (read)Csec_Ip_EncryptCbc/35 (read)Csec_Ip_GenerateMac/37 (read)Csec_Ip_GenerateMac/37 (read)Csec_Ip_GenerateMac/37 (read)Csec_Ip_GenerateMac/37 (read)Csec_Ip_GenerateMac/37 (read)Csec_Ip_BootFailure/45 (read)Csec_Ip_BootFailure/45 (read)Csec_Ip_StartEncDecCBCCmd/18 (read)Csec_Ip_StartEncDecCBCCmd/18 (read)Csec_Ip_StartEncDecCBCCmd/18 (read)Csec_Ip_StartEncDecCBCCmd/18 (read)Csec_Ip_GenerateMac/37 (read)Csec_Ip_GetId/48 (read)Csec_Ip_GetId/48 (read)Csec_Ip_GetId/48 (read)Csec_Ip_BootDefine/47 (read)Csec_Ip_BootDefine/47 (read)Csec_Ip_InitRng/42 (read)Csec_Ip_InitRng/42 (read)Csec_Ip_ExportRamKey/41 (read)Csec_Ip_ContinueEncDecCBCCmd.part.0/67 (read)Csec_Ip_ContinueEncDecCBCCmd/19 (read)Csec_Ip_ContinueEncDecCBCCmd/19 (read)Csec_Ip_GenerateRnd/44 (read)Csec_Ip_GenerateRnd/44 (read)Csec_Ip_EncryptCbcAsync/27 (read)Csec_Ip_GenerateMacAddrMode/58 (read)Csec_Ip_GenerateMacAddrMode/58 (read)
  Availability: available
  Varpool flags:

;; Function Csec_Ip_ClearErrorFlags (Csec_Ip_ClearErrorFlags, funcdef_no=1, decl_uid=5804, cgraph_uid=2, symbol_order=2)

Modification phase of node Csec_Ip_ClearErrorFlags/2
Csec_Ip_ClearErrorFlags ()
{
  unsigned char _1;
  signed char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct FTFC_Type *)1073872896B].FSTAT;
  _2 = (signed char) _1;
  if (_2 < 0)
    goto <bb 3>; [41.00%]
  else
    goto <bb 4>; [59.00%]

  <bb 3> [local count: 440234148]:
  # DEBUG BEGIN_STMT
  MEM[(struct FTFC_Type *)1073872896B].FSTAT ={v} 48;

  <bb 4> [local count: 1073741824]:
  return;

}



;; Function Csec_Ip_UpdateState (Csec_Ip_UpdateState, funcdef_no=2, decl_uid=5810, cgraph_uid=3, symbol_order=3)

Modification phase of node Csec_Ip_UpdateState/3
Adjusting mask for param 1 to 0x1f
Setting value range of param 1 [1, 22]
Csec_Ip_UpdateState (Csec_Ip_KeyIdType eKeyId, Csec_Ip_CmdType eCmd, const uint8 * pInputBuff, uint8 * pOutputBuff, uint32 u32InputSize)
{
  struct Csec_Ip_StateType * Csec_Ip_pState.9_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.9_1 = Csec_Ip_pState;
  Csec_Ip_pState.9_1->bCmdInProgress = 1;
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.9_1->eCmd = eCmd_4(D);
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.9_1->pInputBuff = pInputBuff_6(D);
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.9_1->pOutputBuff = pOutputBuff_8(D);
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.9_1->eKeyId = eKeyId_10(D);
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.9_1->u32InputSize = u32InputSize_12(D);
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.9_1->u32Index = 0;
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.9_1->ErrCode = 1;
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.9_1->eSeq = 0;
  return;

}



;; Function Csec_Ip_WriteCommandHalfWord (Csec_Ip_WriteCommandHalfWord, funcdef_no=5, decl_uid=5820, cgraph_uid=6, symbol_order=6)

Modification phase of node Csec_Ip_WriteCommandHalfWord/6
Adjusting mask for param 0 to 0x6
Setting value range of param 0 [8, 14]
Csec_Ip_WriteCommandHalfWord (uint8 u8Offset, uint16 u16HalfWord)
{
  uint32 u32Temp;
  unsigned char _1;
  unsigned char _2;
  int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _2 = u8Offset_8(D) >> 2;
  _3 = (int) _2;
  u32Temp_10 ={v} MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[_3];
  # DEBUG u32Temp => u32Temp_10
  # DEBUG BEGIN_STMT
  _1 = u8Offset_8(D) & 2;
  if (_1 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  u32Temp_14 = u32Temp_10 & 4294901760;
  # DEBUG u32Temp => u32Temp_14
  # DEBUG BEGIN_STMT
  _4 = (long unsigned int) u16HalfWord_12(D);
  u32Temp_15 = _4 | u32Temp_14;
  # DEBUG u32Temp => u32Temp_15
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  u32Temp_11 = u32Temp_10 & 65535;
  # DEBUG u32Temp => u32Temp_11
  # DEBUG BEGIN_STMT
  _5 = (long unsigned int) u16HalfWord_12(D);
  _6 = _5 << 16;
  u32Temp_13 = _6 | u32Temp_11;
  # DEBUG u32Temp => u32Temp_13

  <bb 5> [local count: 1073741824]:
  # u32Temp_7 = PHI <u32Temp_15(3), u32Temp_13(4)>
  # DEBUG u32Temp => u32Temp_7
  # DEBUG BEGIN_STMT
  MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[_3] ={v} u32Temp_7;
  return;

}



;; Function Csec_Ip_ReadCommandBytes (Csec_Ip_ReadCommandBytes, funcdef_no=11, decl_uid=5836, cgraph_uid=12, symbol_order=12)

Modification phase of node Csec_Ip_ReadCommandBytes/12
Adjusting mask for param 0 to 0x70
Setting value range of param 0 [16, 112]
Csec_Ip_ReadCommandBytes (uint8 u8Offset, uint8 * pOutputbytes, uint8 u8NumBytes)
{
  uint32 u32Temp;
  uint8 u8Index;
  int _1;
  int _2;
  int _3;
  int _4;
  long unsigned int _5;
  uint8 * _6;
  unsigned char _7;
  long unsigned int _8;
  sizetype _9;
  uint8 * _10;
  unsigned char _11;
  long unsigned int _12;
  sizetype _13;
  uint8 * _14;
  unsigned char _15;
  uint8 * _16;
  unsigned char _17;
  unsigned int _18;
  unsigned int _19;
  unsigned int _20;
  unsigned char _21;
  sizetype _22;
  uint8 * _23;
  unsigned char _24;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG u8Index => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630220]:
  # DEBUG BEGIN_STMT
  _1 = (int) u8Offset_31(D);
  _2 = (int) u8Index_25;
  _3 = _1 + _2;
  _4 = _3 >> 2;
  u32Temp_36 ={v} MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[_4];
  # DEBUG u32Temp => u32Temp_36
  # DEBUG BEGIN_STMT
  _5 = u32Temp_36 >> 24;
  _6 = pOutputbytes_32(D) + _18;
  _7 = (unsigned char) _5;
  *_6 = _7;
  # DEBUG BEGIN_STMT
  _8 = u32Temp_36 >> 16;
  _9 = _18 + 1;
  _10 = pOutputbytes_32(D) + _9;
  _11 = (unsigned char) _8;
  *_10 = _11;
  # DEBUG BEGIN_STMT
  _12 = u32Temp_36 >> 8;
  _13 = _18 + 2;
  _14 = pOutputbytes_32(D) + _13;
  _15 = (unsigned char) _12;
  *_14 = _15;
  # DEBUG BEGIN_STMT
  _16 = pOutputbytes_32(D) + _19;
  _17 = (unsigned char) u32Temp_36;
  *_16 = _17;
  # DEBUG BEGIN_STMT
  u8Index_41 = u8Index_25 + 4;
  # DEBUG u8Index => u8Index_41

  <bb 4> [local count: 1073741821]:
  # u8Index_25 = PHI <0(2), u8Index_41(3)>
  # DEBUG u8Index => u8Index_25
  # DEBUG BEGIN_STMT
  _18 = (unsigned int) u8Index_25;
  _19 = _18 + 3;
  _20 = (unsigned int) u8NumBytes_30(D);
  if (_19 < _20)
    goto <bb 3>; [89.00%]
  else
    goto <bb 9>; [11.00%]

  <bb 9> [local count: 118111600]:
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 955630224]:
  # DEBUG BEGIN_STMT
  _21 = u8Index_26 + u8Offset_31(D);
  _22 = (sizetype) u8Index_26;
  _23 = pOutputbytes_32(D) + _22;
  _24 = Csec_Ip_ReadCommandByte (_21);
  *_23 = _24;
  # DEBUG BEGIN_STMT
  u8Index_35 = u8Index_26 + 1;
  # DEBUG u8Index => u8Index_35

  <bb 7> [local count: 1073741824]:
  # u8Index_26 = PHI <u8Index_35(6), u8Index_25(9)>
  # DEBUG u8Index => u8Index_26
  # DEBUG BEGIN_STMT
  if (u8Index_26 < u8NumBytes_30(D))
    goto <bb 6>; [89.00%]
  else
    goto <bb 8>; [11.00%]

  <bb 8> [local count: 118111601]:
  return;

}



;; Function Csec_Ip_WaitCommandCompletion (Csec_Ip_WaitCommandCompletion, funcdef_no=7, decl_uid=5828, cgraph_uid=8, symbol_order=8)

Modification phase of node Csec_Ip_WaitCommandCompletion/8
Csec_Ip_WaitCommandCompletion (uint32 u32Timeout, uint32 u32ElapsedTimeInTicks)
{
  uint32 u32CurrentTicks;
  uint32 u32TimeoutTicks;
  uint32 u32ElapsedTicks;
  long unsigned int _1;
  unsigned char _2;
  signed char _3;
  struct Csec_Ip_StateType * Csec_Ip_pState.28_4;
  long unsigned int _16;

  <bb 2> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  # DEBUG u32ElapsedTicks => u32ElapsedTimeInTicks_8(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  u32TimeoutTicks_12 = OsIf_MicrosToTicks (u32Timeout_10(D), 0);
  # DEBUG u32TimeoutTicks => u32TimeoutTicks_12
  # DEBUG BEGIN_STMT
  _1 = OsIf_GetCounter (0);
  u32CurrentTicks = _1;
  # DEBUG BEGIN_STMT
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 958878293]:
  # DEBUG BEGIN_STMT
  _16 = OsIf_GetElapsed (&u32CurrentTicks, 0);
  u32ElapsedTicks_17 = u32ElapsedTicks_5 + _16;
  # DEBUG u32ElapsedTicks => u32ElapsedTicks_17

  <bb 4> [local count: 1073741824]:
  # u32ElapsedTicks_5 = PHI <u32ElapsedTimeInTicks_8(D)(2), u32ElapsedTicks_17(3)>
  # DEBUG u32ElapsedTicks => u32ElapsedTicks_5
  # DEBUG BEGIN_STMT
  _2 ={v} MEM[(struct FTFC_Type *)1073872896B].FSTAT;
  _3 = (signed char) _2;
  if (_3 >= 0)
    goto <bb 5>; [94.50%]
  else
    goto <bb 6>; [5.50%]

  <bb 5> [local count: 1014686025]:
  if (u32ElapsedTicks_5 < u32TimeoutTicks_12)
    goto <bb 3>; [94.50%]
  else
    goto <bb 6>; [5.50%]

  <bb 6> [local count: 114863532]:
  # u32ElapsedTicks_19 = PHI <u32ElapsedTicks_5(4), u32ElapsedTicks_5(5)>
  # DEBUG BEGIN_STMT
  if (u32TimeoutTicks_12 <= u32ElapsedTicks_19)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 57431766]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.28_4 = Csec_Ip_pState;
  Csec_Ip_pState.28_4->ErrCode = 65534;

  <bb 8> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  u32CurrentTicks ={v} {CLOBBER};
  return u32ElapsedTicks_19;

}



;; Function Csec_Ip_SetInterrupt (Csec_Ip_SetInterrupt, funcdef_no=12, decl_uid=5842, cgraph_uid=13, symbol_order=13)

Modification phase of node Csec_Ip_SetInterrupt/13
Setting value range of param 0 [0, -1]
Csec_Ip_SetInterrupt (boolean bEnable)
{
  uint8 u8FCNFG;
  unsigned char _1;
  unsigned char _2;
  unsigned char iftmp.45_3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_12 ();
  # DEBUG BEGIN_STMT
  u8FCNFG_6 ={v} MEM[(struct FTFC_Type *)1073872896B].FCNFG;
  # DEBUG u8FCNFG => u8FCNFG_6
  # DEBUG BEGIN_STMT
  _1 = u8FCNFG_6 & 127;
  if (bEnable_7(D) != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:

  <bb 4> [local count: 1073741824]:
  # iftmp.45_3 = PHI <128(2), 0(3)>
  _2 = _1 | iftmp.45_3;
  MEM[(struct FTFC_Type *)1073872896B].FCNFG ={v} _2;
  # DEBUG BEGIN_STMT
  SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_12 ();
  return;

}



;; Function Csec_Ip_WriteCommandHeader.constprop (Csec_Ip_WriteCommandHeader.constprop.0, funcdef_no=62, decl_uid=6863, cgraph_uid=111, symbol_order=111)

Modification phase of node Csec_Ip_WriteCommandHeader.constprop/111
Csec_Ip_WriteCommandHeader.constprop (Csec_Ip_CmdType eFuncId, Csec_Ip_CallSequenceType eCallSeq, Csec_Ip_KeyIdType eKeyId)
{
  Csec_Ip_FuncFormatType eFuncFormat;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _11;
  long unsigned int _12;

  <bb 3> [local count: 1073741824]:
  # DEBUG eFuncFormat => 0

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _2 = eFuncId_1(D) << 24;
  _3 = 0;
  _4 = _3 & 16711680;
  _5 = _2 | _4;
  _7 = eCallSeq_6(D) << 8;
  _8 = _7 & 65535;
  _9 = _5 | _8;
  _11 = eKeyId_10(D) & 255;
  _12 = _9 | _11;
  MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[0] ={v} _12;
  return;

}



;; Function Csec_Ip_WriteCommandBytes (Csec_Ip_WriteCommandBytes, funcdef_no=3, decl_uid=5814, cgraph_uid=4, symbol_order=4)

Modification phase of node Csec_Ip_WriteCommandBytes/4
Adjusting mask for param 0 to 0x70
Setting value range of param 0 [16, 111]
Csec_Ip_WriteCommandBytes (const uint8 u8Offset, const uint8 * pInputBytes, const uint8 u8NumBytes)
{
  uint8 u8Index;
  const uint8 * _1;
  unsigned char _2;
  long unsigned int _3;
  long unsigned int _4;
  sizetype _5;
  const uint8 * _6;
  unsigned char _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  sizetype _11;
  const uint8 * _12;
  unsigned char _13;
  long unsigned int _14;
  long unsigned int _15;
  long unsigned int _16;
  const uint8 * _17;
  unsigned char _18;
  long unsigned int _19;
  int _20;
  int _21;
  int _22;
  int _23;
  long unsigned int _24;
  unsigned int _25;
  unsigned int _26;
  unsigned int _27;
  unsigned char _28;
  sizetype _29;
  const uint8 * _30;
  unsigned char _31;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG u8Index => 0
  # DEBUG BEGIN_STMT
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630220]:
  # DEBUG BEGIN_STMT
  _1 = pInputBytes_39(D) + _25;
  _2 = *_1;
  _3 = (long unsigned int) _2;
  _4 = _3 << 24;
  _5 = _25 + 1;
  _6 = pInputBytes_39(D) + _5;
  _7 = *_6;
  _8 = (long unsigned int) _7;
  _9 = _8 << 16;
  _10 = _4 | _9;
  _11 = _25 + 2;
  _12 = pInputBytes_39(D) + _11;
  _13 = *_12;
  _14 = (long unsigned int) _13;
  _15 = _14 << 8;
  _16 = _10 | _15;
  _17 = pInputBytes_39(D) + _26;
  _18 = *_17;
  _19 = (long unsigned int) _18;
  _20 = (int) u8Offset_38(D);
  _21 = (int) u8Index_32;
  _22 = _20 + _21;
  _23 = _22 >> 2;
  _24 = _16 | _19;
  MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[_23] ={v} _24;
  # DEBUG BEGIN_STMT
  u8Index_43 = u8Index_32 + 4;
  # DEBUG u8Index => u8Index_43

  <bb 4> [local count: 1073741821]:
  # u8Index_32 = PHI <0(2), u8Index_43(3)>
  # DEBUG u8Index => u8Index_32
  # DEBUG BEGIN_STMT
  _25 = (unsigned int) u8Index_32;
  _26 = _25 + 3;
  _27 = (unsigned int) u8NumBytes_37(D);
  if (_26 < _27)
    goto <bb 3>; [89.00%]
  else
    goto <bb 9>; [11.00%]

  <bb 9> [local count: 118111600]:
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 955630224]:
  # DEBUG BEGIN_STMT
  _28 = u8Index_33 + u8Offset_38(D);
  _29 = (sizetype) u8Index_33;
  _30 = pInputBytes_39(D) + _29;
  _31 = *_30;
  Csec_Ip_WriteCommandByte (_28, _31);
  # DEBUG BEGIN_STMT
  u8Index_41 = u8Index_33 + 1;
  # DEBUG u8Index => u8Index_41

  <bb 7> [local count: 1073741824]:
  # u8Index_33 = PHI <u8Index_41(6), u8Index_32(9)>
  # DEBUG u8Index => u8Index_33
  # DEBUG BEGIN_STMT
  if (u8Index_33 < u8NumBytes_37(D))
    goto <bb 6>; [89.00%]
  else
    goto <bb 8>; [11.00%]

  <bb 8> [local count: 118111601]:
  return;

}



;; Function Csec_Ip_StartEncDecECBCmd (Csec_Ip_StartEncDecECBCmd, funcdef_no=15, decl_uid=5973, cgraph_uid=16, symbol_order=16)

Modification phase of node Csec_Ip_StartEncDecECBCmd/16
Csec_Ip_StartEncDecECBCmd ()
{
  uint8 u8NumBytes;
  uint32 u32NumPagesLeft;
  struct Csec_Ip_StateType * Csec_Ip_pState.18_1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  unsigned char _5;
  long unsigned int _6;
  const uint8 * _7;
  const uint8 * _8;
  struct Csec_Ip_StateType * Csec_Ip_pState.23_9;
  <unnamed type> _10;
  <unnamed type> _11;
  <unnamed type> _12;
  short unsigned int iftmp.20_13;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.18_1 = Csec_Ip_pState;
  _2 = Csec_Ip_pState.18_1->u32InputSize;
  _3 = Csec_Ip_pState.18_1->u32Index;
  _4 = _2 - _3;
  u32NumPagesLeft_15 = _4 >> 4;
  # DEBUG u32NumPagesLeft => u32NumPagesLeft_15
  # DEBUG BEGIN_STMT
  _6 = MIN_EXPR <u32NumPagesLeft_15, 7>;
  iftmp.20_13 = (short unsigned int) _6;
  # DEBUG u16NumPages => iftmp.20_13
  # DEBUG BEGIN_STMT
  _5 = (unsigned char) iftmp.20_13;
  u8NumBytes_16 = _5 << 4;
  # DEBUG u8NumBytes => u8NumBytes_16
  # DEBUG BEGIN_STMT
  _7 = Csec_Ip_pState.18_1->pInputBuff;
  _8 = _7 + _3;
  Csec_Ip_WriteCommandBytes (16, _8, u8NumBytes_16);
  # DEBUG BEGIN_STMT
  Csec_Ip_WriteCommandHalfWord (14, iftmp.20_13);
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.23_9 = Csec_Ip_pState;
  Csec_Ip_pState.23_9->u8PartialSize = u8NumBytes_16;
  # DEBUG BEGIN_STMT
  _10 = Csec_Ip_pState.23_9->eCmd;
  _11 = Csec_Ip_pState.23_9->eSeq;
  _12 = Csec_Ip_pState.23_9->eKeyId;
  Csec_Ip_WriteCommandHeader (_10, 0, _11, _12);
  return;

}



;; Function Csec_Ip_ContinueEncDecECBCmd (Csec_Ip_ContinueEncDecECBCmd, funcdef_no=16, decl_uid=5840, cgraph_uid=17, symbol_order=17)

Modification phase of node Csec_Ip_ContinueEncDecECBCmd/17
Csec_Ip_ContinueEncDecECBCmd ()
{
  Csec_Ip_ErrorCodeType CsecResponse;
  struct Csec_Ip_StateType * Csec_Ip_pState.29_1;
  uint8 * _2;
  long unsigned int _3;
  uint8 * _4;
  unsigned char _5;
  struct Csec_Ip_StateType * Csec_Ip_pState.35_6;
  long unsigned int _7;
  unsigned char _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _11;
  long unsigned int _20;
  long unsigned int _21;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.29_1 = Csec_Ip_pState;
  # DEBUG INLINE_ENTRY Csec_Ip_ReadErrorBits
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG u8Offset => 4
  # DEBUG INLINE_ENTRY Csec_Ip_ReadCommandWord
  # DEBUG BEGIN_STMT
  _20 ={v} MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[1];
  # DEBUG u8Offset => NULL
  # DEBUG u32ErrWord => _20
  # DEBUG BEGIN_STMT
  _21 = _20 >> 16;
  CsecResponse_22 = (Csec_Ip_ErrorCodeType) _21;
  # DEBUG CsecResponse => CsecResponse_22
  # DEBUG BEGIN_STMT
  # DEBUG CsecResponse => NULL
  Csec_Ip_pState.29_1->ErrCode = CsecResponse_22;
  # DEBUG BEGIN_STMT
  if (CsecResponse_22 != 1)
    goto <bb 3>; [79.76%]
  else
    goto <bb 4>; [20.24%]

  <bb 3> [local count: 856416480]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.29_1->bCmdInProgress = 0;
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  _2 = Csec_Ip_pState.29_1->pOutputBuff;
  _3 = Csec_Ip_pState.29_1->u32Index;
  _4 = _2 + _3;
  _5 = Csec_Ip_pState.29_1->u8PartialSize;
  Csec_Ip_ReadCommandBytes (16, _4, _5);
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.35_6 = Csec_Ip_pState;
  _7 = Csec_Ip_pState.35_6->u32Index;
  _8 = Csec_Ip_pState.35_6->u8PartialSize;
  _9 = (long unsigned int) _8;
  _10 = _7 + _9;
  Csec_Ip_pState.35_6->u32Index = _10;
  # DEBUG BEGIN_STMT
  _11 = Csec_Ip_pState.35_6->u32InputSize;
  if (_10 >= _11)
    goto <bb 5>; [67.00%]
  else
    goto <bb 6>; [33.00%]

  <bb 5> [local count: 145607981]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.35_6->bCmdInProgress = 0;
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 71717364]:
  # DEBUG BEGIN_STMT
  Csec_Ip_StartEncDecECBCmd ();

  <bb 7> [local count: 1073741824]:
  return;

}



;; Function Csec_Ip_EncryptEcbAsync (Csec_Ip_EncryptEcbAsync, funcdef_no=24, decl_uid=5863, cgraph_uid=25, symbol_order=25)

Modification phase of node Csec_Ip_EncryptEcbAsync/25
Csec_Ip_EncryptEcbAsync (const struct Csec_Ip_ReqType * pRequest)
{
  struct Csec_Ip_StateType * Csec_Ip_pState.42_1;
  void (*<T4c5>) (Csec_Ip_ErrorCodeType, Csec_Ip_CmdType, void *) _2;
  void * _3;
  <unnamed type> _4;
  <unnamed type> _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.42_1 = Csec_Ip_pState;
  _2 = pRequest_8(D)->pfCallback;
  Csec_Ip_pState.42_1->pfCallback = _2;
  # DEBUG BEGIN_STMT
  _3 = pRequest_8(D)->pCallbackParam;
  Csec_Ip_pState.42_1->pCallbackParam = _3;
  # DEBUG BEGIN_STMT
  _4 = pRequest_8(D)->eReqType;
  Csec_Ip_pState.42_1->eReqType = _4;
  # DEBUG BEGIN_STMT
  Csec_Ip_StartEncDecECBCmd ();
  # DEBUG BEGIN_STMT
  _5 = pRequest_8(D)->eReqType;
  if (_5 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  Csec_Ip_SetInterrupt (1);

  <bb 4> [local count: 1073741824]:
  return;

}



;; Function Csec_Ip_StartEncDecCBCCmd (Csec_Ip_StartEncDecCBCCmd, funcdef_no=17, decl_uid=5844, cgraph_uid=18, symbol_order=18)

Modification phase of node Csec_Ip_StartEncDecCBCCmd/18
Csec_Ip_StartEncDecCBCCmd ()
{
  uint8 u8NumBytes;
  uint32 u32NumPagesLeft;
  struct Csec_Ip_StateType * Csec_Ip_pState.64_1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  unsigned char _5;
  long unsigned int _6;
  <unnamed type> _7;
  unsigned char _8;
  const uint8 * _9;
  struct Csec_Ip_StateType * Csec_Ip_pState.70_10;
  const uint8 * _11;
  long unsigned int _12;
  const uint8 * _13;
  const uint8 * _14;
  long unsigned int _15;
  const uint8 * _16;
  struct Csec_Ip_StateType * Csec_Ip_pState.74_17;
  long unsigned int _18;
  long unsigned int _19;
  short unsigned int _20;
  struct Csec_Ip_StateType * Csec_Ip_pState.75_21;
  <unnamed type> _22;
  <unnamed type> _23;
  <unnamed type> _24;
  short unsigned int iftmp.66_26;
  short unsigned int iftmp.68_27;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.64_1 = Csec_Ip_pState;
  _2 = Csec_Ip_pState.64_1->u32InputSize;
  _3 = Csec_Ip_pState.64_1->u32Index;
  _4 = _2 - _3;
  u32NumPagesLeft_30 = _4 >> 4;
  # DEBUG u32NumPagesLeft => u32NumPagesLeft_30
  # DEBUG BEGIN_STMT
  _15 = MIN_EXPR <u32NumPagesLeft_30, 7>;
  iftmp.66_26 = (short unsigned int) _15;
  # DEBUG u16NumPages => iftmp.66_26
  # DEBUG BEGIN_STMT
  _5 = (unsigned char) iftmp.66_26;
  u8NumBytes_31 = _5 << 4;
  # DEBUG u8NumBytes => u8NumBytes_31
  # DEBUG BEGIN_STMT
  _7 = Csec_Ip_pState.64_1->eSeq;
  if (_7 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _6 = MIN_EXPR <u32NumPagesLeft_30, 6>;
  iftmp.68_27 = (short unsigned int) _6;
  # DEBUG u16NumPages => iftmp.68_27
  # DEBUG BEGIN_STMT
  _8 = (unsigned char) iftmp.68_27;
  u8NumBytes_33 = _8 << 4;
  # DEBUG u8NumBytes => u8NumBytes_33
  # DEBUG BEGIN_STMT
  _9 = Csec_Ip_pState.64_1->pIV;
  Csec_Ip_WriteCommandBytes (16, _9, 16);
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.70_10 = Csec_Ip_pState;
  _11 = Csec_Ip_pState.70_10->pInputBuff;
  _12 = Csec_Ip_pState.70_10->u32Index;
  _13 = _11 + _12;
  Csec_Ip_WriteCommandBytes (32, _13, u8NumBytes_33);
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _14 = Csec_Ip_pState.64_1->pInputBuff;
  _16 = _14 + _3;
  Csec_Ip_WriteCommandBytes (16, _16, u8NumBytes_31);

  <bb 5> [local count: 1073741824]:
  # u8NumBytes_25 = PHI <u8NumBytes_33(3), u8NumBytes_31(4)>
  # DEBUG u8NumBytes => u8NumBytes_25
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.74_17 = Csec_Ip_pState;
  _18 = Csec_Ip_pState.74_17->u32InputSize;
  _19 = _18 >> 4;
  _20 = (short unsigned int) _19;
  Csec_Ip_WriteCommandHalfWord (14, _20);
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.75_21 = Csec_Ip_pState;
  Csec_Ip_pState.75_21->u8PartialSize = u8NumBytes_25;
  # DEBUG BEGIN_STMT
  _22 = Csec_Ip_pState.75_21->eCmd;
  _23 = Csec_Ip_pState.75_21->eSeq;
  _24 = Csec_Ip_pState.75_21->eKeyId;
  Csec_Ip_WriteCommandHeader (_22, 0, _23, _24);
  return;

}



;; Function Csec_Ip_ContinueEncDecCBCCmd (Csec_Ip_ContinueEncDecCBCCmd, funcdef_no=18, decl_uid=5846, cgraph_uid=19, symbol_order=19)

Modification phase of node Csec_Ip_ContinueEncDecCBCCmd/19
Csec_Ip_ContinueEncDecCBCCmd ()
{
  Csec_Ip_ErrorCodeType CsecResponse;
  struct Csec_Ip_StateType * Csec_Ip_pState.79_1;
  <unnamed type> _4;
  uint8 * _5;
  long unsigned int _6;
  uint8 * _7;
  unsigned char _8;
  struct Csec_Ip_StateType * Csec_Ip_pState.86_9;
  uint8 * _10;
  long unsigned int _11;
  uint8 * _12;
  unsigned char _13;
  long unsigned int _21;
  long unsigned int _22;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.79_1 = Csec_Ip_pState;
  # DEBUG INLINE_ENTRY Csec_Ip_ReadErrorBits
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG u8Offset => 4
  # DEBUG INLINE_ENTRY Csec_Ip_ReadCommandWord
  # DEBUG BEGIN_STMT
  _21 ={v} MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[1];
  # DEBUG u8Offset => NULL
  # DEBUG u32ErrWord => _21
  # DEBUG BEGIN_STMT
  _22 = _21 >> 16;
  CsecResponse_23 = (Csec_Ip_ErrorCodeType) _22;
  # DEBUG CsecResponse => CsecResponse_23
  # DEBUG BEGIN_STMT
  # DEBUG CsecResponse => NULL
  Csec_Ip_pState.79_1->ErrCode = CsecResponse_23;
  # DEBUG BEGIN_STMT
  if (CsecResponse_23 != 1)
    goto <bb 3>; [66.00%]
  else
    goto <bb 4>; [34.00%]

  <bb 3> [local count: 708669604]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.79_1->bCmdInProgress = 0;
  goto <bb 8>; [100.00%]

  <bb 4> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  _4 = Csec_Ip_pState.79_1->eSeq;
  if (_4 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 182536110]:
  # DEBUG BEGIN_STMT
  _5 = Csec_Ip_pState.79_1->pOutputBuff;
  _6 = Csec_Ip_pState.79_1->u32Index;
  _7 = _5 + _6;
  _8 = Csec_Ip_pState.79_1->u8PartialSize;
  Csec_Ip_ReadCommandBytes (32, _7, _8);
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.86_9 = Csec_Ip_pState;
  Csec_Ip_pState.86_9->eSeq = 1;
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 182536110]:
  # DEBUG BEGIN_STMT
  _10 = Csec_Ip_pState.79_1->pOutputBuff;
  _11 = Csec_Ip_pState.79_1->u32Index;
  _12 = _10 + _11;
  _13 = Csec_Ip_pState.79_1->u8PartialSize;
  Csec_Ip_ReadCommandBytes (16, _12, _13);

  <bb 7> [local count: 365072220]:
  Csec_Ip_ContinueEncDecCBCCmd.part.0 ();

  <bb 8> [local count: 1073741824]:
  return;

}



;; Function Csec_Ip_EncryptCbcAsync (Csec_Ip_EncryptCbcAsync, funcdef_no=26, decl_uid=5867, cgraph_uid=27, symbol_order=27)

Modification phase of node Csec_Ip_EncryptCbcAsync/27
Csec_Ip_EncryptCbcAsync (const struct Csec_Ip_ReqType * pRequest)
{
  struct Csec_Ip_StateType * Csec_Ip_pState.96_1;
  void (*<T4c5>) (Csec_Ip_ErrorCodeType, Csec_Ip_CmdType, void *) _2;
  void * _3;
  <unnamed type> _4;
  <unnamed type> _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.96_1 = Csec_Ip_pState;
  _2 = pRequest_8(D)->pfCallback;
  Csec_Ip_pState.96_1->pfCallback = _2;
  # DEBUG BEGIN_STMT
  _3 = pRequest_8(D)->pCallbackParam;
  Csec_Ip_pState.96_1->pCallbackParam = _3;
  # DEBUG BEGIN_STMT
  _4 = pRequest_8(D)->eReqType;
  Csec_Ip_pState.96_1->eReqType = _4;
  # DEBUG BEGIN_STMT
  Csec_Ip_StartEncDecCBCCmd ();
  # DEBUG BEGIN_STMT
  _5 = pRequest_8(D)->eReqType;
  if (_5 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  Csec_Ip_SetInterrupt (1);

  <bb 4> [local count: 1073741824]:
  return;

}



;; Function Csec_Ip_StartGenMACCmd (Csec_Ip_StartGenMACCmd, funcdef_no=19, decl_uid=5853, cgraph_uid=20, symbol_order=20)

Modification phase of node Csec_Ip_StartGenMACCmd/20
Csec_Ip_StartGenMACCmd ()
{
  struct Csec_Ip_StateType * Csec_Ip_pState.119_1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  unsigned char _5;
  unsigned char _6;
  const uint8 * _7;
  const uint8 * _8;
  struct Csec_Ip_StateType * Csec_Ip_pState.125_9;
  long unsigned int _10;
  <unnamed type> _11;
  <unnamed type> _12;
  <unnamed type> _13;
  unsigned char iftmp.118_14;
  unsigned char iftmp.118_16;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.119_1 = Csec_Ip_pState;
  _2 = Csec_Ip_pState.119_1->u32InputSize;
  _3 = Csec_Ip_pState.119_1->u32Index;
  _4 = _2 - _3;
  if (_4 <= 112)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  _5 = (unsigned char) _2;
  _6 = (unsigned char) _3;
  iftmp.118_16 = _5 - _6;

  <bb 4> [local count: 1073741824]:
  # iftmp.118_14 = PHI <iftmp.118_16(3), 112(2)>
  # DEBUG u8NumBytes => iftmp.118_14
  # DEBUG BEGIN_STMT
  _7 = Csec_Ip_pState.119_1->pInputBuff;
  _8 = _7 + _3;
  Csec_Ip_WriteCommandBytes (16, _8, iftmp.118_14);
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.125_9 = Csec_Ip_pState;
  _10 = Csec_Ip_pState.125_9->u32MsgLen;
  # DEBUG u8Offset => 12
  # DEBUG u32Word => _10
  # DEBUG INLINE_ENTRY Csec_Ip_WriteCommandWord
  # DEBUG BEGIN_STMT
  # DEBUG u8IndexWord => 3
  # DEBUG BEGIN_STMT
  MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[3] ={v} _10;
  # DEBUG u8Offset => NULL
  # DEBUG u32Word => NULL
  # DEBUG u8IndexWord => NULL
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.125_9->u8PartialSize = iftmp.118_14;
  # DEBUG BEGIN_STMT
  _11 = Csec_Ip_pState.125_9->eCmd;
  _12 = Csec_Ip_pState.125_9->eSeq;
  _13 = Csec_Ip_pState.125_9->eKeyId;
  Csec_Ip_WriteCommandHeader (_11, 0, _12, _13);
  return;

}



;; Function Csec_Ip_ContinueGenMACCmd (Csec_Ip_ContinueGenMACCmd, funcdef_no=20, decl_uid=5855, cgraph_uid=21, symbol_order=21)

Modification phase of node Csec_Ip_ContinueGenMACCmd/21
Csec_Ip_ContinueGenMACCmd ()
{
  Csec_Ip_ErrorCodeType CsecResponse;
  struct Csec_Ip_StateType * Csec_Ip_pState.130_1;
  <unnamed type> _2;
  long unsigned int _3;
  unsigned char _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  uint8 * _8;
  long unsigned int _19;
  long unsigned int _20;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.130_1 = Csec_Ip_pState;
  # DEBUG INLINE_ENTRY Csec_Ip_ReadErrorBits
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG u8Offset => 4
  # DEBUG INLINE_ENTRY Csec_Ip_ReadCommandWord
  # DEBUG BEGIN_STMT
  _19 ={v} MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[1];
  # DEBUG u8Offset => NULL
  # DEBUG u32ErrWord => _19
  # DEBUG BEGIN_STMT
  _20 = _19 >> 16;
  CsecResponse_21 = (Csec_Ip_ErrorCodeType) _20;
  # DEBUG CsecResponse => CsecResponse_21
  # DEBUG BEGIN_STMT
  # DEBUG CsecResponse => NULL
  Csec_Ip_pState.130_1->ErrCode = CsecResponse_21;
  # DEBUG BEGIN_STMT
  if (CsecResponse_21 != 1)
    goto <bb 3>; [66.00%]
  else
    goto <bb 4>; [34.00%]

  <bb 3> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.130_1->bCmdInProgress = 0;
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  _2 = Csec_Ip_pState.130_1->eSeq;
  if (_2 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 182536110]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.130_1->eSeq = 1;

  <bb 6> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  _3 = Csec_Ip_pState.130_1->u32Index;
  _4 = Csec_Ip_pState.130_1->u8PartialSize;
  _5 = (long unsigned int) _4;
  _6 = _3 + _5;
  Csec_Ip_pState.130_1->u32Index = _6;
  # DEBUG BEGIN_STMT
  _7 = Csec_Ip_pState.130_1->u32InputSize;
  if (_6 >= _7)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 182536110]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.130_1->bCmdInProgress = 0;
  # DEBUG BEGIN_STMT
  _8 = Csec_Ip_pState.130_1->pOutputBuff;
  Csec_Ip_ReadCommandBytes (32, _8, 16);
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 182536110]:
  # DEBUG BEGIN_STMT
  Csec_Ip_StartGenMACCmd ();

  <bb 9> [local count: 1073741824]:
  return;

}



;; Function Csec_Ip_StartVerifMACCmd (Csec_Ip_StartVerifMACCmd, funcdef_no=21, decl_uid=5857, cgraph_uid=22, symbol_order=22)

Modification phase of node Csec_Ip_StartVerifMACCmd/22
Csec_Ip_StartVerifMACCmd ()
{
  uint8 u8MacOffset;
  struct Csec_Ip_StateType * Csec_Ip_pState.158_1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  unsigned char _5;
  unsigned char _6;
  unsigned char _7;
  const uint8 * _8;
  const uint8 * _9;
  struct Csec_Ip_StateType * Csec_Ip_pState.164_10;
  long unsigned int _11;
  short unsigned int _12;
  unsigned char _13;
  struct Csec_Ip_StateType * Csec_Ip_pState.166_14;
  const uint8 * _15;
  struct Csec_Ip_StateType * Csec_Ip_pState.167_16;
  struct Csec_Ip_StateType * Csec_Ip_pState.168_17;
  <unnamed type> _18;
  <unnamed type> _19;
  <unnamed type> _20;
  unsigned char iftmp.157_21;
  unsigned char iftmp.157_24;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.158_1 = Csec_Ip_pState;
  _2 = Csec_Ip_pState.158_1->u32InputSize;
  _3 = Csec_Ip_pState.158_1->u32Index;
  _4 = _2 - _3;
  if (_4 <= 112)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  _5 = (unsigned char) _2;
  _6 = (unsigned char) _3;
  iftmp.157_24 = _5 - _6;

  <bb 4> [local count: 1073741824]:
  # iftmp.157_21 = PHI <iftmp.157_24(3), 112(2)>
  # DEBUG u8NumBytes => iftmp.157_21
  # DEBUG BEGIN_STMT
  _7 = iftmp.157_21 + 15;
  u8MacOffset_25 = _7 & 240;
  # DEBUG u8MacOffset => u8MacOffset_25
  # DEBUG BEGIN_STMT
  _8 = Csec_Ip_pState.158_1->pInputBuff;
  _9 = _8 + _3;
  Csec_Ip_WriteCommandBytes (16, _9, iftmp.157_21);
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.164_10 = Csec_Ip_pState;
  _11 = Csec_Ip_pState.164_10->u32MsgLen;
  # DEBUG u8Offset => 12
  # DEBUG u32Word => _11
  # DEBUG INLINE_ENTRY Csec_Ip_WriteCommandWord
  # DEBUG BEGIN_STMT
  # DEBUG u8IndexWord => 3
  # DEBUG BEGIN_STMT
  MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[3] ={v} _11;
  # DEBUG u8Offset => NULL
  # DEBUG u32Word => NULL
  # DEBUG u8IndexWord => NULL
  # DEBUG BEGIN_STMT
  _12 = Csec_Ip_pState.164_10->u16MacLen;
  Csec_Ip_WriteCommandHalfWord (8, _12);
  # DEBUG BEGIN_STMT
  if (u8MacOffset_25 <= 95)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  _13 = u8MacOffset_25 + 16;
  Csec_Ip_pState.166_14 = Csec_Ip_pState;
  _15 = Csec_Ip_pState.166_14->pMac;
  Csec_Ip_WriteCommandBytes (_13, _15, 16);
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.167_16 = Csec_Ip_pState;
  Csec_Ip_pState.167_16->bMacWritten = 1;

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.168_17 = Csec_Ip_pState;
  Csec_Ip_pState.168_17->u8PartialSize = iftmp.157_21;
  # DEBUG BEGIN_STMT
  _18 = Csec_Ip_pState.168_17->eCmd;
  _19 = Csec_Ip_pState.168_17->eSeq;
  _20 = Csec_Ip_pState.168_17->eKeyId;
  Csec_Ip_WriteCommandHeader (_18, 0, _19, _20);
  return;

}



;; Function Csec_Ip_ContinueVerifMACCmd (Csec_Ip_ContinueVerifMACCmd, funcdef_no=22, decl_uid=5859, cgraph_uid=23, symbol_order=23)

Modification phase of node Csec_Ip_ContinueVerifMACCmd/23
Csec_Ip_ContinueVerifMACCmd ()
{
  Csec_Ip_ErrorCodeType CsecResponse;
  struct Csec_Ip_StateType * Csec_Ip_pState.172_1;
  <unnamed type> _2;
  long unsigned int _3;
  unsigned char _4;
  long unsigned int _5;
  long unsigned int _6;
  _Bool _7;
  _Bool _8;
  long unsigned int _9;
  boolean * _10;
  _Bool _11;
  long unsigned int _22;
  long unsigned int _23;
  long unsigned int _25;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.172_1 = Csec_Ip_pState;
  # DEBUG INLINE_ENTRY Csec_Ip_ReadErrorBits
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG u8Offset => 4
  # DEBUG INLINE_ENTRY Csec_Ip_ReadCommandWord
  # DEBUG BEGIN_STMT
  _22 ={v} MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[1];
  # DEBUG u8Offset => NULL
  # DEBUG u32ErrWord => _22
  # DEBUG BEGIN_STMT
  _23 = _22 >> 16;
  CsecResponse_24 = (Csec_Ip_ErrorCodeType) _23;
  # DEBUG CsecResponse => CsecResponse_24
  # DEBUG BEGIN_STMT
  # DEBUG CsecResponse => NULL
  Csec_Ip_pState.172_1->ErrCode = CsecResponse_24;
  # DEBUG BEGIN_STMT
  if (CsecResponse_24 != 1)
    goto <bb 3>; [66.00%]
  else
    goto <bb 4>; [34.00%]

  <bb 3> [local count: 708669604]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.172_1->bCmdInProgress = 0;
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  _2 = Csec_Ip_pState.172_1->eSeq;
  if (_2 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 182536110]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.172_1->eSeq = 1;

  <bb 6> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  _3 = Csec_Ip_pState.172_1->u32Index;
  _4 = Csec_Ip_pState.172_1->u8PartialSize;
  _5 = (long unsigned int) _4;
  _6 = _3 + _5;
  Csec_Ip_pState.172_1->u32Index = _6;
  # DEBUG BEGIN_STMT
  _7 = Csec_Ip_pState.172_1->bMacWritten;
  _8 = ~_7;
  Csec_Ip_pState.172_1->bCmdInProgress = _8;
  # DEBUG BEGIN_STMT
  if (_8 != 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 120473832]:
  # DEBUG BEGIN_STMT
  Csec_Ip_StartVerifMACCmd ();
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 244598387]:
  # DEBUG BEGIN_STMT
  # DEBUG u8Offset => 20
  # DEBUG INLINE_ENTRY Csec_Ip_ReadCommandWord
  # DEBUG BEGIN_STMT
  _25 ={v} MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[5];
  # DEBUG u8Offset => NULL
  # DEBUG u32VerifWord => _25
  # DEBUG BEGIN_STMT
  _9 = _25 & 4294901760;
  _10 = Csec_Ip_pState.172_1->pbVerifStatus;
  _11 = _9 == 0;
  *_10 = _11;

  <bb 9> [local count: 1073741824]:
  return;

}



;; Function Csec_Ip_ProcessReceivedResponse.part.0 (Csec_Ip_ProcessReceivedResponse.part.0, funcdef_no=59, decl_uid=6670, cgraph_uid=75, symbol_order=75)

Modification phase of node Csec_Ip_ProcessReceivedResponse.part.0/75
Adjusting mask for param 0 to 0x3
Setting value range of param 0 [1, 2]
Csec_Ip_ProcessReceivedResponse.part.0 (Csec_Ip_ReqTypeType eReqType)
{
  Csec_Ip_ErrorCodeType D.6680;
  Csec_Ip_ErrorCodeType CsecResponse;
  Csec_Ip_ErrorCodeType D.6679;
  Csec_Ip_ErrorCodeType CsecResponse;
  struct Csec_Ip_StateType * Csec_Ip_pState.319_1;
  _Bool _2;
  <unnamed type> _3;
  long unsigned int _4;
  long unsigned int _5;
  uint8 * _7;
  struct Csec_Ip_StateType * Csec_Ip_pState.322_8;
  struct Csec_Ip_StateType * Csec_Ip_pState.323_9;
  _Bool _10;
  struct Csec_Ip_StateType * Csec_Ip_pState.324_12;
  void (*<T4c5>) (Csec_Ip_ErrorCodeType, Csec_Ip_CmdType, void *) _13;
  long unsigned int _14;
  long unsigned int _15;
  <unnamed type> _17;
  void * _18;

  <bb 17> [local count: 1073634462]:

  <bb 2> [local count: 1073634462]:
  Csec_Ip_pState.319_1 = Csec_Ip_pState;
  _2 = Csec_Ip_pState.319_1->bCmdInProgress;
  if (_2 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 16>; [50.00%]

  <bb 3> [local count: 536817231]:
  # DEBUG BEGIN_STMT
  _3 = Csec_Ip_pState.319_1->eCmd;
  switch (_3) <default: <L5> [16.67%], case 1: <L0> [16.67%], case 2: <L1> [16.67%], case 3: <L0> [16.67%], case 4: <L1> [16.67%], case 5: <L2> [16.67%], case 6: <L3> [16.67%], case 12: <L4> [16.67%]>

  <bb 4> [local count: 89487432]:
<L0>:
  # DEBUG BEGIN_STMT
  Csec_Ip_ContinueEncDecECBCmd ();
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 5> [local count: 89487432]:
<L1>:
  # DEBUG BEGIN_STMT
  Csec_Ip_ContinueEncDecCBCCmd ();
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 6> [local count: 89487432]:
<L2>:
  # DEBUG BEGIN_STMT
  Csec_Ip_ContinueGenMACCmd ();
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 7> [local count: 89487432]:
<L3>:
  # DEBUG BEGIN_STMT
  Csec_Ip_ContinueVerifMACCmd ();
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 8> [local count: 89487432]:
<L4>:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY Csec_Ip_ReadErrorBits
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG u8Offset => 4
  # DEBUG INLINE_ENTRY Csec_Ip_ReadCommandWord
  # DEBUG BEGIN_STMT
  _4 ={v} MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[1];
  # DEBUG u8Offset => NULL
  # DEBUG u32ErrWord => _4
  # DEBUG BEGIN_STMT
  _5 = _4 >> 16;
  CsecResponse_6 = (Csec_Ip_ErrorCodeType) _5;
  # DEBUG CsecResponse => CsecResponse_6
  # DEBUG BEGIN_STMT
  # DEBUG CsecResponse => NULL
  if (CsecResponse_6 == 1)
    goto <bb 9>; [20.24%]
  else
    goto <bb 10>; [79.76%]

  <bb 9> [local count: 18112256]:
  # DEBUG BEGIN_STMT
  _7 = Csec_Ip_pState.319_1->pOutputBuff;
  Csec_Ip_ReadCommandBytes (16, _7, 16);

  <bb 10> [local count: 89487432]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.322_8 = Csec_Ip_pState;
  Csec_Ip_pState.322_8->bCmdInProgress = 0;
  # DEBUG BEGIN_STMT

  <bb 11> [local count: 536924595]:
<L5>:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.323_9 = Csec_Ip_pState;
  _10 = Csec_Ip_pState.323_9->bCmdInProgress;
  if (_10 != 0)
    goto <bb 16>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 12> [local count: 268462297]:
  # DEBUG BEGIN_STMT
  if (eReqType_11(D) == 1)
    goto <bb 13>; [20.24%]
  else
    goto <bb 14>; [79.76%]

  <bb 13> [local count: 54336769]:
  # DEBUG BEGIN_STMT
  Csec_Ip_SetInterrupt (0);

  <bb 14> [local count: 268462297]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.324_12 = Csec_Ip_pState;
  _13 = Csec_Ip_pState.324_12->pfCallback;
  if (_13 != 0B)
    goto <bb 15>; [70.00%]
  else
    goto <bb 16>; [30.00%]

  <bb 15> [local count: 187923608]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY Csec_Ip_ReadErrorBits
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG u8Offset => 4
  # DEBUG INLINE_ENTRY Csec_Ip_ReadCommandWord
  # DEBUG BEGIN_STMT
  _14 ={v} MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[1];
  # DEBUG u8Offset => NULL
  # DEBUG u32ErrWord => _14
  # DEBUG BEGIN_STMT
  _15 = _14 >> 16;
  CsecResponse_16 = (Csec_Ip_ErrorCodeType) _15;
  # DEBUG CsecResponse => CsecResponse_16
  # DEBUG BEGIN_STMT
  # DEBUG CsecResponse => NULL
  Csec_Ip_pState.324_12->ErrCode = CsecResponse_16;
  # DEBUG BEGIN_STMT
  _17 = Csec_Ip_pState.324_12->eCmd;
  _18 = Csec_Ip_pState.324_12->pCallbackParam;
  _13 (CsecResponse_16, _17, _18);

  <bb 16> [local count: 1073741824]:
  return;

}



;; Function Csec_Ip_Init (Csec_Ip_Init, funcdef_no=30, decl_uid=5649, cgraph_uid=31, symbol_order=31)

Modification phase of node Csec_Ip_Init/31
Csec_Ip_Init (struct Csec_Ip_StateType * pState)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState = pState_2(D);
  # DEBUG BEGIN_STMT
  pState_2(D)->bCmdInProgress = 0;
  # DEBUG BEGIN_STMT
  pState_2(D)->u32Timeout = 1000000000;
  return;

}



;; Function Csec_Ip_Deinit (Csec_Ip_Deinit, funcdef_no=31, decl_uid=5651, cgraph_uid=32, symbol_order=32)

Modification phase of node Csec_Ip_Deinit/32
Csec_Ip_Deinit ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState = 0B;
  return;

}



;; Function Csec_Ip_LoadKey (Csec_Ip_LoadKey, funcdef_no=38, decl_uid=5698, cgraph_uid=39, symbol_order=39)

Modification phase of node Csec_Ip_LoadKey/39
Csec_Ip_LoadKey (Csec_Ip_KeyIdType eKeyId, const uint8 * pM1, const uint8 * pM2, const uint8 * pM3, uint8 * pM4, uint8 * pM5)
{
  Csec_Ip_ErrorCodeType CsecResponse;
  struct Csec_Ip_StateType * Csec_Ip_pState.187_1;
  _Bool _2;
  struct Csec_Ip_StateType * Csec_Ip_pState.191_3;
  long unsigned int _4;
  struct Csec_Ip_StateType * Csec_Ip_pState.192_5;
  short unsigned int _6;
  short unsigned int _7;
  struct Csec_Ip_StateType * Csec_Ip_pState.195_8;
  struct Csec_Ip_StateType * Csec_Ip_pState.196_9;
  Csec_Ip_ErrorCodeType _32;
  long unsigned int _33;
  long unsigned int _34;
  long unsigned int _35;
  long unsigned int _36;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.187_1 = Csec_Ip_pState;
  _2 = Csec_Ip_pState.187_1->bCmdInProgress;
  if (_2 != 0)
    goto <bb 3>; [67.00%]
  else
    goto <bb 4>; [33.00%]

  <bb 3> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.187_1->ErrCode = 65535;
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.187_1->bCmdInProgress = 1;
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.187_1->ErrCode = 1;
  # DEBUG BEGIN_STMT
  Csec_Ip_ClearErrorFlags ();
  # DEBUG BEGIN_STMT
  Csec_Ip_WriteCommandBytes (16, pM1_17(D), 16);
  # DEBUG BEGIN_STMT
  Csec_Ip_WriteCommandBytes (32, pM2_19(D), 32);
  # DEBUG BEGIN_STMT
  Csec_Ip_WriteCommandBytes (64, pM3_21(D), 16);
  # DEBUG BEGIN_STMT
  # DEBUG eFuncId => 7
  # DEBUG eFuncFormat => 0
  # DEBUG eCallSeq => 0
  # DEBUG eKeyId => eKeyId_23(D)
  # DEBUG INLINE_ENTRY Csec_Ip_WriteCommandHeader
  # DEBUG BEGIN_STMT
  _33 = eKeyId_23(D) & 255;
  _34 = _33 | 117440512;
  MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[0] ={v} _34;
  # DEBUG eFuncId => NULL
  # DEBUG eFuncFormat => NULL
  # DEBUG eCallSeq => NULL
  # DEBUG eKeyId => NULL
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.191_3 = Csec_Ip_pState;
  _4 = Csec_Ip_pState.191_3->u32Timeout;
  Csec_Ip_WaitCommandCompletion (_4, 0);
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.192_5 = Csec_Ip_pState;
  _6 = Csec_Ip_pState.192_5->ErrCode;
  if (_6 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 120473833]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY Csec_Ip_ReadErrorBits
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG u8Offset => 4
  # DEBUG INLINE_ENTRY Csec_Ip_ReadCommandWord
  # DEBUG BEGIN_STMT
  _35 ={v} MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[1];
  # DEBUG u8Offset => NULL
  # DEBUG u32ErrWord => _35
  # DEBUG BEGIN_STMT
  _36 = _35 >> 16;
  CsecResponse_37 = (Csec_Ip_ErrorCodeType) _36;
  # DEBUG CsecResponse => CsecResponse_37
  # DEBUG BEGIN_STMT
  # DEBUG CsecResponse => NULL
  Csec_Ip_pState.192_5->ErrCode = CsecResponse_37;

  <bb 6> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  _7 = Csec_Ip_pState.192_5->ErrCode;
  if (_7 == 1)
    goto <bb 7>; [20.24%]
  else
    goto <bb 8>; [79.76%]

  <bb 7> [local count: 71717364]:
  # DEBUG BEGIN_STMT
  Csec_Ip_ReadCommandBytes (80, pM4_26(D), 32);
  # DEBUG BEGIN_STMT
  Csec_Ip_ReadCommandBytes (112, pM5_28(D), 16);

  <bb 8> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.195_8 = Csec_Ip_pState;
  Csec_Ip_pState.195_8->bCmdInProgress = 0;

  <bb 9> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.196_9 = Csec_Ip_pState;
  _32 = Csec_Ip_pState.196_9->ErrCode;
  return _32;

}



;; Function Csec_Ip_LoadPlainKey (Csec_Ip_LoadPlainKey, funcdef_no=39, decl_uid=5700, cgraph_uid=40, symbol_order=40)

Modification phase of node Csec_Ip_LoadPlainKey/40
Csec_Ip_LoadPlainKey (const uint8 * pPlainKey)
{
  Csec_Ip_ErrorCodeType CsecResponse;
  struct Csec_Ip_StateType * Csec_Ip_pState.197_1;
  _Bool _2;
  struct Csec_Ip_StateType * Csec_Ip_pState.201_3;
  long unsigned int _4;
  struct Csec_Ip_StateType * Csec_Ip_pState.202_5;
  short unsigned int _6;
  struct Csec_Ip_StateType * Csec_Ip_pState.205_7;
  Csec_Ip_ErrorCodeType _20;
  long unsigned int _21;
  long unsigned int _22;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.197_1 = Csec_Ip_pState;
  _2 = Csec_Ip_pState.197_1->bCmdInProgress;
  if (_2 != 0)
    goto <bb 3>; [67.00%]
  else
    goto <bb 4>; [33.00%]

  <bb 3> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.197_1->ErrCode = 65535;
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.197_1->bCmdInProgress = 1;
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.197_1->ErrCode = 1;
  # DEBUG BEGIN_STMT
  Csec_Ip_ClearErrorFlags ();
  # DEBUG BEGIN_STMT
  Csec_Ip_WriteCommandBytes (16, pPlainKey_14(D), 16);
  # DEBUG BEGIN_STMT
  # DEBUG eFuncId => 8
  # DEBUG eFuncFormat => 0
  # DEBUG eCallSeq => 0
  # DEBUG eKeyId => 15
  # DEBUG INLINE_ENTRY Csec_Ip_WriteCommandHeader
  # DEBUG BEGIN_STMT
  MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[0] ={v} 134217743;
  # DEBUG eFuncId => NULL
  # DEBUG eFuncFormat => NULL
  # DEBUG eCallSeq => NULL
  # DEBUG eKeyId => NULL
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.201_3 = Csec_Ip_pState;
  _4 = Csec_Ip_pState.201_3->u32Timeout;
  Csec_Ip_WaitCommandCompletion (_4, 0);
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.202_5 = Csec_Ip_pState;
  _6 = Csec_Ip_pState.202_5->ErrCode;
  if (_6 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 120473833]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY Csec_Ip_ReadErrorBits
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG u8Offset => 4
  # DEBUG INLINE_ENTRY Csec_Ip_ReadCommandWord
  # DEBUG BEGIN_STMT
  _21 ={v} MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[1];
  # DEBUG u8Offset => NULL
  # DEBUG u32ErrWord => _21
  # DEBUG BEGIN_STMT
  _22 = _21 >> 16;
  CsecResponse_23 = (Csec_Ip_ErrorCodeType) _22;
  # DEBUG CsecResponse => CsecResponse_23
  # DEBUG BEGIN_STMT
  # DEBUG CsecResponse => NULL
  Csec_Ip_pState.202_5->ErrCode = CsecResponse_23;

  <bb 6> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.202_5->bCmdInProgress = 0;

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.205_7 = Csec_Ip_pState;
  _20 = Csec_Ip_pState.205_7->ErrCode;
  return _20;

}



;; Function Csec_Ip_ExportRamKey (Csec_Ip_ExportRamKey, funcdef_no=40, decl_uid=5706, cgraph_uid=41, symbol_order=41)

Modification phase of node Csec_Ip_ExportRamKey/41
Csec_Ip_ExportRamKey (uint8 * pM1, uint8 * pM2, uint8 * pM3, uint8 * pM4, uint8 * pM5)
{
  Csec_Ip_ErrorCodeType CsecResponse;
  struct Csec_Ip_StateType * Csec_Ip_pState.206_1;
  _Bool _2;
  struct Csec_Ip_StateType * Csec_Ip_pState.210_3;
  long unsigned int _4;
  struct Csec_Ip_StateType * Csec_Ip_pState.211_5;
  short unsigned int _6;
  short unsigned int _7;
  struct Csec_Ip_StateType * Csec_Ip_pState.214_8;
  struct Csec_Ip_StateType * Csec_Ip_pState.215_9;
  Csec_Ip_ErrorCodeType _31;
  long unsigned int _32;
  long unsigned int _33;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.206_1 = Csec_Ip_pState;
  _2 = Csec_Ip_pState.206_1->bCmdInProgress;
  if (_2 != 0)
    goto <bb 3>; [67.00%]
  else
    goto <bb 4>; [33.00%]

  <bb 3> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.206_1->ErrCode = 65535;
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.206_1->bCmdInProgress = 1;
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.206_1->ErrCode = 1;
  # DEBUG BEGIN_STMT
  Csec_Ip_ClearErrorFlags ();
  # DEBUG BEGIN_STMT
  # DEBUG eFuncId => 9
  # DEBUG eFuncFormat => 0
  # DEBUG eCallSeq => 0
  # DEBUG eKeyId => 15
  # DEBUG INLINE_ENTRY Csec_Ip_WriteCommandHeader
  # DEBUG BEGIN_STMT
  MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[0] ={v} 150994959;
  # DEBUG eFuncId => NULL
  # DEBUG eFuncFormat => NULL
  # DEBUG eCallSeq => NULL
  # DEBUG eKeyId => NULL
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.210_3 = Csec_Ip_pState;
  _4 = Csec_Ip_pState.210_3->u32Timeout;
  Csec_Ip_WaitCommandCompletion (_4, 0);
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.211_5 = Csec_Ip_pState;
  _6 = Csec_Ip_pState.211_5->ErrCode;
  if (_6 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 120473833]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY Csec_Ip_ReadErrorBits
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG u8Offset => 4
  # DEBUG INLINE_ENTRY Csec_Ip_ReadCommandWord
  # DEBUG BEGIN_STMT
  _32 ={v} MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[1];
  # DEBUG u8Offset => NULL
  # DEBUG u32ErrWord => _32
  # DEBUG BEGIN_STMT
  _33 = _32 >> 16;
  CsecResponse_34 = (Csec_Ip_ErrorCodeType) _33;
  # DEBUG CsecResponse => CsecResponse_34
  # DEBUG BEGIN_STMT
  # DEBUG CsecResponse => NULL
  Csec_Ip_pState.211_5->ErrCode = CsecResponse_34;

  <bb 6> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  _7 = Csec_Ip_pState.211_5->ErrCode;
  if (_7 == 1)
    goto <bb 7>; [20.24%]
  else
    goto <bb 8>; [79.76%]

  <bb 7> [local count: 71717364]:
  # DEBUG BEGIN_STMT
  Csec_Ip_ReadCommandBytes (16, pM1_19(D), 16);
  # DEBUG BEGIN_STMT
  Csec_Ip_ReadCommandBytes (32, pM2_21(D), 32);
  # DEBUG BEGIN_STMT
  Csec_Ip_ReadCommandBytes (64, pM3_23(D), 16);
  # DEBUG BEGIN_STMT
  Csec_Ip_ReadCommandBytes (80, pM4_25(D), 32);
  # DEBUG BEGIN_STMT
  Csec_Ip_ReadCommandBytes (112, pM5_27(D), 16);

  <bb 8> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.214_8 = Csec_Ip_pState;
  Csec_Ip_pState.214_8->bCmdInProgress = 0;

  <bb 9> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.215_9 = Csec_Ip_pState;
  _31 = Csec_Ip_pState.215_9->ErrCode;
  return _31;

}



;; Function Csec_Ip_InitRng (Csec_Ip_InitRng, funcdef_no=41, decl_uid=5708, cgraph_uid=42, symbol_order=42)

Modification phase of node Csec_Ip_InitRng/42
Csec_Ip_InitRng ()
{
  Csec_Ip_ErrorCodeType CsecResponse;
  struct Csec_Ip_StateType * Csec_Ip_pState.216_1;
  _Bool _2;
  struct Csec_Ip_StateType * Csec_Ip_pState.220_3;
  long unsigned int _4;
  struct Csec_Ip_StateType * Csec_Ip_pState.221_5;
  short unsigned int _6;
  struct Csec_Ip_StateType * Csec_Ip_pState.224_7;
  Csec_Ip_ErrorCodeType _18;
  long unsigned int _19;
  long unsigned int _20;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.216_1 = Csec_Ip_pState;
  _2 = Csec_Ip_pState.216_1->bCmdInProgress;
  if (_2 != 0)
    goto <bb 3>; [67.00%]
  else
    goto <bb 4>; [33.00%]

  <bb 3> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.216_1->ErrCode = 65535;
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.216_1->bCmdInProgress = 1;
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.216_1->ErrCode = 1;
  # DEBUG BEGIN_STMT
  Csec_Ip_ClearErrorFlags ();
  # DEBUG BEGIN_STMT
  # DEBUG eFuncId => 10
  # DEBUG eFuncFormat => 0
  # DEBUG eCallSeq => 0
  # DEBUG eKeyId => 0
  # DEBUG INLINE_ENTRY Csec_Ip_WriteCommandHeader
  # DEBUG BEGIN_STMT
  MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[0] ={v} 167772160;
  # DEBUG eFuncId => NULL
  # DEBUG eFuncFormat => NULL
  # DEBUG eCallSeq => NULL
  # DEBUG eKeyId => NULL
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.220_3 = Csec_Ip_pState;
  _4 = Csec_Ip_pState.220_3->u32Timeout;
  Csec_Ip_WaitCommandCompletion (_4, 0);
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.221_5 = Csec_Ip_pState;
  _6 = Csec_Ip_pState.221_5->ErrCode;
  if (_6 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 120473833]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY Csec_Ip_ReadErrorBits
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG u8Offset => 4
  # DEBUG INLINE_ENTRY Csec_Ip_ReadCommandWord
  # DEBUG BEGIN_STMT
  _19 ={v} MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[1];
  # DEBUG u8Offset => NULL
  # DEBUG u32ErrWord => _19
  # DEBUG BEGIN_STMT
  _20 = _19 >> 16;
  CsecResponse_21 = (Csec_Ip_ErrorCodeType) _20;
  # DEBUG CsecResponse => CsecResponse_21
  # DEBUG BEGIN_STMT
  # DEBUG CsecResponse => NULL
  Csec_Ip_pState.221_5->ErrCode = CsecResponse_21;

  <bb 6> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.221_5->bCmdInProgress = 0;

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.224_7 = Csec_Ip_pState;
  _18 = Csec_Ip_pState.224_7->ErrCode;
  return _18;

}



;; Function Csec_Ip_ExtendSeed (Csec_Ip_ExtendSeed, funcdef_no=42, decl_uid=5710, cgraph_uid=43, symbol_order=43)

Modification phase of node Csec_Ip_ExtendSeed/43
Csec_Ip_ExtendSeed (const uint8 * pEntropy)
{
  Csec_Ip_ErrorCodeType CsecResponse;
  struct Csec_Ip_StateType * Csec_Ip_pState.225_1;
  _Bool _2;
  struct Csec_Ip_StateType * Csec_Ip_pState.229_3;
  long unsigned int _4;
  struct Csec_Ip_StateType * Csec_Ip_pState.230_5;
  short unsigned int _6;
  struct Csec_Ip_StateType * Csec_Ip_pState.233_7;
  Csec_Ip_ErrorCodeType _20;
  long unsigned int _21;
  long unsigned int _22;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.225_1 = Csec_Ip_pState;
  _2 = Csec_Ip_pState.225_1->bCmdInProgress;
  if (_2 != 0)
    goto <bb 3>; [67.00%]
  else
    goto <bb 4>; [33.00%]

  <bb 3> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.225_1->ErrCode = 65535;
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.225_1->bCmdInProgress = 1;
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.225_1->ErrCode = 1;
  # DEBUG BEGIN_STMT
  Csec_Ip_ClearErrorFlags ();
  # DEBUG BEGIN_STMT
  Csec_Ip_WriteCommandBytes (16, pEntropy_14(D), 16);
  # DEBUG BEGIN_STMT
  # DEBUG eFuncId => 11
  # DEBUG eFuncFormat => 0
  # DEBUG eCallSeq => 0
  # DEBUG eKeyId => 0
  # DEBUG INLINE_ENTRY Csec_Ip_WriteCommandHeader
  # DEBUG BEGIN_STMT
  MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[0] ={v} 184549376;
  # DEBUG eFuncId => NULL
  # DEBUG eFuncFormat => NULL
  # DEBUG eCallSeq => NULL
  # DEBUG eKeyId => NULL
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.229_3 = Csec_Ip_pState;
  _4 = Csec_Ip_pState.229_3->u32Timeout;
  Csec_Ip_WaitCommandCompletion (_4, 0);
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.230_5 = Csec_Ip_pState;
  _6 = Csec_Ip_pState.230_5->ErrCode;
  if (_6 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 120473833]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY Csec_Ip_ReadErrorBits
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG u8Offset => 4
  # DEBUG INLINE_ENTRY Csec_Ip_ReadCommandWord
  # DEBUG BEGIN_STMT
  _21 ={v} MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[1];
  # DEBUG u8Offset => NULL
  # DEBUG u32ErrWord => _21
  # DEBUG BEGIN_STMT
  _22 = _21 >> 16;
  CsecResponse_23 = (Csec_Ip_ErrorCodeType) _22;
  # DEBUG CsecResponse => CsecResponse_23
  # DEBUG BEGIN_STMT
  # DEBUG CsecResponse => NULL
  Csec_Ip_pState.230_5->ErrCode = CsecResponse_23;

  <bb 6> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.230_5->bCmdInProgress = 0;

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.233_7 = Csec_Ip_pState;
  _20 = Csec_Ip_pState.233_7->ErrCode;
  return _20;

}



;; Function Csec_Ip_GenerateRnd (Csec_Ip_GenerateRnd, funcdef_no=43, decl_uid=5713, cgraph_uid=44, symbol_order=44)

Modification phase of node Csec_Ip_GenerateRnd/44
Csec_Ip_GenerateRnd (const struct Csec_Ip_ReqType * pRequest, uint8 * pRnd)
{
  Csec_Ip_ErrorCodeType CsecResponse;
  struct Csec_Ip_StateType * Csec_Ip_pState.234_1;
  _Bool _2;
  <unnamed type> _3;
  struct Csec_Ip_StateType * Csec_Ip_pState.237_4;
  long unsigned int _5;
  struct Csec_Ip_StateType * Csec_Ip_pState.238_6;
  short unsigned int _7;
  short unsigned int _8;
  struct Csec_Ip_StateType * Csec_Ip_pState.241_9;
  struct Csec_Ip_StateType * Csec_Ip_pState.242_10;
  void (*<T4c5>) (Csec_Ip_ErrorCodeType, Csec_Ip_CmdType, void *) _11;
  void * _12;
  struct Csec_Ip_StateType * Csec_Ip_pState.245_13;
  Csec_Ip_ErrorCodeType _32;
  long unsigned int _33;
  long unsigned int _34;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.234_1 = Csec_Ip_pState;
  _2 = Csec_Ip_pState.234_1->bCmdInProgress;
  if (_2 != 0)
    goto <bb 3>; [67.00%]
  else
    goto <bb 4>; [33.00%]

  <bb 3> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.234_1->ErrCode = 65535;
  goto <bb 12>; [100.00%]

  <bb 4> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.234_1->bCmdInProgress = 1;
  # DEBUG BEGIN_STMT
  Csec_Ip_UpdateState (255, 12, 0B, pRnd_19(D), 0);
  # DEBUG BEGIN_STMT
  Csec_Ip_ClearErrorFlags ();
  # DEBUG BEGIN_STMT
  _3 = pRequest_22(D)->eReqType;
  if (_3 == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 5> [local count: 116930485]:
  # DEBUG BEGIN_STMT
  # DEBUG eFuncId => 12
  # DEBUG eFuncFormat => 0
  # DEBUG eCallSeq => 0
  # DEBUG eKeyId => 0
  # DEBUG INLINE_ENTRY Csec_Ip_WriteCommandHeader
  # DEBUG BEGIN_STMT
  MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[0] ={v} 201326592;
  # DEBUG eFuncId => NULL
  # DEBUG eFuncFormat => NULL
  # DEBUG eCallSeq => NULL
  # DEBUG eKeyId => NULL
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.237_4 = Csec_Ip_pState;
  _5 = Csec_Ip_pState.237_4->u32Timeout;
  Csec_Ip_WaitCommandCompletion (_5, 0);
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.238_6 = Csec_Ip_pState;
  _7 = Csec_Ip_pState.238_6->ErrCode;
  if (_7 == 1)
    goto <bb 6>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 6> [local count: 39756365]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY Csec_Ip_ReadErrorBits
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG u8Offset => 4
  # DEBUG INLINE_ENTRY Csec_Ip_ReadCommandWord
  # DEBUG BEGIN_STMT
  _33 ={v} MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[1];
  # DEBUG u8Offset => NULL
  # DEBUG u32ErrWord => _33
  # DEBUG BEGIN_STMT
  _34 = _33 >> 16;
  CsecResponse_35 = (Csec_Ip_ErrorCodeType) _34;
  # DEBUG CsecResponse => CsecResponse_35
  # DEBUG BEGIN_STMT
  # DEBUG CsecResponse => NULL
  Csec_Ip_pState.238_6->ErrCode = CsecResponse_35;

  <bb 7> [local count: 116930485]:
  # DEBUG BEGIN_STMT
  _8 = Csec_Ip_pState.238_6->ErrCode;
  if (_8 == 1)
    goto <bb 8>; [20.24%]
  else
    goto <bb 9>; [79.76%]

  <bb 8> [local count: 23666730]:
  # DEBUG BEGIN_STMT
  Csec_Ip_ReadCommandBytes (16, pRnd_19(D), 16);

  <bb 9> [local count: 116930485]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.241_9 = Csec_Ip_pState;
  Csec_Ip_pState.241_9->bCmdInProgress = 0;
  goto <bb 12>; [100.00%]

  <bb 10> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.242_10 = Csec_Ip_pState;
  _11 = pRequest_22(D)->pfCallback;
  Csec_Ip_pState.242_10->pfCallback = _11;
  # DEBUG BEGIN_STMT
  _12 = pRequest_22(D)->pCallbackParam;
  Csec_Ip_pState.242_10->pCallbackParam = _12;
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.242_10->eReqType = _3;
  # DEBUG BEGIN_STMT
  # DEBUG eFuncId => 12
  # DEBUG eFuncFormat => 0
  # DEBUG eCallSeq => 0
  # DEBUG eKeyId => 0
  # DEBUG INLINE_ENTRY Csec_Ip_WriteCommandHeader
  # DEBUG BEGIN_STMT
  MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[0] ={v} 201326592;
  # DEBUG eFuncId => NULL
  # DEBUG eFuncFormat => NULL
  # DEBUG eCallSeq => NULL
  # DEBUG eKeyId => NULL
  # DEBUG BEGIN_STMT
  if (_3 == 1)
    goto <bb 11>; [20.24%]
  else
    goto <bb 12>; [79.76%]

  <bb 11> [local count: 48050634]:
  # DEBUG BEGIN_STMT
  Csec_Ip_SetInterrupt (1);

  <bb 12> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.245_13 = Csec_Ip_pState;
  _32 = Csec_Ip_pState.245_13->ErrCode;
  return _32;

}



;; Function Csec_Ip_BootFailure (Csec_Ip_BootFailure, funcdef_no=44, decl_uid=5715, cgraph_uid=45, symbol_order=45)

Modification phase of node Csec_Ip_BootFailure/45
Csec_Ip_BootFailure ()
{
  Csec_Ip_ErrorCodeType CsecResponse;
  struct Csec_Ip_StateType * Csec_Ip_pState.246_1;
  _Bool _2;
  struct Csec_Ip_StateType * Csec_Ip_pState.250_3;
  long unsigned int _4;
  struct Csec_Ip_StateType * Csec_Ip_pState.251_5;
  short unsigned int _6;
  struct Csec_Ip_StateType * Csec_Ip_pState.254_7;
  Csec_Ip_ErrorCodeType _18;
  long unsigned int _19;
  long unsigned int _20;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.246_1 = Csec_Ip_pState;
  _2 = Csec_Ip_pState.246_1->bCmdInProgress;
  if (_2 != 0)
    goto <bb 3>; [67.00%]
  else
    goto <bb 4>; [33.00%]

  <bb 3> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.246_1->ErrCode = 65535;
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.246_1->bCmdInProgress = 1;
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.246_1->ErrCode = 1;
  # DEBUG BEGIN_STMT
  Csec_Ip_ClearErrorFlags ();
  # DEBUG BEGIN_STMT
  # DEBUG eFuncId => 14
  # DEBUG eFuncFormat => 0
  # DEBUG eCallSeq => 0
  # DEBUG eKeyId => 0
  # DEBUG INLINE_ENTRY Csec_Ip_WriteCommandHeader
  # DEBUG BEGIN_STMT
  MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[0] ={v} 234881024;
  # DEBUG eFuncId => NULL
  # DEBUG eFuncFormat => NULL
  # DEBUG eCallSeq => NULL
  # DEBUG eKeyId => NULL
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.250_3 = Csec_Ip_pState;
  _4 = Csec_Ip_pState.250_3->u32Timeout;
  Csec_Ip_WaitCommandCompletion (_4, 0);
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.251_5 = Csec_Ip_pState;
  _6 = Csec_Ip_pState.251_5->ErrCode;
  if (_6 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 120473833]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY Csec_Ip_ReadErrorBits
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG u8Offset => 4
  # DEBUG INLINE_ENTRY Csec_Ip_ReadCommandWord
  # DEBUG BEGIN_STMT
  _19 ={v} MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[1];
  # DEBUG u8Offset => NULL
  # DEBUG u32ErrWord => _19
  # DEBUG BEGIN_STMT
  _20 = _19 >> 16;
  CsecResponse_21 = (Csec_Ip_ErrorCodeType) _20;
  # DEBUG CsecResponse => CsecResponse_21
  # DEBUG BEGIN_STMT
  # DEBUG CsecResponse => NULL
  Csec_Ip_pState.251_5->ErrCode = CsecResponse_21;

  <bb 6> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.251_5->bCmdInProgress = 0;

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.254_7 = Csec_Ip_pState;
  _18 = Csec_Ip_pState.254_7->ErrCode;
  return _18;

}



;; Function Csec_Ip_BootOk (Csec_Ip_BootOk, funcdef_no=45, decl_uid=5717, cgraph_uid=46, symbol_order=46)

Modification phase of node Csec_Ip_BootOk/46
Csec_Ip_BootOk ()
{
  Csec_Ip_ErrorCodeType CsecResponse;
  struct Csec_Ip_StateType * Csec_Ip_pState.255_1;
  _Bool _2;
  struct Csec_Ip_StateType * Csec_Ip_pState.259_3;
  long unsigned int _4;
  struct Csec_Ip_StateType * Csec_Ip_pState.260_5;
  short unsigned int _6;
  struct Csec_Ip_StateType * Csec_Ip_pState.263_7;
  Csec_Ip_ErrorCodeType _18;
  long unsigned int _19;
  long unsigned int _20;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.255_1 = Csec_Ip_pState;
  _2 = Csec_Ip_pState.255_1->bCmdInProgress;
  if (_2 != 0)
    goto <bb 3>; [67.00%]
  else
    goto <bb 4>; [33.00%]

  <bb 3> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.255_1->ErrCode = 65535;
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.255_1->bCmdInProgress = 1;
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.255_1->ErrCode = 1;
  # DEBUG BEGIN_STMT
  Csec_Ip_ClearErrorFlags ();
  # DEBUG BEGIN_STMT
  # DEBUG eFuncId => 15
  # DEBUG eFuncFormat => 0
  # DEBUG eCallSeq => 0
  # DEBUG eKeyId => 0
  # DEBUG INLINE_ENTRY Csec_Ip_WriteCommandHeader
  # DEBUG BEGIN_STMT
  MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[0] ={v} 251658240;
  # DEBUG eFuncId => NULL
  # DEBUG eFuncFormat => NULL
  # DEBUG eCallSeq => NULL
  # DEBUG eKeyId => NULL
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.259_3 = Csec_Ip_pState;
  _4 = Csec_Ip_pState.259_3->u32Timeout;
  Csec_Ip_WaitCommandCompletion (_4, 0);
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.260_5 = Csec_Ip_pState;
  _6 = Csec_Ip_pState.260_5->ErrCode;
  if (_6 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 120473833]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY Csec_Ip_ReadErrorBits
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG u8Offset => 4
  # DEBUG INLINE_ENTRY Csec_Ip_ReadCommandWord
  # DEBUG BEGIN_STMT
  _19 ={v} MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[1];
  # DEBUG u8Offset => NULL
  # DEBUG u32ErrWord => _19
  # DEBUG BEGIN_STMT
  _20 = _19 >> 16;
  CsecResponse_21 = (Csec_Ip_ErrorCodeType) _20;
  # DEBUG CsecResponse => CsecResponse_21
  # DEBUG BEGIN_STMT
  # DEBUG CsecResponse => NULL
  Csec_Ip_pState.260_5->ErrCode = CsecResponse_21;

  <bb 6> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.260_5->bCmdInProgress = 0;

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.263_7 = Csec_Ip_pState;
  _18 = Csec_Ip_pState.263_7->ErrCode;
  return _18;

}



;; Function Csec_Ip_BootDefine (Csec_Ip_BootDefine, funcdef_no=46, decl_uid=5720, cgraph_uid=47, symbol_order=47)

Modification phase of node Csec_Ip_BootDefine/47
Csec_Ip_BootDefine (uint32 u32BootSize, Csec_Ip_BootFlavorType eBootFlavor)
{
  Csec_Ip_ErrorCodeType CsecResponse;
  struct Csec_Ip_StateType * Csec_Ip_pState.264_1;
  _Bool _2;
  unsigned char _3;
  struct Csec_Ip_StateType * Csec_Ip_pState.268_4;
  long unsigned int _5;
  struct Csec_Ip_StateType * Csec_Ip_pState.269_6;
  short unsigned int _7;
  struct Csec_Ip_StateType * Csec_Ip_pState.272_8;
  Csec_Ip_ErrorCodeType _22;
  long unsigned int _23;
  long unsigned int _24;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.264_1 = Csec_Ip_pState;
  _2 = Csec_Ip_pState.264_1->bCmdInProgress;
  if (_2 != 0)
    goto <bb 3>; [67.00%]
  else
    goto <bb 4>; [33.00%]

  <bb 3> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.264_1->ErrCode = 65535;
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.264_1->bCmdInProgress = 1;
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.264_1->ErrCode = 1;
  # DEBUG BEGIN_STMT
  Csec_Ip_ClearErrorFlags ();
  # DEBUG BEGIN_STMT
  # DEBUG u8Offset => 28
  # DEBUG u32Word => u32BootSize_15(D)
  # DEBUG INLINE_ENTRY Csec_Ip_WriteCommandWord
  # DEBUG BEGIN_STMT
  # DEBUG u8IndexWord => 7
  # DEBUG BEGIN_STMT
  MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[7] ={v} u32BootSize_15(D);
  # DEBUG u8Offset => NULL
  # DEBUG u32Word => NULL
  # DEBUG u8IndexWord => NULL
  # DEBUG BEGIN_STMT
  _3 = (unsigned char) eBootFlavor_16(D);
  Csec_Ip_WriteCommandByte (27, _3);
  # DEBUG BEGIN_STMT
  # DEBUG eFuncId => 17
  # DEBUG eFuncFormat => 0
  # DEBUG eCallSeq => 0
  # DEBUG eKeyId => 0
  # DEBUG INLINE_ENTRY Csec_Ip_WriteCommandHeader
  # DEBUG BEGIN_STMT
  MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[0] ={v} 285212672;
  # DEBUG eFuncId => NULL
  # DEBUG eFuncFormat => NULL
  # DEBUG eCallSeq => NULL
  # DEBUG eKeyId => NULL
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.268_4 = Csec_Ip_pState;
  _5 = Csec_Ip_pState.268_4->u32Timeout;
  Csec_Ip_WaitCommandCompletion (_5, 0);
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.269_6 = Csec_Ip_pState;
  _7 = Csec_Ip_pState.269_6->ErrCode;
  if (_7 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 120473833]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY Csec_Ip_ReadErrorBits
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG u8Offset => 4
  # DEBUG INLINE_ENTRY Csec_Ip_ReadCommandWord
  # DEBUG BEGIN_STMT
  _23 ={v} MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[1];
  # DEBUG u8Offset => NULL
  # DEBUG u32ErrWord => _23
  # DEBUG BEGIN_STMT
  _24 = _23 >> 16;
  CsecResponse_25 = (Csec_Ip_ErrorCodeType) _24;
  # DEBUG CsecResponse => CsecResponse_25
  # DEBUG BEGIN_STMT
  # DEBUG CsecResponse => NULL
  Csec_Ip_pState.269_6->ErrCode = CsecResponse_25;

  <bb 6> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.269_6->bCmdInProgress = 0;

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.272_8 = Csec_Ip_pState;
  _22 = Csec_Ip_pState.272_8->ErrCode;
  return _22;

}



;; Function Csec_Ip_GetId (Csec_Ip_GetId, funcdef_no=47, decl_uid=5727, cgraph_uid=48, symbol_order=48)

Modification phase of node Csec_Ip_GetId/48
Csec_Ip_GetId (const uint8 * pChallenge, uint8 * pUid, uint8 * pSreg, uint8 * pMac)
{
  uint32 u32Temp;
  uint8 u8ByteValue;
  Csec_Ip_ErrorCodeType CsecResponse;
  struct Csec_Ip_StateType * Csec_Ip_pState.273_1;
  _Bool _2;
  struct Csec_Ip_StateType * Csec_Ip_pState.277_3;
  long unsigned int _4;
  struct Csec_Ip_StateType * Csec_Ip_pState.278_5;
  short unsigned int _6;
  short unsigned int _7;
  struct Csec_Ip_StateType * Csec_Ip_pState.281_8;
  struct Csec_Ip_StateType * Csec_Ip_pState.282_9;
  Csec_Ip_ErrorCodeType _29;
  long unsigned int _30;
  long unsigned int _31;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.273_1 = Csec_Ip_pState;
  _2 = Csec_Ip_pState.273_1->bCmdInProgress;
  if (_2 != 0)
    goto <bb 3>; [67.00%]
  else
    goto <bb 4>; [33.00%]

  <bb 3> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.273_1->ErrCode = 65535;
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.273_1->bCmdInProgress = 1;
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.273_1->ErrCode = 1;
  # DEBUG BEGIN_STMT
  Csec_Ip_ClearErrorFlags ();
  # DEBUG BEGIN_STMT
  Csec_Ip_WriteCommandBytes (16, pChallenge_17(D), 16);
  # DEBUG BEGIN_STMT
  # DEBUG eFuncId => 16
  # DEBUG eFuncFormat => 0
  # DEBUG eCallSeq => 0
  # DEBUG eKeyId => 0
  # DEBUG INLINE_ENTRY Csec_Ip_WriteCommandHeader
  # DEBUG BEGIN_STMT
  MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[0] ={v} 268435456;
  # DEBUG eFuncId => NULL
  # DEBUG eFuncFormat => NULL
  # DEBUG eCallSeq => NULL
  # DEBUG eKeyId => NULL
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.277_3 = Csec_Ip_pState;
  _4 = Csec_Ip_pState.277_3->u32Timeout;
  Csec_Ip_WaitCommandCompletion (_4, 0);
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.278_5 = Csec_Ip_pState;
  _6 = Csec_Ip_pState.278_5->ErrCode;
  if (_6 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 120473833]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY Csec_Ip_ReadErrorBits
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG u8Offset => 4
  # DEBUG INLINE_ENTRY Csec_Ip_ReadCommandWord
  # DEBUG BEGIN_STMT
  _30 ={v} MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[1];
  # DEBUG u8Offset => NULL
  # DEBUG u32ErrWord => _30
  # DEBUG BEGIN_STMT
  _31 = _30 >> 16;
  CsecResponse_32 = (Csec_Ip_ErrorCodeType) _31;
  # DEBUG CsecResponse => CsecResponse_32
  # DEBUG BEGIN_STMT
  # DEBUG CsecResponse => NULL
  Csec_Ip_pState.278_5->ErrCode = CsecResponse_32;

  <bb 6> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  _7 = Csec_Ip_pState.278_5->ErrCode;
  if (_7 == 1)
    goto <bb 7>; [20.24%]
  else
    goto <bb 8>; [79.76%]

  <bb 7> [local count: 71717364]:
  # DEBUG BEGIN_STMT
  Csec_Ip_ReadCommandBytes (32, pUid_21(D), 15);
  # DEBUG BEGIN_STMT
  # DEBUG u8Offset => 47
  # DEBUG INLINE_ENTRY Csec_Ip_ReadCommandByte
  # DEBUG BEGIN_STMT
  u32Temp_33 ={v} MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[11];
  # DEBUG u32Temp => u32Temp_33
  # DEBUG BEGIN_STMT
  # DEBUG u8ByteX => 3
  # DEBUG BEGIN_STMT
  u8ByteValue_34 = (uint8) u32Temp_33;
  # DEBUG u8ByteValue => u8ByteValue_34
  # DEBUG BEGIN_STMT
  # DEBUG u8Offset => NULL
  # DEBUG u8ByteValue => NULL
  # DEBUG u8ByteX => NULL
  # DEBUG u32Temp => NULL
  *pSreg_23(D) = u8ByteValue_34;
  # DEBUG BEGIN_STMT
  Csec_Ip_ReadCommandBytes (48, pMac_25(D), 16);

  <bb 8> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.281_8 = Csec_Ip_pState;
  Csec_Ip_pState.281_8->bCmdInProgress = 0;

  <bb 9> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.282_9 = Csec_Ip_pState;
  _29 = Csec_Ip_pState.282_9->ErrCode;
  return _29;

}



;; Function Csec_Ip_DbgChal (Csec_Ip_DbgChal, funcdef_no=48, decl_uid=5729, cgraph_uid=49, symbol_order=49)

Modification phase of node Csec_Ip_DbgChal/49
Csec_Ip_DbgChal (uint8 * pChallenge)
{
  Csec_Ip_ErrorCodeType CsecResponse;
  struct Csec_Ip_StateType * Csec_Ip_pState.283_1;
  _Bool _2;
  struct Csec_Ip_StateType * Csec_Ip_pState.287_3;
  long unsigned int _4;
  struct Csec_Ip_StateType * Csec_Ip_pState.288_5;
  short unsigned int _6;
  short unsigned int _7;
  struct Csec_Ip_StateType * Csec_Ip_pState.291_8;
  struct Csec_Ip_StateType * Csec_Ip_pState.292_9;
  Csec_Ip_ErrorCodeType _23;
  long unsigned int _24;
  long unsigned int _25;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.283_1 = Csec_Ip_pState;
  _2 = Csec_Ip_pState.283_1->bCmdInProgress;
  if (_2 != 0)
    goto <bb 3>; [67.00%]
  else
    goto <bb 4>; [33.00%]

  <bb 3> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.283_1->ErrCode = 65535;
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.283_1->bCmdInProgress = 1;
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.283_1->ErrCode = 1;
  # DEBUG BEGIN_STMT
  Csec_Ip_ClearErrorFlags ();
  # DEBUG BEGIN_STMT
  # DEBUG eFuncId => 18
  # DEBUG eFuncFormat => 0
  # DEBUG eCallSeq => 0
  # DEBUG eKeyId => 0
  # DEBUG INLINE_ENTRY Csec_Ip_WriteCommandHeader
  # DEBUG BEGIN_STMT
  MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[0] ={v} 301989888;
  # DEBUG eFuncId => NULL
  # DEBUG eFuncFormat => NULL
  # DEBUG eCallSeq => NULL
  # DEBUG eKeyId => NULL
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.287_3 = Csec_Ip_pState;
  _4 = Csec_Ip_pState.287_3->u32Timeout;
  Csec_Ip_WaitCommandCompletion (_4, 0);
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.288_5 = Csec_Ip_pState;
  _6 = Csec_Ip_pState.288_5->ErrCode;
  if (_6 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 120473833]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY Csec_Ip_ReadErrorBits
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG u8Offset => 4
  # DEBUG INLINE_ENTRY Csec_Ip_ReadCommandWord
  # DEBUG BEGIN_STMT
  _24 ={v} MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[1];
  # DEBUG u8Offset => NULL
  # DEBUG u32ErrWord => _24
  # DEBUG BEGIN_STMT
  _25 = _24 >> 16;
  CsecResponse_26 = (Csec_Ip_ErrorCodeType) _25;
  # DEBUG CsecResponse => CsecResponse_26
  # DEBUG BEGIN_STMT
  # DEBUG CsecResponse => NULL
  Csec_Ip_pState.288_5->ErrCode = CsecResponse_26;

  <bb 6> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  _7 = Csec_Ip_pState.288_5->ErrCode;
  if (_7 == 1)
    goto <bb 7>; [20.24%]
  else
    goto <bb 8>; [79.76%]

  <bb 7> [local count: 71717364]:
  # DEBUG BEGIN_STMT
  Csec_Ip_ReadCommandBytes (16, pChallenge_19(D), 16);

  <bb 8> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.291_8 = Csec_Ip_pState;
  Csec_Ip_pState.291_8->bCmdInProgress = 0;

  <bb 9> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.292_9 = Csec_Ip_pState;
  _23 = Csec_Ip_pState.292_9->ErrCode;
  return _23;

}



;; Function Csec_Ip_DbgAuth (Csec_Ip_DbgAuth, funcdef_no=49, decl_uid=5731, cgraph_uid=50, symbol_order=50)

Modification phase of node Csec_Ip_DbgAuth/50
Csec_Ip_DbgAuth (const uint8 * pAuthorization)
{
  Csec_Ip_ErrorCodeType CsecResponse;
  struct Csec_Ip_StateType * Csec_Ip_pState.293_1;
  _Bool _2;
  struct Csec_Ip_StateType * Csec_Ip_pState.297_3;
  long unsigned int _4;
  struct Csec_Ip_StateType * Csec_Ip_pState.298_5;
  short unsigned int _6;
  struct Csec_Ip_StateType * Csec_Ip_pState.301_7;
  Csec_Ip_ErrorCodeType _20;
  long unsigned int _21;
  long unsigned int _22;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.293_1 = Csec_Ip_pState;
  _2 = Csec_Ip_pState.293_1->bCmdInProgress;
  if (_2 != 0)
    goto <bb 3>; [67.00%]
  else
    goto <bb 4>; [33.00%]

  <bb 3> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.293_1->ErrCode = 65535;
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.293_1->bCmdInProgress = 1;
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.293_1->ErrCode = 1;
  # DEBUG BEGIN_STMT
  Csec_Ip_ClearErrorFlags ();
  # DEBUG BEGIN_STMT
  Csec_Ip_WriteCommandBytes (16, pAuthorization_14(D), 16);
  # DEBUG BEGIN_STMT
  # DEBUG eFuncId => 19
  # DEBUG eFuncFormat => 0
  # DEBUG eCallSeq => 0
  # DEBUG eKeyId => 0
  # DEBUG INLINE_ENTRY Csec_Ip_WriteCommandHeader
  # DEBUG BEGIN_STMT
  MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[0] ={v} 318767104;
  # DEBUG eFuncId => NULL
  # DEBUG eFuncFormat => NULL
  # DEBUG eCallSeq => NULL
  # DEBUG eKeyId => NULL
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.297_3 = Csec_Ip_pState;
  _4 = Csec_Ip_pState.297_3->u32Timeout;
  Csec_Ip_WaitCommandCompletion (_4, 0);
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.298_5 = Csec_Ip_pState;
  _6 = Csec_Ip_pState.298_5->ErrCode;
  if (_6 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 120473833]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY Csec_Ip_ReadErrorBits
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG u8Offset => 4
  # DEBUG INLINE_ENTRY Csec_Ip_ReadCommandWord
  # DEBUG BEGIN_STMT
  _21 ={v} MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[1];
  # DEBUG u8Offset => NULL
  # DEBUG u32ErrWord => _21
  # DEBUG BEGIN_STMT
  _22 = _21 >> 16;
  CsecResponse_23 = (Csec_Ip_ErrorCodeType) _22;
  # DEBUG CsecResponse => CsecResponse_23
  # DEBUG BEGIN_STMT
  # DEBUG CsecResponse => NULL
  Csec_Ip_pState.298_5->ErrCode = CsecResponse_23;

  <bb 6> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.298_5->bCmdInProgress = 0;

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.301_7 = Csec_Ip_pState;
  _20 = Csec_Ip_pState.301_7->ErrCode;
  return _20;

}



;; Function Csec_Ip_MainFunction (Csec_Ip_MainFunction, funcdef_no=51, decl_uid=5737, cgraph_uid=52, symbol_order=52)

Modification phase of node Csec_Ip_MainFunction/52
Csec_Ip_MainFunction ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Csec_Ip_ProcessReceivedResponse (2);
  return;

}



;; Function Csec_Ip_CancelCommand (Csec_Ip_CancelCommand, funcdef_no=52, decl_uid=5739, cgraph_uid=53, symbol_order=53)

Modification phase of node Csec_Ip_CancelCommand/53
Csec_Ip_CancelCommand ()
{
  struct Csec_Ip_StateType * Csec_Ip_pState.330_1;
  _Bool _2;
  struct Csec_Ip_StateType * Csec_Ip_pState.331_3;
  struct Csec_Ip_StateType * Csec_Ip_pState.332_4;
  short unsigned int _5;
  <unnamed type> _7;
  long unsigned int _9;
  long unsigned int _10;
  <unnamed type> _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.330_1 = Csec_Ip_pState;
  _2 = Csec_Ip_pState.330_1->bCmdInProgress;
  if (_2 != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 9>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Csec_Ip_SetInterrupt (0);
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.331_3 = Csec_Ip_pState;
  Csec_Ip_pState.331_3->ErrCode = 1;
  # DEBUG BEGIN_STMT
  Csec_Ip_WaitCommandCompletion (10000000, 0);
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.332_4 = Csec_Ip_pState;
  _5 = Csec_Ip_pState.332_4->ErrCode;
  if (_5 == 1)
    goto <bb 4>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 4> [local count: 120473833]:
  # DEBUG BEGIN_STMT
  _7 = Csec_Ip_pState.332_4->eCmd;
  if (_7 != 1)
    goto <bb 5>; [66.00%]
  else
    goto <bb 8>; [34.00%]

  <bb 5> [local count: 79512730]:
  if (_7 != 3)
    goto <bb 6>; [66.00%]
  else
    goto <bb 8>; [34.00%]

  <bb 6> [local count: 52478402]:
  # DEBUG BEGIN_STMT
  _9 = Csec_Ip_pState.332_4->u32InputSize;
  _10 = Csec_Ip_pState.332_4->u32Index;
  if (_9 != _10)
    goto <bb 7>; [48.88%]
  else
    goto <bb 8>; [51.12%]

  <bb 7> [local count: 25651443]:
  # DEBUG BEGIN_STMT
  _11 = Csec_Ip_pState.332_4->eKeyId;
  Csec_Ip_WriteCommandHeader (_7, 0, 0, _11);
  # DEBUG BEGIN_STMT
  Csec_Ip_WaitCommandCompletion (10000000, 0);

  <bb 8> [local count: 120473834]:
  Csec_Ip_CancelCommand.part.0 ();

  <bb 9> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Csec_Ip_EncryptEcb (Csec_Ip_EncryptEcb, funcdef_no=32, decl_uid=5657, cgraph_uid=33, symbol_order=33)

Modification phase of node Csec_Ip_EncryptEcb/33
Csec_Ip_EncryptEcb (const struct Csec_Ip_ReqType * pRequest, Csec_Ip_KeyIdType eKeyId, const uint8 * pPlainText, uint32 u32Length, uint8 * pCipherText)
{
  uint32 u32ElapsedTime;
  struct Csec_Ip_StateType * Csec_Ip_pState.2_1;
  _Bool _2;
  <unnamed type> _4;
  long unsigned int _6;
  struct Csec_Ip_StateType * Csec_Ip_pState.5_7;
  short unsigned int _8;
  struct Csec_Ip_StateType * Csec_Ip_pState.6_9;
  struct Csec_Ip_StateType * Csec_Ip_pState.7_10;
  _Bool _11;
  struct Csec_Ip_StateType * Csec_Ip_pState.8_12;
  Csec_Ip_ErrorCodeType _32;

  <bb 2> [local count: 715827892]:
  # DEBUG BEGIN_STMT
  # DEBUG u32ElapsedTime => 0
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.2_1 = Csec_Ip_pState;
  _2 = Csec_Ip_pState.2_1->bCmdInProgress;
  if (_2 != 0)
    goto <bb 3>; [67.00%]
  else
    goto <bb 4>; [33.00%]

  <bb 3> [local count: 479604687]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.2_1->ErrCode = 65535;
  goto <bb 12>; [100.00%]

  <bb 4> [local count: 236223204]:
  # DEBUG BEGIN_STMT
  Csec_Ip_ClearErrorFlags ();
  # DEBUG BEGIN_STMT
  Csec_Ip_UpdateState (eKeyId_18(D), 1, pPlainText_19(D), pCipherText_20(D), u32Length_21(D));
  # DEBUG BEGIN_STMT
  _4 = pRequest_23(D)->eReqType;
  if (_4 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 5> [local count: 118111602]:
  # DEBUG BEGIN_STMT
  Csec_Ip_StartEncDecECBCmd ();
  # DEBUG BEGIN_STMT
  goto <bb 13>; [100.00%]

  <bb 6> [local count: 955630224]:
  # DEBUG BEGIN_STMT
  _6 = Csec_Ip_pState.7_10->u32Timeout;
  u32ElapsedTime_27 = Csec_Ip_WaitCommandCompletion (_6, u32ElapsedTime_13);
  # DEBUG u32ElapsedTime => u32ElapsedTime_27
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.5_7 = Csec_Ip_pState;
  _8 = Csec_Ip_pState.5_7->ErrCode;
  if (_8 == 65534)
    goto <bb 7>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 7> [local count: 324914276]:
  # DEBUG BEGIN_STMT
  Csec_Ip_CancelCommand ();
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.6_9 = Csec_Ip_pState;
  Csec_Ip_pState.6_9->bCmdInProgress = 0;
  goto <bb 10>; [100.00%]

  <bb 8> [local count: 630715948]:
  # DEBUG BEGIN_STMT
  Csec_Ip_ContinueEncDecECBCmd ();

  <bb 10> [local count: 955630224]:
  # u32ElapsedTime_3 = PHI <u32ElapsedTime_27(7), u32ElapsedTime_27(8)>

  <bb 13> [local count: 1073741824]:
  # u32ElapsedTime_13 = PHI <u32ElapsedTime_3(10), 0(5)>
  # DEBUG u32ElapsedTime => u32ElapsedTime_13
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.7_10 = Csec_Ip_pState;
  _11 = Csec_Ip_pState.7_10->bCmdInProgress;
  if (_11 != 0)
    goto <bb 6>; [89.00%]
  else
    goto <bb 12>; [11.00%]

  <bb 11> [local count: 118111602]:
  # DEBUG BEGIN_STMT
  Csec_Ip_EncryptEcbAsync (pRequest_23(D));

  <bb 12> [local count: 715827891]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.8_12 = Csec_Ip_pState;
  _32 = Csec_Ip_pState.8_12->ErrCode;
  return _32;

}



;; Function Csec_Ip_DecryptEcb (Csec_Ip_DecryptEcb, funcdef_no=33, decl_uid=5663, cgraph_uid=34, symbol_order=34)

Modification phase of node Csec_Ip_DecryptEcb/34
Csec_Ip_DecryptEcb (const struct Csec_Ip_ReqType * pRequest, Csec_Ip_KeyIdType eKeyId, const uint8 * pCipherText, uint32 u32Length, uint8 * pPlainText)
{
  uint32 u32ElapsedTime;
  struct Csec_Ip_StateType * Csec_Ip_pState.46_1;
  _Bool _2;
  <unnamed type> _4;
  long unsigned int _6;
  struct Csec_Ip_StateType * Csec_Ip_pState.49_7;
  short unsigned int _8;
  struct Csec_Ip_StateType * Csec_Ip_pState.50_9;
  struct Csec_Ip_StateType * Csec_Ip_pState.51_10;
  _Bool _11;
  struct Csec_Ip_StateType * Csec_Ip_pState.52_12;
  Csec_Ip_ErrorCodeType _32;

  <bb 2> [local count: 715827892]:
  # DEBUG BEGIN_STMT
  # DEBUG u32ElapsedTime => 0
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.46_1 = Csec_Ip_pState;
  _2 = Csec_Ip_pState.46_1->bCmdInProgress;
  if (_2 != 0)
    goto <bb 3>; [67.00%]
  else
    goto <bb 4>; [33.00%]

  <bb 3> [local count: 479604687]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.46_1->ErrCode = 65535;
  goto <bb 12>; [100.00%]

  <bb 4> [local count: 236223204]:
  # DEBUG BEGIN_STMT
  Csec_Ip_ClearErrorFlags ();
  # DEBUG BEGIN_STMT
  Csec_Ip_UpdateState (eKeyId_18(D), 3, pCipherText_19(D), pPlainText_20(D), u32Length_21(D));
  # DEBUG BEGIN_STMT
  _4 = pRequest_23(D)->eReqType;
  if (_4 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 5> [local count: 118111602]:
  # DEBUG BEGIN_STMT
  Csec_Ip_StartEncDecECBCmd ();
  # DEBUG BEGIN_STMT
  goto <bb 13>; [100.00%]

  <bb 6> [local count: 955630224]:
  # DEBUG BEGIN_STMT
  _6 = Csec_Ip_pState.51_10->u32Timeout;
  u32ElapsedTime_27 = Csec_Ip_WaitCommandCompletion (_6, u32ElapsedTime_13);
  # DEBUG u32ElapsedTime => u32ElapsedTime_27
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.49_7 = Csec_Ip_pState;
  _8 = Csec_Ip_pState.49_7->ErrCode;
  if (_8 == 65534)
    goto <bb 7>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 7> [local count: 324914276]:
  # DEBUG BEGIN_STMT
  Csec_Ip_CancelCommand ();
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.50_9 = Csec_Ip_pState;
  Csec_Ip_pState.50_9->bCmdInProgress = 0;
  goto <bb 10>; [100.00%]

  <bb 8> [local count: 630715948]:
  # DEBUG BEGIN_STMT
  Csec_Ip_ContinueEncDecECBCmd ();

  <bb 10> [local count: 955630224]:
  # u32ElapsedTime_3 = PHI <u32ElapsedTime_27(7), u32ElapsedTime_27(8)>

  <bb 13> [local count: 1073741824]:
  # u32ElapsedTime_13 = PHI <u32ElapsedTime_3(10), 0(5)>
  # DEBUG u32ElapsedTime => u32ElapsedTime_13
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.51_10 = Csec_Ip_pState;
  _11 = Csec_Ip_pState.51_10->bCmdInProgress;
  if (_11 != 0)
    goto <bb 6>; [89.00%]
  else
    goto <bb 12>; [11.00%]

  <bb 11> [local count: 118111602]:
  # DEBUG BEGIN_STMT
  Csec_Ip_DecryptEcbAsync (pRequest_23(D));

  <bb 12> [local count: 715827891]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.52_12 = Csec_Ip_pState;
  _32 = Csec_Ip_pState.52_12->ErrCode;
  return _32;

}



;; Function Csec_Ip_EncryptCbc (Csec_Ip_EncryptCbc, funcdef_no=34, decl_uid=5670, cgraph_uid=35, symbol_order=35)

Modification phase of node Csec_Ip_EncryptCbc/35
Csec_Ip_EncryptCbc (const struct Csec_Ip_ReqType * pRequest, Csec_Ip_KeyIdType eKeyId, const uint8 * pPlainText, uint32 u32Length, const uint8 * pIV, uint8 * pCipherText)
{
  uint32 u32ElapsedTime;
  struct Csec_Ip_StateType * Csec_Ip_pState.56_1;
  _Bool _2;
  struct Csec_Ip_StateType * Csec_Ip_pState.58_4;
  <unnamed type> _5;
  long unsigned int _7;
  struct Csec_Ip_StateType * Csec_Ip_pState.60_8;
  short unsigned int _9;
  struct Csec_Ip_StateType * Csec_Ip_pState.61_10;
  struct Csec_Ip_StateType * Csec_Ip_pState.62_11;
  _Bool _12;
  struct Csec_Ip_StateType * Csec_Ip_pState.63_13;
  Csec_Ip_ErrorCodeType _35;

  <bb 2> [local count: 715827892]:
  # DEBUG BEGIN_STMT
  # DEBUG u32ElapsedTime => 0
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.56_1 = Csec_Ip_pState;
  _2 = Csec_Ip_pState.56_1->bCmdInProgress;
  if (_2 != 0)
    goto <bb 3>; [67.00%]
  else
    goto <bb 4>; [33.00%]

  <bb 3> [local count: 479604687]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.56_1->ErrCode = 65535;
  goto <bb 12>; [100.00%]

  <bb 4> [local count: 236223204]:
  # DEBUG BEGIN_STMT
  Csec_Ip_ClearErrorFlags ();
  # DEBUG BEGIN_STMT
  Csec_Ip_UpdateState (eKeyId_19(D), 2, pPlainText_20(D), pCipherText_21(D), u32Length_22(D));
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.58_4 = Csec_Ip_pState;
  Csec_Ip_pState.58_4->pIV = pIV_24(D);
  # DEBUG BEGIN_STMT
  _5 = pRequest_26(D)->eReqType;
  if (_5 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 5> [local count: 118111602]:
  # DEBUG BEGIN_STMT
  Csec_Ip_StartEncDecCBCCmd ();
  # DEBUG BEGIN_STMT
  goto <bb 13>; [100.00%]

  <bb 6> [local count: 955630224]:
  # DEBUG BEGIN_STMT
  _7 = Csec_Ip_pState.62_11->u32Timeout;
  u32ElapsedTime_30 = Csec_Ip_WaitCommandCompletion (_7, u32ElapsedTime_14);
  # DEBUG u32ElapsedTime => u32ElapsedTime_30
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.60_8 = Csec_Ip_pState;
  _9 = Csec_Ip_pState.60_8->ErrCode;
  if (_9 == 65534)
    goto <bb 7>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 7> [local count: 324914276]:
  # DEBUG BEGIN_STMT
  Csec_Ip_CancelCommand ();
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.61_10 = Csec_Ip_pState;
  Csec_Ip_pState.61_10->bCmdInProgress = 0;
  goto <bb 10>; [100.00%]

  <bb 8> [local count: 630715948]:
  # DEBUG BEGIN_STMT
  Csec_Ip_ContinueEncDecCBCCmd ();

  <bb 10> [local count: 955630224]:
  # u32ElapsedTime_3 = PHI <u32ElapsedTime_30(7), u32ElapsedTime_30(8)>

  <bb 13> [local count: 1073741824]:
  # u32ElapsedTime_14 = PHI <u32ElapsedTime_3(10), 0(5)>
  # DEBUG u32ElapsedTime => u32ElapsedTime_14
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.62_11 = Csec_Ip_pState;
  _12 = Csec_Ip_pState.62_11->bCmdInProgress;
  if (_12 != 0)
    goto <bb 6>; [89.00%]
  else
    goto <bb 12>; [11.00%]

  <bb 11> [local count: 118111602]:
  # DEBUG BEGIN_STMT
  Csec_Ip_EncryptCbcAsync (pRequest_26(D));

  <bb 12> [local count: 715827891]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.63_13 = Csec_Ip_pState;
  _35 = Csec_Ip_pState.63_13->ErrCode;
  return _35;

}



;; Function Csec_Ip_DecryptCbc (Csec_Ip_DecryptCbc, funcdef_no=35, decl_uid=5677, cgraph_uid=36, symbol_order=36)

Modification phase of node Csec_Ip_DecryptCbc/36
Csec_Ip_DecryptCbc (const struct Csec_Ip_ReqType * pRequest, Csec_Ip_KeyIdType eKeyId, const uint8 * pCipherText, uint32 u32Length, const uint8 * pIV, uint8 * pPlainText)
{
  uint32 u32ElapsedTime;
  struct Csec_Ip_StateType * Csec_Ip_pState.99_1;
  _Bool _2;
  struct Csec_Ip_StateType * Csec_Ip_pState.101_4;
  <unnamed type> _5;
  long unsigned int _7;
  struct Csec_Ip_StateType * Csec_Ip_pState.103_8;
  short unsigned int _9;
  struct Csec_Ip_StateType * Csec_Ip_pState.104_10;
  struct Csec_Ip_StateType * Csec_Ip_pState.105_11;
  _Bool _12;
  struct Csec_Ip_StateType * Csec_Ip_pState.106_13;
  Csec_Ip_ErrorCodeType _35;

  <bb 2> [local count: 715827892]:
  # DEBUG BEGIN_STMT
  # DEBUG u32ElapsedTime => 0
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.99_1 = Csec_Ip_pState;
  _2 = Csec_Ip_pState.99_1->bCmdInProgress;
  if (_2 != 0)
    goto <bb 3>; [67.00%]
  else
    goto <bb 4>; [33.00%]

  <bb 3> [local count: 479604687]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.99_1->ErrCode = 65535;
  goto <bb 12>; [100.00%]

  <bb 4> [local count: 236223204]:
  # DEBUG BEGIN_STMT
  Csec_Ip_ClearErrorFlags ();
  # DEBUG BEGIN_STMT
  Csec_Ip_UpdateState (eKeyId_19(D), 4, pCipherText_20(D), pPlainText_21(D), u32Length_22(D));
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.101_4 = Csec_Ip_pState;
  Csec_Ip_pState.101_4->pIV = pIV_24(D);
  # DEBUG BEGIN_STMT
  _5 = pRequest_26(D)->eReqType;
  if (_5 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 5> [local count: 118111602]:
  # DEBUG BEGIN_STMT
  Csec_Ip_StartEncDecCBCCmd ();
  # DEBUG BEGIN_STMT
  goto <bb 13>; [100.00%]

  <bb 6> [local count: 955630224]:
  # DEBUG BEGIN_STMT
  _7 = Csec_Ip_pState.105_11->u32Timeout;
  u32ElapsedTime_30 = Csec_Ip_WaitCommandCompletion (_7, u32ElapsedTime_14);
  # DEBUG u32ElapsedTime => u32ElapsedTime_30
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.103_8 = Csec_Ip_pState;
  _9 = Csec_Ip_pState.103_8->ErrCode;
  if (_9 == 65534)
    goto <bb 7>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 7> [local count: 324914276]:
  # DEBUG BEGIN_STMT
  Csec_Ip_CancelCommand ();
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.104_10 = Csec_Ip_pState;
  Csec_Ip_pState.104_10->bCmdInProgress = 0;
  goto <bb 10>; [100.00%]

  <bb 8> [local count: 630715948]:
  # DEBUG BEGIN_STMT
  Csec_Ip_ContinueEncDecCBCCmd ();

  <bb 10> [local count: 955630224]:
  # u32ElapsedTime_3 = PHI <u32ElapsedTime_30(7), u32ElapsedTime_30(8)>

  <bb 13> [local count: 1073741824]:
  # u32ElapsedTime_14 = PHI <u32ElapsedTime_3(10), 0(5)>
  # DEBUG u32ElapsedTime => u32ElapsedTime_14
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.105_11 = Csec_Ip_pState;
  _12 = Csec_Ip_pState.105_11->bCmdInProgress;
  if (_12 != 0)
    goto <bb 6>; [89.00%]
  else
    goto <bb 12>; [11.00%]

  <bb 11> [local count: 118111602]:
  # DEBUG BEGIN_STMT
  Csec_Ip_DecryptCbcAsync (pRequest_26(D));

  <bb 12> [local count: 715827891]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.106_13 = Csec_Ip_pState;
  _35 = Csec_Ip_pState.106_13->ErrCode;
  return _35;

}



;; Function Csec_Ip_GenerateMac (Csec_Ip_GenerateMac, funcdef_no=36, decl_uid=5683, cgraph_uid=37, symbol_order=37)

Modification phase of node Csec_Ip_GenerateMac/37
Csec_Ip_GenerateMac (const struct Csec_Ip_ReqType * pRequest, Csec_Ip_KeyIdType eKeyId, const uint8 * pMsg, uint32 u32MsgLen, uint8 * pCmac)
{
  uint32 u32ElapsedTime;
  struct Csec_Ip_StateType * Csec_Ip_pState.110_1;
  _Bool _2;
  struct Csec_Ip_StateType * Csec_Ip_pState.112_3;
  <unnamed type> _4;
  long unsigned int _5;
  struct Csec_Ip_StateType * Csec_Ip_pState.114_6;
  short unsigned int _7;
  struct Csec_Ip_StateType * Csec_Ip_pState.115_8;
  struct Csec_Ip_StateType * Csec_Ip_pState.116_9;
  _Bool _10;
  struct Csec_Ip_StateType * Csec_Ip_pState.117_11;
  long unsigned int _18;
  Csec_Ip_ErrorCodeType _34;
  long unsigned int _35;

  <bb 2> [local count: 715827892]:
  # DEBUG BEGIN_STMT
  # DEBUG u32ElapsedTime => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.110_1 = Csec_Ip_pState;
  _2 = Csec_Ip_pState.110_1->bCmdInProgress;
  if (_2 != 0)
    goto <bb 3>; [67.00%]
  else
    goto <bb 4>; [33.00%]

  <bb 3> [local count: 479604687]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.110_1->ErrCode = 65535;
  goto <bb 12>; [100.00%]

  <bb 4> [local count: 236223204]:
  # DEBUG BEGIN_STMT
  Csec_Ip_ClearErrorFlags ();
  # DEBUG BEGIN_STMT
  # DEBUG u32Size => u32MsgLen_17(D)
  # DEBUG INLINE_ENTRY Csec_Ip_BitsToBytesWithRound
  # DEBUG BEGIN_STMT
  _18 = u32MsgLen_17(D) + 7;
  # DEBUG u32Result => _18 & 4294967288
  # DEBUG BEGIN_STMT
  _35 = _18 >> 3;
  # DEBUG u32Result => _35
  # DEBUG BEGIN_STMT
  # DEBUG u32Size => NULL
  # DEBUG u32ByteSize => _35
  # DEBUG BEGIN_STMT
  Csec_Ip_UpdateState (eKeyId_20(D), 5, pMsg_21(D), pCmac_22(D), _35);
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.112_3 = Csec_Ip_pState;
  Csec_Ip_pState.112_3->u32MsgLen = u32MsgLen_17(D);
  # DEBUG BEGIN_STMT
  _4 = pRequest_25(D)->eReqType;
  if (_4 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 5> [local count: 118111602]:
  # DEBUG BEGIN_STMT
  Csec_Ip_StartGenMACCmd ();
  # DEBUG BEGIN_STMT
  goto <bb 13>; [100.00%]

  <bb 6> [local count: 955630224]:
  # DEBUG BEGIN_STMT
  _5 = Csec_Ip_pState.116_9->u32Timeout;
  u32ElapsedTime_29 = Csec_Ip_WaitCommandCompletion (_5, u32ElapsedTime_12);
  # DEBUG u32ElapsedTime => u32ElapsedTime_29
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.114_6 = Csec_Ip_pState;
  _7 = Csec_Ip_pState.114_6->ErrCode;
  if (_7 == 65534)
    goto <bb 7>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 7> [local count: 324914276]:
  # DEBUG BEGIN_STMT
  Csec_Ip_CancelCommand ();
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.115_8 = Csec_Ip_pState;
  Csec_Ip_pState.115_8->bCmdInProgress = 0;
  goto <bb 10>; [100.00%]

  <bb 8> [local count: 630715948]:
  # DEBUG BEGIN_STMT
  Csec_Ip_ContinueGenMACCmd ();

  <bb 10> [local count: 955630224]:
  # u32ElapsedTime_19 = PHI <u32ElapsedTime_29(7), u32ElapsedTime_29(8)>

  <bb 13> [local count: 1073741824]:
  # u32ElapsedTime_12 = PHI <u32ElapsedTime_19(10), 0(5)>
  # DEBUG u32ElapsedTime => u32ElapsedTime_12
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.116_9 = Csec_Ip_pState;
  _10 = Csec_Ip_pState.116_9->bCmdInProgress;
  if (_10 != 0)
    goto <bb 6>; [89.00%]
  else
    goto <bb 12>; [11.00%]

  <bb 11> [local count: 118111602]:
  # DEBUG BEGIN_STMT
  Csec_Ip_GenerateMacAsync (pRequest_25(D));

  <bb 12> [local count: 715827891]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.117_11 = Csec_Ip_pState;
  _34 = Csec_Ip_pState.117_11->ErrCode;
  return _34;

}



;; Function Csec_Ip_VerifyMac (Csec_Ip_VerifyMac, funcdef_no=37, decl_uid=5691, cgraph_uid=38, symbol_order=38)

Modification phase of node Csec_Ip_VerifyMac/38
Csec_Ip_VerifyMac (const struct Csec_Ip_ReqType * pRequest, Csec_Ip_KeyIdType eKeyId, const uint8 * pMsg, uint32 u32MsgLen, const uint8 * pMac, uint16 u16MacLen, boolean * pbVerifStatus)
{
  uint32 u32ElapsedTime;
  struct Csec_Ip_StateType * Csec_Ip_pState.145_1;
  _Bool _2;
  struct Csec_Ip_StateType * Csec_Ip_pState.147_3;
  <unnamed type> _4;
  long unsigned int _5;
  struct Csec_Ip_StateType * Csec_Ip_pState.153_6;
  short unsigned int _7;
  struct Csec_Ip_StateType * Csec_Ip_pState.154_8;
  struct Csec_Ip_StateType * Csec_Ip_pState.155_9;
  _Bool _10;
  struct Csec_Ip_StateType * Csec_Ip_pState.156_11;
  long unsigned int _18;
  Csec_Ip_ErrorCodeType _40;
  long unsigned int _41;

  <bb 2> [local count: 715827892]:
  # DEBUG BEGIN_STMT
  # DEBUG u32ElapsedTime => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.145_1 = Csec_Ip_pState;
  _2 = Csec_Ip_pState.145_1->bCmdInProgress;
  if (_2 != 0)
    goto <bb 3>; [67.00%]
  else
    goto <bb 4>; [33.00%]

  <bb 3> [local count: 479604687]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.145_1->ErrCode = 65535;
  goto <bb 12>; [100.00%]

  <bb 4> [local count: 236223204]:
  # DEBUG BEGIN_STMT
  Csec_Ip_ClearErrorFlags ();
  # DEBUG BEGIN_STMT
  # DEBUG u32Size => u32MsgLen_17(D)
  # DEBUG INLINE_ENTRY Csec_Ip_BitsToBytesWithRound
  # DEBUG BEGIN_STMT
  _18 = u32MsgLen_17(D) + 7;
  # DEBUG u32Result => _18 & 4294967288
  # DEBUG BEGIN_STMT
  _41 = _18 >> 3;
  # DEBUG u32Result => _41
  # DEBUG BEGIN_STMT
  # DEBUG u32Size => NULL
  # DEBUG u32ByteSize => _41
  # DEBUG BEGIN_STMT
  Csec_Ip_UpdateState (eKeyId_20(D), 6, pMsg_21(D), 0B, _41);
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.147_3 = Csec_Ip_pState;
  Csec_Ip_pState.147_3->u32MsgLen = u32MsgLen_17(D);
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.147_3->pbVerifStatus = pbVerifStatus_24(D);
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.147_3->bMacWritten = 0;
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.147_3->pMac = pMac_27(D);
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.147_3->u16MacLen = u16MacLen_29(D);
  # DEBUG BEGIN_STMT
  _4 = pRequest_31(D)->eReqType;
  if (_4 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 5> [local count: 118111602]:
  # DEBUG BEGIN_STMT
  Csec_Ip_StartVerifMACCmd ();
  # DEBUG BEGIN_STMT
  goto <bb 13>; [100.00%]

  <bb 6> [local count: 955630224]:
  # DEBUG BEGIN_STMT
  _5 = Csec_Ip_pState.155_9->u32Timeout;
  u32ElapsedTime_35 = Csec_Ip_WaitCommandCompletion (_5, u32ElapsedTime_12);
  # DEBUG u32ElapsedTime => u32ElapsedTime_35
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.153_6 = Csec_Ip_pState;
  _7 = Csec_Ip_pState.153_6->ErrCode;
  if (_7 == 65534)
    goto <bb 7>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 7> [local count: 324914276]:
  # DEBUG BEGIN_STMT
  Csec_Ip_CancelCommand ();
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.154_8 = Csec_Ip_pState;
  Csec_Ip_pState.154_8->bCmdInProgress = 0;
  goto <bb 10>; [100.00%]

  <bb 8> [local count: 630715948]:
  # DEBUG BEGIN_STMT
  Csec_Ip_ContinueVerifMACCmd ();

  <bb 10> [local count: 955630224]:
  # u32ElapsedTime_19 = PHI <u32ElapsedTime_35(7), u32ElapsedTime_35(8)>

  <bb 13> [local count: 1073741824]:
  # u32ElapsedTime_12 = PHI <u32ElapsedTime_19(10), 0(5)>
  # DEBUG u32ElapsedTime => u32ElapsedTime_12
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.155_9 = Csec_Ip_pState;
  _10 = Csec_Ip_pState.155_9->bCmdInProgress;
  if (_10 != 0)
    goto <bb 6>; [89.00%]
  else
    goto <bb 12>; [11.00%]

  <bb 11> [local count: 118111602]:
  # DEBUG BEGIN_STMT
  Csec_Ip_VerifyMacAsync (pRequest_31(D));

  <bb 12> [local count: 715827891]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.156_11 = Csec_Ip_pState;
  _40 = Csec_Ip_pState.156_11->ErrCode;
  return _40;

}



;; Function Csec_Ip_MpCompress (Csec_Ip_MpCompress, funcdef_no=50, decl_uid=5735, cgraph_uid=51, symbol_order=51)

Modification phase of node Csec_Ip_MpCompress/51
Csec_Ip_MpCompress (const uint8 * pMsg, uint16 u16MsgLen, uint8 * pMpCompress)
{
  Csec_Ip_ErrorCodeType CsecResponse;
  uint8 u8NumBytes;
  uint16 u16NumPagesLeft;
  uint32 u32ElapsedTime;
  uint32 u32NumBytes;
  struct Csec_Ip_StateType * Csec_Ip_pState.302_1;
  _Bool _2;
  long unsigned int _3;
  struct Csec_Ip_StateType * Csec_Ip_pState.305_4;
  long unsigned int _5;
  const uint8 * _6;
  struct Csec_Ip_StateType * Csec_Ip_pState.306_7;
  <unnamed type> _8;
  long unsigned int _10;
  struct Csec_Ip_StateType * Csec_Ip_pState.308_11;
  short unsigned int _12;
  struct Csec_Ip_StateType * Csec_Ip_pState.309_13;
  struct Csec_Ip_StateType * Csec_Ip_pState.311_15;
  short unsigned int _16;
  short unsigned int _17;
  long unsigned int _18;
  long unsigned int _19;
  short unsigned int _20;
  long unsigned int _21;
  <unnamed type> _22;
  struct Csec_Ip_StateType * Csec_Ip_pState.316_23;
  short unsigned int _24;
  struct Csec_Ip_StateType * Csec_Ip_pState.317_25;
  struct Csec_Ip_StateType * Csec_Ip_pState.318_26;
  unsigned char iftmp.304_29;
  Csec_Ip_ErrorCodeType _56;
  long unsigned int _57;
  long unsigned int _58;
  long unsigned int _59;
  long unsigned int _61;
  long unsigned int _62;

  <bb 2> [local count: 348071315]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG u32ElapsedTime => 0
  # DEBUG BEGIN_STMT
  # DEBUG u16NumPagesLeft => u16MsgLen_35(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.302_1 = Csec_Ip_pState;
  _2 = Csec_Ip_pState.302_1->bCmdInProgress;
  if (_2 != 0)
    goto <bb 3>; [67.00%]
  else
    goto <bb 4>; [33.00%]

  <bb 3> [local count: 233207781]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.302_1->ErrCode = 65535;
  goto <bb 16>; [100.00%]

  <bb 4> [local count: 114863534]:
  # DEBUG BEGIN_STMT
  Csec_Ip_ClearErrorFlags ();
  # DEBUG BEGIN_STMT
  _3 = (long unsigned int) u16MsgLen_35(D);
  u32NumBytes_38 = _3 << 4;
  # DEBUG u32NumBytes => u32NumBytes_38
  # DEBUG BEGIN_STMT
  Csec_Ip_UpdateState (0, 22, pMsg_39(D), pMpCompress_40(D), u32NumBytes_38);
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 5> [local count: 1014686025]:
  # DEBUG BEGIN_STMT
  _20 = MIN_EXPR <u16NumPagesLeft_28, 7>;
  iftmp.304_29 = (unsigned char) _20;
  # DEBUG u8NumPages => iftmp.304_29
  # DEBUG BEGIN_STMT
  u8NumBytes_42 = iftmp.304_29 << 4;
  # DEBUG u8NumBytes => u8NumBytes_42
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.305_4 = Csec_Ip_pState;
  _5 = Csec_Ip_pState.305_4->u32Index;
  _6 = pMsg_39(D) + _5;
  Csec_Ip_WriteCommandBytes (16, _6, u8NumBytes_42);
  # DEBUG BEGIN_STMT
  Csec_Ip_WriteCommandHalfWord (14, u16MsgLen_35(D));
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.306_7 = Csec_Ip_pState;
  _8 = Csec_Ip_pState.306_7->eSeq;
  # DEBUG eFuncId => 22
  # DEBUG eFuncFormat => 0
  # DEBUG eCallSeq => _8
  # DEBUG eKeyId => 0
  # DEBUG INLINE_ENTRY Csec_Ip_WriteCommandHeader
  # DEBUG BEGIN_STMT
  _57 = _8 << 8;
  _58 = _57 & 65535;
  _59 = _58 | 369098752;
  MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[0] ={v} _59;
  # DEBUG eFuncId => NULL
  # DEBUG eFuncFormat => NULL
  # DEBUG eCallSeq => NULL
  # DEBUG eKeyId => NULL
  # DEBUG BEGIN_STMT
  _10 = Csec_Ip_pState.306_7->u32Timeout;
  u32ElapsedTime_46 = Csec_Ip_WaitCommandCompletion (_10, u32ElapsedTime_27);
  # DEBUG u32ElapsedTime => u32ElapsedTime_46
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.308_11 = Csec_Ip_pState;
  _12 = Csec_Ip_pState.308_11->ErrCode;
  if (_12 == 65534)
    goto <bb 6>; [20.24%]
  else
    goto <bb 7>; [79.76%]

  <bb 6> [local count: 205372451]:
  # DEBUG BEGIN_STMT
  Csec_Ip_CancelCommand ();
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.309_13 = Csec_Ip_pState;
  Csec_Ip_pState.309_13->bCmdInProgress = 0;
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 809313573]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY Csec_Ip_ReadErrorBits
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG u8Offset => 4
  # DEBUG INLINE_ENTRY Csec_Ip_ReadCommandWord
  # DEBUG BEGIN_STMT
  _61 ={v} MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[1];
  # DEBUG u8Offset => NULL
  # DEBUG u32ErrWord => _61
  # DEBUG BEGIN_STMT
  _62 = _61 >> 16;
  CsecResponse_63 = (Csec_Ip_ErrorCodeType) _62;
  # DEBUG CsecResponse => CsecResponse_63
  # DEBUG BEGIN_STMT
  # DEBUG CsecResponse => NULL
  Csec_Ip_pState.308_11->ErrCode = CsecResponse_63;

  <bb 8> [local count: 1014686025]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.311_15 = Csec_Ip_pState;
  _16 = Csec_Ip_pState.311_15->ErrCode;
  if (_16 != 1)
    goto <bb 13>; [5.50%]
  else
    goto <bb 9>; [94.50%]

  <bb 9> [local count: 958878293]:
  # DEBUG BEGIN_STMT
  _17 = (short unsigned int) iftmp.304_29;
  u16NumPagesLeft_50 = u16NumPagesLeft_28 - _17;
  # DEBUG u16NumPagesLeft => u16NumPagesLeft_50
  # DEBUG BEGIN_STMT
  _18 = Csec_Ip_pState.311_15->u32Index;
  _19 = (long unsigned int) u8NumBytes_42;
  _21 = _18 + _19;
  Csec_Ip_pState.311_15->u32Index = _21;
  # DEBUG BEGIN_STMT
  _22 = Csec_Ip_pState.311_15->eSeq;
  if (_22 == 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 10> [local count: 479439146]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.311_15->eSeq = 1;

  <bb 11> [local count: 958878293]:
  # u32ElapsedTime_14 = PHI <u32ElapsedTime_46(9), u32ElapsedTime_46(10)>
  # u16NumPagesLeft_9 = PHI <u16NumPagesLeft_50(9), u16NumPagesLeft_50(10)>

  <bb 12> [local count: 1073741824]:
  # u32ElapsedTime_27 = PHI <u32ElapsedTime_14(11), 0(4)>
  # u16NumPagesLeft_28 = PHI <u16NumPagesLeft_9(11), u16MsgLen_35(D)(4)>
  # DEBUG u16NumPagesLeft => u16NumPagesLeft_28
  # DEBUG u32ElapsedTime => u32ElapsedTime_27
  # DEBUG BEGIN_STMT
  if (u16NumPagesLeft_28 != 0)
    goto <bb 5>; [94.50%]
  else
    goto <bb 13>; [5.50%]

  <bb 13> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.316_23 = Csec_Ip_pState;
  _24 = Csec_Ip_pState.316_23->ErrCode;
  if (_24 == 1)
    goto <bb 14>; [20.24%]
  else
    goto <bb 15>; [79.76%]

  <bb 14> [local count: 23248379]:
  # DEBUG BEGIN_STMT
  Csec_Ip_ReadCommandBytes (16, pMpCompress_40(D), 16);

  <bb 15> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.317_25 = Csec_Ip_pState;
  Csec_Ip_pState.317_25->bCmdInProgress = 0;

  <bb 16> [local count: 348071313]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.318_26 = Csec_Ip_pState;
  _56 = Csec_Ip_pState.318_26->ErrCode;
  return _56;

}



;; Function Csec_Ip_IrqHandler (Csec_Ip_IrqHandler, funcdef_no=53, decl_uid=5743, cgraph_uid=54, symbol_order=54)

Modification phase of node Csec_Ip_IrqHandler/54
Csec_Ip_IrqHandler ()
{
  unsigned char _1;
  signed char _2;
  struct Csec_Ip_StateType * Csec_Ip_pState.341_3;
  _Bool _4;
  unsigned char _5;
  signed char _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct FTFC_Type *)1073872896B].FCNFG;
  _2 = (signed char) _1;
  if (_2 >= 0)
    goto <bb 9>; [59.00%]
  else
    goto <bb 3>; [41.00%]

  <bb 3> [local count: 440234148]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.341_3 = Csec_Ip_pState;
  if (Csec_Ip_pState.341_3 == 0B)
    goto <bb 4>; [17.43%]
  else
    goto <bb 5>; [82.57%]

  <bb 4> [local count: 76732812]:
  # DEBUG BEGIN_STMT
  Csec_Ip_SetInterrupt (0);
  goto <bb 9>; [100.00%]

  <bb 5> [local count: 363501336]:
  # DEBUG BEGIN_STMT
  _4 = Csec_Ip_pState.341_3->bCmdInProgress;
  if (_4 != 0)
    goto <bb 7>; [67.00%]
  else
    goto <bb 6>; [33.00%]

  <bb 6> [local count: 119955441]:
  # DEBUG BEGIN_STMT
  Csec_Ip_SetInterrupt (0);
  goto <bb 9>; [100.00%]

  <bb 7> [local count: 243545895]:
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct FTFC_Type *)1073872896B].FSTAT;
  _6 = (signed char) _5;
  if (_6 >= 0)
    goto <bb 9>; [74.50%]
  else
    goto <bb 8>; [25.50%]

  <bb 8> [local count: 62104203]:
  # DEBUG BEGIN_STMT
  Csec_Ip_ProcessReceivedResponse (1);

  <bb 9> [local count: 1073741824]:
  return;

}



;; Function Csec_Ip_SetSynchronousCmdTimeout (Csec_Ip_SetSynchronousCmdTimeout, funcdef_no=54, decl_uid=5741, cgraph_uid=55, symbol_order=55)

Modification phase of node Csec_Ip_SetSynchronousCmdTimeout/55
Csec_Ip_SetSynchronousCmdTimeout (uint32 u32Timeout)
{
  struct Csec_Ip_StateType * Csec_Ip_pState.343_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.343_1 = Csec_Ip_pState;
  Csec_Ip_pState.343_1->u32Timeout = u32Timeout_3(D);
  return;

}



;; Function Csec_Ip_GetStatus (Csec_Ip_GetStatus, funcdef_no=55, decl_uid=5722, cgraph_uid=56, symbol_order=56)

Modification phase of node Csec_Ip_GetStatus/56
Csec_Ip_GetStatus ()
{
  Csec_Ip_StatusType _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _2 ={v} MEM[(struct FTFC_Type *)1073872896B].FCSESTAT;
  return _2;

}



;; Function Csec_Ip_VerifyMacAddrMode (Csec_Ip_VerifyMacAddrMode, funcdef_no=56, decl_uid=5750, cgraph_uid=57, symbol_order=57)

Modification phase of node Csec_Ip_VerifyMacAddrMode/57
Csec_Ip_VerifyMacAddrMode (Csec_Ip_KeyIdType eKeyId, const uint8 * pMsg, uint32 u32MsgLen, const uint8 * pMac, uint16 u16MacLen, boolean * pbVerifStatus)
{
  Csec_Ip_ErrorCodeType CsecResponse;
  struct Csec_Ip_StateType * Csec_Ip_pState.344_1;
  _Bool _2;
  long unsigned int pMsg.347_3;
  struct Csec_Ip_StateType * Csec_Ip_pState.348_4;
  long unsigned int _5;
  _Bool _6;
  struct Csec_Ip_StateType * Csec_Ip_pState.351_7;
  Csec_Ip_ErrorCodeType _26;
  long unsigned int _27;
  long unsigned int _28;
  long unsigned int _30;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.344_1 = Csec_Ip_pState;
  _2 = Csec_Ip_pState.344_1->bCmdInProgress;
  if (_2 != 0)
    goto <bb 3>; [67.00%]
  else
    goto <bb 4>; [33.00%]

  <bb 3> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.344_1->ErrCode = 65535;
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.344_1->bCmdInProgress = 1;
  # DEBUG BEGIN_STMT
  Csec_Ip_ClearErrorFlags ();
  # DEBUG BEGIN_STMT
  pMsg.347_3 = (long unsigned int) pMsg_13(D);
  # DEBUG u8Offset => 16
  # DEBUG u32Word => pMsg.347_3
  # DEBUG INLINE_ENTRY Csec_Ip_WriteCommandWord
  # DEBUG BEGIN_STMT
  # DEBUG u8IndexWord => 4
  # DEBUG BEGIN_STMT
  MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[4] ={v} pMsg.347_3;
  # DEBUG u8Offset => NULL
  # DEBUG u32Word => NULL
  # DEBUG u8IndexWord => NULL
  # DEBUG BEGIN_STMT
  Csec_Ip_WriteCommandBytes (32, pMac_14(D), 16);
  # DEBUG BEGIN_STMT
  # DEBUG u8Offset => 12
  # DEBUG u32Word => u32MsgLen_16(D)
  # DEBUG INLINE_ENTRY Csec_Ip_WriteCommandWord
  # DEBUG BEGIN_STMT
  # DEBUG u8IndexWord => 3
  # DEBUG BEGIN_STMT
  MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[3] ={v} u32MsgLen_16(D);
  # DEBUG u8Offset => NULL
  # DEBUG u32Word => NULL
  # DEBUG u8IndexWord => NULL
  # DEBUG BEGIN_STMT
  Csec_Ip_WriteCommandHalfWord (8, u16MacLen_17(D));
  # DEBUG BEGIN_STMT
  Csec_Ip_WriteCmdAndWait (6, 1, 0, eKeyId_19(D));
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.348_4 = Csec_Ip_pState;
  # DEBUG INLINE_ENTRY Csec_Ip_ReadErrorBits
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG u8Offset => 4
  # DEBUG INLINE_ENTRY Csec_Ip_ReadCommandWord
  # DEBUG BEGIN_STMT
  _27 ={v} MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[1];
  # DEBUG u8Offset => NULL
  # DEBUG u32ErrWord => _27
  # DEBUG BEGIN_STMT
  _28 = _27 >> 16;
  CsecResponse_29 = (Csec_Ip_ErrorCodeType) _28;
  # DEBUG CsecResponse => CsecResponse_29
  # DEBUG BEGIN_STMT
  # DEBUG CsecResponse => NULL
  Csec_Ip_pState.348_4->ErrCode = CsecResponse_29;
  # DEBUG BEGIN_STMT
  if (CsecResponse_29 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 120473833]:
  # DEBUG BEGIN_STMT
  # DEBUG u8Offset => 20
  # DEBUG INLINE_ENTRY Csec_Ip_ReadCommandWord
  # DEBUG BEGIN_STMT
  _30 ={v} MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[5];
  # DEBUG u8Offset => NULL
  # DEBUG u32VerifWord => _30
  # DEBUG BEGIN_STMT
  _5 = _30 & 4294901760;
  _6 = _5 == 0;
  *pbVerifStatus_22(D) = _6;

  <bb 6> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.348_4->bCmdInProgress = 0;

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.351_7 = Csec_Ip_pState;
  _26 = Csec_Ip_pState.351_7->ErrCode;
  return _26;

}



;; Function Csec_Ip_GenerateMacAddrMode (Csec_Ip_GenerateMacAddrMode, funcdef_no=57, decl_uid=5755, cgraph_uid=58, symbol_order=58)

Modification phase of node Csec_Ip_GenerateMacAddrMode/58
Csec_Ip_GenerateMacAddrMode (Csec_Ip_KeyIdType eKeyId, const uint8 * pMsg, uint32 u32MsgLen, uint8 * pCmac)
{
  Csec_Ip_ErrorCodeType CsecResponse;
  struct Csec_Ip_StateType * Csec_Ip_pState.352_1;
  _Bool _2;
  long unsigned int pMsg.355_3;
  struct Csec_Ip_StateType * Csec_Ip_pState.356_4;
  struct Csec_Ip_StateType * Csec_Ip_pState.358_5;
  struct Csec_Ip_StateType * Csec_Ip_pState.359_6;
  Csec_Ip_ErrorCodeType _21;
  long unsigned int _22;
  long unsigned int _23;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.352_1 = Csec_Ip_pState;
  _2 = Csec_Ip_pState.352_1->bCmdInProgress;
  if (_2 != 0)
    goto <bb 3>; [67.00%]
  else
    goto <bb 4>; [33.00%]

  <bb 3> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.352_1->ErrCode = 65535;
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.352_1->bCmdInProgress = 1;
  # DEBUG BEGIN_STMT
  Csec_Ip_ClearErrorFlags ();
  # DEBUG BEGIN_STMT
  pMsg.355_3 = (long unsigned int) pMsg_12(D);
  # DEBUG u8Offset => 16
  # DEBUG u32Word => pMsg.355_3
  # DEBUG INLINE_ENTRY Csec_Ip_WriteCommandWord
  # DEBUG BEGIN_STMT
  # DEBUG u8IndexWord => 4
  # DEBUG BEGIN_STMT
  MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[4] ={v} pMsg.355_3;
  # DEBUG u8Offset => NULL
  # DEBUG u32Word => NULL
  # DEBUG u8IndexWord => NULL
  # DEBUG BEGIN_STMT
  # DEBUG u8Offset => 12
  # DEBUG u32Word => u32MsgLen_13(D)
  # DEBUG INLINE_ENTRY Csec_Ip_WriteCommandWord
  # DEBUG BEGIN_STMT
  # DEBUG u8IndexWord => 3
  # DEBUG BEGIN_STMT
  MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[3] ={v} u32MsgLen_13(D);
  # DEBUG u8Offset => NULL
  # DEBUG u32Word => NULL
  # DEBUG u8IndexWord => NULL
  # DEBUG BEGIN_STMT
  Csec_Ip_WriteCmdAndWait (5, 1, 0, eKeyId_14(D));
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.356_4 = Csec_Ip_pState;
  # DEBUG INLINE_ENTRY Csec_Ip_ReadErrorBits
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG u8Offset => 4
  # DEBUG INLINE_ENTRY Csec_Ip_ReadCommandWord
  # DEBUG BEGIN_STMT
  _22 ={v} MEM[(struct Csec_Ip_PramType *)335548416B].Csec_Ip_aPramRegister[1];
  # DEBUG u8Offset => NULL
  # DEBUG u32ErrWord => _22
  # DEBUG BEGIN_STMT
  _23 = _22 >> 16;
  CsecResponse_24 = (Csec_Ip_ErrorCodeType) _23;
  # DEBUG CsecResponse => CsecResponse_24
  # DEBUG BEGIN_STMT
  # DEBUG CsecResponse => NULL
  Csec_Ip_pState.356_4->ErrCode = CsecResponse_24;
  # DEBUG BEGIN_STMT
  if (CsecResponse_24 == 1)
    goto <bb 5>; [20.24%]
  else
    goto <bb 6>; [79.76%]

  <bb 5> [local count: 71717364]:
  # DEBUG BEGIN_STMT
  Csec_Ip_ReadCommandBytes (32, pCmac_17(D), 16);

  <bb 6> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.358_5 = Csec_Ip_pState;
  Csec_Ip_pState.358_5->bCmdInProgress = 0;

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Csec_Ip_pState.359_6 = Csec_Ip_pState;
  _21 = Csec_Ip_pState.359_6->ErrCode;
  return _21;

}


