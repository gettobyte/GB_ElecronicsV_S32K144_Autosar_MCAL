
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Power_Ip_RCM_GetResetRawValue/3:
  Jump functions of caller  Power_Ip_RCM_GetResetReason/2:
  Jump functions of caller  Power_Ip_RCM_ResetInit/1:

 Propagating constants:

Not considering Power_Ip_RCM_GetResetRawValue for cloning; -fipa-cp-clone disabled.
Not considering Power_Ip_RCM_GetResetReason for cloning; -fipa-cp-clone disabled.
Not considering Power_Ip_RCM_ResetInit for cloning; -fipa-cp-clone disabled.

overall_size: 46, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Power_Ip_RCM_GetResetRawValue/3:
  Node: Power_Ip_RCM_GetResetReason/2:
  Node: Power_Ip_RCM_ResetInit/1:
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

Power_Ip_RCM_GetResetRawValue/3 (Power_Ip_RCM_GetResetRawValue) @0675fa80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: u32ResetStatus/0 (write)u32ResetStatus/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Power_Ip_RCM_GetResetReason/2 (Power_Ip_RCM_GetResetReason) @0675f7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: u32ResetStatus/0 (write)u32ResetStatus/0 (read)
  Referring: 
  Availability: available
  Function flags: count:59850511 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Power_Ip_RCM_ResetInit/1 (Power_Ip_RCM_ResetInit) @0675f540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
u32ResetStatus/0 (u32ResetStatus) @06762480
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Power_Ip_RCM_GetResetReason/2 (write)Power_Ip_RCM_GetResetReason/2 (read)Power_Ip_RCM_GetResetRawValue/3 (write)Power_Ip_RCM_GetResetRawValue/3 (read)
  Availability: available
  Varpool flags:

;; Function Power_Ip_RCM_ResetInit (Power_Ip_RCM_ResetInit, funcdef_no=0, decl_uid=5622, cgraph_uid=1, symbol_order=1)

Modification phase of node Power_Ip_RCM_ResetInit/1
Power_Ip_RCM_ResetInit (const struct Power_Ip_RCM_ConfigType * RCM_pConfigPtr)
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = RCM_pConfigPtr_6(D)->u32ResetPinControlConfig;
  _2 = _1 & 7943;
  MEM[(struct RCM_Type *)1074262016B].RPC ={v} _2;
  # DEBUG BEGIN_STMT
  _3 = RCM_pConfigPtr_6(D)->u32ResetInterruptEnableConfig;
  _4 = _3 & 12287;
  MEM[(struct RCM_Type *)1074262016B].SRIE ={v} _4;
  return;

}



;; Function Power_Ip_RCM_GetResetReason (Power_Ip_RCM_GetResetReason, funcdef_no=1, decl_uid=5624, cgraph_uid=2, symbol_order=2)

