
IPA constant propagation start:
Determining dynamic type for call: SetPccPcsSelect_TrustedCall (config_2(D));
  Starting walk at: SetPccPcsSelect_TrustedCall (config_2(D));
  instance pointer: config_2(D)  Outer instance pointer: config_2(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: SetSimFtmoptSel_TrustedCall (config_2(D));
  Starting walk at: SetSimFtmoptSel_TrustedCall (config_2(D));
  instance pointer: config_2(D)  Outer instance pointer: config_2(D) offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  SetSimTraceSel_TrustedCall.isra.0/60:
  Jump functions of caller  ResetSimTraceSel_TrustedCall.isra.0/59:
  Jump functions of caller  ResetPccPcsSelect_TrustedCall.isra.0/58:
  Jump functions of caller  SetSimClkoutSel_TrustedCall.isra.0/57:
  Jump functions of caller  ResetSimClkoutSel_TrustedCall.isra.0/56:
  Jump functions of caller  ResetSimFtmoptSel_TrustedCall.isra.0/55:
  Jump functions of caller  SetScgClkoutSel_TrustedCall.isra.0/54:
  Jump functions of caller  ResetScgClkoutSel_TrustedCall.isra.0/53:
  Jump functions of caller  SetSimLpoSel_TrustedCall.isra.0/52:
  Jump functions of caller  ResetSimLpoSel_TrustedCall.isra.0/51:
  Jump functions of caller  SetSimRtcSel_TrustedCall.isra.0/50:
  Jump functions of caller  ResetSimRtcSel_TrustedCall.isra.0/49:
  Jump functions of caller  SetScgHsrunSel_TrustedCall.isra.0/48:
  Jump functions of caller  ResetScgHsrunSel_TrustedCall.isra.0/47:
  Jump functions of caller  SetScgVlprSel_TrustedCall.isra.0/46:
  Jump functions of caller  SetScgRunSel_TrustedCall.isra.0/45:
  Jump functions of caller  ResetScgRunSel_TrustedCall.isra.0/44:
  Jump functions of caller  SetSimTraceSel/39:
    callsite  SetSimTraceSel/39 -> SetSimTraceSel_TrustedCall.isra.0/60 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  ResetSimTraceSel/37:
    callsite  ResetSimTraceSel/37 -> ResetSimTraceSel_TrustedCall.isra.0/59 : 
  Jump functions of caller  SetPccPcsSelect/35:
    callsite  SetPccPcsSelect/35 -> SetPccPcsSelect_TrustedCall/34 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  SetPccPcsSelect_TrustedCall/34:
  Jump functions of caller  ResetPccPcsSelect/33:
    callsite  ResetPccPcsSelect/33 -> ResetPccPcsSelect_TrustedCall.isra.0/58 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  SetSimClkoutSel/31:
    callsite  SetSimClkoutSel/31 -> SetSimClkoutSel_TrustedCall.isra.0/57 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  ResetSimClkoutSel/29:
    callsite  ResetSimClkoutSel/29 -> ResetSimClkoutSel_TrustedCall.isra.0/56 : 
  Jump functions of caller  SetSimFtmoptSel/27:
    callsite  SetSimFtmoptSel/27 -> SetSimFtmoptSel_TrustedCall/26 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  SetSimFtmoptSel_TrustedCall/26:
  Jump functions of caller  ResetSimFtmoptSel/25:
    callsite  ResetSimFtmoptSel/25 -> ResetSimFtmoptSel_TrustedCall.isra.0/55 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  SetScgClkoutSel/23:
    callsite  SetScgClkoutSel/23 -> SetScgClkoutSel_TrustedCall.isra.0/54 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  ResetScgClkoutSel/21:
    callsite  ResetScgClkoutSel/21 -> ResetScgClkoutSel_TrustedCall.isra.0/53 : 
  Jump functions of caller  SetSimLpoSel/19:
    callsite  SetSimLpoSel/19 -> SetSimLpoSel_TrustedCall.isra.0/52 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  ResetSimLpoSel/17:
    callsite  ResetSimLpoSel/17 -> ResetSimLpoSel_TrustedCall.isra.0/51 : 
  Jump functions of caller  SetSimRtcSel/15:
    callsite  SetSimRtcSel/15 -> SetSimRtcSel_TrustedCall.isra.0/50 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  ResetSimRtcSel/13:
    callsite  ResetSimRtcSel/13 -> ResetSimRtcSel_TrustedCall.isra.0/49 : 
  Jump functions of caller  SetScgHsrunSel/11:
    callsite  SetScgHsrunSel/11 -> SetScgHsrunSel_TrustedCall.isra.0/48 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  ResetScgHsrunSel/9:
    callsite  ResetScgHsrunSel/9 -> ResetScgHsrunSel_TrustedCall.isra.0/47 : 
  Jump functions of caller  SetScgVlprSel/7:
    callsite  SetScgVlprSel/7 -> SetScgVlprSel_TrustedCall.isra.0/46 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  SetScgRunSel/5:
    callsite  SetScgRunSel/5 -> SetScgRunSel_TrustedCall.isra.0/45 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  ResetScgRunSel/3:
    callsite  ResetScgRunSel/3 -> ResetScgRunSel_TrustedCall.isra.0/44 : 
  Jump functions of caller  Callback_SelectorEmpty/1:

 Propagating constants:

Not considering SetSimTraceSel for cloning; -fipa-cp-clone disabled.
Not considering ResetSimTraceSel for cloning; -fipa-cp-clone disabled.
Not considering SetPccPcsSelect for cloning; -fipa-cp-clone disabled.
Not considering ResetPccPcsSelect for cloning; -fipa-cp-clone disabled.
Not considering SetSimClkoutSel for cloning; -fipa-cp-clone disabled.
Not considering ResetSimClkoutSel for cloning; -fipa-cp-clone disabled.
Not considering SetSimFtmoptSel for cloning; -fipa-cp-clone disabled.
Not considering ResetSimFtmoptSel for cloning; -fipa-cp-clone disabled.
Not considering SetScgClkoutSel for cloning; -fipa-cp-clone disabled.
Not considering ResetScgClkoutSel for cloning; -fipa-cp-clone disabled.
Not considering SetSimLpoSel for cloning; -fipa-cp-clone disabled.
Not considering ResetSimLpoSel for cloning; -fipa-cp-clone disabled.
Not considering SetSimRtcSel for cloning; -fipa-cp-clone disabled.
Not considering ResetSimRtcSel for cloning; -fipa-cp-clone disabled.
Not considering SetScgHsrunSel for cloning; -fipa-cp-clone disabled.
Not considering ResetScgHsrunSel for cloning; -fipa-cp-clone disabled.
Not considering SetScgVlprSel for cloning; -fipa-cp-clone disabled.
Not considering SetScgRunSel for cloning; -fipa-cp-clone disabled.
Not considering ResetScgRunSel for cloning; -fipa-cp-clone disabled.
Not considering Callback_SelectorEmpty for cloning; -fipa-cp-clone disabled.

overall_size: 310, max_new_size: 11001
 - context independent values, size: 4, time_benefit: 1.000000
 - context independent values, size: 4, time_benefit: 1.000000
 - context independent values, size: 4, time_benefit: 1.000000
 - context independent values, size: 4, time_benefit: 1.000000
 - context independent values, size: 4, time_benefit: 1.000000
 - context independent values, size: 4, time_benefit: 1.000000
 - context independent values, size: 4, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: SetSimTraceSel_TrustedCall.isra.0/60:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: ResetSimTraceSel_TrustedCall.isra.0/59:
  Node: ResetPccPcsSelect_TrustedCall.isra.0/58:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: SetSimClkoutSel_TrustedCall.isra.0/57:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: ResetSimClkoutSel_TrustedCall.isra.0/56:
  Node: ResetSimFtmoptSel_TrustedCall.isra.0/55:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: SetScgClkoutSel_TrustedCall.isra.0/54:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: ResetScgClkoutSel_TrustedCall.isra.0/53:
  Node: SetSimLpoSel_TrustedCall.isra.0/52:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: ResetSimLpoSel_TrustedCall.isra.0/51:
  Node: SetSimRtcSel_TrustedCall.isra.0/50:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: ResetSimRtcSel_TrustedCall.isra.0/49:
  Node: SetScgHsrunSel_TrustedCall.isra.0/48:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: ResetScgHsrunSel_TrustedCall.isra.0/47:
  Node: SetScgVlprSel_TrustedCall.isra.0/46:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: SetScgRunSel_TrustedCall.isra.0/45:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: ResetScgRunSel_TrustedCall.isra.0/44:
  Node: SetSimTraceSel/39:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ResetSimTraceSel/37:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SetPccPcsSelect/35:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SetPccPcsSelect_TrustedCall/34:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: ResetPccPcsSelect/33:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SetSimClkoutSel/31:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ResetSimClkoutSel/29:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SetSimFtmoptSel/27:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SetSimFtmoptSel_TrustedCall/26:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: ResetSimFtmoptSel/25:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SetScgClkoutSel/23:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ResetScgClkoutSel/21:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SetSimLpoSel/19:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ResetSimLpoSel/17:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SetSimRtcSel/15:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ResetSimRtcSel/13:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SetScgHsrunSel/11:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ResetScgHsrunSel/9:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SetScgVlprSel/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SetScgRunSel/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ResetScgRunSel/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Callback_SelectorEmpty/1:
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

SetSimTraceSel_TrustedCall.isra.0/60 (SetSimTraceSel_TrustedCall.isra.0) @076cd620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: selectorEntryPCS_hardwareValue/40 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: SetSimTraceSel/39 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ResetSimTraceSel_TrustedCall.isra.0/59 (ResetSimTraceSel_TrustedCall.isra.0) @076cdc40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: selectorEntryPCS_hardwareValue/40 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: ResetSimTraceSel/37 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ResetPccPcsSelect_TrustedCall.isra.0/58 (ResetPccPcsSelect_TrustedCall.isra.0) @076cd2a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: clockFeatures/41 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: ResetPccPcsSelect/33 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SetSimClkoutSel_TrustedCall.isra.0/57 (SetSimClkoutSel_TrustedCall.isra.0) @076bf8c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: selectorEntry_hardwareValue/42 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: SetSimClkoutSel/31 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ResetSimClkoutSel_TrustedCall.isra.0/56 (ResetSimClkoutSel_TrustedCall.isra.0) @076bfd20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: ResetSimClkoutSel/29 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ResetSimFtmoptSel_TrustedCall.isra.0/55 (ResetSimFtmoptSel_TrustedCall.isra.0) @076bf380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: selectorEntry_hardwareValue/42 (read)clockFeatures/41 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: ResetSimFtmoptSel/25 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SetScgClkoutSel_TrustedCall.isra.0/54 (SetScgClkoutSel_TrustedCall.isra.0) @076b5e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: selectorEntrySCS_hardwareValue/43 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: SetScgClkoutSel/23 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ResetScgClkoutSel_TrustedCall.isra.0/53 (ResetScgClkoutSel_TrustedCall.isra.0) @076b58c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: selectorEntrySCS_hardwareValue/43 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: ResetScgClkoutSel/21 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SetSimLpoSel_TrustedCall.isra.0/52 (SetSimLpoSel_TrustedCall.isra.0) @076b5380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: selectorEntryPCS_hardwareValue/40 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: SetSimLpoSel/19 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ResetSimLpoSel_TrustedCall.isra.0/51 (ResetSimLpoSel_TrustedCall.isra.0) @076a8c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: selectorEntryPCS_hardwareValue/40 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: ResetSimLpoSel/17 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SetSimRtcSel_TrustedCall.isra.0/50 (SetSimRtcSel_TrustedCall.isra.0) @076a8b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: selectorEntry_hardwareValue/42 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: SetSimRtcSel/15 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ResetSimRtcSel_TrustedCall.isra.0/49 (ResetSimRtcSel_TrustedCall.isra.0) @076a8700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: selectorEntry_hardwareValue/42 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: ResetSimRtcSel/13 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SetScgHsrunSel_TrustedCall.isra.0/48 (SetScgHsrunSel_TrustedCall.isra.0) @076a81c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: selectorEntrySCS_hardwareValue/43 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: SetScgHsrunSel/11 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ResetScgHsrunSel_TrustedCall.isra.0/47 (ResetScgHsrunSel_TrustedCall.isra.0) @0760cee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: selectorEntrySCS_hardwareValue/43 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: ResetScgHsrunSel/9 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SetScgVlprSel_TrustedCall.isra.0/46 (SetScgVlprSel_TrustedCall.isra.0) @0760c9a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: selectorEntrySCS_hardwareValue/43 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: SetScgVlprSel/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SetScgRunSel_TrustedCall.isra.0/45 (SetScgRunSel_TrustedCall.isra.0) @0760c380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: selectorEntrySCS_hardwareValue/43 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: SetScgRunSel/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ResetScgRunSel_TrustedCall.isra.0/44 (ResetScgRunSel_TrustedCall.isra.0) @075d8d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: selectorEntrySCS_hardwareValue/43 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: ResetScgRunSel/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
selectorEntrySCS_hardwareValue/43 (selectorEntrySCS_hardwareValue) @075b3c18
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: SetScgHsrunSel_TrustedCall.isra.0/48 (read)ResetScgHsrunSel_TrustedCall.isra.0/47 (read)SetScgVlprSel_TrustedCall.isra.0/46 (read)SetScgRunSel_TrustedCall.isra.0/45 (read)ResetScgRunSel_TrustedCall.isra.0/44 (read)ResetScgClkoutSel_TrustedCall.isra.0/53 (read)SetScgClkoutSel_TrustedCall.isra.0/54 (read)
  Availability: not_available
  Varpool flags: read-only
selectorEntry_hardwareValue/42 (selectorEntry_hardwareValue) @075b3240
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: ResetSimFtmoptSel_TrustedCall.isra.0/55 (read)SetSimRtcSel_TrustedCall.isra.0/50 (read)ResetSimRtcSel_TrustedCall.isra.0/49 (read)SetSimFtmoptSel_TrustedCall/26 (read)SetSimClkoutSel_TrustedCall.isra.0/57 (read)
  Availability: not_available
  Varpool flags: read-only
clockFeatures/41 (clockFeatures) @069b7dc8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: SetSimFtmoptSel_TrustedCall/26 (read)ResetSimFtmoptSel_TrustedCall.isra.0/55 (read)ResetPccPcsSelect_TrustedCall.isra.0/58 (read)SetPccPcsSelect_TrustedCall/34 (read)
  Availability: not_available
  Varpool flags: read-only
selectorEntryPCS_hardwareValue/40 (selectorEntryPCS_hardwareValue) @069b7990
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: SetPccPcsSelect_TrustedCall/34 (read)SetSimLpoSel_TrustedCall.isra.0/52 (read)ResetSimLpoSel_TrustedCall.isra.0/51 (read)ResetSimTraceSel_TrustedCall.isra.0/59 (read)SetSimTraceSel_TrustedCall.isra.0/60 (read)
  Availability: not_available
  Varpool flags: read-only
SetSimTraceSel/39 (SetSimTraceSel) @069bb8c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: selectorCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SetSimTraceSel_TrustedCall.isra.0/60 (1073741824 (estimated locally),1.00 per call) 
ResetSimTraceSel/37 (ResetSimTraceSel) @069bba80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: selectorCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ResetSimTraceSel_TrustedCall.isra.0/59 (1073741824 (estimated locally),1.00 per call) 
SetPccPcsSelect/35 (SetPccPcsSelect) @069bb460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: selectorCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SetPccPcsSelect_TrustedCall/34 (1073741824 (estimated locally),1.00 per call) 
SetPccPcsSelect_TrustedCall/34 (SetPccPcsSelect_TrustedCall) @069bb1c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: clockFeatures/41 (read)selectorEntryPCS_hardwareValue/40 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: SetPccPcsSelect/35 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ResetPccPcsSelect/33 (ResetPccPcsSelect) @069b8540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: selectorCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ResetPccPcsSelect_TrustedCall.isra.0/58 (1073741824 (estimated locally),1.00 per call) 
SetSimClkoutSel/31 (SetSimClkoutSel) @069b8c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: selectorCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SetSimClkoutSel_TrustedCall.isra.0/57 (1073741824 (estimated locally),1.00 per call) 
ResetSimClkoutSel/29 (ResetSimClkoutSel) @069b8700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: selectorCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ResetSimClkoutSel_TrustedCall.isra.0/56 (1073741824 (estimated locally),1.00 per call) 
SetSimFtmoptSel/27 (SetSimFtmoptSel) @069b81c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: selectorCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SetSimFtmoptSel_TrustedCall/26 (1073741824 (estimated locally),1.00 per call) 
SetSimFtmoptSel_TrustedCall/26 (SetSimFtmoptSel_TrustedCall) @069afa80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: selectorEntry_hardwareValue/42 (read)clockFeatures/41 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: SetSimFtmoptSel/27 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ResetSimFtmoptSel/25 (ResetSimFtmoptSel) @069afc40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: selectorCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ResetSimFtmoptSel_TrustedCall.isra.0/55 (1073741824 (estimated locally),1.00 per call) 
SetScgClkoutSel/23 (SetScgClkoutSel) @069af2a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: selectorCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SetScgClkoutSel_TrustedCall.isra.0/54 (1073741824 (estimated locally),1.00 per call) 
ResetScgClkoutSel/21 (ResetScgClkoutSel) @069ab380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: selectorCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ResetScgClkoutSel_TrustedCall.isra.0/53 (1073741824 (estimated locally),1.00 per call) 
SetSimLpoSel/19 (SetSimLpoSel) @069aba80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: selectorCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SetSimLpoSel_TrustedCall.isra.0/52 (1073741824 (estimated locally),1.00 per call) 
ResetSimLpoSel/17 (ResetSimLpoSel) @069ab540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: selectorCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ResetSimLpoSel_TrustedCall.isra.0/51 (1073741824 (estimated locally),1.00 per call) 
SetSimRtcSel/15 (SetSimRtcSel) @069ab000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: selectorCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SetSimRtcSel_TrustedCall.isra.0/50 (1073741824 (estimated locally),1.00 per call) 
ResetSimRtcSel/13 (ResetSimRtcSel) @069a6e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: selectorCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ResetSimRtcSel_TrustedCall.isra.0/49 (1073741824 (estimated locally),1.00 per call) 
SetScgHsrunSel/11 (SetScgHsrunSel) @069a68c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: selectorCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SetScgHsrunSel_TrustedCall.isra.0/48 (1073741824 (estimated locally),1.00 per call) 
ResetScgHsrunSel/9 (ResetScgHsrunSel) @069a62a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: selectorCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ResetScgHsrunSel_TrustedCall.isra.0/47 (1073741824 (estimated locally),1.00 per call) 
SetScgVlprSel/7 (SetScgVlprSel) @069a4ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: selectorCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SetScgVlprSel_TrustedCall.isra.0/46 (1073741824 (estimated locally),1.00 per call) 
SetScgRunSel/5 (SetScgRunSel) @069a48c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: selectorCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SetScgRunSel_TrustedCall.isra.0/45 (1073741824 (estimated locally),1.00 per call) 
ResetScgRunSel/3 (ResetScgRunSel) @069a42a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: selectorCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ResetScgRunSel_TrustedCall.isra.0/44 (1073741824 (estimated locally),1.00 per call) 
Callback_SelectorEmpty/1 (Callback_SelectorEmpty) @068a4d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: selectorCallbacks/0 (addr)selectorCallbacks/0 (addr)selectorCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
selectorCallbacks/0 (selectorCallbacks) @068a2ab0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Callback_SelectorEmpty/1 (addr)Callback_SelectorEmpty/1 (addr)ResetScgRunSel/3 (addr)SetScgRunSel/5 (addr)Callback_SelectorEmpty/1 (addr)SetScgVlprSel/7 (addr)ResetScgHsrunSel/9 (addr)SetScgHsrunSel/11 (addr)ResetSimRtcSel/13 (addr)SetSimRtcSel/15 (addr)ResetSimLpoSel/17 (addr)SetSimLpoSel/19 (addr)ResetScgClkoutSel/21 (addr)SetScgClkoutSel/23 (addr)ResetSimFtmoptSel/25 (addr)SetSimFtmoptSel/27 (addr)ResetSimClkoutSel/29 (addr)SetSimClkoutSel/31 (addr)ResetPccPcsSelect/33 (addr)SetPccPcsSelect/35 (addr)ResetSimTraceSel/37 (addr)SetSimTraceSel/39 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known

;; Function Callback_SelectorEmpty (Callback_SelectorEmpty, funcdef_no=0, decl_uid=6055, cgraph_uid=1, symbol_order=1)

Modification phase of node Callback_SelectorEmpty/1
Callback_SelectorEmpty (const struct Clock_Ip_SelectorConfigType * config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function SetSimFtmoptSel (SetSimFtmoptSel, funcdef_no=26, decl_uid=6081, cgraph_uid=27, symbol_order=27)

Modification phase of node SetSimFtmoptSel/27
SetSimFtmoptSel (const struct Clock_Ip_SelectorConfigType * config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SetSimFtmoptSel_TrustedCall (config_2(D));
  return;

}



;; Function SetPccPcsSelect (SetPccPcsSelect, funcdef_no=34, decl_uid=6089, cgraph_uid=35, symbol_order=35)

Modification phase of node SetPccPcsSelect/35
SetPccPcsSelect (const struct Clock_Ip_SelectorConfigType * config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SetPccPcsSelect_TrustedCall (config_2(D));
  return;

}



;; Function ResetScgRunSel (ResetScgRunSel, funcdef_no=2, decl_uid=6069, cgraph_uid=3, symbol_order=3)

Modification phase of node ResetScgRunSel/3
ResetScgRunSel (const struct Clock_Ip_SelectorConfigType * config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => config_2(D)
  ResetScgRunSel_TrustedCall.isra.0 ();
  return;

}



;; Function SetScgRunSel (SetScgRunSel, funcdef_no=4, decl_uid=6071, cgraph_uid=5, symbol_order=5)

Modification phase of node SetScgRunSel/5
SetScgRunSel (const struct Clock_Ip_SelectorConfigType * config)
{
  <unnamed type> _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(<unnamed type> *)config_2(D) + 4B];
  # DEBUG D#2 => config_2(D)
  SetScgRunSel_TrustedCall.isra.0 (_4);
  return;

}



;; Function SetScgVlprSel (SetScgVlprSel, funcdef_no=6, decl_uid=6073, cgraph_uid=7, symbol_order=7)

Modification phase of node SetScgVlprSel/7
SetScgVlprSel (const struct Clock_Ip_SelectorConfigType * config)
{
  <unnamed type> _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(<unnamed type> *)config_2(D) + 4B];
  # DEBUG D#3 => config_2(D)
  SetScgVlprSel_TrustedCall.isra.0 (_4);
  return;

}



