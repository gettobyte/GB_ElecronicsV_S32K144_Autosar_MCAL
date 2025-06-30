
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  IntCtrl_Ip_InstallHandler/18:
  Jump functions of caller  IntCtrl_Ip_GetPriority/17:
  Jump functions of caller  IntCtrl_Ip_SetPriority/16:
  Jump functions of caller  IntCtrl_Ip_DisableIrq/15:
  Jump functions of caller  IntCtrl_Ip_EnableIrq/14:
  Jump functions of caller  Platform_Ipw_Init/13:
  Jump functions of caller  Platform_Ipw_InitNonCore/12:
  Jump functions of caller  Det_ReportError/10:
  Jump functions of caller  Platform_InstallIrqHandler/9:
  Jump functions of caller  Platform_GetIrqPriority/8:
  Jump functions of caller  Platform_SetIrqPriority/7:
  Jump functions of caller  Platform_SetIrq/6:
    callsite  Platform_SetIrq/6 -> Platform_Ipw_SetIrq/1 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0x1
         Unknown VR
  Jump functions of caller  Platform_Init/5:
  Jump functions of caller  Platform_Ipw_SetIrq/1:

 Propagating constants:

Not considering Platform_InstallIrqHandler for cloning; -fipa-cp-clone disabled.
Not considering Platform_GetIrqPriority for cloning; -fipa-cp-clone disabled.
Not considering Platform_SetIrqPriority for cloning; -fipa-cp-clone disabled.
Not considering Platform_SetIrq for cloning; -fipa-cp-clone disabled.
Not considering Platform_Init for cloning; -fipa-cp-clone disabled.

overall_size: 89, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Platform_InstallIrqHandler/9:
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
  Node: Platform_GetIrqPriority/8:
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
  Node: Platform_SetIrqPriority/7:
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
  Node: Platform_SetIrq/6:
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
  Node: Platform_Init/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Platform_Ipw_SetIrq/1:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
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

IntCtrl_Ip_InstallHandler/18 (IntCtrl_Ip_InstallHandler) @0605c1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Platform_InstallIrqHandler/9 (536870913 (estimated locally),0.50 per call) 
  Calls: 
IntCtrl_Ip_GetPriority/17 (IntCtrl_Ip_GetPriority) @060e0ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Platform_GetIrqPriority/8 (503584915 (estimated locally),0.47 per call) 
  Calls: 
IntCtrl_Ip_SetPriority/16 (IntCtrl_Ip_SetPriority) @060e0c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Platform_SetIrqPriority/7 (237404317 (estimated locally),0.22 per call) 
  Calls: 
IntCtrl_Ip_DisableIrq/15 (IntCtrl_Ip_DisableIrq) @060e09a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Platform_Ipw_SetIrq/1 (536870913 (estimated locally),0.50 per call) 
  Calls: 
IntCtrl_Ip_EnableIrq/14 (IntCtrl_Ip_EnableIrq) @060e08c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Platform_Ipw_SetIrq/1 (536870913 (estimated locally),0.50 per call) 
  Calls: 
Platform_Ipw_Init/13 (Platform_Ipw_Init) @060e0620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Platform_Init/5 (322122547 (estimated locally),0.30 per call) 
  Calls: 
Platform_Ipw_InitNonCore/12 (Platform_Ipw_InitNonCore) @060e0540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Platform_Init/5 (322122547 (estimated locally),0.30 per call) 
  Calls: 
Platform_Config/11 (Platform_Config) @060dab40
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Platform_Init/5 (read)
  Availability: not_available
  Varpool flags: read-only
Det_ReportError/10 (Det_ReportError) @060e0460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Platform_InstallIrqHandler/9 (536870913 (estimated locally),0.50 per call) Platform_GetIrqPriority/8 (215822106 (estimated locally),0.20 per call) Platform_GetIrqPriority/8 (354334802 (estimated locally),0.33 per call) Platform_SetIrqPriority/7 (836337508 (estimated locally),0.78 per call) Platform_SetIrq/6 (536870913 (estimated locally),0.50 per call) Platform_Init/5 (751619278 (estimated locally),0.70 per call) 
  Calls: 
