
IPA constant propagation start:
Determining dynamic type for call: Clock_Ip_SetSOSC_TrustedCall.part.0 (Config_20(D));
  Starting walk at: Clock_Ip_SetSOSC_TrustedCall.part.0 (Config_20(D));
  instance pointer: Config_20(D)  Outer instance pointer: Config_20(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Clock_Ip_EnableSOSC_TrustedCall (Config_2(D));
  Starting walk at: Clock_Ip_EnableSOSC_TrustedCall (Config_2(D));
  instance pointer: Config_2(D)  Outer instance pointer: Config_2(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Clock_Ip_CompleteSOSC.part.0 (Config_15(D));
  Starting walk at: Clock_Ip_CompleteSOSC.part.0 (Config_15(D));
  instance pointer: Config_15(D)  Outer instance pointer: Config_15(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:TimeoutOccurred_14 = Clock_Ip_TimeoutExpired (&StartTime, &ElapsedTime, TimeoutTicks.0_6);
  Function call may change dynamic type:Clock_Ip_StartTimeout (&StartTime, &ElapsedTime, &TimeoutTicks, 50000);
  Function call may change dynamic type:TimeoutOccurred_14 = Clock_Ip_TimeoutExpired (&StartTime, &ElapsedTime, TimeoutTicks.0_6);
Determining dynamic type for call: Clock_Ip_SetSOSC_TrustedCall (Config_2(D));
  Starting walk at: Clock_Ip_SetSOSC_TrustedCall (Config_2(D));
  instance pointer: Config_2(D)  Outer instance pointer: Config_2(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Clock_Ip_ResetSOSC_TrustedCall (Config_2(D));
  Starting walk at: Clock_Ip_ResetSOSC_TrustedCall (Config_2(D));
  instance pointer: Config_2(D)  Outer instance pointer: Config_2(D) offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Clock_Ip_EnableSOSC_TrustedCall.part.0/17:
  Jump functions of caller  Clock_Ip_SetSOSC_TrustedCall.part.0/16:
  Jump functions of caller  Clock_Ip_CompleteSOSC.part.0/15:
  Jump functions of caller  Clock_Ip_ReportClockErrors/14:
  Jump functions of caller  Clock_Ip_TimeoutExpired/13:
  Jump functions of caller  Clock_Ip_StartTimeout/12:
  Jump functions of caller  Clock_Ip_EnableSOSC_TrustedCall/10:
    callsite  Clock_Ip_EnableSOSC_TrustedCall/10 -> Clock_Ip_EnableSOSC_TrustedCall.part.0/17 : 
  Jump functions of caller  Clock_Ip_DisableSOSC_TrustedCall/9:
  Jump functions of caller  Clock_Ip_SetSOSC_TrustedCall/8:
    callsite  Clock_Ip_SetSOSC_TrustedCall/8 -> Clock_Ip_SetSOSC_TrustedCall.part.0/16 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Clock_Ip_ResetSOSC_TrustedCall/7:
  Jump functions of caller  Clock_Ip_EnableSOSC/6:
    callsite  Clock_Ip_EnableSOSC/6 -> Clock_Ip_EnableSOSC_TrustedCall/10 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Clock_Ip_DisableSOSC/5:
    callsite  Clock_Ip_DisableSOSC/5 -> Clock_Ip_DisableSOSC_TrustedCall/9 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Clock_Ip_CompleteSOSC/4:
    callsite  Clock_Ip_CompleteSOSC/4 -> Clock_Ip_CompleteSOSC.part.0/15 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Clock_Ip_SetSOSC/3:
    callsite  Clock_Ip_SetSOSC/3 -> Clock_Ip_SetSOSC_TrustedCall/8 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Clock_Ip_ResetSOSC/2:
    callsite  Clock_Ip_ResetSOSC/2 -> Clock_Ip_ResetSOSC_TrustedCall/7 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Clock_Ip_DisableClockIpExternalOscillatorEmpty/1:
  Jump functions of caller  Clock_Ip_ExternalOscillatorEmpty/0:

 Propagating constants:

Not considering Clock_Ip_EnableSOSC_TrustedCall for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_DisableSOSC_TrustedCall for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_SetSOSC_TrustedCall for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ResetSOSC_TrustedCall for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_EnableSOSC for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_DisableSOSC for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_CompleteSOSC for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_SetSOSC for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ResetSOSC for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_DisableClockIpExternalOscillatorEmpty for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ExternalOscillatorEmpty for cloning; -fipa-cp-clone disabled.

overall_size: 157, max_new_size: 11001
 - context independent values, size: 5, time_benefit: 1.000000
 - context independent values, size: 14, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: Clock_Ip_EnableSOSC_TrustedCall.part.0/17:
  Node: Clock_Ip_SetSOSC_TrustedCall.part.0/16:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Clock_Ip_CompleteSOSC.part.0/15:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Clock_Ip_EnableSOSC_TrustedCall/10:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_DisableSOSC_TrustedCall/9:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_SetSOSC_TrustedCall/8:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_ResetSOSC_TrustedCall/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_EnableSOSC/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_DisableSOSC/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_CompleteSOSC/4:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_SetSOSC/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_ResetSOSC/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_DisableClockIpExternalOscillatorEmpty/1:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_ExternalOscillatorEmpty/0:
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

Clock_Ip_EnableSOSC_TrustedCall.part.0/17 (Clock_Ip_EnableSOSC_TrustedCall.part.0) @06cd28c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Clock_Ip_EnableSOSC_TrustedCall/10 (365072224 (estimated locally),0.34 per call) 
  Calls: 
Clock_Ip_SetSOSC_TrustedCall.part.0/16 (Clock_Ip_SetSOSC_TrustedCall.part.0) @06cd2380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Clock_Ip_SetSOSC_TrustedCall/8 (365035714 (estimated locally),0.34 per call) 
  Calls: 
Clock_Ip_CompleteSOSC.part.0/15 (Clock_Ip_CompleteSOSC.part.0) @06cc7d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Clock_Ip_CompleteSOSC/4 (37904965 (estimated locally),0.11 per call) 
  Calls: Clock_Ip_ReportClockErrors/14 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_ReportClockErrors/14 (Clock_Ip_ReportClockErrors) @06cb10e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_CompleteSOSC.part.0/15 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_TimeoutExpired/13 (Clock_Ip_TimeoutExpired) @06cb1000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_CompleteSOSC/4 (1073741824 (estimated locally),3.08 per call) 
  Calls: 
Clock_Ip_StartTimeout/12 (Clock_Ip_StartTimeout) @0697ee00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_CompleteSOSC/4 (114863532 (estimated locally),0.33 per call) 
  Calls: 
Clock_Ip_axExtOscCallbacks/11 (Clock_Ip_axExtOscCallbacks) @06a15dc8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_ExternalOscillatorEmpty/0 (addr)Clock_Ip_ExternalOscillatorEmpty/0 (addr)Clock_Ip_ExternalOscillatorEmpty/0 (addr)Clock_Ip_DisableClockIpExternalOscillatorEmpty/1 (addr)Clock_Ip_ExternalOscillatorEmpty/0 (addr)Clock_Ip_ResetSOSC/2 (addr)Clock_Ip_SetSOSC/3 (addr)Clock_Ip_CompleteSOSC/4 (addr)Clock_Ip_DisableSOSC/5 (addr)Clock_Ip_EnableSOSC/6 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Clock_Ip_EnableSOSC_TrustedCall/10 (Clock_Ip_EnableSOSC_TrustedCall) @0697e620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Clock_Ip_EnableSOSC/6 (1073741824 (estimated locally),1.00 per call) 
  Calls: Clock_Ip_EnableSOSC_TrustedCall.part.0/17 (365072224 (estimated locally),0.34 per call) 
Clock_Ip_DisableSOSC_TrustedCall/9 (Clock_Ip_DisableSOSC_TrustedCall) @0697e380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Clock_Ip_DisableSOSC/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_SetSOSC_TrustedCall/8 (Clock_Ip_SetSOSC_TrustedCall) @0697e0e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Clock_Ip_SetSOSC/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: Clock_Ip_SetSOSC_TrustedCall.part.0/16 (365035714 (estimated locally),0.34 per call) 
Clock_Ip_ResetSOSC_TrustedCall/7 (Clock_Ip_ResetSOSC_TrustedCall) @0697a620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Clock_Ip_ResetSOSC/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_EnableSOSC/6 (Clock_Ip_EnableSOSC) @0697a380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axExtOscCallbacks/11 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_EnableSOSC_TrustedCall/10 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_DisableSOSC/5 (Clock_Ip_DisableSOSC) @0697a0e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axExtOscCallbacks/11 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_DisableSOSC_TrustedCall/9 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_CompleteSOSC/4 (Clock_Ip_CompleteSOSC) @06974460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axExtOscCallbacks/11 (addr)
  Availability: available
  Function flags: count:348071309 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_CompleteSOSC.part.0/15 (37904965 (estimated locally),0.11 per call) Clock_Ip_TimeoutExpired/13 (1073741824 (estimated locally),3.08 per call) Clock_Ip_StartTimeout/12 (114863532 (estimated locally),0.33 per call) 
Clock_Ip_SetSOSC/3 (Clock_Ip_SetSOSC) @06974e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axExtOscCallbacks/11 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_SetSOSC_TrustedCall/8 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_ResetSOSC/2 (Clock_Ip_ResetSOSC) @06974b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axExtOscCallbacks/11 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_ResetSOSC_TrustedCall/7 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_DisableClockIpExternalOscillatorEmpty/1 (Clock_Ip_DisableClockIpExternalOscillatorEmpty) @069748c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axExtOscCallbacks/11 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_ExternalOscillatorEmpty/0 (Clock_Ip_ExternalOscillatorEmpty) @06974620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axExtOscCallbacks/11 (addr)Clock_Ip_axExtOscCallbacks/11 (addr)Clock_Ip_axExtOscCallbacks/11 (addr)Clock_Ip_axExtOscCallbacks/11 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function Clock_Ip_ExternalOscillatorEmpty (Clock_Ip_ExternalOscillatorEmpty, funcdef_no=0, decl_uid=6056, cgraph_uid=1, symbol_order=0)

Modification phase of node Clock_Ip_ExternalOscillatorEmpty/0
Clock_Ip_ExternalOscillatorEmpty (const struct Clock_Ip_XoscConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Clock_Ip_DisableClockIpExternalOscillatorEmpty (Clock_Ip_DisableClockIpExternalOscillatorEmpty, funcdef_no=1, decl_uid=6058, cgraph_uid=2, symbol_order=1)

Modification phase of node Clock_Ip_DisableClockIpExternalOscillatorEmpty/1
Clock_Ip_DisableClockIpExternalOscillatorEmpty (Clock_Ip_NameType XoscName)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Clock_Ip_CompleteSOSC (Clock_Ip_CompleteSOSC, funcdef_no=4, decl_uid=6083, cgraph_uid=5, symbol_order=4)

Modification phase of node Clock_Ip_CompleteSOSC/4
Clock_Ip_CompleteSOSC (const struct Clock_Ip_XoscConfigType * Config)
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
  Clock_Ip_StartTimeout (&StartTime, &ElapsedTime, &TimeoutTicks, 50000);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _4 ={v} MEM[(struct SCG_Type *)1074151424B].SOSCCSR;
  _5 = _4 >> 24;
  SoscStatus_12 = _5 & 1;
  # DEBUG SoscStatus => SoscStatus_12
  # DEBUG BEGIN_STMT
  TimeoutTicks.0_6 = TimeoutTicks;
  TimeoutOccurred_14 = Clock_Ip_TimeoutExpired (&StartTime, &ElapsedTime, TimeoutTicks.0_6);
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
  Clock_Ip_CompleteSOSC.part.0 (Config_15(D));

  <bb 8> [local count: 348071309]:
  StartTime ={v} {CLOBBER};
  ElapsedTime ={v} {CLOBBER};
  TimeoutTicks ={v} {CLOBBER};
  return;

}



;; Function Clock_Ip_ResetSOSC_TrustedCall (Clock_Ip_ResetSOSC_TrustedCall, funcdef_no=7, decl_uid=6060, cgraph_uid=8, symbol_order=7)

Modification phase of node Clock_Ip_ResetSOSC_TrustedCall/7
Clock_Ip_ResetSOSC_TrustedCall (const struct Clock_Ip_XoscConfigType * Config)
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SCG_Type *)1074151424B].SOSCCSR;
  _2 = _1 & 4286578687;
  MEM[(struct SCG_Type *)1074151424B].SOSCCSR ={v} _2;
  # DEBUG BEGIN_STMT
  _3 ={v} MEM[(struct SCG_Type *)1074151424B].SOSCCSR;
  _4 = _3 & 4294901759;
  MEM[(struct SCG_Type *)1074151424B].SOSCCSR ={v} _4;
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct SCG_Type *)1074151424B].SOSCCSR;
  _6 = _5 & 4294836223;
  MEM[(struct SCG_Type *)1074151424B].SOSCCSR ={v} _6;
  # DEBUG BEGIN_STMT
  _7 ={v} MEM[(struct SCG_Type *)1074151424B].SOSCCSR;
  _8 = _7 & 4294967294;
  MEM[(struct SCG_Type *)1074151424B].SOSCCSR ={v} _8;
  return;

}



