
IPA constant propagation start:
Determining dynamic type for call: CompleteSOSC.part.0 (config_15(D));
  Starting walk at: CompleteSOSC.part.0 (config_15(D));
  instance pointer: config_15(D)  Outer instance pointer: config_15(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:TimeoutOccurred_14 = ClockTimeoutExpired (&StartTime, &ElapsedTime, TimeoutTicks.0_6);
  Function call may change dynamic type:ClockStartTimeout (&StartTime, &ElapsedTime, &TimeoutTicks, 50000);
  Function call may change dynamic type:TimeoutOccurred_14 = ClockTimeoutExpired (&StartTime, &ElapsedTime, TimeoutTicks.0_6);
Determining dynamic type for call: SetSOSC_TrustedCall (config_2(D));
  Starting walk at: SetSOSC_TrustedCall (config_2(D));
  instance pointer: config_2(D)  Outer instance pointer: config_2(D) offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  CompleteSOSC.part.0/18:
  Jump functions of caller  EnableSOSC_TrustedCall.isra.0/17:
  Jump functions of caller  DisableSOSC_TrustedCall.isra.0/16:
  Jump functions of caller  ResetSOSC_TrustedCall.isra.0/15:
  Jump functions of caller  ReportClockErrors/14:
  Jump functions of caller  ClockTimeoutExpired/13:
  Jump functions of caller  ClockStartTimeout/12:
  Jump functions of caller  EnableSOSC/11:
    callsite  EnableSOSC/11 -> EnableSOSC_TrustedCall.isra.0/17 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  DisableSOSC/9:
    callsite  DisableSOSC/9 -> DisableSOSC_TrustedCall.isra.0/16 : 
  Jump functions of caller  CompleteSOSC/7:
    callsite  CompleteSOSC/7 -> CompleteSOSC.part.0/18 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  SetSOSC/6:
    callsite  SetSOSC/6 -> SetSOSC_TrustedCall/5 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  SetSOSC_TrustedCall/5:
  Jump functions of caller  ResetSOSC/4:
    callsite  ResetSOSC/4 -> ResetSOSC_TrustedCall.isra.0/15 : 
  Jump functions of caller  DisableExternalOscillatorEmpty/2:
  Jump functions of caller  ExternalOscillatorEmpty/1:

 Propagating constants:

Not considering EnableSOSC for cloning; -fipa-cp-clone disabled.
Not considering DisableSOSC for cloning; -fipa-cp-clone disabled.
Not considering CompleteSOSC for cloning; -fipa-cp-clone disabled.
Not considering SetSOSC for cloning; -fipa-cp-clone disabled.
Not considering ResetSOSC for cloning; -fipa-cp-clone disabled.
Not considering DisableExternalOscillatorEmpty for cloning; -fipa-cp-clone disabled.
Not considering ExternalOscillatorEmpty for cloning; -fipa-cp-clone disabled.

overall_size: 140, max_new_size: 11001
 - context independent values, size: 4, time_benefit: 1.000000
 - context independent values, size: 4, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: CompleteSOSC.part.0/18:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: EnableSOSC_TrustedCall.isra.0/17:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: DisableSOSC_TrustedCall.isra.0/16:
  Node: ResetSOSC_TrustedCall.isra.0/15:
  Node: EnableSOSC/11:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: DisableSOSC/9:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CompleteSOSC/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SetSOSC/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SetSOSC_TrustedCall/5:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: ResetSOSC/4:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: DisableExternalOscillatorEmpty/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ExternalOscillatorEmpty/1:
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

CompleteSOSC.part.0/18 (CompleteSOSC.part.0) @0768b380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: CompleteSOSC/7 (37904965 (estimated locally),0.11 per call) 
  Calls: ReportClockErrors/14 (1073741824 (estimated locally),1.00 per call) 
EnableSOSC_TrustedCall.isra.0/17 (EnableSOSC_TrustedCall.isra.0) @075b79a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: EnableSOSC/11 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
DisableSOSC_TrustedCall.isra.0/16 (DisableSOSC_TrustedCall.isra.0) @075b7c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: DisableSOSC/9 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ResetSOSC_TrustedCall.isra.0/15 (ResetSOSC_TrustedCall.isra.0) @075b7620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: ResetSOSC/4 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ReportClockErrors/14 (ReportClockErrors) @069d67e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CompleteSOSC.part.0/18 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ClockTimeoutExpired/13 (ClockTimeoutExpired) @069d6700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CompleteSOSC/7 (1073741824 (estimated locally),3.08 per call) 
  Calls: 
ClockStartTimeout/12 (ClockStartTimeout) @069d6620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CompleteSOSC/7 (114863532 (estimated locally),0.33 per call) 
  Calls: 
EnableSOSC/11 (EnableSOSC) @069d0540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: extOscCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: EnableSOSC_TrustedCall.isra.0/17 (1073741824 (estimated locally),1.00 per call) 
DisableSOSC/9 (DisableSOSC) @069d0c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: extOscCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: DisableSOSC_TrustedCall.isra.0/16 (1073741824 (estimated locally),1.00 per call) 
CompleteSOSC/7 (CompleteSOSC) @069d0700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: extOscCallbacks/0 (addr)
  Availability: available
  Function flags: count:348071309 (estimated locally) body optimize_size
  Called by: 
  Calls: CompleteSOSC.part.0/18 (37904965 (estimated locally),0.11 per call) ClockTimeoutExpired/13 (1073741824 (estimated locally),3.08 per call) ClockStartTimeout/12 (114863532 (estimated locally),0.33 per call) 
SetSOSC/6 (SetSOSC) @069d0460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: extOscCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SetSOSC_TrustedCall/5 (1073741824 (estimated locally),1.00 per call) 
SetSOSC_TrustedCall/5 (SetSOSC_TrustedCall) @069d01c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: SetSOSC/6 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ResetSOSC/4 (ResetSOSC) @068ce700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: extOscCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ResetSOSC_TrustedCall.isra.0/15 (1073741824 (estimated locally),1.00 per call) 
DisableExternalOscillatorEmpty/2 (DisableExternalOscillatorEmpty) @068ce1c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: extOscCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
ExternalOscillatorEmpty/1 (ExternalOscillatorEmpty) @068c99a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: extOscCallbacks/0 (addr)extOscCallbacks/0 (addr)extOscCallbacks/0 (addr)extOscCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
extOscCallbacks/0 (extOscCallbacks) @068cb630
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: ExternalOscillatorEmpty/1 (addr)ExternalOscillatorEmpty/1 (addr)ExternalOscillatorEmpty/1 (addr)DisableExternalOscillatorEmpty/2 (addr)ExternalOscillatorEmpty/1 (addr)ResetSOSC/4 (addr)SetSOSC/6 (addr)CompleteSOSC/7 (addr)DisableSOSC/9 (addr)EnableSOSC/11 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known

;; Function ExternalOscillatorEmpty (ExternalOscillatorEmpty, funcdef_no=0, decl_uid=6045, cgraph_uid=1, symbol_order=1)

Modification phase of node ExternalOscillatorEmpty/1
ExternalOscillatorEmpty (const struct Clock_Ip_XoscConfigType * config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function DisableExternalOscillatorEmpty (DisableExternalOscillatorEmpty, funcdef_no=1, decl_uid=6047, cgraph_uid=2, symbol_order=2)

Modification phase of node DisableExternalOscillatorEmpty/2
DisableExternalOscillatorEmpty (Clock_Ip_NameType xoscName)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function SetSOSC (SetSOSC, funcdef_no=5, decl_uid=6054, cgraph_uid=6, symbol_order=6)

Modification phase of node SetSOSC/6
SetSOSC (const struct Clock_Ip_XoscConfigType * config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SetSOSC_TrustedCall (config_2(D));
  return;

}



;; Function ResetSOSC (ResetSOSC, funcdef_no=3, decl_uid=6052, cgraph_uid=4, symbol_order=4)

Modification phase of node ResetSOSC/4
ResetSOSC (const struct Clock_Ip_XoscConfigType * config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => config_2(D)
  ResetSOSC_TrustedCall.isra.0 ();
  return;

}



;; Function DisableSOSC (DisableSOSC, funcdef_no=8, decl_uid=6058, cgraph_uid=9, symbol_order=9)

Modification phase of node DisableSOSC/9
DisableSOSC (Clock_Ip_NameType xoscName)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG D#2 => xoscName_2(D)
  DisableSOSC_TrustedCall.isra.0 ();
  return;

}



;; Function EnableSOSC (EnableSOSC, funcdef_no=10, decl_uid=6060, cgraph_uid=11, symbol_order=11)

Modification phase of node EnableSOSC/11
EnableSOSC (const struct Clock_Ip_XoscConfigType * config)
{
  short unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(short unsigned int *)config_2(D) + 8B];
  # DEBUG D#3 => config_2(D)
  EnableSOSC_TrustedCall.isra.0 (_4);
  return;

}



