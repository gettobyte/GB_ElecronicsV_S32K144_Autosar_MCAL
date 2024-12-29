
IPA constant propagation start:
Determining dynamic type for call: CallIsValid_23 = Pwm_ValidateParamPtrInit.isra.0 (ConfigPtr_21(D));
  Starting walk at: CallIsValid_23 = Pwm_ValidateParamPtrInit.isra.0 (ConfigPtr_21(D));
  instance pointer: ConfigPtr_21(D)  Outer instance pointer: ConfigPtr_21(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:CallIsValid_20 = Pwm_ValidateGlobalConfigCall (0, 0);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Pwm_ValidateParamPtrInit.isra.0/13:
  Jump functions of caller  Pwm_ValidateGlobalConfigCall.part.0/12:
  Jump functions of caller  Pwm_Ipw_DeInitInstance/11:
  Jump functions of caller  Pwm_Ipw_DeInit/10:
  Jump functions of caller  Det_ReportError/9:
  Jump functions of caller  Pwm_Ipw_Init/8:
  Jump functions of caller  Pwm_Ipw_InitInstance/7:
  Jump functions of caller  Pwm_DeInit/6:
    callsite  Pwm_DeInit/6 -> Pwm_ValidateGlobalConfigCall/2 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  Pwm_Init/5:
    callsite  Pwm_Init/5 -> Pwm_ValidateParamPtrInit.isra.0/13 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Pwm_Init/5 -> Pwm_ValidateGlobalConfigCall/2 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  Pwm_ValidateGlobalConfigCall/2:
    callsite  Pwm_ValidateGlobalConfigCall/2 -> Pwm_ValidateGlobalConfigCall.part.0/12 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR

 Propagating constants:

Not considering Pwm_DeInit for cloning; -fipa-cp-clone disabled.
Not considering Pwm_Init for cloning; -fipa-cp-clone disabled.

overall_size: 107, max_new_size: 11001
 - context independent values, size: 16, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.

IPA lattices after all propagation:

Lattices:
  Node: Pwm_ValidateParamPtrInit.isra.0/13:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Pwm_ValidateGlobalConfigCall.part.0/12:
    param [0]: 1 [loc_time: 1, loc_size: 8, prop_time: 0, prop_size: 0]
               0 [loc_time: 1, loc_size: 8, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x1, mask = 0x1
         uint8 [0, 1]
        AGGS VARIABLE
  Node: Pwm_DeInit/6:
  Node: Pwm_Init/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Pwm_ValidateGlobalConfigCall/2:
    param [0]: 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x0
         uint32 [0, 0]
        AGGS VARIABLE
    param [1]: 0 [loc_time: 4, loc_size: 11, prop_time: 0, prop_size: 0]
               1 [loc_time: 4, loc_size: 9, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x1, mask = 0x1
         uint8 [0, 1]
        AGGS VARIABLE

IPA decision stage:

 - Creating a specialized node of Pwm_ValidateGlobalConfigCall/2 for all known contexts.
    replacing param #0 CoreId with const 0
Propagated bits info for function Pwm_ValidateGlobalConfigCall.constprop/15:
 param 0: value = 0x0, mask = 0x0
 param 1: value = 0x1, mask = 0x1
Propagated bits info for function Pwm_ValidateGlobalConfigCall.part.0/12:
 param 0: value = 0x1, mask = 0x1
Propagated bits info for function Pwm_ValidateGlobalConfigCall/2:
 param 0: value = 0x0, mask = 0x0
 param 1: value = 0x1, mask = 0x1

IPA constant propagation end

Reclaiming functions: Pwm_ValidateGlobalConfigCall/2
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Pwm_ValidateGlobalConfigCall.constprop.0/15 (Pwm_ValidateGlobalConfigCall.constprop) @05eaf1c0
  Type: function definition analyzed
  Visibility:
  References: Pwm_aState/1 (read)
  Referring: 
  Clone of Pwm_ValidateGlobalConfigCall/2
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: Pwm_Init/5 (715827876 (estimated locally),1.00 per call) Pwm_DeInit/6 (357913938 (estimated locally),1.00 per call) 
  Calls: Pwm_ValidateGlobalConfigCall.part.0/12 (177167400 (estimated locally),0.16 per call) Det_ReportError/9 (177167401 (estimated locally),0.17 per call) 
Pwm_ValidateParamPtrInit.isra.0/13 (Pwm_ValidateParamPtrInit.isra.0) @05ec12a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Pwm_Init/5 (236223199 (estimated locally),0.33 per call) 
  Calls: Det_ReportError/9 (187153200 (estimated locally),0.17 per call) 
Pwm_ValidateGlobalConfigCall.part.0/12 (Pwm_ValidateGlobalConfigCall.part.0) @05c33460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Pwm_ValidateGlobalConfigCall.constprop/15 (177167400 (estimated locally),0.16 per call) 
  Calls: Det_ReportError/9 (1073741824 (estimated locally),1.00 per call) 
Pwm_Ipw_DeInitInstance/11 (Pwm_Ipw_DeInitInstance) @05ebc0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Pwm_DeInit/6 (955630225 (estimated locally),2.67 per call) 
  Calls: 
Pwm_Ipw_DeInit/10 (Pwm_Ipw_DeInit) @05ebc000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Pwm_DeInit/6 (955630219 (estimated locally),2.67 per call) 
  Calls: 
Det_ReportError/9 (Det_ReportError) @05eafee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Pwm_ValidateGlobalConfigCall.constprop/15 (177167401 (estimated locally),0.17 per call) Pwm_ValidateParamPtrInit.isra.0/13 (187153200 (estimated locally),0.17 per call) Pwm_ValidateGlobalConfigCall.part.0/12 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Pwm_Ipw_Init/8 (Pwm_Ipw_Init) @05eafd20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Pwm_Init/5 (955630225 (estimated locally),1.34 per call) 
  Calls: 
Pwm_Ipw_InitInstance/7 (Pwm_Ipw_InitInstance) @05eafb60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Pwm_Init/5 (955630219 (estimated locally),1.34 per call) 
  Calls: 
Pwm_DeInit/6 (Pwm_DeInit) @05eaf700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Pwm_aState/1 (read)Pwm_aState/1 (read)Pwm_aState/1 (read)Pwm_aState/1 (write)Pwm_aState/1 (write)Pwm_aState/1 (write)
  Referring: 
  Availability: available
  Function flags: count:357913938 (estimated locally) body optimize_size
  Called by: 
  Calls: Pwm_Ipw_DeInitInstance/11 (955630225 (estimated locally),2.67 per call) Pwm_Ipw_DeInit/10 (955630219 (estimated locally),2.67 per call) Pwm_ValidateGlobalConfigCall.constprop/15 (357913938 (estimated locally),1.00 per call) 
Pwm_Init/5 (Pwm_Init) @05eaf460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Pwm_aState/1 (write)Pwm_aState/1 (read)Pwm_aState/1 (write)Pwm_aState/1 (read)Pwm_aState/1 (write)
  Referring: 
  Availability: available
  Function flags: count:715827876 (estimated locally) body optimize_size
  Called by: 
  Calls: Pwm_Ipw_Init/8 (955630225 (estimated locally),1.34 per call) Pwm_Ipw_InitInstance/7 (955630219 (estimated locally),1.34 per call) Pwm_ValidateParamPtrInit.isra.0/13 (236223199 (estimated locally),0.33 per call) Pwm_ValidateGlobalConfigCall.constprop/15 (715827876 (estimated locally),1.00 per call) 
Pwm_ValidateGlobalConfigCall/2 (Pwm_ValidateGlobalConfigCall) @05dece00
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Pwm_aState/1 (Pwm_aState) @05de4ab0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Pwm_Init/5 (write)Pwm_ValidateGlobalConfigCall.constprop.0/15 (read)Pwm_Init/5 (write)Pwm_Init/5 (read)Pwm_Init/5 (write)Pwm_Init/5 (read)Pwm_DeInit/6 (read)Pwm_DeInit/6 (read)Pwm_DeInit/6 (read)Pwm_DeInit/6 (write)Pwm_DeInit/6 (write)Pwm_DeInit/6 (write)
  Availability: available
  Varpool flags: initialized

;; Function Pwm_Init (Pwm_Init, funcdef_no=4, decl_uid=5947, cgraph_uid=5, symbol_order=5)

Modification phase of node Pwm_Init/5
Pwm_Init (const struct Pwm_ConfigType * ConfigPtr)
{
  uint8 Index;
  Std_ReturnType CallIsValid;
  const struct Pwm_IpwInstanceConfigType[<unknown>] * _1;
  int _2;
  const struct Pwm_IpwInstanceConfigType * _3;
  const struct Pwm_ConfigType * _4;
  unsigned char _5;
  const struct Pwm_ChannelConfigType[<unknown>] * _6;
  int _7;
  const struct Pwm_ChannelConfigType * _8;
  const struct Pwm_IpwChannelConfigType * _9;
  const struct Pwm_ConfigType * _10;
  unsigned char _11;

  <bb 2> [local count: 715827876]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG CoreId => 0
  # DEBUG BEGIN_STMT
  CallIsValid_20 = Pwm_ValidateGlobalConfigCall (0, 0);
  # DEBUG CallIsValid => CallIsValid_20
  # DEBUG BEGIN_STMT
  if (CallIsValid_20 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 9>; [67.00%]

  <bb 3> [local count: 236223199]:
  # DEBUG BEGIN_STMT
  # DEBUG D#3 => 0
  CallIsValid_23 = Pwm_ValidateParamPtrInit.isra.0 (ConfigPtr_21(D));
  # DEBUG CallIsValid => CallIsValid_23
  # DEBUG BEGIN_STMT
  if (CallIsValid_23 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 4> [local count: 118111599]:
  # DEBUG BEGIN_STMT
  Pwm_aState[0].PwmConfig = ConfigPtr_21(D);
  # DEBUG BEGIN_STMT
  # DEBUG Index => 0
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 955630219]:
  # DEBUG BEGIN_STMT
  _1 = _4->PwmInstancesConfig;
  _2 = (int) Index_13;
  _3 = &*_1[_2];
  Pwm_Ipw_InitInstance (_3);
  # DEBUG BEGIN_STMT
  Index_29 = Index_13 + 1;
  # DEBUG Index => Index_29

  <bb 6> [local count: 1073741820]:
  # Index_13 = PHI <0(4), Index_29(5)>
  # DEBUG Index => Index_13
  # DEBUG BEGIN_STMT
  _4 = Pwm_aState[0].PwmConfig;
  _5 = _4->NumInstances;
  if (_5 > Index_13)
    goto <bb 5>; [89.00%]
  else
    goto <bb 12>; [11.00%]

  <bb 12> [local count: 118111600]:
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 955630225]:
  # DEBUG BEGIN_STMT
  _6 = _10->PwmChannelsConfig;
  _7 = (int) Index_14;
  _8 = &*_6[_7];
  Pwm_aState[0].PwmChannelConfigs[_7] = _8;
  # DEBUG BEGIN_STMT
  _9 = &*_6[_7].IpwChannelCfg;
  Pwm_Ipw_Init (_9);
  # DEBUG BEGIN_STMT
  Index_27 = Index_14 + 1;
  # DEBUG Index => Index_27

  <bb 8> [local count: 1073741824]:
  # Index_14 = PHI <Index_27(7), 0(12)>
  # DEBUG Index => Index_14
  # DEBUG BEGIN_STMT
  _10 = Pwm_aState[0].PwmConfig;
  _11 = _10->NumChannels;
  if (_11 > Index_14)
    goto <bb 7>; [89.00%]
  else
    goto <bb 9>; [11.00%]

  <bb 9> [local count: 715827877]:
  # CallIsValid_12 = PHI <CallIsValid_20(2), CallIsValid_23(3), 0(8)>
  # DEBUG CallIsValid => CallIsValid_12
  # DEBUG BEGIN_STMT
  # DEBUG CoreId => 0
  # DEBUG ValidCall => CallIsValid_12
  # DEBUG ServiceId => 0
  # DEBUG INLINE_ENTRY Pwm_EndValidateGlobalConfigCall
  # DEBUG BEGIN_STMT
  if (CallIsValid_12 == 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 10> [local count: 357913938]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Pwm_aState[0].PwmDriverState = 1;

  <bb 11> [local count: 715827877]:
  # DEBUG CoreId => NULL
  # DEBUG ValidCall => NULL
  # DEBUG ServiceId => NULL
  return;

}



;; Function Pwm_DeInit (Pwm_DeInit, funcdef_no=5, decl_uid=5949, cgraph_uid=6, symbol_order=6)

Modification phase of node Pwm_DeInit/6
Pwm_DeInit ()
{
  uint8 Index;
  Std_ReturnType CallIsValid;
  const struct Pwm_ChannelConfigType * _1;
  unsigned int _2;
  unsigned int _3;
  const struct Pwm_ChannelConfigType * _4;
  const struct Pwm_IpwChannelConfigType * _5;
  <unnamed type> _6;
  const struct Pwm_ConfigType * _7;
  unsigned char _8;
  const struct Pwm_IpwInstanceConfigType[<unknown>] * _9;
  int _10;
  const struct Pwm_IpwInstanceConfigType * _11;
  const struct Pwm_ConfigType * _12;
  unsigned char _13;
  const struct Pwm_ConfigType * _24;

  <bb 2> [local count: 357913938]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG CoreId => 0
  # DEBUG BEGIN_STMT
  CallIsValid_23 = Pwm_ValidateGlobalConfigCall (0, 1);
  # DEBUG CallIsValid => CallIsValid_23
  # DEBUG BEGIN_STMT
  if (CallIsValid_23 == 0)
    goto <bb 14>; [33.00%]
  else
    goto <bb 11>; [67.00%]

  <bb 14> [local count: 118111599]:
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630219]:
  # DEBUG BEGIN_STMT
  _1 = Pwm_aState[0].PwmChannelConfigs[0];
  _2 = (unsigned int) Index_14;
  _3 = _2 * 24;
  _4 = _1 + _3;
  _5 = &_4->IpwChannelCfg;
  _6 = _4->ChannelIdleState;
  Pwm_Ipw_DeInit (_5, _6);
  # DEBUG BEGIN_STMT
  Index_30 = Index_14 + 1;
  # DEBUG Index => Index_30

  <bb 4> [local count: 1073741820]:
  # Index_14 = PHI <Index_30(3), 0(14)>
  # DEBUG Index => Index_14
  # DEBUG BEGIN_STMT
  _7 = Pwm_aState[0].PwmConfig;
  _8 = _7->NumChannels;
  if (_8 > Index_14)
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 118111600]:
  # _24 = PHI <_7(4)>
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 955630225]:
  # DEBUG BEGIN_STMT
  _9 = _24->PwmInstancesConfig;
  _10 = (int) Index_15;
  _11 = &*_9[_10];
  Pwm_Ipw_DeInitInstance (_11);
  # DEBUG BEGIN_STMT
  Index_28 = Index_15 + 1;
  # DEBUG Index => Index_28

  <bb 7> [local count: 1073741824]:
  # Index_15 = PHI <Index_28(6), 0(5)>
  # DEBUG ConfigPtr => NULL
  # DEBUG Index => Index_15
  # DEBUG BEGIN_STMT
  _12 = Pwm_aState[0].PwmConfig;
  _13 = _12->NumInstances;
  if (_13 > Index_15)
    goto <bb 6>; [89.00%]
  else
    goto <bb 8>; [11.00%]

  <bb 8> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  Pwm_aState[0].PwmConfig = 0B;
  # DEBUG BEGIN_STMT
  # DEBUG Index => 0
  goto <bb 10>; [100.00%]

  <bb 9> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  Pwm_aState[0].PwmChannelConfigs[0] = 0B;
  # DEBUG BEGIN_STMT
  # DEBUG Index => 1

  <bb 10> [local count: 236223202]:
  # Index_16 = PHI <0(8), 1(9)>
  # DEBUG Index => Index_16
  # DEBUG BEGIN_STMT
  if (Index_16 == 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 11> [local count: 357913939]:
  # DEBUG BEGIN_STMT
  # DEBUG CoreId => 0
  # DEBUG ValidCall => CallIsValid_23
  # DEBUG ServiceId => 1
  # DEBUG INLINE_ENTRY Pwm_EndValidateGlobalConfigCall
  # DEBUG BEGIN_STMT
  if (CallIsValid_23 == 0)
    goto <bb 12>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 12> [local count: 178956970]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Pwm_aState[0].PwmDriverState = 0;

  <bb 13> [local count: 357913939]:
  # DEBUG CoreId => NULL
  # DEBUG ValidCall => NULL
  # DEBUG ServiceId => NULL
  return;

}


