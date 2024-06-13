
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

Power_Ip_RCM_GetResetRawValue/3 (Power_Ip_RCM_GetResetRawValue) @067d7460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Power_Ip_u32ResetStatus/0 (write)Power_Ip_u32ResetStatus/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Power_Ip_RCM_GetResetReason/2 (Power_Ip_RCM_GetResetReason) @067d71c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Power_Ip_u32ResetStatus/0 (write)Power_Ip_u32ResetStatus/0 (read)
  Referring: 
  Availability: available
  Function flags: count:59850511 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Power_Ip_RCM_ResetInit/1 (Power_Ip_RCM_ResetInit) @067ccee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Power_Ip_u32ResetStatus/0 (Power_Ip_u32ResetStatus) @067cebd0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Power_Ip_RCM_GetResetReason/2 (write)Power_Ip_RCM_GetResetReason/2 (read)Power_Ip_RCM_GetResetRawValue/3 (write)Power_Ip_RCM_GetResetRawValue/3 (read)
  Availability: available
  Varpool flags:

;; Function Power_Ip_RCM_ResetInit (Power_Ip_RCM_ResetInit, funcdef_no=0, decl_uid=5622, cgraph_uid=1, symbol_order=1)

Modification phase of node Power_Ip_RCM_ResetInit/1
Power_Ip_RCM_ResetInit (const struct Power_Ip_RCM_ConfigType * ConfigPtr)
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = ConfigPtr_6(D)->ResetPinControlConfig;
  _2 = _1 & 7943;
  MEM[(struct RCM_Type *)1074262016B].RPC ={v} _2;
  # DEBUG BEGIN_STMT
  _3 = ConfigPtr_6(D)->ResetInterruptEnableConfig;
  _4 = _3 & 12287;
  MEM[(struct RCM_Type *)1074262016B].SRIE ={v} _4;
  return;

}



;; Function Power_Ip_RCM_GetResetReason (Power_Ip_RCM_GetResetReason, funcdef_no=1, decl_uid=5624, cgraph_uid=2, symbol_order=2)

