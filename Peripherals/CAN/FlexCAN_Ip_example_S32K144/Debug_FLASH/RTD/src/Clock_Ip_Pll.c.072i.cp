
IPA constant propagation start:
Determining dynamic type for call: SetSpll_TrustedCall (config_2(D));
  Starting walk at: SetSpll_TrustedCall (config_2(D));
  instance pointer: config_2(D)  Outer instance pointer: config_2(D) offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  CompleteSpll.part.0/19:
  Jump functions of caller  EnableSpll_TrustedCall.isra.0/18:
  Jump functions of caller  DisableSpll_TrustedCall.isra.0/17:
  Jump functions of caller  ResetSpll_TrustedCall.isra.0/16:
  Jump functions of caller  ReportClockErrors/15:
  Jump functions of caller  ClockTimeoutExpired/14:
  Jump functions of caller  ClockStartTimeout/13:
  Jump functions of caller  EnableSpll/12:
    callsite  EnableSpll/12 -> EnableSpll_TrustedCall.isra.0/18 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  DisableSpll/10:
    callsite  DisableSpll/10 -> DisableSpll_TrustedCall.isra.0/17 : 
  Jump functions of caller  CompleteSpll/8:
    callsite  CompleteSpll/8 -> CompleteSpll.part.0/19 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  SetSpll/7:
    callsite  SetSpll/7 -> SetSpll_TrustedCall/6 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  SetSpll_TrustedCall/6:
  Jump functions of caller  ResetSpll/5:
    callsite  ResetSpll/5 -> ResetSpll_TrustedCall.isra.0/16 : 
  Jump functions of caller  Callback_PllEmptyDisable/3:
  Jump functions of caller  Callback_PllEmptyComplete/2:
  Jump functions of caller  Callback_PllEmpty/1:

 Propagating constants:

Not considering EnableSpll for cloning; -fipa-cp-clone disabled.
Not considering DisableSpll for cloning; -fipa-cp-clone disabled.
Not considering CompleteSpll for cloning; -fipa-cp-clone disabled.
Not considering SetSpll for cloning; -fipa-cp-clone disabled.
Not considering ResetSpll for cloning; -fipa-cp-clone disabled.
Not considering Callback_PllEmptyDisable for cloning; -fipa-cp-clone disabled.
Not considering Callback_PllEmptyComplete for cloning; -fipa-cp-clone disabled.
Not considering Callback_PllEmpty for cloning; -fipa-cp-clone disabled.

overall_size: 126, max_new_size: 11001
 - context independent values, size: 4, time_benefit: 1.000000
 - context independent values, size: 4, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: CompleteSpll.part.0/19:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: EnableSpll_TrustedCall.isra.0/18:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: DisableSpll_TrustedCall.isra.0/17:
  Node: ResetSpll_TrustedCall.isra.0/16:
  Node: EnableSpll/12:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: DisableSpll/10:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CompleteSpll/8:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SetSpll/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SetSpll_TrustedCall/6:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: ResetSpll/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Callback_PllEmptyDisable/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Callback_PllEmptyComplete/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Callback_PllEmpty/1:
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

CompleteSpll.part.0/19 (CompleteSpll.part.0) @075f97e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:114863532 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: CompleteSpll/8 (114863531 (estimated locally),0.33 per call) 
  Calls: ClockStartTimeout/13 (114863532 (estimated locally),1.00 per call) ClockTimeoutExpired/14 (1073741824 (estimated locally),9.35 per call) ReportClockErrors/15 (54870309 (estimated locally),0.48 per call) 
EnableSpll_TrustedCall.isra.0/18 (EnableSpll_TrustedCall.isra.0) @075f92a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: EnableSpll/12 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
DisableSpll_TrustedCall.isra.0/17 (DisableSpll_TrustedCall.isra.0) @075cad20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: DisableSpll/10 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ResetSpll_TrustedCall.isra.0/16 (ResetSpll_TrustedCall.isra.0) @075caa80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: ResetSpll/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ReportClockErrors/15 (ReportClockErrors) @06a097e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CompleteSpll.part.0/19 (54870309 (estimated locally),0.48 per call) 
  Calls: 
ClockTimeoutExpired/14 (ClockTimeoutExpired) @06a09700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CompleteSpll.part.0/19 (1073741824 (estimated locally),9.35 per call) 
  Calls: 
ClockStartTimeout/13 (ClockStartTimeout) @06a09620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CompleteSpll.part.0/19 (114863532 (estimated locally),1.00 per call) 
  Calls: 
