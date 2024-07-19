
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  PowerTimeoutExpired/4:
  Jump functions of caller  PowerStartTimeout/3:
  Jump functions of caller  Power_Ip_SMC_ModeConfig/2:
  Jump functions of caller  Power_Ip_SMC_ModeCheckEntry/1:
  Jump functions of caller  Power_Ip_SMC_AllowedModesConfig/0:

 Propagating constants:

Not considering Power_Ip_SMC_ModeConfig for cloning; -fipa-cp-clone disabled.
Not considering Power_Ip_SMC_ModeCheckEntry for cloning; -fipa-cp-clone disabled.
Not considering Power_Ip_SMC_AllowedModesConfig for cloning; -fipa-cp-clone disabled.

overall_size: 105, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Power_Ip_SMC_ModeConfig/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Power_Ip_SMC_ModeCheckEntry/1:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Power_Ip_SMC_AllowedModesConfig/0:
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

PowerTimeoutExpired/4 (PowerTimeoutExpired) @0685a000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_SMC_ModeConfig/2 (1073741824 (estimated locally),2.34 per call) Power_Ip_SMC_ModeConfig/2 (1073741824 (estimated locally),2.34 per call) Power_Ip_SMC_ModeConfig/2 (1073741824 (estimated locally),2.34 per call) 
  Calls: 
PowerStartTimeout/3 (PowerStartTimeout) @0683a9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_SMC_ModeConfig/2 (114863532 (estimated locally),0.25 per call) Power_Ip_SMC_ModeConfig/2 (114863532 (estimated locally),0.25 per call) Power_Ip_SMC_ModeConfig/2 (114863532 (estimated locally),0.25 per call) 
  Calls: 
Power_Ip_SMC_ModeConfig/2 (Power_Ip_SMC_ModeConfig) @0683ab60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:459454128 (estimated locally) body optimize_size
  Called by: 
  Calls: PowerTimeoutExpired/4 (1073741824 (estimated locally),2.34 per call) PowerStartTimeout/3 (114863532 (estimated locally),0.25 per call) PowerTimeoutExpired/4 (1073741824 (estimated locally),2.34 per call) PowerStartTimeout/3 (114863532 (estimated locally),0.25 per call) PowerTimeoutExpired/4 (1073741824 (estimated locally),2.34 per call) PowerStartTimeout/3 (114863532 (estimated locally),0.25 per call) 
Power_Ip_SMC_ModeCheckEntry/1 (Power_Ip_SMC_ModeCheckEntry) @0683a8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Power_Ip_SMC_AllowedModesConfig/0 (Power_Ip_SMC_AllowedModesConfig) @0683a620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function Power_Ip_SMC_AllowedModesConfig (Power_Ip_SMC_AllowedModesConfig, funcdef_no=0, decl_uid=5638, cgraph_uid=1, symbol_order=0)

Modification phase of node Power_Ip_SMC_AllowedModesConfig/0
Power_Ip_SMC_AllowedModesConfig (const struct Power_Ip_SMC_ConfigType * pConfigPtr)
{
  long unsigned int _1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = pConfigPtr_4(D)->u32AllowedModes;
  _2 = _1 & 160;
  MEM[(struct SMC_Type *)1074257920B].PMPROT ={v} _2;
  return;

}



;; Function Power_Ip_SMC_ModeCheckEntry (Power_Ip_SMC_ModeCheckEntry, funcdef_no=1, decl_uid=5640, cgraph_uid=2, symbol_order=1)

Modification phase of node Power_Ip_SMC_ModeCheckEntry/1
Power_Ip_SMC_ModeCheckEntry (Power_Ip_PowerModeType ePowerMode)
{
  uint32 eCurrentPowerMode;
  Power_Ip_SMC_ModeStatusType ePowerModeCheck;
  long unsigned int _1;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG ePowerModeCheck => 1
  # DEBUG BEGIN_STMT
  # DEBUG eCurrentPowerMode => 1
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SMC_Type *)1074257920B].PMSTAT;
  eCurrentPowerMode_4 = _1 & 255;
  # DEBUG eCurrentPowerMode => eCurrentPowerMode_4
  # DEBUG BEGIN_STMT
  switch (ePowerMode_5(D)) <default: <L11> [25.00%], case 0: <L0> [25.00%], case 1: <L1> [25.00%], case 2: <L4> [25.00%]>

  <bb 3> [local count: 268435456]:
<L0>:
  # DEBUG BEGIN_STMT
  # DEBUG ePowerModeCheck => 0
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 268435456]:
<L1>:
  # DEBUG BEGIN_STMT
  if (eCurrentPowerMode_4 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 5> [local count: 91268055]:
  # DEBUG BEGIN_STMT
  # DEBUG ePowerModeCheck => 0
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 268435456]:
<L4>:
  # DEBUG BEGIN_STMT
  if (eCurrentPowerMode_4 == 1)
    goto <bb 8>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 7> [local count: 177167401]:
  if (eCurrentPowerMode_4 == 16)
    goto <bb 8>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 8> [local count: 151504971]:
  # DEBUG BEGIN_STMT
  # DEBUG ePowerModeCheck => 0

  <bb 9> [local count: 1073741824]:
  # ePowerModeCheck_2 = PHI <0(3), 0(5), 0(8), 1(2), 1(4), 1(7)>
