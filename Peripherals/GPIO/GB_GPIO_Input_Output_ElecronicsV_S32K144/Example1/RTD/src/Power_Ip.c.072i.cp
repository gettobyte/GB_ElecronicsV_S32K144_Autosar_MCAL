
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Power_Ip_CM4_EnableSleepOnExit/21:
  Jump functions of caller  Power_Ip_CM4_DisableSleepOnExit/20:
  Jump functions of caller  Power_Ip_SMC_AllowedModesConfig/19:
  Jump functions of caller  Power_Ip_PMC_PowerInit/18:
  Jump functions of caller  Power_Ip_RCM_ResetInit/17:
  Jump functions of caller  Power_Ip_RCM_GetResetRawValue/16:
  Jump functions of caller  Power_Ip_RCM_GetResetReason/14:
  Jump functions of caller  ReportPowerErrors/13:
  Jump functions of caller  Power_Ip_SMC_ModeConfig/12:
  Jump functions of caller  Power_Ip_SMC_ModeCheckEntry/11:
  Jump functions of caller  ReportPowerErrorsEmptyCallback/10:
  Jump functions of caller  Power_Ip_InstallNotificationsCallback/9:
  Jump functions of caller  Power_Ip_EnableSleepOnExit/8:
  Jump functions of caller  Power_Ip_DisableSleepOnExit/7:
  Jump functions of caller  Power_Ip_InitPower/6:
  Jump functions of caller  Power_Ip_InitReset/5:
  Jump functions of caller  Power_Ip_GetResetRawValue/4:
  Jump functions of caller  Power_Ip_GetResetReason/3:
  Jump functions of caller  Power_Ip_SetMode/1:

 Propagating constants:

Not considering Power_Ip_InstallNotificationsCallback for cloning; -fipa-cp-clone disabled.
Not considering Power_Ip_EnableSleepOnExit for cloning; -fipa-cp-clone disabled.
Not considering Power_Ip_DisableSleepOnExit for cloning; -fipa-cp-clone disabled.
Not considering Power_Ip_InitPower for cloning; -fipa-cp-clone disabled.
Not considering Power_Ip_InitReset for cloning; -fipa-cp-clone disabled.
Not considering Power_Ip_GetResetRawValue for cloning; -fipa-cp-clone disabled.
Not considering Power_Ip_GetResetReason for cloning; -fipa-cp-clone disabled.
Not considering Power_Ip_SetMode for cloning; -fipa-cp-clone disabled.

overall_size: 57, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Power_Ip_InstallNotificationsCallback/9:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Power_Ip_EnableSleepOnExit/8:
  Node: Power_Ip_DisableSleepOnExit/7:
  Node: Power_Ip_InitPower/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Power_Ip_InitReset/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Power_Ip_GetResetRawValue/4:
  Node: Power_Ip_GetResetReason/3:
  Node: Power_Ip_SetMode/1:
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

Power_Ip_CM4_EnableSleepOnExit/21 (Power_Ip_CM4_EnableSleepOnExit) @06ffe000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_EnableSleepOnExit/8 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Power_Ip_CM4_DisableSleepOnExit/20 (Power_Ip_CM4_DisableSleepOnExit) @06ffae00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_DisableSleepOnExit/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Power_Ip_SMC_AllowedModesConfig/19 (Power_Ip_SMC_AllowedModesConfig) @06ffac40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_InitPower/6 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Power_Ip_PMC_PowerInit/18 (Power_Ip_PMC_PowerInit) @06ffab60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_InitPower/6 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Power_Ip_RCM_ResetInit/17 (Power_Ip_RCM_ResetInit) @06ffa9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_InitReset/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Power_Ip_RCM_GetResetRawValue/16 (Power_Ip_RCM_GetResetRawValue) @06ffa7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_GetResetRawValue/4 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
resetReasonArray.5767/15 (resetReasonArray) @06ffc438
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Power_Ip_GetResetReason/3 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Power_Ip_RCM_GetResetReason/14 (Power_Ip_RCM_GetResetReason) @06ffa540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_GetResetReason/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ReportPowerErrors/13 (ReportPowerErrors) @06ffa380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_SetMode/1 (719407023 (estimated locally),0.67 per call) 
  Calls: 
Power_Ip_SMC_ModeConfig/12 (Power_Ip_SMC_ModeConfig) @06ffa2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_SetMode/1 (536870913 (estimated locally),0.50 per call) 
  Calls: 
