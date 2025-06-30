
IPA constant propagation start:
Determining dynamic type for call: IntCtrl_Ip_InstallHandlerPrivileged (eIrqNumber_2(D), pfNewHandler_3(D), pfOldHandler_4(D));
  Starting walk at: IntCtrl_Ip_InstallHandlerPrivileged (eIrqNumber_2(D), pfNewHandler_3(D), pfOldHandler_4(D));
  instance pointer: pfNewHandler_3(D)  Outer instance pointer: pfNewHandler_3(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: IntCtrl_Ip_InstallHandlerPrivileged (eIrqNumber_2(D), pfNewHandler_3(D), pfOldHandler_4(D));
  Starting walk at: IntCtrl_Ip_InstallHandlerPrivileged (eIrqNumber_2(D), pfNewHandler_3(D), pfOldHandler_4(D));
  instance pointer: pfOldHandler_4(D)  Outer instance pointer: pfOldHandler_4(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: IntCtrl_Ip_InstallHandlerPrivileged (_4, _5, 0B);
  Starting walk at: IntCtrl_Ip_InstallHandlerPrivileged (_4, _5, 0B);
  instance pointer: _5  Outer instance pointer: _5 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:IntCtrl_Ip_InstallHandlerPrivileged (_4, _5, 0B);
Determining dynamic type for call: IntCtrl_Ip_InstallHandlerPrivileged (_4, _5, 0B);
  Starting walk at: IntCtrl_Ip_InstallHandlerPrivileged (_4, _5, 0B);
  instance pointer: 0B  Outer instance pointer: 0B offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:IntCtrl_Ip_InstallHandlerPrivileged (_4, _5, 0B);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  IntCtrl_Ip_ClearPending/14:
    callsite  IntCtrl_Ip_ClearPending/14 -> IntCtrl_Ip_ClearPendingPrivileged/6 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
  Jump functions of caller  IntCtrl_Ip_GetPriority/13:
  Jump functions of caller  IntCtrl_Ip_SetPriority/12:
  Jump functions of caller  IntCtrl_Ip_DisableIrq/11:
    callsite  IntCtrl_Ip_DisableIrq/11 -> IntCtrl_Ip_DisableIrqPrivileged/3 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
  Jump functions of caller  IntCtrl_Ip_EnableIrq/10:
    callsite  IntCtrl_Ip_EnableIrq/10 -> IntCtrl_Ip_EnableIrqPrivileged/2 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
  Jump functions of caller  IntCtrl_Ip_InstallHandler/9:
    callsite  IntCtrl_Ip_InstallHandler/9 -> IntCtrl_Ip_InstallHandlerPrivileged/1 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  IntCtrl_Ip_ConfigIrqRouting/8:
    callsite  IntCtrl_Ip_ConfigIrqRouting/8 -> IntCtrl_Ip_InstallHandlerPrivileged/1 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: CONST: 0B
         value: 0x0, mask: 0xfffffff8
         Unknown VR
  Jump functions of caller  IntCtrl_Ip_Init/7:
    callsite  IntCtrl_Ip_Init/7 -> IntCtrl_Ip_DisableIrqPrivileged/3 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
    callsite  IntCtrl_Ip_Init/7 -> IntCtrl_Ip_EnableIrqPrivileged/2 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
  Jump functions of caller  IntCtrl_Ip_ClearPendingPrivileged/6:
  Jump functions of caller  IntCtrl_Ip_DisableIrqPrivileged/3:
  Jump functions of caller  IntCtrl_Ip_EnableIrqPrivileged/2:
  Jump functions of caller  IntCtrl_Ip_InstallHandlerPrivileged/1:

 Propagating constants:

Not considering IntCtrl_Ip_ClearPending for cloning; -fipa-cp-clone disabled.
Not considering IntCtrl_Ip_GetPriority for cloning; -fipa-cp-clone disabled.
Not considering IntCtrl_Ip_SetPriority for cloning; -fipa-cp-clone disabled.
Not considering IntCtrl_Ip_DisableIrq for cloning; -fipa-cp-clone disabled.
Not considering IntCtrl_Ip_EnableIrq for cloning; -fipa-cp-clone disabled.
Not considering IntCtrl_Ip_InstallHandler for cloning; -fipa-cp-clone disabled.
Not considering IntCtrl_Ip_ConfigIrqRouting for cloning; -fipa-cp-clone disabled.
Not considering IntCtrl_Ip_Init for cloning; -fipa-cp-clone disabled.

overall_size: 109, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: IntCtrl_Ip_ClearPending/14:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: IntCtrl_Ip_GetPriority/13:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: IntCtrl_Ip_SetPriority/12:
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
  Node: IntCtrl_Ip_DisableIrq/11:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: IntCtrl_Ip_EnableIrq/10:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: IntCtrl_Ip_InstallHandler/9:
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
  Node: IntCtrl_Ip_ConfigIrqRouting/8:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: IntCtrl_Ip_Init/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: IntCtrl_Ip_ClearPendingPrivileged/6:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: IntCtrl_Ip_DisableIrqPrivileged/3:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: IntCtrl_Ip_EnableIrqPrivileged/2:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: IntCtrl_Ip_InstallHandlerPrivileged/1:
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
               0B [loc_time: 3, loc_size: 12, prop_time: 0, prop_size: 0]
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

IntCtrl_Ip_ClearPending/14 (IntCtrl_Ip_ClearPending) @0602a460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: IntCtrl_Ip_ClearPendingPrivileged/6 (1073741824 (estimated locally),1.00 per call) 
IntCtrl_Ip_GetPriority/13 (IntCtrl_Ip_GetPriority) @0602a1c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
IntCtrl_Ip_SetPriority/12 (IntCtrl_Ip_SetPriority) @05fdbee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
IntCtrl_Ip_DisableIrq/11 (IntCtrl_Ip_DisableIrq) @05fdb8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: IntCtrl_Ip_DisableIrqPrivileged/3 (1073741824 (estimated locally),1.00 per call) 
IntCtrl_Ip_EnableIrq/10 (IntCtrl_Ip_EnableIrq) @05fdb380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: IntCtrl_Ip_EnableIrqPrivileged/2 (1073741824 (estimated locally),1.00 per call) 
IntCtrl_Ip_InstallHandler/9 (IntCtrl_Ip_InstallHandler) @05fdbe00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: IntCtrl_Ip_InstallHandlerPrivileged/1 (1073741824 (estimated locally),1.00 per call) 
IntCtrl_Ip_ConfigIrqRouting/8 (IntCtrl_Ip_ConfigIrqRouting) @05fdba80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: IntCtrl_Ip_InstallHandlerPrivileged/1 (955630223 (estimated locally),8.09 per call) 
IntCtrl_Ip_Init/7 (IntCtrl_Ip_Init) @05fdb7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: IntCtrl_Ip_DisableIrqPrivileged/3 (477815111 (estimated locally),4.05 per call) IntCtrl_Ip_EnableIrqPrivileged/2 (477815111 (estimated locally),4.05 per call) 
IntCtrl_Ip_ClearPendingPrivileged/6 (IntCtrl_Ip_ClearPendingPrivileged) @05fdb540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: IntCtrl_Ip_ClearPending/14 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
IntCtrl_Ip_DisableIrqPrivileged/3 (IntCtrl_Ip_DisableIrqPrivileged) @05fd6a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: IntCtrl_Ip_Init/7 (477815111 (estimated locally),4.05 per call) IntCtrl_Ip_DisableIrq/11 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
IntCtrl_Ip_EnableIrqPrivileged/2 (IntCtrl_Ip_EnableIrqPrivileged) @05fd6ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: IntCtrl_Ip_Init/7 (477815111 (estimated locally),4.05 per call) IntCtrl_Ip_EnableIrq/10 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
IntCtrl_Ip_InstallHandlerPrivileged/1 (IntCtrl_Ip_InstallHandlerPrivileged) @05fd6c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: IntCtrl_Ip_ConfigIrqRouting/8 (955630223 (estimated locally),8.09 per call) IntCtrl_Ip_InstallHandler/9 (1073741824 (estimated locally),1.00 per call) 
  Calls: 

;; Function IntCtrl_Ip_Init (IntCtrl_Ip_Init, funcdef_no=7, decl_uid=6215, cgraph_uid=8, symbol_order=7)

Modification phase of node IntCtrl_Ip_Init/7
IntCtrl_Ip_Init (const struct IntCtrl_Ip_CtrlConfigType * pIntCtrlCtrlConfig)
{
  uint32 irqIdx;
  const struct IntCtrl_Ip_IrqConfigType * _1;
  long unsigned int _2;
  const struct IntCtrl_Ip_IrqConfigType * _3;
  <unnamed type> _4;
  unsigned char _5;
  _Bool _6;
  long unsigned int _7;
  long unsigned int _14;
  long unsigned int _15;
  long unsigned int eIrqNumber.7_16;
  unsigned char _17;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG irqIdx => 0
  goto <bb 7>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  _1 = pIntCtrlCtrlConfig_12(D)->aIrqConfig;
  _2 = irqIdx_8 * 8;
  _3 = _1 + _2;
  _4 = _3->eIrqNumber;
  _5 = _3->u8IrqPriority;
  # DEBUG eIrqNumber => _4
  # DEBUG u8Priority => _5
  # DEBUG INLINE_ENTRY IntCtrl_Ip_SetPriority
  # DEBUG BEGIN_STMT
  # DEBUG eIrqNumber => _4
  # DEBUG u8Priority => _5
  # DEBUG INLINE_ENTRY IntCtrl_Ip_SetPriorityPrivileged
  # DEBUG BEGIN_STMT
  # DEBUG shift => 4
  # DEBUG BEGIN_STMT
  _14 = (long unsigned int) _5;
  _15 = _14 << 4;
  eIrqNumber.7_16 = (long unsigned int) _4;
  _17 = (unsigned char) _15;
  MEM[(struct S32_NVIC_Type *)3758153984B].IP[eIrqNumber.7_16] ={v} _17;
  # DEBUG eIrqNumber => NULL
  # DEBUG u8Priority => NULL
  # DEBUG eIrqNumber => NULL
  # DEBUG u8Priority => NULL
  # DEBUG BEGIN_STMT
  _6 = _3->bIrqEnabled;
  if (_6 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 477815111]:
  # DEBUG BEGIN_STMT
  # DEBUG eIrqNumber => _4
  # DEBUG INLINE_ENTRY IntCtrl_Ip_EnableIrq
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_EnableIrqPrivileged (_4);
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 477815111]:
  # DEBUG BEGIN_STMT
  # DEBUG eIrqNumber => _4
  # DEBUG INLINE_ENTRY IntCtrl_Ip_DisableIrq
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_DisableIrqPrivileged (_4);

  <bb 6> [local count: 955630223]:
  # DEBUG eIrqNumber => NULL
  # DEBUG eIrqNumber => NULL
  # DEBUG BEGIN_STMT
  irqIdx_13 = irqIdx_8 + 1;
  # DEBUG irqIdx => irqIdx_13

  <bb 7> [local count: 1073741824]:
  # irqIdx_8 = PHI <0(2), irqIdx_13(6)>
  # DEBUG irqIdx => irqIdx_8
  # DEBUG BEGIN_STMT
  _7 = pIntCtrlCtrlConfig_12(D)->u32ConfigIrqCount;
  if (_7 > irqIdx_8)
    goto <bb 3>; [89.00%]
  else
    goto <bb 8>; [11.00%]

  <bb 8> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function IntCtrl_Ip_ConfigIrqRouting (IntCtrl_Ip_ConfigIrqRouting, funcdef_no=8, decl_uid=6217, cgraph_uid=9, symbol_order=8)

Modification phase of node IntCtrl_Ip_ConfigIrqRouting/8
IntCtrl_Ip_ConfigIrqRouting (const struct IntCtrl_Ip_GlobalRouteConfigType * routeConfig)
{
  uint32 irqIdx;
  const struct IntCtrl_Ip_IrqRouteConfigType * _1;
  long unsigned int _2;
  const struct IntCtrl_Ip_IrqRouteConfigType * _3;
  <unnamed type> _4;
  void (*<T5e1>) (void) _5;
  long unsigned int _6;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG irqIdx => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  _1 = routeConfig_10(D)->aIrqConfig;
  _2 = irqIdx_7 * 12;
  _3 = _1 + _2;
  _4 = _3->eIrqNumber;
  _5 = _3->pfHandler;
  # DEBUG eIrqNumber => _4
  # DEBUG pfNewHandler => _5
  # DEBUG pfOldHandler => 0B
  # DEBUG INLINE_ENTRY IntCtrl_Ip_InstallHandler
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_InstallHandlerPrivileged (_4, _5, 0B);
  # DEBUG eIrqNumber => NULL
  # DEBUG pfNewHandler => NULL
  # DEBUG pfOldHandler => NULL
  # DEBUG BEGIN_STMT
  irqIdx_11 = irqIdx_7 + 1;
  # DEBUG irqIdx => irqIdx_11

  <bb 4> [local count: 1073741824]:
  # irqIdx_7 = PHI <0(2), irqIdx_11(3)>
  # DEBUG irqIdx => irqIdx_7
  # DEBUG BEGIN_STMT
  _6 = routeConfig_10(D)->u32ConfigIrqCount;
  if (_6 > irqIdx_7)
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function IntCtrl_Ip_InstallHandler (IntCtrl_Ip_InstallHandler, funcdef_no=9, decl_uid=6221, cgraph_uid=10, symbol_order=9)

Modification phase of node IntCtrl_Ip_InstallHandler/9
IntCtrl_Ip_InstallHandler (IRQn_Type eIrqNumber, void (*IntCtrl_Ip_IrqHandlerType) (void) pfNewHandler, void (*IntCtrl_Ip_IrqHandlerType) (void) * const pfOldHandler)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_InstallHandlerPrivileged (eIrqNumber_2(D), pfNewHandler_3(D), pfOldHandler_4(D));
  return;

}



;; Function IntCtrl_Ip_EnableIrq (IntCtrl_Ip_EnableIrq, funcdef_no=10, decl_uid=6223, cgraph_uid=11, symbol_order=10)

Modification phase of node IntCtrl_Ip_EnableIrq/10
IntCtrl_Ip_EnableIrq (IRQn_Type eIrqNumber)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_EnableIrqPrivileged (eIrqNumber_2(D));
  return;

}



;; Function IntCtrl_Ip_DisableIrq (IntCtrl_Ip_DisableIrq, funcdef_no=11, decl_uid=6225, cgraph_uid=12, symbol_order=11)

Modification phase of node IntCtrl_Ip_DisableIrq/11
IntCtrl_Ip_DisableIrq (IRQn_Type eIrqNumber)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_DisableIrqPrivileged (eIrqNumber_2(D));
  return;

}



