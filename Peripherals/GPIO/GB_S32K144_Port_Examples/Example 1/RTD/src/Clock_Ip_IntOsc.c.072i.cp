
IPA constant propagation start:
Determining dynamic type for call: Clock_Ip_EnableFirc_TrustedCall.part.0 (Config_12(D));
  Starting walk at: Clock_Ip_EnableFirc_TrustedCall.part.0 (Config_12(D));
  instance pointer: Config_12(D)  Outer instance pointer: Config_12(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:TimeoutOccurred_17 = Clock_Ip_TimeoutExpired (&StartTime, &ElapsedTime, TimeoutTicks.5_7);
  Function call may change dynamic type:Clock_Ip_StartTimeout (&StartTime, &ElapsedTime, &TimeoutTicks, 50000);
  Function call may change dynamic type:TimeoutOccurred_17 = Clock_Ip_TimeoutExpired (&StartTime, &ElapsedTime, TimeoutTicks.5_7);
Determining dynamic type for call: Clock_Ip_SetSirc_TrustedCall (0B);
  Starting walk at: Clock_Ip_SetSirc_TrustedCall (0B);
  instance pointer: 0B  Outer instance pointer: 0B offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Clock_Ip_EnableSirc_TrustedCall.part.0 (Config_19(D));
  Starting walk at: Clock_Ip_EnableSirc_TrustedCall.part.0 (Config_19(D));
  instance pointer: Config_19(D)  Outer instance pointer: Config_19(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:TimeoutOccurred_18 = Clock_Ip_TimeoutExpired (&StartTime, &ElapsedTime, TimeoutTicks.1_8);
  Function call may change dynamic type:Clock_Ip_StartTimeout (&StartTime, &ElapsedTime, &TimeoutTicks, 50000);
  Function call may change dynamic type:TimeoutOccurred_18 = Clock_Ip_TimeoutExpired (&StartTime, &ElapsedTime, TimeoutTicks.1_8);
Determining dynamic type for call: Clock_Ip_EnableFirc_TrustedCall (Config_2(D));
  Starting walk at: Clock_Ip_EnableFirc_TrustedCall (Config_2(D));
  instance pointer: Config_2(D)  Outer instance pointer: Config_2(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Clock_Ip_SetFirc_TrustedCall (Config_2(D));
  Starting walk at: Clock_Ip_SetFirc_TrustedCall (Config_2(D));
  instance pointer: Config_2(D)  Outer instance pointer: Config_2(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Clock_Ip_EnableSircStop_TrustedCall (Config_2(D));
  Starting walk at: Clock_Ip_EnableSircStop_TrustedCall (Config_2(D));
  instance pointer: Config_2(D)  Outer instance pointer: Config_2(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Clock_Ip_SetSircStop_TrustedCall (Config_2(D));
  Starting walk at: Clock_Ip_SetSircStop_TrustedCall (Config_2(D));
  instance pointer: Config_2(D)  Outer instance pointer: Config_2(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Clock_Ip_EnableSircVlp_TrustedCall (Config_2(D));
  Starting walk at: Clock_Ip_EnableSircVlp_TrustedCall (Config_2(D));
  instance pointer: Config_2(D)  Outer instance pointer: Config_2(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Clock_Ip_SetSircVlp_TrustedCall (Config_2(D));
  Starting walk at: Clock_Ip_SetSircVlp_TrustedCall (Config_2(D));
  instance pointer: Config_2(D)  Outer instance pointer: Config_2(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Clock_Ip_EnableSirc_TrustedCall (Config_2(D));
  Starting walk at: Clock_Ip_EnableSirc_TrustedCall (Config_2(D));
  instance pointer: Config_2(D)  Outer instance pointer: Config_2(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Clock_Ip_SetSirc_TrustedCall (Config_2(D));
  Starting walk at: Clock_Ip_SetSirc_TrustedCall (Config_2(D));
  instance pointer: Config_2(D)  Outer instance pointer: Config_2(D) offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Clock_Ip_EnableFirc_TrustedCall.part.0/38:
  Jump functions of caller  Clock_Ip_EnableSircStop_TrustedCall.part.0/35:
  Jump functions of caller  Clock_Ip_EnableSircVlp_TrustedCall.part.0/34:
  Jump functions of caller  Clock_Ip_EnableSirc_TrustedCall.part.0/33:
  Jump functions of caller  SetInputSouceSytemClock.part.0/32:
  Jump functions of caller  Clock_Ip_ReportClockErrors/30:
  Jump functions of caller  Clock_Ip_TimeoutExpired/29:
  Jump functions of caller  Clock_Ip_StartTimeout/28:
  Jump functions of caller  Clock_Ip_DisableFirc_TrustedCall/26:
  Jump functions of caller  Clock_Ip_EnableFirc_TrustedCall/25:
    callsite  Clock_Ip_EnableFirc_TrustedCall/25 -> Clock_Ip_EnableFirc_TrustedCall.part.0/38 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Clock_Ip_SetFirc_TrustedCall/24:
    callsite  Clock_Ip_SetFirc_TrustedCall/24 -> Clock_Ip_DisableSirc_TrustedCall/17 : 
       param 0: CONST: 2
         value: 0x2, mask: 0x0
         Unknown VR
    callsite  Clock_Ip_SetFirc_TrustedCall/24 -> SetInputSouceSytemClock/11 : 
       param 0: CONST: 3
         value: 0x3, mask: 0x0
         Unknown VR
    callsite  Clock_Ip_SetFirc_TrustedCall/24 -> SetInputSouceSytemClock/11 : 
       param 0: CONST: 2
         value: 0x2, mask: 0x0
         Unknown VR
    callsite  Clock_Ip_SetFirc_TrustedCall/24 -> Clock_Ip_SetSirc_TrustedCall/15 : 
       param 0: CONST: 0B
         value: 0x0, mask: 0xfffffff8
         Unknown VR
  Jump functions of caller  Clock_Ip_DisableSircStop_TrustedCall/23:
  Jump functions of caller  Clock_Ip_EnableSircStop_TrustedCall/22:
    callsite  Clock_Ip_EnableSircStop_TrustedCall/22 -> Clock_Ip_EnableSircStop_TrustedCall.part.0/35 : 
  Jump functions of caller  Clock_Ip_SetSircStop_TrustedCall/21:
  Jump functions of caller  Clock_Ip_DisableSircVlp_TrustedCall/20:
  Jump functions of caller  Clock_Ip_EnableSircVlp_TrustedCall/19:
    callsite  Clock_Ip_EnableSircVlp_TrustedCall/19 -> Clock_Ip_EnableSircVlp_TrustedCall.part.0/34 : 
  Jump functions of caller  Clock_Ip_SetSircVlp_TrustedCall/18:
  Jump functions of caller  Clock_Ip_DisableSirc_TrustedCall/17:
  Jump functions of caller  Clock_Ip_EnableSirc_TrustedCall/16:
    callsite  Clock_Ip_EnableSirc_TrustedCall/16 -> Clock_Ip_EnableSirc_TrustedCall.part.0/33 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Clock_Ip_SetSirc_TrustedCall/15:
  Jump functions of caller  Clock_Ip_DisableFirc/14:
    callsite  Clock_Ip_DisableFirc/14 -> Clock_Ip_DisableFirc_TrustedCall/26 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Clock_Ip_EnableFirc/13:
    callsite  Clock_Ip_EnableFirc/13 -> Clock_Ip_EnableFirc_TrustedCall/25 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Clock_Ip_SetFirc/12:
    callsite  Clock_Ip_SetFirc/12 -> Clock_Ip_SetFirc_TrustedCall/24 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  SetInputSouceSytemClock/11:
    callsite  SetInputSouceSytemClock/11 -> SetInputSouceSytemClock.part.0/32 : 
  Jump functions of caller  Clock_Ip_DisableSircStop/10:
    callsite  Clock_Ip_DisableSircStop/10 -> Clock_Ip_DisableSircStop_TrustedCall/23 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Clock_Ip_EnableSircStop/9:
    callsite  Clock_Ip_EnableSircStop/9 -> Clock_Ip_EnableSircStop_TrustedCall/22 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Clock_Ip_SetSircStop/8:
    callsite  Clock_Ip_SetSircStop/8 -> Clock_Ip_SetSircStop_TrustedCall/21 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Clock_Ip_DisableSircVlp/7:
    callsite  Clock_Ip_DisableSircVlp/7 -> Clock_Ip_DisableSircVlp_TrustedCall/20 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Clock_Ip_EnableSircVlp/6:
    callsite  Clock_Ip_EnableSircVlp/6 -> Clock_Ip_EnableSircVlp_TrustedCall/19 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Clock_Ip_SetSircVlp/5:
    callsite  Clock_Ip_SetSircVlp/5 -> Clock_Ip_SetSircVlp_TrustedCall/18 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Clock_Ip_DisableSirc/4:
    callsite  Clock_Ip_DisableSirc/4 -> Clock_Ip_DisableSirc_TrustedCall/17 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Clock_Ip_EnableSirc/3:
    callsite  Clock_Ip_EnableSirc/3 -> Clock_Ip_EnableSirc_TrustedCall/16 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Clock_Ip_SetSirc/2:
    callsite  Clock_Ip_SetSirc/2 -> Clock_Ip_SetSirc_TrustedCall/15 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Clock_Ip_InternalOscillatorEmpty_Disable/1:
  Jump functions of caller  Clock_Ip_InternalOscillatorEmpty/0:

 Propagating constants:

Not considering Clock_Ip_DisableFirc_TrustedCall for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_EnableFirc_TrustedCall for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_SetFirc_TrustedCall for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_DisableSircStop_TrustedCall for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_EnableSircStop_TrustedCall for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_SetSircStop_TrustedCall for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_DisableSircVlp_TrustedCall for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_EnableSircVlp_TrustedCall for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_SetSircVlp_TrustedCall for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_DisableSirc_TrustedCall for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_EnableSirc_TrustedCall for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_SetSirc_TrustedCall for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_DisableFirc for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_EnableFirc for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_SetFirc for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_DisableSircStop for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_EnableSircStop for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_SetSircStop for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_DisableSircVlp for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_EnableSircVlp for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_SetSircVlp for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_DisableSirc for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_EnableSirc for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_SetSirc for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_InternalOscillatorEmpty_Disable for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_InternalOscillatorEmpty for cloning; -fipa-cp-clone disabled.

overall_size: 421, max_new_size: 11001
 - context independent values, size: 5, time_benefit: 1.000000
 - context independent values, size: 5, time_benefit: 1.000000
 - context independent values, size: 5, time_benefit: 1.000000
 - context independent values, size: 7, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: Clock_Ip_EnableSircStop_TrustedCall.part.0/35:
  Node: Clock_Ip_EnableSircVlp_TrustedCall.part.0/34:
  Node: Clock_Ip_EnableSirc_TrustedCall.part.0/33:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: SetInputSouceSytemClock.part.0/32:
  Node: Clock_Ip_DisableFirc_TrustedCall/26:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_EnableFirc_TrustedCall/25:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_SetFirc_TrustedCall/24:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_DisableSircStop_TrustedCall/23:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_EnableSircStop_TrustedCall/22:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_SetSircStop_TrustedCall/21:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_DisableSircVlp_TrustedCall/20:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_EnableSircVlp_TrustedCall/19:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_SetSircVlp_TrustedCall/18:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_DisableSirc_TrustedCall/17:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_EnableSirc_TrustedCall/16:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_SetSirc_TrustedCall/15:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_DisableFirc/14:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_EnableFirc/13:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_SetFirc/12:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SetInputSouceSytemClock/11:
    param [0]: 2 [loc_time: 2, loc_size: 28, prop_time: 0, prop_size: 0]
               3 [loc_time: 2, loc_size: 28, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x3, mask = 0x1
         uint32 [2, 3]
        AGGS VARIABLE
  Node: Clock_Ip_DisableSircStop/10:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_EnableSircStop/9:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_SetSircStop/8:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_DisableSircVlp/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_EnableSircVlp/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_SetSircVlp/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_DisableSirc/4:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_EnableSirc/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_SetSirc/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_InternalOscillatorEmpty_Disable/1:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_InternalOscillatorEmpty/0:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM

IPA decision stage:

Propagated bits info for function SetInputSouceSytemClock/11:
 param 0: value = 0x3, mask = 0x1

IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Clock_Ip_EnableFirc_TrustedCall.part.0/38 (Clock_Ip_EnableFirc_TrustedCall.part.0) @06ce3b60
  Type: function definition analyzed alias
  Visibility: prevailing_def_ironly artificial
  References: Clock_Ip_EnableSirc_TrustedCall.part.0/33 (alias)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 local icf_merged split_part optimize_size
  Called by: Clock_Ip_EnableFirc_TrustedCall/25 (37904965 (estimated locally),0.07 per call) 
  Calls: 
Clock_Ip_EnableSircStop_TrustedCall.part.0/35 (Clock_Ip_EnableSircStop_TrustedCall.part.0) @06ce32a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Clock_Ip_EnableSircStop_TrustedCall/22 (365072224 (estimated locally),0.34 per call) 
  Calls: 
Clock_Ip_EnableSircVlp_TrustedCall.part.0/34 (Clock_Ip_EnableSircVlp_TrustedCall.part.0) @06ce3a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Clock_Ip_EnableSircVlp_TrustedCall/19 (365072224 (estimated locally),0.34 per call) 
  Calls: 
Clock_Ip_EnableSirc_TrustedCall.part.0/33 (Clock_Ip_EnableSirc_TrustedCall.part.0) @06ce3460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: Clock_Ip_EnableFirc_TrustedCall.part.0/38 (alias)
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local icf_merged split_part optimize_size
  Called by: Clock_Ip_EnableSirc_TrustedCall/16 (37904965 (estimated locally),0.33 per call) 
  Calls: Clock_Ip_ReportClockErrors/30 (1073741824 (estimated locally),1.00 per call) 
SetInputSouceSytemClock.part.0/32 (SetInputSouceSytemClock.part.0) @06c41d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: SetInputSouceSytemClock/11 (37904965 (estimated locally),0.33 per call) 
  Calls: Clock_Ip_ReportClockErrors/30 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_ReportClockErrors/30 (Clock_Ip_ReportClockErrors) @06bdfc40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_SetFirc_TrustedCall/24 (35858682 (estimated locally),0.03 per call) Clock_Ip_SetFirc_TrustedCall/24 (31713418 (estimated locally),0.03 per call) Clock_Ip_EnableSirc_TrustedCall.part.0/33 (1073741824 (estimated locally),1.00 per call) Clock_Ip_SetSirc_TrustedCall/15 (37904965 (estimated locally),0.07 per call) SetInputSouceSytemClock.part.0/32 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_TimeoutExpired/29 (Clock_Ip_TimeoutExpired) @06bdfb60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_EnableFirc_TrustedCall/25 (1073741824 (estimated locally),1.89 per call) Clock_Ip_SetFirc_TrustedCall/24 (1015776324 (estimated locally),0.95 per call) Clock_Ip_SetFirc_TrustedCall/24 (898352582 (estimated locally),0.84 per call) Clock_Ip_EnableSirc_TrustedCall/16 (1073741824 (estimated locally),9.35 per call) Clock_Ip_SetSirc_TrustedCall/15 (1073741824 (estimated locally),1.89 per call) SetInputSouceSytemClock/11 (1073741824 (estimated locally),9.35 per call) 
  Calls: 
Clock_Ip_StartTimeout/28 (Clock_Ip_StartTimeout) @06bdfa80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_EnableFirc_TrustedCall/25 (114863532 (estimated locally),0.20 per call) Clock_Ip_SetFirc_TrustedCall/24 (108662673 (estimated locally),0.10 per call) Clock_Ip_SetFirc_TrustedCall/24 (96101268 (estimated locally),0.09 per call) Clock_Ip_EnableSirc_TrustedCall/16 (114863532 (estimated locally),1.00 per call) Clock_Ip_SetSirc_TrustedCall/15 (114863532 (estimated locally),0.20 per call) SetInputSouceSytemClock/11 (114863532 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_axIntOscCallbacks/27 (Clock_Ip_axIntOscCallbacks) @068dc8b8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_InternalOscillatorEmpty/0 (addr)Clock_Ip_InternalOscillatorEmpty/0 (addr)Clock_Ip_InternalOscillatorEmpty_Disable/1 (addr)Clock_Ip_SetSirc/2 (addr)Clock_Ip_EnableSirc/3 (addr)Clock_Ip_DisableSirc/4 (addr)Clock_Ip_SetSircVlp/5 (addr)Clock_Ip_EnableSircVlp/6 (addr)Clock_Ip_DisableSircVlp/7 (addr)Clock_Ip_SetSircStop/8 (addr)Clock_Ip_EnableSircStop/9 (addr)Clock_Ip_DisableSircStop/10 (addr)Clock_Ip_SetFirc/12 (addr)Clock_Ip_EnableFirc/13 (addr)Clock_Ip_DisableFirc/14 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Clock_Ip_DisableFirc_TrustedCall/26 (Clock_Ip_DisableFirc_TrustedCall) @06bdf540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Clock_Ip_DisableFirc/14 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_EnableFirc_TrustedCall/25 (Clock_Ip_EnableFirc_TrustedCall) @06bdf2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:567507571 (estimated locally) body optimize_size
  Called by: Clock_Ip_EnableFirc/13 (1073741824 (estimated locally),1.00 per call) 
  Calls: Clock_Ip_EnableFirc_TrustedCall.part.0/38 (37904965 (estimated locally),0.07 per call) Clock_Ip_TimeoutExpired/29 (1073741824 (estimated locally),1.89 per call) Clock_Ip_StartTimeout/28 (114863532 (estimated locally),0.20 per call) 
Clock_Ip_SetFirc_TrustedCall/24 (Clock_Ip_SetFirc_TrustedCall) @06bd7c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Clock_Ip_SetFirc/12 (1073741824 (estimated locally),1.00 per call) 
  Calls: Clock_Ip_ReportClockErrors/30 (35858682 (estimated locally),0.03 per call) Clock_Ip_TimeoutExpired/29 (1015776324 (estimated locally),0.95 per call) Clock_Ip_StartTimeout/28 (108662673 (estimated locally),0.10 per call) Clock_Ip_DisableSirc_TrustedCall/17 (31713418 (estimated locally),0.03 per call) SetInputSouceSytemClock/11 (96101267 (estimated locally),0.09 per call) Clock_Ip_ReportClockErrors/30 (31713418 (estimated locally),0.03 per call) Clock_Ip_TimeoutExpired/29 (898352582 (estimated locally),0.84 per call) Clock_Ip_StartTimeout/28 (96101268 (estimated locally),0.09 per call) SetInputSouceSytemClock/11 (474808635 (estimated locally),0.44 per call) Clock_Ip_SetSirc_TrustedCall/15 (156686850 (estimated locally),0.15 per call) 
Clock_Ip_DisableSircStop_TrustedCall/23 (Clock_Ip_DisableSircStop_TrustedCall) @06bd7b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Clock_Ip_DisableSircStop/10 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_EnableSircStop_TrustedCall/22 (Clock_Ip_EnableSircStop_TrustedCall) @06bd78c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Clock_Ip_EnableSircStop/9 (1073741824 (estimated locally),1.00 per call) 
  Calls: Clock_Ip_EnableSircStop_TrustedCall.part.0/35 (365072224 (estimated locally),0.34 per call) 
Clock_Ip_SetSircStop_TrustedCall/21 (Clock_Ip_SetSircStop_TrustedCall) @06bd7540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Clock_Ip_SetSircStop/8 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_DisableSircVlp_TrustedCall/20 (Clock_Ip_DisableSircVlp_TrustedCall) @06bd71c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Clock_Ip_DisableSircVlp/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_EnableSircVlp_TrustedCall/19 (Clock_Ip_EnableSircVlp_TrustedCall) @068ded20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Clock_Ip_EnableSircVlp/6 (1073741824 (estimated locally),1.00 per call) 
  Calls: Clock_Ip_EnableSircVlp_TrustedCall.part.0/34 (365072224 (estimated locally),0.34 per call) 
Clock_Ip_SetSircVlp_TrustedCall/18 (Clock_Ip_SetSircVlp_TrustedCall) @068de0e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Clock_Ip_SetSircVlp/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_DisableSirc_TrustedCall/17 (Clock_Ip_DisableSirc_TrustedCall) @068dec40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Clock_Ip_SetFirc_TrustedCall/24 (31713418 (estimated locally),0.03 per call) Clock_Ip_DisableSirc/4 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_EnableSirc_TrustedCall/16 (Clock_Ip_EnableSirc_TrustedCall) @068de9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:114863532 (estimated locally) body optimize_size
  Called by: Clock_Ip_EnableSirc/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: Clock_Ip_EnableSirc_TrustedCall.part.0/33 (37904965 (estimated locally),0.33 per call) Clock_Ip_TimeoutExpired/29 (1073741824 (estimated locally),9.35 per call) Clock_Ip_StartTimeout/28 (114863532 (estimated locally),1.00 per call) 
Clock_Ip_SetSirc_TrustedCall/15 (Clock_Ip_SetSirc_TrustedCall) @068de540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:567507571 (estimated locally) body optimize_size
  Called by: Clock_Ip_SetFirc_TrustedCall/24 (156686850 (estimated locally),0.15 per call) Clock_Ip_SetSirc/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: Clock_Ip_ReportClockErrors/30 (37904965 (estimated locally),0.07 per call) Clock_Ip_TimeoutExpired/29 (1073741824 (estimated locally),1.89 per call) Clock_Ip_StartTimeout/28 (114863532 (estimated locally),0.20 per call) 
Clock_Ip_DisableFirc/14 (Clock_Ip_DisableFirc) @068de000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axIntOscCallbacks/27 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_DisableFirc_TrustedCall/26 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_EnableFirc/13 (Clock_Ip_EnableFirc) @068db7e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axIntOscCallbacks/27 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_EnableFirc_TrustedCall/25 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_SetFirc/12 (Clock_Ip_SetFirc) @068db2a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axIntOscCallbacks/27 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_SetFirc_TrustedCall/24 (1073741824 (estimated locally),1.00 per call) 
SetInputSouceSytemClock/11 (SetInputSouceSytemClock) @068dbee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:114863532 (estimated locally) body local optimize_size
  Called by: Clock_Ip_SetFirc_TrustedCall/24 (96101267 (estimated locally),0.09 per call) Clock_Ip_SetFirc_TrustedCall/24 (474808635 (estimated locally),0.44 per call) 
  Calls: SetInputSouceSytemClock.part.0/32 (37904965 (estimated locally),0.33 per call) Clock_Ip_TimeoutExpired/29 (1073741824 (estimated locally),9.35 per call) Clock_Ip_StartTimeout/28 (114863532 (estimated locally),1.00 per call) 
Clock_Ip_DisableSircStop/10 (Clock_Ip_DisableSircStop) @068dbc40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axIntOscCallbacks/27 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_DisableSircStop_TrustedCall/23 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_EnableSircStop/9 (Clock_Ip_EnableSircStop) @068db9a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axIntOscCallbacks/27 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_EnableSircStop_TrustedCall/22 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_SetSircStop/8 (Clock_Ip_SetSircStop) @068db700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axIntOscCallbacks/27 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_SetSircStop_TrustedCall/21 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_DisableSircVlp/7 (Clock_Ip_DisableSircVlp) @068db460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axIntOscCallbacks/27 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_DisableSircVlp_TrustedCall/20 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_EnableSircVlp/6 (Clock_Ip_EnableSircVlp) @068db1c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axIntOscCallbacks/27 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_EnableSircVlp_TrustedCall/19 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_SetSircVlp/5 (Clock_Ip_SetSircVlp) @068d6d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axIntOscCallbacks/27 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_SetSircVlp_TrustedCall/18 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_DisableSirc/4 (Clock_Ip_DisableSirc) @068d67e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axIntOscCallbacks/27 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_DisableSirc_TrustedCall/17 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_EnableSirc/3 (Clock_Ip_EnableSirc) @068d6ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axIntOscCallbacks/27 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_EnableSirc_TrustedCall/16 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_SetSirc/2 (Clock_Ip_SetSirc) @068d6c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axIntOscCallbacks/27 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_SetSirc_TrustedCall/15 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_InternalOscillatorEmpty_Disable/1 (Clock_Ip_InternalOscillatorEmpty_Disable) @068d69a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axIntOscCallbacks/27 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_InternalOscillatorEmpty/0 (Clock_Ip_InternalOscillatorEmpty) @068d6700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axIntOscCallbacks/27 (addr)Clock_Ip_axIntOscCallbacks/27 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function Clock_Ip_InternalOscillatorEmpty (Clock_Ip_InternalOscillatorEmpty, funcdef_no=0, decl_uid=6080, cgraph_uid=1, symbol_order=0)

Modification phase of node Clock_Ip_InternalOscillatorEmpty/0
Clock_Ip_InternalOscillatorEmpty (const struct Clock_Ip_IrcoscConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Clock_Ip_InternalOscillatorEmpty_Disable (Clock_Ip_InternalOscillatorEmpty_Disable, funcdef_no=1, decl_uid=6082, cgraph_uid=2, symbol_order=1)

Modification phase of node Clock_Ip_InternalOscillatorEmpty_Disable/1
Clock_Ip_InternalOscillatorEmpty_Disable (Clock_Ip_NameType Name)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function SetInputSouceSytemClock (SetInputSouceSytemClock, funcdef_no=11, decl_uid=6141, cgraph_uid=12, symbol_order=11)

Modification phase of node SetInputSouceSytemClock/11
Adjusting mask for param 0 to 0x1
Setting value range of param 0 [2, 3]
SetInputSouceSytemClock (uint32 SourceClock)
{
  uint32 TimeoutTicks;
  uint32 ElapsedTime;
  uint32 StartTime;
  boolean TimeoutOccurred;
  uint32 RegValue;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int TimeoutTicks.4_7;

  <bb 2> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG TimeoutOccurred => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  RegValue_11 ={v} MEM[(struct SCG_Type *)1074151424B].RCCR;
  # DEBUG RegValue => RegValue_11
  # DEBUG BEGIN_STMT
  RegValue_12 = RegValue_11 & 4043309055;
  # DEBUG RegValue => RegValue_12
  # DEBUG BEGIN_STMT
  _1 = SourceClock_13(D) << 24;
  RegValue_14 = _1 | RegValue_12;
  # DEBUG RegValue => RegValue_14
  # DEBUG BEGIN_STMT
  MEM[(struct SCG_Type *)1074151424B].RCCR ={v} RegValue_14;
  # DEBUG BEGIN_STMT
  Clock_Ip_StartTimeout (&StartTime, &ElapsedTime, &TimeoutTicks, 50000);

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 ={v} MEM[(struct SCG_Type *)1074151424B].CSR;
  _3 = _2 >> 24;
  _4 = _3 & 15;
  # DEBUG D#1 => _4 == SourceClock_13(D)
  # DEBUG ScsStatus => (uint32) D#1
  # DEBUG BEGIN_STMT
  TimeoutTicks.4_7 = TimeoutTicks;
  TimeoutOccurred_18 = Clock_Ip_TimeoutExpired (&StartTime, &ElapsedTime, TimeoutTicks.4_7);
  # DEBUG TimeoutOccurred => TimeoutOccurred_18
  # DEBUG BEGIN_STMT
  if (_4 != SourceClock_13(D))
    goto <bb 4>; [94.50%]
  else
    goto <bb 5>; [5.50%]

  <bb 4> [local count: 1014686025]:
  if (TimeoutOccurred_18 != 0)
    goto <bb 5>; [5.50%]
  else
    goto <bb 8>; [94.50%]

  <bb 8> [local count: 958878294]:
  goto <bb 3>; [100.00%]

  <bb 5> [local count: 114863532]:
  # TimeoutOccurred_9 = PHI <TimeoutOccurred_18(3), TimeoutOccurred_18(4)>
  # DEBUG BEGIN_STMT
  if (TimeoutOccurred_9 != 0)
    goto <bb 6>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 6> [local count: 37904965]:
  # DEBUG D#2 => SourceClock_13(D)
  SetInputSouceSytemClock.part.0 ();

  <bb 7> [local count: 114863532]:
  StartTime ={v} {CLOBBER};
  ElapsedTime ={v} {CLOBBER};
  TimeoutTicks ={v} {CLOBBER};
  return;

}



;; Function Clock_Ip_SetSirc_TrustedCall (Clock_Ip_SetSirc_TrustedCall, funcdef_no=15, decl_uid=6056, cgraph_uid=16, symbol_order=15)

Modification phase of node Clock_Ip_SetSirc_TrustedCall/15
Clock_Ip_SetSirc_TrustedCall (const struct Clock_Ip_IrcoscConfigType * Config)
{
  unsigned char SircConfig$LowPowerModeEnable;
  unsigned char SircConfig$Range;
  short unsigned int SircConfig$Enable;
  unsigned int SircConfig;
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
  long unsigned int TimeoutTicks.0_26;
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
  if (Config_30(D) == 0B)
    goto <bb 4>; [30.00%]
  else
    goto <bb 3>; [70.00%]

  <bb 3> [local count: 397255299]:
  # DEBUG BEGIN_STMT
  _1 = Config_30(D)->Name;
  # DEBUG SircConfig => _1
  # DEBUG BEGIN_STMT
  _2 = Config_30(D)->Range;
  # DEBUG SircConfig$Range => _2
  # DEBUG BEGIN_STMT
  _3 = Config_30(D)->Enable;
  # DEBUG SircConfig$Enable => _3
  # DEBUG BEGIN_STMT
  _4 = Config_30(D)->LowPowerModeEnable;
  # DEBUG SircConfig$LowPowerModeEnable => _4

  <bb 4> [local count: 567507571]:
  # SircConfig_5 = PHI <5(2), _1(3)>
  # SircConfig$Enable_7 = PHI <1(2), _3(3)>
  # SircConfig$Range_9 = PHI <1(2), _2(3)>
  # SircConfig$LowPowerModeEnable_11 = PHI <1(2), _4(3)>
  # DEBUG SircConfig$LowPowerModeEnable => SircConfig$LowPowerModeEnable_11
  # DEBUG SircConfig$Range => SircConfig$Range_9
  # DEBUG SircConfig$Enable => SircConfig$Enable_7
  # DEBUG SircConfig => SircConfig_5
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
  if (SircConfig$Enable_7 == 1)
    goto <bb 5>; [20.24%]
  else
    goto <bb 10>; [79.76%]

  <bb 5> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  _29 = SircConfig$Range_9 & 1;
  _16 = (long unsigned int) _29;
  MEM[(struct SCG_Type *)1074151424B].SIRCCFG ={v} _16;
  # DEBUG BEGIN_STMT
  _17 ={v} MEM[(struct SCG_Type *)1074151424B].SIRCCSR;
  _18 = _17 | 1;
  MEM[(struct SCG_Type *)1074151424B].SIRCCSR ={v} _18;
  # DEBUG BEGIN_STMT
  _19 ={v} MEM[(struct SCG_Type *)1074151424B].SIRCCSR;
  _20 = (long unsigned int) SircConfig$LowPowerModeEnable_11;
  _21 = _20 << 2;
  _22 = _21 & 4;
  _23 = _19 | _22;
  MEM[(struct SCG_Type *)1074151424B].SIRCCSR ={v} _23;
  # DEBUG BEGIN_STMT
  Clock_Ip_StartTimeout (&StartTime, &ElapsedTime, &TimeoutTicks, 50000);

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _24 ={v} MEM[(struct SCG_Type *)1074151424B].SIRCCSR;
  _25 = _24 >> 24;
  IrcoscStatus_39 = _25 & 1;
  # DEBUG IrcoscStatus => IrcoscStatus_39
  # DEBUG BEGIN_STMT
  TimeoutTicks.0_26 = TimeoutTicks;
  TimeoutOccurred_41 = Clock_Ip_TimeoutExpired (&StartTime, &ElapsedTime, TimeoutTicks.0_26);
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
  Clock_Ip_ReportClockErrors (1, SircConfig_5);

  <bb 10> [local count: 567507571]:
  StartTime ={v} {CLOBBER};
  ElapsedTime ={v} {CLOBBER};
  TimeoutTicks ={v} {CLOBBER};
  return;

}



;; Function Clock_Ip_SetSirc (Clock_Ip_SetSirc, funcdef_no=2, decl_uid=6084, cgraph_uid=3, symbol_order=2)

Modification phase of node Clock_Ip_SetSirc/2
Clock_Ip_SetSirc (const struct Clock_Ip_IrcoscConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Clock_Ip_SetSirc_TrustedCall (Config_2(D));
  return;

}



;; Function Clock_Ip_EnableSirc_TrustedCall (Clock_Ip_EnableSirc_TrustedCall, funcdef_no=16, decl_uid=6058, cgraph_uid=17, symbol_order=16)

Modification phase of node Clock_Ip_EnableSirc_TrustedCall/16
Clock_Ip_EnableSirc_TrustedCall (const struct Clock_Ip_IrcoscConfigType * Config)
{
  uint32 IrcoscStatus;
  uint32 TimeoutTicks;
  uint32 ElapsedTime;
  uint32 StartTime;
  boolean TimeoutOccurred;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int TimeoutTicks.1_8;

  <bb 2> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  # DEBUG TimeoutOccurred => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 ={v} MEM[(struct SCG_Type *)1074151424B].SIRCCSR;
  _3 = _2 | 1;
  MEM[(struct SCG_Type *)1074151424B].SIRCCSR ={v} _3;
  # DEBUG BEGIN_STMT
  _4 ={v} MEM[(struct SCG_Type *)1074151424B].SIRCCSR;
  _5 = _4 | 4;
  MEM[(struct SCG_Type *)1074151424B].SIRCCSR ={v} _5;
  # DEBUG BEGIN_STMT
  Clock_Ip_StartTimeout (&StartTime, &ElapsedTime, &TimeoutTicks, 50000);

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _6 ={v} MEM[(struct SCG_Type *)1074151424B].SIRCCSR;
  _7 = _6 >> 24;
  IrcoscStatus_16 = _7 & 1;
  # DEBUG IrcoscStatus => IrcoscStatus_16
  # DEBUG BEGIN_STMT
  TimeoutTicks.1_8 = TimeoutTicks;
  TimeoutOccurred_18 = Clock_Ip_TimeoutExpired (&StartTime, &ElapsedTime, TimeoutTicks.1_8);
  # DEBUG TimeoutOccurred => TimeoutOccurred_18
  # DEBUG BEGIN_STMT
  if (IrcoscStatus_16 == 0)
    goto <bb 4>; [94.50%]
  else
    goto <bb 5>; [5.50%]

  <bb 4> [local count: 1014686025]:
  if (TimeoutOccurred_18 != 0)
    goto <bb 5>; [5.50%]
  else
    goto <bb 8>; [94.50%]

  <bb 8> [local count: 958878294]:
  goto <bb 3>; [100.00%]

  <bb 5> [local count: 114863532]:
  # TimeoutOccurred_11 = PHI <TimeoutOccurred_18(3), TimeoutOccurred_18(4)>
  # DEBUG BEGIN_STMT
  if (TimeoutOccurred_11 != 0)
    goto <bb 6>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 6> [local count: 37904965]:
  Clock_Ip_EnableSirc_TrustedCall.part.0 (Config_19(D));

  <bb 7> [local count: 114863532]:
  StartTime ={v} {CLOBBER};
  ElapsedTime ={v} {CLOBBER};
  TimeoutTicks ={v} {CLOBBER};
  return;

}



;; Function Clock_Ip_EnableSirc (Clock_Ip_EnableSirc, funcdef_no=3, decl_uid=6086, cgraph_uid=4, symbol_order=3)

Modification phase of node Clock_Ip_EnableSirc/3
Clock_Ip_EnableSirc (const struct Clock_Ip_IrcoscConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Clock_Ip_EnableSirc_TrustedCall (Config_2(D));
  return;

}



;; Function Clock_Ip_DisableSirc_TrustedCall (Clock_Ip_DisableSirc_TrustedCall, funcdef_no=17, decl_uid=6060, cgraph_uid=18, symbol_order=17)

Modification phase of node Clock_Ip_DisableSirc_TrustedCall/17
Clock_Ip_DisableSirc_TrustedCall (Clock_Ip_NameType Name)
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;

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



;; Function Clock_Ip_DisableSirc (Clock_Ip_DisableSirc, funcdef_no=4, decl_uid=6088, cgraph_uid=5, symbol_order=4)

Modification phase of node Clock_Ip_DisableSirc/4
Clock_Ip_DisableSirc (Clock_Ip_NameType Name)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Clock_Ip_DisableSirc_TrustedCall (Name_2(D));
  return;

}



;; Function Clock_Ip_SetSircVlp_TrustedCall (Clock_Ip_SetSircVlp_TrustedCall, funcdef_no=18, decl_uid=6062, cgraph_uid=19, symbol_order=18)

Modification phase of node Clock_Ip_SetSircVlp_TrustedCall/18
Clock_Ip_SetSircVlp_TrustedCall (const struct Clock_Ip_IrcoscConfigType * Config)
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  unsigned char _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SCG_Type *)1074151424B].SIRCCSR;
  _2 = _1 & 4286578687;
  MEM[(struct SCG_Type *)1074151424B].SIRCCSR ={v} _2;
  # DEBUG BEGIN_STMT
  _3 ={v} MEM[(struct SCG_Type *)1074151424B].SIRCCSR;
  _4 = _3 & 4294967291;
  MEM[(struct SCG_Type *)1074151424B].SIRCCSR ={v} _4;
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct SCG_Type *)1074151424B].SIRCCSR;
  _6 = Config_14(D)->LowPowerModeEnable;
  _7 = (long unsigned int) _6;
  _8 = _7 << 2;
  _9 = _8 & 4;
  _10 = _5 | _9;
  MEM[(struct SCG_Type *)1074151424B].SIRCCSR ={v} _10;
  return;

}



;; Function Clock_Ip_SetSircVlp (Clock_Ip_SetSircVlp, funcdef_no=5, decl_uid=6090, cgraph_uid=6, symbol_order=5)

Modification phase of node Clock_Ip_SetSircVlp/5
Clock_Ip_SetSircVlp (const struct Clock_Ip_IrcoscConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Clock_Ip_SetSircVlp_TrustedCall (Config_2(D));
  return;

}



;; Function Clock_Ip_EnableSircVlp_TrustedCall (Clock_Ip_EnableSircVlp_TrustedCall, funcdef_no=19, decl_uid=6064, cgraph_uid=20, symbol_order=19)

Modification phase of node Clock_Ip_EnableSircVlp_TrustedCall/19
Clock_Ip_EnableSircVlp_TrustedCall (const struct Clock_Ip_IrcoscConfigType * Config)
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
  # DEBUG D#4 => Config_5(D)
  Clock_Ip_EnableSircVlp_TrustedCall.part.0 ();

  <bb 4> [local count: 1073741824]:
  return;

}



;; Function Clock_Ip_EnableSircVlp (Clock_Ip_EnableSircVlp, funcdef_no=6, decl_uid=6092, cgraph_uid=7, symbol_order=6)

Modification phase of node Clock_Ip_EnableSircVlp/6
Clock_Ip_EnableSircVlp (const struct Clock_Ip_IrcoscConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Clock_Ip_EnableSircVlp_TrustedCall (Config_2(D));
  return;

}



;; Function Clock_Ip_DisableSircVlp_TrustedCall (Clock_Ip_DisableSircVlp_TrustedCall, funcdef_no=20, decl_uid=6066, cgraph_uid=21, symbol_order=20)

Modification phase of node Clock_Ip_DisableSircVlp_TrustedCall/20
Clock_Ip_DisableSircVlp_TrustedCall (Clock_Ip_NameType Name)
{
  long unsigned int _1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SCG_Type *)1074151424B].SIRCCSR;
  _2 = _1 & 4294967291;
  MEM[(struct SCG_Type *)1074151424B].SIRCCSR ={v} _2;
  return;

}



;; Function Clock_Ip_DisableSircVlp (Clock_Ip_DisableSircVlp, funcdef_no=7, decl_uid=6094, cgraph_uid=8, symbol_order=7)

Modification phase of node Clock_Ip_DisableSircVlp/7
Clock_Ip_DisableSircVlp (Clock_Ip_NameType Name)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Clock_Ip_DisableSircVlp_TrustedCall (Name_2(D));
  return;

}



;; Function Clock_Ip_SetSircStop_TrustedCall (Clock_Ip_SetSircStop_TrustedCall, funcdef_no=21, decl_uid=6068, cgraph_uid=22, symbol_order=21)

Modification phase of node Clock_Ip_SetSircStop_TrustedCall/21
Clock_Ip_SetSircStop_TrustedCall (const struct Clock_Ip_IrcoscConfigType * Config)
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  unsigned char _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SCG_Type *)1074151424B].SIRCCSR;
  _2 = _1 & 4286578687;
  MEM[(struct SCG_Type *)1074151424B].SIRCCSR ={v} _2;
  # DEBUG BEGIN_STMT
  _3 ={v} MEM[(struct SCG_Type *)1074151424B].SIRCCSR;
  _4 = _3 & 4294967293;
  MEM[(struct SCG_Type *)1074151424B].SIRCCSR ={v} _4;
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct SCG_Type *)1074151424B].SIRCCSR;
  _6 = Config_14(D)->StopModeEnable;
  _7 = (long unsigned int) _6;
  _8 = _7 << 1;
  _9 = _8 & 2;
  _10 = _5 | _9;
  MEM[(struct SCG_Type *)1074151424B].SIRCCSR ={v} _10;
  return;

}



