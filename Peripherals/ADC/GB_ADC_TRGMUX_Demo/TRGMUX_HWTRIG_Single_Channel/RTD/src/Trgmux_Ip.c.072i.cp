
IPA constant propagation start:
Determining dynamic type for call: hwAcc_SetInputForOutput (1074147328B, Input_9(D), LocOutput_7);
  Starting walk at: hwAcc_SetInputForOutput (1074147328B, Input_9(D), LocOutput_7);
  instance pointer: 1074147328B  Outer instance pointer: 1074147328B offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_20 ();
Determining dynamic type for call: _1 = hwAcc_Init (1074147328B);
  Starting walk at: _1 = hwAcc_Init (1074147328B);
  instance pointer: 1074147328B  Outer instance pointer: 1074147328B offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_19 ();
Determining dynamic type for call: hwAcc_SetInputForOutput (1074147328B, LocInput_23, LocOutput_22);
  Starting walk at: hwAcc_SetInputForOutput (1074147328B, LocInput_23, LocOutput_22);
  instance pointer: 1074147328B  Outer instance pointer: 1074147328B offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:hwAcc_SetInputForOutput (1074147328B, LocInput_23, LocOutput_22);
  Function call may change dynamic type:_1 = hwAcc_Init (1074147328B);
  Function call may change dynamic type:SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_19 ();

IPA structures before propagation:

Jump functions:
  Jump functions of caller  SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_21/14:
  Jump functions of caller  SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_21/13:
  Jump functions of caller  SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_20/12:
  Jump functions of caller  SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_20/11:
  Jump functions of caller  SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_19/10:
  Jump functions of caller  SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_19/9:
  Jump functions of caller  Trgmux_Ip_SetLock/8:
  Jump functions of caller  Trgmux_Ip_SetInput/7:
    callsite  Trgmux_Ip_SetInput/7 -> hwAcc_SetInputForOutput/1 : 
       param 0: CONST: 1074147328B
         value: 0x0, mask: 0xfffffff8
         VR  ~[0, 0]
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         VR  [0, 255]
  Jump functions of caller  Trgmux_Ip_Init/6:
    callsite  Trgmux_Ip_Init/6 -> hwAcc_SetInputForOutput/1 : 
       param 0: CONST: 1074147328B
         value: 0x0, mask: 0xfffffff8
         VR  ~[0, 0]
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         VR  [0, 255]
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         VR  [0, 255]
    callsite  Trgmux_Ip_Init/6 -> hwAcc_Init/0 : 
       param 0: CONST: 1074147328B
         value: 0x0, mask: 0xfffffff8
         VR  ~[0, 0]
  Jump functions of caller  hwAcc_SetInputForOutput/1:
  Jump functions of caller  hwAcc_Init/0:

 Propagating constants:

Not considering Trgmux_Ip_SetLock for cloning; -fipa-cp-clone disabled.
Not considering Trgmux_Ip_SetInput for cloning; -fipa-cp-clone disabled.
Not considering Trgmux_Ip_Init for cloning; -fipa-cp-clone disabled.

overall_size: 92, max_new_size: 11001
 - context independent values, size: 13, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 12, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.

IPA lattices after all propagation:

Lattices:
  Node: Trgmux_Ip_SetLock/8:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Trgmux_Ip_SetInput/7:
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
  Node: Trgmux_Ip_Init/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: hwAcc_SetInputForOutput/1:
    param [0]: 1074147328B [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffff8
         struct TRGMUX_Type * const [1074147328B, 1074147328B]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xff
         const uint32 [0, 255]
        AGGS VARIABLE
  Node: hwAcc_Init/0:
    param [0]: 1074147328B [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffff8
         struct TRGMUX_Type * const [1074147328B, 1074147328B]
        AGGS VARIABLE

IPA decision stage:

 - Creating a specialized node of hwAcc_SetInputForOutput/1 for all known contexts.
    replacing param #0 pTrgmux with const 1074147328B
 - Creating a specialized node of hwAcc_Init/0 for all known contexts.
    replacing param #0 pTrgmux with const 1074147328B
Propagated bits info for function hwAcc_Init.constprop/18:
 param 0: value = 0x0, mask = 0xfffffff8
Propagated bits info for function hwAcc_SetInputForOutput.constprop/17:
 param 0: value = 0x0, mask = 0xfffffff8
 param 2: value = 0x0, mask = 0xff
Propagated bits info for function hwAcc_SetInputForOutput/1:
 param 0: value = 0x0, mask = 0xfffffff8
 param 2: value = 0x0, mask = 0xff
Propagated bits info for function hwAcc_Init/0:
 param 0: value = 0x0, mask = 0xfffffff8

IPA constant propagation end

Reclaiming functions: hwAcc_SetInputForOutput/1 hwAcc_Init/0
Reclaiming variables:
Clearing address taken flags:
Symbol table:

hwAcc_Init.constprop.0/18 (hwAcc_Init.constprop) @05bb00e0
  Type: function definition analyzed
  Visibility:
  References: 
  Referring: 
  Clone of hwAcc_Init/0
  Availability: local
  Function flags: count:39728448 (estimated locally) local optimize_size
  Called by: Trgmux_Ip_Init/6 (178956969 (estimated locally),1.00 per call) 
  Calls: 
hwAcc_SetInputForOutput.constprop.0/17 (hwAcc_SetInputForOutput.constprop) @05baad20
  Type: function definition analyzed
  Visibility:
  References: 
  Referring: 
  Clone of hwAcc_SetInputForOutput/1
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: Trgmux_Ip_Init/6 (59055800 (estimated locally),0.33 per call) Trgmux_Ip_SetInput/7 (354334802 (estimated locally),0.33 per call) 
  Calls: 
SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_21/14 (SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_21) @05d921c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Trgmux_Ip_SetLock/8 (354334802 (estimated locally),0.33 per call) 
  Calls: 
SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_21/13 (SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_21) @05d920e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Trgmux_Ip_SetLock/8 (354334802 (estimated locally),0.33 per call) 
  Calls: 
SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_20/12 (SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_20) @05bfa0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Trgmux_Ip_SetInput/7 (354334802 (estimated locally),0.33 per call) 
  Calls: 
SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_20/11 (SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_20) @05bfaee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Trgmux_Ip_SetInput/7 (354334802 (estimated locally),0.33 per call) 
  Calls: 
SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_19/10 (SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_19) @05bfaa80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Trgmux_Ip_Init/6 (59055800 (estimated locally),0.33 per call) 
  Calls: 
SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_19/9 (SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_19) @05bfa9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Trgmux_Ip_Init/6 (178956969 (estimated locally),1.00 per call) 
  Calls: 
Trgmux_Ip_SetLock/8 (Trgmux_Ip_SetLock) @05bfa540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: g_pxTrgmuxInit/5 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_21/14 (354334802 (estimated locally),0.33 per call) SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_21/13 (354334802 (estimated locally),0.33 per call) 
Trgmux_Ip_SetInput/7 (Trgmux_Ip_SetInput) @05bfa2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: g_pxTrgmuxInit/5 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_20/12 (354334802 (estimated locally),0.33 per call) hwAcc_SetInputForOutput.constprop/17 (354334802 (estimated locally),0.33 per call) SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_20/11 (354334802 (estimated locally),0.33 per call) 
Trgmux_Ip_Init/6 (Trgmux_Ip_Init) @05bfa000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: g_pxTrgmuxInit/5 (write)
  Referring: 
  Availability: available
  Function flags: count:178956969 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_19/10 (59055800 (estimated locally),0.33 per call) hwAcc_SetInputForOutput.constprop/17 (59055800 (estimated locally),0.33 per call) hwAcc_Init.constprop/18 (178956969 (estimated locally),1.00 per call) SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_19/9 (178956969 (estimated locally),1.00 per call) 
g_pxTrgmuxInit/5 (g_pxTrgmuxInit) @05bf3318
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Trgmux_Ip_Init/6 (write)Trgmux_Ip_SetInput/7 (read)Trgmux_Ip_SetLock/8 (read)
  Availability: available
  Varpool flags:
hwAcc_SetInputForOutput/1 (hwAcc_SetInputForOutput) @05baa9a0
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
hwAcc_Init/0 (hwAcc_Init) @05baa380
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:39728448 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function Trgmux_Ip_Init (Trgmux_Ip_Init, funcdef_no=4, decl_uid=5542, cgraph_uid=5, symbol_order=6)

Modification phase of node Trgmux_Ip_Init/6
Trgmux_Ip_Init (const struct Trgmux_Ip_InitType * const pxTrgmuxInit)
{
  Trgmux_Ip_StatusType Status;
  boolean LocLock;
  uint32 LocOutput;
  uint32 LocInput;
  uint32 LocTriggerIdx;
  <unnamed type> _1;
  const struct Trgmux_Ip_LogicTriggerType * _2;
  unsigned char _3;
  unsigned char _4;
  const struct Trgmux_Ip_LogicTriggerType * _5;
  unsigned char _6;
  unsigned char _25;
  int _26;
  long unsigned int _27;
  long unsigned int _28;

  <bb 2> [local count: 178956969]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG Status => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG LocTrgmuxBase => 1074147328B
  # DEBUG BEGIN_STMT
  SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_19 ();
  # DEBUG BEGIN_STMT
  _1 = hwAcc_Init (1074147328B);
  if (_1 != 0)
    goto <bb 10>; [67.00%]
  else
    goto <bb 12>; [33.00%]

  <bb 12> [local count: 59055800]:
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 59055800]:
  # DEBUG BEGIN_STMT
  _2 = pxTrgmuxInit_18(D)->paxLogicTrigger[0];
  # DEBUG D#2 => _2->HwInstId
  # DEBUG LocInst => D#2
  # DEBUG BEGIN_STMT
  _3 = _2->Output;
  LocOutput_22 = (uint32) _3;
  # DEBUG LocOutput => LocOutput_22
  # DEBUG BEGIN_STMT
  _4 = _2->Input;
  LocInput_23 = (uint32) _4;
  # DEBUG LocInput => LocInput_23
  # DEBUG BEGIN_STMT
  # DEBUG LocTrgmuxBase => 1074147328B
  # DEBUG BEGIN_STMT
  hwAcc_SetInputForOutput (1074147328B, LocInput_23, LocOutput_22);
  # DEBUG BEGIN_STMT
  # DEBUG LocTriggerIdx => 1

  <bb 4> [local count: 118111600]:
  # LocTriggerIdx_8 = PHI <1(3), 0(12)>
  # DEBUG Status => NULL
  # DEBUG LocTriggerIdx => LocTriggerIdx_8
  # DEBUG LocTrgmuxBase => 1074147328B
  # DEBUG BEGIN_STMT
  if (LocTriggerIdx_8 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 11> [local count: 59055800]:
  goto <bb 7>; [100.00%]

  <bb 5> [local count: 1014686024]:
  # DEBUG BEGIN_STMT
  _5 = pxTrgmuxInit_18(D)->paxLogicTrigger[0];
  LocLock_20 = _5->Lock;
  # DEBUG LocLock => LocLock_20
  # DEBUG BEGIN_STMT
  if (LocLock_20 != 0)
    goto <bb 6>; [67.00%]
  else
    goto <bb 13>; [33.00%]

  <bb 13> [local count: 334846387]:
  goto <bb 8>; [100.00%]

  <bb 6> [local count: 679839636]:
  # DEBUG BEGIN_STMT
  _6 = _5->Output;
  # DEBUG D#1 => (uint32) _6
  # DEBUG LocOutput => D#1
  # DEBUG BEGIN_STMT
  # DEBUG pTrgmux => 1074147328B
  # DEBUG Output => D#1
  # DEBUG INLINE_ENTRY hwAcc_SetLockForOutput
  # DEBUG BEGIN_STMT
  _25 = _6 >> 2;
  _26 = (int) _25;
  _27 ={v} MEM[(struct TRGMUX_Type *)1074147328B].TRGMUXn[_26];
  _28 = _27 | 2147483648;
  MEM[(struct TRGMUX_Type *)1074147328B].TRGMUXn[_26] ={v} _28;

  <bb 7> [local count: 738895437]:
  # LocTriggerIdx_11 = PHI <1(6), 0(11)>

  <bb 8> [local count: 1073741824]:
  # LocTriggerIdx_9 = PHI <LocTriggerIdx_11(7), 1(13)>
  # DEBUG pTrgmux => NULL
  # DEBUG Output => NULL
  # DEBUG LocTriggerIdx => LocTriggerIdx_9
  # DEBUG BEGIN_STMT
  if (LocTriggerIdx_9 == 0)
    goto <bb 5>; [94.50%]
  else
    goto <bb 9>; [5.50%]

  <bb 9> [local count: 59055800]:
  # DEBUG BEGIN_STMT
  SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_19 ();
  # DEBUG BEGIN_STMT
  g_pxTrgmuxInit = pxTrgmuxInit_18(D);

  <bb 10> [local count: 178956970]:
  # Status_7 = PHI <1(2), 0(9)>
  # DEBUG Status => NULL
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Status_7;

}



;; Function Trgmux_Ip_SetInput (Trgmux_Ip_SetInput, funcdef_no=5, decl_uid=5545, cgraph_uid=6, symbol_order=7)

Modification phase of node Trgmux_Ip_SetInput/7
Trgmux_Ip_SetInput (const uint32 LogicTrigger, const uint32 Input)
{
  Trgmux_Ip_StatusType Status;
  uint32 LocOutput;
  const struct Trgmux_Ip_InitType * g_pxTrgmuxInit.0_1;
  const struct Trgmux_Ip_LogicTriggerType * _2;
  unsigned char _3;
  unsigned char _13;
  int _14;
  long unsigned int _15;
  long unsigned int _16;
  _Bool _17;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  g_pxTrgmuxInit.0_1 = g_pxTrgmuxInit;
  _2 = g_pxTrgmuxInit.0_1->paxLogicTrigger[LogicTrigger_6(D)];
  # DEBUG D#3 => _2->HwInstId
  # DEBUG LocHwInst => (uint32) D#3
  # DEBUG BEGIN_STMT
  _3 = _2->Output;
  LocOutput_7 = (uint32) _3;
  # DEBUG LocOutput => LocOutput_7
  # DEBUG BEGIN_STMT
  # DEBUG LocTrgmuxBase => 1074147328B
  # DEBUG BEGIN_STMT
  # DEBUG Status => 0
  # DEBUG BEGIN_STMT
  # DEBUG pTrgmux => 1074147328B
  # DEBUG Output => LocOutput_7
  # DEBUG INLINE_ENTRY hwAcc_GetLockForOutput
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _13 = _3 >> 2;
  _14 = (int) _13;
  _15 ={v} MEM[(const struct TRGMUX_Type *)1074147328B].TRGMUXn[_14];
  _16 = _15 >> 31;
  _17 = (_Bool) _16;
  # DEBUG Status => _17
  # DEBUG BEGIN_STMT
  # DEBUG pTrgmux => NULL
  # DEBUG Output => NULL
  if (_17 != 0)
    goto <bb 4>; [67.00%]
  else
    goto <bb 3>; [33.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG Status => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_20 ();
  # DEBUG BEGIN_STMT
  hwAcc_SetInputForOutput (1074147328B, Input_9(D), LocOutput_7);
  # DEBUG BEGIN_STMT
  SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_20 ();

  <bb 4> [local count: 1073741824]:
  # Status_12 = PHI <1(2), 0(3)>
  # DEBUG Status => NULL
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Status_12;

}



;; Function Trgmux_Ip_SetLock (Trgmux_Ip_SetLock, funcdef_no=6, decl_uid=5547, cgraph_uid=7, symbol_order=8)

Modification phase of node Trgmux_Ip_SetLock/8
Trgmux_Ip_SetLock (const uint32 LogicTrigger)
{
  Trgmux_Ip_StatusType Status;
  const struct Trgmux_Ip_InitType * g_pxTrgmuxInit.2_1;
  const struct Trgmux_Ip_LogicTriggerType * _2;
  unsigned char _3;
  unsigned char _10;
  int _11;
  long unsigned int _12;
  long unsigned int _13;
  _Bool _14;
  long unsigned int _15;
  long unsigned int _16;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  g_pxTrgmuxInit.2_1 = g_pxTrgmuxInit;
  _2 = g_pxTrgmuxInit.2_1->paxLogicTrigger[LogicTrigger_6(D)];
  # DEBUG D#5 => _2->HwInstId
  # DEBUG LocHwInst => (uint32) D#5
  # DEBUG BEGIN_STMT
  _3 = _2->Output;
  # DEBUG D#4 => (uint32) _3
  # DEBUG LocOutput => D#4
  # DEBUG BEGIN_STMT
  # DEBUG LocTrgmuxBase => 1074147328B
  # DEBUG BEGIN_STMT
  # DEBUG Status => 0
  # DEBUG BEGIN_STMT
  # DEBUG pTrgmux => 1074147328B
  # DEBUG Output => D#4
  # DEBUG INLINE_ENTRY hwAcc_GetLockForOutput
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _10 = _3 >> 2;
  _11 = (int) _10;
  _12 ={v} MEM[(const struct TRGMUX_Type *)1074147328B].TRGMUXn[_11];
  _13 = _12 >> 31;
  _14 = (_Bool) _13;
  # DEBUG Status => _14
  # DEBUG BEGIN_STMT
  # DEBUG pTrgmux => NULL
  # DEBUG Output => NULL
  if (_14 != 0)
    goto <bb 4>; [67.00%]
  else
    goto <bb 3>; [33.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG Status => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_21 ();
  # DEBUG BEGIN_STMT
  # DEBUG pTrgmux => 1074147328B
  # DEBUG Output => D#4
  # DEBUG INLINE_ENTRY hwAcc_SetLockForOutput
  # DEBUG BEGIN_STMT
  _15 ={v} MEM[(struct TRGMUX_Type *)1074147328B].TRGMUXn[_11];
  _16 = _15 | 2147483648;
  MEM[(struct TRGMUX_Type *)1074147328B].TRGMUXn[_11] ={v} _16;
  # DEBUG pTrgmux => NULL
  # DEBUG Output => NULL
  # DEBUG BEGIN_STMT
  SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_21 ();

  <bb 4> [local count: 1073741824]:
  # Status_9 = PHI <1(2), 0(3)>
  # DEBUG Status => NULL
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Status_9;

}