;; Function ResetScgHsrunSel (ResetScgHsrunSel, funcdef_no=8, decl_uid=6075, cgraph_uid=9, symbol_order=9)

Modification phase of node ResetScgHsrunSel/9
ResetScgHsrunSel (const struct Clock_Ip_SelectorConfigType * config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG D#4 => config_2(D)
  ResetScgHsrunSel_TrustedCall.isra.0 ();
  return;

}



;; Function SetScgHsrunSel (SetScgHsrunSel, funcdef_no=10, decl_uid=6077, cgraph_uid=11, symbol_order=11)

Modification phase of node SetScgHsrunSel/11
SetScgHsrunSel (const struct Clock_Ip_SelectorConfigType * config)
{
  <unnamed type> _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(<unnamed type> *)config_2(D) + 4B];
  # DEBUG D#5 => config_2(D)
  SetScgHsrunSel_TrustedCall.isra.0 (_4);
  return;

}



;; Function ResetSimRtcSel (ResetSimRtcSel, funcdef_no=12, decl_uid=6057, cgraph_uid=13, symbol_order=13)

Modification phase of node ResetSimRtcSel/13
ResetSimRtcSel (const struct Clock_Ip_SelectorConfigType * config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG D#6 => config_2(D)
  ResetSimRtcSel_TrustedCall.isra.0 ();
  return;

}