Power_Ip_SMC_ModeCheckEntry/11 (Power_Ip_SMC_ModeCheckEntry) @06ffa1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_SetMode/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ReportPowerErrorsEmptyCallback/10 (ReportPowerErrorsEmptyCallback) @06ff78c0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: powerReportErrorsCallback/0 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Power_Ip_InstallNotificationsCallback/9 (Power_Ip_InstallNotificationsCallback) @06ff7620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: powerReportErrorsCallback/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Power_Ip_EnableSleepOnExit/8 (Power_Ip_EnableSleepOnExit) @06ff70e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Power_Ip_CM4_EnableSleepOnExit/21 (1073741824 (estimated locally),1.00 per call) 
Power_Ip_DisableSleepOnExit/7 (Power_Ip_DisableSleepOnExit) @06ff7d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Power_Ip_CM4_DisableSleepOnExit/20 (1073741824 (estimated locally),1.00 per call) 
Power_Ip_InitPower/6 (Power_Ip_InitPower) @06ff7a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Power_Ip_SMC_AllowedModesConfig/19 (1073741824 (estimated locally),1.00 per call) Power_Ip_PMC_PowerInit/18 (1073741824 (estimated locally),1.00 per call) 
Power_Ip_InitReset/5 (Power_Ip_InitReset) @06ff77e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Power_Ip_RCM_ResetInit/17 (1073741824 (estimated locally),1.00 per call) 
Power_Ip_GetResetRawValue/4 (Power_Ip_GetResetRawValue) @06ff7540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Power_Ip_RCM_GetResetRawValue/16 (1073741824 (estimated locally),1.00 per call) 
Power_Ip_GetResetReason/3 (Power_Ip_GetResetReason) @06ff72a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: resetReasonArray.5767/15 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Power_Ip_RCM_GetResetReason/14 (1073741824 (estimated locally),1.00 per call) 
Power_Ip_SetMode/1 (Power_Ip_SetMode) @06908e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ReportPowerErrors/13 (719407023 (estimated locally),0.67 per call) Power_Ip_SMC_ModeConfig/12 (536870913 (estimated locally),0.50 per call) Power_Ip_SMC_ModeCheckEntry/11 (1073741824 (estimated locally),1.00 per call) 
powerReportErrorsCallback/0 (powerReportErrorsCallback) @0691f168
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: ReportPowerErrorsEmptyCallback/10 (addr)
  Referring: Power_Ip_InstallNotificationsCallback/9 (write)
  Availability: available
  Varpool flags: initialized

;; Function Power_Ip_SetMode (Power_Ip_SetMode, funcdef_no=0, decl_uid=5626, cgraph_uid=1, symbol_order=1)