;; Function Clock_Ip_ResetSOSC (Clock_Ip_ResetSOSC, funcdef_no=2, decl_uid=6077, cgraph_uid=3, symbol_order=2)

Modification phase of node Clock_Ip_ResetSOSC/2
Clock_Ip_ResetSOSC (const struct Clock_Ip_XoscConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Clock_Ip_ResetSOSC_TrustedCall (Config_2(D));
  return;

}



;; Function Clock_Ip_SetSOSC_TrustedCall (Clock_Ip_SetSOSC_TrustedCall, funcdef_no=8, decl_uid=6062, cgraph_uid=9, symbol_order=8)

Modification phase of node Clock_Ip_SetSOSC_TrustedCall/8
Clock_Ip_SetSOSC_TrustedCall (const struct Clock_Ip_XoscConfigType * Config)
{
  short unsigned int _1;
  unsigned char _2;
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

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Config_20(D)->Enable;
  if (_1 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 10>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  _2 = Config_20(D)->Gain;
  switch (_2) <default: <L17> [33.33%], case 0: <L1> [33.33%], case 1: <L2> [33.33%]>

  <bb 4> [local count: 121678571]:
<L1>:
  # DEBUG BEGIN_STMT
  _4 ={v} MEM[(struct SCG_Type *)1074151424B].SOSCCFG;
  _5 = _4 & 4294967287;
  MEM[(struct SCG_Type *)1074151424B].SOSCCFG ={v} _5;
  # DEBUG BEGIN_STMT
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 121678571]:
<L2>:
  # DEBUG BEGIN_STMT
  _6 ={v} MEM[(struct SCG_Type *)1074151424B].SOSCCFG;
  _7 = _6 | 8;
  MEM[(struct SCG_Type *)1074151424B].SOSCCFG ={v} _7;
  # DEBUG BEGIN_STMT

  <bb 6> [local count: 365035713]:
<L17>:
  # DEBUG BEGIN_STMT
  _8 ={v} MEM[(struct SCG_Type *)1074151424B].SOSCCFG;
  _9 = _8 & 4294967247;
  MEM[(struct SCG_Type *)1074151424B].SOSCCFG ={v} _9;
  # DEBUG BEGIN_STMT
  _10 = Config_20(D)->Freq;
  _11 = _10 + 4290967296;
  if (_11 <= 3999999)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 182517857]:
  # DEBUG BEGIN_STMT
  _12 ={v} MEM[(struct SCG_Type *)1074151424B].SOSCCFG;
  _13 = _12 | 32;
  MEM[(struct SCG_Type *)1074151424B].SOSCCFG ={v} _13;
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 182517857]:
  # DEBUG BEGIN_STMT
  _14 ={v} MEM[(struct SCG_Type *)1074151424B].SOSCCFG;
  _15 = _14 | 48;
  MEM[(struct SCG_Type *)1074151424B].SOSCCFG ={v} _15;

  <bb 9> [local count: 365035714]:
  Clock_Ip_SetSOSC_TrustedCall.part.0 (Config_20(D));

  <bb 10> [local count: 1073705317]:
  return;

}



