
IPA constant propagation start:
Determining dynamic type for call: SetSimTraceDivMul_TrustedCall (config_2(D));
  Starting walk at: SetSimTraceDivMul_TrustedCall (config_2(D));
  instance pointer: config_2(D)  Outer instance pointer: config_2(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: SetPccPcdDivFrac_TrustedCall (config_2(D));
  Starting walk at: SetPccPcdDivFrac_TrustedCall (config_2(D));
  instance pointer: config_2(D)  Outer instance pointer: config_2(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: SetScgAsyncDiv2_TrustedCall (config_2(D));
  Starting walk at: SetScgAsyncDiv2_TrustedCall (config_2(D));
  instance pointer: config_2(D)  Outer instance pointer: config_2(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: SetScgAsyncDiv1_TrustedCall (config_2(D));
  Starting walk at: SetScgAsyncDiv1_TrustedCall (config_2(D));
  instance pointer: config_2(D)  Outer instance pointer: config_2(D) offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  SetSimClkoutDiv_TrustedCall.isra.0/42:
  Jump functions of caller  SetScgHsrunDivslow_TrustedCall.isra.0/41:
  Jump functions of caller  SetScgHsrunDivbus_TrustedCall.isra.0/40:
  Jump functions of caller  SetScgHsrunDivcore_TrustedCall.isra.0/39:
  Jump functions of caller  SetScgVlprDivslow_TrustedCall.isra.0/38:
  Jump functions of caller  SetScgVlprDivbus_TrustedCall.isra.0/37:
  Jump functions of caller  SetScgVlprDivcore_TrustedCall.isra.0/36:
  Jump functions of caller  SetScgRunDivslow_TrustedCall.isra.0/35:
  Jump functions of caller  SetScgRunDivbus_TrustedCall.isra.0/34:
  Jump functions of caller  SetScgRunDivcore_TrustedCall.isra.0/33:
  Jump functions of caller  SetSimTraceDivMul/29:
    callsite  SetSimTraceDivMul/29 -> SetSimTraceDivMul_TrustedCall/28 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  SetSimTraceDivMul_TrustedCall/28:
  Jump functions of caller  SetPccPcdDivFrac/27:
    callsite  SetPccPcdDivFrac/27 -> SetPccPcdDivFrac_TrustedCall/26 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  SetPccPcdDivFrac_TrustedCall/26:
  Jump functions of caller  SetSimClkoutDiv/25:
    callsite  SetSimClkoutDiv/25 -> SetSimClkoutDiv_TrustedCall.isra.0/42 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  SetScgHsrunDivslow/23:
    callsite  SetScgHsrunDivslow/23 -> SetScgHsrunDivslow_TrustedCall.isra.0/41 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  SetScgHsrunDivbus/21:
    callsite  SetScgHsrunDivbus/21 -> SetScgHsrunDivbus_TrustedCall.isra.0/40 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  SetScgHsrunDivcore/19:
    callsite  SetScgHsrunDivcore/19 -> SetScgHsrunDivcore_TrustedCall.isra.0/39 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  SetScgVlprDivslow/17:
    callsite  SetScgVlprDivslow/17 -> SetScgVlprDivslow_TrustedCall.isra.0/38 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  SetScgVlprDivbus/15:
    callsite  SetScgVlprDivbus/15 -> SetScgVlprDivbus_TrustedCall.isra.0/37 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  SetScgVlprDivcore/13:
    callsite  SetScgVlprDivcore/13 -> SetScgVlprDivcore_TrustedCall.isra.0/36 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  SetScgRunDivslow/11:
    callsite  SetScgRunDivslow/11 -> SetScgRunDivslow_TrustedCall.isra.0/35 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  SetScgRunDivbus/9:
    callsite  SetScgRunDivbus/9 -> SetScgRunDivbus_TrustedCall.isra.0/34 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  SetScgRunDivcore/7:
    callsite  SetScgRunDivcore/7 -> SetScgRunDivcore_TrustedCall.isra.0/33 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  SetScgAsyncDiv2/5:
    callsite  SetScgAsyncDiv2/5 -> SetScgAsyncDiv2_TrustedCall/4 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  SetScgAsyncDiv2_TrustedCall/4:
  Jump functions of caller  SetScgAsyncDiv1/3:
    callsite  SetScgAsyncDiv1/3 -> SetScgAsyncDiv1_TrustedCall/2 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  SetScgAsyncDiv1_TrustedCall/2:
  Jump functions of caller  Callback_DividerEmpty/1:

 Propagating constants:

Not considering SetSimTraceDivMul for cloning; -fipa-cp-clone disabled.
Not considering SetPccPcdDivFrac for cloning; -fipa-cp-clone disabled.
Not considering SetSimClkoutDiv for cloning; -fipa-cp-clone disabled.
Not considering SetScgHsrunDivslow for cloning; -fipa-cp-clone disabled.
Not considering SetScgHsrunDivbus for cloning; -fipa-cp-clone disabled.
Not considering SetScgHsrunDivcore for cloning; -fipa-cp-clone disabled.
Not considering SetScgVlprDivslow for cloning; -fipa-cp-clone disabled.
Not considering SetScgVlprDivbus for cloning; -fipa-cp-clone disabled.
Not considering SetScgVlprDivcore for cloning; -fipa-cp-clone disabled.
Not considering SetScgRunDivslow for cloning; -fipa-cp-clone disabled.
Not considering SetScgRunDivbus for cloning; -fipa-cp-clone disabled.
Not considering SetScgRunDivcore for cloning; -fipa-cp-clone disabled.
Not considering SetScgAsyncDiv2 for cloning; -fipa-cp-clone disabled.
Not considering SetScgAsyncDiv1 for cloning; -fipa-cp-clone disabled.
Not considering Callback_DividerEmpty for cloning; -fipa-cp-clone disabled.

overall_size: 247, max_new_size: 11001
 - context independent values, size: 3, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: SetSimClkoutDiv_TrustedCall.isra.0/42:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: SetScgHsrunDivslow_TrustedCall.isra.0/41:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: SetScgHsrunDivbus_TrustedCall.isra.0/40:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: SetScgHsrunDivcore_TrustedCall.isra.0/39:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: SetScgVlprDivslow_TrustedCall.isra.0/38:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: SetScgVlprDivbus_TrustedCall.isra.0/37:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: SetScgVlprDivcore_TrustedCall.isra.0/36:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: SetScgRunDivslow_TrustedCall.isra.0/35:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: SetScgRunDivbus_TrustedCall.isra.0/34:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: SetScgRunDivcore_TrustedCall.isra.0/33:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: SetSimTraceDivMul/29:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SetSimTraceDivMul_TrustedCall/28:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: SetPccPcdDivFrac/27:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SetPccPcdDivFrac_TrustedCall/26:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: SetSimClkoutDiv/25:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SetScgHsrunDivslow/23:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SetScgHsrunDivbus/21:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SetScgHsrunDivcore/19:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SetScgVlprDivslow/17:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SetScgVlprDivbus/15:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SetScgVlprDivcore/13:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SetScgRunDivslow/11:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SetScgRunDivbus/9:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SetScgRunDivcore/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SetScgAsyncDiv2/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SetScgAsyncDiv2_TrustedCall/4:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: SetScgAsyncDiv1/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SetScgAsyncDiv1_TrustedCall/2:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Callback_DividerEmpty/1:
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

SetSimClkoutDiv_TrustedCall.isra.0/42 (SetSimClkoutDiv_TrustedCall.isra.0) @06b747e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: SetSimClkoutDiv/25 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SetScgHsrunDivslow_TrustedCall.isra.0/41 (SetScgHsrunDivslow_TrustedCall.isra.0) @06b740e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: SetScgHsrunDivslow/23 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SetScgHsrunDivbus_TrustedCall.isra.0/40 (SetScgHsrunDivbus_TrustedCall.isra.0) @06b6cd20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: SetScgHsrunDivbus/21 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SetScgHsrunDivcore_TrustedCall.isra.0/39 (SetScgHsrunDivcore_TrustedCall.isra.0) @06b6c700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: SetScgHsrunDivcore/19 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SetScgVlprDivslow_TrustedCall.isra.0/38 (SetScgVlprDivslow_TrustedCall.isra.0) @06b6c0e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: SetScgVlprDivslow/17 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SetScgVlprDivbus_TrustedCall.isra.0/37 (SetScgVlprDivbus_TrustedCall.isra.0) @06acdd20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: SetScgVlprDivbus/15 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SetScgVlprDivcore_TrustedCall.isra.0/36 (SetScgVlprDivcore_TrustedCall.isra.0) @06acd700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: SetScgVlprDivcore/13 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SetScgRunDivslow_TrustedCall.isra.0/35 (SetScgRunDivslow_TrustedCall.isra.0) @06acd0e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: SetScgRunDivslow/11 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SetScgRunDivbus_TrustedCall.isra.0/34 (SetScgRunDivbus_TrustedCall.isra.0) @06a92e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: SetScgRunDivbus/9 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SetScgRunDivcore_TrustedCall.isra.0/33 (SetScgRunDivcore_TrustedCall.isra.0) @06a927e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: SetScgRunDivcore/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
scgPeriphAsyncDivs/32 (scgPeriphAsyncDivs) @06a84438
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: SetScgAsyncDiv1_TrustedCall/2 (read)SetScgAsyncDiv2_TrustedCall/4 (read)
  Availability: not_available
  Varpool flags: read-only
dividerValue_hardwareValue/31 (dividerValue_hardwareValue) @06a843f0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: SetScgAsyncDiv1_TrustedCall/2 (read)SetScgAsyncDiv2_TrustedCall/4 (read)
  Availability: not_available
  Varpool flags: read-only
clockFeatures/30 (clockFeatures) @05e6d7e0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: SetScgAsyncDiv2_TrustedCall/4 (read)SetScgAsyncDiv1_TrustedCall/2 (read)SetPccPcdDivFrac_TrustedCall/26 (read)
  Availability: not_available
  Varpool flags: read-only
SetSimTraceDivMul/29 (SetSimTraceDivMul) @05e70380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: dividerCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SetSimTraceDivMul_TrustedCall/28 (1073741824 (estimated locally),1.00 per call) 
SetSimTraceDivMul_TrustedCall/28 (SetSimTraceDivMul_TrustedCall) @05e700e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: SetSimTraceDivMul/29 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SetPccPcdDivFrac/27 (SetPccPcdDivFrac) @05e698c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: dividerCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SetPccPcdDivFrac_TrustedCall/26 (1073741824 (estimated locally),1.00 per call) 
SetPccPcdDivFrac_TrustedCall/26 (SetPccPcdDivFrac_TrustedCall) @05e69e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: clockFeatures/30 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: SetPccPcdDivFrac/27 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SetSimClkoutDiv/25 (SetSimClkoutDiv) @05e69a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: dividerCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SetSimClkoutDiv_TrustedCall.isra.0/42 (1073741824 (estimated locally),1.00 per call) 
SetScgHsrunDivslow/23 (SetScgHsrunDivslow) @05e69460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: dividerCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SetScgHsrunDivslow_TrustedCall.isra.0/41 (1073741824 (estimated locally),1.00 per call) 
SetScgHsrunDivbus/21 (SetScgHsrunDivbus) @05e67b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: dividerCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SetScgHsrunDivbus_TrustedCall.isra.0/40 (1073741824 (estimated locally),1.00 per call) 
SetScgHsrunDivcore/19 (SetScgHsrunDivcore) @05e67d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: dividerCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SetScgHsrunDivcore_TrustedCall.isra.0/39 (1073741824 (estimated locally),1.00 per call) 
SetScgVlprDivslow/17 (SetScgVlprDivslow) @05e677e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: dividerCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SetScgVlprDivslow_TrustedCall.isra.0/38 (1073741824 (estimated locally),1.00 per call) 
SetScgVlprDivbus/15 (SetScgVlprDivbus) @05e672a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: dividerCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SetScgVlprDivbus_TrustedCall.isra.0/37 (1073741824 (estimated locally),1.00 per call) 
SetScgVlprDivcore/13 (SetScgVlprDivcore) @05e62380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: dividerCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SetScgVlprDivcore_TrustedCall.isra.0/36 (1073741824 (estimated locally),1.00 per call) 
SetScgRunDivslow/11 (SetScgRunDivslow) @05e62a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: dividerCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SetScgRunDivslow_TrustedCall.isra.0/35 (1073741824 (estimated locally),1.00 per call) 
SetScgRunDivbus/9 (SetScgRunDivbus) @05e62540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: dividerCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SetScgRunDivbus_TrustedCall.isra.0/34 (1073741824 (estimated locally),1.00 per call) 
SetScgRunDivcore/7 (SetScgRunDivcore) @05e62000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: dividerCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SetScgRunDivcore_TrustedCall.isra.0/33 (1073741824 (estimated locally),1.00 per call) 
SetScgAsyncDiv2/5 (SetScgAsyncDiv2) @05d60e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: dividerCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SetScgAsyncDiv2_TrustedCall/4 (1073741824 (estimated locally),1.00 per call) 
SetScgAsyncDiv2_TrustedCall/4 (SetScgAsyncDiv2_TrustedCall) @05d60b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: clockFeatures/30 (read)dividerValue_hardwareValue/31 (read)scgPeriphAsyncDivs/32 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: SetScgAsyncDiv2/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SetScgAsyncDiv1/3 (SetScgAsyncDiv1) @05d608c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: dividerCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SetScgAsyncDiv1_TrustedCall/2 (1073741824 (estimated locally),1.00 per call) 
SetScgAsyncDiv1_TrustedCall/2 (SetScgAsyncDiv1_TrustedCall) @05d60620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: clockFeatures/30 (read)dividerValue_hardwareValue/31 (read)scgPeriphAsyncDivs/32 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: SetScgAsyncDiv1/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Callback_DividerEmpty/1 (Callback_DividerEmpty) @05d60380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: dividerCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
dividerCallbacks/0 (dividerCallbacks) @05d5d900
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Callback_DividerEmpty/1 (addr)SetScgAsyncDiv1/3 (addr)SetScgAsyncDiv2/5 (addr)SetScgRunDivcore/7 (addr)SetScgRunDivbus/9 (addr)SetScgRunDivslow/11 (addr)SetScgVlprDivcore/13 (addr)SetScgVlprDivbus/15 (addr)SetScgVlprDivslow/17 (addr)SetScgHsrunDivcore/19 (addr)SetScgHsrunDivbus/21 (addr)SetScgHsrunDivslow/23 (addr)SetSimClkoutDiv/25 (addr)SetPccPcdDivFrac/27 (addr)SetSimTraceDivMul/29 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known

;; Function Callback_DividerEmpty (Callback_DividerEmpty, funcdef_no=0, decl_uid=6045, cgraph_uid=1, symbol_order=1)

Modification phase of node Callback_DividerEmpty/1
Callback_DividerEmpty (const struct Clock_Ip_DividerConfigType * config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function SetScgAsyncDiv1 (SetScgAsyncDiv1, funcdef_no=2, decl_uid=6047, cgraph_uid=3, symbol_order=3)

Modification phase of node SetScgAsyncDiv1/3
SetScgAsyncDiv1 (const struct Clock_Ip_DividerConfigType * config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SetScgAsyncDiv1_TrustedCall (config_2(D));
  return;

}



;; Function SetScgAsyncDiv2 (SetScgAsyncDiv2, funcdef_no=4, decl_uid=6049, cgraph_uid=5, symbol_order=5)

Modification phase of node SetScgAsyncDiv2/5
SetScgAsyncDiv2 (const struct Clock_Ip_DividerConfigType * config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SetScgAsyncDiv2_TrustedCall (config_2(D));
  return;

}



;; Function SetPccPcdDivFrac (SetPccPcdDivFrac, funcdef_no=26, decl_uid=6071, cgraph_uid=27, symbol_order=27)

Modification phase of node SetPccPcdDivFrac/27
SetPccPcdDivFrac (const struct Clock_Ip_DividerConfigType * config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SetPccPcdDivFrac_TrustedCall (config_2(D));
  return;

}



;; Function SetSimTraceDivMul (SetSimTraceDivMul, funcdef_no=28, decl_uid=6073, cgraph_uid=29, symbol_order=29)

Modification phase of node SetSimTraceDivMul/29
SetSimTraceDivMul (const struct Clock_Ip_DividerConfigType * config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SetSimTraceDivMul_TrustedCall (config_2(D));
  return;

}



;; Function SetScgRunDivcore (SetScgRunDivcore, funcdef_no=6, decl_uid=6051, cgraph_uid=7, symbol_order=7)

Modification phase of node SetScgRunDivcore/7
SetScgRunDivcore (const struct Clock_Ip_DividerConfigType * config)
{
  long unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(long unsigned int *)config_2(D) + 4B];
  # DEBUG D#1 => config_2(D)
  SetScgRunDivcore_TrustedCall.isra.0 (_4);
  return;

}



;; Function SetScgRunDivbus (SetScgRunDivbus, funcdef_no=8, decl_uid=6053, cgraph_uid=9, symbol_order=9)

Modification phase of node SetScgRunDivbus/9
SetScgRunDivbus (const struct Clock_Ip_DividerConfigType * config)
{
  long unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(long unsigned int *)config_2(D) + 4B];
  # DEBUG D#2 => config_2(D)
  SetScgRunDivbus_TrustedCall.isra.0 (_4);
  return;

}



;; Function SetScgRunDivslow (SetScgRunDivslow, funcdef_no=10, decl_uid=6055, cgraph_uid=11, symbol_order=11)

Modification phase of node SetScgRunDivslow/11
SetScgRunDivslow (const struct Clock_Ip_DividerConfigType * config)
{
  long unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(long unsigned int *)config_2(D) + 4B];
  # DEBUG D#3 => config_2(D)
  SetScgRunDivslow_TrustedCall.isra.0 (_4);
  return;

}



;; Function SetScgVlprDivcore (SetScgVlprDivcore, funcdef_no=12, decl_uid=6057, cgraph_uid=13, symbol_order=13)

Modification phase of node SetScgVlprDivcore/13
SetScgVlprDivcore (const struct Clock_Ip_DividerConfigType * config)
{
  long unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(long unsigned int *)config_2(D) + 4B];
  # DEBUG D#4 => config_2(D)
  SetScgVlprDivcore_TrustedCall.isra.0 (_4);
  return;

}



