
IPA constant propagation start:
Determining dynamic type for call: Clock_Ip_SetSpll_TrustedCall.part.0 (Config_5(D));
  Starting walk at: Clock_Ip_SetSpll_TrustedCall.part.0 (Config_5(D));
  instance pointer: Config_5(D)  Outer instance pointer: Config_5(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Clock_Ip_EnableSpll_TrustedCall (Config_2(D));
  Starting walk at: Clock_Ip_EnableSpll_TrustedCall (Config_2(D));
  instance pointer: Config_2(D)  Outer instance pointer: Config_2(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Clock_Ip_SetSpll_TrustedCall (Config_2(D));
  Starting walk at: Clock_Ip_SetSpll_TrustedCall (Config_2(D));
  instance pointer: Config_2(D)  Outer instance pointer: Config_2(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Clock_Ip_ResetSpll_TrustedCall (Config_2(D));
  Starting walk at: Clock_Ip_ResetSpll_TrustedCall (Config_2(D));
  instance pointer: Config_2(D)  Outer instance pointer: Config_2(D) offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Clock_Ip_EnableSpll_TrustedCall.part.0/18:
  Jump functions of caller  Clock_Ip_SetSpll_TrustedCall.part.0/17:
  Jump functions of caller  Clock_Ip_CompleteSpll.part.0/16:
  Jump functions of caller  Clock_Ip_ReportClockErrors/15:
  Jump functions of caller  Clock_Ip_TimeoutExpired/14:
  Jump functions of caller  Clock_Ip_StartTimeout/13:
  Jump functions of caller  Clock_Ip_EnableSpll_TrustedCall/11:
    callsite  Clock_Ip_EnableSpll_TrustedCall/11 -> Clock_Ip_EnableSpll_TrustedCall.part.0/18 : 
  Jump functions of caller  Clock_Ip_DisableSpll_TrustedCall/10:
  Jump functions of caller  Clock_Ip_SetSpll_TrustedCall/9:
    callsite  Clock_Ip_SetSpll_TrustedCall/9 -> Clock_Ip_SetSpll_TrustedCall.part.0/17 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Clock_Ip_ResetSpll_TrustedCall/8:
  Jump functions of caller  Clock_Ip_EnableSpll/7:
    callsite  Clock_Ip_EnableSpll/7 -> Clock_Ip_EnableSpll_TrustedCall/11 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Clock_Ip_DisableSpll/6:
    callsite  Clock_Ip_DisableSpll/6 -> Clock_Ip_DisableSpll_TrustedCall/10 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Clock_Ip_CompleteSpll/5:
    callsite  Clock_Ip_CompleteSpll/5 -> Clock_Ip_CompleteSpll.part.0/16 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Clock_Ip_SetSpll/4:
    callsite  Clock_Ip_SetSpll/4 -> Clock_Ip_SetSpll_TrustedCall/9 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Clock_Ip_ResetSpll/3:
    callsite  Clock_Ip_ResetSpll/3 -> Clock_Ip_ResetSpll_TrustedCall/8 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Clock_Ip_CallbackPllEmptyDisable/2:
  Jump functions of caller  Clock_Ip_CallbackPllEmptyComplete/1:
  Jump functions of caller  Clock_Ip_CallbackPllEmpty/0:

 Propagating constants:

Not considering Clock_Ip_EnableSpll_TrustedCall for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_DisableSpll_TrustedCall for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_SetSpll_TrustedCall for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ResetSpll_TrustedCall for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_EnableSpll for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_DisableSpll for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_CompleteSpll for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_SetSpll for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ResetSpll for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_CallbackPllEmptyDisable for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_CallbackPllEmptyComplete for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_CallbackPllEmpty for cloning; -fipa-cp-clone disabled.

overall_size: 143, max_new_size: 11001
 - context independent values, size: 8, time_benefit: 1.000000
 - context independent values, size: 20, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: Clock_Ip_EnableSpll_TrustedCall.part.0/18:
  Node: Clock_Ip_SetSpll_TrustedCall.part.0/17:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Clock_Ip_CompleteSpll.part.0/16:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Clock_Ip_EnableSpll_TrustedCall/11:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_DisableSpll_TrustedCall/10:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_SetSpll_TrustedCall/9:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_ResetSpll_TrustedCall/8:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_EnableSpll/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_DisableSpll/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_CompleteSpll/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_SetSpll/4:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_ResetSpll/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_CallbackPllEmptyDisable/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_CallbackPllEmptyComplete/1:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_CallbackPllEmpty/0:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Clock_Ip_EnableSpll_TrustedCall.part.0/18 (Clock_Ip_EnableSpll_TrustedCall.part.0) @069e2d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Clock_Ip_EnableSpll_TrustedCall/11 (365072224 (estimated locally),0.34 per call) 
  Calls: 
Clock_Ip_SetSpll_TrustedCall.part.0/17 (Clock_Ip_SetSpll_TrustedCall.part.0) @069e2620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Clock_Ip_SetSpll_TrustedCall/9 (365072224 (estimated locally),0.34 per call) 
  Calls: 
Clock_Ip_CompleteSpll.part.0/16 (Clock_Ip_CompleteSpll.part.0) @069e20e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:114863532 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Clock_Ip_CompleteSpll/5 (114863531 (estimated locally),0.33 per call) 
  Calls: Clock_Ip_StartTimeout/13 (114863532 (estimated locally),1.00 per call) Clock_Ip_TimeoutExpired/14 (1073741824 (estimated locally),9.35 per call) Clock_Ip_ReportClockErrors/15 (54870309 (estimated locally),0.48 per call) 
Clock_Ip_ReportClockErrors/15 (Clock_Ip_ReportClockErrors) @069c1000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_CompleteSpll.part.0/16 (54870309 (estimated locally),0.48 per call) 
  Calls: 
Clock_Ip_TimeoutExpired/14 (Clock_Ip_TimeoutExpired) @06972d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_CompleteSpll.part.0/16 (1073741824 (estimated locally),9.35 per call) 
  Calls: 
Clock_Ip_StartTimeout/13 (Clock_Ip_StartTimeout) @069722a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_CompleteSpll.part.0/16 (114863532 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_axPllCallbacks/12 (Clock_Ip_axPllCallbacks) @06a4cee8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_CallbackPllEmpty/0 (addr)Clock_Ip_CallbackPllEmpty/0 (addr)Clock_Ip_CallbackPllEmptyComplete/1 (addr)Clock_Ip_CallbackPllEmpty/0 (addr)Clock_Ip_CallbackPllEmptyDisable/2 (addr)Clock_Ip_ResetSpll/3 (addr)Clock_Ip_SetSpll/4 (addr)Clock_Ip_CompleteSpll/5 (addr)Clock_Ip_EnableSpll/7 (addr)Clock_Ip_DisableSpll/6 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Clock_Ip_EnableSpll_TrustedCall/11 (Clock_Ip_EnableSpll_TrustedCall) @06972540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Clock_Ip_EnableSpll/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: Clock_Ip_EnableSpll_TrustedCall.part.0/18 (365072224 (estimated locally),0.34 per call) 
Clock_Ip_DisableSpll_TrustedCall/10 (Clock_Ip_DisableSpll_TrustedCall) @069721c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Clock_Ip_DisableSpll/6 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_SetSpll_TrustedCall/9 (Clock_Ip_SetSpll_TrustedCall) @0696dd20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Clock_Ip_SetSpll/4 (1073741824 (estimated locally),1.00 per call) 
  Calls: Clock_Ip_SetSpll_TrustedCall.part.0/17 (365072224 (estimated locally),0.34 per call) 
Clock_Ip_ResetSpll_TrustedCall/8 (Clock_Ip_ResetSpll_TrustedCall) @0696dc40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Clock_Ip_ResetSpll/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_EnableSpll/7 (Clock_Ip_EnableSpll) @0696d9a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axPllCallbacks/12 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_EnableSpll_TrustedCall/11 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_DisableSpll/6 (Clock_Ip_DisableSpll) @0696d700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axPllCallbacks/12 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_DisableSpll_TrustedCall/10 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_CompleteSpll/5 (Clock_Ip_CompleteSpll) @0696d460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axPllCallbacks/12 (addr)
  Availability: available
  Function flags: count:348071309 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_CompleteSpll.part.0/16 (114863531 (estimated locally),0.33 per call) 
Clock_Ip_SetSpll/4 (Clock_Ip_SetSpll) @0696d1c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axPllCallbacks/12 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_SetSpll_TrustedCall/9 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_ResetSpll/3 (Clock_Ip_ResetSpll) @06969e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axPllCallbacks/12 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_ResetSpll_TrustedCall/8 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_CallbackPllEmptyDisable/2 (Clock_Ip_CallbackPllEmptyDisable) @069698c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axPllCallbacks/12 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_CallbackPllEmptyComplete/1 (Clock_Ip_CallbackPllEmptyComplete) @06969d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axPllCallbacks/12 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_CallbackPllEmpty/0 (Clock_Ip_CallbackPllEmpty) @06969a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axPllCallbacks/12 (addr)Clock_Ip_axPllCallbacks/12 (addr)Clock_Ip_axPllCallbacks/12 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function Clock_Ip_CallbackPllEmpty (Clock_Ip_CallbackPllEmpty, funcdef_no=0, decl_uid=6064, cgraph_uid=1, symbol_order=0)

Modification phase of node Clock_Ip_CallbackPllEmpty/0
Clock_Ip_CallbackPllEmpty (const struct Clock_Ip_PllConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Clock_Ip_CallbackPllEmptyComplete (Clock_Ip_CallbackPllEmptyComplete, funcdef_no=1, decl_uid=6066, cgraph_uid=2, symbol_order=1)

Modification phase of node Clock_Ip_CallbackPllEmptyComplete/1
Clock_Ip_CallbackPllEmptyComplete (Clock_Ip_NameType PllName)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Clock_Ip_CallbackPllEmptyDisable (Clock_Ip_CallbackPllEmptyDisable, funcdef_no=2, decl_uid=6068, cgraph_uid=3, symbol_order=2)

Modification phase of node Clock_Ip_CallbackPllEmptyDisable/2
Clock_Ip_CallbackPllEmptyDisable (Clock_Ip_NameType PllName)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Clock_Ip_CompleteSpll (Clock_Ip_CompleteSpll, funcdef_no=5, decl_uid=6074, cgraph_uid=6, symbol_order=5)

Modification phase of node Clock_Ip_CompleteSpll/5
Clock_Ip_CompleteSpll (Clock_Ip_NameType PllName)
{
  Clock_Ip_PllStatusReturnType PllStatus;
  long unsigned int _1;
  long unsigned int _2;

  <bb 2> [local count: 348071309]:
  # DEBUG BEGIN_STMT
  # DEBUG PllStatus => 1
  # DEBUG BEGIN_STMT
  # DEBUG TimeoutOccurred => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SCG_Type *)1074151424B].SPLLCSR;
  _2 = _1 & 1;
  if (_2 != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 114863531]:
  PllStatus_4 = Clock_Ip_CompleteSpll.part.0 (PllName_8(D));

  <bb 4> [local count: 348071309]:
  # PllStatus_5 = PHI <PllStatus_4(3), 0(2)>
  # DEBUG PllStatus => PllStatus_5
  # DEBUG BEGIN_STMT
  return PllStatus_5;

}



;; Function Clock_Ip_ResetSpll_TrustedCall (Clock_Ip_ResetSpll_TrustedCall, funcdef_no=8, decl_uid=6056, cgraph_uid=9, symbol_order=8)

Modification phase of node Clock_Ip_ResetSpll_TrustedCall/8
Clock_Ip_ResetSpll_TrustedCall (const struct Clock_Ip_PllConfigType * Config)
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
  long unsigned int _11;
  long unsigned int _12;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SCG_Type *)1074151424B].SPLLCSR;
  _2 = _1 & 4286578687;
  MEM[(struct SCG_Type *)1074151424B].SPLLCSR ={v} _2;
  # DEBUG BEGIN_STMT
  _3 ={v} MEM[(struct SCG_Type *)1074151424B].SPLLCSR;
  _4 = _3 & 4294901759;
  MEM[(struct SCG_Type *)1074151424B].SPLLCSR ={v} _4;
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct SCG_Type *)1074151424B].SPLLCSR;
  _6 = _5 & 4294836223;
  MEM[(struct SCG_Type *)1074151424B].SPLLCSR ={v} _6;
  # DEBUG BEGIN_STMT
  _7 ={v} MEM[(struct SCG_Type *)1074151424B].SPLLCSR;
  _8 = _7 & 4294967294;
  MEM[(struct SCG_Type *)1074151424B].SPLLCSR ={v} _8;
  # DEBUG BEGIN_STMT
  _9 ={v} MEM[(struct SCG_Type *)1074151424B].SPLLCFG;
  _10 = _9 & 4294965503;
  MEM[(struct SCG_Type *)1074151424B].SPLLCFG ={v} _10;
  # DEBUG BEGIN_STMT
  _11 ={v} MEM[(struct SCG_Type *)1074151424B].SPLLCFG;
  _12 = _11 & 4292935679;
  MEM[(struct SCG_Type *)1074151424B].SPLLCFG ={v} _12;
  return;

}