;; Function IntCtrl_Ip_SetPriority (IntCtrl_Ip_SetPriority, funcdef_no=12, decl_uid=6228, cgraph_uid=13, symbol_order=12)

Modification phase of node IntCtrl_Ip_SetPriority/12
IntCtrl_Ip_SetPriority (IRQn_Type eIrqNumber, uint8 u8Priority)
{
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int eIrqNumber.7_6;
  unsigned char _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG eIrqNumber => eIrqNumber_2(D)
  # DEBUG u8Priority => u8Priority_3(D)
  # DEBUG INLINE_ENTRY IntCtrl_Ip_SetPriorityPrivileged
  # DEBUG BEGIN_STMT
  # DEBUG shift => 4
  # DEBUG BEGIN_STMT
  _4 = (long unsigned int) u8Priority_3(D);
  _5 = _4 << 4;
  eIrqNumber.7_6 = (long unsigned int) eIrqNumber_2(D);
  _7 = (unsigned char) _5;
  MEM[(struct S32_NVIC_Type *)3758153984B].IP[eIrqNumber.7_6] ={v} _7;
  # DEBUG eIrqNumber => NULL
  # DEBUG u8Priority => NULL
  return;

}



;; Function IntCtrl_Ip_GetPriority (IntCtrl_Ip_GetPriority, funcdef_no=13, decl_uid=6230, cgraph_uid=14, symbol_order=13)