;; Function SetSimRtcSel (SetSimRtcSel, funcdef_no=14, decl_uid=6059, cgraph_uid=15, symbol_order=15)

Modification phase of node SetSimRtcSel/15
SetSimRtcSel (const struct Clock_Ip_SelectorConfigType * config)
{
  <unnamed type> _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(<unnamed type> *)config_2(D) + 4B];
  # DEBUG D#7 => config_2(D)
  SetSimRtcSel_TrustedCall.isra.0 (_4);
  return;

}



;; Function ResetSimLpoSel (ResetSimLpoSel, funcdef_no=16, decl_uid=6061, cgraph_uid=17, symbol_order=17)

Modification phase of node ResetSimLpoSel/17
ResetSimLpoSel (const struct Clock_Ip_SelectorConfigType * config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG D#8 => config_2(D)
  ResetSimLpoSel_TrustedCall.isra.0 ();
  return;

}



;; Function SetSimLpoSel (SetSimLpoSel, funcdef_no=18, decl_uid=6063, cgraph_uid=19, symbol_order=19)

Modification phase of node SetSimLpoSel/19
SetSimLpoSel (const struct Clock_Ip_SelectorConfigType * config)
{
  <unnamed type> _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(<unnamed type> *)config_2(D) + 4B];
  # DEBUG D#9 => config_2(D)
  SetSimLpoSel_TrustedCall.isra.0 (_4);
  return;

}