;; Function Clock_Ip_ResetSpll (Clock_Ip_ResetSpll, funcdef_no=3, decl_uid=6070, cgraph_uid=4, symbol_order=3)

Modification phase of node Clock_Ip_ResetSpll/3
Clock_Ip_ResetSpll (const struct Clock_Ip_PllConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Clock_Ip_ResetSpll_TrustedCall (Config_2(D));
  return;

}



;; Function Clock_Ip_SetSpll_TrustedCall (Clock_Ip_SetSpll_TrustedCall, funcdef_no=9, decl_uid=6058, cgraph_uid=10, symbol_order=9)

Modification phase of node Clock_Ip_SetSpll_TrustedCall/9
Clock_Ip_SetSpll_TrustedCall (const struct Clock_Ip_PllConfigType * Config)
{
  short unsigned int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Config_5(D)->Enable;
  if (_1 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072224]:
  Clock_Ip_SetSpll_TrustedCall.part.0 (Config_5(D));

  <bb 4> [local count: 1073741824]:
<L7>:
  return;

}



;; Function Clock_Ip_SetSpll (Clock_Ip_SetSpll, funcdef_no=4, decl_uid=6072, cgraph_uid=5, symbol_order=4)

Modification phase of node Clock_Ip_SetSpll/4
Clock_Ip_SetSpll (const struct Clock_Ip_PllConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Clock_Ip_SetSpll_TrustedCall (Config_2(D));
  return;

}