;; Function SetScgVlprDivbus (SetScgVlprDivbus, funcdef_no=14, decl_uid=6059, cgraph_uid=15, symbol_order=15)

Modification phase of node SetScgVlprDivbus/15
SetScgVlprDivbus (const struct Clock_Ip_DividerConfigType * config)
{
  long unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(long unsigned int *)config_2(D) + 4B];
  # DEBUG D#5 => config_2(D)
  SetScgVlprDivbus_TrustedCall.isra.0 (_4);
  return;

}



;; Function SetScgVlprDivslow (SetScgVlprDivslow, funcdef_no=16, decl_uid=6061, cgraph_uid=17, symbol_order=17)

Modification phase of node SetScgVlprDivslow/17
SetScgVlprDivslow (const struct Clock_Ip_DividerConfigType * config)
{
  long unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(long unsigned int *)config_2(D) + 4B];
  # DEBUG D#6 => config_2(D)
  SetScgVlprDivslow_TrustedCall.isra.0 (_4);
  return;

}



;; Function SetScgHsrunDivcore (SetScgHsrunDivcore, funcdef_no=18, decl_uid=6063, cgraph_uid=19, symbol_order=19)

Modification phase of node SetScgHsrunDivcore/19
SetScgHsrunDivcore (const struct Clock_Ip_DividerConfigType * config)
{
  long unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(long unsigned int *)config_2(D) + 4B];
  # DEBUG D#7 => config_2(D)
  SetScgHsrunDivcore_TrustedCall.isra.0 (_4);
  return;

}



