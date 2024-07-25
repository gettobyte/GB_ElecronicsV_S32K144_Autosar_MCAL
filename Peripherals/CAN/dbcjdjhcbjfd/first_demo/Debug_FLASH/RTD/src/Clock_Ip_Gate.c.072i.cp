
IPA constant propagation start:
Determining dynamic type for call: ClockSetSimTraceEnable (&config);
  Starting walk at: ClockSetSimTraceEnable (&config);
  instance pointer: &config  Outer instance pointer: config offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: ClockSetSimGate_TrustedCall (&config);
  Starting walk at: ClockSetSimGate_TrustedCall (&config);
  instance pointer: &config  Outer instance pointer: config offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: ClockSetSimGate_TrustedCall (config_2(D));
  Starting walk at: ClockSetSimGate_TrustedCall (config_2(D));
  instance pointer: config_2(D)  Outer instance pointer: config_2(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: ClockSetPccCgcEnable_TrustedCall (&config);
  Starting walk at: ClockSetPccCgcEnable_TrustedCall (&config);
  instance pointer: &config  Outer instance pointer: config offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: ClockSetPccCgcEnable_TrustedCall (config_2(D));
  Starting walk at: ClockSetPccCgcEnable_TrustedCall (config_2(D));
  instance pointer: config_2(D)  Outer instance pointer: config_2(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: ClockSetSimClkoutEnable (&config);
  Starting walk at: ClockSetSimClkoutEnable (&config);
  instance pointer: &config  Outer instance pointer: config offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: ClockSetSimLPO32KEnable (&config);
  Starting walk at: ClockSetSimLPO32KEnable (&config);
  instance pointer: &config  Outer instance pointer: config offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: ClockSetSimLPO1KEnable (&config);
  Starting walk at: ClockSetSimLPO1KEnable (&config);
  instance pointer: &config  Outer instance pointer: config offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  ClockSetSimTraceEnable_TrustedCall.isra.0/27:
  Jump functions of caller  ClockSetSimClkoutEnable_TrustedCall.isra.0/24:
  Jump functions of caller  ClockSetSimLPO32KEnable_TrustedCall.isra.0/23:
  Jump functions of caller  ClockSetSimLPO1KEnable_TrustedCall.isra.0/22:
  Jump functions of caller  ClockUpdateSimTraceEnable/20:
    callsite  ClockUpdateSimTraceEnable/20 -> ClockSetSimTraceEnable/19 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  ClockSetSimTraceEnable/19:
    callsite  ClockSetSimTraceEnable/19 -> ClockSetSimTraceEnable_TrustedCall.isra.0/27 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  ClockUpdateSimGate/17:
    callsite  ClockUpdateSimGate/17 -> ClockSetSimGate_TrustedCall/15 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  ClockSetSimGate/16:
    callsite  ClockSetSimGate/16 -> ClockSetSimGate_TrustedCall/15 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  ClockSetSimGate_TrustedCall/15:
  Jump functions of caller  ClockUpdatePccCgcEnable/14:
    callsite  ClockUpdatePccCgcEnable/14 -> ClockSetPccCgcEnable_TrustedCall/12 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  ClockSetPccCgcEnable/13:
    callsite  ClockSetPccCgcEnable/13 -> ClockSetPccCgcEnable_TrustedCall/12 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  ClockSetPccCgcEnable_TrustedCall/12:
  Jump functions of caller  ClockUpdateSimClkoutEnable/11:
    callsite  ClockUpdateSimClkoutEnable/11 -> ClockSetSimClkoutEnable/10 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  ClockSetSimClkoutEnable/10:
    callsite  ClockSetSimClkoutEnable/10 -> ClockSetSimClkoutEnable_TrustedCall.isra.0/24 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  ClockUpdateSimLPO32KEnable/8:
    callsite  ClockUpdateSimLPO32KEnable/8 -> ClockSetSimLPO32KEnable/7 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  ClockSetSimLPO32KEnable/7:
    callsite  ClockSetSimLPO32KEnable/7 -> ClockSetSimLPO32KEnable_TrustedCall.isra.0/23 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  ClockUpdateSimLPO1KEnable/5:
    callsite  ClockUpdateSimLPO1KEnable/5 -> ClockSetSimLPO1KEnable/4 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  ClockSetSimLPO1KEnable/4:
    callsite  ClockSetSimLPO1KEnable/4 -> ClockSetSimLPO1KEnable_TrustedCall.isra.0/22 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  ClockUpdateGateEmpty/2:
  Jump functions of caller  ClockSetGateEmpty/1:

 Propagating constants:

Not considering ClockUpdateSimTraceEnable for cloning; -fipa-cp-clone disabled.
Not considering ClockSetSimTraceEnable for cloning; -fipa-cp-clone disabled.
Not considering ClockUpdateSimGate for cloning; -fipa-cp-clone disabled.
Not considering ClockSetSimGate for cloning; -fipa-cp-clone disabled.
Not considering ClockUpdatePccCgcEnable for cloning; -fipa-cp-clone disabled.
Not considering ClockSetPccCgcEnable for cloning; -fipa-cp-clone disabled.
Not considering ClockUpdateSimClkoutEnable for cloning; -fipa-cp-clone disabled.
Not considering ClockSetSimClkoutEnable for cloning; -fipa-cp-clone disabled.
Not considering ClockUpdateSimLPO32KEnable for cloning; -fipa-cp-clone disabled.
Not considering ClockSetSimLPO32KEnable for cloning; -fipa-cp-clone disabled.
Not considering ClockUpdateSimLPO1KEnable for cloning; -fipa-cp-clone disabled.
Not considering ClockSetSimLPO1KEnable for cloning; -fipa-cp-clone disabled.
Not considering ClockUpdateGateEmpty for cloning; -fipa-cp-clone disabled.
Not considering ClockSetGateEmpty for cloning; -fipa-cp-clone disabled.

overall_size: 156, max_new_size: 11001
 - context independent values, size: 3, time_benefit: 2.000000
 - context independent values, size: 3, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: ClockSetSimTraceEnable_TrustedCall.isra.0/27:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: ClockSetSimClkoutEnable_TrustedCall.isra.0/24:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: ClockSetSimLPO32KEnable_TrustedCall.isra.0/23:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: ClockSetSimLPO1KEnable_TrustedCall.isra.0/22:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: ClockUpdateSimTraceEnable/20:
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
  Node: ClockSetSimTraceEnable/19:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ClockUpdateSimGate/17:
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
  Node: ClockSetSimGate/16:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ClockSetSimGate_TrustedCall/15:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: ClockUpdatePccCgcEnable/14:
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
  Node: ClockSetPccCgcEnable/13:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ClockSetPccCgcEnable_TrustedCall/12:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: ClockUpdateSimClkoutEnable/11:
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
  Node: ClockSetSimClkoutEnable/10:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ClockUpdateSimLPO32KEnable/8:
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
  Node: ClockSetSimLPO32KEnable/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ClockUpdateSimLPO1KEnable/5:
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
  Node: ClockSetSimLPO1KEnable/4:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ClockUpdateGateEmpty/2:
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
  Node: ClockSetGateEmpty/1:
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

ClockSetSimTraceEnable_TrustedCall.isra.0/27 (ClockSetSimTraceEnable_TrustedCall.isra.0) @07725c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: ClockSetSimTraceEnable/19 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ClockSetSimClkoutEnable_TrustedCall.isra.0/24 (ClockSetSimClkoutEnable_TrustedCall.isra.0) @07725380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: ClockSetSimClkoutEnable/10 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ClockSetSimLPO32KEnable_TrustedCall.isra.0/23 (ClockSetSimLPO32KEnable_TrustedCall.isra.0) @07663e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: ClockSetSimLPO32KEnable/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ClockSetSimLPO1KEnable_TrustedCall.isra.0/22 (ClockSetSimLPO1KEnable_TrustedCall.isra.0) @07663620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: ClockSetSimLPO1KEnable/4 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
clockFeatures/21 (clockFeatures) @076511b0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: ClockSetPccCgcEnable_TrustedCall/12 (read)ClockSetSimGate_TrustedCall/15 (read)
  Availability: not_available
  Varpool flags: read-only
ClockUpdateSimTraceEnable/20 (ClockUpdateSimTraceEnable) @06b71c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: gateCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ClockSetSimTraceEnable/19 (1073741824 (estimated locally),1.00 per call) 
ClockSetSimTraceEnable/19 (ClockSetSimTraceEnable) @06b719a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: gateCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: ClockUpdateSimTraceEnable/20 (1073741824 (estimated locally),1.00 per call) 
  Calls: ClockSetSimTraceEnable_TrustedCall.isra.0/27 (1073741824 (estimated locally),1.00 per call) 
ClockUpdateSimGate/17 (ClockUpdateSimGate) @06b71460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: gateCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ClockSetSimGate_TrustedCall/15 (1073741824 (estimated locally),1.00 per call) 
ClockSetSimGate/16 (ClockSetSimGate) @06b711c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: gateCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ClockSetSimGate_TrustedCall/15 (1073741824 (estimated locally),1.00 per call) 
ClockSetSimGate_TrustedCall/15 (ClockSetSimGate_TrustedCall) @06b6cd20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: clockFeatures/21 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: ClockUpdateSimGate/17 (1073741824 (estimated locally),1.00 per call) ClockSetSimGate/16 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ClockUpdatePccCgcEnable/14 (ClockUpdatePccCgcEnable) @06b6cee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: gateCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ClockSetPccCgcEnable_TrustedCall/12 (1073741824 (estimated locally),1.00 per call) 
ClockSetPccCgcEnable/13 (ClockSetPccCgcEnable) @06b6cc40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: gateCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ClockSetPccCgcEnable_TrustedCall/12 (1073741824 (estimated locally),1.00 per call) 
ClockSetPccCgcEnable_TrustedCall/12 (ClockSetPccCgcEnable_TrustedCall) @06b6c9a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: clockFeatures/21 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: ClockUpdatePccCgcEnable/14 (1073741824 (estimated locally),1.00 per call) ClockSetPccCgcEnable/13 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ClockUpdateSimClkoutEnable/11 (ClockUpdateSimClkoutEnable) @06b6c700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: gateCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ClockSetSimClkoutEnable/10 (1073741824 (estimated locally),1.00 per call) 
ClockSetSimClkoutEnable/10 (ClockSetSimClkoutEnable) @06b6c460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: gateCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: ClockUpdateSimClkoutEnable/11 (1073741824 (estimated locally),1.00 per call) 
  Calls: ClockSetSimClkoutEnable_TrustedCall.isra.0/24 (1073741824 (estimated locally),1.00 per call) 
ClockUpdateSimLPO32KEnable/8 (ClockUpdateSimLPO32KEnable) @06a6ba80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: gateCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ClockSetSimLPO32KEnable/7 (1073741824 (estimated locally),1.00 per call) 
ClockSetSimLPO32KEnable/7 (ClockSetSimLPO32KEnable) @06a6b2a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: gateCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: ClockUpdateSimLPO32KEnable/8 (1073741824 (estimated locally),1.00 per call) 
  Calls: ClockSetSimLPO32KEnable_TrustedCall.isra.0/23 (1073741824 (estimated locally),1.00 per call) 
ClockUpdateSimLPO1KEnable/5 (ClockUpdateSimLPO1KEnable) @06a6bc40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: gateCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ClockSetSimLPO1KEnable/4 (1073741824 (estimated locally),1.00 per call) 
ClockSetSimLPO1KEnable/4 (ClockSetSimLPO1KEnable) @06a6b9a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: gateCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: ClockUpdateSimLPO1KEnable/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: ClockSetSimLPO1KEnable_TrustedCall.isra.0/22 (1073741824 (estimated locally),1.00 per call) 
ClockUpdateGateEmpty/2 (ClockUpdateGateEmpty) @06a6b460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: gateCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
ClockSetGateEmpty/1 (ClockSetGateEmpty) @06a6b1c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: gateCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
gateCallbacks/0 (gateCallbacks) @06a685e8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: ClockSetGateEmpty/1 (addr)ClockUpdateGateEmpty/2 (addr)ClockSetPccCgcEnable/13 (addr)ClockUpdatePccCgcEnable/14 (addr)ClockSetSimClkoutEnable/10 (addr)ClockUpdateSimClkoutEnable/11 (addr)ClockSetSimLPO32KEnable/7 (addr)ClockUpdateSimLPO32KEnable/8 (addr)ClockSetSimLPO1KEnable/4 (addr)ClockUpdateSimLPO1KEnable/5 (addr)ClockSetSimGate/16 (addr)ClockUpdateSimGate/17 (addr)ClockSetSimTraceEnable/19 (addr)ClockUpdateSimTraceEnable/20 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known

;; Function ClockSetGateEmpty (ClockSetGateEmpty, funcdef_no=0, decl_uid=6045, cgraph_uid=1, symbol_order=1)

Modification phase of node ClockSetGateEmpty/1
ClockSetGateEmpty (const struct Clock_Ip_GateConfigType * config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function ClockUpdateGateEmpty (ClockUpdateGateEmpty, funcdef_no=1, decl_uid=6048, cgraph_uid=2, symbol_order=2)

Modification phase of node ClockUpdateGateEmpty/2
ClockUpdateGateEmpty (Clock_Ip_NameType clockName, boolean gate)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function ClockUpdatePccCgcEnable (ClockUpdatePccCgcEnable, funcdef_no=13, decl_uid=6068, cgraph_uid=14, symbol_order=14)

Modification phase of node ClockUpdatePccCgcEnable/14
ClockUpdatePccCgcEnable (Clock_Ip_NameType clockName, boolean gate)
{
  struct Clock_Ip_GateConfigType config;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  config.name = clockName_3(D);
  # DEBUG BEGIN_STMT
  if (gate_5(D) != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  config.enable = 0;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  config.enable = 1;

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG config => &config
  # DEBUG INLINE_ENTRY ClockSetPccCgcEnable
  # DEBUG BEGIN_STMT
  ClockSetPccCgcEnable_TrustedCall (&config);
  # DEBUG config => NULL
  config ={v} {CLOBBER};
  return;

}



;; Function ClockSetSimGate_TrustedCall (ClockSetSimGate_TrustedCall, funcdef_no=14, decl_uid=6136, cgraph_uid=15, symbol_order=15)

Modification phase of node ClockSetSimGate_TrustedCall/15
ClockSetSimGate_TrustedCall (const struct Clock_Ip_GateConfigType * config)
{
  uint32 regValue;
  uint32 gateIndex;
  uint32 enable;
  short unsigned int _1;
  <unnamed type> _2;
  unsigned char _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = config_8(D)->enable;
  enable_9 = (uint32) _1;
  # DEBUG enable => enable_9
  # DEBUG BEGIN_STMT
  _2 = config_8(D)->name;
  _3 = clockFeatures[_2][6];
  gateIndex_10 = (uint32) _3;
  # DEBUG gateIndex => gateIndex_10
  # DEBUG BEGIN_STMT
  regValue_11 ={v} MEM[(struct SIM_Type *)1074036736B].PLATCGC;
  # DEBUG regValue => regValue_11
  # DEBUG BEGIN_STMT
  _4 = 1 << gateIndex_10;
  _5 = ~_4;
  regValue_12 = _5 & regValue_11;
  # DEBUG regValue => regValue_12
  # DEBUG BEGIN_STMT
  _6 = enable_9 << gateIndex_10;
  regValue_13 = _6 | regValue_12;
  # DEBUG regValue => regValue_13
  # DEBUG BEGIN_STMT
  MEM[(struct SIM_Type *)1074036736B].PLATCGC ={v} regValue_13;
  return;

}



;; Function ClockSetSimGate (ClockSetSimGate, funcdef_no=15, decl_uid=6070, cgraph_uid=16, symbol_order=16)

Modification phase of node ClockSetSimGate/16
ClockSetSimGate (const struct Clock_Ip_GateConfigType * config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  ClockSetSimGate_TrustedCall (config_2(D));
  return;

}



;; Function ClockUpdateSimGate (ClockUpdateSimGate, funcdef_no=16, decl_uid=6073, cgraph_uid=17, symbol_order=17)

Modification phase of node ClockUpdateSimGate/17
ClockUpdateSimGate (Clock_Ip_NameType clockName, boolean gate)
{
  struct Clock_Ip_GateConfigType config;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  config.name = clockName_3(D);
  # DEBUG BEGIN_STMT
  if (gate_5(D) != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  config.enable = 0;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  config.enable = 1;

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG config => &config
  # DEBUG INLINE_ENTRY ClockSetSimGate
  # DEBUG BEGIN_STMT
  ClockSetSimGate_TrustedCall (&config);
  # DEBUG config => NULL
  config ={v} {CLOBBER};
  return;

}



;; Function ClockSetSimLPO1KEnable (ClockSetSimLPO1KEnable, funcdef_no=3, decl_uid=6050, cgraph_uid=4, symbol_order=4)

Modification phase of node ClockSetSimLPO1KEnable/4
ClockSetSimLPO1KEnable (const struct Clock_Ip_GateConfigType * config)
{
  short unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(short unsigned int *)config_2(D) + 4B];
  # DEBUG D#1 => config_2(D)
  ClockSetSimLPO1KEnable_TrustedCall.isra.0 (_4);
  return;

}



;; Function ClockUpdateSimLPO1KEnable (ClockUpdateSimLPO1KEnable, funcdef_no=4, decl_uid=6053, cgraph_uid=5, symbol_order=5)

Modification phase of node ClockUpdateSimLPO1KEnable/5
ClockUpdateSimLPO1KEnable (Clock_Ip_NameType clockName, boolean gate)
{
  struct Clock_Ip_GateConfigType config;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  config.name = clockName_3(D);
  # DEBUG BEGIN_STMT
  if (gate_5(D) != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  config.enable = 0;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  config.enable = 1;

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  ClockSetSimLPO1KEnable (&config);
  config ={v} {CLOBBER};
  return;

}



;; Function ClockSetSimLPO32KEnable (ClockSetSimLPO32KEnable, funcdef_no=6, decl_uid=6055, cgraph_uid=7, symbol_order=7)

Modification phase of node ClockSetSimLPO32KEnable/7
ClockSetSimLPO32KEnable (const struct Clock_Ip_GateConfigType * config)
{
  short unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(short unsigned int *)config_2(D) + 4B];
  # DEBUG D#2 => config_2(D)
  ClockSetSimLPO32KEnable_TrustedCall.isra.0 (_4);
  return;

}



;; Function ClockUpdateSimLPO32KEnable (ClockUpdateSimLPO32KEnable, funcdef_no=7, decl_uid=6058, cgraph_uid=8, symbol_order=8)

Modification phase of node ClockUpdateSimLPO32KEnable/8
ClockUpdateSimLPO32KEnable (Clock_Ip_NameType clockName, boolean gate)
{
  struct Clock_Ip_GateConfigType config;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  config.name = clockName_3(D);
  # DEBUG BEGIN_STMT
  if (gate_5(D) != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  config.enable = 0;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  config.enable = 1;

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  ClockSetSimLPO32KEnable (&config);
  config ={v} {CLOBBER};
  return;

}



;; Function ClockSetSimClkoutEnable (ClockSetSimClkoutEnable, funcdef_no=9, decl_uid=6060, cgraph_uid=10, symbol_order=10)

Modification phase of node ClockSetSimClkoutEnable/10
ClockSetSimClkoutEnable (const struct Clock_Ip_GateConfigType * config)
{
  short unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(short unsigned int *)config_2(D) + 4B];
  # DEBUG D#3 => config_2(D)
  ClockSetSimClkoutEnable_TrustedCall.isra.0 (_4);
  return;

}



;; Function ClockUpdateSimClkoutEnable (ClockUpdateSimClkoutEnable, funcdef_no=10, decl_uid=6063, cgraph_uid=11, symbol_order=11)

Modification phase of node ClockUpdateSimClkoutEnable/11
ClockUpdateSimClkoutEnable (Clock_Ip_NameType clockName, boolean gate)
{
  struct Clock_Ip_GateConfigType config;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  config.name = clockName_3(D);
  # DEBUG BEGIN_STMT
  if (gate_5(D) != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  config.enable = 0;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  config.enable = 1;

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  ClockSetSimClkoutEnable (&config);
  config ={v} {CLOBBER};
  return;

}



;; Function ClockSetSimTraceEnable (ClockSetSimTraceEnable, funcdef_no=18, decl_uid=6075, cgraph_uid=19, symbol_order=19)

Modification phase of node ClockSetSimTraceEnable/19
ClockSetSimTraceEnable (const struct Clock_Ip_GateConfigType * config)
{
  short unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(short unsigned int *)config_2(D) + 4B];
  # DEBUG D#4 => config_2(D)
  ClockSetSimTraceEnable_TrustedCall.isra.0 (_4);
  return;

}



;; Function ClockUpdateSimTraceEnable (ClockUpdateSimTraceEnable, funcdef_no=19, decl_uid=6078, cgraph_uid=20, symbol_order=20)

Modification phase of node ClockUpdateSimTraceEnable/20
ClockUpdateSimTraceEnable (Clock_Ip_NameType clockName, boolean gate)
{
  struct Clock_Ip_GateConfigType config;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  config.name = clockName_3(D);
  # DEBUG BEGIN_STMT
  if (gate_5(D) != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  config.enable = 0;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  config.enable = 1;

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  ClockSetSimTraceEnable (&config);
  config ={v} {CLOBBER};
  return;

}



;; Function ClockSetPccCgcEnable (ClockSetPccCgcEnable, funcdef_no=12, decl_uid=6065, cgraph_uid=13, symbol_order=13)

Modification phase of node ClockSetPccCgcEnable/13
ClockSetPccCgcEnable (const struct Clock_Ip_GateConfigType * config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  ClockSetPccCgcEnable_TrustedCall (config_2(D));
  return;

}