;; Function Clock_Ip_SetSircStop (Clock_Ip_SetSircStop, funcdef_no=8, decl_uid=6096, cgraph_uid=9, symbol_order=8)

Modification phase of node Clock_Ip_SetSircStop/8
Clock_Ip_SetSircStop (const struct Clock_Ip_IrcoscConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Clock_Ip_SetSircStop_TrustedCall (Config_2(D));
  return;

}



;; Function Clock_Ip_EnableSircStop_TrustedCall (Clock_Ip_EnableSircStop_TrustedCall, funcdef_no=22, decl_uid=6070, cgraph_uid=23, symbol_order=22)

Modification phase of node Clock_Ip_EnableSircStop_TrustedCall/22
Clock_Ip_EnableSircStop_TrustedCall (const struct Clock_Ip_IrcoscConfigType * Config)
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
  # DEBUG D#6 => Config_5(D)
  Clock_Ip_EnableSircStop_TrustedCall.part.0 ();

  <bb 4> [local count: 1073741824]:
  return;

}



;; Function Clock_Ip_EnableSircStop (Clock_Ip_EnableSircStop, funcdef_no=9, decl_uid=6098, cgraph_uid=10, symbol_order=9)

Modification phase of node Clock_Ip_EnableSircStop/9
Clock_Ip_EnableSircStop (const struct Clock_Ip_IrcoscConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Clock_Ip_EnableSircStop_TrustedCall (Config_2(D));
  return;

}



