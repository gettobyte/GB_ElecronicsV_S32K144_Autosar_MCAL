
IPA constant propagation start:
Determining dynamic type for call: EnableFirc_TrustedCall (config_2(D));
  Starting walk at: EnableFirc_TrustedCall (config_2(D));
  instance pointer: config_2(D)  Outer instance pointer: config_2(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: SetFirc_TrustedCall (config_2(D));
  Starting walk at: SetFirc_TrustedCall (config_2(D));
  instance pointer: config_2(D)  Outer instance pointer: config_2(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: SetSirc_TrustedCall (0B);
  Starting walk at: SetSirc_TrustedCall (0B);
  instance pointer: 0B  Outer instance pointer: 0B offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: EnableSirc_TrustedCall.isra.0 (config_2(D));
  Starting walk at: EnableSirc_TrustedCall.isra.0 (config_2(D));
  instance pointer: config_2(D)  Outer instance pointer: config_2(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: SetSirc_TrustedCall (config_2(D));
  Starting walk at: SetSirc_TrustedCall (config_2(D));
  instance pointer: config_2(D)  Outer instance pointer: config_2(D) offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  EnableSirc_TrustedCall.isra.0/41:
  Jump functions of caller  SetInputSouceSytemClock.part.0/40:
  Jump functions of caller  DisableFirc_TrustedCall.isra.0/39:
  Jump functions of caller  DisableSircStop_TrustedCall.isra.0/38:
  Jump functions of caller  EnableSircStop_TrustedCall.isra.0/37:
  Jump functions of caller  SetSircStop_TrustedCall.isra.0/36:
  Jump functions of caller  DisableSircVlp_TrustedCall.isra.0/35:
  Jump functions of caller  EnableSircVlp_TrustedCall.isra.0/34:
  Jump functions of caller  SetSircVlp_TrustedCall.isra.0/33:
  Jump functions of caller  DisableSirc_TrustedCall.isra.0/32:
  Jump functions of caller  ReportClockErrors/30:
  Jump functions of caller  ClockTimeoutExpired/29:
  Jump functions of caller  ClockStartTimeout/28:
  Jump functions of caller  DisableFirc/27:
    callsite  DisableFirc/27 -> DisableFirc_TrustedCall.isra.0/39 : 
  Jump functions of caller  EnableFirc/25:
    callsite  EnableFirc/25 -> EnableFirc_TrustedCall/24 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  EnableFirc_TrustedCall/24:
  Jump functions of caller  SetFirc/23:
    callsite  SetFirc/23 -> SetFirc_TrustedCall/22 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  SetFirc_TrustedCall/22:
    callsite  SetFirc_TrustedCall/22 -> DisableSirc_TrustedCall.isra.0/32 : 
    callsite  SetFirc_TrustedCall/22 -> SetInputSouceSytemClock/21 : 
       param 0: CONST: 3
         value: 0x3, mask: 0x0
         Unknown VR
    callsite  SetFirc_TrustedCall/22 -> SetInputSouceSytemClock/21 : 
       param 0: CONST: 2
         value: 0x2, mask: 0x0
         Unknown VR
    callsite  SetFirc_TrustedCall/22 -> SetSirc_TrustedCall/3 : 
       param 0: CONST: 0B
         value: 0x0, mask: 0xfffffff8
         Unknown VR
  Jump functions of caller  SetInputSouceSytemClock/21:
    callsite  SetInputSouceSytemClock/21 -> SetInputSouceSytemClock.part.0/40 : 
  Jump functions of caller  DisableSircStop/20:
    callsite  DisableSircStop/20 -> DisableSircStop_TrustedCall.isra.0/38 : 
  Jump functions of caller  EnableSircStop/18:
    callsite  EnableSircStop/18 -> EnableSircStop_TrustedCall.isra.0/37 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  SetSircStop/16:
    callsite  SetSircStop/16 -> SetSircStop_TrustedCall.isra.0/36 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  DisableSircVlp/14:
    callsite  DisableSircVlp/14 -> DisableSircVlp_TrustedCall.isra.0/35 : 
  Jump functions of caller  EnableSircVlp/12:
    callsite  EnableSircVlp/12 -> EnableSircVlp_TrustedCall.isra.0/34 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  SetSircVlp/10:
    callsite  SetSircVlp/10 -> SetSircVlp_TrustedCall.isra.0/33 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  DisableSirc/8:
    callsite  DisableSirc/8 -> DisableSirc_TrustedCall.isra.0/32 : 
  Jump functions of caller  EnableSirc/6:
    callsite  EnableSirc/6 -> EnableSirc_TrustedCall.isra.0/41 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  SetSirc/4:
    callsite  SetSirc/4 -> SetSirc_TrustedCall/3 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  SetSirc_TrustedCall/3:
  Jump functions of caller  InternalOscillatorEmpty_Disable/2:
  Jump functions of caller  InternalOscillatorEmpty/1:

 Propagating constants:

Not considering DisableFirc for cloning; -fipa-cp-clone disabled.
Not considering EnableFirc for cloning; -fipa-cp-clone disabled.
Not considering SetFirc for cloning; -fipa-cp-clone disabled.
Not considering DisableSircStop for cloning; -fipa-cp-clone disabled.
Not considering EnableSircStop for cloning; -fipa-cp-clone disabled.
Not considering SetSircStop for cloning; -fipa-cp-clone disabled.
Not considering DisableSircVlp for cloning; -fipa-cp-clone disabled.
Not considering EnableSircVlp for cloning; -fipa-cp-clone disabled.
Not considering SetSircVlp for cloning; -fipa-cp-clone disabled.
Not considering DisableSirc for cloning; -fipa-cp-clone disabled.
Not considering EnableSirc for cloning; -fipa-cp-clone disabled.
Not considering SetSirc for cloning; -fipa-cp-clone disabled.
Not considering InternalOscillatorEmpty_Disable for cloning; -fipa-cp-clone disabled.
Not considering InternalOscillatorEmpty for cloning; -fipa-cp-clone disabled.

overall_size: 407, max_new_size: 11001
 - context independent values, size: 4, time_benefit: 1.000000
 - context independent values, size: 4, time_benefit: 1.000000
 - context independent values, size: 4, time_benefit: 1.000000
 - context independent values, size: 4, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: EnableSirc_TrustedCall.isra.0/41:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: SetInputSouceSytemClock.part.0/40:
  Node: DisableFirc_TrustedCall.isra.0/39:
  Node: DisableSircStop_TrustedCall.isra.0/38:
  Node: EnableSircStop_TrustedCall.isra.0/37:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: SetSircStop_TrustedCall.isra.0/36:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: DisableSircVlp_TrustedCall.isra.0/35:
  Node: EnableSircVlp_TrustedCall.isra.0/34:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: SetSircVlp_TrustedCall.isra.0/33:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: DisableSirc_TrustedCall.isra.0/32:
  Node: DisableFirc/27:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: EnableFirc/25:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: EnableFirc_TrustedCall/24:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: SetFirc/23:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SetFirc_TrustedCall/22:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: SetInputSouceSytemClock/21:
    param [0]: 2 [loc_time: 2, loc_size: 30, prop_time: 0, prop_size: 0]
               3 [loc_time: 2, loc_size: 30, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x3, mask = 0x1
         uint32 [2, 3]
        AGGS VARIABLE
  Node: DisableSircStop/20:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: EnableSircStop/18:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SetSircStop/16:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: DisableSircVlp/14:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: EnableSircVlp/12:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SetSircVlp/10:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: DisableSirc/8:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: EnableSirc/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SetSirc/4:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SetSirc_TrustedCall/3:
    param [0]: VARIABLE
               0B [loc_time: 3, loc_size: 47, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: InternalOscillatorEmpty_Disable/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: InternalOscillatorEmpty/1:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM

IPA decision stage:

Propagated bits info for function SetInputSouceSytemClock/21:
 param 0: value = 0x3, mask = 0x1

IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

EnableSirc_TrustedCall.isra.0/41 (EnableSirc_TrustedCall.isra.0) @06ae70e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:114863532 (estimated locally) body local optimize_size
  Called by: EnableSirc/6 (1073741824 (estimated locally),1.00 per call) 
  Calls: ReportClockErrors/30 (37904965 (estimated locally),0.33 per call) ClockTimeoutExpired/29 (1073741824 (estimated locally),9.35 per call) ClockStartTimeout/28 (114863532 (estimated locally),1.00 per call) 
SetInputSouceSytemClock.part.0/40 (SetInputSouceSytemClock.part.0) @06ac9e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: SetInputSouceSytemClock/21 (37904965 (estimated locally),0.33 per call) 
  Calls: ReportClockErrors/30 (1073741824 (estimated locally),1.00 per call) 
DisableFirc_TrustedCall.isra.0/39 (DisableFirc_TrustedCall.isra.0) @06ac97e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: DisableFirc/27 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
DisableSircStop_TrustedCall.isra.0/38 (DisableSircStop_TrustedCall.isra.0) @06ac9460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: DisableSircStop/20 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
EnableSircStop_TrustedCall.isra.0/37 (EnableSircStop_TrustedCall.isra.0) @06a1eb60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: EnableSircStop/18 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SetSircStop_TrustedCall.isra.0/36 (SetSircStop_TrustedCall.isra.0) @06a1ea80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: SetSircStop/16 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
DisableSircVlp_TrustedCall.isra.0/35 (DisableSircVlp_TrustedCall.isra.0) @06a1e620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: DisableSircVlp/14 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
EnableSircVlp_TrustedCall.isra.0/34 (EnableSircVlp_TrustedCall.isra.0) @06a1e0e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: EnableSircVlp/12 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SetSircVlp_TrustedCall.isra.0/33 (SetSircVlp_TrustedCall.isra.0) @069e4b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: SetSircVlp/10 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
DisableSirc_TrustedCall.isra.0/32 (DisableSirc_TrustedCall.isra.0) @069e4700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: SetFirc_TrustedCall/22 (31713418 (estimated locally),0.03 per call) DisableSirc/8 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ReportClockErrors/30 (ReportClockErrors) @05dd88c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SetFirc_TrustedCall/22 (35858682 (estimated locally),0.03 per call) SetFirc_TrustedCall/22 (31713418 (estimated locally),0.03 per call) SetSirc_TrustedCall/3 (37904965 (estimated locally),0.07 per call) EnableSirc_TrustedCall.isra.0/41 (37904965 (estimated locally),0.33 per call) SetInputSouceSytemClock.part.0/40 (1073741824 (estimated locally),1.00 per call) EnableFirc_TrustedCall/24 (37904965 (estimated locally),0.07 per call) 
  Calls: 
ClockTimeoutExpired/29 (ClockTimeoutExpired) @05dd87e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SetFirc_TrustedCall/22 (1015776324 (estimated locally),0.95 per call) SetFirc_TrustedCall/22 (898352582 (estimated locally),0.84 per call) SetSirc_TrustedCall/3 (1073741824 (estimated locally),1.89 per call) EnableSirc_TrustedCall.isra.0/41 (1073741824 (estimated locally),9.35 per call) SetInputSouceSytemClock/21 (1073741824 (estimated locally),9.35 per call) EnableFirc_TrustedCall/24 (1073741824 (estimated locally),1.89 per call) 
  Calls: 
ClockStartTimeout/28 (ClockStartTimeout) @05dd8700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SetFirc_TrustedCall/22 (108662673 (estimated locally),0.10 per call) SetFirc_TrustedCall/22 (96101268 (estimated locally),0.09 per call) SetSirc_TrustedCall/3 (114863532 (estimated locally),0.20 per call) EnableSirc_TrustedCall.isra.0/41 (114863532 (estimated locally),1.00 per call) SetInputSouceSytemClock/21 (114863532 (estimated locally),1.00 per call) EnableFirc_TrustedCall/24 (114863532 (estimated locally),0.20 per call) 
  Calls: 
DisableFirc/27 (DisableFirc) @05dd3a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: intOscCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: DisableFirc_TrustedCall.isra.0/39 (1073741824 (estimated locally),1.00 per call) 
EnableFirc/25 (EnableFirc) @05dd3c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: intOscCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: EnableFirc_TrustedCall/24 (1073741824 (estimated locally),1.00 per call) 
EnableFirc_TrustedCall/24 (EnableFirc_TrustedCall) @05dd39a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:567507571 (estimated locally) body local optimize_size
  Called by: EnableFirc/25 (1073741824 (estimated locally),1.00 per call) 
  Calls: ReportClockErrors/30 (37904965 (estimated locally),0.07 per call) ClockTimeoutExpired/29 (1073741824 (estimated locally),1.89 per call) ClockStartTimeout/28 (114863532 (estimated locally),0.20 per call) 
SetFirc/23 (SetFirc) @05dd3620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: intOscCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SetFirc_TrustedCall/22 (1073741824 (estimated locally),1.00 per call) 
SetFirc_TrustedCall/22 (SetFirc_TrustedCall) @05dd3380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: SetFirc/23 (1073741824 (estimated locally),1.00 per call) 
  Calls: ReportClockErrors/30 (35858682 (estimated locally),0.03 per call) ClockTimeoutExpired/29 (1015776324 (estimated locally),0.95 per call) ClockStartTimeout/28 (108662673 (estimated locally),0.10 per call) DisableSirc_TrustedCall.isra.0/32 (31713418 (estimated locally),0.03 per call) SetInputSouceSytemClock/21 (96101267 (estimated locally),0.09 per call) ReportClockErrors/30 (31713418 (estimated locally),0.03 per call) ClockTimeoutExpired/29 (898352582 (estimated locally),0.84 per call) ClockStartTimeout/28 (96101268 (estimated locally),0.09 per call) SetInputSouceSytemClock/21 (474808635 (estimated locally),0.44 per call) SetSirc_TrustedCall/3 (156686850 (estimated locally),0.15 per call) 
SetInputSouceSytemClock/21 (SetInputSouceSytemClock) @05dcbd20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:114863532 (estimated locally) body local optimize_size
  Called by: SetFirc_TrustedCall/22 (96101267 (estimated locally),0.09 per call) SetFirc_TrustedCall/22 (474808635 (estimated locally),0.44 per call) 
  Calls: SetInputSouceSytemClock.part.0/40 (37904965 (estimated locally),0.33 per call) ClockTimeoutExpired/29 (1073741824 (estimated locally),9.35 per call) ClockStartTimeout/28 (114863532 (estimated locally),1.00 per call) 
DisableSircStop/20 (DisableSircStop) @05dcba80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: intOscCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: DisableSircStop_TrustedCall.isra.0/38 (1073741824 (estimated locally),1.00 per call) 
EnableSircStop/18 (EnableSircStop) @05dcb540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: intOscCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: EnableSircStop_TrustedCall.isra.0/37 (1073741824 (estimated locally),1.00 per call) 
SetSircStop/16 (SetSircStop) @05dc89a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: intOscCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SetSircStop_TrustedCall.isra.0/36 (1073741824 (estimated locally),1.00 per call) 
DisableSircVlp/14 (DisableSircVlp) @05dc8b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: intOscCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: DisableSircVlp_TrustedCall.isra.0/35 (1073741824 (estimated locally),1.00 per call) 
EnableSircVlp/12 (EnableSircVlp) @05dc8620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: intOscCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: EnableSircVlp_TrustedCall.isra.0/34 (1073741824 (estimated locally),1.00 per call) 
SetSircVlp/10 (SetSircVlp) @05dc8000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: intOscCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SetSircVlp_TrustedCall.isra.0/33 (1073741824 (estimated locally),1.00 per call) 
DisableSirc/8 (DisableSirc) @05dc4c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: intOscCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: DisableSirc_TrustedCall.isra.0/32 (1073741824 (estimated locally),1.00 per call) 
EnableSirc/6 (EnableSirc) @05dc4700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: intOscCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: EnableSirc_TrustedCall.isra.0/41 (1073741824 (estimated locally),1.00 per call) 
SetSirc/4 (SetSirc) @05dc4000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: intOscCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SetSirc_TrustedCall/3 (1073741824 (estimated locally),1.00 per call) 
SetSirc_TrustedCall/3 (SetSirc_TrustedCall) @05ca1620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:567507571 (estimated locally) body local optimize_size
  Called by: SetFirc_TrustedCall/22 (156686850 (estimated locally),0.15 per call) SetSirc/4 (1073741824 (estimated locally),1.00 per call) 
  Calls: ReportClockErrors/30 (37904965 (estimated locally),0.07 per call) ClockTimeoutExpired/29 (1073741824 (estimated locally),1.89 per call) ClockStartTimeout/28 (114863532 (estimated locally),0.20 per call) 
InternalOscillatorEmpty_Disable/2 (InternalOscillatorEmpty_Disable) @05ca1a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: intOscCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
InternalOscillatorEmpty/1 (InternalOscillatorEmpty) @05ca17e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: intOscCallbacks/0 (addr)intOscCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
intOscCallbacks/0 (intOscCallbacks) @05c9f678
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: InternalOscillatorEmpty/1 (addr)InternalOscillatorEmpty/1 (addr)InternalOscillatorEmpty_Disable/2 (addr)SetSirc/4 (addr)EnableSirc/6 (addr)DisableSirc/8 (addr)SetSircVlp/10 (addr)EnableSircVlp/12 (addr)DisableSircVlp/14 (addr)SetSircStop/16 (addr)EnableSircStop/18 (addr)DisableSircStop/20 (addr)SetFirc/23 (addr)EnableFirc/25 (addr)DisableFirc/27 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known

;; Function InternalOscillatorEmpty (InternalOscillatorEmpty, funcdef_no=0, decl_uid=6045, cgraph_uid=1, symbol_order=1)

Modification phase of node InternalOscillatorEmpty/1
InternalOscillatorEmpty (const struct Clock_Ip_IrcoscConfigType * config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function InternalOscillatorEmpty_Disable (InternalOscillatorEmpty_Disable, funcdef_no=1, decl_uid=6047, cgraph_uid=2, symbol_order=2)

Modification phase of node InternalOscillatorEmpty_Disable/2
InternalOscillatorEmpty_Disable (Clock_Ip_NameType name)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function EnableFirc (EnableFirc, funcdef_no=24, decl_uid=6069, cgraph_uid=25, symbol_order=25)

Modification phase of node EnableFirc/25
EnableFirc (const struct Clock_Ip_IrcoscConfigType * config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  EnableFirc_TrustedCall (config_2(D));
  return;

}



;; Function SetSirc_TrustedCall (SetSirc_TrustedCall, funcdef_no=2, decl_uid=6080, cgraph_uid=3, symbol_order=3)

Modification phase of node SetSirc_TrustedCall/3
SetSirc_TrustedCall (const struct Clock_Ip_IrcoscConfigType * config)
{
  unsigned char sircConfig$lowPowerModeEnable;
  unsigned char sircConfig$range;
  short unsigned int sircConfig$enable;
  unsigned int sircConfig;
  uint32 IrcoscStatus;
  uint32 TimeoutTicks;
  uint32 ElapsedTime;
  uint32 StartTime;
  boolean TimeoutOccurred;
  <unnamed type> _1;
  unsigned char _2;
  short unsigned int _3;
  unsigned char _4;
  long unsigned int _6;
  long unsigned int _8;
  long unsigned int _10;
  long unsigned int _12;
  long unsigned int _14;
  long unsigned int _15;
  long unsigned int _16;
  long unsigned int _17;
  long unsigned int _18;
  long unsigned int _19;
  long unsigned int _20;
  long unsigned int _21;
  long unsigned int _22;
  long unsigned int _23;
  long unsigned int _24;
  long unsigned int _25;
  long unsigned int TimeoutTicks.6_26;
  unsigned char _29;

  <bb 2> [local count: 567507571]:
  # DEBUG BEGIN_STMT
  # DEBUG TimeoutOccurred => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (config_30(D) == 0B)
    goto <bb 4>; [30.00%]
  else
    goto <bb 3>; [70.00%]

  <bb 3> [local count: 397255299]:
  # DEBUG BEGIN_STMT
  _1 = config_30(D)->name;
  # DEBUG sircConfig => _1
  # DEBUG BEGIN_STMT
  _2 = config_30(D)->range;
  # DEBUG sircConfig$range => _2
  # DEBUG BEGIN_STMT
  _3 = config_30(D)->enable;
  # DEBUG sircConfig$enable => _3
  # DEBUG BEGIN_STMT
  _4 = config_30(D)->lowPowerModeEnable;
  # DEBUG sircConfig$lowPowerModeEnable => _4

  <bb 4> [local count: 567507571]:
  # sircConfig_5 = PHI <5(2), _1(3)>
  # sircConfig$enable_7 = PHI <1(2), _3(3)>
  # sircConfig$range_9 = PHI <1(2), _2(3)>
  # sircConfig$lowPowerModeEnable_11 = PHI <1(2), _4(3)>
  # DEBUG sircConfig$lowPowerModeEnable => sircConfig$lowPowerModeEnable_11
  # DEBUG sircConfig$range => sircConfig$range_9
  # DEBUG sircConfig$enable => sircConfig$enable_7
  # DEBUG sircConfig => sircConfig_5
  # DEBUG BEGIN_STMT
  _6 ={v} MEM[(struct SCG_Type *)1074151424B].SIRCCSR;
  _8 = _6 & 4286578687;
  MEM[(struct SCG_Type *)1074151424B].SIRCCSR ={v} _8;
  # DEBUG BEGIN_STMT
  _10 ={v} MEM[(struct SCG_Type *)1074151424B].SIRCCSR;
  _12 = _10 & 4294967294;
  MEM[(struct SCG_Type *)1074151424B].SIRCCSR ={v} _12;
  # DEBUG BEGIN_STMT
  _14 ={v} MEM[(struct SCG_Type *)1074151424B].SIRCCSR;
  _15 = _14 & 4294967291;
  MEM[(struct SCG_Type *)1074151424B].SIRCCSR ={v} _15;
  # DEBUG BEGIN_STMT
  if (sircConfig$enable_7 == 1)
    goto <bb 5>; [20.24%]
  else
    goto <bb 10>; [79.76%]

  <bb 5> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  _29 = sircConfig$range_9 & 1;
  _16 = (long unsigned int) _29;
  MEM[(struct SCG_Type *)1074151424B].SIRCCFG ={v} _16;
  # DEBUG BEGIN_STMT
  _17 ={v} MEM[(struct SCG_Type *)1074151424B].SIRCCSR;
  _18 = _17 | 1;
  MEM[(struct SCG_Type *)1074151424B].SIRCCSR ={v} _18;
  # DEBUG BEGIN_STMT
  _19 ={v} MEM[(struct SCG_Type *)1074151424B].SIRCCSR;
  _20 = (long unsigned int) sircConfig$lowPowerModeEnable_11;
  _21 = _20 << 2;
  _22 = _21 & 4;
  _23 = _19 | _22;
  MEM[(struct SCG_Type *)1074151424B].SIRCCSR ={v} _23;
  # DEBUG BEGIN_STMT
  ClockStartTimeout (&StartTime, &ElapsedTime, &TimeoutTicks, 50000);

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _24 ={v} MEM[(struct SCG_Type *)1074151424B].SIRCCSR;
  _25 = _24 >> 24;
  IrcoscStatus_39 = _25 & 1;
  # DEBUG IrcoscStatus => IrcoscStatus_39
  # DEBUG BEGIN_STMT
  TimeoutTicks.6_26 = TimeoutTicks;
  TimeoutOccurred_41 = ClockTimeoutExpired (&StartTime, &ElapsedTime, TimeoutTicks.6_26);
  # DEBUG TimeoutOccurred => TimeoutOccurred_41
  # DEBUG BEGIN_STMT
  if (IrcoscStatus_39 == 0)
    goto <bb 7>; [94.50%]
  else
    goto <bb 8>; [5.50%]

  <bb 7> [local count: 1014686025]:
  if (TimeoutOccurred_41 != 0)
    goto <bb 8>; [5.50%]
  else
    goto <bb 11>; [94.50%]

  <bb 11> [local count: 958878293]:
  goto <bb 6>; [100.00%]

  <bb 8> [local count: 114863532]:
  # TimeoutOccurred_13 = PHI <TimeoutOccurred_41(6), TimeoutOccurred_41(7)>
  # DEBUG BEGIN_STMT
  if (TimeoutOccurred_13 != 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 9> [local count: 37904965]:
  # DEBUG BEGIN_STMT
  ReportClockErrors (1, sircConfig_5);

  <bb 10> [local count: 567507571]:
  StartTime ={v} {CLOBBER};
  ElapsedTime ={v} {CLOBBER};
  TimeoutTicks ={v} {CLOBBER};
  return;

}



;; Function SetSirc (SetSirc, funcdef_no=3, decl_uid=6049, cgraph_uid=4, symbol_order=4)

Modification phase of node SetSirc/4
SetSirc (const struct Clock_Ip_IrcoscConfigType * config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SetSirc_TrustedCall (config_2(D));
  return;

}



;; Function DisableSirc_TrustedCall.isra.0 (DisableSirc_TrustedCall.isra.0, funcdef_no=27, decl_uid=6276, cgraph_uid=31, symbol_order=32)

Modification phase of node DisableSirc_TrustedCall.isra.0/32
DisableSirc_TrustedCall.isra.0 ()
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;

  <bb 3> [local count: 1073741824]:
  # DEBUG name s=> name

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SCG_Type *)1074151424B].SIRCCSR;
  _2 = _1 & 4294967294;
  MEM[(struct SCG_Type *)1074151424B].SIRCCSR ={v} _2;
  # DEBUG BEGIN_STMT
  _3 ={v} MEM[(struct SCG_Type *)1074151424B].SIRCCSR;
  _4 = _3 & 4294967291;
  MEM[(struct SCG_Type *)1074151424B].SIRCCSR ={v} _4;
  return;

}



;; Function DisableSirc (DisableSirc, funcdef_no=7, decl_uid=6053, cgraph_uid=8, symbol_order=8)

Modification phase of node DisableSirc/8
DisableSirc (Clock_Ip_NameType name)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => name_2(D)
  DisableSirc_TrustedCall.isra.0 ();
  return;

}



;; Function SetSircVlp (SetSircVlp, funcdef_no=9, decl_uid=6055, cgraph_uid=10, symbol_order=10)

Modification phase of node SetSircVlp/10
SetSircVlp (const struct Clock_Ip_IrcoscConfigType * config)
{
  unsigned char _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(unsigned char *)config_2(D) + 8B];
  # DEBUG D#2 => config_2(D)
  SetSircVlp_TrustedCall.isra.0 (_4);
  return;

}



;; Function EnableSircVlp (EnableSircVlp, funcdef_no=11, decl_uid=6057, cgraph_uid=12, symbol_order=12)

Modification phase of node EnableSircVlp/12
EnableSircVlp (const struct Clock_Ip_IrcoscConfigType * config)
{
  short unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(short unsigned int *)config_2(D) + 4B];
  # DEBUG D#3 => config_2(D)
  EnableSircVlp_TrustedCall.isra.0 (_4);
  return;

}



;; Function DisableSircVlp (DisableSircVlp, funcdef_no=13, decl_uid=6059, cgraph_uid=14, symbol_order=14)

Modification phase of node DisableSircVlp/14
DisableSircVlp (Clock_Ip_NameType name)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG D#4 => name_2(D)
  DisableSircVlp_TrustedCall.isra.0 ();
  return;

}