Platform_InstallIrqHandler/9 (Platform_InstallIrqHandler) @060dbd20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: IntCtrl_Ip_InstallHandler/18 (536870913 (estimated locally),0.50 per call) Det_ReportError/10 (536870913 (estimated locally),0.50 per call) 
Platform_GetIrqPriority/8 (Platform_GetIrqPriority) @060db7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: IntCtrl_Ip_GetPriority/17 (503584915 (estimated locally),0.47 per call) Det_ReportError/10 (215822106 (estimated locally),0.20 per call) Det_ReportError/10 (354334802 (estimated locally),0.33 per call) 
Platform_SetIrqPriority/7 (Platform_SetIrqPriority) @060dbee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: IntCtrl_Ip_SetPriority/16 (237404317 (estimated locally),0.22 per call) Det_ReportError/10 (836337508 (estimated locally),0.78 per call) 
Platform_SetIrq/6 (Platform_SetIrq) @060dbc40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Platform_Ipw_SetIrq/1 (536870913 (estimated locally),0.50 per call) Det_ReportError/10 (536870913 (estimated locally),0.50 per call) 
Platform_Init/5 (Platform_Init) @060db9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Platform_Config/11 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Platform_Ipw_Init/13 (322122547 (estimated locally),0.30 per call) Platform_Ipw_InitNonCore/12 (322122547 (estimated locally),0.30 per call) Det_ReportError/10 (751619278 (estimated locally),0.70 per call) 
Platform_Ipw_SetIrq/1 (Platform_Ipw_SetIrq) @060d7380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Platform_SetIrq/6 (536870913 (estimated locally),0.50 per call) 
  Calls: IntCtrl_Ip_DisableIrq/15 (536870913 (estimated locally),0.50 per call) IntCtrl_Ip_EnableIrq/14 (536870913 (estimated locally),0.50 per call) 

;; Function Platform_Init (Platform_Init, funcdef_no=5, decl_uid=6271, cgraph_uid=6, symbol_order=5)

Modification phase of node Platform_Init/5
Platform_Init (const struct Platform_ConfigType * pConfig)
{
  const struct Platform_ConfigType * _1;
  const struct Platform_Ipw_NonCoreConfigType * _2;
  const struct Platform_Ipw_ConfigType * _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG u8CoreId => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (pConfig_5(D) != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 4>; [30.00%]

  <bb 3> [local count: 751619278]:
  # DEBUG BEGIN_STMT
  Det_ReportError (255, 0, 32, 1);
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 322122547]:
  # DEBUG BEGIN_STMT
  _1 = Platform_Config[0];
  _2 = _1->pIpwNonCoreConfig;
  Platform_Ipw_InitNonCore (_2);
  # DEBUG BEGIN_STMT
  _3 = _1->pIpwConfig;
  Platform_Ipw_Init (_3);

  <bb 5> [local count: 1073741824]:
  return;

}



;; Function Platform_SetIrq (Platform_SetIrq, funcdef_no=6, decl_uid=6274, cgraph_uid=7, symbol_order=6)

Modification phase of node Platform_SetIrq/6
Platform_SetIrq (IRQn_Type eIrqNumber, boolean bEnable)
{
  Std_ReturnType RetValue;
  unsigned int eIrqNumber.0_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetValue => 0
  # DEBUG BEGIN_STMT
  eIrqNumber.0_1 = (unsigned int) eIrqNumber_4(D);
  if (eIrqNumber.0_1 > 122)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Det_ReportError (255, 0, 33, 2);
  # DEBUG BEGIN_STMT
  # DEBUG RetValue => 1
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Platform_Ipw_SetIrq (eIrqNumber_4(D), bEnable_6(D));

  <bb 5> [local count: 1073741824]:
  # RetValue_2 = PHI <1(3), 0(4)>
  # DEBUG RetValue => RetValue_2
  # DEBUG BEGIN_STMT
  return RetValue_2;

}



;; Function Platform_SetIrqPriority (Platform_SetIrqPriority, funcdef_no=7, decl_uid=6277, cgraph_uid=8, symbol_order=7)