;; Function Clock_Ip_DisableSircStop_TrustedCall (Clock_Ip_DisableSircStop_TrustedCall, funcdef_no=23, decl_uid=6072, cgraph_uid=24, symbol_order=23)

Modification phase of node Clock_Ip_DisableSircStop_TrustedCall/23
Clock_Ip_DisableSircStop_TrustedCall (Clock_Ip_NameType Name)
{
  long unsigned int _1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SCG_Type *)1074151424B].SIRCCSR;
  _2 = _1 & 4294967293;
  MEM[(struct SCG_Type *)1074151424B].SIRCCSR ={v} _2;
  return;

}



;; Function Clock_Ip_DisableSircStop (Clock_Ip_DisableSircStop, funcdef_no=10, decl_uid=6100, cgraph_uid=11, symbol_order=10)

Modification phase of node Clock_Ip_DisableSircStop/10
Clock_Ip_DisableSircStop (Clock_Ip_NameType Name)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Clock_Ip_DisableSircStop_TrustedCall (Name_2(D));
  return;

}



;; Function Clock_Ip_SetFirc_TrustedCall (Clock_Ip_SetFirc_TrustedCall, funcdef_no=24, decl_uid=6074, cgraph_uid=25, symbol_order=24)

Modification phase of node Clock_Ip_SetFirc_TrustedCall/24
Clock_Ip_SetFirc_TrustedCall (const struct Clock_Ip_IrcoscConfigType * Config)
{
  uint32 IrcoscStatus;
  uint32 TimeoutTicks;
  uint32 ElapsedTime;
  uint32 StartTime;
  boolean SircWasDisabled;
  boolean TimeoutOccurred;
  long unsigned int _2;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  unsigned char _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  unsigned char _11;
  long unsigned int _12;
  long unsigned int _13;
  long unsigned int _14;
  long unsigned int _15;
  long unsigned int _16;
  long unsigned int _17;
  long unsigned int _18;
  long unsigned int _19;
  short unsigned int _20;
  unsigned char _21;
  long unsigned int _22;
  long unsigned int _23;
  unsigned char _24;
  long unsigned int _25;
  long unsigned int _26;
  long unsigned int _27;
  long unsigned int _28;
  long unsigned int _29;
  long unsigned int _30;
  long unsigned int _31;
  long unsigned int TimeoutTicks.2_32;
  <unnamed type> _33;
  long unsigned int _34;
  long unsigned int _35;
  short unsigned int _36;
  unsigned char _37;
  long unsigned int _38;
  long unsigned int _39;
  unsigned char _40;
  long unsigned int _41;
  long unsigned int _42;
  long unsigned int _43;
  long unsigned int _44;
  long unsigned int _45;
  long unsigned int _46;
  long unsigned int _47;
  long unsigned int TimeoutTicks.3_48;
  <unnamed type> _49;
  unsigned char _58;
  unsigned char _59;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG D#9 => Config_57(D)->Name
  # DEBUG D#8 => Clock_Ip_au8ClockFeatures[D#9][0]
  # DEBUG Instance => (uint32) D#8
  # DEBUG BEGIN_STMT
  # DEBUG TimeoutOccurred => 0
  # DEBUG BEGIN_STMT
  # DEBUG SircWasDisabled => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 ={v} MEM[(struct SCG_Type *)1074151424B].FIRCCSR;
  _4 = _2 & 4286578687;
  MEM[(struct SCG_Type *)1074151424B].FIRCCSR ={v} _4;
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct SCG_Type *)1074151424B].FIRCCSR;
  _6 = _5 & 33554432;
  if (_6 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _7 = Config_57(D)->Range;
  _8 = (long unsigned int) _7;
  _9 ={v} MEM[(struct SCG_Type *)1074151424B].FIRCCFG;
  _10 = _9 & 3;
  if (_8 != _10)
    goto <bb 5>; [66.00%]
  else
    goto <bb 4>; [34.00%]

  <bb 4> [local count: 182536110]:
  _11 = Config_57(D)->Regulator;
  _12 = (long unsigned int) _11;
  _13 ={v} MEM[(struct SCG_Type *)1074151424B].FIRCCSR;
  _14 = _13 >> 3;
  _15 = _14 & 1;
  if (_12 != _15)
    goto <bb 5>; [66.00%]
  else
    goto <bb 21>; [34.00%]

  <bb 5> [local count: 474808635]:
  # DEBUG BEGIN_STMT
  _16 ={v} MEM[(struct SCG_Type *)1074151424B].SIRCCSR;
  _17 = _16 & 1;
  if (_17 == 0)
    goto <bb 6>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 6> [local count: 156686850]:
  # DEBUG BEGIN_STMT
  # DEBUG SircWasDisabled => 1
  # DEBUG BEGIN_STMT
  # DEBUG Config => 0B
  # DEBUG INLINE_ENTRY Clock_Ip_SetSirc
  # DEBUG BEGIN_STMT
  Clock_Ip_SetSirc_TrustedCall (0B);

  <bb 7> [local count: 474808635]:
  # SircWasDisabled_50 = PHI <0(5), 1(6)>
  # DEBUG Config => NULL
  # DEBUG SircWasDisabled => SircWasDisabled_50
  # DEBUG BEGIN_STMT
  SetInputSouceSytemClock (2);
  # DEBUG BEGIN_STMT
  _18 ={v} MEM[(struct SCG_Type *)1074151424B].FIRCCSR;
  _19 = _18 & 4294967294;
  MEM[(struct SCG_Type *)1074151424B].FIRCCSR ={v} _19;
  # DEBUG BEGIN_STMT
  _20 = Config_57(D)->Enable;
  if (_20 == 1)
    goto <bb 8>; [20.24%]
  else
    goto <bb 21>; [79.76%]

  <bb 8> [local count: 96101268]:
  # DEBUG BEGIN_STMT
  _21 = Config_57(D)->Range;
  _59 = _21 & 3;
  _22 = (long unsigned int) _59;
  MEM[(struct SCG_Type *)1074151424B].FIRCCFG ={v} _22;
  # DEBUG BEGIN_STMT
  _23 ={v} MEM[(struct SCG_Type *)1074151424B].FIRCCSR;
  _24 = Config_57(D)->Regulator;
  _25 = (long unsigned int) _24;
  _26 = _25 << 3;
  _27 = _26 & 8;
  _28 = _23 | _27;
  _29 = _28 | 1;
  MEM[(struct SCG_Type *)1074151424B].FIRCCSR ={v} _29;
  # DEBUG BEGIN_STMT
  Clock_Ip_StartTimeout (&StartTime, &ElapsedTime, &TimeoutTicks, 50000);

  <bb 9> [local count: 898352582]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _30 ={v} MEM[(struct SCG_Type *)1074151424B].FIRCCSR;
  _31 = _30 >> 24;
  IrcoscStatus_74 = _31 & 1;
  # DEBUG IrcoscStatus => IrcoscStatus_74
  # DEBUG BEGIN_STMT
  TimeoutTicks.2_32 = TimeoutTicks;
  TimeoutOccurred_76 = Clock_Ip_TimeoutExpired (&StartTime, &ElapsedTime, TimeoutTicks.2_32);
  # DEBUG TimeoutOccurred => TimeoutOccurred_76
  # DEBUG BEGIN_STMT
  if (IrcoscStatus_74 == 0)
    goto <bb 10>; [94.50%]
  else
    goto <bb 11>; [5.50%]

  <bb 10> [local count: 848943190]:
  if (TimeoutOccurred_76 != 0)
    goto <bb 11>; [5.50%]
  else
    goto <bb 22>; [94.50%]

  <bb 22> [local count: 802251315]:
  goto <bb 9>; [100.00%]

  <bb 11> [local count: 96101267]:
  # TimeoutOccurred_3 = PHI <TimeoutOccurred_76(9), TimeoutOccurred_76(10)>
  # DEBUG BEGIN_STMT
  if (TimeoutOccurred_3 != 0)
    goto <bb 12>; [33.00%]
  else
    goto <bb 13>; [67.00%]

  <bb 12> [local count: 31713418]:
  # DEBUG BEGIN_STMT
  _33 = Config_57(D)->Name;
  Clock_Ip_ReportClockErrors (1, _33);

  <bb 13> [local count: 96101267]:
  # DEBUG BEGIN_STMT
  SetInputSouceSytemClock (3);
  # DEBUG BEGIN_STMT
  if (SircWasDisabled_50 != 0)
    goto <bb 14>; [33.00%]
  else
    goto <bb 21>; [67.00%]

  <bb 14> [local count: 31713418]:
  # DEBUG BEGIN_STMT
  # DEBUG Name => 2
  # DEBUG INLINE_ENTRY Clock_Ip_DisableSirc
  # DEBUG BEGIN_STMT
  Clock_Ip_DisableSirc_TrustedCall (2);
  goto <bb 21>; [100.00%]

  <bb 15> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _34 ={v} MEM[(struct SCG_Type *)1074151424B].FIRCCSR;
  _35 = _34 & 4294967294;
  MEM[(struct SCG_Type *)1074151424B].FIRCCSR ={v} _35;
  # DEBUG BEGIN_STMT
  _36 = Config_57(D)->Enable;
  if (_36 == 1)
    goto <bb 16>; [20.24%]
  else
    goto <bb 21>; [79.76%]

  <bb 16> [local count: 108662673]:
  # DEBUG BEGIN_STMT
  _37 = Config_57(D)->Range;
  _58 = _37 & 3;
  _38 = (long unsigned int) _58;
  MEM[(struct SCG_Type *)1074151424B].FIRCCFG ={v} _38;
  # DEBUG BEGIN_STMT
  _39 ={v} MEM[(struct SCG_Type *)1074151424B].FIRCCSR;
  _40 = Config_57(D)->Regulator;
  _41 = (long unsigned int) _40;
  _42 = _41 << 3;
  _43 = _42 & 8;
  _44 = _39 | _43;
  _45 = _44 | 1;
  MEM[(struct SCG_Type *)1074151424B].FIRCCSR ={v} _45;
  # DEBUG BEGIN_STMT
  Clock_Ip_StartTimeout (&StartTime, &ElapsedTime, &TimeoutTicks, 50000);

  <bb 17> [local count: 1015776324]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _46 ={v} MEM[(struct SCG_Type *)1074151424B].FIRCCSR;
  _47 = _46 >> 24;
  IrcoscStatus_65 = _47 & 1;
  # DEBUG IrcoscStatus => IrcoscStatus_65
  # DEBUG BEGIN_STMT
  TimeoutTicks.3_48 = TimeoutTicks;
  TimeoutOccurred_67 = Clock_Ip_TimeoutExpired (&StartTime, &ElapsedTime, TimeoutTicks.3_48);
  # DEBUG TimeoutOccurred => TimeoutOccurred_67
  # DEBUG BEGIN_STMT
  if (IrcoscStatus_65 == 0)
    goto <bb 18>; [94.50%]
  else
    goto <bb 19>; [5.50%]

  <bb 18> [local count: 959908626]:
  if (TimeoutOccurred_67 != 0)
    goto <bb 19>; [5.50%]
  else
    goto <bb 23>; [94.50%]

  <bb 23> [local count: 907113651]:
  goto <bb 17>; [100.00%]

  <bb 19> [local count: 108662672]:
  # TimeoutOccurred_1 = PHI <TimeoutOccurred_67(17), TimeoutOccurred_67(18)>
  # DEBUG BEGIN_STMT
  if (TimeoutOccurred_1 != 0)
    goto <bb 20>; [33.00%]
  else
    goto <bb 21>; [67.00%]

  <bb 20> [local count: 35858682]:
  # DEBUG BEGIN_STMT
  _49 = Config_57(D)->Name;
  Clock_Ip_ReportClockErrors (1, _49);

  <bb 21> [local count: 1073741823]:
  # DEBUG Name => NULL
  StartTime ={v} {CLOBBER};
  ElapsedTime ={v} {CLOBBER};
  TimeoutTicks ={v} {CLOBBER};
  return;

}