;; Function Clock_Ip_DisableSpll_TrustedCall (Clock_Ip_DisableSpll_TrustedCall, funcdef_no=10, decl_uid=6060, cgraph_uid=11, symbol_order=10)

Modification phase of node Clock_Ip_DisableSpll_TrustedCall/10
Clock_Ip_DisableSpll_TrustedCall (Clock_Ip_NameType PllName)
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SCG_Type *)1074151424B].SPLLCSR;
  _2 = _1 & 4286578687;
  MEM[(struct SCG_Type *)1074151424B].SPLLCSR ={v} _2;
  # DEBUG BEGIN_STMT
  _3 ={v} MEM[(struct SCG_Type *)1074151424B].SPLLCSR;
  _4 = _3 & 4294967294;
  MEM[(struct SCG_Type *)1074151424B].SPLLCSR ={v} _4;
  return;

}



;; Function Clock_Ip_DisableSpll (Clock_Ip_DisableSpll, funcdef_no=6, decl_uid=6078, cgraph_uid=7, symbol_order=6)

Modification phase of node Clock_Ip_DisableSpll/6
Clock_Ip_DisableSpll (Clock_Ip_NameType PllName)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Clock_Ip_DisableSpll_TrustedCall (PllName_2(D));
  return;

}



;; Function Clock_Ip_EnableSpll_TrustedCall (Clock_Ip_EnableSpll_TrustedCall, funcdef_no=11, decl_uid=6062, cgraph_uid=12, symbol_order=11)

Modification phase of node Clock_Ip_EnableSpll_TrustedCall/11
Clock_Ip_EnableSpll_TrustedCall (const struct Clock_Ip_PllConfigType * Config)
{
  short unsigned int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Config_5(D)->Enable;
  if (_1 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072224]:
  # DEBUG D#1 => Config_5(D)
  Clock_Ip_EnableSpll_TrustedCall.part.0 ();

  <bb 4> [local count: 1073741824]:
  return;

}



;; Function Clock_Ip_EnableSpll (Clock_Ip_EnableSpll, funcdef_no=7, decl_uid=6076, cgraph_uid=8, symbol_order=7)

Modification phase of node Clock_Ip_EnableSpll/7
Clock_Ip_EnableSpll (const struct Clock_Ip_PllConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Clock_Ip_EnableSpll_TrustedCall (Config_2(D));
  return;

}


