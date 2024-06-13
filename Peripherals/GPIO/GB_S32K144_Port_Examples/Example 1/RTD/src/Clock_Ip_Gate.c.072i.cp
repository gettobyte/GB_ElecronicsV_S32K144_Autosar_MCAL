
IPA constant propagation start:
Determining dynamic type for call: Clock_Ip_ClockSetSimTraceEnable_TrustedCall (&Config);
  Starting walk at: Clock_Ip_ClockSetSimTraceEnable_TrustedCall (&Config);
  instance pointer: &Config  Outer instance pointer: Config offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Clock_Ip_ClockSetSimTraceEnable_TrustedCall (Config_2(D));
  Starting walk at: Clock_Ip_ClockSetSimTraceEnable_TrustedCall (Config_2(D));
  instance pointer: Config_2(D)  Outer instance pointer: Config_2(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Clock_Ip_ClockSetSimGate_TrustedCall (&Config);
  Starting walk at: Clock_Ip_ClockSetSimGate_TrustedCall (&Config);
  instance pointer: &Config  Outer instance pointer: Config offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Clock_Ip_ClockSetSimGate_TrustedCall (Config_2(D));
  Starting walk at: Clock_Ip_ClockSetSimGate_TrustedCall (Config_2(D));
  instance pointer: Config_2(D)  Outer instance pointer: Config_2(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Clock_Ip_ClockSetPccCgcEnable_TrustedCall (&Config);
  Starting walk at: Clock_Ip_ClockSetPccCgcEnable_TrustedCall (&Config);
  instance pointer: &Config  Outer instance pointer: Config offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Clock_Ip_ClockSetPccCgcEnable_TrustedCall (Config_2(D));
  Starting walk at: Clock_Ip_ClockSetPccCgcEnable_TrustedCall (Config_2(D));
  instance pointer: Config_2(D)  Outer instance pointer: Config_2(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Clock_Ip_ClockSetSimClkoutEnable_TrustedCall (&Config);
  Starting walk at: Clock_Ip_ClockSetSimClkoutEnable_TrustedCall (&Config);
  instance pointer: &Config  Outer instance pointer: Config offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Clock_Ip_ClockSetSimClkoutEnable_TrustedCall (Config_2(D));
  Starting walk at: Clock_Ip_ClockSetSimClkoutEnable_TrustedCall (Config_2(D));
  instance pointer: Config_2(D)  Outer instance pointer: Config_2(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Clock_Ip_ClockSetSimLPO32KEnable_TrustedCall (&Config);
  Starting walk at: Clock_Ip_ClockSetSimLPO32KEnable_TrustedCall (&Config);
  instance pointer: &Config  Outer instance pointer: Config offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Clock_Ip_ClockSetSimLPO32KEnable_TrustedCall (Config_2(D));
  Starting walk at: Clock_Ip_ClockSetSimLPO32KEnable_TrustedCall (Config_2(D));
  instance pointer: Config_2(D)  Outer instance pointer: Config_2(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Clock_Ip_ClockSetSimLPO1KEnable_TrustedCall (&Config);
  Starting walk at: Clock_Ip_ClockSetSimLPO1KEnable_TrustedCall (&Config);
  instance pointer: &Config  Outer instance pointer: Config offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Clock_Ip_ClockSetSimLPO1KEnable_TrustedCall (Config_2(D));
  Starting walk at: Clock_Ip_ClockSetSimLPO1KEnable_TrustedCall (Config_2(D));
  instance pointer: Config_2(D)  Outer instance pointer: Config_2(D) offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Clock_Ip_ClockSetSimTraceEnable_TrustedCall/19:
  Jump functions of caller  Clock_Ip_ClockSetSimGate_TrustedCall/18:
  Jump functions of caller  Clock_Ip_ClockSetPccCgcEnable_TrustedCall/17:
  Jump functions of caller  Clock_Ip_ClockSetSimClkoutEnable_TrustedCall/16:
  Jump functions of caller  Clock_Ip_ClockSetSimLPO32KEnable_TrustedCall/15:
  Jump functions of caller  Clock_Ip_ClockSetSimLPO1KEnable_TrustedCall/14:
  Jump functions of caller  Clock_Ip_ClockUpdateSimTraceEnable/13:
    callsite  Clock_Ip_ClockUpdateSimTraceEnable/13 -> Clock_Ip_ClockSetSimTraceEnable_TrustedCall/19 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  Clock_Ip_ClockSetSimTraceEnable/12:
    callsite  Clock_Ip_ClockSetSimTraceEnable/12 -> Clock_Ip_ClockSetSimTraceEnable_TrustedCall/19 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Clock_Ip_ClockUpdateSimGate/11:
    callsite  Clock_Ip_ClockUpdateSimGate/11 -> Clock_Ip_ClockSetSimGate_TrustedCall/18 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  Clock_Ip_ClockSetSimGate/10:
    callsite  Clock_Ip_ClockSetSimGate/10 -> Clock_Ip_ClockSetSimGate_TrustedCall/18 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Clock_Ip_ClockUpdatePccCgcEnable/9:
    callsite  Clock_Ip_ClockUpdatePccCgcEnable/9 -> Clock_Ip_ClockSetPccCgcEnable_TrustedCall/17 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  Clock_Ip_ClockSetPccCgcEnable/8:
    callsite  Clock_Ip_ClockSetPccCgcEnable/8 -> Clock_Ip_ClockSetPccCgcEnable_TrustedCall/17 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Clock_Ip_ClockUpdateSimClkoutEnable/7:
    callsite  Clock_Ip_ClockUpdateSimClkoutEnable/7 -> Clock_Ip_ClockSetSimClkoutEnable_TrustedCall/16 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  Clock_Ip_ClockSetSimClkoutEnable/6:
    callsite  Clock_Ip_ClockSetSimClkoutEnable/6 -> Clock_Ip_ClockSetSimClkoutEnable_TrustedCall/16 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Clock_Ip_ClockUpdateSimLPO32KEnable/5:
    callsite  Clock_Ip_ClockUpdateSimLPO32KEnable/5 -> Clock_Ip_ClockSetSimLPO32KEnable_TrustedCall/15 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  Clock_Ip_ClockSetSimLPO32KEnable/4:
    callsite  Clock_Ip_ClockSetSimLPO32KEnable/4 -> Clock_Ip_ClockSetSimLPO32KEnable_TrustedCall/15 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Clock_Ip_ClockUpdateSimLPO1KEnable/3:
    callsite  Clock_Ip_ClockUpdateSimLPO1KEnable/3 -> Clock_Ip_ClockSetSimLPO1KEnable_TrustedCall/14 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  Clock_Ip_ClockSetSimLPO1KEnable/2:
    callsite  Clock_Ip_ClockSetSimLPO1KEnable/2 -> Clock_Ip_ClockSetSimLPO1KEnable_TrustedCall/14 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Clock_Ip_ClockUpdateGateEmpty/1:
  Jump functions of caller  Clock_Ip_ClockSetGateEmpty/0:

 Propagating constants:

Not considering Clock_Ip_ClockSetSimTraceEnable_TrustedCall for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ClockSetSimGate_TrustedCall for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ClockSetPccCgcEnable_TrustedCall for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ClockSetSimClkoutEnable_TrustedCall for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ClockSetSimLPO32KEnable_TrustedCall for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ClockSetSimLPO1KEnable_TrustedCall for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ClockUpdateSimTraceEnable for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ClockSetSimTraceEnable for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ClockUpdateSimGate for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ClockSetSimGate for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ClockUpdatePccCgcEnable for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ClockSetPccCgcEnable for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ClockUpdateSimClkoutEnable for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ClockSetSimClkoutEnable for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ClockUpdateSimLPO32KEnable for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ClockSetSimLPO32KEnable for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ClockUpdateSimLPO1KEnable for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ClockSetSimLPO1KEnable for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ClockUpdateGateEmpty for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ClockSetGateEmpty for cloning; -fipa-cp-clone disabled.

overall_size: 156, max_new_size: 11001
 - context independent values, size: 3, time_benefit: 2.000000
 - context independent values, size: 3, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: Clock_Ip_ClockSetSimTraceEnable_TrustedCall/19:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_ClockSetSimGate_TrustedCall/18:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_ClockSetPccCgcEnable_TrustedCall/17:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_ClockSetSimClkoutEnable_TrustedCall/16:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_ClockSetSimLPO32KEnable_TrustedCall/15:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_ClockSetSimLPO1KEnable_TrustedCall/14:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_ClockUpdateSimTraceEnable/13:
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
  Node: Clock_Ip_ClockSetSimTraceEnable/12:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_ClockUpdateSimGate/11:
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
  Node: Clock_Ip_ClockSetSimGate/10:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_ClockUpdatePccCgcEnable/9:
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
  Node: Clock_Ip_ClockSetPccCgcEnable/8:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_ClockUpdateSimClkoutEnable/7:
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
  Node: Clock_Ip_ClockSetSimClkoutEnable/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_ClockUpdateSimLPO32KEnable/5:
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
  Node: Clock_Ip_ClockSetSimLPO32KEnable/4:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_ClockUpdateSimLPO1KEnable/3:
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
  Node: Clock_Ip_ClockSetSimLPO1KEnable/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_ClockUpdateGateEmpty/1:
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
  Node: Clock_Ip_ClockSetGateEmpty/0:
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

Clock_Ip_au8ClockFeatures/21 (Clock_Ip_au8ClockFeatures) @068ce7e0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_ClockSetPccCgcEnable_TrustedCall/17 (read)Clock_Ip_ClockSetSimGate_TrustedCall/18 (read)
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_axGateCallbacks/20 (Clock_Ip_axGateCallbacks) @068ce288
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_ClockSetGateEmpty/0 (addr)Clock_Ip_ClockUpdateGateEmpty/1 (addr)Clock_Ip_ClockSetPccCgcEnable/8 (addr)Clock_Ip_ClockUpdatePccCgcEnable/9 (addr)Clock_Ip_ClockSetSimClkoutEnable/6 (addr)Clock_Ip_ClockUpdateSimClkoutEnable/7 (addr)Clock_Ip_ClockSetSimLPO32KEnable/4 (addr)Clock_Ip_ClockUpdateSimLPO32KEnable/5 (addr)Clock_Ip_ClockSetSimLPO1KEnable/2 (addr)Clock_Ip_ClockUpdateSimLPO1KEnable/3 (addr)Clock_Ip_ClockSetSimGate/10 (addr)Clock_Ip_ClockUpdateSimGate/11 (addr)Clock_Ip_ClockSetSimTraceEnable/12 (addr)Clock_Ip_ClockUpdateSimTraceEnable/13 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Clock_Ip_ClockSetSimTraceEnable_TrustedCall/19 (Clock_Ip_ClockSetSimTraceEnable_TrustedCall) @06bb2540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Clock_Ip_ClockUpdateSimTraceEnable/13 (1073741824 (estimated locally),1.00 per call) Clock_Ip_ClockSetSimTraceEnable/12 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_ClockSetSimGate_TrustedCall/18 (Clock_Ip_ClockSetSimGate_TrustedCall) @06bb22a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_au8ClockFeatures/21 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Clock_Ip_ClockUpdateSimGate/11 (1073741824 (estimated locally),1.00 per call) Clock_Ip_ClockSetSimGate/10 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_ClockSetPccCgcEnable_TrustedCall/17 (Clock_Ip_ClockSetPccCgcEnable_TrustedCall) @06bb2000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_au8ClockFeatures/21 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Clock_Ip_ClockUpdatePccCgcEnable/9 (1073741824 (estimated locally),1.00 per call) Clock_Ip_ClockSetPccCgcEnable/8 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_ClockSetSimClkoutEnable_TrustedCall/16 (Clock_Ip_ClockSetSimClkoutEnable_TrustedCall) @068cbb60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Clock_Ip_ClockUpdateSimClkoutEnable/7 (1073741824 (estimated locally),1.00 per call) Clock_Ip_ClockSetSimClkoutEnable/6 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_ClockSetSimLPO32KEnable_TrustedCall/15 (Clock_Ip_ClockSetSimLPO32KEnable_TrustedCall) @068cb620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Clock_Ip_ClockUpdateSimLPO32KEnable/5 (1073741824 (estimated locally),1.00 per call) Clock_Ip_ClockSetSimLPO32KEnable/4 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_ClockSetSimLPO1KEnable_TrustedCall/14 (Clock_Ip_ClockSetSimLPO1KEnable_TrustedCall) @068cb000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Clock_Ip_ClockUpdateSimLPO1KEnable/3 (1073741824 (estimated locally),1.00 per call) Clock_Ip_ClockSetSimLPO1KEnable/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_ClockUpdateSimTraceEnable/13 (Clock_Ip_ClockUpdateSimTraceEnable) @068cbd20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axGateCallbacks/20 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_ClockSetSimTraceEnable_TrustedCall/19 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_ClockSetSimTraceEnable/12 (Clock_Ip_ClockSetSimTraceEnable) @068cba80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axGateCallbacks/20 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_ClockSetSimTraceEnable_TrustedCall/19 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_ClockUpdateSimGate/11 (Clock_Ip_ClockUpdateSimGate) @068cb7e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axGateCallbacks/20 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_ClockSetSimGate_TrustedCall/18 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_ClockSetSimGate/10 (Clock_Ip_ClockSetSimGate) @068cb540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axGateCallbacks/20 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_ClockSetSimGate_TrustedCall/18 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_ClockUpdatePccCgcEnable/9 (Clock_Ip_ClockUpdatePccCgcEnable) @068cb1c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axGateCallbacks/20 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_ClockSetPccCgcEnable_TrustedCall/17 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_ClockSetPccCgcEnable/8 (Clock_Ip_ClockSetPccCgcEnable) @068c7d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axGateCallbacks/20 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_ClockSetPccCgcEnable_TrustedCall/17 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_ClockUpdateSimClkoutEnable/7 (Clock_Ip_ClockUpdateSimClkoutEnable) @068c77e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axGateCallbacks/20 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_ClockSetSimClkoutEnable_TrustedCall/16 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_ClockSetSimClkoutEnable/6 (Clock_Ip_ClockSetSimClkoutEnable) @068c72a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axGateCallbacks/20 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_ClockSetSimClkoutEnable_TrustedCall/16 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_ClockUpdateSimLPO32KEnable/5 (Clock_Ip_ClockUpdateSimLPO32KEnable) @068c7ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axGateCallbacks/20 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_ClockSetSimLPO32KEnable_TrustedCall/15 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_ClockSetSimLPO32KEnable/4 (Clock_Ip_ClockSetSimLPO32KEnable) @068c7c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axGateCallbacks/20 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_ClockSetSimLPO32KEnable_TrustedCall/15 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_ClockUpdateSimLPO1KEnable/3 (Clock_Ip_ClockUpdateSimLPO1KEnable) @068c79a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axGateCallbacks/20 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_ClockSetSimLPO1KEnable_TrustedCall/14 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_ClockSetSimLPO1KEnable/2 (Clock_Ip_ClockSetSimLPO1KEnable) @068c7700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axGateCallbacks/20 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_ClockSetSimLPO1KEnable_TrustedCall/14 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_ClockUpdateGateEmpty/1 (Clock_Ip_ClockUpdateGateEmpty) @068c7460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axGateCallbacks/20 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_ClockSetGateEmpty/0 (Clock_Ip_ClockSetGateEmpty) @068c71c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axGateCallbacks/20 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function Clock_Ip_ClockSetGateEmpty (Clock_Ip_ClockSetGateEmpty, funcdef_no=0, decl_uid=6068, cgraph_uid=1, symbol_order=0)

Modification phase of node Clock_Ip_ClockSetGateEmpty/0
Clock_Ip_ClockSetGateEmpty (const struct Clock_Ip_GateConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Clock_Ip_ClockUpdateGateEmpty (Clock_Ip_ClockUpdateGateEmpty, funcdef_no=1, decl_uid=6071, cgraph_uid=2, symbol_order=1)

Modification phase of node Clock_Ip_ClockUpdateGateEmpty/1
Clock_Ip_ClockUpdateGateEmpty (Clock_Ip_NameType ClockName, boolean Gate)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function Clock_Ip_ClockSetSimLPO1KEnable_TrustedCall (Clock_Ip_ClockSetSimLPO1KEnable_TrustedCall, funcdef_no=14, decl_uid=6056, cgraph_uid=15, symbol_order=14)

Modification phase of node Clock_Ip_ClockSetSimLPO1KEnable_TrustedCall/14
Clock_Ip_ClockSetSimLPO1KEnable_TrustedCall (const struct Clock_Ip_GateConfigType * Config)
{
  uint32 RegValue;
  short unsigned int _1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  RegValue_4 ={v} MEM[(struct SIM_Type *)1074036736B].LPOCLKS;
  # DEBUG RegValue => RegValue_4
  # DEBUG BEGIN_STMT
  RegValue_5 = RegValue_4 & 4294967294;
  # DEBUG RegValue => RegValue_5
  # DEBUG BEGIN_STMT
  _1 = Config_6(D)->Enable;
  _2 = (long unsigned int) _1;
  RegValue_7 = _2 | RegValue_5;
  # DEBUG RegValue => RegValue_7
  # DEBUG BEGIN_STMT
  MEM[(struct SIM_Type *)1074036736B].LPOCLKS ={v} RegValue_7;
  return;

}



;; Function Clock_Ip_ClockSetSimLPO1KEnable (Clock_Ip_ClockSetSimLPO1KEnable, funcdef_no=2, decl_uid=6073, cgraph_uid=3, symbol_order=2)

Modification phase of node Clock_Ip_ClockSetSimLPO1KEnable/2
Clock_Ip_ClockSetSimLPO1KEnable (const struct Clock_Ip_GateConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Clock_Ip_ClockSetSimLPO1KEnable_TrustedCall (Config_2(D));
  return;

}



;; Function Clock_Ip_ClockUpdateSimLPO1KEnable (Clock_Ip_ClockUpdateSimLPO1KEnable, funcdef_no=3, decl_uid=6076, cgraph_uid=4, symbol_order=3)

Modification phase of node Clock_Ip_ClockUpdateSimLPO1KEnable/3
Clock_Ip_ClockUpdateSimLPO1KEnable (Clock_Ip_NameType ClockName, boolean Gate)
{
  struct Clock_Ip_GateConfigType Config;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Config.Name = ClockName_3(D);
  # DEBUG BEGIN_STMT
  if (Gate_5(D) != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Config.Enable = 0;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Config.Enable = 1;

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Config => &Config
  # DEBUG INLINE_ENTRY Clock_Ip_ClockSetSimLPO1KEnable
  # DEBUG BEGIN_STMT
  Clock_Ip_ClockSetSimLPO1KEnable_TrustedCall (&Config);
  # DEBUG Config => NULL
  Config ={v} {CLOBBER};
  return;

}



;; Function Clock_Ip_ClockSetSimLPO32KEnable_TrustedCall (Clock_Ip_ClockSetSimLPO32KEnable_TrustedCall, funcdef_no=15, decl_uid=6058, cgraph_uid=16, symbol_order=15)

Modification phase of node Clock_Ip_ClockSetSimLPO32KEnable_TrustedCall/15
Clock_Ip_ClockSetSimLPO32KEnable_TrustedCall (const struct Clock_Ip_GateConfigType * Config)
{
  uint32 RegValue;
  short unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  RegValue_5 ={v} MEM[(struct SIM_Type *)1074036736B].LPOCLKS;
  # DEBUG RegValue => RegValue_5
  # DEBUG BEGIN_STMT
  RegValue_6 = RegValue_5 & 4294967293;
  # DEBUG RegValue => RegValue_6
  # DEBUG BEGIN_STMT
  _1 = Config_7(D)->Enable;
  _2 = (long unsigned int) _1;
  _3 = _2 << 1;
  RegValue_8 = _3 | RegValue_6;
  # DEBUG RegValue => RegValue_8
  # DEBUG BEGIN_STMT
  MEM[(struct SIM_Type *)1074036736B].LPOCLKS ={v} RegValue_8;
  return;

}



;; Function Clock_Ip_ClockSetSimLPO32KEnable (Clock_Ip_ClockSetSimLPO32KEnable, funcdef_no=4, decl_uid=6078, cgraph_uid=5, symbol_order=4)

Modification phase of node Clock_Ip_ClockSetSimLPO32KEnable/4
Clock_Ip_ClockSetSimLPO32KEnable (const struct Clock_Ip_GateConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Clock_Ip_ClockSetSimLPO32KEnable_TrustedCall (Config_2(D));
  return;

}



;; Function Clock_Ip_ClockUpdateSimLPO32KEnable (Clock_Ip_ClockUpdateSimLPO32KEnable, funcdef_no=5, decl_uid=6081, cgraph_uid=6, symbol_order=5)

Modification phase of node Clock_Ip_ClockUpdateSimLPO32KEnable/5
Clock_Ip_ClockUpdateSimLPO32KEnable (Clock_Ip_NameType ClockName, boolean Gate)
{
  struct Clock_Ip_GateConfigType Config;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Config.Name = ClockName_3(D);
  # DEBUG BEGIN_STMT
  if (Gate_5(D) != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Config.Enable = 0;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Config.Enable = 1;

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Config => &Config
  # DEBUG INLINE_ENTRY Clock_Ip_ClockSetSimLPO32KEnable
  # DEBUG BEGIN_STMT
  Clock_Ip_ClockSetSimLPO32KEnable_TrustedCall (&Config);
  # DEBUG Config => NULL
  Config ={v} {CLOBBER};
  return;

}



;; Function Clock_Ip_ClockSetSimClkoutEnable_TrustedCall (Clock_Ip_ClockSetSimClkoutEnable_TrustedCall, funcdef_no=16, decl_uid=6060, cgraph_uid=17, symbol_order=16)

Modification phase of node Clock_Ip_ClockSetSimClkoutEnable_TrustedCall/16
Clock_Ip_ClockSetSimClkoutEnable_TrustedCall (const struct Clock_Ip_GateConfigType * Config)
{
  uint32 RegValue;
  short unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  RegValue_5 ={v} MEM[(struct SIM_Type *)1074036736B].CHIPCTL;
  # DEBUG RegValue => RegValue_5
  # DEBUG BEGIN_STMT
  RegValue_6 = RegValue_5 & 4294965247;
  # DEBUG RegValue => RegValue_6
  # DEBUG BEGIN_STMT
  _1 = Config_7(D)->Enable;
  _2 = (long unsigned int) _1;
  _3 = _2 << 11;
  RegValue_8 = _3 | RegValue_6;
  # DEBUG RegValue => RegValue_8
  # DEBUG BEGIN_STMT
  MEM[(struct SIM_Type *)1074036736B].CHIPCTL ={v} RegValue_8;
  return;

}



;; Function Clock_Ip_ClockSetSimClkoutEnable (Clock_Ip_ClockSetSimClkoutEnable, funcdef_no=6, decl_uid=6083, cgraph_uid=7, symbol_order=6)

Modification phase of node Clock_Ip_ClockSetSimClkoutEnable/6
Clock_Ip_ClockSetSimClkoutEnable (const struct Clock_Ip_GateConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Clock_Ip_ClockSetSimClkoutEnable_TrustedCall (Config_2(D));
  return;

}



;; Function Clock_Ip_ClockUpdateSimClkoutEnable (Clock_Ip_ClockUpdateSimClkoutEnable, funcdef_no=7, decl_uid=6086, cgraph_uid=8, symbol_order=7)

Modification phase of node Clock_Ip_ClockUpdateSimClkoutEnable/7
Clock_Ip_ClockUpdateSimClkoutEnable (Clock_Ip_NameType ClockName, boolean Gate)
{
  struct Clock_Ip_GateConfigType Config;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Config.Name = ClockName_3(D);
  # DEBUG BEGIN_STMT
  if (Gate_5(D) != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Config.Enable = 0;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Config.Enable = 1;

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Config => &Config
  # DEBUG INLINE_ENTRY Clock_Ip_ClockSetSimClkoutEnable
  # DEBUG BEGIN_STMT
  Clock_Ip_ClockSetSimClkoutEnable_TrustedCall (&Config);
  # DEBUG Config => NULL
  Config ={v} {CLOBBER};
  return;

}



;; Function Clock_Ip_ClockSetPccCgcEnable_TrustedCall (Clock_Ip_ClockSetPccCgcEnable_TrustedCall, funcdef_no=17, decl_uid=6062, cgraph_uid=18, symbol_order=17)

Modification phase of node Clock_Ip_ClockSetPccCgcEnable_TrustedCall/17
Clock_Ip_ClockSetPccCgcEnable_TrustedCall (const struct Clock_Ip_GateConfigType * Config)
{
  uint32 RegValue;
  <unnamed type> _1;
  unsigned char _2;
  int _3;
  short unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Config_8(D)->Name;
  _2 = Clock_Ip_au8ClockFeatures[_1][6];
  _3 = (int) _2;
  RegValue_9 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[_3];
  # DEBUG RegValue => RegValue_9
  # DEBUG BEGIN_STMT
  RegValue_10 = RegValue_9 & 3221225471;
  # DEBUG RegValue => RegValue_10
  # DEBUG BEGIN_STMT
  _4 = Config_8(D)->Enable;
  _5 = (long unsigned int) _4;
  _6 = _5 << 30;
  RegValue_11 = _6 | RegValue_10;
  # DEBUG RegValue => RegValue_11
  # DEBUG BEGIN_STMT
  MEM[(struct PCC_Type *)1074155520B].PCCn[_3] ={v} RegValue_11;
  return;

}



;; Function Clock_Ip_ClockSetPccCgcEnable (Clock_Ip_ClockSetPccCgcEnable, funcdef_no=8, decl_uid=6088, cgraph_uid=9, symbol_order=8)

Modification phase of node Clock_Ip_ClockSetPccCgcEnable/8
Clock_Ip_ClockSetPccCgcEnable (const struct Clock_Ip_GateConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Clock_Ip_ClockSetPccCgcEnable_TrustedCall (Config_2(D));
  return;

}



;; Function Clock_Ip_ClockUpdatePccCgcEnable (Clock_Ip_ClockUpdatePccCgcEnable, funcdef_no=9, decl_uid=6091, cgraph_uid=10, symbol_order=9)

Modification phase of node Clock_Ip_ClockUpdatePccCgcEnable/9
Clock_Ip_ClockUpdatePccCgcEnable (Clock_Ip_NameType ClockName, boolean Gate)
{
  struct Clock_Ip_GateConfigType Config;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Config.Name = ClockName_3(D);
  # DEBUG BEGIN_STMT
  if (Gate_5(D) != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Config.Enable = 0;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Config.Enable = 1;

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Config => &Config
  # DEBUG INLINE_ENTRY Clock_Ip_ClockSetPccCgcEnable
  # DEBUG BEGIN_STMT
  Clock_Ip_ClockSetPccCgcEnable_TrustedCall (&Config);
  # DEBUG Config => NULL
  Config ={v} {CLOBBER};
  return;

}



;; Function Clock_Ip_ClockSetSimGate_TrustedCall (Clock_Ip_ClockSetSimGate_TrustedCall, funcdef_no=18, decl_uid=6064, cgraph_uid=19, symbol_order=18)

Modification phase of node Clock_Ip_ClockSetSimGate_TrustedCall/18
Clock_Ip_ClockSetSimGate_TrustedCall (const struct Clock_Ip_GateConfigType * Config)
{
  uint32 RegValue;
  uint32 GateIndex;
  uint32 Enable;
  short unsigned int _1;
  <unnamed type> _2;
  unsigned char _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Config_8(D)->Enable;
  Enable_9 = (uint32) _1;
  # DEBUG Enable => Enable_9
  # DEBUG BEGIN_STMT
  _2 = Config_8(D)->Name;
  _3 = Clock_Ip_au8ClockFeatures[_2][6];
  GateIndex_10 = (uint32) _3;
  # DEBUG GateIndex => GateIndex_10
  # DEBUG BEGIN_STMT
  RegValue_11 ={v} MEM[(struct SIM_Type *)1074036736B].PLATCGC;
  # DEBUG RegValue => RegValue_11
  # DEBUG BEGIN_STMT
  _4 = 1 << GateIndex_10;
  _5 = ~_4;
  RegValue_12 = _5 & RegValue_11;
  # DEBUG RegValue => RegValue_12
  # DEBUG BEGIN_STMT
  _6 = Enable_9 << GateIndex_10;
  RegValue_13 = _6 | RegValue_12;
  # DEBUG RegValue => RegValue_13
  # DEBUG BEGIN_STMT
  MEM[(struct SIM_Type *)1074036736B].PLATCGC ={v} RegValue_13;
  return;

}



;; Function Clock_Ip_ClockSetSimGate (Clock_Ip_ClockSetSimGate, funcdef_no=10, decl_uid=6093, cgraph_uid=11, symbol_order=10)

Modification phase of node Clock_Ip_ClockSetSimGate/10
Clock_Ip_ClockSetSimGate (const struct Clock_Ip_GateConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Clock_Ip_ClockSetSimGate_TrustedCall (Config_2(D));
  return;

}



;; Function Clock_Ip_ClockUpdateSimGate (Clock_Ip_ClockUpdateSimGate, funcdef_no=11, decl_uid=6096, cgraph_uid=12, symbol_order=11)

Modification phase of node Clock_Ip_ClockUpdateSimGate/11
Clock_Ip_ClockUpdateSimGate (Clock_Ip_NameType ClockName, boolean Gate)
{
  struct Clock_Ip_GateConfigType Config;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Config.Name = ClockName_3(D);
  # DEBUG BEGIN_STMT
  if (Gate_5(D) != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Config.Enable = 0;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Config.Enable = 1;

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Config => &Config
  # DEBUG INLINE_ENTRY Clock_Ip_ClockSetSimGate
  # DEBUG BEGIN_STMT
  Clock_Ip_ClockSetSimGate_TrustedCall (&Config);
  # DEBUG Config => NULL
  Config ={v} {CLOBBER};
  return;

}



;; Function Clock_Ip_ClockSetSimTraceEnable_TrustedCall (Clock_Ip_ClockSetSimTraceEnable_TrustedCall, funcdef_no=19, decl_uid=6066, cgraph_uid=20, symbol_order=19)

Modification phase of node Clock_Ip_ClockSetSimTraceEnable_TrustedCall/19
Clock_Ip_ClockSetSimTraceEnable_TrustedCall (const struct Clock_Ip_GateConfigType * Config)
{
  uint32 RegValue;
  short unsigned int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  RegValue_4 ={v} MEM[(struct SIM_Type *)1074036736B].CLKDIV4;
  # DEBUG RegValue => RegValue_4
  # DEBUG BEGIN_STMT
  _1 = Config_5(D)->Enable;
  if (_1 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  RegValue_7 = RegValue_4 | 268435456;
  # DEBUG RegValue => RegValue_7
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  RegValue_6 = RegValue_4 & 4026531839;
  # DEBUG RegValue => RegValue_6

  <bb 5> [local count: 1073741824]:
  # RegValue_2 = PHI <RegValue_7(3), RegValue_6(4)>
  # DEBUG RegValue => RegValue_2
  # DEBUG BEGIN_STMT
  MEM[(struct SIM_Type *)1074036736B].CLKDIV4 ={v} RegValue_2;
  return;

}



;; Function Clock_Ip_ClockSetSimTraceEnable (Clock_Ip_ClockSetSimTraceEnable, funcdef_no=12, decl_uid=6098, cgraph_uid=13, symbol_order=12)

Modification phase of node Clock_Ip_ClockSetSimTraceEnable/12
Clock_Ip_ClockSetSimTraceEnable (const struct Clock_Ip_GateConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Clock_Ip_ClockSetSimTraceEnable_TrustedCall (Config_2(D));
  return;

}



;; Function Clock_Ip_ClockUpdateSimTraceEnable (Clock_Ip_ClockUpdateSimTraceEnable, funcdef_no=13, decl_uid=6101, cgraph_uid=14, symbol_order=13)

Modification phase of node Clock_Ip_ClockUpdateSimTraceEnable/13
Clock_Ip_ClockUpdateSimTraceEnable (Clock_Ip_NameType ClockName, boolean Gate)
{
  struct Clock_Ip_GateConfigType Config;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Config.Name = ClockName_3(D);
  # DEBUG BEGIN_STMT
  if (Gate_5(D) != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Config.Enable = 0;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Config.Enable = 1;

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Config => &Config
  # DEBUG INLINE_ENTRY Clock_Ip_ClockSetSimTraceEnable
  # DEBUG BEGIN_STMT
  Clock_Ip_ClockSetSimTraceEnable_TrustedCall (&Config);
  # DEBUG Config => NULL
  Config ={v} {CLOBBER};
  return;

}