;; Function Clock_Ip_SetFirc (Clock_Ip_SetFirc, funcdef_no=12, decl_uid=6102, cgraph_uid=13, symbol_order=12)

Modification phase of node Clock_Ip_SetFirc/12
Clock_Ip_SetFirc (const struct Clock_Ip_IrcoscConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Clock_Ip_SetFirc_TrustedCall (Config_2(D));
  return;

}



;; Function Clock_Ip_EnableFirc_TrustedCall (Clock_Ip_EnableFirc_TrustedCall, funcdef_no=25, decl_uid=6076, cgraph_uid=26, symbol_order=25)

Modification phase of node Clock_Ip_EnableFirc_TrustedCall/25
Clock_Ip_EnableFirc_TrustedCall (const struct Clock_Ip_IrcoscConfigType * Config)
{
  uint32 IrcoscStatus;
  uint32 TimeoutTicks;
  uint32 ElapsedTime;
  uint32 StartTime;
  boolean TimeoutOccurred;
  short unsigned int _1;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int TimeoutTicks.5_7;

  <bb 2> [local count: 567507571]:
  # DEBUG BEGIN_STMT
  # DEBUG TimeoutOccurred => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Config_12(D)->Enable;
  if (_1 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 8>; [79.76%]

  <bb 3> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  _3 ={v} MEM[(struct SCG_Type *)1074151424B].FIRCCSR;
  _4 = _3 | 1;
  MEM[(struct SCG_Type *)1074151424B].FIRCCSR ={v} _4;
  # DEBUG BEGIN_STMT
  Clock_Ip_StartTimeout (&StartTime, &ElapsedTime, &TimeoutTicks, 50000);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct SCG_Type *)1074151424B].FIRCCSR;
  _6 = _5 >> 24;
  IrcoscStatus_15 = _6 & 1;
  # DEBUG IrcoscStatus => IrcoscStatus_15
  # DEBUG BEGIN_STMT
  TimeoutTicks.5_7 = TimeoutTicks;
  TimeoutOccurred_17 = Clock_Ip_TimeoutExpired (&StartTime, &ElapsedTime, TimeoutTicks.5_7);
  # DEBUG TimeoutOccurred => TimeoutOccurred_17
  # DEBUG BEGIN_STMT
  if (IrcoscStatus_15 == 0)
    goto <bb 5>; [94.50%]
  else
    goto <bb 6>; [5.50%]

  <bb 5> [local count: 1014686025]:
  if (TimeoutOccurred_17 != 0)
    goto <bb 6>; [5.50%]
  else
    goto <bb 9>; [94.50%]

  <bb 9> [local count: 958878294]:
  goto <bb 4>; [100.00%]

  <bb 6> [local count: 114863532]:
  # TimeoutOccurred_10 = PHI <TimeoutOccurred_17(4), TimeoutOccurred_17(5)>
  # DEBUG BEGIN_STMT
  if (TimeoutOccurred_10 != 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 37904965]:
  Clock_Ip_EnableFirc_TrustedCall.part.0 (Config_12(D));

  <bb 8> [local count: 567507571]:
  StartTime ={v} {CLOBBER};
  ElapsedTime ={v} {CLOBBER};
  TimeoutTicks ={v} {CLOBBER};
  return;

}



