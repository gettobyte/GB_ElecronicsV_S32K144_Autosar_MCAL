
IPA constant propagation start:
Determining dynamic type for call: Flexio_Pwm_Ip_InitTimerPin (1074110464B, UserCfg_23(D));
  Starting walk at: Flexio_Pwm_Ip_InitTimerPin (1074110464B, UserCfg_23(D));
  instance pointer: 1074110464B  Outer instance pointer: 1074110464B offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:DevAssert (_11);
  Function call may change dynamic type:DevAssert (_7);
  Function call may change dynamic type:DevAssert (_5);
  Function call may change dynamic type:DevAssert (_2);
  Function call may change dynamic type:DevAssert (_1);
Determining dynamic type for call: Flexio_Pwm_Ip_InitTimerPin (1074110464B, UserCfg_23(D));
  Starting walk at: Flexio_Pwm_Ip_InitTimerPin (1074110464B, UserCfg_23(D));
  instance pointer: UserCfg_23(D)  Outer instance pointer: UserCfg_23(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:DevAssert (_11);
  Function call may change dynamic type:DevAssert (_7);
  Function call may change dynamic type:DevAssert (_5);
  Function call may change dynamic type:DevAssert (_2);
  Function call may change dynamic type:DevAssert (_1);
Determining dynamic type for call: Flexio_Pwm_Ip_SetTimerPin (Base_5(D), _1, _2);
  Starting walk at: Flexio_Pwm_Ip_SetTimerPin (Base_5(D), _1, _2);
  instance pointer: Base_5(D)  Outer instance pointer: Base_5(D) offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Flexio_Pwm_Ip_ResetTimerRegisters.isra.0/33:
  Jump functions of caller  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_34/27:
  Jump functions of caller  Flexio_Mcl_Ip_SetTimerInterrupt/26:
  Jump functions of caller  Flexio_Mcl_Ip_ClearTimerStatus/25:
  Jump functions of caller  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_34/24:
  Jump functions of caller  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_33/23:
  Jump functions of caller  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_33/22:
  Jump functions of caller  Flexio_Pwm_Ip_GetPeriod/21:
    callsite  Flexio_Pwm_Ip_GetPeriod/21 -> DevAssert/0 : 
       param 0: PASS THROUGH: 0, op eq_expr 0
         value: 0x0, mask: 0x1
         Unknown VR
    callsite  Flexio_Pwm_Ip_GetPeriod/21 -> DevAssert/0 : 
       param 0: PASS THROUGH: 1, op le_expr 3
         value: 0x0, mask: 0x1
         Unknown VR
  Jump functions of caller  Flexio_Pwm_Ip_UpdateInterruptMode/20:
    callsite  Flexio_Pwm_Ip_UpdateInterruptMode/20 -> DevAssert/0 : 
       param 0: PASS THROUGH: 0, op eq_expr 0
         value: 0x0, mask: 0x1
         Unknown VR
    callsite  Flexio_Pwm_Ip_UpdateInterruptMode/20 -> DevAssert/0 : 
       param 0: PASS THROUGH: 1, op le_expr 3
         value: 0x0, mask: 0x1
         Unknown VR
  Jump functions of caller  Flexio_Pwm_Ip_GetOutputState/19:
    callsite  Flexio_Pwm_Ip_GetOutputState/19 -> DevAssert/0 : 
       param 0: PASS THROUGH: 0, op eq_expr 0
         value: 0x0, mask: 0x1
         Unknown VR
    callsite  Flexio_Pwm_Ip_GetOutputState/19 -> DevAssert/0 : 
       param 0: PASS THROUGH: 1, op le_expr 3
         value: 0x0, mask: 0x1
         Unknown VR
  Jump functions of caller  Flexio_Pwm_Ip_UpdatePeriodDuty/18:
    callsite  Flexio_Pwm_Ip_UpdatePeriodDuty/18 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         Unknown VR
    callsite  Flexio_Pwm_Ip_UpdatePeriodDuty/18 -> DevAssert/0 : 
       param 0: PASS THROUGH: 3, op le_expr 256
         value: 0x0, mask: 0x1
         Unknown VR
    callsite  Flexio_Pwm_Ip_UpdatePeriodDuty/18 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         Unknown VR
    callsite  Flexio_Pwm_Ip_UpdatePeriodDuty/18 -> DevAssert/0 : 
       param 0: PASS THROUGH: 0, op eq_expr 0
         value: 0x0, mask: 0x1
         Unknown VR
    callsite  Flexio_Pwm_Ip_UpdatePeriodDuty/18 -> DevAssert/0 : 
       param 0: PASS THROUGH: 1, op le_expr 3
         value: 0x0, mask: 0x1
         Unknown VR
  Jump functions of caller  Flexio_Pwm_Ip_DeInitChannel/17:
    callsite  Flexio_Pwm_Ip_DeInitChannel/17 -> Flexio_Pwm_Ip_ResetTimerRegisters.isra.0/33 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Flexio_Pwm_Ip_DeInitChannel/17 -> Flexio_Pwm_Ip_UpdateInterruptMode/20 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Flexio_Pwm_Ip_DeInitChannel/17 -> DevAssert/0 : 
       param 0: PASS THROUGH: 0, op eq_expr 0
         value: 0x0, mask: 0x1
         Unknown VR
    callsite  Flexio_Pwm_Ip_DeInitChannel/17 -> DevAssert/0 : 
       param 0: PASS THROUGH: 1, op le_expr 3
         value: 0x0, mask: 0x1
         Unknown VR
  Jump functions of caller  Flexio_Pwm_Ip_InitChannel/16:
    callsite  Flexio_Pwm_Ip_InitChannel/16 -> Flexio_Pwm_Ip_UpdateInterruptMode/20 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Flexio_Pwm_Ip_InitChannel/16 -> Flexio_Pwm_Ip_InitTimerPin/15 : 
       param 0: CONST: 1074110464B
         value: 0x0, mask: 0xfffffff8
         VR  ~[0, 0]
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Flexio_Pwm_Ip_InitChannel/16 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         Unknown VR
    callsite  Flexio_Pwm_Ip_InitChannel/16 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         Unknown VR
    callsite  Flexio_Pwm_Ip_InitChannel/16 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         Unknown VR
    callsite  Flexio_Pwm_Ip_InitChannel/16 -> DevAssert/0 : 
       param 0: PASS THROUGH: 0, op eq_expr 0
         value: 0x0, mask: 0x1
         Unknown VR
    callsite  Flexio_Pwm_Ip_InitChannel/16 -> DevAssert/0 : 
       param 0: PASS THROUGH: 1, op ne_expr 0B
         value: 0x0, mask: 0x1
         Unknown VR
  Jump functions of caller  Flexio_Pwm_Ip_InitTimerPin/15:
    callsite  Flexio_Pwm_Ip_InitTimerPin/15 -> Flexio_Pwm_Ip_SetTimerPin/4 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Flexio_Pwm_Ip_SetTimerPin/4:
  Jump functions of caller  DevAssert/0:

 Propagating constants:

Not considering Flexio_Pwm_Ip_GetPeriod for cloning; -fipa-cp-clone disabled.
Not considering Flexio_Pwm_Ip_UpdateInterruptMode for cloning; -fipa-cp-clone disabled.
Not considering Flexio_Pwm_Ip_GetOutputState for cloning; -fipa-cp-clone disabled.
Not considering Flexio_Pwm_Ip_UpdatePeriodDuty for cloning; -fipa-cp-clone disabled.
Not considering Flexio_Pwm_Ip_DeInitChannel for cloning; -fipa-cp-clone disabled.
Not considering Flexio_Pwm_Ip_InitChannel for cloning; -fipa-cp-clone disabled.

overall_size: 241, max_new_size: 11001
 - context independent values, size: 12, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 8, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.

IPA lattices after all propagation:

Lattices:
  Node: Flexio_Pwm_Ip_ResetTimerRegisters.isra.0/33:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Flexio_Pwm_Ip_GetPeriod/21:
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
  Node: Flexio_Pwm_Ip_UpdateInterruptMode/20:
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
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Flexio_Pwm_Ip_GetOutputState/19:
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
  Node: Flexio_Pwm_Ip_UpdatePeriodDuty/18:
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
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [3]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Flexio_Pwm_Ip_DeInitChannel/17:
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
  Node: Flexio_Pwm_Ip_InitChannel/16:
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
  Node: Flexio_Pwm_Ip_InitTimerPin/15:
    param [0]: 1074110464B [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffff8
         struct Flexio_Pwm_Ip_HwAddrType * const [1074110464B, 1074110464B]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Flexio_Pwm_Ip_SetTimerPin/4:
    param [0]: 1074110464B [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffff8
         struct Flexio_Pwm_Ip_HwAddrType * ~[0B, 0B]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: DevAssert/0:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE

IPA decision stage:

 - Creating a specialized node of Flexio_Pwm_Ip_InitTimerPin/15 for all known contexts.
    replacing param #0 Base with const 1074110464B
 - Creating a specialized node of Flexio_Pwm_Ip_SetTimerPin/4 for all known contexts.
    replacing param #0 Base with const 1074110464B
Propagated bits info for function Flexio_Pwm_Ip_SetTimerPin.constprop/41:
 param 0: value = 0x0, mask = 0xfffffff8
Propagated bits info for function Flexio_Pwm_Ip_InitTimerPin.constprop/40:
 param 0: value = 0x0, mask = 0xfffffff8
Propagated bits info for function Flexio_Pwm_Ip_InitTimerPin/15:
 param 0: value = 0x0, mask = 0xfffffff8
Propagated bits info for function Flexio_Pwm_Ip_SetTimerPin/4:
 param 0: value = 0x0, mask = 0xfffffff8

IPA constant propagation end

Reclaiming functions: Flexio_Pwm_Ip_InitTimerPin/15 Flexio_Pwm_Ip_SetTimerPin/4
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Flexio_Pwm_Ip_SetTimerPin.constprop.0/41 (Flexio_Pwm_Ip_SetTimerPin.constprop) @05cb2ee0
  Type: function definition analyzed
  Visibility:
  References: 
  Referring: 
  Clone of Flexio_Pwm_Ip_SetTimerPin/4
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: Flexio_Pwm_Ip_InitTimerPin.constprop/40 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Flexio_Pwm_Ip_InitTimerPin.constprop.0/40 (Flexio_Pwm_Ip_InitTimerPin.constprop) @05d4cd20
  Type: function definition analyzed
  Visibility:
  References: 
  Referring: 
  Clone of Flexio_Pwm_Ip_InitTimerPin/15
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: Flexio_Pwm_Ip_InitChannel/16 (1073741824 (estimated locally),1.00 per call) 
  Calls: Flexio_Pwm_Ip_SetTimerPin.constprop/41 (1073741824 (estimated locally),1.00 per call) 
Flexio_Pwm_Ip_ResetTimerRegisters.isra.0/33 (Flexio_Pwm_Ip_ResetTimerRegisters.isra.0) @05f23700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Flexio_Pwm_Ip_aState/12 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Flexio_Pwm_Ip_DeInitChannel/17 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_34/27 (SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_34) @05edc000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Flexio_Pwm_Ip_UpdateInterruptMode/20 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Flexio_Mcl_Ip_SetTimerInterrupt/26 (Flexio_Mcl_Ip_SetTimerInterrupt) @05df9ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Flexio_Pwm_Ip_UpdateInterruptMode/20 (217325345 (estimated locally),0.20 per call) Flexio_Pwm_Ip_UpdateInterruptMode/20 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
Flexio_Mcl_Ip_ClearTimerStatus/25 (Flexio_Mcl_Ip_ClearTimerStatus) @05df9e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Flexio_Pwm_Ip_UpdateInterruptMode/20 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_34/24 (SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_34) @05df9d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Flexio_Pwm_Ip_UpdateInterruptMode/20 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_33/23 (SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_33) @05df99a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Flexio_Pwm_Ip_UpdatePeriodDuty/18 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_33/22 (SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_33) @05df98c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Flexio_Pwm_Ip_UpdatePeriodDuty/18 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Flexio_Pwm_Ip_GetPeriod/21 (Flexio_Pwm_Ip_GetPeriod) @05d4f0e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: DevAssert/0 (1073741824 (estimated locally),1.00 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
Flexio_Pwm_Ip_UpdateInterruptMode/20 (Flexio_Pwm_Ip_UpdateInterruptMode) @05d4fd20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexio_Pwm_Ip_aState/12 (read)Flexio_Pwm_Ip_u8TimerIrqMask/13 (read)Flexio_Pwm_Ip_u8TimerIrqMask/13 (write)Flexio_Pwm_Ip_u8TimerIrqMask/13 (read)Flexio_Pwm_Ip_u8TimerIrqMask/13 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: Flexio_Pwm_Ip_DeInitChannel/17 (1073741824 (estimated locally),1.00 per call) Flexio_Pwm_Ip_InitChannel/16 (1073741824 (estimated locally),1.00 per call) 
  Calls: SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_34/27 (1073741824 (estimated locally),1.00 per call) Flexio_Mcl_Ip_SetTimerInterrupt/26 (217325345 (estimated locally),0.20 per call) Flexio_Mcl_Ip_SetTimerInterrupt/26 (1073741823 (estimated locally),1.00 per call) Flexio_Mcl_Ip_ClearTimerStatus/25 (1073741823 (estimated locally),1.00 per call) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_34/24 (1073741823 (estimated locally),1.00 per call) DevAssert/0 (1073741823 (estimated locally),1.00 per call) DevAssert/0 (1073741823 (estimated locally),1.00 per call) 
Flexio_Pwm_Ip_GetOutputState/19 (Flexio_Pwm_Ip_GetOutputState) @05d4fa80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexio_Pwm_Ip_aState/12 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: DevAssert/0 (1073741824 (estimated locally),1.00 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
Flexio_Pwm_Ip_UpdatePeriodDuty/18 (Flexio_Pwm_Ip_UpdatePeriodDuty) @05d4f7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_33/23 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_33/22 (1073741824 (estimated locally),1.00 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
Flexio_Pwm_Ip_DeInitChannel/17 (Flexio_Pwm_Ip_DeInitChannel) @05d4f540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexio_Pwm_Ip_aState/12 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Flexio_Pwm_Ip_ResetTimerRegisters.isra.0/33 (1073741824 (estimated locally),1.00 per call) Flexio_Pwm_Ip_UpdateInterruptMode/20 (1073741824 (estimated locally),1.00 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
Flexio_Pwm_Ip_InitChannel/16 (Flexio_Pwm_Ip_InitChannel) @05d4f2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexio_Pwm_Ip_aState/12 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Flexio_Pwm_Ip_UpdateInterruptMode/20 (1073741824 (estimated locally),1.00 per call) Flexio_Pwm_Ip_InitTimerPin.constprop/40 (1073741824 (estimated locally),1.00 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
Flexio_Pwm_Ip_InitTimerPin/15 (Flexio_Pwm_Ip_InitTimerPin) @05d4f000
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Flexio_Pwm_Ip_u8TimerIrqMask/13 (Flexio_Pwm_Ip_u8TimerIrqMask) @05d49288
  Type: variable definition analyzed
  Visibility: force_output externally_visible public
  References: 
  Referring: Flexio_Pwm_Ip_UpdateInterruptMode/20 (read)Flexio_Pwm_Ip_UpdateInterruptMode/20 (write)Flexio_Pwm_Ip_UpdateInterruptMode/20 (read)Flexio_Pwm_Ip_UpdateInterruptMode/20 (write)
  Availability: available
  Varpool flags:
Flexio_Pwm_Ip_aState/12 (Flexio_Pwm_Ip_aState) @05d491f8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Flexio_Pwm_Ip_GetOutputState/19 (read)Flexio_Pwm_Ip_UpdateInterruptMode/20 (read)Flexio_Pwm_Ip_ResetTimerRegisters.isra.0/33 (read)Flexio_Pwm_Ip_InitChannel/16 (write)Flexio_Pwm_Ip_DeInitChannel/17 (read)
  Availability: available
  Varpool flags:
Flexio_Pwm_Ip_aBasePtr/11 (Flexio_Pwm_Ip_aBasePtr) @05d49168
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Flexio_Pwm_Ip_SetTimerPin/4 (Flexio_Pwm_Ip_SetTimerPin) @05c78e00
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
DevAssert/0 (DevAssert) @05c3a2a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:214748 (estimated locally) body local optimize_size
  Called by: Flexio_Pwm_Ip_GetPeriod/21 (1073741824 (estimated locally),1.00 per call) Flexio_Pwm_Ip_GetPeriod/21 (1073741824 (estimated locally),1.00 per call) Flexio_Pwm_Ip_DeInitChannel/17 (1073741824 (estimated locally),1.00 per call) Flexio_Pwm_Ip_DeInitChannel/17 (1073741824 (estimated locally),1.00 per call) Flexio_Pwm_Ip_InitChannel/16 (1073741824 (estimated locally),1.00 per call) Flexio_Pwm_Ip_InitChannel/16 (1073741824 (estimated locally),1.00 per call) Flexio_Pwm_Ip_InitChannel/16 (1073741824 (estimated locally),1.00 per call) Flexio_Pwm_Ip_InitChannel/16 (1073741824 (estimated locally),1.00 per call) Flexio_Pwm_Ip_InitChannel/16 (1073741824 (estimated locally),1.00 per call) Flexio_Pwm_Ip_UpdateInterruptMode/20 (1073741823 (estimated locally),1.00 per call) Flexio_Pwm_Ip_UpdateInterruptMode/20 (1073741823 (estimated locally),1.00 per call) Flexio_Pwm_Ip_GetOutputState/19 (1073741824 (estimated locally),1.00 per call) Flexio_Pwm_Ip_GetOutputState/19 (1073741824 (estimated locally),1.00 per call) Flexio_Pwm_Ip_UpdatePeriodDuty/18 (1073741824 (estimated locally),1.00 per call) Flexio_Pwm_Ip_UpdatePeriodDuty/18 (1073741824 (estimated locally),1.00 per call) Flexio_Pwm_Ip_UpdatePeriodDuty/18 (1073741824 (estimated locally),1.00 per call) Flexio_Pwm_Ip_UpdatePeriodDuty/18 (1073741824 (estimated locally),1.00 per call) Flexio_Pwm_Ip_UpdatePeriodDuty/18 (1073741824 (estimated locally),1.00 per call) 
  Calls: 

;; Function DevAssert (DevAssert, funcdef_no=0, decl_uid=5523, cgraph_uid=1, symbol_order=0)

Modification phase of node DevAssert/0
DevAssert (volatile boolean x)
{
  _Bool x.0_1;

  <bb 2> [local count: 214748]:
  # DEBUG BEGIN_STMT
  x.0_1 ={v} x;
  if (x.0_1 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 107374]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("BKPT #0");
  # DEBUG BEGIN_STMT

  <bb 6> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 107374]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Flexio_Pwm_Ip_UpdatePeriodDuty (Flexio_Pwm_Ip_UpdatePeriodDuty, funcdef_no=15, decl_uid=5614, cgraph_uid=16, symbol_order=18)

Modification phase of node Flexio_Pwm_Ip_UpdatePeriodDuty/18
Flexio_Pwm_Ip_UpdatePeriodDuty (uint8 InstanceId, uint8 Channel, uint16 Period, uint16 DutyCycle)
{
  _Bool _1;
  _Bool _2;
  _Bool _3;
  _Bool _4;
  short unsigned int _5;
  _Bool _6;
  unsigned char _7;
  unsigned char _8;
  unsigned char _9;
  unsigned char _10;
  unsigned char _11;
  long unsigned int _24;
  long unsigned int _25;
  long unsigned int _26;
  long unsigned int _27;
  long unsigned int _28;
  long unsigned int _29;
  long unsigned int _30;
  long unsigned int _31;
  long unsigned int _32;
  long unsigned int _33;
  long unsigned int _34;
  long unsigned int _35;
  int _36;
  long unsigned int _37;
  long unsigned int _38;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Channel_12(D) <= 3;
  DevAssert (_1);
  # DEBUG BEGIN_STMT
  _2 = InstanceId_15(D) == 0;
  DevAssert (_2);
  # DEBUG BEGIN_STMT
  _3 = Period_17(D) >= DutyCycle_18(D);
  DevAssert (_3);
  # DEBUG BEGIN_STMT
  _4 = DutyCycle_18(D) <= 256;
  DevAssert (_4);
  # DEBUG BEGIN_STMT
  _5 = Period_17(D) - DutyCycle_18(D);
  _6 = _5 <= 256;
  DevAssert (_6);
  # DEBUG BEGIN_STMT
  # DEBUG Base => 1074110464B
  # DEBUG BEGIN_STMT
  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_33 ();
  # DEBUG BEGIN_STMT
  # DEBUG Base => 1074110464B
  # DEBUG Timer => Channel_12(D)
  # DEBUG TimerInitOut => 0
  # DEBUG INLINE_ENTRY Flexio_Pwm_Ip_SetTimerInitMode
  # DEBUG BEGIN_STMT
  _36 = (int) Channel_12(D);
  _37 ={v} MEM[(struct Flexio_Pwm_Ip_HwAddrType *)1074110464B].TIMCFG[_36];
  _38 = _37 & 4244635647;
  MEM[(struct Flexio_Pwm_Ip_HwAddrType *)1074110464B].TIMCFG[_36] ={v} _38;
  # DEBUG Base => NULL
  # DEBUG Timer => NULL
  # DEBUG TimerInitOut => NULL
  # DEBUG BEGIN_STMT
  # DEBUG Base => 1074110464B
  # DEBUG Timer => Channel_12(D)
  # DEBUG TimerMode => 2
  # DEBUG INLINE_ENTRY Flexio_Pwm_Ip_SetTimerMode
  # DEBUG BEGIN_STMT
  _33 ={v} MEM[(struct Flexio_Pwm_Ip_HwAddrType *)1074110464B].TIMCTL[_36];
  _34 = _33 & 4294967292;
  _35 = _34 | 2;
  MEM[(struct Flexio_Pwm_Ip_HwAddrType *)1074110464B].TIMCTL[_36] ={v} _35;
  # DEBUG Base => NULL
  # DEBUG Timer => NULL
  # DEBUG TimerMode => NULL
  # DEBUG BEGIN_STMT
  _7 = (unsigned char) DutyCycle_18(D);
  _8 = _7 + 255;
  # DEBUG Base => 1074110464B
  # DEBUG Timer => Channel_12(D)
  # DEBUG Value => _8
  # DEBUG INLINE_ENTRY Flexio_Pwm_Ip_SetLowerValue
  # DEBUG BEGIN_STMT
  _29 ={v} MEM[(struct Flexio_Pwm_Ip_HwAddrType *)1074110464B].TIMCMP[_36];
  _30 = _29 & 4294967040;
  _31 = (long unsigned int) _8;
  _32 = _30 | _31;
  MEM[(struct Flexio_Pwm_Ip_HwAddrType *)1074110464B].TIMCMP[_36] ={v} _32;
  # DEBUG Base => NULL
  # DEBUG Timer => NULL
  # DEBUG Value => NULL
  # DEBUG BEGIN_STMT
  _9 = (unsigned char) Period_17(D);
  _10 = _9 - _7;
  _11 = _10 + 255;
  # DEBUG Base => 1074110464B
  # DEBUG Timer => Channel_12(D)
  # DEBUG Value => _11
  # DEBUG INLINE_ENTRY Flexio_Pwm_Ip_SetUpperValue
  # DEBUG BEGIN_STMT
  _24 ={v} MEM[(struct Flexio_Pwm_Ip_HwAddrType *)1074110464B].TIMCMP[_36];
  _25 = _24 & 4294902015;
  _26 = (long unsigned int) _11;
  _27 = _26 << 8;
  _28 = _25 | _27;
  MEM[(struct Flexio_Pwm_Ip_HwAddrType *)1074110464B].TIMCMP[_36] ={v} _28;
  # DEBUG Base => NULL
  # DEBUG Timer => NULL
  # DEBUG Value => NULL
  # DEBUG BEGIN_STMT
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_33 ();
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Flexio_Pwm_Ip_GetOutputState (Flexio_Pwm_Ip_GetOutputState, funcdef_no=16, decl_uid=5617, cgraph_uid=17, symbol_order=19)

Modification phase of node Flexio_Pwm_Ip_GetOutputState/19
Flexio_Pwm_Ip_GetOutputState (uint8 InstanceId, uint8 Channel)
{
  const struct Flexio_Pwm_Ip_ChannelConfigType * const UserCfg;
  _Bool _1;
  _Bool _2;
  int _3;
  unsigned char _4;
  long unsigned int _11;
  long unsigned int _12;
  int _13;
  long unsigned int _14;
  _Bool _15;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Channel_5(D) <= 3;
  DevAssert (_1);
  # DEBUG BEGIN_STMT
  _2 = InstanceId_8(D) == 0;
  DevAssert (_2);
  # DEBUG BEGIN_STMT
  # DEBUG Base => 1074110464B
  # DEBUG BEGIN_STMT
  _3 = (int) Channel_5(D);
  UserCfg_10 = Flexio_Pwm_Ip_aState[_3];
  # DEBUG UserCfg => UserCfg_10
  # DEBUG BEGIN_STMT
  _4 = UserCfg_10->PinId;
  # DEBUG Base => 1074110464B
  # DEBUG Pin => _4
  # DEBUG INLINE_ENTRY Flexio_Pwm_Ip_GetPinState
  # DEBUG BEGIN_STMT
  _11 ={v} MEM[(const struct Flexio_Pwm_Ip_HwAddrType *)1074110464B].PIN;
  _12 = _11 & 255;
  _13 = (int) _4;
  _14 = _12 >> _13;
  _15 = (_Bool) _14;
  # DEBUG Base => NULL
  # DEBUG Pin => NULL
  return _15;

}



;; Function Flexio_Pwm_Ip_UpdateInterruptMode (Flexio_Pwm_Ip_UpdateInterruptMode, funcdef_no=17, decl_uid=5621, cgraph_uid=18, symbol_order=20)

Modification phase of node Flexio_Pwm_Ip_UpdateInterruptMode/20
Flexio_Pwm_Ip_UpdateInterruptMode (uint8 InstanceId, uint8 Channel, Flexio_Pwm_Ip_InterruptType IrqMode)
{
  const struct Flexio_Pwm_Ip_ChannelConfigType * const UserCfg;
  _Bool _1;
  _Bool _2;
  int _3;
  unsigned char _4;
  unsigned char _5;
  int _6;
  unsigned int _7;
  unsigned char _8;
  unsigned char _9;
  int _10;
  unsigned int _11;
  unsigned char _12;
  unsigned char _13;
  int _14;
  int _15;
  unsigned char _16;
  unsigned char Flexio_Pwm_Ip_u8TimerIrqMask.1_17;
  unsigned char _18;
  unsigned char _19;
  int _20;
  int _21;
  signed char _22;
  signed char _23;
  unsigned char Flexio_Pwm_Ip_u8TimerIrqMask.2_24;
  signed char Flexio_Pwm_Ip_u8TimerIrqMask.3_25;
  signed char _26;
  unsigned char _27;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  _1 = Channel_29(D) <= 3;
  DevAssert (_1);
  # DEBUG BEGIN_STMT
  _2 = InstanceId_32(D) == 0;
  DevAssert (_2);
  # DEBUG BEGIN_STMT
  # DEBUG Base => 1074110464B
  # DEBUG BEGIN_STMT
  _3 = (int) Channel_29(D);
  UserCfg_34 = Flexio_Pwm_Ip_aState[_3];
  # DEBUG UserCfg => UserCfg_34
  # DEBUG BEGIN_STMT
  # DEBUG RetStatus => 0
  # DEBUG BEGIN_STMT
  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_34 ();
  # DEBUG BEGIN_STMT
  _4 = UserCfg_34->TimerId;
  Flexio_Mcl_Ip_ClearTimerStatus (1074110464B, _4);
  # DEBUG BEGIN_STMT
  _5 = UserCfg_34->TimerId;
  _6 = (int) _5;
  _7 = 1 << _6;
  _8 = (unsigned char) _7;
  Flexio_Mcl_Ip_SetTimerInterrupt (1074110464B, _8, 0);
  # DEBUG BEGIN_STMT
  if (IrqMode_38(D) == 4)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  _9 = UserCfg_34->TimerId;
  _10 = (int) _9;
  _11 = 1 << _10;
  _12 = (unsigned char) _11;
  Flexio_Mcl_Ip_SetTimerInterrupt (1074110464B, _12, 1);
  # DEBUG BEGIN_STMT
  _13 = UserCfg_34->TimerId;
  _14 = (int) _13;
  _15 = 1 << _14;
  _16 = (unsigned char) _15;
  Flexio_Pwm_Ip_u8TimerIrqMask.1_17 ={v} Flexio_Pwm_Ip_u8TimerIrqMask;
  _18 = _16 | Flexio_Pwm_Ip_u8TimerIrqMask.1_17;
  Flexio_Pwm_Ip_u8TimerIrqMask ={v} _18;
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 856416478]:
  # DEBUG BEGIN_STMT
  if (IrqMode_38(D) == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 428208239]:
  # DEBUG BEGIN_STMT
  _19 = UserCfg_34->TimerId;
  _20 = (int) _19;
  _21 = 1 << _20;
  _22 = (signed char) _21;
  _23 = ~_22;
  Flexio_Pwm_Ip_u8TimerIrqMask.2_24 ={v} Flexio_Pwm_Ip_u8TimerIrqMask;
  Flexio_Pwm_Ip_u8TimerIrqMask.3_25 = (signed char) Flexio_Pwm_Ip_u8TimerIrqMask.2_24;
  _26 = _23 & Flexio_Pwm_Ip_u8TimerIrqMask.3_25;
  _27 = (unsigned char) _26;
  Flexio_Pwm_Ip_u8TimerIrqMask ={v} _27;

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_34 ();
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Flexio_Pwm_Ip_InitChannel (Flexio_Pwm_Ip_InitChannel, funcdef_no=13, decl_uid=5606, cgraph_uid=14, symbol_order=16)

Modification phase of node Flexio_Pwm_Ip_InitChannel/16
Flexio_Pwm_Ip_InitChannel (uint8 InstanceId, const struct Flexio_Pwm_Ip_ChannelConfigType * const UserCfg)
{
  Flexio_Pwm_Ip_StatusType RetStatus;
  _Bool _1;
  _Bool _2;
  short unsigned int _3;
  short unsigned int _4;
  _Bool _5;
  short unsigned int _6;
  _Bool _7;
  short unsigned int _8;
  short unsigned int _9;
  short unsigned int _10;
  _Bool _11;
  unsigned char _12;
  int _13;
  unsigned char _14;
  unsigned char _15;
  short unsigned int _16;
  unsigned char _17;
  unsigned char _18;
  short unsigned int _19;
  unsigned char _20;
  unsigned char _21;
  unsigned char _22;
  long unsigned int _35;
  long unsigned int _36;
  long unsigned int _37;
  long unsigned int _38;
  long unsigned int _39;
  long unsigned int _40;
  long unsigned int _41;
  long unsigned int _42;
  int _43;
  long unsigned int _44;
  long unsigned int _45;
  long unsigned int _46;
  long unsigned int _47;
  long unsigned int _48;
  long unsigned int _49;
  long unsigned int _50;
  long unsigned int _51;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = UserCfg_23(D) != 0B;
  DevAssert (_1);
  # DEBUG BEGIN_STMT
  _2 = InstanceId_26(D) == 0;
  DevAssert (_2);
  # DEBUG BEGIN_STMT
  _3 = UserCfg_23(D)->Period;
  _4 = UserCfg_23(D)->DutyCycle;
  _5 = _3 >= _4;
  DevAssert (_5);
  # DEBUG BEGIN_STMT
  _6 = UserCfg_23(D)->DutyCycle;
  _7 = _6 <= 256;
  DevAssert (_7);
  # DEBUG BEGIN_STMT
  _8 = UserCfg_23(D)->Period;
  _9 = UserCfg_23(D)->DutyCycle;
  _10 = _8 - _9;
  _11 = _10 <= 256;
  DevAssert (_11);
  # DEBUG BEGIN_STMT
  # DEBUG Base => 1074110464B
  # DEBUG BEGIN_STMT
  # DEBUG RetStatus => 0
  # DEBUG BEGIN_STMT
  _12 = UserCfg_23(D)->TimerId;
  _13 = (int) _12;
  Flexio_Pwm_Ip_aState[_13] = UserCfg_23(D);
  # DEBUG BEGIN_STMT
  # DEBUG Base => 1074110464B
  # DEBUG Timer => _12
  # DEBUG TimerMode => 0
  # DEBUG INLINE_ENTRY Flexio_Pwm_Ip_SetTimerMode
  # DEBUG BEGIN_STMT
  _50 ={v} MEM[(struct Flexio_Pwm_Ip_HwAddrType *)1074110464B].TIMCTL[_13];
  _51 = _50 & 4294967292;
  MEM[(struct Flexio_Pwm_Ip_HwAddrType *)1074110464B].TIMCTL[_13] ={v} _51;
  # DEBUG Base => NULL
  # DEBUG Timer => NULL
  # DEBUG TimerMode => NULL
  # DEBUG BEGIN_STMT
  # DEBUG Base => 1074110464B
  # DEBUG Timer => _12
  # DEBUG TimerInitOut => 0
  # DEBUG INLINE_ENTRY Flexio_Pwm_Ip_SetTimerInitMode
  # DEBUG BEGIN_STMT
  _48 ={v} MEM[(struct Flexio_Pwm_Ip_HwAddrType *)1074110464B].TIMCFG[_13];
  _49 = _48 & 4244635647;
  MEM[(struct Flexio_Pwm_Ip_HwAddrType *)1074110464B].TIMCFG[_13] ={v} _49;
  # DEBUG Base => NULL
  # DEBUG Timer => NULL
  # DEBUG TimerInitOut => NULL
  # DEBUG BEGIN_STMT
  Flexio_Pwm_Ip_InitTimerPin (1074110464B, UserCfg_23(D));
  # DEBUG BEGIN_STMT
  _14 = UserCfg_23(D)->TimerId;
  RetStatus_34 = Flexio_Pwm_Ip_UpdateInterruptMode (InstanceId_26(D), _14, 0);
  # DEBUG RetStatus => RetStatus_34
  # DEBUG BEGIN_STMT
  _15 = UserCfg_23(D)->TimerId;
  _16 = UserCfg_23(D)->DutyCycle;
  _17 = (unsigned char) _16;
  _18 = _17 + 255;
  # DEBUG Base => 1074110464B
  # DEBUG Timer => _15
  # DEBUG Value => _18
  # DEBUG INLINE_ENTRY Flexio_Pwm_Ip_SetLowerValue
  # DEBUG BEGIN_STMT
  _43 = (int) _15;
  _44 ={v} MEM[(struct Flexio_Pwm_Ip_HwAddrType *)1074110464B].TIMCMP[_43];
  _45 = _44 & 4294967040;
  _46 = (long unsigned int) _18;
  _47 = _45 | _46;
  MEM[(struct Flexio_Pwm_Ip_HwAddrType *)1074110464B].TIMCMP[_43] ={v} _47;
  # DEBUG Base => NULL
  # DEBUG Timer => NULL
  # DEBUG Value => NULL
  # DEBUG BEGIN_STMT
  _19 = UserCfg_23(D)->Period;
  _20 = (unsigned char) _19;
  _21 = _20 - _17;
  _22 = _21 + 255;
  # DEBUG Base => 1074110464B
  # DEBUG Timer => _15
  # DEBUG Value => _22
  # DEBUG INLINE_ENTRY Flexio_Pwm_Ip_SetUpperValue
  # DEBUG BEGIN_STMT
  _38 ={v} MEM[(struct Flexio_Pwm_Ip_HwAddrType *)1074110464B].TIMCMP[_43];
  _39 = _38 & 4294902015;
  _40 = (long unsigned int) _22;
  _41 = _40 << 8;
  _42 = _39 | _41;
  MEM[(struct Flexio_Pwm_Ip_HwAddrType *)1074110464B].TIMCMP[_43] ={v} _42;
  # DEBUG Base => NULL
  # DEBUG Timer => NULL
  # DEBUG Value => NULL
  # DEBUG BEGIN_STMT
  # DEBUG Base => 1074110464B
  # DEBUG Timer => _15
  # DEBUG TimerMode => 2
  # DEBUG INLINE_ENTRY Flexio_Pwm_Ip_SetTimerMode
  # DEBUG BEGIN_STMT
  _35 ={v} MEM[(struct Flexio_Pwm_Ip_HwAddrType *)1074110464B].TIMCTL[_43];
  _36 = _35 & 4294967292;
  _37 = _36 | 2;
  MEM[(struct Flexio_Pwm_Ip_HwAddrType *)1074110464B].TIMCTL[_43] ={v} _37;
  # DEBUG Base => NULL
  # DEBUG Timer => NULL
  # DEBUG TimerMode => NULL
  # DEBUG BEGIN_STMT
  return RetStatus_34;

}



;; Function Flexio_Pwm_Ip_DeInitChannel (Flexio_Pwm_Ip_DeInitChannel, funcdef_no=14, decl_uid=5609, cgraph_uid=15, symbol_order=17)

Modification phase of node Flexio_Pwm_Ip_DeInitChannel/17
Flexio_Pwm_Ip_DeInitChannel (uint8 InstanceId, uint8 Channel)
{
  Flexio_Pwm_Ip_StatusType RetStatus;
  const struct Flexio_Pwm_Ip_ChannelConfigType * const UserCfg;
  _Bool _1;
  _Bool _2;
  int _3;
  unsigned char _4;
  int _14;
  long unsigned int _15;
  long unsigned int _16;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Channel_5(D) <= 3;
  DevAssert (_1);
  # DEBUG BEGIN_STMT
  _2 = InstanceId_8(D) == 0;
  DevAssert (_2);
  # DEBUG BEGIN_STMT
  # DEBUG Base => 1074110464B
  # DEBUG BEGIN_STMT
  _3 = (int) Channel_5(D);
  UserCfg_10 = Flexio_Pwm_Ip_aState[_3];
  # DEBUG UserCfg => UserCfg_10
  # DEBUG BEGIN_STMT
  # DEBUG RetStatus => 0
  # DEBUG BEGIN_STMT
  _4 = UserCfg_10->TimerId;
  # DEBUG Base => 1074110464B
  # DEBUG Timer => _4
  # DEBUG TimerMode => 0
  # DEBUG INLINE_ENTRY Flexio_Pwm_Ip_SetTimerMode
  # DEBUG BEGIN_STMT
  _14 = (int) _4;
  _15 ={v} MEM[(struct Flexio_Pwm_Ip_HwAddrType *)1074110464B].TIMCTL[_14];
  _16 = _15 & 4294967292;
  MEM[(struct Flexio_Pwm_Ip_HwAddrType *)1074110464B].TIMCTL[_14] ={v} _16;
  # DEBUG Base => NULL
  # DEBUG Timer => NULL
  # DEBUG TimerMode => NULL
  # DEBUG BEGIN_STMT
  RetStatus_12 = Flexio_Pwm_Ip_UpdateInterruptMode (InstanceId_8(D), Channel_5(D), 0);
  # DEBUG RetStatus => RetStatus_12
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => InstanceId_8(D)
  Flexio_Pwm_Ip_ResetTimerRegisters.isra.0 (Channel_5(D));
  # DEBUG BEGIN_STMT
  return RetStatus_12;

}



;; Function Flexio_Pwm_Ip_GetPeriod (Flexio_Pwm_Ip_GetPeriod, funcdef_no=18, decl_uid=5624, cgraph_uid=19, symbol_order=21)

Modification phase of node Flexio_Pwm_Ip_GetPeriod/21
Flexio_Pwm_Ip_GetPeriod (uint8 InstanceId, uint8 Channel)
{
  uint16 Period;
  _Bool _1;
  _Bool _2;
  short unsigned int _3;
  short unsigned int _4;
  short unsigned int _5;
  long unsigned int _12;
  unsigned char _13;
  int _14;
  long unsigned int _15;
  long unsigned int _16;
  unsigned char _17;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Channel_6(D) <= 3;
  DevAssert (_1);
  # DEBUG BEGIN_STMT
  _2 = InstanceId_9(D) == 0;
  DevAssert (_2);
  # DEBUG BEGIN_STMT
  # DEBUG Base => 1074110464B
  # DEBUG BEGIN_STMT
  # DEBUG Base => 1074110464B
  # DEBUG Timer => Channel_6(D)
  # DEBUG INLINE_ENTRY Flexio_Pwm_Ip_GetUpperValue
  # DEBUG BEGIN_STMT
  _14 = (int) Channel_6(D);
  _15 ={v} MEM[(const struct Flexio_Pwm_Ip_HwAddrType *)1074110464B].TIMCMP[_14];
  _16 = _15 >> 8;
  _17 = (unsigned char) _16;
  # DEBUG Base => NULL
  # DEBUG Timer => NULL
  _3 = (short unsigned int) _17;
  # DEBUG Base => 1074110464B
  # DEBUG Timer => Channel_6(D)
  # DEBUG INLINE_ENTRY Flexio_Pwm_Ip_GetLowerValue
  # DEBUG BEGIN_STMT
  _12 ={v} MEM[(const struct Flexio_Pwm_Ip_HwAddrType *)1074110464B].TIMCMP[_14];
  _13 = (unsigned char) _12;
  # DEBUG Base => NULL
  # DEBUG Timer => NULL
  _4 = (short unsigned int) _13;
  _5 = _3 + _4;
  Period_11 = _5 + 2;
  # DEBUG Period => Period_11
  # DEBUG BEGIN_STMT
  return Period_11;

}