;; Function Clock_Ip_SetSOSC (Clock_Ip_SetSOSC, funcdef_no=3, decl_uid=6080, cgraph_uid=4, symbol_order=3)

Modification phase of node Clock_Ip_SetSOSC/3
Clock_Ip_SetSOSC (const struct Clock_Ip_XoscConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Clock_Ip_SetSOSC_TrustedCall (Config_2(D));
  return;

}



;; Function Clock_Ip_DisableSOSC_TrustedCall (Clock_Ip_DisableSOSC_TrustedCall, funcdef_no=9, decl_uid=6064, cgraph_uid=10, symbol_order=9)

Modification phase of node Clock_Ip_DisableSOSC_TrustedCall/9
Clock_Ip_DisableSOSC_TrustedCall (Clock_Ip_NameType XoscName)
{
  long unsigned int _1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SCG_Type *)1074151424B].SOSCCSR;
  _2 = _1 & 4294967294;
  MEM[(struct SCG_Type *)1074151424B].SOSCCSR ={v} _2;
  return;

}



;; Function Clock_Ip_DisableSOSC (Clock_Ip_DisableSOSC, funcdef_no=5, decl_uid=6093, cgraph_uid=6, symbol_order=5)

Modification phase of node Clock_Ip_DisableSOSC/5
Clock_Ip_DisableSOSC (Clock_Ip_NameType XoscName)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Clock_Ip_DisableSOSC_TrustedCall (XoscName_2(D));
  return;

}



;; Function Clock_Ip_EnableSOSC_TrustedCall (Clock_Ip_EnableSOSC_TrustedCall, funcdef_no=10, decl_uid=6066, cgraph_uid=11, symbol_order=10)

Modification phase of node Clock_Ip_EnableSOSC_TrustedCall/10
Clock_Ip_EnableSOSC_TrustedCall (const struct Clock_Ip_XoscConfigType * Config)
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
  Clock_Ip_EnableSOSC_TrustedCall.part.0 ();

  <bb 4> [local count: 1073741824]:
  return;

}



;; Function Clock_Ip_EnableSOSC (Clock_Ip_EnableSOSC, funcdef_no=6, decl_uid=6096, cgraph_uid=7, symbol_order=6)

Modification phase of node Clock_Ip_EnableSOSC/6
Clock_Ip_EnableSOSC (const struct Clock_Ip_XoscConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Clock_Ip_EnableSOSC_TrustedCall (Config_2(D));
  return;

}