;; Function ResetScgClkoutSel (ResetScgClkoutSel, funcdef_no=20, decl_uid=6065, cgraph_uid=21, symbol_order=21)

Modification phase of node ResetScgClkoutSel/21
ResetScgClkoutSel (const struct Clock_Ip_SelectorConfigType * config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG D#10 => config_2(D)
  ResetScgClkoutSel_TrustedCall.isra.0 ();
  return;

}



;; Function SetScgClkoutSel (SetScgClkoutSel, funcdef_no=22, decl_uid=6067, cgraph_uid=23, symbol_order=23)

Modification phase of node SetScgClkoutSel/23
SetScgClkoutSel (const struct Clock_Ip_SelectorConfigType * config)
{
  <unnamed type> _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(<unnamed type> *)config_2(D) + 4B];
  # DEBUG D#11 => config_2(D)
  SetScgClkoutSel_TrustedCall.isra.0 (_4);
  return;

}



;; Function ResetSimFtmoptSel (ResetSimFtmoptSel, funcdef_no=24, decl_uid=6079, cgraph_uid=25, symbol_order=25)

Modification phase of node ResetSimFtmoptSel/25
ResetSimFtmoptSel (const struct Clock_Ip_SelectorConfigType * config)
{
  <unnamed type> _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(<unnamed type> *)config_2(D)];
  # DEBUG D#12 => config_2(D)
  ResetSimFtmoptSel_TrustedCall.isra.0 (_4);
  return;

}