<L11>:
  # DEBUG ePowerModeCheck => ePowerModeCheck_2
  # DEBUG BEGIN_STMT
  return ePowerModeCheck_2;

}



;; Function Power_Ip_SMC_ModeConfig (Power_Ip_SMC_ModeConfig, funcdef_no=2, decl_uid=5642, cgraph_uid=3, symbol_order=2)

Modification phase of node Power_Ip_SMC_ModeConfig/2
Power_Ip_SMC_ModeConfig (const struct Power_Ip_ModeConfigType * pModeConfigPtr)
{
  boolean TimeoutOccurred;
  uint32 TimeoutTicks;
  uint32 ElapsedTime;
  uint32 StartTime;
  uint32 u32PowerModeStatus;
  uint32 u32TempValue;
  Power_Ip_PowerModeType ePowerMode;
  uint32 ePowerSwitchMode;
  long unsigned int TimeoutTicks.0_1;
  long unsigned int _2;
  long unsigned int TimeoutTicks.1_3;
  long unsigned int _4;
  long unsigned int TimeoutTicks.2_5;
  long unsigned int _6;

  <bb 2> [local count: 459454128]:
  # DEBUG BEGIN_STMT
  # DEBUG ePowerSwitchMode => 0
  # DEBUG BEGIN_STMT
  # DEBUG ePowerMode => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG TimeoutOccurred => 0
  # DEBUG BEGIN_STMT
  ePowerMode_15 = pModeConfigPtr_14(D)->Power_Ip_ePowerMode;
  # DEBUG ePowerMode => ePowerMode_15
  # DEBUG BEGIN_STMT
  switch (ePowerMode_15) <default: <L22> [25.00%], case 0: <L0> [25.00%], case 1: <L6> [25.00%], case 2: <L12> [25.00%]>

  <bb 3> [local count: 114863532]:
<L0>:
  # DEBUG BEGIN_STMT
  u32TempValue_32 ={v} MEM[(struct SMC_Type *)1074257920B].PMCTRL;
  # DEBUG u32TempValue => u32TempValue_32
  # DEBUG BEGIN_STMT
  u32TempValue_33 = u32TempValue_32 & 4294967199;
  # DEBUG u32TempValue => u32TempValue_33
  # DEBUG BEGIN_STMT
  # DEBUG u32TempValue => u32TempValue_33
  # DEBUG BEGIN_STMT
  MEM[(struct SMC_Type *)1074257920B].PMCTRL ={v} u32TempValue_33;
  # DEBUG BEGIN_STMT
  PowerStartTimeout (&StartTime, &ElapsedTime, &TimeoutTicks, 50000);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  TimeoutTicks.0_1 = TimeoutTicks;
  TimeoutOccurred_38 = PowerTimeoutExpired (&StartTime, &ElapsedTime, TimeoutTicks.0_1);
  # DEBUG TimeoutOccurred => TimeoutOccurred_38
  # DEBUG BEGIN_STMT
  _2 ={v} MEM[(struct SMC_Type *)1074257920B].PMSTAT;
  u32PowerModeStatus_39 = _2 & 1;
  # DEBUG u32PowerModeStatus => u32PowerModeStatus_39
  # DEBUG BEGIN_STMT
  if (u32PowerModeStatus_39 == 0)
    goto <bb 5>; [94.50%]
  else
    goto <bb 6>; [5.50%]

  <bb 5> [local count: 1014686025]:
  if (TimeoutOccurred_38 != 0)
    goto <bb 6>; [5.50%]
  else
    goto <bb 19>; [94.50%]

  <bb 19> [local count: 958878293]:
  goto <bb 4>; [100.00%]

  <bb 6> [local count: 114863532]:
  # TimeoutOccurred_12 = PHI <TimeoutOccurred_38(4), TimeoutOccurred_38(5)>
  # DEBUG BEGIN_STMT
  if (TimeoutOccurred_12 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 18>; [50.00%]

  <bb 7> [local count: 57431766]:
  # DEBUG BEGIN_STMT
  # DEBUG ePowerSwitchMode => 1
  goto <bb 18>; [100.00%]

  <bb 8> [local count: 114863532]:
<L6>:
  # DEBUG BEGIN_STMT
  u32TempValue_24 ={v} MEM[(struct SMC_Type *)1074257920B].PMCTRL;
  # DEBUG u32TempValue => u32TempValue_24
  # DEBUG BEGIN_STMT
  u32TempValue_25 = u32TempValue_24 & 4294967199;
  # DEBUG u32TempValue => u32TempValue_25
  # DEBUG BEGIN_STMT
  u32TempValue_26 = u32TempValue_25 | 96;
  # DEBUG u32TempValue => u32TempValue_26
  # DEBUG BEGIN_STMT
  MEM[(struct SMC_Type *)1074257920B].PMCTRL ={v} u32TempValue_26;
  # DEBUG BEGIN_STMT
  PowerStartTimeout (&StartTime, &ElapsedTime, &TimeoutTicks, 50000);

  <bb 9> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  TimeoutTicks.1_3 = TimeoutTicks;
  TimeoutOccurred_30 = PowerTimeoutExpired (&StartTime, &ElapsedTime, TimeoutTicks.1_3);
  # DEBUG TimeoutOccurred => TimeoutOccurred_30
  # DEBUG BEGIN_STMT
  _4 ={v} MEM[(struct SMC_Type *)1074257920B].PMSTAT;
  u32PowerModeStatus_31 = _4 & 128;
  # DEBUG u32PowerModeStatus => u32PowerModeStatus_31
  # DEBUG BEGIN_STMT
  if (u32PowerModeStatus_31 == 0)
    goto <bb 10>; [94.50%]
  else
    goto <bb 11>; [5.50%]

  <bb 10> [local count: 1014686025]:
  if (TimeoutOccurred_30 != 0)
    goto <bb 11>; [5.50%]
  else
    goto <bb 20>; [94.50%]

  <bb 20> [local count: 958878293]:
  goto <bb 9>; [100.00%]

  <bb 11> [local count: 114863532]:
  # TimeoutOccurred_40 = PHI <TimeoutOccurred_30(9), TimeoutOccurred_30(10)>
  # DEBUG BEGIN_STMT
  if (TimeoutOccurred_40 != 0)
    goto <bb 12>; [50.00%]
  else
    goto <bb 18>; [50.00%]

  <bb 12> [local count: 57431766]:
  # DEBUG BEGIN_STMT
  # DEBUG ePowerSwitchMode => 1
  goto <bb 18>; [100.00%]

  <bb 13> [local count: 114863532]:
<L12>:
  # DEBUG BEGIN_STMT
  u32TempValue_16 ={v} MEM[(struct SMC_Type *)1074257920B].PMCTRL;
  # DEBUG u32TempValue => u32TempValue_16
  # DEBUG BEGIN_STMT
  u32TempValue_17 = u32TempValue_16 & 4294967199;
  # DEBUG u32TempValue => u32TempValue_17
  # DEBUG BEGIN_STMT
  u32TempValue_18 = u32TempValue_17 | 64;
  # DEBUG u32TempValue => u32TempValue_18
  # DEBUG BEGIN_STMT
  MEM[(struct SMC_Type *)1074257920B].PMCTRL ={v} u32TempValue_18;
  # DEBUG BEGIN_STMT
  PowerStartTimeout (&StartTime, &ElapsedTime, &TimeoutTicks, 50000);

  <bb 14> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  TimeoutTicks.2_5 = TimeoutTicks;
  TimeoutOccurred_22 = PowerTimeoutExpired (&StartTime, &ElapsedTime, TimeoutTicks.2_5);
  # DEBUG TimeoutOccurred => TimeoutOccurred_22
  # DEBUG BEGIN_STMT
  _6 ={v} MEM[(struct SMC_Type *)1074257920B].PMSTAT;
  u32PowerModeStatus_23 = _6 & 4;
  # DEBUG u32PowerModeStatus => u32PowerModeStatus_23
  # DEBUG BEGIN_STMT
  if (u32PowerModeStatus_23 == 0)
    goto <bb 15>; [94.50%]
  else
    goto <bb 16>; [5.50%]

  <bb 15> [local count: 1014686025]:
  if (TimeoutOccurred_22 != 0)
    goto <bb 16>; [5.50%]
  else
    goto <bb 21>; [94.50%]

  <bb 21> [local count: 958878293]:
  goto <bb 14>; [100.00%]

  <bb 16> [local count: 114863532]:
  # TimeoutOccurred_34 = PHI <TimeoutOccurred_22(14), TimeoutOccurred_22(15)>
  # DEBUG BEGIN_STMT
  if (TimeoutOccurred_34 != 0)
    goto <bb 17>; [50.00%]
  else
    goto <bb 18>; [50.00%]

  <bb 17> [local count: 57431766]:
  # DEBUG BEGIN_STMT
  # DEBUG ePowerSwitchMode => 1

  <bb 18> [local count: 459454128]:
  # ePowerSwitchMode_7 = PHI <1(7), 1(12), 1(17), 1(2), 0(6), 0(11), 0(16)>
<L22>:
  # DEBUG ePowerSwitchMode => ePowerSwitchMode_7
  # DEBUG BEGIN_STMT
  StartTime ={v} {CLOBBER};
  ElapsedTime ={v} {CLOBBER};
  TimeoutTicks ={v} {CLOBBER};
  return ePowerSwitchMode_7;

}