;; Function SetSircStop (SetSircStop, funcdef_no=15, decl_uid=6061, cgraph_uid=16, symbol_order=16)

Modification phase of node SetSircStop/16
SetSircStop (const struct Clock_Ip_IrcoscConfigType * config)
{
  unsigned char _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(unsigned char *)config_2(D) + 9B];
  # DEBUG D#5 => config_2(D)
  SetSircStop_TrustedCall.isra.0 (_4);
  return;

}



;; Function EnableSircStop (EnableSircStop, funcdef_no=17, decl_uid=6063, cgraph_uid=18, symbol_order=18)

Modification phase of node EnableSircStop/18
EnableSircStop (const struct Clock_Ip_IrcoscConfigType * config)
{
  short unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(short unsigned int *)config_2(D) + 4B];
  # DEBUG D#6 => config_2(D)
  EnableSircStop_TrustedCall.isra.0 (_4);
  return;

}



;; Function DisableSircStop (DisableSircStop, funcdef_no=19, decl_uid=6065, cgraph_uid=20, symbol_order=20)

Modification phase of node DisableSircStop/20
DisableSircStop (Clock_Ip_NameType name)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG D#7 => name_2(D)
  DisableSircStop_TrustedCall.isra.0 ();
  return;

}



;; Function DisableFirc (DisableFirc, funcdef_no=26, decl_uid=6071, cgraph_uid=27, symbol_order=27)

