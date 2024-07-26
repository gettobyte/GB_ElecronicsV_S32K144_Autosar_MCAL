
IPA constant propagation start:
Determining dynamic type for call: Can_Real_Payload_31 = FlexCAN_GetMbPayloadSize (base_24(D), _3);
  Starting walk at: Can_Real_Payload_31 = FlexCAN_GetMbPayloadSize (base_24(D), _3);
  instance pointer: base_24(D)  Outer instance pointer: base_24(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: ValEndMbPointer_33 = FlexCAN_GetMsgBuffRegion (base_24(D), _3);
  Starting walk at: ValEndMbPointer_33 = FlexCAN_GetMsgBuffRegion (base_24(D), _3);
  instance pointer: base_24(D)  Outer instance pointer: base_24(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Can_Real_Payload_31 = FlexCAN_GetMbPayloadSize (base_24(D), _3);
Determining dynamic type for call: Flexcan_Mb_39 = FlexCAN_GetMsgBuffRegion (base_24(D), _18);
  Starting walk at: Flexcan_Mb_39 = FlexCAN_GetMsgBuffRegion (base_24(D), _18);
  instance pointer: base_24(D)  Outer instance pointer: base_24(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Can_Real_Payload_43 = FlexCAN_GetMbPayloadSize (base_24(D), _18);
  Function call may change dynamic type:Flexcan_Mb_39 = FlexCAN_GetMsgBuffRegion (base_24(D), _18);
  Function call may change dynamic type:ValEndMbPointer_33 = FlexCAN_GetMsgBuffRegion (base_24(D), _3);
  Function call may change dynamic type:Can_Real_Payload_31 = FlexCAN_GetMbPayloadSize (base_24(D), _3);
Determining dynamic type for call: Can_Real_Payload_43 = FlexCAN_GetMbPayloadSize (base_24(D), _18);
  Starting walk at: Can_Real_Payload_43 = FlexCAN_GetMbPayloadSize (base_24(D), _18);
  instance pointer: base_24(D)  Outer instance pointer: base_24(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Flexcan_Mb_39 = FlexCAN_GetMsgBuffRegion (base_24(D), _18);
  Function call may change dynamic type:Can_Real_Payload_43 = FlexCAN_GetMbPayloadSize (base_24(D), _18);
  Function call may change dynamic type:Flexcan_Mb_39 = FlexCAN_GetMsgBuffRegion (base_24(D), _18);
  Function call may change dynamic type:ValEndMbPointer_33 = FlexCAN_GetMsgBuffRegion (base_24(D), _3);
  Function call may change dynamic type:Can_Real_Payload_31 = FlexCAN_GetMbPayloadSize (base_24(D), _3);
Determining dynamic type for call: Flexcan_Mb_45 = FlexCAN_GetMsgBuffRegion (base_42(D), msgBuffIdx_43(D));
  Starting walk at: Flexcan_Mb_45 = FlexCAN_GetMsgBuffRegion (base_42(D), msgBuffIdx_43(D));
  instance pointer: base_42(D)  Outer instance pointer: base_42(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _5 = FlexCAN_GetMbPayloadSize (base_42(D), msgBuffIdx_43(D));
  Starting walk at: _5 = FlexCAN_GetMbPayloadSize (base_42(D), msgBuffIdx_43(D));
  instance pointer: base_42(D)  Outer instance pointer: base_42(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Flexcan_Mb_45 = FlexCAN_GetMsgBuffRegion (base_42(D), msgBuffIdx_43(D));
Determining dynamic type for call: Payload_Size_54 = FlexCAN_GetMbPayloadSize (base_42(D), msgBuffIdx_43(D));
  Starting walk at: Payload_Size_54 = FlexCAN_GetMbPayloadSize (base_42(D), msgBuffIdx_43(D));
  instance pointer: base_42(D)  Outer instance pointer: base_42(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_5 = FlexCAN_GetMbPayloadSize (base_42(D), msgBuffIdx_43(D));
  Function call may change dynamic type:Flexcan_Mb_45 = FlexCAN_GetMsgBuffRegion (base_42(D), msgBuffIdx_43(D));
Determining dynamic type for call: Flexcan_Mb_6 = FlexCAN_GetMsgBuffRegion (base_3(D), msgBuffIdx_4(D));
  Starting walk at: Flexcan_Mb_6 = FlexCAN_GetMsgBuffRegion (base_3(D), msgBuffIdx_4(D));
  instance pointer: base_3(D)  Outer instance pointer: base_3(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: flexcan_mb_35 = FlexCAN_GetMsgBuffRegion (base_32(D), msgBuffIdx_33(D));
  Starting walk at: flexcan_mb_35 = FlexCAN_GetMsgBuffRegion (base_32(D), msgBuffIdx_33(D));
  instance pointer: base_32(D)  Outer instance pointer: base_32(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: flexcan_mb_5 = FlexCAN_GetMsgBuffRegion (base_2(D), msgBuffIdx_3(D));
  Starting walk at: flexcan_mb_5 = FlexCAN_GetMsgBuffRegion (base_2(D), msgBuffIdx_3(D));
  instance pointer: base_2(D)  Outer instance pointer: base_2(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: can_real_payload_14 = FlexCAN_GetPayloadSize (base_12(D), 0);
  Starting walk at: can_real_payload_14 = FlexCAN_GetPayloadSize (base_12(D), 0);
  instance pointer: base_12(D)  Outer instance pointer: base_12(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:can_real_payload_14 = FlexCAN_GetPayloadSize (base_12(D), 0);
Determining dynamic type for call: FlexCAN_ClearRAM (base_18(D));
  Starting walk at: FlexCAN_ClearRAM (base_18(D));
  instance pointer: base_18(D)  Outer instance pointer: base_18(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_23 = OsIf_GetElapsed (&timeStart, 0);
  Function call may change dynamic type:_3 = OsIf_GetCounter (0);
  Function call may change dynamic type:uS2Ticks_17 = OsIf_MicrosToTicks (10000, 0);
Determining dynamic type for call: payload_size_28 = FlexCAN_GetPayloadSize (base_24(D), 0);
  Starting walk at: payload_size_28 = FlexCAN_GetPayloadSize (base_24(D), 0);
  instance pointer: base_24(D)  Outer instance pointer: base_24(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:payload_size_28 = FlexCAN_GetPayloadSize (base_24(D), 0);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  FlexCAN_ComputePayloadSize.part.0/93:
  Jump functions of caller  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_13/91:
  Jump functions of caller  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_13/90:
  Jump functions of caller  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_11/88:
  Jump functions of caller  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_11/87:
  Jump functions of caller  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_18/86:
  Jump functions of caller  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_18/85:
  Jump functions of caller  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_06/83:
  Jump functions of caller  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_06/82:
  Jump functions of caller  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_05/81:
  Jump functions of caller  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_05/80:
  Jump functions of caller  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_04/79:
  Jump functions of caller  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_04/78:
  Jump functions of caller  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_03/77:
  Jump functions of caller  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_03/76:
  Jump functions of caller  OsIf_GetElapsed/75:
  Jump functions of caller  OsIf_GetCounter/74:
  Jump functions of caller  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_02/73:
  Jump functions of caller  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_02/72:
  Jump functions of caller  OsIf_MicrosToTicks/71:
  Jump functions of caller  FlexCAN_ConfigCtrlOptions/68:
  Jump functions of caller  FlexCAN_IsMbOutOfRange/67:
  Jump functions of caller  FlexCAN_ReadRxFifo/66:
    callsite  FlexCAN_ReadRxFifo/66 -> FlexCAN_ComputePayloadSize/40 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xf
         VR  [0, 15]
  Jump functions of caller  FlexCAN_SetRxFifoFilter/65:
  Jump functions of caller  FlexCAN_SetOperationMode/64:
  Jump functions of caller  FlexCAN_SetMaxMsgBuffNum/63:
    callsite  FlexCAN_SetMaxMsgBuffNum/63 -> FlexCAN_GetMbPayloadSize/53 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         VR  [0, 255]
    callsite  FlexCAN_SetMaxMsgBuffNum/63 -> FlexCAN_GetMsgBuffRegion/41 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         VR  [0, 255]
    callsite  FlexCAN_SetMaxMsgBuffNum/63 -> FlexCAN_GetMaxMbNum/42 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_SetMaxMsgBuffNum/63 -> FlexCAN_GetMsgBuffRegion/41 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op plus_expr 4294967295
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_SetMaxMsgBuffNum/63 -> FlexCAN_GetMbPayloadSize/53 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op plus_expr 4294967295
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  FlexCAN_SetTxMsgBuff/62:
    callsite  FlexCAN_SetTxMsgBuff/62 -> FlexCAN_ComputePayloadSize/40 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  FlexCAN_GetMsgBuff/61:
    callsite  FlexCAN_GetMsgBuff/61 -> FlexCAN_GetMbPayloadSize/53 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_GetMsgBuff/61 -> FlexCAN_GetMbPayloadSize/53 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_GetMsgBuff/61 -> FlexCAN_ComputePayloadSize/40 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xf
         VR  [0, 15]
    callsite  FlexCAN_GetMsgBuff/61 -> FlexCAN_GetMsgBuffRegion/41 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  FlexCAN_GetMsgBuffTimestamp/60:
    callsite  FlexCAN_GetMsgBuffTimestamp/60 -> FlexCAN_GetMsgBuffRegion/41 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  FlexCAN_SetRxMsgBuff/59:
    callsite  FlexCAN_SetRxMsgBuff/59 -> FlexCAN_GetMsgBuffRegion/41 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  FlexCAN_EnableInterrupts/58:
  Jump functions of caller  FlexCAN_DisableInterrupts/57:
  Jump functions of caller  FLEXCAN_ClearMsgBuffIntCmd/56:
  Jump functions of caller  FlexCAN_SetMsgBuffIntCmd/55:
  Jump functions of caller  FlexCAN_LockRxMsgBuff/54:
    callsite  FlexCAN_LockRxMsgBuff/54 -> FlexCAN_GetMsgBuffRegion/41 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  FlexCAN_GetMbPayloadSize/53:
    callsite  FlexCAN_GetMbPayloadSize/53 -> FlexCAN_GetPayloadSize/52 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  FlexCAN_GetPayloadSize/52:
    callsite  FlexCAN_GetPayloadSize/52 -> FlexCAN_IsFDAvailable/50 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  FlexCAN_SetPayloadSize/51:
  Jump functions of caller  FlexCAN_IsFDAvailable/50:
  Jump functions of caller  FlexCAN_EnableRxFifo/49:
    callsite  FlexCAN_EnableRxFifo/49 -> FlexCAN_GetMaxMbNum/42 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  FlexCAN_Init/48:
    callsite  FlexCAN_Init/48 -> FlexCAN_IsFDAvailable/50 : 
       param 0: PASS THROUGH: 0, op nop_expr
         Aggregate passed by reference:
           offset: 32, cst: 0
           offset: 128, cst: 4294967295
           offset: 160, cst: 4294967295
           offset: 192, cst: 4294967295
           offset: 256, cst: 3866630
           offset: 320, cst: 0
           offset: 384, cst: 4294967295
           offset: 416, cst: 1048576
           offset: 640, cst: 0
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_Init/48 -> FlexCAN_ClearRAM/39 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  FlexCAN_SetErrIntCmd/47:
  Jump functions of caller  FlexCAN_Disable/46:
  Jump functions of caller  FlexCAN_ExitFreezeMode/45:
  Jump functions of caller  FlexCAN_Enable/44:
  Jump functions of caller  FlexCAN_EnterFreezeMode/43:
  Jump functions of caller  FlexCAN_GetMaxMbNum/42:
  Jump functions of caller  FlexCAN_GetMsgBuffRegion/41:
    callsite  FlexCAN_GetMsgBuffRegion/41 -> FlexCAN_GetPayloadSize/52 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  FlexCAN_ComputePayloadSize/40:
    callsite  FlexCAN_ComputePayloadSize/40 -> FlexCAN_ComputePayloadSize.part.0/93 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  FlexCAN_ClearRAM/39:
    callsite  FlexCAN_ClearRAM/39 -> FlexCAN_GetMaxMbNum/42 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering FlexCAN_ConfigCtrlOptions for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_IsMbOutOfRange for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_ReadRxFifo for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_SetRxFifoFilter for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_SetOperationMode for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_SetMaxMsgBuffNum for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_SetTxMsgBuff for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_GetMsgBuff for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_GetMsgBuffTimestamp for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_SetRxMsgBuff for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_EnableInterrupts for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_DisableInterrupts for cloning; -fipa-cp-clone disabled.
Not considering FLEXCAN_ClearMsgBuffIntCmd for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_SetMsgBuffIntCmd for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_LockRxMsgBuff for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_GetMbPayloadSize for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_SetPayloadSize for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_IsFDAvailable for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_EnableRxFifo for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Init for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_SetErrIntCmd for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Disable for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_ExitFreezeMode for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Enable for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_EnterFreezeMode for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_GetMaxMbNum for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_GetMsgBuffRegion for cloning; -fipa-cp-clone disabled.

overall_size: 1125, max_new_size: 11001
 - context independent values, size: 10, time_benefit: 2.000000
     Decided to specialize for all known contexts, code not going to grow.

IPA lattices after all propagation:

Lattices:
  Node: FlexCAN_ComputePayloadSize.part.0/93:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: FlexCAN_ConfigCtrlOptions/68:
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
  Node: FlexCAN_IsMbOutOfRange/67:
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
  Node: FlexCAN_ReadRxFifo/66:
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
  Node: FlexCAN_SetRxFifoFilter/65:
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
  Node: FlexCAN_SetOperationMode/64:
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
  Node: FlexCAN_SetMaxMsgBuffNum/63:
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
  Node: FlexCAN_SetTxMsgBuff/62:
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
  Node: FlexCAN_GetMsgBuff/61:
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
  Node: FlexCAN_GetMsgBuffTimestamp/60:
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
  Node: FlexCAN_SetRxMsgBuff/59:
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
  Node: FlexCAN_EnableInterrupts/58:
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
  Node: FlexCAN_DisableInterrupts/57:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: FLEXCAN_ClearMsgBuffIntCmd/56:
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
  Node: FlexCAN_SetMsgBuffIntCmd/55:
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
  Node: FlexCAN_LockRxMsgBuff/54:
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
  Node: FlexCAN_GetMbPayloadSize/53:
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
  Node: FlexCAN_GetPayloadSize/52:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x0
         uint8 [0, 0]
        AGGS VARIABLE
  Node: FlexCAN_SetPayloadSize/51:
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
  Node: FlexCAN_IsFDAvailable/50:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: FlexCAN_EnableRxFifo/49:
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
  Node: FlexCAN_Init/48:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: FlexCAN_SetErrIntCmd/47:
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
  Node: FlexCAN_Disable/46:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: FlexCAN_ExitFreezeMode/45:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: FlexCAN_Enable/44:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: FlexCAN_EnterFreezeMode/43:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: FlexCAN_GetMaxMbNum/42:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: FlexCAN_GetMsgBuffRegion/41:
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
  Node: FlexCAN_ComputePayloadSize/40:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: FlexCAN_ClearRAM/39:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE

IPA decision stage:

 - Creating a specialized node of FlexCAN_GetPayloadSize/52 for all known contexts.
    replacing param #1 mbdsrIdx with const 0
Propagated bits info for function FlexCAN_GetPayloadSize.constprop/108:
 param 1: value = 0x0, mask = 0x0
Propagated bits info for function FlexCAN_GetPayloadSize/52:
 param 1: value = 0x0, mask = 0x0

IPA constant propagation end

Reclaiming functions: FlexCAN_GetPayloadSize/52
Reclaiming variables:
Clearing address taken flags:
Symbol table:

FlexCAN_GetPayloadSize.constprop.0/108 (FlexCAN_GetPayloadSize.constprop) @06cbca80
  Type: function definition analyzed
  Visibility:
  References: 
  Referring: 
  Clone of FlexCAN_GetPayloadSize/52
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: FlexCAN_GetMsgBuffRegion/41 (536870913 (estimated locally),0.95 per call) FlexCAN_GetMbPayloadSize/53 (536870913 (estimated locally),0.95 per call) 
  Calls: FlexCAN_IsFDAvailable/50 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_ComputePayloadSize.part.0/93 (FlexCAN_ComputePayloadSize.part.0) @06df0b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: CSWTCH.34/92 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: FlexCAN_ComputePayloadSize/40 (536870912 (estimated locally),0.50 per call) 
  Calls: 
CSWTCH.34/92 (CSWTCH.34) @06f32678
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: FlexCAN_ComputePayloadSize.part.0/93 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
SchM_Exit_Can_CAN_EXCLUSIVE_AREA_13/91 (SchM_Exit_Can_CAN_EXCLUSIVE_AREA_13) @06ef2d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_SetRxFifoFilter/65 (21475 (estimated locally),0.10 per call) FlexCAN_SetRxFifoFilter/65 (21475 (estimated locally),0.10 per call) FlexCAN_SetRxFifoFilter/65 (21475 (estimated locally),0.10 per call) FlexCAN_SetRxFifoFilter/65 (21475 (estimated locally),0.10 per call) 
  Calls: 
SchM_Enter_Can_CAN_EXCLUSIVE_AREA_13/90 (SchM_Enter_Can_CAN_EXCLUSIVE_AREA_13) @06ef2700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_SetRxFifoFilter/65 (21475 (estimated locally),0.10 per call) FlexCAN_SetRxFifoFilter/65 (21475 (estimated locally),0.10 per call) FlexCAN_SetRxFifoFilter/65 (21475 (estimated locally),0.10 per call) FlexCAN_SetRxFifoFilter/65 (21475 (estimated locally),0.10 per call) 
  Calls: 
payload_code.6941/89 (payload_code) @06f04000
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: FlexCAN_SetTxMsgBuff/62 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
SchM_Exit_Can_CAN_EXCLUSIVE_AREA_11/88 (SchM_Exit_Can_CAN_EXCLUSIVE_AREA_11) @06ef20e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FLEXCAN_ClearMsgBuffIntCmd/56 (354334802 (estimated locally),0.33 per call) 
  Calls: 
SchM_Enter_Can_CAN_EXCLUSIVE_AREA_11/87 (SchM_Enter_Can_CAN_EXCLUSIVE_AREA_11) @06ef2000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FLEXCAN_ClearMsgBuffIntCmd/56 (354334802 (estimated locally),0.33 per call) 
  Calls: 
SchM_Exit_Can_CAN_EXCLUSIVE_AREA_18/86 (SchM_Exit_Can_CAN_EXCLUSIVE_AREA_18) @06edad20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_SetMsgBuffIntCmd/55 (268435456 (estimated locally),0.25 per call) FlexCAN_SetMsgBuffIntCmd/55 (268435456 (estimated locally),0.25 per call) 
  Calls: 
SchM_Enter_Can_CAN_EXCLUSIVE_AREA_18/85 (SchM_Enter_Can_CAN_EXCLUSIVE_AREA_18) @06edac40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_SetMsgBuffIntCmd/55 (268435456 (estimated locally),0.25 per call) FlexCAN_SetMsgBuffIntCmd/55 (268435456 (estimated locally),0.25 per call) 
  Calls: 
SchM_Exit_Can_CAN_EXCLUSIVE_AREA_06/83 (SchM_Exit_Can_CAN_EXCLUSIVE_AREA_06) @06eda2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_SetErrIntCmd/47 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Can_CAN_EXCLUSIVE_AREA_06/82 (SchM_Enter_Can_CAN_EXCLUSIVE_AREA_06) @06eda1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_SetErrIntCmd/47 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Can_CAN_EXCLUSIVE_AREA_05/81 (SchM_Exit_Can_CAN_EXCLUSIVE_AREA_05) @06eda000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Disable/46 (114863532 (estimated locally),0.41 per call) 
  Calls: 
SchM_Enter_Can_CAN_EXCLUSIVE_AREA_05/80 (SchM_Enter_Can_CAN_EXCLUSIVE_AREA_05) @06e9cee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Disable/46 (114863532 (estimated locally),0.41 per call) 
  Calls: 
SchM_Exit_Can_CAN_EXCLUSIVE_AREA_04/79 (SchM_Exit_Can_CAN_EXCLUSIVE_AREA_04) @06e9cd20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_ExitFreezeMode/45 (114863532 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Can_CAN_EXCLUSIVE_AREA_04/78 (SchM_Enter_Can_CAN_EXCLUSIVE_AREA_04) @06e9cc40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_ExitFreezeMode/45 (114863532 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Can_CAN_EXCLUSIVE_AREA_03/77 (SchM_Exit_Can_CAN_EXCLUSIVE_AREA_03) @06e9ca80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Enable/44 (114863532 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Can_CAN_EXCLUSIVE_AREA_03/76 (SchM_Enter_Can_CAN_EXCLUSIVE_AREA_03) @06e9c9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Enable/44 (114863532 (estimated locally),1.00 per call) 
  Calls: 
OsIf_GetElapsed/75 (OsIf_GetElapsed) @06e9c7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Init/48 (1014686025 (estimated locally),8.83 per call) FlexCAN_Disable/46 (1014686024 (estimated locally),3.66 per call) FlexCAN_ExitFreezeMode/45 (1014686025 (estimated locally),8.83 per call) FlexCAN_Enable/44 (1014686025 (estimated locally),8.83 per call) FlexCAN_EnterFreezeMode/43 (1014686025 (estimated locally),8.83 per call) 
  Calls: 
OsIf_GetCounter/74 (OsIf_GetCounter) @06e9c700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Init/48 (114863532 (estimated locally),1.00 per call) FlexCAN_Disable/46 (114863532 (estimated locally),0.41 per call) FlexCAN_ExitFreezeMode/45 (114863532 (estimated locally),1.00 per call) FlexCAN_Enable/44 (114863532 (estimated locally),1.00 per call) FlexCAN_EnterFreezeMode/43 (114863532 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Can_CAN_EXCLUSIVE_AREA_02/73 (SchM_Exit_Can_CAN_EXCLUSIVE_AREA_02) @06e9c620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_EnterFreezeMode/43 (114863532 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Can_CAN_EXCLUSIVE_AREA_02/72 (SchM_Enter_Can_CAN_EXCLUSIVE_AREA_02) @06e9c540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_EnterFreezeMode/43 (114863532 (estimated locally),1.00 per call) 
  Calls: 
OsIf_MicrosToTicks/71 (OsIf_MicrosToTicks) @06e9c460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Init/48 (114863532 (estimated locally),1.00 per call) FlexCAN_Disable/46 (276913048 (estimated locally),1.00 per call) FlexCAN_ExitFreezeMode/45 (114863532 (estimated locally),1.00 per call) FlexCAN_Enable/44 (114863532 (estimated locally),1.00 per call) FlexCAN_EnterFreezeMode/43 (114863532 (estimated locally),1.00 per call) 
  Calls: 
maxMbNum.6992/70 (maxMbNum) @06e9b948
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: FlexCAN_GetMaxMbNum/42 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
flexcanBase.6991/69 (flexcanBase) @06e9b900
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: FlexCAN_GetMaxMbNum/42 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
FlexCAN_ConfigCtrlOptions/68 (FlexCAN_ConfigCtrlOptions) @06d5d700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
FlexCAN_IsMbOutOfRange/67 (FlexCAN_IsMbOutOfRange) @06d5dee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
FlexCAN_ReadRxFifo/66 (FlexCAN_ReadRxFifo) @06d5dc40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:214748 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_ComputePayloadSize/40 (214748 (estimated locally),1.00 per call) 
FlexCAN_SetRxFifoFilter/65 (FlexCAN_SetRxFifoFilter) @06d5d8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:214748 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Can_CAN_EXCLUSIVE_AREA_13/91 (21475 (estimated locally),0.10 per call) SchM_Enter_Can_CAN_EXCLUSIVE_AREA_13/90 (21475 (estimated locally),0.10 per call) SchM_Exit_Can_CAN_EXCLUSIVE_AREA_13/91 (21475 (estimated locally),0.10 per call) SchM_Enter_Can_CAN_EXCLUSIVE_AREA_13/90 (21475 (estimated locally),0.10 per call) SchM_Exit_Can_CAN_EXCLUSIVE_AREA_13/91 (21475 (estimated locally),0.10 per call) SchM_Enter_Can_CAN_EXCLUSIVE_AREA_13/90 (21475 (estimated locally),0.10 per call) SchM_Exit_Can_CAN_EXCLUSIVE_AREA_13/91 (21475 (estimated locally),0.10 per call) SchM_Enter_Can_CAN_EXCLUSIVE_AREA_13/90 (21475 (estimated locally),0.10 per call) 
FlexCAN_SetOperationMode/64 (FlexCAN_SetOperationMode) @06d5d620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
FlexCAN_SetMaxMsgBuffNum/63 (FlexCAN_SetMaxMsgBuffNum) @06d4ad20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:214748 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_GetMbPayloadSize/53 (183524 (estimated locally),0.85 per call) FlexCAN_GetMsgBuffRegion/41 (183524 (estimated locally),0.85 per call) FlexCAN_GetMaxMbNum/42 (69793 (estimated locally),0.32 per call) FlexCAN_GetMsgBuffRegion/41 (107374 (estimated locally),0.50 per call) FlexCAN_GetMbPayloadSize/53 (214748 (estimated locally),1.00 per call) 
FlexCAN_SetTxMsgBuff/62 (FlexCAN_SetTxMsgBuff) @06d4a620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: payload_code.6941/89 (read)
  Referring: 
  Availability: available
  Function flags: count:214748 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_ComputePayloadSize/40 (75162 (estimated locally),0.35 per call) 
FlexCAN_GetMsgBuff/61 (FlexCAN_GetMsgBuff) @06d4ac40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:214748 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_GetMbPayloadSize/53 (35433 (estimated locally),0.16 per call) FlexCAN_GetMbPayloadSize/53 (107374 (estimated locally),0.50 per call) FlexCAN_ComputePayloadSize/40 (214748 (estimated locally),1.00 per call) FlexCAN_GetMsgBuffRegion/41 (214748 (estimated locally),1.00 per call) 
FlexCAN_GetMsgBuffTimestamp/60 (FlexCAN_GetMsgBuffTimestamp) @06d4a7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_GetMsgBuffRegion/41 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_SetRxMsgBuff/59 (FlexCAN_SetRxMsgBuff) @06d4a540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:214748 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_GetMsgBuffRegion/41 (214748 (estimated locally),1.00 per call) 
FlexCAN_EnableInterrupts/58 (FlexCAN_EnableInterrupts) @06d4a2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: FlexCAN_Ip_au32ImaskBuff/37 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
FlexCAN_DisableInterrupts/57 (FlexCAN_DisableInterrupts) @06d4a000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
FLEXCAN_ClearMsgBuffIntCmd/56 (FLEXCAN_ClearMsgBuffIntCmd) @06d3fb60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: FlexCAN_Ip_au32ImaskBuff/37 (write)FlexCAN_Ip_au32ImaskBuff/37 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Can_CAN_EXCLUSIVE_AREA_11/88 (354334802 (estimated locally),0.33 per call) SchM_Enter_Can_CAN_EXCLUSIVE_AREA_11/87 (354334802 (estimated locally),0.33 per call) 
FlexCAN_SetMsgBuffIntCmd/55 (FlexCAN_SetMsgBuffIntCmd) @06d3f620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: FlexCAN_Ip_au32ImaskBuff/37 (read)FlexCAN_Ip_au32ImaskBuff/37 (write)FlexCAN_Ip_au32ImaskBuff/37 (read)FlexCAN_Ip_au32ImaskBuff/37 (read)FlexCAN_Ip_au32ImaskBuff/37 (write)FlexCAN_Ip_au32ImaskBuff/37 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Can_CAN_EXCLUSIVE_AREA_18/86 (268435456 (estimated locally),0.25 per call) SchM_Enter_Can_CAN_EXCLUSIVE_AREA_18/85 (268435456 (estimated locally),0.25 per call) SchM_Exit_Can_CAN_EXCLUSIVE_AREA_18/86 (268435456 (estimated locally),0.25 per call) SchM_Enter_Can_CAN_EXCLUSIVE_AREA_18/85 (268435456 (estimated locally),0.25 per call) 
FlexCAN_LockRxMsgBuff/54 (FlexCAN_LockRxMsgBuff) @06d3f000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_GetMsgBuffRegion/41 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_GetMbPayloadSize/53 (FlexCAN_GetMbPayloadSize) @06d3fd20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:566398813 (estimated locally) body optimize_size
  Called by: FlexCAN_SetMaxMsgBuffNum/63 (183524 (estimated locally),0.85 per call) FlexCAN_SetMaxMsgBuffNum/63 (214748 (estimated locally),1.00 per call) FlexCAN_GetMsgBuff/61 (35433 (estimated locally),0.16 per call) FlexCAN_GetMsgBuff/61 (107374 (estimated locally),0.50 per call) 
  Calls: FlexCAN_GetPayloadSize.constprop/108 (536870913 (estimated locally),0.95 per call) 
FlexCAN_GetPayloadSize/52 (FlexCAN_GetPayloadSize) @06d3fa80
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
FlexCAN_SetPayloadSize/51 (FlexCAN_SetPayloadSize) @06d3f7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:214748 (estimated locally) body optimize_size
  Called by: 
  Calls: 
FlexCAN_IsFDAvailable/50 (FlexCAN_IsFDAvailable) @06d3f540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:566398813 (estimated locally) body optimize_size
  Called by: FlexCAN_GetPayloadSize.constprop/108 (1073741824 (estimated locally),1.00 per call) FlexCAN_Init/48 (37904965 (estimated locally),0.33 per call) 
  Calls: 
FlexCAN_EnableRxFifo/49 (FlexCAN_EnableRxFifo) @06d3f2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:236223200 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_GetMaxMbNum/42 (236223200 (estimated locally),1.00 per call) 
FlexCAN_Init/48 (FlexCAN_Init) @06d35ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:114863532 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_IsFDAvailable/50 (37904965 (estimated locally),0.33 per call) FlexCAN_ClearRAM/39 (37904965 (estimated locally),0.33 per call) OsIf_GetElapsed/75 (1014686025 (estimated locally),8.83 per call) OsIf_GetCounter/74 (114863532 (estimated locally),1.00 per call) OsIf_MicrosToTicks/71 (114863532 (estimated locally),1.00 per call) 
FlexCAN_SetErrIntCmd/47 (FlexCAN_SetErrIntCmd) @06d35e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Can_CAN_EXCLUSIVE_AREA_06/83 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Can_CAN_EXCLUSIVE_AREA_06/82 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_Disable/46 (FlexCAN_Disable) @06d357e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:276913048 (estimated locally) body optimize_size
  Called by: 
  Calls: OsIf_GetElapsed/75 (1014686024 (estimated locally),3.66 per call) OsIf_GetCounter/74 (114863532 (estimated locally),0.41 per call) SchM_Exit_Can_CAN_EXCLUSIVE_AREA_05/81 (114863532 (estimated locally),0.41 per call) SchM_Enter_Can_CAN_EXCLUSIVE_AREA_05/80 (114863532 (estimated locally),0.41 per call) OsIf_MicrosToTicks/71 (276913048 (estimated locally),1.00 per call) 
FlexCAN_ExitFreezeMode/45 (FlexCAN_ExitFreezeMode) @06d35460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:114863532 (estimated locally) body optimize_size
  Called by: 
  Calls: OsIf_GetElapsed/75 (1014686025 (estimated locally),8.83 per call) OsIf_GetCounter/74 (114863532 (estimated locally),1.00 per call) SchM_Exit_Can_CAN_EXCLUSIVE_AREA_04/79 (114863532 (estimated locally),1.00 per call) SchM_Enter_Can_CAN_EXCLUSIVE_AREA_04/78 (114863532 (estimated locally),1.00 per call) OsIf_MicrosToTicks/71 (114863532 (estimated locally),1.00 per call) 
FlexCAN_Enable/44 (FlexCAN_Enable) @06d35000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:114863532 (estimated locally) body optimize_size
  Called by: 
  Calls: OsIf_GetElapsed/75 (1014686025 (estimated locally),8.83 per call) OsIf_GetCounter/74 (114863532 (estimated locally),1.00 per call) SchM_Exit_Can_CAN_EXCLUSIVE_AREA_03/77 (114863532 (estimated locally),1.00 per call) SchM_Enter_Can_CAN_EXCLUSIVE_AREA_03/76 (114863532 (estimated locally),1.00 per call) OsIf_MicrosToTicks/71 (114863532 (estimated locally),1.00 per call) 
FlexCAN_EnterFreezeMode/43 (FlexCAN_EnterFreezeMode) @06d15b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:114863532 (estimated locally) body optimize_size
  Called by: 
  Calls: OsIf_GetElapsed/75 (1014686025 (estimated locally),8.83 per call) OsIf_GetCounter/74 (114863532 (estimated locally),1.00 per call) SchM_Exit_Can_CAN_EXCLUSIVE_AREA_02/73 (114863532 (estimated locally),1.00 per call) SchM_Enter_Can_CAN_EXCLUSIVE_AREA_02/72 (114863532 (estimated locally),1.00 per call) OsIf_MicrosToTicks/71 (114863532 (estimated locally),1.00 per call) 
FlexCAN_GetMaxMbNum/42 (FlexCAN_GetMaxMbNum) @06d152a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: flexcanBase.6991/69 (read)maxMbNum.6992/70 (read)
  Referring: 
  Availability: available
  Function flags: count:268435456 (estimated locally) body optimize_size
  Called by: FlexCAN_SetMaxMsgBuffNum/63 (69793 (estimated locally),0.32 per call) FlexCAN_EnableRxFifo/49 (236223200 (estimated locally),1.00 per call) FlexCAN_ClearRAM/39 (118111600 (estimated locally),1.00 per call) 
  Calls: 
FlexCAN_GetMsgBuffRegion/41 (FlexCAN_GetMsgBuffRegion) @06d15d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:566398813 (estimated locally) body optimize_size
  Called by: FlexCAN_SetMaxMsgBuffNum/63 (183524 (estimated locally),0.85 per call) FlexCAN_SetMaxMsgBuffNum/63 (107374 (estimated locally),0.50 per call) FlexCAN_GetMsgBuff/61 (214748 (estimated locally),1.00 per call) FlexCAN_GetMsgBuffTimestamp/60 (1073741824 (estimated locally),1.00 per call) FlexCAN_SetRxMsgBuff/59 (214748 (estimated locally),1.00 per call) FlexCAN_LockRxMsgBuff/54 (1073741824 (estimated locally),1.00 per call) 
  Calls: FlexCAN_GetPayloadSize.constprop/108 (536870913 (estimated locally),0.95 per call) 
FlexCAN_ComputePayloadSize/40 (FlexCAN_ComputePayloadSize) @06d15a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: FlexCAN_ReadRxFifo/66 (214748 (estimated locally),1.00 per call) FlexCAN_SetTxMsgBuff/62 (75162 (estimated locally),0.35 per call) FlexCAN_GetMsgBuff/61 (214748 (estimated locally),1.00 per call) 
  Calls: FlexCAN_ComputePayloadSize.part.0/93 (536870912 (estimated locally),0.50 per call) 
FlexCAN_ClearRAM/39 (FlexCAN_ClearRAM) @06d157e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:118111600 (estimated locally) body local optimize_size
  Called by: FlexCAN_Init/48 (37904965 (estimated locally),0.33 per call) 
  Calls: FlexCAN_GetMaxMbNum/42 (118111600 (estimated locally),1.00 per call) 
FlexCAN_Ip_au32ImaskBuff/37 (FlexCAN_Ip_au32ImaskBuff) @0681e1b0
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: FlexCAN_SetMsgBuffIntCmd/55 (write)FLEXCAN_ClearMsgBuffIntCmd/56 (read)FlexCAN_SetMsgBuffIntCmd/55 (read)FlexCAN_SetMsgBuffIntCmd/55 (read)FlexCAN_SetMsgBuffIntCmd/55 (write)FlexCAN_SetMsgBuffIntCmd/55 (read)FlexCAN_SetMsgBuffIntCmd/55 (read)FLEXCAN_ClearMsgBuffIntCmd/56 (write)FlexCAN_EnableInterrupts/58 (read)
  Availability: available
  Varpool flags:

;; Function FlexCAN_GetMaxMbNum (FlexCAN_GetMaxMbNum, funcdef_no=41, decl_uid=6656, cgraph_uid=42, symbol_order=42)

Modification phase of node FlexCAN_GetMaxMbNum/42
FlexCAN_GetMaxMbNum (const struct FLEXCAN_Type * base)
{
  static const uint32 maxMbNum[3] = {32, 16, 16};
  static struct FLEXCAN_Type * const flexcanBase[3] = {1073889280B, 1073893376B, 1073917952B};
  uint32 ret;
  uint32 i;
  struct FLEXCAN_Type * _1;

  <bb 2> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 6>; [100.00%]

  <bb 3> [local count: 805306369]:
  # DEBUG BEGIN_STMT
  _1 = flexcanBase[i_2];
  if (_1 == base_7(D))
    goto <bb 4>; [30.00%]
  else
    goto <bb 5>; [70.00%]

  <bb 4> [local count: 241591910]:
  # DEBUG BEGIN_STMT
  ret_8 = maxMbNum[i_2];
  # DEBUG ret => ret_8

  <bb 5> [local count: 805306368]:
  # ret_3 = PHI <ret_4(3), ret_8(4)>
  # DEBUG ret => ret_3
  # DEBUG BEGIN_STMT
  i_9 = i_2 + 1;
  # DEBUG i => i_9

  <bb 6> [local count: 1073741824]:
  # i_2 = PHI <0(2), i_9(5)>
  # ret_4 = PHI <0(2), ret_3(5)>
  # DEBUG ret => ret_4
  # DEBUG i => i_2
  # DEBUG BEGIN_STMT
  if (i_2 != 3)
    goto <bb 3>; [75.00%]
  else
    goto <bb 7>; [25.00%]

  <bb 7> [local count: 268435456]:
  # ret_5 = PHI <ret_4(6)>
  # DEBUG BEGIN_STMT
  return ret_5;

}



;; Function FlexCAN_EnterFreezeMode (FlexCAN_EnterFreezeMode, funcdef_no=42, decl_uid=6566, cgraph_uid=43, symbol_order=43)

Modification phase of node FlexCAN_EnterFreezeMode/43
FlexCAN_EnterFreezeMode (struct FLEXCAN_Type * base)
{
  Flexcan_Ip_StatusType returnResult;
  uint32 uS2Ticks;
  uint32 timeElapsed;
  uint32 timeStart;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  signed int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _11;
  long unsigned int _30;

  <bb 2> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  timeStart = 0;
  # DEBUG BEGIN_STMT
  # DEBUG timeElapsed => 0
  # DEBUG BEGIN_STMT
  uS2Ticks_20 = OsIf_MicrosToTicks (10000, 0);
  # DEBUG uS2Ticks => uS2Ticks_20
  # DEBUG BEGIN_STMT
  # DEBUG returnResult => 0
  # DEBUG BEGIN_STMT
  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_02 ();
  # DEBUG BEGIN_STMT
  _1 ={v} base_22(D)->MCR;
  _2 = _1 | 1073741824;
  base_22(D)->MCR ={v} _2;
  # DEBUG BEGIN_STMT
  _3 ={v} base_22(D)->MCR;
  _4 = _3 | 268435456;
  base_22(D)->MCR ={v} _4;
  # DEBUG BEGIN_STMT
  _5 ={v} base_22(D)->MCR;
  _6 = (signed int) _5;
  if (_6 < 0)
    goto <bb 3>; [41.00%]
  else
    goto <bb 4>; [59.00%]

  <bb 3> [local count: 47094048]:
  # DEBUG BEGIN_STMT
  _7 ={v} base_22(D)->MCR;
  _8 = _7 & 2147483647;
  base_22(D)->MCR ={v} _8;

  <bb 4> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_02 ();
  # DEBUG BEGIN_STMT
  _9 = OsIf_GetCounter (0);
  timeStart = _9;
  # DEBUG BEGIN_STMT
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 1014686025]:
  # DEBUG BEGIN_STMT
  _30 = OsIf_GetElapsed (&timeStart, 0);
  timeElapsed_31 = timeElapsed_12 + _30;
  # DEBUG timeElapsed => timeElapsed_31
  # DEBUG BEGIN_STMT
  if (uS2Ticks_20 <= timeElapsed_31)
    goto <bb 7>; [5.50%]
  else
    goto <bb 8>; [94.50%]

  <bb 8> [local count: 958878293]:

  <bb 6> [local count: 1073741824]:
  # timeElapsed_12 = PHI <0(4), timeElapsed_31(8)>
  # DEBUG timeElapsed => timeElapsed_12
  # DEBUG BEGIN_STMT
  _10 ={v} base_22(D)->MCR;
  _11 = _10 & 16777216;
  if (_11 == 0)
    goto <bb 5>; [94.50%]
  else
    goto <bb 7>; [5.50%]

  <bb 7> [local count: 114863532]:
  # returnResult_13 = PHI <3(5), 0(6)>
  # DEBUG returnResult => returnResult_13
  # DEBUG BEGIN_STMT
  timeStart ={v} {CLOBBER};
  return returnResult_13;

}



;; Function FlexCAN_Enable (FlexCAN_Enable, funcdef_no=43, decl_uid=6579, cgraph_uid=44, symbol_order=44)

Modification phase of node FlexCAN_Enable/44
FlexCAN_Enable (struct FLEXCAN_Type * base)
{
  Flexcan_Ip_StatusType returnValue;
  uint32 uS2Ticks;
  uint32 timeElapsed;
  uint32 timeStart;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _21;

  <bb 2> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  timeStart = 0;
  # DEBUG BEGIN_STMT
  # DEBUG timeElapsed => 0
  # DEBUG BEGIN_STMT
  uS2Ticks_13 = OsIf_MicrosToTicks (10000, 0);
  # DEBUG uS2Ticks => uS2Ticks_13
  # DEBUG BEGIN_STMT
  # DEBUG returnValue => 0
  # DEBUG BEGIN_STMT
  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_03 ();
  # DEBUG BEGIN_STMT
  _1 ={v} base_15(D)->MCR;
  _2 = _1 & 2147483647;
  base_15(D)->MCR ={v} _2;
  # DEBUG BEGIN_STMT
  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_03 ();
  # DEBUG BEGIN_STMT
  _3 = OsIf_GetCounter (0);
  timeStart = _3;
  # DEBUG BEGIN_STMT
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 1014686025]:
  # DEBUG BEGIN_STMT
  _21 = OsIf_GetElapsed (&timeStart, 0);
  timeElapsed_22 = timeElapsed_6 + _21;
  # DEBUG timeElapsed => timeElapsed_22
  # DEBUG BEGIN_STMT
  if (uS2Ticks_13 <= timeElapsed_22)
    goto <bb 5>; [5.50%]
  else
    goto <bb 6>; [94.50%]

  <bb 6> [local count: 958878293]:

  <bb 4> [local count: 1073741824]:
  # timeElapsed_6 = PHI <0(2), timeElapsed_22(6)>
  # DEBUG timeElapsed => timeElapsed_6
  # DEBUG BEGIN_STMT
  _4 ={v} base_15(D)->MCR;
  _5 = _4 & 16777216;
  if (_5 == 0)
    goto <bb 3>; [94.50%]
  else
    goto <bb 5>; [5.50%]

  <bb 5> [local count: 114863532]:
  # returnValue_7 = PHI <3(3), 0(4)>
  # DEBUG returnValue => returnValue_7
  # DEBUG BEGIN_STMT
  timeStart ={v} {CLOBBER};
  return returnValue_7;

}



;; Function FlexCAN_ExitFreezeMode (FlexCAN_ExitFreezeMode, funcdef_no=44, decl_uid=6575, cgraph_uid=45, symbol_order=45)

Modification phase of node FlexCAN_ExitFreezeMode/45
FlexCAN_ExitFreezeMode (struct FLEXCAN_Type * base)
{
  Flexcan_Ip_StatusType returnValue;
  uint32 uS2Ticks;
  uint32 timeElapsed;
  uint32 timeStart;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _24;

  <bb 2> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  timeStart = 0;
  # DEBUG BEGIN_STMT
  # DEBUG timeElapsed => 0
  # DEBUG BEGIN_STMT
  uS2Ticks_15 = OsIf_MicrosToTicks (10000, 0);
  # DEBUG uS2Ticks => uS2Ticks_15
  # DEBUG BEGIN_STMT
  # DEBUG returnValue => 0
  # DEBUG BEGIN_STMT
  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_04 ();
  # DEBUG BEGIN_STMT
  _1 ={v} base_17(D)->MCR;
  _2 = _1 & 4026531839;
  base_17(D)->MCR ={v} _2;
  # DEBUG BEGIN_STMT
  _3 ={v} base_17(D)->MCR;
  _4 = _3 & 3221225471;
  base_17(D)->MCR ={v} _4;
  # DEBUG BEGIN_STMT
  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_04 ();
  # DEBUG BEGIN_STMT
  _5 = OsIf_GetCounter (0);
  timeStart = _5;
  # DEBUG BEGIN_STMT
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 1014686025]:
  # DEBUG BEGIN_STMT
  _24 = OsIf_GetElapsed (&timeStart, 0);
  timeElapsed_25 = timeElapsed_8 + _24;
  # DEBUG timeElapsed => timeElapsed_25
  # DEBUG BEGIN_STMT
  if (uS2Ticks_15 <= timeElapsed_25)
    goto <bb 5>; [5.50%]
  else
    goto <bb 6>; [94.50%]

  <bb 6> [local count: 958878293]:

  <bb 4> [local count: 1073741824]:
  # timeElapsed_8 = PHI <0(2), timeElapsed_25(6)>
  # DEBUG timeElapsed => timeElapsed_8
  # DEBUG BEGIN_STMT
  _6 ={v} base_17(D)->MCR;
  _7 = _6 & 16777216;
  if (_7 != 0)
    goto <bb 3>; [94.50%]
  else
    goto <bb 5>; [5.50%]

  <bb 5> [local count: 114863532]:
  # returnValue_9 = PHI <3(3), 0(4)>
  # DEBUG returnValue => returnValue_9
  # DEBUG BEGIN_STMT
  timeStart ={v} {CLOBBER};
  return returnValue_9;

}



;; Function FlexCAN_Disable (FlexCAN_Disable, funcdef_no=45, decl_uid=6577, cgraph_uid=46, symbol_order=46)

Modification phase of node FlexCAN_Disable/46
FlexCAN_Disable (struct FLEXCAN_Type * base)
{
  Flexcan_Ip_StatusType returnResult;
  uint32 uS2Ticks;
  uint32 timeElapsed;
  uint32 timeStart;
  long unsigned int _1;
  signed int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _23;

  <bb 2> [local count: 276913048]:
  # DEBUG BEGIN_STMT
  timeStart = 0;
  # DEBUG BEGIN_STMT
  # DEBUG timeElapsed => 0
  # DEBUG BEGIN_STMT
  uS2Ticks_15 = OsIf_MicrosToTicks (10000, 0);
  # DEBUG uS2Ticks => uS2Ticks_15
  # DEBUG BEGIN_STMT
  # DEBUG returnResult => 0
  # DEBUG BEGIN_STMT
  _1 ={v} base_16(D)->MCR;
  _2 = (signed int) _1;
  if (_2 >= 0)
    goto <bb 3>; [41.48%]
  else
    goto <bb 6>; [58.52%]

  <bb 3> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_05 ();
  # DEBUG BEGIN_STMT
  _3 ={v} base_16(D)->MCR;
  _4 = _3 | 2147483648;
  base_16(D)->MCR ={v} _4;
  # DEBUG BEGIN_STMT
  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_05 ();
  # DEBUG BEGIN_STMT
  _5 = OsIf_GetCounter (0);
  timeStart = _5;
  # DEBUG BEGIN_STMT
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 1014686024]:
  # DEBUG BEGIN_STMT
  _23 = OsIf_GetElapsed (&timeStart, 0);
  timeElapsed_24 = timeElapsed_8 + _23;
  # DEBUG timeElapsed => timeElapsed_24
  # DEBUG BEGIN_STMT
  if (uS2Ticks_15 <= timeElapsed_24)
    goto <bb 6>; [5.50%]
  else
    goto <bb 7>; [94.50%]

  <bb 7> [local count: 958878294]:

  <bb 5> [local count: 1073741824]:
  # timeElapsed_8 = PHI <0(3), timeElapsed_24(7)>
  # DEBUG timeElapsed => timeElapsed_8
  # DEBUG BEGIN_STMT
  _6 ={v} base_16(D)->MCR;
  _7 = _6 & 1048576;
  if (_7 == 0)
    goto <bb 4>; [94.50%]
  else
    goto <bb 6>; [5.50%]

  <bb 6> [local count: 276913047]:
  # returnResult_9 = PHI <0(2), 3(4), 0(5)>
  # DEBUG returnResult => returnResult_9
  # DEBUG BEGIN_STMT
  timeStart ={v} {CLOBBER};
  return returnResult_9;

}



;; Function FlexCAN_SetErrIntCmd (FlexCAN_SetErrIntCmd, funcdef_no=46, decl_uid=6564, cgraph_uid=47, symbol_order=47)

Modification phase of node FlexCAN_SetErrIntCmd/47
FlexCAN_SetErrIntCmd (struct FLEXCAN_Type * base, flexcan_int_type_t errType, boolean enable)
{
  uint32 temp;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _11;
  unsigned int _12;
  long unsigned int _13;
  long unsigned int _14;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG temp => errType_17(D)
  # DEBUG BEGIN_STMT
  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_06 ();
  # DEBUG BEGIN_STMT
  if (enable_20(D) != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  if (errType_17(D) == 16385)
    goto <bb 4>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 4> [local count: 182536110]:
  # DEBUG BEGIN_STMT
  _1 ={v} base_21(D)->CTRL2;
  _2 = _1 | 2147483648;
  base_21(D)->CTRL2 ={v} _2;
  # DEBUG BEGIN_STMT
  goto <bb 13>; [100.00%]

  <bb 5> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  if (errType_17(D) == 1024)
    goto <bb 7>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 6> [local count: 233860969]:
  if (errType_17(D) == 2048)
    goto <bb 7>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 7> [local count: 199986562]:
  # DEBUG BEGIN_STMT
  _3 ={v} base_21(D)->MCR;
  _4 = _3 | 2097152;
  base_21(D)->MCR ={v} _4;

  <bb 8> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  _5 ={v} base_21(D)->CTRL1;
  _6 = _5 | errType_17(D);
  base_21(D)->CTRL1 ={v} _6;
  goto <bb 13>; [100.00%]

  <bb 9> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  if (errType_17(D) == 16385)
    goto <bb 10>; [34.00%]
  else
    goto <bb 11>; [66.00%]

  <bb 10> [local count: 182536110]:
  # DEBUG BEGIN_STMT
  _7 ={v} base_21(D)->CTRL2;
  _8 = _7 & 2147483647;
  base_21(D)->CTRL2 ={v} _8;
  # DEBUG BEGIN_STMT
  goto <bb 13>; [100.00%]

  <bb 11> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  _9 ={v} base_21(D)->CTRL1;
  _10 = ~errType_17(D);
  _11 = _9 & _10;
  base_21(D)->CTRL1 ={v} _11;
  # DEBUG BEGIN_STMT
  temp_23 ={v} base_21(D)->CTRL1;
  # DEBUG temp => temp_23
  # DEBUG BEGIN_STMT
  _12 = temp_23 & 3072;
  if (_12 == 0)
    goto <bb 12>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 12> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  _13 ={v} base_21(D)->MCR;
  _14 = _13 & 4292870143;
  base_21(D)->MCR ={v} _14;

  <bb 13> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_06 ();
  return;

}



;; Function FlexCAN_EnableRxFifo (FlexCAN_EnableRxFifo, funcdef_no=48, decl_uid=6602, cgraph_uid=49, symbol_order=49)

Modification phase of node FlexCAN_EnableRxFifo/49
FlexCAN_EnableRxFifo (struct FLEXCAN_Type * base, uint32 numOfFilters)
{
  Flexcan_Ip_StatusType stat;
  uint32 i;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _17;

  <bb 2> [local count: 236223200]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = FlexCAN_GetMaxMbNum (base_15(D));
  # DEBUG noOfMbx => (uint16) _1
  # DEBUG BEGIN_STMT
  # DEBUG stat => 0
  # DEBUG BEGIN_STMT
  _2 ={v} base_15(D)->MCR;
  _3 = _2 & 2048;
  if (_3 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 118111600]:
  # DEBUG stat => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _4 ={v} base_15(D)->MCR;
  _5 = _4 | 536870912;
  base_15(D)->MCR ={v} _5;
  # DEBUG BEGIN_STMT
  _6 ={v} base_15(D)->CTRL2;
  _7 = _6 & 4043309055;
  _8 = numOfFilters_19(D) << 24;
  _9 = _8 & 251658240;
  _10 = _7 | _9;
  base_15(D)->CTRL2 ={v} _10;
  # DEBUG BEGIN_STMT
  base_15(D)->RXFGMASK ={v} 4294967295;
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  base_15(D)->RXIMR[i_11] ={v} 536870911;
  # DEBUG BEGIN_STMT
  i_23 = i_11 + 1;
  # DEBUG i => i_23

  <bb 5> [local count: 1073741824]:
  # i_11 = PHI <0(3), i_23(4)>
  # DEBUG i => i_11
  # DEBUG BEGIN_STMT
  _17 = _1 & 65535;
  if (i_11 < _17)
    goto <bb 4>; [89.00%]
  else
    goto <bb 6>; [11.00%]

  <bb 6> [local count: 236223201]:
  # stat_16 = PHI <1(2), 0(5)>
  # DEBUG stat => NULL
  # DEBUG BEGIN_STMT
  return stat_16;

}



;; Function FlexCAN_IsFDAvailable (FlexCAN_IsFDAvailable, funcdef_no=49, decl_uid=6619, cgraph_uid=50, symbol_order=50)

Modification phase of node FlexCAN_IsFDAvailable/50
FlexCAN_IsFDAvailable (const struct FLEXCAN_Type * base)
{
  boolean returnValue;
  uint32 i;

  <bb 2> [local count: 566398813]:
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG returnValue => 0
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  if (base_4(D) == 1073889280B)
    goto <bb 5>; [5.50%]
  else
    goto <bb 6>; [94.50%]

  <bb 6> [local count: 507343012]:

  <bb 4> [local count: 1073741824]:
  # i_1 = PHI <0(2), 1(6)>
  # DEBUG i => i_1
  # DEBUG BEGIN_STMT
  if (i_1 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 566398813]:
  # returnValue_2 = PHI <1(3), 0(4)>
  # DEBUG returnValue => returnValue_2
  # DEBUG BEGIN_STMT
  return returnValue_2;

}



;; Function FlexCAN_Init (FlexCAN_Init, funcdef_no=47, decl_uid=6642, cgraph_uid=48, symbol_order=48)

Modification phase of node FlexCAN_Init/48
FlexCAN_Init (struct FLEXCAN_Type * base)
{
  Flexcan_Ip_StatusType returnResult;
  uint32 uS2Ticks;
  uint32 timeElapsed;
  uint32 timeStart;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  _Bool _8;
  long unsigned int _23;

  <bb 2> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  timeStart = 0;
  # DEBUG BEGIN_STMT
  # DEBUG timeElapsed => 0
  # DEBUG BEGIN_STMT
  uS2Ticks_17 = OsIf_MicrosToTicks (10000, 0);
  # DEBUG uS2Ticks => uS2Ticks_17
  # DEBUG BEGIN_STMT
  # DEBUG returnResult => 0
  # DEBUG BEGIN_STMT
  _1 ={v} base_18(D)->MCR;
  _2 = _1 | 33554432;
  base_18(D)->MCR ={v} _2;
  # DEBUG BEGIN_STMT
  _3 = OsIf_GetCounter (0);
  timeStart = _3;
  # DEBUG BEGIN_STMT
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 1014686025]:
  # DEBUG BEGIN_STMT
  _23 = OsIf_GetElapsed (&timeStart, 0);
  timeElapsed_24 = timeElapsed_9 + _23;
  # DEBUG timeElapsed => timeElapsed_24
  # DEBUG BEGIN_STMT
  if (uS2Ticks_17 <= timeElapsed_24)
    goto <bb 5>; [5.50%]
  else
    goto <bb 9>; [94.50%]

  <bb 9> [local count: 958878293]:

  <bb 4> [local count: 1073741824]:
  # timeElapsed_9 = PHI <0(2), timeElapsed_24(9)>
  # DEBUG timeElapsed => timeElapsed_9
  # DEBUG BEGIN_STMT
  _4 ={v} base_18(D)->MCR;
  _5 = _4 & 33554432;
  if (_5 != 0)
    goto <bb 3>; [94.50%]
  else
    goto <bb 5>; [5.50%]

  <bb 5> [local count: 114863532]:
  # returnResult_10 = PHI <3(3), 0(4)>
  # DEBUG returnResult => returnResult_10
  # DEBUG BEGIN_STMT
  if (returnResult_10 == 0)
    goto <bb 6>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 6> [local count: 37904965]:
  # DEBUG BEGIN_STMT
  _6 ={v} base_18(D)->MCR;
  _7 = _6 | 4096;
  base_18(D)->MCR ={v} _7;
  # DEBUG BEGIN_STMT
  FlexCAN_ClearRAM (base_18(D));
  # DEBUG BEGIN_STMT
  base_18(D)->RXMGMASK ={v} 4294967295;
  # DEBUG BEGIN_STMT
  base_18(D)->RX14MASK ={v} 4294967295;
  # DEBUG BEGIN_STMT
  base_18(D)->RX15MASK ={v} 4294967295;
  # DEBUG BEGIN_STMT
  base_18(D)->IMASK1 ={v} 0;
  # DEBUG BEGIN_STMT
  base_18(D)->IFLAG1 ={v} 4294967295;
  # DEBUG BEGIN_STMT
  base_18(D)->ESR1 ={v} 3866630;
  # DEBUG BEGIN_STMT
  base_18(D)->CTRL1 ={v} 0;
  # DEBUG BEGIN_STMT
  base_18(D)->CTRL2 ={v} 1048576;
  # DEBUG BEGIN_STMT
  base_18(D)->CBT ={v} 0;
  # DEBUG BEGIN_STMT
  _8 = FlexCAN_IsFDAvailable (base_18(D));
  if (_8 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 18952483]:
  # DEBUG BEGIN_STMT
  base_18(D)->FDCBT ={v} 0;
  # DEBUG BEGIN_STMT
  base_18(D)->FDCTRL ={v} 2147500288;

  <bb 8> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  timeStart ={v} {CLOBBER};
  return returnResult_10;

}



;; Function FlexCAN_GetMsgBuffRegion (FlexCAN_GetMsgBuffRegion, funcdef_no=40, decl_uid=6724, cgraph_uid=41, symbol_order=41)

Modification phase of node FlexCAN_GetMsgBuffRegion/41
FlexCAN_GetMsgBuffRegion (const struct FLEXCAN_Type * base, uint32 msgBuffIdx)
{
  volatile uint32 * pAddressRet;
  volatile uint32 * RAM;
  uint8 payload_size;
  uint32 mb_index;
  uint8 maxMbNum;
  uint8 i;
  uint32 msgBuffIdxBackup;
  uint32 ramBlockOffset;
  uint8 mb_size;
  long unsigned int base.0_1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _6;
  long unsigned int _7;
  unsigned char _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _11;
  long unsigned int _21;

  <bb 2> [local count: 566398813]:
  # DEBUG BEGIN_STMT
  # DEBUG arbitration_field_size => 8
  # DEBUG BEGIN_STMT
  # DEBUG mb_size => 0
  # DEBUG BEGIN_STMT
  # DEBUG ramBlockSize => 512
  # DEBUG BEGIN_STMT
  # DEBUG ramBlockOffset => 0
  # DEBUG BEGIN_STMT
  # DEBUG msgBuffIdxBackup => msgBuffIdx_23(D)
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  # DEBUG BEGIN_STMT
  # DEBUG maxMbNum => 0
  # DEBUG BEGIN_STMT
  # DEBUG mb_index => 0
  # DEBUG BEGIN_STMT
  # DEBUG payload_size => 0
  # DEBUG BEGIN_STMT
  base.0_1 = (long unsigned int) base_24(D);
  _2 = base.0_1 + 128;
  RAM_25 = (volatile uint32 *) _2;
  # DEBUG RAM => RAM_25
  # DEBUG BEGIN_STMT
  # DEBUG pAddressRet => 0B
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 5>; [100.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  payload_size_28 = FlexCAN_GetPayloadSize (base_24(D), 0);
  # DEBUG payload_size => payload_size_28
  # DEBUG BEGIN_STMT
  mb_size_29 = payload_size_28 + 8;
  # DEBUG mb_size => mb_size_29
  # DEBUG BEGIN_STMT
  _3 = (long unsigned int) mb_size_29;
  _4 = 512 / _3;
  maxMbNum_30 = (uint8) _4;
  # DEBUG maxMbNum => maxMbNum_30
  # DEBUG BEGIN_STMT
  _21 = _4 & 255;
  if (msgBuffIdxBackup_15 < _21)
    goto <bb 6>; [5.50%]
  else
    goto <bb 4>; [94.50%]

  <bb 4> [local count: 507343012]:
  # DEBUG BEGIN_STMT
  ramBlockOffset_31 = ramBlockOffset_14 + 128;
  # DEBUG ramBlockOffset => ramBlockOffset_31
  # DEBUG BEGIN_STMT
  msgBuffIdxBackup_32 = msgBuffIdxBackup_15 - _21;
  # DEBUG msgBuffIdxBackup => msgBuffIdxBackup_32
  # DEBUG BEGIN_STMT
  # DEBUG i => 1

  <bb 5> [local count: 1073741824]:
  # mb_size_12 = PHI <0(2), mb_size_29(4)>
  # ramBlockOffset_14 = PHI <0(2), ramBlockOffset_31(4)>
  # msgBuffIdxBackup_15 = PHI <msgBuffIdx_23(D)(2), msgBuffIdxBackup_32(4)>
  # i_16 = PHI <0(2), 1(4)>
  # maxMbNum_17 = PHI <0(2), maxMbNum_30(4)>
  # DEBUG maxMbNum => maxMbNum_17
  # DEBUG i => i_16
  # DEBUG msgBuffIdxBackup => msgBuffIdxBackup_15
  # DEBUG ramBlockOffset => ramBlockOffset_14
  # DEBUG mb_size => mb_size_12
  # DEBUG BEGIN_STMT
  if (i_16 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 6> [local count: 566398813]:
  # mb_size_13 = PHI <mb_size_29(3), mb_size_12(5)>
  # maxMbNum_18 = PHI <maxMbNum_30(3), maxMbNum_17(5)>
  # ramBlockOffset_5 = PHI <ramBlockOffset_14(3), ramBlockOffset_14(5)>
  # msgBuffIdxBackup_22 = PHI <msgBuffIdxBackup_15(3), msgBuffIdxBackup_15(5)>
  # DEBUG maxMbNum => maxMbNum_18
  # DEBUG mb_size => mb_size_13
  # DEBUG BEGIN_STMT
  _6 = (long unsigned int) maxMbNum_18;
  _7 = msgBuffIdxBackup_22 % _6;
  _8 = mb_size_13 >> 2;
  _9 = (long unsigned int) _8;
  _10 = _7 * _9;
  mb_index_33 = ramBlockOffset_5 + _10;
  # DEBUG mb_index => mb_index_33
  # DEBUG BEGIN_STMT
  _11 = mb_index_33 * 4;
  pAddressRet_34 = RAM_25 + _11;
  # DEBUG pAddressRet => pAddressRet_34
  # DEBUG BEGIN_STMT
  return pAddressRet_34;

}



;; Function FlexCAN_SetPayloadSize (FlexCAN_SetPayloadSize, funcdef_no=50, decl_uid=6622, cgraph_uid=51, symbol_order=51)

Modification phase of node FlexCAN_SetPayloadSize/51
FlexCAN_SetPayloadSize (struct FLEXCAN_Type * base, const struct Flexcan_Ip_PayloadSizeType * payloadSize)
{
  volatile boolean x;
  uint32 tmp;
  <unnamed type> _1;
  _Bool _2;
  <unnamed type> _3;
  long unsigned int _4;
  int iftmp.3_5;
  long unsigned int _14;
  long unsigned int _15;
  long unsigned int _16;
  long unsigned int _17;
  _Bool x.4_18;

  <bb 2> [local count: 214748]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG base => base_8(D)
  # DEBUG INLINE_ENTRY FlexCAN_IsFDEnabled
  # DEBUG BEGIN_STMT
  _14 ={v} MEM[(const struct FLEXCAN_Type *)base_8(D)].MCR;
  _15 = _14 & 2048;
  # DEBUG base => NULL
  if (_15 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 107374]:
  _1 = payloadSize_9(D)->payloadBlock0;
  if (_1 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 4> [local count: 53687]:

  <bb 5> [local count: 214748]:
  # iftmp.3_5 = PHI <1(3), 0(4), 1(2)>
  _2 = (_Bool) iftmp.3_5;
  x ={v} _2;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.4_18 ={v} x;
  if (x.4_18 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 10> [local count: 107374]:

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 11> [local count: 1073741824]:
  goto <bb 6>; [100.00%]

  <bb 7> [local count: 107374]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  # DEBUG base => base_8(D)
  # DEBUG INLINE_ENTRY FlexCAN_IsFDEnabled
  # DEBUG BEGIN_STMT
  _16 ={v} MEM[(const struct FLEXCAN_Type *)base_8(D)].MCR;
  _17 = _16 & 2048;
  # DEBUG base => NULL
  if (_17 != 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 53687]:
  # DEBUG BEGIN_STMT
  tmp_10 ={v} base_8(D)->FDCTRL;
  # DEBUG tmp => tmp_10
  # DEBUG BEGIN_STMT
  tmp_11 = tmp_10 & 4294770687;
  # DEBUG tmp => tmp_11
  # DEBUG BEGIN_STMT
  _3 = payloadSize_9(D)->payloadBlock0;
  _4 = _3 << 16;
  tmp_12 = _4 | tmp_11;
  # DEBUG tmp => tmp_12
  # DEBUG BEGIN_STMT
  base_8(D)->FDCTRL ={v} tmp_12;

  <bb 9> [local count: 107374]:
  return;

}



;; Function FlexCAN_GetMbPayloadSize (FlexCAN_GetMbPayloadSize, funcdef_no=52, decl_uid=6640, cgraph_uid=53, symbol_order=53)

Modification phase of node FlexCAN_GetMbPayloadSize/53
FlexCAN_GetMbPayloadSize (const struct FLEXCAN_Type * base, uint32 maxMsgBuffNum)
{
  uint8 mb_size;
  uint8 i;
  uint8 maxMbBlockNum;
  uint8 can_real_payload;
  long unsigned int _1;
  long unsigned int _2;
  unsigned char _3;
  long unsigned int _4;

  <bb 2> [local count: 566398813]:
  # DEBUG BEGIN_STMT
  # DEBUG arbitration_field_size => 8
  # DEBUG BEGIN_STMT
  # DEBUG ramBlockSize => 512
  # DEBUG BEGIN_STMT
  # DEBUG can_real_payload => 8
  # DEBUG BEGIN_STMT
  # DEBUG maxMbBlockNum => 0
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  # DEBUG BEGIN_STMT
  # DEBUG mb_size => 0
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  can_real_payload_14 = FlexCAN_GetPayloadSize (base_12(D), 0);
  # DEBUG can_real_payload => can_real_payload_14
  # DEBUG BEGIN_STMT
  mb_size_15 = can_real_payload_14 + 8;
  # DEBUG mb_size => mb_size_15
  # DEBUG BEGIN_STMT
  _1 = (long unsigned int) mb_size_15;
  _2 = 512 / _1;
  _3 = (unsigned char) _2;
  maxMbBlockNum_16 = _3 + maxMbBlockNum_7;
  # DEBUG maxMbBlockNum => maxMbBlockNum_16
  # DEBUG BEGIN_STMT
  _4 = (long unsigned int) maxMbBlockNum_16;
  if (_4 > maxMsgBuffNum_17(D))
    goto <bb 5>; [5.50%]
  else
    goto <bb 6>; [94.50%]

  <bb 6> [local count: 507343012]:

  <bb 4> [local count: 1073741824]:
  # can_real_payload_5 = PHI <8(2), can_real_payload_14(6)>
  # maxMbBlockNum_7 = PHI <0(2), maxMbBlockNum_16(6)>
  # i_8 = PHI <0(2), 1(6)>
  # DEBUG i => i_8
  # DEBUG maxMbBlockNum => maxMbBlockNum_7
  # DEBUG can_real_payload => can_real_payload_5
  # DEBUG BEGIN_STMT
  if (i_8 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 566398813]:
  # can_real_payload_6 = PHI <can_real_payload_14(3), can_real_payload_5(4)>
  # DEBUG can_real_payload => can_real_payload_6
  # DEBUG BEGIN_STMT
  return can_real_payload_6;

}



;; Function FlexCAN_LockRxMsgBuff (FlexCAN_LockRxMsgBuff, funcdef_no=53, decl_uid=6582, cgraph_uid=54, symbol_order=54)

Modification phase of node FlexCAN_LockRxMsgBuff/54
FlexCAN_LockRxMsgBuff (const struct FLEXCAN_Type * base, uint32 msgBuffIdx)
{
  const uint32 * flexcan_mb;
  long unsigned int vol.6_6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  flexcan_mb_5 = FlexCAN_GetMsgBuffRegion (base_2(D), msgBuffIdx_3(D));
  # DEBUG flexcan_mb => flexcan_mb_5
  # DEBUG BEGIN_STMT
  vol.6_6 ={v} *flexcan_mb_5;
  return;

}



;; Function FlexCAN_SetMsgBuffIntCmd (FlexCAN_SetMsgBuffIntCmd, funcdef_no=54, decl_uid=6588, cgraph_uid=55, symbol_order=55)

Modification phase of node FlexCAN_SetMsgBuffIntCmd/55
FlexCAN_SetMsgBuffIntCmd (struct FLEXCAN_Type * base, uint8 u8Instance, uint32 msgBuffIdx, boolean enable, boolean bIsIntActive)
{
  uint32 temp;
  long unsigned int _1;
  int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG stat => 0
  # DEBUG BEGIN_STMT
  _1 = msgBuffIdx_13(D) & 31;
  temp_14 = 1 << _1;
  # DEBUG temp => temp_14
  # DEBUG BEGIN_STMT
  if (msgBuffIdx_13(D) <= 31)
    goto <bb 3>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  if (enable_16(D) != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 4> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_18 ();
  # DEBUG BEGIN_STMT
  _2 = (int) u8Instance_18(D);
  _3 ={v} FlexCAN_Ip_au32ImaskBuff[_2][0];
  _4 = _3 | temp_14;
  FlexCAN_Ip_au32ImaskBuff[_2][0] ={v} _4;
  # DEBUG BEGIN_STMT
  if (bIsIntActive_25(D) != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 134217728]:
  # DEBUG BEGIN_STMT
  _5 ={v} FlexCAN_Ip_au32ImaskBuff[_2][0];
  base_20(D)->IMASK1 ={v} _5;

  <bb 6> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_18 ();
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_18 ();
  # DEBUG BEGIN_STMT
  _6 = (int) u8Instance_18(D);
  _7 ={v} FlexCAN_Ip_au32ImaskBuff[_6][0];
  _8 = ~temp_14;
  _9 = _7 & _8;
  FlexCAN_Ip_au32ImaskBuff[_6][0] ={v} _9;
  # DEBUG BEGIN_STMT
  _10 ={v} FlexCAN_Ip_au32ImaskBuff[_6][0];
  base_20(D)->IMASK1 ={v} _10;
  # DEBUG BEGIN_STMT
  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_18 ();

  <bb 8> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function FLEXCAN_ClearMsgBuffIntCmd (FLEXCAN_ClearMsgBuffIntCmd, funcdef_no=55, decl_uid=6560, cgraph_uid=56, symbol_order=56)

Modification phase of node FLEXCAN_ClearMsgBuffIntCmd/56
FLEXCAN_ClearMsgBuffIntCmd (struct FLEXCAN_Type * pBase, uint8 u8Instance, uint32 mb_idx, boolean bIsIntActive)
{
  uint32 temp;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  int _4;
  long unsigned int _5;
  long unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = mb_idx_9(D) & 31;
  temp_10 = 1 << _1;
  # DEBUG temp => temp_10
  # DEBUG BEGIN_STMT
  if (mb_idx_9(D) <= 31)
    goto <bb 3>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_11 ();
  # DEBUG BEGIN_STMT
  _2 ={v} pBase_13(D)->IMASK1;
  _3 = ~temp_10;
  _4 = (int) u8Instance_14(D);
  _5 = _2 & _3;
  FlexCAN_Ip_au32ImaskBuff[_4][0] ={v} _5;
  # DEBUG BEGIN_STMT
  if (bIsIntActive_16(D) != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  _6 ={v} FlexCAN_Ip_au32ImaskBuff[_4][0];
  pBase_13(D)->IMASK1 ={v} _6;

  <bb 5> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_11 ();

  <bb 6> [local count: 1073741824]:
  return;

}



;; Function FlexCAN_DisableInterrupts (FlexCAN_DisableInterrupts, funcdef_no=56, decl_uid=6590, cgraph_uid=57, symbol_order=57)

Modification phase of node FlexCAN_DisableInterrupts/57
FlexCAN_DisableInterrupts (struct FLEXCAN_Type * pBase)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  pBase_2(D)->IMASK1 ={v} 0;
  return;

}



;; Function FlexCAN_EnableInterrupts (FlexCAN_EnableInterrupts, funcdef_no=57, decl_uid=6593, cgraph_uid=58, symbol_order=58)

Modification phase of node FlexCAN_EnableInterrupts/58
FlexCAN_EnableInterrupts (struct FLEXCAN_Type * pBase, uint8 u8Instance)
{
  int _1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) u8Instance_3(D);
  _2 ={v} FlexCAN_Ip_au32ImaskBuff[_1][0];
  pBase_5(D)->IMASK1 ={v} _2;
  return;

}



;; Function FlexCAN_SetRxMsgBuff (FlexCAN_SetRxMsgBuff, funcdef_no=58, decl_uid=6610, cgraph_uid=59, symbol_order=59)

Modification phase of node FlexCAN_SetRxMsgBuff/59
FlexCAN_SetRxMsgBuff (const struct FLEXCAN_Type * base, uint32 msgBuffIdx, const struct Flexcan_Ip_MsbuffCodeStatusType * cs, uint32 msgId)
{
  volatile boolean x;
  volatile uint32 * flexcan_mb;
  _Bool _1;
  <unnamed type> _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _11;
  long unsigned int _12;
  long unsigned int _13;
  long unsigned int _14;
  long unsigned int _15;
  long unsigned int _16;
  long unsigned int _17;
  long unsigned int _18;
  long unsigned int _19;
  long unsigned int _20;
  long unsigned int _21;
  long unsigned int _22;
  long unsigned int _23;
  long unsigned int _24;
  long unsigned int _25;
  long unsigned int _26;
  long unsigned int _27;
  _Bool x.4_49;

  <bb 2> [local count: 214748]:
  # DEBUG BEGIN_STMT
  flexcan_mb_35 = FlexCAN_GetMsgBuffRegion (base_32(D), msgBuffIdx_33(D));
  # DEBUG flexcan_mb => flexcan_mb_35
  # DEBUG BEGIN_STMT
  # DEBUG flexcan_mb_id => flexcan_mb_35 + 4
  # DEBUG BEGIN_STMT
  _1 = cs_36(D) != 0B;
  x ={v} _1;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.4_49 ={v} x;
  if (x.4_49 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 11> [local count: 107374]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 12> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 107374]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  *flexcan_mb_35 ={v} 0;
  # DEBUG BEGIN_STMT
  MEM[(volatile uint32 *)flexcan_mb_35 + 4B] ={v} 0;
  # DEBUG BEGIN_STMT
  _2 = cs_36(D)->msgIdType;
  if (_2 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 36507]:
  # DEBUG BEGIN_STMT
  _3 ={v} *flexcan_mb_35;
  _4 = _3 | 2097152;
  *flexcan_mb_35 ={v} _4;
  # DEBUG BEGIN_STMT
  _5 ={v} *flexcan_mb_35;
  _6 = _5 & 4290772991;
  *flexcan_mb_35 ={v} _6;
  # DEBUG BEGIN_STMT
  _7 ={v} MEM[(volatile uint32 *)flexcan_mb_35 + 4B];
  _8 = _7 & 3758096384;
  MEM[(volatile uint32 *)flexcan_mb_35 + 4B] ={v} _8;
  # DEBUG BEGIN_STMT
  _9 ={v} MEM[(volatile uint32 *)flexcan_mb_35 + 4B];
  _10 = msgId_42(D) & 536870911;
  _11 = _9 | _10;
  MEM[(volatile uint32 *)flexcan_mb_35 + 4B] ={v} _11;

  <bb 6> [local count: 107374]:
  # DEBUG BEGIN_STMT
  if (_2 == 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 53687]:
  # DEBUG BEGIN_STMT
  _12 ={v} *flexcan_mb_35;
  _13 = _12 & 4288675839;
  *flexcan_mb_35 ={v} _13;
  # DEBUG BEGIN_STMT
  _14 ={v} MEM[(volatile uint32 *)flexcan_mb_35 + 4B];
  _15 = _14 & 3758358527;
  MEM[(volatile uint32 *)flexcan_mb_35 + 4B] ={v} _15;
  # DEBUG BEGIN_STMT
  _16 ={v} MEM[(volatile uint32 *)flexcan_mb_35 + 4B];
  _17 = msgId_42(D) << 18;
  _18 = _17 & 536608768;
  _19 = _16 | _18;
  MEM[(volatile uint32 *)flexcan_mb_35 + 4B] ={v} _19;

  <bb 8> [local count: 107374]:
  # DEBUG BEGIN_STMT
  _20 = cs_36(D)->code;
  if (_20 != 15)
    goto <bb 9>; [66.00%]
  else
    goto <bb 10>; [34.00%]

  <bb 9> [local count: 70867]:
  # DEBUG BEGIN_STMT
  _21 ={v} *flexcan_mb_35;
  _22 = _21 & 4043309055;
  *flexcan_mb_35 ={v} _22;
  # DEBUG BEGIN_STMT
  _23 ={v} *flexcan_mb_35;
  _24 = cs_36(D)->code;
  _25 = _24 << 24;
  _26 = _25 & 251658240;
  _27 = _23 | _26;
  *flexcan_mb_35 ={v} _27;

  <bb 10> [local count: 107374]:
  return;

}



;; Function FlexCAN_GetMsgBuffTimestamp (FlexCAN_GetMsgBuffTimestamp, funcdef_no=59, decl_uid=6613, cgraph_uid=60, symbol_order=60)

Modification phase of node FlexCAN_GetMsgBuffTimestamp/60
FlexCAN_GetMsgBuffTimestamp (const struct FLEXCAN_Type * base, uint32 msgBuffIdx)
{
  const uint32 * Flexcan_Mb;
  uint32 TimeStamp;
  long unsigned int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG TimeStamp => 0
  # DEBUG BEGIN_STMT
  Flexcan_Mb_6 = FlexCAN_GetMsgBuffRegion (base_3(D), msgBuffIdx_4(D));
  # DEBUG Flexcan_Mb => Flexcan_Mb_6
  # DEBUG BEGIN_STMT
  _1 ={v} *Flexcan_Mb_6;
  TimeStamp_7 = _1 & 65535;
  # DEBUG TimeStamp => TimeStamp_7
  # DEBUG BEGIN_STMT
  return TimeStamp_7;

}



;; Function FlexCAN_GetMsgBuff (FlexCAN_GetMsgBuff, funcdef_no=60, decl_uid=6617, cgraph_uid=61, symbol_order=61)

Modification phase of node FlexCAN_GetMsgBuff/61
FlexCAN_GetMsgBuff (const struct FLEXCAN_Type * base, uint32 msgBuffIdx, struct Flexcan_Ip_MsgBuffType * msgBuff)
{
  volatile boolean x;
  uint8 Payload_Size;
  uint8 Flexcan_Mb_Dlc_Value;
  uint32 MbWord;
  uint32 * MsgBuff_Data_32;
  const uint32 * Flexcan_Mb;
  uint8 i;
  long unsigned int _1;
  long unsigned int _2;
  unsigned char _3;
  _Bool _4;
  unsigned char _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _11;
  unsigned char _12;
  unsigned int _13;
  unsigned int _14;
  const uint32 * _15;
  long unsigned int _16;
  long unsigned int _17;
  long unsigned int _18;
  long unsigned int _19;
  long unsigned int _20;
  long unsigned int _21;
  long unsigned int _22;
  long unsigned int _23;
  uint32 * _24;
  long unsigned int _25;
  unsigned int _26;
  unsigned int _27;
  unsigned int _28;
  unsigned char _29;
  sizetype _30;
  const uint8 * _31;
  int _32;
  unsigned char _33;
  _Bool x.4_49;
  sizetype _51;
  sizetype _60;

  <bb 2> [local count: 214748]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Flexcan_Mb_45 = FlexCAN_GetMsgBuffRegion (base_42(D), msgBuffIdx_43(D));
  # DEBUG Flexcan_Mb => Flexcan_Mb_45
  # DEBUG BEGIN_STMT
  # DEBUG Flexcan_Mb_Id => Flexcan_Mb_45 + 4
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => Flexcan_Mb_45 + 8
  # DEBUG Flexcan_Mb_Data => D#1
  # DEBUG BEGIN_STMT
  # DEBUG Flexcan_Mb_Data_32 => D#1
  # DEBUG BEGIN_STMT
  MsgBuff_Data_32_47 = &msgBuff_46(D)->data;
  # DEBUG MsgBuff_Data_32 => MsgBuff_Data_32_47
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} *Flexcan_Mb_45;
  _2 = _1 >> 16;
  _3 = (unsigned char) _2;
  Flexcan_Mb_Dlc_Value_48 = _3 & 15;
  # DEBUG Flexcan_Mb_Dlc_Value => Flexcan_Mb_Dlc_Value_48
  # DEBUG BEGIN_STMT
  Payload_Size_50 = FlexCAN_ComputePayloadSize (Flexcan_Mb_Dlc_Value_48);
  # DEBUG Payload_Size => Payload_Size_50
  # DEBUG BEGIN_STMT
  _4 = msgBuff_46(D) != 0B;
  x ={v} _4;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.4_49 ={v} x;
  if (x.4_49 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 16>; [50.00%]

  <bb 16> [local count: 107374]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 17> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 107374]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  _5 = FlexCAN_GetMbPayloadSize (base_42(D), msgBuffIdx_43(D));
  if (_5 < Payload_Size_50)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 35433]:
  # DEBUG BEGIN_STMT
  Payload_Size_54 = FlexCAN_GetMbPayloadSize (base_42(D), msgBuffIdx_43(D));
  # DEBUG Payload_Size => Payload_Size_54

  <bb 6> [local count: 107374]:
  # Payload_Size_36 = PHI <Payload_Size_50(4), Payload_Size_54(5)>
  # DEBUG Payload_Size => Payload_Size_36
  # DEBUG BEGIN_STMT
  msgBuff_46(D)->dataLen = Payload_Size_36;
  # DEBUG BEGIN_STMT
  _6 ={v} *Flexcan_Mb_45;
  msgBuff_46(D)->cs = _6;
  # DEBUG BEGIN_STMT
  _7 = _6 & 2097152;
  if (_7 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 53687]:
  # DEBUG BEGIN_STMT
  _8 ={v} MEM[(const uint32 *)Flexcan_Mb_45 + 4B];
  msgBuff_46(D)->msgId = _8;
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 53687]:
  # DEBUG BEGIN_STMT
  _9 ={v} MEM[(const uint32 *)Flexcan_Mb_45 + 4B];
  _10 = _9 >> 18;
  msgBuff_46(D)->msgId = _10;

  <bb 9> [local count: 107374]:
  # DEBUG BEGIN_STMT
  _11 = _6 & 65535;
  msgBuff_46(D)->time_stamp = _11;
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 11>; [100.00%]

  <bb 10> [local count: 868753]:
  # DEBUG BEGIN_STMT
  _12 = i_34 >> 2;
  _13 = (unsigned int) _12;
  _14 = _13 * 4;
  _51 = _14 + 8;
  _15 = Flexcan_Mb_45 + _51;
  MbWord_63 ={v} *_15;
  # DEBUG MbWord => MbWord_63
  # DEBUG BEGIN_STMT
  _16 = MbWord_63 >> 24;
  _17 = MbWord_63 >> 8;
  _18 = _17 & 65280;
  _19 = _16 | _18;
  _20 = MbWord_63 << 8;
  _21 = _20 & 16711680;
  _22 = _19 | _21;
  _23 = MbWord_63 << 24;
  _24 = MsgBuff_Data_32_47 + _14;
  _25 = _22 | _23;
  *_24 = _25;
  # DEBUG BEGIN_STMT
  i_65 = i_34 + 4;
  # DEBUG i => i_65

  <bb 11> [local count: 976127]:
  # i_34 = PHI <0(9), i_65(10)>
  # DEBUG i => i_34
  # DEBUG BEGIN_STMT
  _26 = (unsigned int) i_34;
  _27 = (unsigned int) Payload_Size_36;
  _28 = _27 & 4294967292;
  if (_26 < _28)
    goto <bb 10>; [89.00%]
  else
    goto <bb 15>; [11.00%]

  <bb 15> [local count: 107374]:
  goto <bb 13>; [100.00%]

  <bb 12> [local count: 868753]:
  # DEBUG BEGIN_STMT
  _29 = i_35 ^ 3;
  _30 = (sizetype) _29;
  _60 = _30 + 8;
  _31 = Flexcan_Mb_45 + _60;
  _32 = (int) i_35;
  _33 ={v} *_31;
  msgBuff_46(D)->data[_32] = _33;
  # DEBUG BEGIN_STMT
  i_62 = i_35 + 1;
  # DEBUG i => i_62

  <bb 13> [local count: 976127]:
  # i_35 = PHI <i_62(12), i_34(15)>
  # DEBUG i => i_35
  # DEBUG BEGIN_STMT
  if (i_35 < Payload_Size_36)
    goto <bb 12>; [89.00%]
  else
    goto <bb 14>; [11.00%]

  <bb 14> [local count: 107374]:
  return;

}



;; Function FlexCAN_SetTxMsgBuff (FlexCAN_SetTxMsgBuff, funcdef_no=61, decl_uid=6599, cgraph_uid=62, symbol_order=62)

Modification phase of node FlexCAN_SetTxMsgBuff/62
FlexCAN_SetTxMsgBuff (volatile uint32 * const pMbAddr, const struct Flexcan_Ip_MsbuffCodeStatusType * cs, uint32 msgId, const uint8 * msgData, const boolean isRemote)
{
  volatile boolean x;
  uint32 ret;
  static const uint8 payload_code[65] = "\x00\x01\x02\x03\x04\x05\x06\x07\b\t\t\t\t\n\n\n\n\v\v\v\v\f\f\f\f\r\r\r\r\r\r\r\r\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f";
  volatile uint8 * Flexcan_Mb_Data;
  uint8 Payload_Size;
  uint32 DataByte;
  uint32 Flexcan_Mb_Config;
  _Bool _1;
  long unsigned int _2;
  unsigned char _3;
  long unsigned int _4;
  long unsigned int _5;
  const uint32 * _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _11;
  long unsigned int _12;
  long unsigned int _13;
  long unsigned int _14;
  long unsigned int _15;
  volatile uint32 * _16;
  long unsigned int _17;
  long unsigned int _18;
  long unsigned int _19;
  const uint8 * _20;
  long unsigned int _21;
  volatile uint8 * _22;
  unsigned char _23;
  long unsigned int _24;
  long unsigned int _25;
  volatile uint8 * _26;
  unsigned char _27;
  long unsigned int _28;
  <unnamed type> _29;
  long unsigned int _30;
  long unsigned int _31;
  long unsigned int _32;
  long unsigned int _33;
  long unsigned int _34;
  long unsigned int _35;
  long unsigned int _36;
  long unsigned int _37;
  long unsigned int _38;
  long unsigned int _39;
  long unsigned int _40;
  long unsigned int _41;
  long unsigned int _42;
  long unsigned int _43;
  _Bool _44;
  long unsigned int _45;
  long unsigned int _46;
  long unsigned int _47;
  long unsigned int _48;
  long unsigned int _49;
  _Bool _50;
  long unsigned int _51;
  long unsigned int _52;
  long unsigned int _68;
  long unsigned int _70;
  long unsigned int _72;
  sizetype _74;
  unsigned char _79;
  int _80;
  unsigned char _103;
  _Bool x.4_104;

  <bb 2> [local count: 214748]:
  # DEBUG BEGIN_STMT
  # DEBUG Flexcan_Mb_Config => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG Flexcan_Mb => pMbAddr_69(D)
  # DEBUG BEGIN_STMT
  # DEBUG Flexcan_Mb_Id => pMbAddr_69(D) + 4
  # DEBUG BEGIN_STMT
  Flexcan_Mb_Data_71 = pMbAddr_69(D) + 8;
  # DEBUG Flexcan_Mb_Data => Flexcan_Mb_Data_71
  # DEBUG BEGIN_STMT
  # DEBUG Flexcan_Mb_Data_32 => Flexcan_Mb_Data_71
  # DEBUG BEGIN_STMT
  # DEBUG MsgData_32 => msgData_73(D)
  # DEBUG BEGIN_STMT
  _1 = cs_75(D) != 0B;
  x ={v} _1;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.4_104 ={v} x;
  if (x.4_104 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 32>; [50.00%]

  <bb 32> [local count: 107374]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 33> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 107374]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  *pMbAddr_69(D) ={v} 134217728;
  # DEBUG BEGIN_STMT
  MEM[(volatile uint32 *)pMbAddr_69(D) + 4B] ={v} 0;
  # DEBUG BEGIN_STMT
  _2 = cs_75(D)->dataLen;
  _3 = (unsigned char) _2;
  # DEBUG payloadSize => _3
  # DEBUG INLINE_ENTRY FlexCAN_ComputeDLCValue
  # DEBUG BEGIN_STMT
  # DEBUG ret => 255
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (_3 <= 64)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 53687]:
  # DEBUG BEGIN_STMT
  _68 = _2 & 255;
  _80 = (int) _68;
  _79 = payload_code[_80];
  ret_101 = (uint32) _79;
  # DEBUG ret => ret_101

  <bb 6> [local count: 107374]:
  # ret_102 = PHI <255(4), ret_101(5)>
  # DEBUG ret => ret_102
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _103 = (unsigned char) ret_102;
  # DEBUG payloadSize => NULL
  # DEBUG ret => NULL
  # DEBUG Dlc_Value => _103
  # DEBUG BEGIN_STMT
  if (msgData_73(D) != 0B)
    goto <bb 31>; [70.00%]
  else
    goto <bb 14>; [30.00%]

  <bb 31> [local count: 75162]:
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 608127]:
  # DEBUG BEGIN_STMT
  _4 = DataByte_58 >> 2;
  _5 = _4 * 4;
  _6 = msgData_73(D) + _5;
  _7 = *_6;
  _8 = _7 >> 24;
  _9 = _7 >> 8;
  _10 = _9 & 65280;
  _11 = _8 | _10;
  _12 = _7 << 8;
  _13 = _12 & 16711680;
  _14 = _11 | _13;
  _15 = _7 << 24;
  _74 = _5 + 8;
  _16 = pMbAddr_69(D) + _74;
  _17 = _14 | _15;
  *_16 ={v} _17;
  # DEBUG BEGIN_STMT
  DataByte_87 = DataByte_58 + 4;
  # DEBUG DataByte => DataByte_87

  <bb 8> [local count: 683289]:
  # DataByte_58 = PHI <DataByte_87(7), 0(31)>
  # DEBUG DataByte => DataByte_58
  # DEBUG BEGIN_STMT
  _18 = cs_75(D)->dataLen;
  _19 = _18 & 4294967292;
  if (_19 > DataByte_58)
    goto <bb 7>; [89.00%]
  else
    goto <bb 30>; [11.00%]

  <bb 30> [local count: 75162]:
  goto <bb 10>; [100.00%]

  <bb 9> [local count: 608127]:
  # DEBUG BEGIN_STMT
  _20 = msgData_73(D) + DataByte_59;
  _21 = DataByte_59 ^ 3;
  _22 = Flexcan_Mb_Data_71 + _21;
  _23 = *_20;
  *_22 ={v} _23;
  # DEBUG BEGIN_STMT
  DataByte_85 = DataByte_59 + 1;
  # DEBUG DataByte => DataByte_85

  <bb 10> [local count: 683289]:
  # DataByte_59 = PHI <DataByte_85(9), DataByte_58(30)>
  # DEBUG DataByte => DataByte_59
  # DEBUG BEGIN_STMT
  _24 = cs_75(D)->dataLen;
  if (_24 > DataByte_59)
    goto <bb 9>; [89.00%]
  else
    goto <bb 11>; [11.00%]

  <bb 11> [local count: 75162]:
  # _72 = PHI <_24(10)>
  # DEBUG BEGIN_STMT
  Payload_Size_81 = FlexCAN_ComputePayloadSize (_103);
  # DEBUG Payload_Size => Payload_Size_81
  # DEBUG BEGIN_STMT
  # DEBUG DataByte => _72
  goto <bb 13>; [100.00%]

  <bb 12> [local count: 608127]:
  # DEBUG BEGIN_STMT
  _25 = DataByte_60 ^ 3;
  _26 = Flexcan_Mb_Data_71 + _25;
  _27 = cs_75(D)->fd_padding;
  *_26 ={v} _27;
  # DEBUG BEGIN_STMT
  DataByte_83 = DataByte_60 + 1;
  # DEBUG DataByte => DataByte_83

  <bb 13> [local count: 683289]:
  # DataByte_60 = PHI <_72(11), DataByte_83(12)>
  # DEBUG DataByte => DataByte_60
  # DEBUG BEGIN_STMT
  _28 = (long unsigned int) Payload_Size_81;
  if (_28 > DataByte_60)
    goto <bb 12>; [89.00%]
  else
    goto <bb 14>; [11.00%]

  <bb 14> [local count: 107374]:
  # DEBUG BEGIN_STMT
  _29 = cs_75(D)->msgIdType;
  if (_29 == 1)
    goto <bb 15>; [34.00%]
  else
    goto <bb 16>; [66.00%]

  <bb 15> [local count: 36507]:
  # DEBUG BEGIN_STMT
  _30 ={v} MEM[(volatile uint32 *)pMbAddr_69(D) + 4B];
  _31 = _30 & 3758096384;
  MEM[(volatile uint32 *)pMbAddr_69(D) + 4B] ={v} _31;
  # DEBUG BEGIN_STMT
  _32 ={v} MEM[(volatile uint32 *)pMbAddr_69(D) + 4B];
  _33 = msgId_89(D) & 536870911;
  _34 = _32 | _33;
  MEM[(volatile uint32 *)pMbAddr_69(D) + 4B] ={v} _34;
  # DEBUG BEGIN_STMT
  # DEBUG Flexcan_Mb_Config => 6291456

  <bb 16> [local count: 107374]:
  # Flexcan_Mb_Config_53 = PHI <0(14), 6291456(15)>
  # DEBUG Flexcan_Mb_Config => Flexcan_Mb_Config_53
  # DEBUG BEGIN_STMT
  if (_29 == 0)
    goto <bb 17>; [50.00%]
  else
    goto <bb 18>; [50.00%]

  <bb 17> [local count: 53687]:
  # DEBUG BEGIN_STMT
  _35 ={v} MEM[(volatile uint32 *)pMbAddr_69(D) + 4B];
  _36 = _35 & 3758358527;
  MEM[(volatile uint32 *)pMbAddr_69(D) + 4B] ={v} _36;
  # DEBUG BEGIN_STMT
  _37 ={v} MEM[(volatile uint32 *)pMbAddr_69(D) + 4B];
  _38 = msgId_89(D) << 18;
  _39 = _38 & 536608768;
  _40 = _37 | _39;
  MEM[(volatile uint32 *)pMbAddr_69(D) + 4B] ={v} _40;
  # DEBUG BEGIN_STMT
  # DEBUG Flexcan_Mb_Config => 0

  <bb 18> [local count: 107374]:
  # Flexcan_Mb_Config_54 = PHI <Flexcan_Mb_Config_53(16), 0(17)>
  # DEBUG Flexcan_Mb_Config => Flexcan_Mb_Config_54
  # DEBUG BEGIN_STMT
  # DEBUG Flexcan_Mb_Config => Flexcan_Mb_Config_54
  # DEBUG BEGIN_STMT
  _41 = ret_102 << 16;
  _42 = _41 & 983040;
  Flexcan_Mb_Config_93 = _42 | Flexcan_Mb_Config_54;
  # DEBUG Flexcan_Mb_Config => Flexcan_Mb_Config_93
  # DEBUG BEGIN_STMT
  _43 = cs_75(D)->code;
  if (_43 != 15)
    goto <bb 19>; [66.00%]
  else
    goto <bb 29>; [34.00%]

  <bb 19> [local count: 70867]:
  # DEBUG BEGIN_STMT
  if (_43 == 28)
    goto <bb 20>; [34.00%]
  else
    goto <bb 21>; [66.00%]

  <bb 20> [local count: 24095]:
  # DEBUG BEGIN_STMT
  Flexcan_Mb_Config_96 = Flexcan_Mb_Config_93 | 1048576;
  # DEBUG Flexcan_Mb_Config => Flexcan_Mb_Config_96
  goto <bb 23>; [100.00%]

  <bb 21> [local count: 46772]:
  # DEBUG BEGIN_STMT
  if (isRemote_94(D) != 0)
    goto <bb 22>; [50.00%]
  else
    goto <bb 23>; [50.00%]

  <bb 22> [local count: 23386]:
  # DEBUG BEGIN_STMT
  Flexcan_Mb_Config_95 = Flexcan_Mb_Config_93 | 1048576;
  # DEBUG Flexcan_Mb_Config => Flexcan_Mb_Config_95

  <bb 23> [local count: 70867]:
  # Flexcan_Mb_Config_55 = PHI <Flexcan_Mb_Config_96(20), Flexcan_Mb_Config_93(21), Flexcan_Mb_Config_95(22)>
  # DEBUG Flexcan_Mb_Config => Flexcan_Mb_Config_55
  # DEBUG BEGIN_STMT
  # DEBUG Flexcan_Mb_Config => Flexcan_Mb_Config_55
  # DEBUG BEGIN_STMT
  _44 = cs_75(D)->fd_enable;
  if (_44 != 0)
    goto <bb 24>; [50.00%]
  else
    goto <bb 25>; [50.00%]

  <bb 24> [local count: 35433]:
  # DEBUG BEGIN_STMT
  _45 = _43 << 24;
  _46 = _45 & 251658240;
  _47 = _46 | Flexcan_Mb_Config_55;
  # DEBUG Flexcan_Mb_Config => _47 | 2147483648
  # DEBUG BEGIN_STMT
  _70 = _47 & 4293918719;
  Flexcan_Mb_Config_98 = _70 | 2147483648;
  # DEBUG Flexcan_Mb_Config => Flexcan_Mb_Config_98
  goto <bb 26>; [100.00%]

  <bb 25> [local count: 35433]:
  # DEBUG BEGIN_STMT
  _48 = _43 << 24;
  _49 = _48 & 251658240;
  Flexcan_Mb_Config_97 = _49 | Flexcan_Mb_Config_55;
  # DEBUG Flexcan_Mb_Config => Flexcan_Mb_Config_97

  <bb 26> [local count: 70867]:
  # Flexcan_Mb_Config_56 = PHI <Flexcan_Mb_Config_98(24), Flexcan_Mb_Config_97(25)>
  # DEBUG Flexcan_Mb_Config => Flexcan_Mb_Config_56
  # DEBUG BEGIN_STMT
  _50 = cs_75(D)->enable_brs;
  if (_50 != 0)
    goto <bb 27>; [50.00%]
  else
    goto <bb 28>; [50.00%]

  <bb 27> [local count: 35433]:
  # DEBUG BEGIN_STMT
  Flexcan_Mb_Config_99 = Flexcan_Mb_Config_56 | 1073741824;
  # DEBUG Flexcan_Mb_Config => Flexcan_Mb_Config_99

  <bb 28> [local count: 70867]:
  # Flexcan_Mb_Config_57 = PHI <Flexcan_Mb_Config_56(26), Flexcan_Mb_Config_99(27)>
  # DEBUG Flexcan_Mb_Config => Flexcan_Mb_Config_57
  # DEBUG BEGIN_STMT
  _51 ={v} *pMbAddr_69(D);
  _52 = _51 | Flexcan_Mb_Config_57;
  *pMbAddr_69(D) ={v} _52;

  <bb 29> [local count: 107374]:
  return;

}



;; Function FlexCAN_SetMaxMsgBuffNum (FlexCAN_SetMaxMsgBuffNum, funcdef_no=62, decl_uid=6605, cgraph_uid=63, symbol_order=63)

Modification phase of node FlexCAN_SetMaxMsgBuffNum/63
FlexCAN_SetMaxMsgBuffNum (struct FLEXCAN_Type * base, uint32 maxMsgBuffNum)
{
  volatile boolean x;
  Flexcan_Ip_StatusType Status;
  uint32 ValEndRam;
  uint32 ValEndMb;
  uint8 Can_Real_Payload;
  volatile uint32 * Flexcan_Mb;
  const uint32 * ValEndMbPointer;
  const uint32 * RAM;
  uint32 DataByte;
  uint8 MsgBuffIdx;
  long unsigned int base.8_1;
  long unsigned int _2;
  long unsigned int _3;
  _Bool _4;
  long unsigned int _5;
  long unsigned int ValEndMbPointer.9_6;
  long unsigned int _7;
  const uint32 * _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _11;
  long unsigned int _12;
  long unsigned int _13;
  long unsigned int _14;
  long unsigned int _15;
  volatile uint8 * _16;
  long unsigned int _17;
  long unsigned int _18;
  sizetype _26;
  _Bool x.4_36;

  <bb 2> [local count: 214748]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  base.8_1 = (long unsigned int) base_24(D);
  _2 = base.8_1 + 128;
  RAM_25 = (const uint32 *) _2;
  # DEBUG RAM => RAM_25
  # DEBUG BEGIN_STMT
  # DEBUG ValEndMbPointer => 0B
  # DEBUG BEGIN_STMT
  # DEBUG Flexcan_Mb => 0B
  # DEBUG BEGIN_STMT
  # DEBUG Flexcan_Mb_Id => 0B
  # DEBUG BEGIN_STMT
  # DEBUG Flexcan_Mb_Data => 0B
  # DEBUG BEGIN_STMT
  # DEBUG Arbitration_Field_Size => 8
  # DEBUG BEGIN_STMT
  _3 = maxMsgBuffNum_28(D) + 4294967295;
  Can_Real_Payload_31 = FlexCAN_GetMbPayloadSize (base_24(D), _3);
  # DEBUG Can_Real_Payload => Can_Real_Payload_31
  # DEBUG BEGIN_STMT
  # DEBUG ValEndMb => 0
  # DEBUG BEGIN_STMT
  # DEBUG ValEndRam => 0
  # DEBUG BEGIN_STMT
  # DEBUG Status => 0
  # DEBUG BEGIN_STMT
  _4 = maxMsgBuffNum_28(D) != 0;
  x ={v} _4;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.4_36 ={v} x;
  if (x.4_36 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 14> [local count: 107374]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 15> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 107374]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  ValEndMbPointer_33 = FlexCAN_GetMsgBuffRegion (base_24(D), _3);
  # DEBUG ValEndMbPointer => ValEndMbPointer_33
  # DEBUG BEGIN_STMT
  _5 = (long unsigned int) Can_Real_Payload_31;
  ValEndMbPointer.9_6 = (long unsigned int) ValEndMbPointer_33;
  _7 = _5 + ValEndMbPointer.9_6;
  ValEndMb_34 = _7 + 8;
  # DEBUG ValEndMb => ValEndMb_34
  # DEBUG BEGIN_STMT
  _8 = RAM_25 + 512;
  ValEndRam_35 = (uint32) _8;
  # DEBUG ValEndRam => ValEndRam_35
  # DEBUG BEGIN_STMT
  if (ValEndMb_34 > ValEndRam_35)
    goto <bb 12>; [35.00%]
  else
    goto <bb 5>; [65.00%]

  <bb 5> [local count: 69793]:
  _9 = FlexCAN_GetMaxMbNum (base_24(D));
  if (_9 < maxMsgBuffNum_28(D))
    goto <bb 12>; [35.00%]
  else
    goto <bb 6>; [65.00%]

  <bb 6> [local count: 45366]:
  # DEBUG Status => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _10 ={v} base_24(D)->MCR;
  _11 = _10 & 4294967168;
  _12 = _3 & 127;
  _13 = _11 | _12;
  base_24(D)->MCR ={v} _13;
  # DEBUG BEGIN_STMT
  _14 ={v} base_24(D)->MCR;
  _15 = _14 & 536870912;
  if (_15 == 0)
    goto <bb 13>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 13> [local count: 22683]:
  goto <bb 11>; [100.00%]

  <bb 7> [local count: 183524]:
  # DEBUG BEGIN_STMT
  Flexcan_Mb_39 = FlexCAN_GetMsgBuffRegion (base_24(D), _18);
  # DEBUG Flexcan_Mb => Flexcan_Mb_39
  # DEBUG BEGIN_STMT
  # DEBUG Flexcan_Mb_Id => Flexcan_Mb_39 + 4
  # DEBUG BEGIN_STMT
  # DEBUG Flexcan_Mb_Data => Flexcan_Mb_39 + 8
  # DEBUG BEGIN_STMT
  *Flexcan_Mb_39 ={v} 0;
  # DEBUG BEGIN_STMT
  MEM[(volatile uint32 *)Flexcan_Mb_39 + 4B] ={v} 0;
  # DEBUG BEGIN_STMT
  Can_Real_Payload_43 = FlexCAN_GetMbPayloadSize (base_24(D), _18);
  # DEBUG Can_Real_Payload => Can_Real_Payload_43
  # DEBUG BEGIN_STMT
  # DEBUG DataByte => 0
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 1484877]:
  # DEBUG BEGIN_STMT
  _26 = DataByte_20 + 8;
  _16 = Flexcan_Mb_39 + _26;
  *_16 ={v} 0;
  # DEBUG BEGIN_STMT
  DataByte_46 = DataByte_20 + 1;
  # DEBUG DataByte => DataByte_46

  <bb 9> [local count: 1668401]:
  # DataByte_20 = PHI <0(7), DataByte_46(8)>
  # DEBUG DataByte => DataByte_20
  # DEBUG BEGIN_STMT
  _17 = (long unsigned int) Can_Real_Payload_43;
  if (_17 > DataByte_20)
    goto <bb 8>; [89.00%]
  else
    goto <bb 10>; [11.00%]

  <bb 10> [local count: 183524]:
  # DEBUG BEGIN_STMT
  MsgBuffIdx_44 = MsgBuffIdx_19 + 1;
  # DEBUG MsgBuffIdx => MsgBuffIdx_44

  <bb 11> [local count: 206207]:
  # MsgBuffIdx_19 = PHI <MsgBuffIdx_44(10), 0(13)>
  # DEBUG MsgBuffIdx => MsgBuffIdx_19
  # DEBUG BEGIN_STMT
  _18 = (long unsigned int) MsgBuffIdx_19;
  if (_18 < maxMsgBuffNum_28(D))
    goto <bb 7>; [89.00%]
  else
    goto <bb 12>; [11.00%]

  <bb 12> [local count: 107374]:
  # Status_27 = PHI <4(5), 0(6), 0(11), 4(4)>
  # DEBUG Status => NULL
  # DEBUG BEGIN_STMT
  return Status_27;

}



;; Function FlexCAN_SetOperationMode (FlexCAN_SetOperationMode, funcdef_no=63, decl_uid=6708, cgraph_uid=64, symbol_order=64)

Modification phase of node FlexCAN_SetOperationMode/64
FlexCAN_SetOperationMode (struct FLEXCAN_Type * base, Flexcan_Ip_ModesType mode)
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _20;
  long unsigned int _21;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  switch (mode_12(D)) <default: <L5> [25.00%], case 0: <L0> [25.00%], case 1: <L1> [25.00%], case 2: <L2> [25.00%]>

  <bb 3> [local count: 268435456]:
<L0>:
  # DEBUG BEGIN_STMT
  _1 ={v} base_14(D)->CTRL1;
  _2 = _1 & 4294967287;
  base_14(D)->CTRL1 ={v} _2;
  # DEBUG BEGIN_STMT
  _3 ={v} base_14(D)->CTRL1;
  _4 = _3 & 4294963199;
  base_14(D)->CTRL1 ={v} _4;
  # DEBUG BEGIN_STMT
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 268435456]:
<L1>:
  # DEBUG BEGIN_STMT
  _5 ={v} base_14(D)->CTRL1;
  _6 = _5 | 8;
  base_14(D)->CTRL1 ={v} _6;
  # DEBUG BEGIN_STMT
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 268435456]:
<L2>:
  # DEBUG BEGIN_STMT
  _7 ={v} base_14(D)->CTRL1;
  _8 = _7 | 4096;
  base_14(D)->CTRL1 ={v} _8;
  # DEBUG BEGIN_STMT
  _9 ={v} base_14(D)->CTRL1;
  _10 = _9 & 4294967287;
  base_14(D)->CTRL1 ={v} _10;
  # DEBUG BEGIN_STMT
  # DEBUG base => base_14(D)
  # DEBUG enable => 1
  # DEBUG INLINE_ENTRY FlexCAN_SetSelfReception
  # DEBUG BEGIN_STMT
  _20 ={v} base_14(D)->MCR;
  _21 = _20 & 4294836223;
  base_14(D)->MCR ={v} _21;

  <bb 6> [local count: 1073741824]:
<L5>:
  # DEBUG base => NULL
  # DEBUG enable => NULL
  return;

}



;; Function FlexCAN_SetRxFifoFilter (FlexCAN_SetRxFifoFilter, funcdef_no=64, decl_uid=6570, cgraph_uid=65, symbol_order=65)

Modification phase of node FlexCAN_SetRxFifoFilter/65
FlexCAN_SetRxFifoFilter (struct FLEXCAN_Type * base, Flexcan_Ip_RxFifoIdElementFormatType idFormat, const struct Flexcan_Ip_IdTableType * idFilterTable)
{
  volatile boolean x;
  volatile uint32 * FilterTable;
  uint32 Val;
  uint32 Val2;
  uint32 Val1;
  uint32 NumOfFilters;
  uint32 j;
  uint32 i;
  long unsigned int base.12_1;
  long unsigned int _2;
  _Bool _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  const struct Flexcan_Ip_IdTableType * _9;
  _Bool _10;
  _Bool _11;
  long unsigned int _12;
  long unsigned int _13;
  long unsigned int _14;
  long unsigned int _15;
  volatile uint32 * _16;
  long unsigned int _17;
  long unsigned int _18;
  long unsigned int _19;
  long unsigned int _20;
  long unsigned int _21;
  volatile uint32 * _22;
  long unsigned int _23;
  long unsigned int _24;
  long unsigned int _25;
  long unsigned int _26;
  long unsigned int _27;
  long unsigned int _28;
  long unsigned int _29;
  const struct Flexcan_Ip_IdTableType * _30;
  _Bool _31;
  sizetype _32;
  sizetype _33;
  const struct Flexcan_Ip_IdTableType * _34;
  _Bool _35;
  _Bool _36;
  long unsigned int _37;
  long unsigned int _38;
  long unsigned int _39;
  long unsigned int _40;
  long unsigned int _41;
  volatile uint32 * _42;
  long unsigned int _43;
  long unsigned int _44;
  long unsigned int _45;
  long unsigned int _46;
  long unsigned int _47;
  volatile uint32 * _48;
  long unsigned int _49;
  _Bool _50;
  long unsigned int _51;
  volatile uint32 * _52;
  long unsigned int _53;
  long unsigned int _54;
  long unsigned int _55;
  long unsigned int _56;
  long unsigned int _57;
  long unsigned int _58;
  long unsigned int _59;
  volatile uint32 * _60;
  long unsigned int _61;
  long unsigned int _62;
  long unsigned int _63;
  long unsigned int _64;
  long unsigned int _65;
  long unsigned int _66;
  long unsigned int _67;
  long unsigned int _68;
  long unsigned int _69;
  long unsigned int _70;
  long unsigned int _71;
  long unsigned int _72;
  const struct Flexcan_Ip_IdTableType * _73;
  _Bool _74;
  long unsigned int _75;
  long unsigned int _76;
  long unsigned int _77;
  long unsigned int _78;
  volatile uint32 * _79;
  long unsigned int _80;
  long unsigned int _81;
  long unsigned int _82;
  long unsigned int _83;
  volatile uint32 * _84;
  sizetype _85;
  sizetype _86;
  const struct Flexcan_Ip_IdTableType * _87;
  _Bool _88;
  long unsigned int _89;
  volatile uint32 * _90;
  long unsigned int _91;
  long unsigned int _92;
  long unsigned int _93;
  long unsigned int _94;
  long unsigned int _95;
  long unsigned int _96;
  long unsigned int _97;
  volatile uint32 * _98;
  long unsigned int _99;
  long unsigned int _100;
  long unsigned int _101;
  long unsigned int _102;
  long unsigned int _103;
  long unsigned int _104;
  sizetype _105;
  sizetype _106;
  const struct Flexcan_Ip_IdTableType * _107;
  _Bool _108;
  long unsigned int _109;
  volatile uint32 * _110;
  long unsigned int _111;
  long unsigned int _112;
  long unsigned int _113;
  long unsigned int _114;
  long unsigned int _115;
  long unsigned int _116;
  long unsigned int _117;
  volatile uint32 * _118;
  long unsigned int _119;
  long unsigned int _120;
  long unsigned int _121;
  long unsigned int _122;
  long unsigned int _123;
  long unsigned int _124;
  sizetype _125;
  sizetype _126;
  const struct Flexcan_Ip_IdTableType * _127;
  _Bool _128;
  long unsigned int _129;
  volatile uint32 * _130;
  long unsigned int _131;
  long unsigned int _132;
  long unsigned int _133;
  long unsigned int _134;
  long unsigned int _135;
  long unsigned int _136;
  volatile uint32 * _137;
  long unsigned int _138;
  long unsigned int _139;
  long unsigned int _140;
  long unsigned int _141;
  long unsigned int _142;
  long unsigned int _143;
  long unsigned int _144;
  long unsigned int _145;
  long unsigned int _146;
  int iftmp.13_155;
  _Bool x.4_207;

  <bb 2> [local count: 214748]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG Val1 => 0
  # DEBUG Val2 => 0
  # DEBUG Val => 0
  # DEBUG BEGIN_STMT
  base.12_1 = (long unsigned int) base_167(D);
  _2 = base.12_1 + 224;
  FilterTable_168 = (volatile uint32 *) _2;
  # DEBUG FilterTable => FilterTable_168
  # DEBUG BEGIN_STMT
  if (idFilterTable_169(D) != 0B)
    goto <bb 5>; [70.00%]
  else
    goto <bb 3>; [30.00%]

  <bb 3> [local count: 64424]:
  if (idFormat_170(D) == 3)
    goto <bb 5>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 4> [local count: 42520]:

  <bb 5> [local count: 214748]:
  # iftmp.13_155 = PHI <1(3), 0(4), 1(2)>
  _3 = (_Bool) iftmp.13_155;
  x ={v} _3;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.4_207 ={v} x;
  if (x.4_207 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 46>; [50.00%]

  <bb 46> [local count: 107374]:

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 47> [local count: 1073741824]:
  goto <bb 6>; [100.00%]

  <bb 7> [local count: 107374]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  _4 ={v} base_167(D)->CTRL2;
  _5 = _4 >> 24;
  NumOfFilters_172 = _5 & 15;
  # DEBUG NumOfFilters => NumOfFilters_172
  # DEBUG BEGIN_STMT
  switch (idFormat_170(D)) <default: <L46> [20.00%], case 0: <L4> [20.00%], case 1: <L13> [20.00%], case 2: <L27> [20.00%], case 3: <L43> [20.00%]>

  <bb 8> [local count: 21475]:
<L4>:
  # DEBUG BEGIN_STMT
  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_13 ();
  # DEBUG BEGIN_STMT
  _6 ={v} base_167(D)->MCR;
  _7 = _6 & 4294966527;
  base_167(D)->MCR ={v} _7;
  # DEBUG BEGIN_STMT
  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_13 ();
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 15>; [100.00%]

  <bb 9> [local count: 173751]:
  # DEBUG BEGIN_STMT
  # DEBUG Val => 0
  # DEBUG BEGIN_STMT
  _8 = i_147 * 8;
  _9 = idFilterTable_169(D) + _8;
  _10 = _9->isRemoteFrame;
  if (_10 != 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 10> [local count: 86875]:
  # DEBUG BEGIN_STMT
  # DEBUG Val => 2147483648

  <bb 11> [local count: 173751]:
  # Val_154 = PHI <0(9), 2147483648(10)>
  # DEBUG Val => Val_154
  # DEBUG BEGIN_STMT
  _11 = _9->isExtendedFrame;
  if (_11 != 0)
    goto <bb 12>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 12> [local count: 86875]:
  # DEBUG BEGIN_STMT
  Val_204 = Val_154 | 1073741824;
  # DEBUG Val => Val_204
  # DEBUG BEGIN_STMT
  _12 = _9->id;
  _13 = _12 << 1;
  _14 = _13 & 1073741823;
  _15 = i_147 * 4;
  _16 = FilterTable_168 + _15;
  _17 = _14 + Val_204;
  *_16 ={v} _17;
  goto <bb 14>; [100.00%]

  <bb 13> [local count: 86875]:
  # DEBUG BEGIN_STMT
  _18 = _9->id;
  _19 = _18 << 19;
  _20 = _19 & 1073217536;
  _21 = i_147 * 4;
  _22 = FilterTable_168 + _21;
  _23 = _20 + Val_154;
  *_22 ={v} _23;

  <bb 14> [local count: 173751]:
  # DEBUG BEGIN_STMT
  i_206 = i_147 + 1;
  # DEBUG i => i_206

  <bb 15> [local count: 195225]:
  # i_147 = PHI <0(8), i_206(14)>
  # DEBUG i => i_147
  # DEBUG BEGIN_STMT
  _24 = NumOfFilters_172 + 1;
  _25 = _24 * 8;
  if (_25 > i_147)
    goto <bb 9>; [89.00%]
  else
    goto <bb 45>; [11.00%]

  <bb 16> [local count: 21475]:
<L13>:
  # DEBUG BEGIN_STMT
  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_13 ();
  # DEBUG BEGIN_STMT
  _26 ={v} base_167(D)->MCR;
  _27 = _26 & 4294966527;
  _28 = _27 | 256;
  base_167(D)->MCR ={v} _28;
  # DEBUG BEGIN_STMT
  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_13 ();
  # DEBUG BEGIN_STMT
  # DEBUG j => 0
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 28>; [100.00%]

  <bb 17> [local count: 173751]:
  # DEBUG BEGIN_STMT
  # DEBUG Val1 => 0
  # DEBUG BEGIN_STMT
  # DEBUG Val2 => 0
  # DEBUG BEGIN_STMT
  _29 = j_150 * 8;
  _30 = idFilterTable_169(D) + _29;
  _31 = _30->isRemoteFrame;
  if (_31 != 0)
    goto <bb 18>; [50.00%]
  else
    goto <bb 19>; [50.00%]

  <bb 18> [local count: 86875]:
  # DEBUG BEGIN_STMT
  # DEBUG Val1 => 2147483648

  <bb 19> [local count: 173751]:
  # Val1_152 = PHI <0(17), 2147483648(18)>
  # DEBUG Val1 => Val1_152
  # DEBUG BEGIN_STMT
  _32 = j_150 + 1;
  _33 = _32 * 8;
  _34 = idFilterTable_169(D) + _33;
  _35 = _34->isRemoteFrame;
  if (_35 != 0)
    goto <bb 20>; [50.00%]
  else
    goto <bb 21>; [50.00%]

  <bb 20> [local count: 86875]:
  # DEBUG BEGIN_STMT
  # DEBUG Val2 => 32768

  <bb 21> [local count: 173751]:
  # Val2_153 = PHI <0(19), 32768(20)>
  # DEBUG Val2 => Val2_153
  # DEBUG BEGIN_STMT
  _36 = _30->isExtendedFrame;
  if (_36 != 0)
    goto <bb 22>; [50.00%]
  else
    goto <bb 23>; [50.00%]

  <bb 22> [local count: 86875]:
  # DEBUG BEGIN_STMT
  Val1_193 = Val1_152 | 1073741824;
  # DEBUG Val1 => Val1_193
  # DEBUG BEGIN_STMT
  _37 = _30->id;
  _38 = _37 >> 15;
  _39 = _38 << 16;
  _40 = _39 & 1073676288;
  _41 = i_148 * 4;
  _42 = FilterTable_168 + _41;
  _43 = _40 + Val1_193;
  *_42 ={v} _43;
  goto <bb 24>; [100.00%]

  <bb 23> [local count: 86875]:
  # DEBUG BEGIN_STMT
  _44 = _30->id;
  _45 = _44 << 19;
  _46 = _45 & 1073217536;
  _47 = i_148 * 4;
  _48 = FilterTable_168 + _47;
  _49 = _46 + Val1_152;
  *_48 ={v} _49;

  <bb 24> [local count: 173751]:
  # DEBUG BEGIN_STMT
  _50 = _34->isExtendedFrame;
  if (_50 != 0)
    goto <bb 25>; [50.00%]
  else
    goto <bb 26>; [50.00%]

  <bb 25> [local count: 86875]:
  # DEBUG BEGIN_STMT
  Val2_196 = Val2_153 | 16384;
  # DEBUG Val2 => Val2_196
  # DEBUG BEGIN_STMT
  _51 = i_148 * 4;
  _52 = FilterTable_168 + _51;
  _53 ={v} *_52;
  _54 = _34->id;
  _55 = _54 >> 15;
  _56 = _55 & 16383;
  _57 = _56 + Val2_196;
  _58 = _53 | _57;
  *_52 ={v} _58;
  goto <bb 27>; [100.00%]

  <bb 26> [local count: 86875]:
  # DEBUG BEGIN_STMT
  _59 = i_148 * 4;
  _60 = FilterTable_168 + _59;
  _61 ={v} *_60;
  _62 = _34->id;
  _63 = _62 << 3;
  _64 = _63 & 16376;
  _65 = _64 + Val2_153;
  _66 = _61 | _65;
  *_60 ={v} _66;

  <bb 27> [local count: 173751]:
  # DEBUG BEGIN_STMT
  j_198 = j_150 + 2;
  # DEBUG j => j_198
  # DEBUG BEGIN_STMT
  i_199 = i_148 + 1;
  # DEBUG i => i_199

  <bb 28> [local count: 195225]:
  # i_148 = PHI <0(16), i_199(27)>
  # j_150 = PHI <0(16), j_198(27)>
  # DEBUG j => j_150
  # DEBUG i => i_148
  # DEBUG BEGIN_STMT
  _67 = NumOfFilters_172 + 1;
  _68 = _67 * 8;
  if (_68 > i_148)
    goto <bb 17>; [89.00%]
  else
    goto <bb 45>; [11.00%]

  <bb 29> [local count: 21475]:
<L27>:
  # DEBUG BEGIN_STMT
  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_13 ();
  # DEBUG BEGIN_STMT
  _69 ={v} base_167(D)->MCR;
  _70 = _69 & 4294966527;
  _71 = _70 | 512;
  base_167(D)->MCR ={v} _71;
  # DEBUG BEGIN_STMT
  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_13 ();
  # DEBUG BEGIN_STMT
  # DEBUG j => 0
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 43>; [100.00%]

  <bb 30> [local count: 173751]:
  # DEBUG BEGIN_STMT
  _72 = j_151 * 8;
  _73 = idFilterTable_169(D) + _72;
  _74 = _73->isExtendedFrame;
  if (_74 != 0)
    goto <bb 31>; [50.00%]
  else
    goto <bb 32>; [50.00%]

  <bb 31> [local count: 86875]:
  # DEBUG BEGIN_STMT
  _75 = _73->id;
  _76 = _75 >> 21;
  _77 = _76 << 24;
  _78 = i_149 * 4;
  _79 = FilterTable_168 + _78;
  *_79 ={v} _77;
  goto <bb 33>; [100.00%]

  <bb 32> [local count: 86875]:
  # DEBUG BEGIN_STMT
  _80 = _73->id;
  _81 = _80 >> 3;
  _82 = _81 << 24;
  _83 = i_149 * 4;
  _84 = FilterTable_168 + _83;
  *_84 ={v} _82;

  <bb 33> [local count: 173751]:
  # DEBUG BEGIN_STMT
  _85 = j_151 + 1;
  _86 = _85 * 8;
  _87 = idFilterTable_169(D) + _86;
  _88 = _87->isExtendedFrame;
  if (_88 != 0)
    goto <bb 34>; [50.00%]
  else
    goto <bb 35>; [50.00%]

  <bb 34> [local count: 86875]:
  # DEBUG BEGIN_STMT
  _89 = i_149 * 4;
  _90 = FilterTable_168 + _89;
  _91 ={v} *_90;
  _92 = _87->id;
  _93 = _92 >> 21;
  _94 = _93 << 16;
  _95 = _94 & 16711680;
  _96 = _91 | _95;
  *_90 ={v} _96;
  goto <bb 36>; [100.00%]

  <bb 35> [local count: 86875]:
  # DEBUG BEGIN_STMT
  _97 = i_149 * 4;
  _98 = FilterTable_168 + _97;
  _99 ={v} *_98;
  _100 = _87->id;
  _101 = _100 >> 3;
  _102 = _101 << 16;
  _103 = _102 & 16711680;
  _104 = _99 | _103;
  *_98 ={v} _104;

  <bb 36> [local count: 173751]:
  # DEBUG BEGIN_STMT
  _105 = j_151 + 2;
  _106 = _105 * 8;
  _107 = idFilterTable_169(D) + _106;
  _108 = _107->isExtendedFrame;
  if (_108 != 0)
    goto <bb 37>; [50.00%]
  else
    goto <bb 38>; [50.00%]

  <bb 37> [local count: 86875]:
  # DEBUG BEGIN_STMT
  _109 = i_149 * 4;
  _110 = FilterTable_168 + _109;
  _111 ={v} *_110;
  _112 = _107->id;
  _113 = _112 >> 21;
  _114 = _113 << 8;
  _115 = _114 & 65535;
  _116 = _111 | _115;
  *_110 ={v} _116;
  goto <bb 39>; [100.00%]

  <bb 38> [local count: 86875]:
  # DEBUG BEGIN_STMT
  _117 = i_149 * 4;
  _118 = FilterTable_168 + _117;
  _119 ={v} *_118;
  _120 = _107->id;
  _121 = _120 >> 3;
  _122 = _121 << 8;
  _123 = _122 & 65535;
  _124 = _119 | _123;
  *_118 ={v} _124;

  <bb 39> [local count: 173751]:
  # DEBUG BEGIN_STMT
  _125 = j_151 + 3;
  _126 = _125 * 8;
  _127 = idFilterTable_169(D) + _126;
  _128 = _127->isExtendedFrame;
  if (_128 != 0)
    goto <bb 40>; [50.00%]
  else
    goto <bb 41>; [50.00%]

  <bb 40> [local count: 86875]:
  # DEBUG BEGIN_STMT
  _129 = i_149 * 4;
  _130 = FilterTable_168 + _129;
  _131 ={v} *_130;
  _132 = _127->id;
  _133 = _132 >> 21;
  _134 = _133 & 255;
  _135 = _131 | _134;
  *_130 ={v} _135;
  goto <bb 42>; [100.00%]

  <bb 41> [local count: 86875]:
  # DEBUG BEGIN_STMT
  _136 = i_149 * 4;
  _137 = FilterTable_168 + _136;
  _138 ={v} *_137;
  _139 = _127->id;
  _140 = _139 >> 3;
  _141 = _140 & 255;
  _142 = _138 | _141;
  *_137 ={v} _142;

  <bb 42> [local count: 173751]:
  # DEBUG BEGIN_STMT
  j_187 = j_151 + 4;
  # DEBUG j => j_187
  # DEBUG BEGIN_STMT
  i_188 = i_149 + 1;
  # DEBUG i => i_188

  <bb 43> [local count: 195225]:
  # i_149 = PHI <0(29), i_188(42)>
  # j_151 = PHI <0(29), j_187(42)>
  # DEBUG j => j_151
  # DEBUG i => i_149
  # DEBUG BEGIN_STMT
  _143 = NumOfFilters_172 + 1;
  _144 = _143 * 8;
  if (_144 > i_149)
    goto <bb 30>; [89.00%]
  else
    goto <bb 45>; [11.00%]

  <bb 44> [local count: 21475]:
<L43>:
  # DEBUG BEGIN_STMT
  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_13 ();
  # DEBUG BEGIN_STMT
  _145 ={v} base_167(D)->MCR;
  _146 = _145 | 768;
  base_167(D)->MCR ={v} _146;
  # DEBUG BEGIN_STMT
  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_13 ();
  # DEBUG BEGIN_STMT

  <bb 45> [local count: 107374]:
<L46>:
  return;

}



;; Function FlexCAN_ReadRxFifo (FlexCAN_ReadRxFifo, funcdef_no=65, decl_uid=6573, cgraph_uid=66, symbol_order=66)

Modification phase of node FlexCAN_ReadRxFifo/66
FlexCAN_ReadRxFifo (const struct FLEXCAN_Type * base, struct Flexcan_Ip_MsgBuffType * rxFifo)
{
  volatile boolean x;
  uint8 can_real_payload;
  uint8 flexcan_mb_dlc_value;
  uint32 * msgData_32;
  const uint32 * flexcan_mb;
  uint32 MbWord;
  uint32 DataByte;
  long unsigned int base.14_1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  unsigned char _5;
  _Bool _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _11;
  long unsigned int _12;
  unsigned char _13;
  long unsigned int _14;
  long unsigned int _15;
  long unsigned int _16;
  const uint32 * _17;
  long unsigned int _18;
  long unsigned int _19;
  long unsigned int _20;
  long unsigned int _21;
  long unsigned int _22;
  long unsigned int _23;
  long unsigned int _24;
  long unsigned int _25;
  uint32 * _26;
  long unsigned int _27;
  long unsigned int _28;
  _Bool x.4_39;
  sizetype _41;

  <bb 2> [local count: 214748]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  base.14_1 = (long unsigned int) base_32(D);
  _2 = base.14_1 + 128;
  flexcan_mb_33 = (const uint32 *) _2;
  # DEBUG flexcan_mb => flexcan_mb_33
  # DEBUG BEGIN_STMT
  # DEBUG flexcan_mb_id => flexcan_mb_33 + 4
  # DEBUG BEGIN_STMT
  # DEBUG flexcan_mb_data_32 => flexcan_mb_33 + 8
  # DEBUG BEGIN_STMT
  msgData_32_36 = &rxFifo_35(D)->data;
  # DEBUG msgData_32 => msgData_32_36
  # DEBUG BEGIN_STMT
  _3 ={v} *flexcan_mb_33;
  _4 = _3 >> 16;
  _5 = (unsigned char) _4;
  flexcan_mb_dlc_value_38 = _5 & 15;
  # DEBUG flexcan_mb_dlc_value => flexcan_mb_dlc_value_38
  # DEBUG BEGIN_STMT
  can_real_payload_40 = FlexCAN_ComputePayloadSize (flexcan_mb_dlc_value_38);
  # DEBUG can_real_payload => can_real_payload_40
  # DEBUG BEGIN_STMT
  _6 = rxFifo_35(D) != 0B;
  x ={v} _6;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.4_39 ={v} x;
  if (x.4_39 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 11> [local count: 107374]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 12> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 107374]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  can_real_payload_34 = MIN_EXPR <8, can_real_payload_40>;
  # DEBUG can_real_payload => can_real_payload_34
  # DEBUG BEGIN_STMT
  rxFifo_35(D)->dataLen = can_real_payload_34;
  # DEBUG BEGIN_STMT
  _7 ={v} *flexcan_mb_33;
  rxFifo_35(D)->cs = _7;
  # DEBUG BEGIN_STMT
  _8 = _7 & 2097152;
  if (_8 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 53687]:
  # DEBUG BEGIN_STMT
  _9 ={v} MEM[(const uint32 *)flexcan_mb_33 + 4B];
  rxFifo_35(D)->msgId = _9;
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 53687]:
  # DEBUG BEGIN_STMT
  _10 ={v} MEM[(const uint32 *)flexcan_mb_33 + 4B];
  _11 = _10 >> 18;
  rxFifo_35(D)->msgId = _11;

  <bb 7> [local count: 107374]:
  # DEBUG BEGIN_STMT
  _12 ={v} base_32(D)->RXFIR;
  _13 = (unsigned char) _12;
  rxFifo_35(D)->id_hit = _13;
  # DEBUG BEGIN_STMT
  _14 = _7 & 65535;
  rxFifo_35(D)->time_stamp = _14;
  # DEBUG BEGIN_STMT
  # DEBUG DataByte => 0
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 868753]:
  # DEBUG BEGIN_STMT
  _15 = DataByte_29 >> 2;
  _16 = _15 * 4;
  _41 = _16 + 8;
  _17 = flexcan_mb_33 + _41;
  MbWord_48 ={v} *_17;
  # DEBUG MbWord => MbWord_48
  # DEBUG BEGIN_STMT
  _18 = MbWord_48 >> 24;
  _19 = MbWord_48 >> 8;
  _20 = _19 & 65280;
  _21 = _18 | _20;
  _22 = MbWord_48 << 8;
  _23 = _22 & 16711680;
  _24 = _21 | _23;
  _25 = MbWord_48 << 24;
  _26 = msgData_32_36 + _16;
  _27 = _24 | _25;
  *_26 = _27;
  # DEBUG BEGIN_STMT
  DataByte_50 = DataByte_29 + 4;
  # DEBUG DataByte => DataByte_50

  <bb 9> [local count: 976127]:
  # DataByte_29 = PHI <0(7), DataByte_50(8)>
  # DEBUG DataByte => DataByte_29
  # DEBUG BEGIN_STMT
  _28 = (long unsigned int) can_real_payload_34;
  if (_28 > DataByte_29)
    goto <bb 8>; [89.00%]
  else
    goto <bb 10>; [11.00%]

  <bb 10> [local count: 107374]:
  return;

}



;; Function FlexCAN_IsMbOutOfRange (FlexCAN_IsMbOutOfRange, funcdef_no=66, decl_uid=6627, cgraph_uid=67, symbol_order=67)

Modification phase of node FlexCAN_IsMbOutOfRange/67
FlexCAN_IsMbOutOfRange (const struct FLEXCAN_Type * pBase, uint8 u8MbIndex, boolean bIsLegacyFifoEn, uint32 u32MaxMbNum)
{
  uint32 u32NumOfMbOccupiedByFiFo;
  uint32 u32NumOfFiFoElement;
  boolean ReturnValue;
  unsigned char _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ReturnValue => 0
  # DEBUG BEGIN_STMT
  # DEBUG u32NumOfFiFoElement => 0
  # DEBUG BEGIN_STMT
  # DEBUG u32NumOfMbOccupiedByFiFo => 0
  # DEBUG BEGIN_STMT
  _1 = (unsigned char) u32MaxMbNum_9(D);
  if (_1 <= u8MbIndex_10(D))
    goto <bb 6>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  if (bIsLegacyFifoEn_11(D) != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 4> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  _2 ={v} pBase_13(D)->CTRL2;
  _3 = _2 >> 24;
  u32NumOfFiFoElement_14 = _3 & 15;
  # DEBUG u32NumOfFiFoElement => u32NumOfFiFoElement_14
  # DEBUG BEGIN_STMT
  _4 = u32NumOfFiFoElement_14 + 1;
  _5 = _4 * 8;
  _6 = _5 >> 2;
  u32NumOfMbOccupiedByFiFo_15 = _6 + 5;
  # DEBUG u32NumOfMbOccupiedByFiFo => u32NumOfMbOccupiedByFiFo_15
  # DEBUG BEGIN_STMT
  _7 = (long unsigned int) u8MbIndex_10(D);
  if (_7 <= u32NumOfMbOccupiedByFiFo_15)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 134217728]:
  # DEBUG BEGIN_STMT
  # DEBUG ReturnValue => 1

  <bb 6> [local count: 1073741824]:
  # ReturnValue_8 = PHI <1(2), 1(5), 0(3), 0(4)>
  # DEBUG ReturnValue => ReturnValue_8
  # DEBUG BEGIN_STMT
  return ReturnValue_8;

}



;; Function FlexCAN_ConfigCtrlOptions (FlexCAN_ConfigCtrlOptions, funcdef_no=67, decl_uid=6785, cgraph_uid=68, symbol_order=68)

Modification phase of node FlexCAN_ConfigCtrlOptions/68
FlexCAN_ConfigCtrlOptions (struct FLEXCAN_Type * pBase, uint32 u32Options)
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _20;
  long unsigned int _21;
  long unsigned int _22;
  long unsigned int _23;
  long unsigned int _24;
  long unsigned int _25;
  long unsigned int _26;
  long unsigned int _27;
  long unsigned int _28;
  long unsigned int _29;
  long unsigned int _30;
  long unsigned int _31;
  long unsigned int _32;
  long unsigned int _33;
  long unsigned int _34;
  long unsigned int _35;
  long unsigned int _36;
  long unsigned int _37;
  long unsigned int _38;
  long unsigned int _39;
  long unsigned int _40;
  long unsigned int _41;
  long unsigned int _42;
  long unsigned int _43;
  long unsigned int _44;
  long unsigned int _45;
  long unsigned int _46;
  long unsigned int _47;
  long unsigned int _48;
  long unsigned int _49;
  long unsigned int _50;
  long unsigned int _51;
  long unsigned int _52;
  long unsigned int _53;
  long unsigned int _54;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = u32Options_17(D) & 32;
  if (_1 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG base => pBase_19(D)
  # DEBUG enable => 1
  # DEBUG INLINE_ENTRY FlexCAN_SetIsoCan
  # DEBUG BEGIN_STMT
  _20 ={v} pBase_19(D)->CTRL2;
  _21 = _20 & 4294963199;
  _22 = _21 | 4096;
  pBase_19(D)->CTRL2 ={v} _22;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG base => pBase_19(D)
  # DEBUG enable => 0
  # DEBUG INLINE_ENTRY FlexCAN_SetIsoCan
  # DEBUG BEGIN_STMT
  _23 ={v} pBase_19(D)->CTRL2;
  _24 = _23 & 4294963199;
  pBase_19(D)->CTRL2 ={v} _24;

  <bb 5> [local count: 1073741824]:
  # DEBUG base => NULL
  # DEBUG enable => NULL
  # DEBUG base => NULL
  # DEBUG enable => NULL
  # DEBUG BEGIN_STMT
  _2 = u32Options_17(D) & 64;
  if (_2 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG base => pBase_19(D)
  # DEBUG enable => 1
  # DEBUG INLINE_ENTRY FlexCAN_SetEntireFrameArbitrationFieldComparison
  # DEBUG BEGIN_STMT
  _25 ={v} pBase_19(D)->CTRL2;
  _26 = _25 & 4294901759;
  _27 = _26 | 65536;
  pBase_19(D)->CTRL2 ={v} _27;
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG base => pBase_19(D)
  # DEBUG enable => 0
  # DEBUG INLINE_ENTRY FlexCAN_SetEntireFrameArbitrationFieldComparison
  # DEBUG BEGIN_STMT
  _28 ={v} pBase_19(D)->CTRL2;
  _29 = _28 & 4294901759;
  pBase_19(D)->CTRL2 ={v} _29;

  <bb 8> [local count: 1073741824]:
  # DEBUG base => NULL
  # DEBUG enable => NULL
  # DEBUG base => NULL
  # DEBUG enable => NULL
  # DEBUG BEGIN_STMT
  _3 = u32Options_17(D) & 8;
  if (_3 != 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 9> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG base => pBase_19(D)
  # DEBUG enable => 1
  # DEBUG INLINE_ENTRY FlexCAN_SetProtocolException
  # DEBUG BEGIN_STMT
  _30 ={v} pBase_19(D)->CTRL2;
  _31 = _30 & 4294950911;
  _32 = _31 | 16384;
  pBase_19(D)->CTRL2 ={v} _32;
  goto <bb 11>; [100.00%]

  <bb 10> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG base => pBase_19(D)
  # DEBUG enable => 0
  # DEBUG INLINE_ENTRY FlexCAN_SetProtocolException
  # DEBUG BEGIN_STMT
  _33 ={v} pBase_19(D)->CTRL2;
  _34 = _33 & 4294950911;
  pBase_19(D)->CTRL2 ={v} _34;

  <bb 11> [local count: 1073741824]:
  # DEBUG base => NULL
  # DEBUG enable => NULL
  # DEBUG base => NULL
  # DEBUG enable => NULL
  # DEBUG BEGIN_STMT
  _4 = u32Options_17(D) & 2;
  if (_4 != 0)
    goto <bb 12>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 12> [local count: 536870913]:
  _5 ={v} pBase_19(D)->MCR;
  _6 = _5 & 2048;
  if (_6 == 0)
    goto <bb 13>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 13> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  # DEBUG base => pBase_19(D)
  # DEBUG enable => 1
  # DEBUG INLINE_ENTRY FlexCAN_CanBitSampling
  # DEBUG BEGIN_STMT
  _35 ={v} pBase_19(D)->CTRL1;
  _36 = _35 & 4294967167;
  _37 = _36 | 128;
  pBase_19(D)->CTRL1 ={v} _37;
  goto <bb 15>; [100.00%]

  <bb 14> [local count: 805306369]:
  # DEBUG BEGIN_STMT
  # DEBUG base => pBase_19(D)
  # DEBUG enable => 0
  # DEBUG INLINE_ENTRY FlexCAN_CanBitSampling
  # DEBUG BEGIN_STMT
  _38 ={v} pBase_19(D)->CTRL1;
  _39 = _38 & 4294967167;
  pBase_19(D)->CTRL1 ={v} _39;

  <bb 15> [local count: 1073741824]:
  # DEBUG base => NULL
  # DEBUG enable => NULL
  # DEBUG base => NULL
  # DEBUG enable => NULL
  # DEBUG BEGIN_STMT
  _7 = u32Options_17(D) & 4;
  if (_7 != 0)
    goto <bb 16>; [50.00%]
  else
    goto <bb 17>; [50.00%]

  <bb 16> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG base => pBase_19(D)
  # DEBUG enable => 1
  # DEBUG INLINE_ENTRY FlexCAN_SetBusOffAutorecovery
  # DEBUG BEGIN_STMT
  _40 ={v} pBase_19(D)->CTRL1;
  _41 = _40 & 4294967231;
  pBase_19(D)->CTRL1 ={v} _41;
  goto <bb 18>; [100.00%]

  <bb 17> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG base => pBase_19(D)
  # DEBUG enable => 0
  # DEBUG INLINE_ENTRY FlexCAN_SetBusOffAutorecovery
  # DEBUG BEGIN_STMT
  _42 ={v} pBase_19(D)->CTRL1;
  _43 = _42 & 4294967231;
  _44 = _43 | 64;
  pBase_19(D)->CTRL1 ={v} _44;

  <bb 18> [local count: 1073741824]:
  # DEBUG base => NULL
  # DEBUG enable => NULL
  # DEBUG base => NULL
  # DEBUG enable => NULL
  # DEBUG BEGIN_STMT
  _8 = u32Options_17(D) & 1;
  if (_8 != 0)
    goto <bb 19>; [50.00%]
  else
    goto <bb 20>; [50.00%]

  <bb 19> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG base => pBase_19(D)
  # DEBUG enable => 1
  # DEBUG INLINE_ENTRY FlexCAN_SetRemoteReqStore
  # DEBUG BEGIN_STMT
  _45 ={v} pBase_19(D)->CTRL2;
  _46 = _45 & 4294836223;
  _47 = _46 | 131072;
  pBase_19(D)->CTRL2 ={v} _47;
  goto <bb 21>; [100.00%]

  <bb 20> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG base => pBase_19(D)
  # DEBUG enable => 0
  # DEBUG INLINE_ENTRY FlexCAN_SetRemoteReqStore
  # DEBUG BEGIN_STMT
  _48 ={v} pBase_19(D)->CTRL2;
  _49 = _48 & 4294836223;
  pBase_19(D)->CTRL2 ={v} _49;

  <bb 21> [local count: 1073741824]:
  # DEBUG base => NULL
  # DEBUG enable => NULL
  # DEBUG base => NULL
  # DEBUG enable => NULL
  # DEBUG BEGIN_STMT
  _9 = u32Options_17(D) & 16;
  if (_9 != 0)
    goto <bb 22>; [50.00%]
  else
    goto <bb 23>; [50.00%]

  <bb 22> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG base => pBase_19(D)
  # DEBUG enable => 1
  # DEBUG INLINE_ENTRY FlexCAN_SetEdgeFilter
  # DEBUG BEGIN_STMT
  _50 ={v} pBase_19(D)->CTRL2;
  _51 = _50 & 4294965247;
  pBase_19(D)->CTRL2 ={v} _51;
  goto <bb 24>; [100.00%]

  <bb 23> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG base => pBase_19(D)
  # DEBUG enable => 0
  # DEBUG INLINE_ENTRY FlexCAN_SetEdgeFilter
  # DEBUG BEGIN_STMT
  _52 ={v} pBase_19(D)->CTRL2;
  _53 = _52 & 4294965247;
  _54 = _53 | 2048;
  pBase_19(D)->CTRL2 ={v} _54;

  <bb 24> [local count: 1073741824]:
  # DEBUG base => NULL
  # DEBUG enable => NULL
  # DEBUG base => NULL
  # DEBUG enable => NULL
  return;

}