Modification phase of node Platform_SetIrqPriority/7
Platform_SetIrqPriority (IRQn_Type eIrqNumber, uint8 u8Priority)
{
  Std_ReturnType RetValue;
  unsigned int eIrqNumber.1_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetValue => 0
  # DEBUG BEGIN_STMT
  eIrqNumber.1_1 = (unsigned int) eIrqNumber_4(D);
  if (eIrqNumber.1_1 > 122)
    goto <bb 4>; [33.00%]
  else
    goto <bb 3>; [67.00%]

  <bb 3> [local count: 719407023]:
  if (u8Priority_5(D) > 15)
    goto <bb 4>; [67.00%]
  else
    goto <bb 5>; [33.00%]

  <bb 4> [local count: 836337508]:
  # DEBUG BEGIN_STMT
  Det_ReportError (255, 0, 34, 2);
  # DEBUG BEGIN_STMT
  # DEBUG RetValue => 1
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  # DEBUG eIrqNumber => eIrqNumber_4(D)
  # DEBUG u8Priority => u8Priority_5(D)
  # DEBUG INLINE_ENTRY Platform_Ipw_SetIrqPriority
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_SetPriority (eIrqNumber_4(D), u8Priority_5(D));

  <bb 6> [local count: 1073741824]:
  # RetValue_2 = PHI <1(4), 0(5)>
  # DEBUG eIrqNumber => NULL
  # DEBUG u8Priority => NULL
  # DEBUG RetValue => RetValue_2
  # DEBUG BEGIN_STMT
  return RetValue_2;

}



;; Function Platform_GetIrqPriority (Platform_GetIrqPriority, funcdef_no=8, decl_uid=6280, cgraph_uid=9, symbol_order=8)

Modification phase of node Platform_GetIrqPriority/8
Platform_GetIrqPriority (IRQn_Type eIrqNumber, uint8 * u8Priority)
{
  Std_ReturnType RetValue;
  unsigned int eIrqNumber.2_1;
  unsigned char _10;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG RetValue => 0
  # DEBUG BEGIN_STMT
  eIrqNumber.2_1 = (unsigned int) eIrqNumber_4(D);
  if (eIrqNumber.2_1 > 122)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ReportError (255, 0, 35, 2);
  # DEBUG BEGIN_STMT
  # DEBUG RetValue => 1
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 719407022]:
  # DEBUG BEGIN_STMT
  if (u8Priority_5(D) == 0B)
    goto <bb 5>; [30.00%]
  else
    goto <bb 6>; [70.00%]

  <bb 5> [local count: 215822106]:
  # DEBUG BEGIN_STMT
  Det_ReportError (255, 0, 35, 1);
  # DEBUG BEGIN_STMT
  # DEBUG RetValue => 1
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 503584915]:
  # DEBUG BEGIN_STMT
  # DEBUG eIrqNumber => eIrqNumber_4(D)
  # DEBUG INLINE_ENTRY Platform_Ipw_GetIrqPriority
  # DEBUG BEGIN_STMT
  _10 = IntCtrl_Ip_GetPriority (eIrqNumber_4(D));
  # DEBUG eIrqNumber => NULL
  *u8Priority_5(D) = _10;

  <bb 7> [local count: 1073741824]:
  # RetValue_2 = PHI <1(3), 1(5), 0(6)>
  # DEBUG RetValue => RetValue_2
  # DEBUG BEGIN_STMT
  return RetValue_2;

}



;; Function Platform_InstallIrqHandler (Platform_InstallIrqHandler, funcdef_no=9, decl_uid=6284, cgraph_uid=10, symbol_order=9)

Modification phase of node Platform_InstallIrqHandler/9
Platform_InstallIrqHandler (IRQn_Type eIrqNumber, void (*Platform_IrqHandlerType) (void) pfNewHandler, void (*Platform_IrqHandlerType) (void) * const pfOldHandler)
{
  Std_ReturnType RetValue;
  unsigned int eIrqNumber.3_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetValue => 0
  # DEBUG BEGIN_STMT
  eIrqNumber.3_1 = (unsigned int) eIrqNumber_4(D);
  if (eIrqNumber.3_1 > 122)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Det_ReportError (255, 0, 36, 2);
  # DEBUG BEGIN_STMT
  # DEBUG RetValue => 1
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG eIrqNumber => eIrqNumber_4(D)
  # DEBUG pfNewHandler => pfNewHandler_6(D)
  # DEBUG pfOldHandler => pfOldHandler_7(D)
  # DEBUG INLINE_ENTRY Platform_Ipw_InstallIrqHandler
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_InstallHandler (eIrqNumber_4(D), pfNewHandler_6(D), pfOldHandler_7(D));

  <bb 5> [local count: 1073741824]:
  # RetValue_2 = PHI <1(3), 0(4)>
  # DEBUG eIrqNumber => NULL
  # DEBUG pfNewHandler => NULL
  # DEBUG pfOldHandler => NULL
  # DEBUG RetValue => RetValue_2
  # DEBUG BEGIN_STMT
  return RetValue_2;

}