;; Function Clock_Ip_EnableFirc (Clock_Ip_EnableFirc, funcdef_no=13, decl_uid=6104, cgraph_uid=14, symbol_order=13)

Modification phase of node Clock_Ip_EnableFirc/13
Clock_Ip_EnableFirc (const struct Clock_Ip_IrcoscConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Clock_Ip_EnableFirc_TrustedCall (Config_2(D));
  return;

}



;; Function Clock_Ip_DisableFirc_TrustedCall (Clock_Ip_DisableFirc_TrustedCall, funcdef_no=26, decl_uid=6078, cgraph_uid=27, symbol_order=26)

Modification phase of node Clock_Ip_DisableFirc_TrustedCall/26
Clock_Ip_DisableFirc_TrustedCall (Clock_Ip_NameType Name)
{
  long unsigned int _1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SCG_Type *)1074151424B].FIRCCSR;
  _2 = _1 & 4294967294;
  MEM[(struct SCG_Type *)1074151424B].FIRCCSR ={v} _2;
  return;

}



;; Function Clock_Ip_DisableFirc (Clock_Ip_DisableFirc, funcdef_no=14, decl_uid=6106, cgraph_uid=15, symbol_order=14)

Modification phase of node Clock_Ip_DisableFirc/14
Clock_Ip_DisableFirc (Clock_Ip_NameType Name)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Clock_Ip_DisableFirc_TrustedCall (Name_2(D));
  return;

}