;; Function ResetSimClkoutSel (ResetSimClkoutSel, funcdef_no=28, decl_uid=6083, cgraph_uid=29, symbol_order=29)

Modification phase of node ResetSimClkoutSel/29
ResetSimClkoutSel (const struct Clock_Ip_SelectorConfigType * config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG D#13 => config_2(D)
  ResetSimClkoutSel_TrustedCall.isra.0 ();
  return;

}



;; Function SetSimClkoutSel (SetSimClkoutSel, funcdef_no=30, decl_uid=6085, cgraph_uid=31, symbol_order=31)

Modification phase of node SetSimClkoutSel/31
SetSimClkoutSel (const struct Clock_Ip_SelectorConfigType * config)
{
  <unnamed type> _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(<unnamed type> *)config_2(D) + 4B];
  # DEBUG D#14 => config_2(D)
  SetSimClkoutSel_TrustedCall.isra.0 (_4);
  return;

}



;; Function ResetPccPcsSelect (ResetPccPcsSelect, funcdef_no=32, decl_uid=6087, cgraph_uid=33, symbol_order=33)

Modification phase of node ResetPccPcsSelect/33
ResetPccPcsSelect (const struct Clock_Ip_SelectorConfigType * config)
{
  <unnamed type> _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(<unnamed type> *)config_2(D)];
  # DEBUG D#15 => config_2(D)
  ResetPccPcsSelect_TrustedCall.isra.0 (_4);
  return;

}



;; Function ResetSimTraceSel (ResetSimTraceSel, funcdef_no=36, decl_uid=6091, cgraph_uid=37, symbol_order=37)

Modification phase of node ResetSimTraceSel/37
ResetSimTraceSel (const struct Clock_Ip_SelectorConfigType * config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG D#16 => config_2(D)
  ResetSimTraceSel_TrustedCall.isra.0 ();
  return;

}



;; Function SetSimTraceSel (SetSimTraceSel, funcdef_no=38, decl_uid=6093, cgraph_uid=39, symbol_order=39)

Modification phase of node SetSimTraceSel/39
SetSimTraceSel (const struct Clock_Ip_SelectorConfigType * config)
{
  <unnamed type> _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(<unnamed type> *)config_2(D) + 4B];
  # DEBUG D#17 => config_2(D)
  SetSimTraceSel_TrustedCall.isra.0 (_4);
  return;

}