Modification phase of node Power_Ip_RCM_GetResetReason/2
Power_Ip_RCM_GetResetReason ()
{
  uint32 u32NumberOfFlags;
  uint32 u32Position;
  uint32 u32DynamicMask;
  uint32 u32Index;
  uint32 u32ActiveValue;
  uint32 u32RegValue;
  uint32 eResetReason;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;

  <bb 2> [local count: 59850511]:
  # DEBUG BEGIN_STMT
  # DEBUG eResetReason => 12
  # DEBUG BEGIN_STMT
  # DEBUG u32RegValue => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG u32Position => 0
  # DEBUG BEGIN_STMT
  # DEBUG u32NumberOfFlags => 0
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct RCM_Type *)1074262016B].SSRS;
  u32RegValue_17 = _1 & 12286;
  # DEBUG u32RegValue => u32RegValue_17
  # DEBUG BEGIN_STMT
  if (u32RegValue_17 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 29925256]:
  # DEBUG BEGIN_STMT
  MEM[(struct RCM_Type *)1074262016B].SSRS ={v} u32RegValue_17;
  # DEBUG BEGIN_STMT
  u32ResetStatus = u32RegValue_17;

  <bb 4> [local count: 59850511]:
  # DEBUG BEGIN_STMT
  u32ActiveValue_20 = u32ResetStatus;
  # DEBUG u32ActiveValue => u32ActiveValue_20
  # DEBUG BEGIN_STMT
  _2 = u32ActiveValue_20 & 12286;
  if (_2 == 130)
    goto <bb 11>; [21.72%]
  else
    goto <bb 12>; [78.28%]

  <bb 12> [local count: 46850980]:
  goto <bb 10>; [100.00%]

  <bb 5> [local count: 1041207448]:
  # DEBUG BEGIN_STMT
  u32DynamicMask_21 = 2147483648 >> u32Index_9;
  # DEBUG u32DynamicMask => u32DynamicMask_21
  # DEBUG BEGIN_STMT
  _3 = u32DynamicMask_21 & 12286;
  if (_3 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 6> [local count: 520603724]:
  # DEBUG BEGIN_STMT
  _4 = u32ActiveValue_20 & u32DynamicMask_21;
  if (_4 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 260301862]:
  # DEBUG BEGIN_STMT
  # DEBUG eResetReason => u32Position_11
  # DEBUG BEGIN_STMT
  u32NumberOfFlags_22 = u32NumberOfFlags_14 + 1;
  # DEBUG u32NumberOfFlags => u32NumberOfFlags_22
  # DEBUG BEGIN_STMT
  if (u32NumberOfFlags_22 > 1)
    goto <bb 11>; [5.50%]
  else
    goto <bb 8>; [94.50%]

  <bb 8> [local count: 506287122]:
  # eResetReason_5 = PHI <eResetReason_7(6), u32Position_11(7)>
  # u32NumberOfFlags_12 = PHI <u32NumberOfFlags_14(6), u32NumberOfFlags_22(7)>
  # DEBUG u32NumberOfFlags => u32NumberOfFlags_12
  # DEBUG eResetReason => eResetReason_5
  # DEBUG BEGIN_STMT
  u32Position_23 = u32Position_11 + 1;
  # DEBUG u32Position => u32Position_23

  <bb 9> [local count: 1026890846]:
  # eResetReason_6 = PHI <eResetReason_7(5), eResetReason_5(8)>
  # u32Position_10 = PHI <u32Position_11(5), u32Position_23(8)>
  # u32NumberOfFlags_13 = PHI <u32NumberOfFlags_14(5), u32NumberOfFlags_12(8)>
  # DEBUG u32NumberOfFlags => u32NumberOfFlags_13
  # DEBUG u32Position => u32Position_10
  # DEBUG eResetReason => eResetReason_6
  # DEBUG BEGIN_STMT
  u32Index_24 = u32Index_9 + 1;
  # DEBUG u32Index => u32Index_24

  <bb 10> [local count: 1073741824]:
  # eResetReason_7 = PHI <eResetReason_6(9), 12(12)>
  # u32Index_9 = PHI <u32Index_24(9), 0(12)>
  # u32Position_11 = PHI <u32Position_10(9), 0(12)>
  # u32NumberOfFlags_14 = PHI <u32NumberOfFlags_13(9), 0(12)>
  # DEBUG u32NumberOfFlags => u32NumberOfFlags_14
  # DEBUG u32Position => u32Position_11
  # DEBUG u32Index => u32Index_9
  # DEBUG eResetReason => eResetReason_7
  # DEBUG BEGIN_STMT
  if (u32Index_9 != 32)
    goto <bb 5>; [96.97%]
  else
    goto <bb 11>; [3.03%]

  <bb 11> [local count: 59850511]:
  # eResetReason_8 = PHI <5(4), 13(7), eResetReason_7(10)>
  # DEBUG eResetReason => eResetReason_8
  # DEBUG BEGIN_STMT
  return eResetReason_8;

}



;; Function Power_Ip_RCM_GetResetRawValue (Power_Ip_RCM_GetResetRawValue, funcdef_no=2, decl_uid=5626, cgraph_uid=3, symbol_order=3)

Modification phase of node Power_Ip_RCM_GetResetRawValue/3
Power_Ip_RCM_GetResetRawValue ()
{
  uint32 u32RegValue;
  uint32 u32RawReset;
  long unsigned int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct RCM_Type *)1074262016B].SSRS;
  u32RegValue_4 = _1 & 12286;
  # DEBUG u32RegValue => u32RegValue_4
  # DEBUG BEGIN_STMT
  if (u32RegValue_4 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  MEM[(struct RCM_Type *)1074262016B].SSRS ={v} u32RegValue_4;
  # DEBUG BEGIN_STMT
  u32ResetStatus = u32RegValue_4;

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  u32RawReset_7 = u32ResetStatus;
  # DEBUG u32RawReset => u32RawReset_7
  # DEBUG BEGIN_STMT
  return u32RawReset_7;

}