EnableSpll/12 (EnableSpll) @06a03460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: pllCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: EnableSpll_TrustedCall.isra.0/18 (1073741824 (estimated locally),1.00 per call) 
DisableSpll/10 (DisableSpll) @06a03b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: pllCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: DisableSpll_TrustedCall.isra.0/17 (1073741824 (estimated locally),1.00 per call) 
CompleteSpll/8 (CompleteSpll) @06a03620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: pllCallbacks/0 (addr)
  Availability: available
  Function flags: count:348071309 (estimated locally) body optimize_size
  Called by: 
  Calls: CompleteSpll.part.0/19 (114863531 (estimated locally),0.33 per call) 
SetSpll/7 (SetSpll) @06a03380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: pllCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SetSpll_TrustedCall/6 (1073741824 (estimated locally),1.00 per call) 
SetSpll_TrustedCall/6 (SetSpll_TrustedCall) @06a030e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: SetSpll/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ResetSpll/5 (ResetSpll) @068c2c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: pllCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ResetSpll_TrustedCall.isra.0/16 (1073741824 (estimated locally),1.00 per call) 
Callback_PllEmptyDisable/3 (Callback_PllEmptyDisable) @068c2700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: pllCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Callback_PllEmptyComplete/2 (Callback_PllEmptyComplete) @068c2460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: pllCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Callback_PllEmpty/1 (Callback_PllEmpty) @068c21c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: pllCallbacks/0 (addr)pllCallbacks/0 (addr)pllCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
pllCallbacks/0 (pllCallbacks) @068bf798
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Callback_PllEmpty/1 (addr)Callback_PllEmpty/1 (addr)Callback_PllEmptyComplete/2 (addr)Callback_PllEmpty/1 (addr)Callback_PllEmptyDisable/3 (addr)ResetSpll/5 (addr)SetSpll/7 (addr)CompleteSpll/8 (addr)EnableSpll/12 (addr)DisableSpll/10 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known

;; Function Callback_PllEmpty (Callback_PllEmpty, funcdef_no=0, decl_uid=6055, cgraph_uid=1, symbol_order=1)

Modification phase of node Callback_PllEmpty/1
Callback_PllEmpty (const struct Clock_Ip_PllConfigType * config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Callback_PllEmptyComplete (Callback_PllEmptyComplete, funcdef_no=1, decl_uid=6057, cgraph_uid=2, symbol_order=2)

Modification phase of node Callback_PllEmptyComplete/2
Callback_PllEmptyComplete (Clock_Ip_NameType PllName)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Callback_PllEmptyDisable (Callback_PllEmptyDisable, funcdef_no=2, decl_uid=6059, cgraph_uid=3, symbol_order=3)

Modification phase of node Callback_PllEmptyDisable/3
Callback_PllEmptyDisable (Clock_Ip_NameType PllName)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function SetSpll (SetSpll, funcdef_no=6, decl_uid=6063, cgraph_uid=7, symbol_order=7)

Modification phase of node SetSpll/7
SetSpll (const struct Clock_Ip_PllConfigType * config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SetSpll_TrustedCall (config_2(D));
  return;

}



;; Function ResetSpll (ResetSpll, funcdef_no=4, decl_uid=6061, cgraph_uid=5, symbol_order=5)

Modification phase of node ResetSpll/5
ResetSpll (const struct Clock_Ip_PllConfigType * config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => config_2(D)
  ResetSpll_TrustedCall.isra.0 ();
  return;

}



;; Function DisableSpll (DisableSpll, funcdef_no=9, decl_uid=6069, cgraph_uid=10, symbol_order=10)

Modification phase of node DisableSpll/10
DisableSpll (Clock_Ip_NameType PllName)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG D#2 => PllName_2(D)
  DisableSpll_TrustedCall.isra.0 ();
  return;

}



;; Function EnableSpll (EnableSpll, funcdef_no=11, decl_uid=6067, cgraph_uid=12, symbol_order=12)

Modification phase of node EnableSpll/12
EnableSpll (const struct Clock_Ip_PllConfigType * config)
{
  short unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(short unsigned int *)config_2(D) + 4B];
  # DEBUG D#3 => config_2(D)
  EnableSpll_TrustedCall.isra.0 (_4);
  return;

}



;; Function CompleteSpll (CompleteSpll, funcdef_no=7, decl_uid=6065, cgraph_uid=8, symbol_order=8)

Modification phase of node CompleteSpll/8
CompleteSpll (Clock_Ip_NameType pllName)
{
  clock_pll_status_t pllStatus;
  long unsigned int _1;
  long unsigned int _2;

  <bb 2> [local count: 348071309]:
  # DEBUG BEGIN_STMT
  # DEBUG pllStatus => 1
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
  pllStatus_4 = CompleteSpll.part.0 (pllName_8(D));

  <bb 4> [local count: 348071309]:
  # pllStatus_5 = PHI <pllStatus_4(3), 0(2)>
  # DEBUG pllStatus => pllStatus_5
  # DEBUG BEGIN_STMT
  return pllStatus_5;

}