Modification phase of node Power_Ip_SetMode/1
Power_Ip_SetMode (const struct Power_Ip_ModeConfigType * Power_Ip_pModeConfigPtr)
{
  Power_Ip_PowerModeType ePowerMode;
  uint32 ePowerSwitchMode;
  <unnamed type> _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ePowerMode_5 = Power_Ip_pModeConfigPtr_4(D)->Power_Ip_ePowerMode;
  # DEBUG ePowerMode => ePowerMode_5
  # DEBUG BEGIN_STMT
  _1 = Power_Ip_SMC_ModeCheckEntry (ePowerMode_5);
  if (_1 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  ePowerSwitchMode_8 = Power_Ip_SMC_ModeConfig (Power_Ip_pModeConfigPtr_4(D));
  # DEBUG ePowerSwitchMode => ePowerSwitchMode_8
  # DEBUG BEGIN_STMT
  if (ePowerSwitchMode_8 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 719407023]:
  # DEBUG ePowerSwitchMode => NULL
  # DEBUG BEGIN_STMT
  ReportPowerErrors (3, 255);

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Power_Ip_GetResetReason (Power_Ip_GetResetReason, funcdef_no=2, decl_uid=5628, cgraph_uid=3, symbol_order=3)

Modification phase of node Power_Ip_GetResetReason/3
Power_Ip_GetResetReason ()
{
  Power_Ip_ResetType eResetReason;
  static const Power_Ip_ResetType resetReasonArray[15] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
  uint32 resetVal;
  <unnamed type> _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG eResetReason => 14
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  resetVal_3 = Power_Ip_RCM_GetResetReason ();
  # DEBUG resetVal => resetVal_3
  # DEBUG BEGIN_STMT
  # DEBUG resetReasonIndex => resetVal_3
  # DEBUG INLINE_ENTRY Power_Ip_ConvertIntergeToResetType
  # DEBUG BEGIN_STMT
  # DEBUG eResetReason => 12
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _4 = resetReasonArray[resetVal_3];
  if (_4 <= 14)
    goto <bb 3>; [65.00%]
  else
    goto <bb 4>; [35.00%]

  <bb 3> [local count: 697932186]:
  # DEBUG BEGIN_STMT
  # DEBUG eResetReason => _4

  <bb 4> [local count: 1073741824]:
  # eResetReason_5 = PHI <12(2), _4(3)>
  # DEBUG eResetReason => eResetReason_5
  # DEBUG BEGIN_STMT
  # DEBUG resetReasonIndex => NULL
  # DEBUG eResetReason => NULL
  # DEBUG eResetReason => eResetReason_5
  # DEBUG BEGIN_STMT
  return eResetReason_5;

}



;; Function Power_Ip_GetResetRawValue (Power_Ip_GetResetRawValue, funcdef_no=3, decl_uid=5630, cgraph_uid=4, symbol_order=4)

Modification phase of node Power_Ip_GetResetRawValue/4
Power_Ip_GetResetRawValue ()
{
  Power_Ip_RawResetType ResetReason;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ResetReason_3 = Power_Ip_RCM_GetResetRawValue ();
  # DEBUG ResetReason => ResetReason_3
  # DEBUG BEGIN_STMT
  return ResetReason_3;

}



;; Function Power_Ip_InitReset (Power_Ip_InitReset, funcdef_no=4, decl_uid=5622, cgraph_uid=5, symbol_order=5)

Modification phase of node Power_Ip_InitReset/5
Power_Ip_InitReset (const struct Power_Ip_HwIPsConfigType * Power_Ip_pHwIPsConfigPtr)
{
  const struct Power_Ip_RCM_ConfigType * _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Power_Ip_pHwIPsConfigPtr_3(D)->RCM_pConfig;
  Power_Ip_RCM_ResetInit (_1);
  return;

}



;; Function Power_Ip_InitPower (Power_Ip_InitPower, funcdef_no=5, decl_uid=5624, cgraph_uid=6, symbol_order=6)

Modification phase of node Power_Ip_InitPower/6
Power_Ip_InitPower (const struct Power_Ip_HwIPsConfigType * Power_Ip_pHwIPsConfigPtr)
{
  const struct Power_Ip_PMC_ConfigType * _1;
  const struct Power_Ip_SMC_ConfigType * _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Power_Ip_pHwIPsConfigPtr_4(D)->PMC_pConfig;
  Power_Ip_PMC_PowerInit (_1);
  # DEBUG BEGIN_STMT
  _2 = Power_Ip_pHwIPsConfigPtr_4(D)->SMC_pConfig;
  Power_Ip_SMC_AllowedModesConfig (_2);
  return;

}



;; Function Power_Ip_DisableSleepOnExit (Power_Ip_DisableSleepOnExit, funcdef_no=6, decl_uid=5634, cgraph_uid=7, symbol_order=7)

Modification phase of node Power_Ip_DisableSleepOnExit/7
Power_Ip_DisableSleepOnExit ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Power_Ip_CM4_DisableSleepOnExit ();
  return;

}



;; Function Power_Ip_EnableSleepOnExit (Power_Ip_EnableSleepOnExit, funcdef_no=7, decl_uid=5636, cgraph_uid=8, symbol_order=8)

Modification phase of node Power_Ip_EnableSleepOnExit/8
Power_Ip_EnableSleepOnExit ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Power_Ip_CM4_EnableSleepOnExit ();
  return;

}



;; Function Power_Ip_InstallNotificationsCallback (Power_Ip_InstallNotificationsCallback, funcdef_no=8, decl_uid=5632, cgraph_uid=9, symbol_order=9)

Modification phase of node Power_Ip_InstallNotificationsCallback/9
Power_Ip_InstallNotificationsCallback (void (*Power_Ip_ReportErrorsCallbackType) (Power_Ip_PowerReportErrorType, uint8) reportErrorsCallback)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  powerReportErrorsCallback = reportErrorsCallback_2(D);
  return;

}


