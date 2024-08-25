
IPA constant propagation start:
Determining dynamic type for call: Ftm_Ocu_Ip_ClearChannelEventStatus (_2, NumChannel_4(D));
  Starting walk at: Ftm_Ocu_Ip_ClearChannelEventStatus (_2, NumChannel_4(D));
  instance pointer: _2  Outer instance pointer: _2 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Enter_Ocu_OCU_EXCLUSIVE_AREA_10 ();

IPA structures before propagation:

Jump functions:
  Jump functions of caller  SchM_Exit_Ocu_OCU_EXCLUSIVE_AREA_10/45:
  Jump functions of caller  SchM_Enter_Ocu_OCU_EXCLUSIVE_AREA_10/44:
  Jump functions of caller  SchM_Exit_Ocu_OCU_EXCLUSIVE_AREA_15/43:
  Jump functions of caller  SchM_Enter_Ocu_OCU_EXCLUSIVE_AREA_15/42:
  Jump functions of caller  FTM_0_CH_0_CH_1_ISR/39:
    callsite  FTM_0_CH_0_CH_1_ISR/39 -> Ftm_Ocu_Ip_Irq_ProcessChannelInterrupt/38 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
    callsite  FTM_0_CH_0_CH_1_ISR/39 -> Ftm_Ocu_Ip_Irq_ProcessChannelInterrupt/38 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  Ftm_Ocu_Ip_Irq_ProcessChannelInterrupt/38:
    callsite  Ftm_Ocu_Ip_Irq_ProcessChannelInterrupt/38 -> Ftm_Ocu_Ip_Irq_ClearChannelInterrupt/37 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _8 (_10);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Ftm_Ocu_Ip_Irq_ClearChannelInterrupt/37:
    callsite  Ftm_Ocu_Ip_Irq_ClearChannelInterrupt/37 -> Ftm_Ocu_Ip_ClearChannelEventStatus/9 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Ftm_Ocu_Ip_ClearChannelEventStatus/9:

 Propagating constants:

Not considering FTM_0_CH_0_CH_1_ISR for cloning; -fipa-cp-clone disabled.

overall_size: 70, max_new_size: 11001
 - context independent values, size: 26, time_benefit: 49.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 13, time_benefit: 50.000000
     Decided to specialize for all known contexts, code not going to grow.

IPA lattices after all propagation:

Lattices:
  Node: FTM_0_CH_0_CH_1_ISR/39:
  Node: Ftm_Ocu_Ip_Irq_ProcessChannelInterrupt/38:
    param [0]: 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x0
         uint8 [0, 0]
        AGGS VARIABLE
    param [1]: 0 [loc_time: 50, loc_size: 28, prop_time: 0, prop_size: 0]
               1 [loc_time: 50, loc_size: 28, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x1, mask = 0x1
         uint8 [0, 1]
        AGGS VARIABLE
  Node: Ftm_Ocu_Ip_Irq_ClearChannelInterrupt/37:
    param [0]: 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x0
         uint8 [0, 0]
        AGGS VARIABLE
    param [1]: 1 [loc_time: 53, loc_size: 12, prop_time: 0, prop_size: 0]
               0 [loc_time: 53, loc_size: 12, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x1, mask = 0x1
         uint8 [0, 1]
        AGGS VARIABLE
  Node: Ftm_Ocu_Ip_ClearChannelEventStatus/9:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: 0 [loc_time: 3, loc_size: 6, prop_time: 0, prop_size: 0]
               1 [loc_time: 3, loc_size: 6, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x1, mask = 0x1
         uint8 [0, 1]
        AGGS VARIABLE

IPA decision stage:

 - Creating a specialized node of Ftm_Ocu_Ip_Irq_ProcessChannelInterrupt/38 for all known contexts.
    replacing param #0 InstNum with const 0
 - Creating a specialized node of Ftm_Ocu_Ip_Irq_ClearChannelInterrupt/37 for all known contexts.
    replacing param #0 InstNum with const 0
Propagated bits info for function Ftm_Ocu_Ip_Irq_ClearChannelInterrupt.constprop/48:
 param 0: value = 0x0, mask = 0x0
 param 1: value = 0x1, mask = 0x1
Propagated bits info for function Ftm_Ocu_Ip_Irq_ProcessChannelInterrupt.constprop/47:
 param 0: value = 0x0, mask = 0x0
 param 1: value = 0x1, mask = 0x1
Propagated bits info for function Ftm_Ocu_Ip_Irq_ProcessChannelInterrupt/38:
 param 0: value = 0x0, mask = 0x0
 param 1: value = 0x1, mask = 0x1
Propagated bits info for function Ftm_Ocu_Ip_Irq_ClearChannelInterrupt/37:
 param 0: value = 0x0, mask = 0x0
 param 1: value = 0x1, mask = 0x1
Propagated bits info for function Ftm_Ocu_Ip_ClearChannelEventStatus/9:
 param 1: value = 0x1, mask = 0x1

IPA constant propagation end

Reclaiming functions: Ftm_Ocu_Ip_Irq_ProcessChannelInterrupt/38 Ftm_Ocu_Ip_Irq_ClearChannelInterrupt/37
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Ftm_Ocu_Ip_Irq_ClearChannelInterrupt.constprop.0/48 (Ftm_Ocu_Ip_Irq_ClearChannelInterrupt.constprop) @0689f0e0
  Type: function definition analyzed
  Visibility:
  References: Ftm_Ocu_Ip_gapcxBase/40 (read)
  Referring: 
  Clone of Ftm_Ocu_Ip_Irq_ClearChannelInterrupt/37
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: Ftm_Ocu_Ip_Irq_ProcessChannelInterrupt.constprop/47 (1073741823 (estimated locally),1.00 per call) 
  Calls: SchM_Enter_Ocu_OCU_EXCLUSIVE_AREA_10/44 (177167401 (estimated locally),0.17 per call) Ftm_Ocu_Ip_ClearChannelEventStatus/9 (177167401 (estimated locally),0.17 per call) SchM_Exit_Ocu_OCU_EXCLUSIVE_AREA_10/45 (177167401 (estimated locally),0.17 per call) 
Ftm_Ocu_Ip_Irq_ProcessChannelInterrupt.constprop.0/47 (Ftm_Ocu_Ip_Irq_ProcessChannelInterrupt.constprop) @0688c620
  Type: function definition analyzed
  Visibility:
  References: Ftm_Ocu_Ip_gapcxBase/40 (read)Ftm_Ocu_Ip_gaxChState/41 (read)Ftm_Ocu_Ip_gaxChState/41 (read)Ftm_Ocu_Ip_gaxChState/41 (read)
  Referring: 
  Clone of Ftm_Ocu_Ip_Irq_ProcessChannelInterrupt/38
  Availability: local
  Function flags: count:1073741823 (estimated locally) local optimize_size
  Called by: FTM_0_CH_0_CH_1_ISR/39 (354334802 (estimated locally),0.33 per call) FTM_0_CH_0_CH_1_ISR/39 (354334802 (estimated locally),0.33 per call) 
  Calls: SchM_Enter_Ocu_OCU_EXCLUSIVE_AREA_15/42 (1073741823 (estimated locally),1.00 per call) SchM_Exit_Ocu_OCU_EXCLUSIVE_AREA_15/43 (1073741823 (estimated locally),1.00 per call) Ftm_Ocu_Ip_Irq_ClearChannelInterrupt.constprop/48 (1073741823 (estimated locally),1.00 per call) 
   Indirect call(93952410 (estimated locally),0.09 per call) 
SchM_Exit_Ocu_OCU_EXCLUSIVE_AREA_10/45 (SchM_Exit_Ocu_OCU_EXCLUSIVE_AREA_10) @06980620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Ftm_Ocu_Ip_Irq_ClearChannelInterrupt.constprop/48 (177167401 (estimated locally),0.17 per call) 
  Calls: 
SchM_Enter_Ocu_OCU_EXCLUSIVE_AREA_10/44 (SchM_Enter_Ocu_OCU_EXCLUSIVE_AREA_10) @06980540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Ftm_Ocu_Ip_Irq_ClearChannelInterrupt.constprop/48 (177167401 (estimated locally),0.17 per call) 
  Calls: 
SchM_Exit_Ocu_OCU_EXCLUSIVE_AREA_15/43 (SchM_Exit_Ocu_OCU_EXCLUSIVE_AREA_15) @06980380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Ftm_Ocu_Ip_Irq_ProcessChannelInterrupt.constprop/47 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Ocu_OCU_EXCLUSIVE_AREA_15/42 (SchM_Enter_Ocu_OCU_EXCLUSIVE_AREA_15) @069802a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Ftm_Ocu_Ip_Irq_ProcessChannelInterrupt.constprop/47 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
Ftm_Ocu_Ip_gaxChState/41 (Ftm_Ocu_Ip_gaxChState) @06977f78
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Ftm_Ocu_Ip_Irq_ProcessChannelInterrupt.constprop.0/47 (read)Ftm_Ocu_Ip_Irq_ProcessChannelInterrupt.constprop.0/47 (read)Ftm_Ocu_Ip_Irq_ProcessChannelInterrupt.constprop.0/47 (read)
  Availability: not_available
  Varpool flags:
Ftm_Ocu_Ip_gapcxBase/40 (Ftm_Ocu_Ip_gapcxBase) @06977a20
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Ftm_Ocu_Ip_Irq_ClearChannelInterrupt.constprop.0/48 (read)Ftm_Ocu_Ip_Irq_ProcessChannelInterrupt.constprop.0/47 (read)FTM_0_CH_0_CH_1_ISR/39 (read)
  Availability: not_available
  Varpool flags: read-only
FTM_0_CH_0_CH_1_ISR/39 (FTM_0_CH_0_CH_1_ISR) @06976620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Ftm_Ocu_Ip_gapcxBase/40 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Ftm_Ocu_Ip_Irq_ProcessChannelInterrupt.constprop/47 (354334802 (estimated locally),0.33 per call) Ftm_Ocu_Ip_Irq_ProcessChannelInterrupt.constprop/47 (354334802 (estimated locally),0.33 per call) 
Ftm_Ocu_Ip_Irq_ProcessChannelInterrupt/38 (Ftm_Ocu_Ip_Irq_ProcessChannelInterrupt) @06976d20
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Ftm_Ocu_Ip_Irq_ClearChannelInterrupt/37 (Ftm_Ocu_Ip_Irq_ClearChannelInterrupt) @06976a80
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Ftm_Ocu_Ip_ClearChannelEventStatus/9 (Ftm_Ocu_Ip_ClearChannelEventStatus) @0688c8c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Ftm_Ocu_Ip_Irq_ClearChannelInterrupt.constprop/48 (177167401 (estimated locally),0.17 per call) 
  Calls: 

;; Function Ftm_Ocu_Ip_Irq_ProcessChannelInterrupt.constprop (Ftm_Ocu_Ip_Irq_ProcessChannelInterrupt.constprop.0, funcdef_no=41, decl_uid=5938, cgraph_uid=46, symbol_order=47)

Modification phase of node Ftm_Ocu_Ip_Irq_ProcessChannelInterrupt.constprop/47
Adjusting mask for param 1 to 0x1
Setting value range of param 1 [0, 1]
Ftm_Ocu_Ip_Irq_ProcessChannelInterrupt.constprop (uint8 ChIdx)
{
  uint8 InstNum;
  int _1;
  int _3;
  struct Ftm_Ocu_Ip_xRegLayoutType * _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  void (*<T4a5>) (uint16) _9;
  _Bool _10;
  short unsigned int _11;

  <bb 8> [local count: 1073741823]:
  # DEBUG InstNum => 0

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = 0;
  _3 = (int) ChIdx_2(D);
  # DEBUG D#1 => &Ftm_Ocu_Ip_gaxChState[_1][_3]
  # DEBUG pChannelState => D#1
  # DEBUG BEGIN_STMT
  SchM_Enter_Ocu_OCU_EXCLUSIVE_AREA_15 ();
  # DEBUG BEGIN_STMT
  _4 = Ftm_Ocu_Ip_gapcxBase[_1];
  _5 ={v} _4->CONTROLS[_3].CSC;
  _6 = _5 & 64;
  # DEBUG IsChEvEnabled => _6 != 0
  # DEBUG BEGIN_STMT
  _7 ={v} _4->CONTROLS[_3].CSC;
  _8 = _7 & 128;
  # DEBUG HasChEvOccurred => _8 != 0
  # DEBUG BEGIN_STMT
  SchM_Exit_Ocu_OCU_EXCLUSIVE_AREA_15 ();
  # DEBUG BEGIN_STMT
  Ftm_Ocu_Ip_Irq_ClearChannelInterrupt (0, ChIdx_2(D));
  # DEBUG BEGIN_STMT
  if (_6 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 3> [local count: 536870911]:
  if (_8 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 4> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  _9 = MEM[(const struct Ftm_Ocu_Ip_ChStateType *)&Ftm_Ocu_Ip_gaxChState][_1][_3].mCallbackFunc;
  if (_9 != 0B)
    goto <bb 5>; [70.00%]
  else
    goto <bb 7>; [30.00%]

  <bb 5> [local count: 187904819]:
  # DEBUG BEGIN_STMT
  _10 = MEM[(const struct Ftm_Ocu_Ip_ChStateType *)&Ftm_Ocu_Ip_gaxChState][_1][_3].mChannelInit;
  if (_10 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 93952410]:
  # DEBUG BEGIN_STMT
  _11 = MEM[(const struct Ftm_Ocu_Ip_ChStateType *)&Ftm_Ocu_Ip_gaxChState][_1][_3].mCallbackParam;
  _9 (_11);

  <bb 7> [local count: 1073741824]:
  return;

}



;; Function FTM_0_CH_0_CH_1_ISR (FTM_0_CH_0_CH_1_ISR, funcdef_no=39, decl_uid=5796, cgraph_uid=40, symbol_order=39)

Modification phase of node FTM_0_CH_0_CH_1_ISR/39
FTM_0_CH_0_CH_1_ISR ()
{
  struct Ftm_Ocu_Ip_xRegLayoutType * _1;
  long unsigned int _8;
  _Bool _9;
  long unsigned int _10;
  long unsigned int _11;
  _Bool _12;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG moduleIndex => 0
  # DEBUG BEGIN_STMT
  # DEBUG channelIndex => 0
  # DEBUG BEGIN_STMT
  _1 = Ftm_Ocu_Ip_gapcxBase[0];
  # DEBUG acpcFtmBase => _1
  # DEBUG NumChannel => 0
  # DEBUG INLINE_ENTRY Ftm_Ocu_Ip_GetChannelEventStatus
  # DEBUG BEGIN_STMT
  _8 ={v} MEM[(const struct Ftm_Ocu_Ip_xRegLayoutType *)_1].STATUS;
  _9 = (_Bool) _8;
  # DEBUG acpcFtmBase => NULL
  # DEBUG NumChannel => NULL
  if (_9 != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Ftm_Ocu_Ip_Irq_ProcessChannelInterrupt (0, 0);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG channelIndex => 1
  # DEBUG BEGIN_STMT
  # DEBUG acpcFtmBase => _1
  # DEBUG NumChannel => 1
  # DEBUG INLINE_ENTRY Ftm_Ocu_Ip_GetChannelEventStatus
  # DEBUG BEGIN_STMT
  _10 ={v} MEM[(const struct Ftm_Ocu_Ip_xRegLayoutType *)_1].STATUS;
  _11 = _10 >> 1;
  _12 = (_Bool) _11;
  # DEBUG acpcFtmBase => NULL
  # DEBUG NumChannel => NULL
  if (_12 != 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Ftm_Ocu_Ip_Irq_ProcessChannelInterrupt (0, 1);

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  return;

}