Modification phase of node IntCtrl_Ip_GetPriority/13
IntCtrl_Ip_GetPriority (IRQn_Type eIrqNumber)
{
  uint8 priority;
  long unsigned int eIrqNumber.8_3;
  unsigned char _4;
  int _5;
  int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG eIrqNumber => eIrqNumber_2(D)
  # DEBUG INLINE_ENTRY IntCtrl_Ip_GetPriorityPrivileged
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG shift => 4
  # DEBUG BEGIN_STMT
  eIrqNumber.8_3 = (long unsigned int) eIrqNumber_2(D);
  _4 ={v} MEM[(struct S32_NVIC_Type *)3758153984B].IP[eIrqNumber.8_3];
  _5 = (int) _4;
  _6 = _5 >> 4;
  priority_7 = (uint8) _6;
  # DEBUG priority => priority_7
  # DEBUG BEGIN_STMT
  # DEBUG eIrqNumber => NULL
  # DEBUG priority => NULL
  return priority_7;

}



;; Function IntCtrl_Ip_ClearPending (IntCtrl_Ip_ClearPending, funcdef_no=14, decl_uid=6232, cgraph_uid=15, symbol_order=14)

Modification phase of node IntCtrl_Ip_ClearPending/14
IntCtrl_Ip_ClearPending (IRQn_Type eIrqNumber)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_ClearPendingPrivileged (eIrqNumber_2(D));
  return;

}