Modification phase of node DisableFirc/27
DisableFirc (Clock_Ip_NameType name)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG D#8 => name_2(D)
  DisableFirc_TrustedCall.isra.0 ();
  return;

}



;; Function SetInputSouceSytemClock (SetInputSouceSytemClock, funcdef_no=20, decl_uid=6149, cgraph_uid=21, symbol_order=21)

Modification phase of node SetInputSouceSytemClock/21
Adjusting mask for param 0 to 0x1
Setting value range of param 0 [2, 3]
SetInputSouceSytemClock (uint32 sourceClock)
{
  uint32 TimeoutTicks;
  uint32 ElapsedTime;
  uint32 StartTime;
  boolean TimeoutOccurred;
  uint32 regValue;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int TimeoutTicks.4_5;
  uint32 iftmp.3_7;

  <bb 2> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG TimeoutOccurred => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  regValue_11 ={v} MEM[(struct SCG_Type *)1074151424B].RCCR;
  # DEBUG regValue => regValue_11
  # DEBUG BEGIN_STMT
  regValue_12 = regValue_11 & 4043309055;
  # DEBUG regValue => regValue_12
  # DEBUG BEGIN_STMT
  _1 = sourceClock_13(D) << 24;
  regValue_14 = _1 | regValue_12;
  # DEBUG regValue => regValue_14
  # DEBUG BEGIN_STMT
  MEM[(struct SCG_Type *)1074151424B].RCCR ={v} regValue_14;
  # DEBUG BEGIN_STMT
  ClockStartTimeout (&StartTime, &ElapsedTime, &TimeoutTicks, 50000);

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 ={v} MEM[(struct SCG_Type *)1074151424B].CSR;
  _3 = _2 >> 24;
  _4 = _3 & 15;
  if (_4 != sourceClock_13(D))
    goto <bb 5>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 4> [local count: 719407023]:

  <bb 5> [local count: 1073741824]:
  # iftmp.3_7 = PHI <1(3), 0(4)>
  # DEBUG ScsStatus => iftmp.3_7
  # DEBUG BEGIN_STMT
  TimeoutTicks.4_5 = TimeoutTicks;
  TimeoutOccurred_19 = ClockTimeoutExpired (&StartTime, &ElapsedTime, TimeoutTicks.4_5);
  # DEBUG TimeoutOccurred => TimeoutOccurred_19
  # DEBUG BEGIN_STMT
  if (iftmp.3_7 == 0)
    goto <bb 6>; [94.50%]
  else
    goto <bb 7>; [5.50%]

  <bb 6> [local count: 1014686025]:
  if (TimeoutOccurred_19 != 0)
    goto <bb 7>; [5.50%]
  else
    goto <bb 10>; [94.50%]

  <bb 10> [local count: 958878294]:
  goto <bb 3>; [100.00%]

  <bb 7> [local count: 114863532]:
  # TimeoutOccurred_17 = PHI <TimeoutOccurred_19(5), TimeoutOccurred_19(6)>
  # DEBUG BEGIN_STMT
  if (TimeoutOccurred_17 != 0)
    goto <bb 8>; [33.00%]
  else
    goto <bb 9>; [67.00%]

  <bb 8> [local count: 37904965]:
  # DEBUG D#9 => sourceClock_13(D)
  SetInputSouceSytemClock.part.0 ();

  <bb 9> [local count: 114863532]:
  StartTime ={v} {CLOBBER};
  ElapsedTime ={v} {CLOBBER};
  TimeoutTicks ={v} {CLOBBER};
  return;

}



;; Function SetFirc (SetFirc, funcdef_no=22, decl_uid=6067, cgraph_uid=23, symbol_order=23)

Modification phase of node SetFirc/23
SetFirc (const struct Clock_Ip_IrcoscConfigType * config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SetFirc_TrustedCall (config_2(D));
  return;

}



;; Function EnableSirc (EnableSirc, funcdef_no=5, decl_uid=6051, cgraph_uid=6, symbol_order=6)

Modification phase of node EnableSirc/6
EnableSirc (const struct Clock_Ip_IrcoscConfigType * config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG D#11 => config_2(D)
  EnableSirc_TrustedCall.isra.0 (config_2(D));
  return;

}