;; Function SetScgHsrunDivbus (SetScgHsrunDivbus, funcdef_no=20, decl_uid=6065, cgraph_uid=21, symbol_order=21)

Modification phase of node SetScgHsrunDivbus/21
SetScgHsrunDivbus (const struct Clock_Ip_DividerConfigType * config)
{
  long unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(long unsigned int *)config_2(D) + 4B];
  # DEBUG D#8 => config_2(D)
  SetScgHsrunDivbus_TrustedCall.isra.0 (_4);
  return;

}



;; Function SetScgHsrunDivslow (SetScgHsrunDivslow, funcdef_no=22, decl_uid=6067, cgraph_uid=23, symbol_order=23)

Modification phase of node SetScgHsrunDivslow/23
SetScgHsrunDivslow (const struct Clock_Ip_DividerConfigType * config)
{
  long unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(long unsigned int *)config_2(D) + 4B];
  # DEBUG D#9 => config_2(D)
  SetScgHsrunDivslow_TrustedCall.isra.0 (_4);
  return;

}



;; Function SetSimClkoutDiv (SetSimClkoutDiv, funcdef_no=24, decl_uid=6069, cgraph_uid=25, symbol_order=25)

Modification phase of node SetSimClkoutDiv/25
SetSimClkoutDiv (const struct Clock_Ip_DividerConfigType * config)
{
  long unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(long unsigned int *)config_2(D) + 4B];
  # DEBUG D#10 => config_2(D)
  SetSimClkoutDiv_TrustedCall.isra.0 (_4);
  return;

}