Modification phase of node Power_Ip_RCM_GetResetReason/2
Power_Ip_RCM_GetResetReason ()
{
  uint32 NumberOfFlags;
  uint32 Position;
  uint32 DynamicMask;
  uint32 Index;
  uint32 ActiveValue;
  uint32 RegValue;
  uint32 ResetReason;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;

  <bb 2> [local count: 59850511]:
  # DEBUG BEGIN_STMT
  # DEBUG ResetReason => 12
  # DEBUG BEGIN_STMT
  # DEBUG RegValue => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG Position => 0
  # DEBUG BEGIN_STMT
  # DEBUG NumberOfFlags => 0
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct RCM_Type *)1074262016B].SSRS;
  RegValue_17 = _1 & 12270;
  # DEBUG RegValue => RegValue_17
  # DEBUG BEGIN_STMT
  if (RegValue_17 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 29925256]:
  # DEBUG BEGIN_STMT
  MEM[(struct RCM_Type *)1074262016B].SSRS ={v} RegValue_17;
  # DEBUG BEGIN_STMT
  Power_Ip_u32ResetStatus = RegValue_17;

  <bb 4> [local count: 59850511]:
  # DEBUG BEGIN_STMT
  ActiveValue_20 = Power_Ip_u32ResetStatus;
  # DEBUG ActiveValue => ActiveValue_20
  # DEBUG BEGIN_STMT
  _2 = ActiveValue_20 & 12270;
  if (_2 == 130)
    goto <bb 11>; [21.72%]
  else
    goto <bb 12>; [78.28%]

  <bb 12> [local count: 46850980]:
  goto <bb 10>; [100.00%]

  <bb 5> [local count: 1041207448]:
  # DEBUG BEGIN_STMT
  DynamicMask_21 = 2147483648 >> Index_9;
  # DEBUG DynamicMask => DynamicMask_21
  # DEBUG BEGIN_STMT
  _3 = DynamicMask_21 & 12286;
  if (_3 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 6> [local count: 520603724]:
  # DEBUG BEGIN_STMT
  _4 = ActiveValue_20 & DynamicMask_21;
  if (_4 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 260301862]:
  # DEBUG BEGIN_STMT
  # DEBUG ResetReason => Position_11
  # DEBUG BEGIN_STMT
  NumberOfFlags_22 = NumberOfFlags_14 + 1;
  # DEBUG NumberOfFlags => NumberOfFlags_22
  # DEBUG BEGIN_STMT
  if (NumberOfFlags_22 > 1)
    goto <bb 11>; [5.50%]
  else
    goto <bb 8>; [94.50%]

  <bb 8> [local count: 506287122]:
  # ResetReason_5 = PHI <ResetReason_7(6), Position_11(7)>
  # NumberOfFlags_12 = PHI <NumberOfFlags_14(6), NumberOfFlags_22(7)>
  # DEBUG NumberOfFlags => NumberOfFlags_12
  # DEBUG ResetReason => ResetReason_5
  # DEBUG BEGIN_STMT
  Position_23 = Position_11 + 1;
  # DEBUG Position => Position_23

  <bb 9> [local count: 1026890846]:
  # ResetReason_6 = PHI <ResetReason_7(5), ResetReason_5(8)>
  # Position_10 = PHI <Position_11(5), Position_23(8)>
  # NumberOfFlags_13 = PHI <NumberOfFlags_14(5), NumberOfFlags_12(8)>
  # DEBUG NumberOfFlags => NumberOfFlags_13
  # DEBUG Position => Position_10
  # DEBUG ResetReason => ResetReason_6
  # DEBUG BEGIN_STMT
  Index_24 = Index_9 + 1;
  # DEBUG Index => Index_24

  <bb 10> [local count: 1073741824]:
  # ResetReason_7 = PHI <ResetReason_6(9), 12(12)>
  # Index_9 = PHI <Index_24(9), 0(12)>
  # Position_11 = PHI <Position_10(9), 0(12)>
  # NumberOfFlags_14 = PHI <NumberOfFlags_13(9), 0(12)>
  # DEBUG NumberOfFlags => NumberOfFlags_14
  # DEBUG Position => Position_11
  # DEBUG Index => Index_9
  # DEBUG ResetReason => ResetReason_7
  # DEBUG BEGIN_STMT
  if (Index_9 != 32)
    goto <bb 5>; [96.97%]
  else
    goto <bb 11>; [3.03%]

  <bb 11> [local count: 59850511]:
  # ResetReason_8 = PHI <5(4), 13(7), ResetReason_7(10)>
  # DEBUG ResetReason => ResetReason_8
  # DEBUG BEGIN_STMT
  return ResetReason_8;

}



;; Function Power_Ip_RCM_GetResetRawValue (Power_Ip_RCM_GetResetRawValue, funcdef_no=2, decl_uid=5626, cgraph_uid=3, symbol_order=3)

Modification phase of node Power_Ip_RCM_GetResetRawValue/3
Power_Ip_RCM_GetResetRawValue ()
{
  uint32 RegValue;
  uint32 RawReset;
  long unsigned int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct RCM_Type *)1074262016B].SSRS;
  RegValue_4 = _1 & 12270;
  # DEBUG RegValue => RegValue_4
  # DEBUG BEGIN_STMT
  if (RegValue_4 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  MEM[(struct RCM_Type *)1074262016B].SSRS ={v} RegValue_4;
  # DEBUG BEGIN_STMT
  Power_Ip_u32ResetStatus = RegValue_4;

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  RawReset_7 = Power_Ip_u32ResetStatus;
  # DEBUG RawReset => RawReset_7
  # DEBUG BEGIN_STMT
  return RawReset_7;

}