;; Function CompleteSOSC (CompleteSOSC, funcdef_no=6, decl_uid=6056, cgraph_uid=7, symbol_order=7)

Modification phase of node CompleteSOSC/7
CompleteSOSC (const struct Clock_Ip_XoscConfigType * config)
{
  uint32 SoscStatus;
  uint32 TimeoutTicks;
  uint32 ElapsedTime;
  uint32 StartTime;
  boolean TimeoutOccurred;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int TimeoutTicks.0_6;

  <bb 2> [local count: 348071309]:
  # DEBUG BEGIN_STMT
  # DEBUG TimeoutOccurred => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 ={v} MEM[(struct SCG_Type *)1074151424B].SOSCCSR;
  _3 = _2 & 1;
  if (_3 != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 3> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  ClockStartTimeout (&StartTime, &ElapsedTime, &TimeoutTicks, 50000);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _4 ={v} MEM[(struct SCG_Type *)1074151424B].SOSCCSR;
  _5 = _4 >> 24;
  SoscStatus_12 = _5 & 1;
  # DEBUG SoscStatus => SoscStatus_12
  # DEBUG BEGIN_STMT
  TimeoutTicks.0_6 = TimeoutTicks;
  TimeoutOccurred_14 = ClockTimeoutExpired (&StartTime, &ElapsedTime, TimeoutTicks.0_6);
  # DEBUG TimeoutOccurred => TimeoutOccurred_14
  # DEBUG BEGIN_STMT
  if (SoscStatus_12 == 0)
    goto <bb 5>; [94.50%]
  else
    goto <bb 6>; [5.50%]

  <bb 5> [local count: 1014686025]:
  if (TimeoutOccurred_14 != 0)
    goto <bb 6>; [5.50%]
  else
    goto <bb 9>; [94.50%]

  <bb 9> [local count: 958878294]:
  goto <bb 4>; [100.00%]

  <bb 6> [local count: 114863532]:
  # TimeoutOccurred_9 = PHI <TimeoutOccurred_14(4), TimeoutOccurred_14(5)>
  # DEBUG BEGIN_STMT
  if (TimeoutOccurred_9 != 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 37904965]:
  CompleteSOSC.part.0 (config_15(D));

  <bb 8> [local count: 348071309]:
  StartTime ={v} {CLOBBER};
  ElapsedTime ={v} {CLOBBER};
  TimeoutTicks ={v} {CLOBBER};
  return;

}


