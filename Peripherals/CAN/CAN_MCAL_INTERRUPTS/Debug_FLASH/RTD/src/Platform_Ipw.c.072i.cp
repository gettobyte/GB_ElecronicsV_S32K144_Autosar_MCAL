
IPA constant propagation start:
Determining dynamic type for call: Platform_Ipw_InitIntCtrl (_1);
  Starting walk at: Platform_Ipw_InitIntCtrl (_1);
  instance pointer: _1  Outer instance pointer: _1 offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  IntCtrl_Ip_InstallHandler/12:
  Jump functions of caller  IntCtrl_Ip_ClearPending/11:
  Jump functions of caller  IntCtrl_Ip_DisableIrq/10:
  Jump functions of caller  IntCtrl_Ip_EnableIrq/9:
  Jump functions of caller  IntCtrl_Ip_SetPriority/8:
  Jump functions of caller  Platform_Ipw_InitNonCore/7:
  Jump functions of caller  Platform_Ipw_Init/6:
    callsite  Platform_Ipw_Init/6 -> Platform_Ipw_InitIntCtrl/5 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Platform_Ipw_InitIntCtrl/5:

 Propagating constants:

Not considering Platform_Ipw_InitNonCore for cloning; -fipa-cp-clone disabled.
Not considering Platform_Ipw_Init for cloning; -fipa-cp-clone disabled.

overall_size: 60, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Platform_Ipw_InitNonCore/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Platform_Ipw_Init/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Platform_Ipw_InitIntCtrl/5:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

IntCtrl_Ip_InstallHandler/12 (IntCtrl_Ip_InstallHandler) @0629d700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Platform_Ipw_InitNonCore/7 (955630225 (estimated locally),5.66 per call) 
  Calls: 
IntCtrl_Ip_ClearPending/11 (IntCtrl_Ip_ClearPending) @0629d620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Platform_Ipw_InitNonCore/7 (955630225 (estimated locally),5.66 per call) 
  Calls: 
IntCtrl_Ip_DisableIrq/10 (IntCtrl_Ip_DisableIrq) @0629d460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Platform_Ipw_InitIntCtrl/5 (477815111 (estimated locally),4.05 per call) 
  Calls: 
IntCtrl_Ip_EnableIrq/9 (IntCtrl_Ip_EnableIrq) @0629d380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Platform_Ipw_InitIntCtrl/5 (477815111 (estimated locally),4.05 per call) 
  Calls: 
IntCtrl_Ip_SetPriority/8 (IntCtrl_Ip_SetPriority) @0629d2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Platform_Ipw_InitIntCtrl/5 (955630223 (estimated locally),8.09 per call) 
  Calls: 
Platform_Ipw_InitNonCore/7 (Platform_Ipw_InitNonCore) @05df5e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:168730857 (estimated locally) body optimize_size
  Called by: 
  Calls: IntCtrl_Ip_InstallHandler/12 (955630225 (estimated locally),5.66 per call) IntCtrl_Ip_ClearPending/11 (955630225 (estimated locally),5.66 per call) 
Platform_Ipw_Init/6 (Platform_Ipw_Init) @05df5b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Platform_Ipw_InitIntCtrl/5 (574129754 (estimated locally),0.53 per call) 
Platform_Ipw_InitIntCtrl/5 (Platform_Ipw_InitIntCtrl) @05df58c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:118111600 (estimated locally) body local optimize_size
  Called by: Platform_Ipw_Init/6 (574129754 (estimated locally),0.53 per call) 
  Calls: IntCtrl_Ip_DisableIrq/10 (477815111 (estimated locally),4.05 per call) IntCtrl_Ip_EnableIrq/9 (477815111 (estimated locally),4.05 per call) IntCtrl_Ip_SetPriority/8 (955630223 (estimated locally),8.09 per call) 

;; Function Platform_Ipw_Init (Platform_Ipw_Init, funcdef_no=6, decl_uid=6300, cgraph_uid=7, symbol_order=6)

Modification phase of node Platform_Ipw_Init/6
Platform_Ipw_Init (const struct Platform_Ipw_ConfigType * pConfig)
{
  const struct IntCtrl_Ip_CtrlConfigType * _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 0
  # DEBUG BEGIN_STMT
  _1 = pConfig_3(D)->pIntCtrlConfig;
  if (_1 != 0B)
    goto <bb 3>; [53.47%]
  else
    goto <bb 4>; [46.53%]

  <bb 3> [local count: 574129754]:
  # DEBUG BEGIN_STMT
  Platform_Ipw_InitIntCtrl (_1);
  # DEBUG ret => NULL
  # DEBUG BEGIN_STMT
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 499612071]:
  # DEBUG ret => NULL
  # DEBUG BEGIN_STMT

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Platform_Ipw_InitNonCore (Platform_Ipw_InitNonCore, funcdef_no=7, decl_uid=6302, cgraph_uid=8, symbol_order=7)

Modification phase of node Platform_Ipw_InitNonCore/7
Platform_Ipw_InitNonCore (const struct Platform_Ipw_NonCoreConfigType * pConfig)
{
  uint32 irqIdx;
  const struct IntCtrl_Ip_GlobalRouteConfigType * _1;
  const struct IntCtrl_Ip_IrqRouteConfigType * _2;
  long unsigned int _3;
  const struct IntCtrl_Ip_IrqRouteConfigType * _4;
  <unnamed type> _5;
  const struct IntCtrl_Ip_GlobalRouteConfigType * _6;
  const struct IntCtrl_Ip_IrqRouteConfigType * _7;
  const struct IntCtrl_Ip_IrqRouteConfigType * _8;
  <unnamed type> _9;
  void (*<T5ec>) (void) _10;
  const struct IntCtrl_Ip_GlobalRouteConfigType * _11;
  long unsigned int _12;

  <bb 2> [local count: 168730857]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = pConfig_17(D)->pIntRouteConfig;
  if (_1 != 0B)
    goto <bb 6>; [70.00%]
  else
    goto <bb 5>; [30.00%]

  <bb 6> [local count: 118111600]:
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630225]:
  # DEBUG BEGIN_STMT
  _2 = _11->aIrqConfig;
  _3 = irqIdx_13 * 12;
  _4 = _2 + _3;
  _5 = _4->eIrqNumber;
  IntCtrl_Ip_ClearPending (_5);
  # DEBUG BEGIN_STMT
  _6 = pConfig_17(D)->pIntRouteConfig;
  _7 = _6->aIrqConfig;
  _8 = _7 + _3;
  _9 = _8->eIrqNumber;
  _10 = _8->pfHandler;
  IntCtrl_Ip_InstallHandler (_9, _10, 0B);
  # DEBUG BEGIN_STMT
  irqIdx_20 = irqIdx_13 + 1;
  # DEBUG irqIdx => irqIdx_20

  <bb 4> [local count: 1073741824]:
  # irqIdx_13 = PHI <irqIdx_20(3), 0(6)>
  # DEBUG irqIdx => irqIdx_13
  # DEBUG BEGIN_STMT
  _11 = pConfig_17(D)->pIntRouteConfig;
  _12 = _11->u32ConfigIrqCount;
  if (_12 > irqIdx_13)
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 168730858]:
  return;

}


