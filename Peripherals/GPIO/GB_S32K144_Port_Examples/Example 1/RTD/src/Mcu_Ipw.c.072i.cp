
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Power_Ip_EnableSleepOnExit/16:
  Jump functions of caller  Power_Ip_DisableSleepOnExit/15:
  Jump functions of caller  Power_Ip_GetResetRawValue/14:
  Jump functions of caller  Power_Ip_GetResetReason/13:
  Jump functions of caller  Power_Ip_SetMode/12:
  Jump functions of caller  Clock_Ip_GetPllStatus/11:
  Jump functions of caller  Clock_Ip_DistributePll/10:
  Jump functions of caller  Clock_Ip_InitClock/9:
  Jump functions of caller  Power_Ip_Init/8:
  Jump functions of caller  Mcu_Ipw_SleepOnExit/7:
  Jump functions of caller  Mcu_Ipw_GetResetRawValue/6:
  Jump functions of caller  Mcu_Ipw_GetResetReason/5:
  Jump functions of caller  Mcu_Ipw_SetMode/4:
  Jump functions of caller  Mcu_Ipw_GetPllStatus/3:
  Jump functions of caller  Mcu_Ipw_DistributePllClock/2:
  Jump functions of caller  Mcu_Ipw_InitClock/1:
  Jump functions of caller  Mcu_Ipw_Init/0:

 Propagating constants:

Not considering Mcu_Ipw_SleepOnExit for cloning; -fipa-cp-clone disabled.
Not considering Mcu_Ipw_GetResetRawValue for cloning; -fipa-cp-clone disabled.
Not considering Mcu_Ipw_GetResetReason for cloning; -fipa-cp-clone disabled.
Not considering Mcu_Ipw_SetMode for cloning; -fipa-cp-clone disabled.
Not considering Mcu_Ipw_GetPllStatus for cloning; -fipa-cp-clone disabled.
Not considering Mcu_Ipw_DistributePllClock for cloning; -fipa-cp-clone disabled.
Not considering Mcu_Ipw_InitClock for cloning; -fipa-cp-clone disabled.
Not considering Mcu_Ipw_Init for cloning; -fipa-cp-clone disabled.

overall_size: 47, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Mcu_Ipw_SleepOnExit/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Mcu_Ipw_GetResetRawValue/6:
  Node: Mcu_Ipw_GetResetReason/5:
  Node: Mcu_Ipw_SetMode/4:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Mcu_Ipw_GetPllStatus/3:
  Node: Mcu_Ipw_DistributePllClock/2:
  Node: Mcu_Ipw_InitClock/1:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Mcu_Ipw_Init/0:
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

Power_Ip_EnableSleepOnExit/16 (Power_Ip_EnableSleepOnExit) @06895d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Mcu_Ipw_SleepOnExit/7 (536870913 (estimated locally),0.50 per call) 
  Calls: 
Power_Ip_DisableSleepOnExit/15 (Power_Ip_DisableSleepOnExit) @06895c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Mcu_Ipw_SleepOnExit/7 (536870913 (estimated locally),0.50 per call) 
  Calls: 
Power_Ip_GetResetRawValue/14 (Power_Ip_GetResetRawValue) @06895a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Mcu_Ipw_GetResetRawValue/6 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Power_Ip_GetResetReason/13 (Power_Ip_GetResetReason) @068958c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Mcu_Ipw_GetResetReason/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Power_Ip_SetMode/12 (Power_Ip_SetMode) @06895700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Mcu_Ipw_SetMode/4 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_GetPllStatus/11 (Clock_Ip_GetPllStatus) @06895540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Mcu_Ipw_GetPllStatus/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_DistributePll/10 (Clock_Ip_DistributePll) @06895380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Mcu_Ipw_DistributePllClock/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_InitClock/9 (Clock_Ip_InitClock) @068951c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Mcu_Ipw_InitClock/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Power_Ip_Init/8 (Power_Ip_Init) @06895000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Mcu_Ipw_Init/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Mcu_Ipw_SleepOnExit/7 (Mcu_Ipw_SleepOnExit) @069482a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Power_Ip_EnableSleepOnExit/16 (536870913 (estimated locally),0.50 per call) Power_Ip_DisableSleepOnExit/15 (536870913 (estimated locally),0.50 per call) 
Mcu_Ipw_GetResetRawValue/6 (Mcu_Ipw_GetResetRawValue) @06948ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Power_Ip_GetResetRawValue/14 (1073741824 (estimated locally),1.00 per call) 
Mcu_Ipw_GetResetReason/5 (Mcu_Ipw_GetResetReason) @06948c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Power_Ip_GetResetReason/13 (1073741824 (estimated locally),1.00 per call) 
Mcu_Ipw_SetMode/4 (Mcu_Ipw_SetMode) @069489a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Power_Ip_SetMode/12 (1073741824 (estimated locally),1.00 per call) 
Mcu_Ipw_GetPllStatus/3 (Mcu_Ipw_GetPllStatus) @06948700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_GetPllStatus/11 (1073741824 (estimated locally),1.00 per call) 
Mcu_Ipw_DistributePllClock/2 (Mcu_Ipw_DistributePllClock) @06948460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_DistributePll/10 (1073741824 (estimated locally),1.00 per call) 
Mcu_Ipw_InitClock/1 (Mcu_Ipw_InitClock) @069481c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_InitClock/9 (1073741824 (estimated locally),1.00 per call) 
Mcu_Ipw_Init/0 (Mcu_Ipw_Init) @06945ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Power_Ip_Init/8 (1073741824 (estimated locally),1.00 per call) 

;; Function Mcu_Ipw_Init (Mcu_Ipw_Init, funcdef_no=0, decl_uid=5924, cgraph_uid=1, symbol_order=0)

Modification phase of node Mcu_Ipw_Init/0
Mcu_Ipw_Init (const struct Mcu_HwIPsConfigType * HwIPsConfigPtr)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Power_Ip_Init (HwIPsConfigPtr_2(D));
  # DEBUG BEGIN_STMT
  return;

}



;; Function Mcu_Ipw_InitClock (Mcu_Ipw_InitClock, funcdef_no=1, decl_uid=5928, cgraph_uid=2, symbol_order=1)

Modification phase of node Mcu_Ipw_InitClock/1
Mcu_Ipw_InitClock (const struct Mcu_ClockConfigType * ClockConfigPtr)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Clock_Ip_InitClock (ClockConfigPtr_2(D));
  return;

}



;; Function Mcu_Ipw_DistributePllClock (Mcu_Ipw_DistributePllClock, funcdef_no=2, decl_uid=5930, cgraph_uid=3, symbol_order=2)

Modification phase of node Mcu_Ipw_DistributePllClock/2
Mcu_Ipw_DistributePllClock ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Clock_Ip_DistributePll ();
  return;

}



;; Function Mcu_Ipw_GetPllStatus (Mcu_Ipw_GetPllStatus, funcdef_no=3, decl_uid=5932, cgraph_uid=4, symbol_order=3)

Modification phase of node Mcu_Ipw_GetPllStatus/3
Mcu_Ipw_GetPllStatus ()
{
  Mcu_PllStatusType PllStatus;
  <unnamed type> _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Clock_Ip_GetPllStatus ();
  switch (_1) <default: <L2> [33.33%], case 0: <L6> [33.33%], case 1: <L1> [33.33%]>

  <bb 3> [local count: 357878150]:
<L1>:
  # DEBUG BEGIN_STMT
  # DEBUG PllStatus => 204
  # DEBUG BEGIN_STMT
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 357878150]:
<L2>:
  # DEBUG BEGIN_STMT
  # DEBUG PllStatus => 90
  # DEBUG BEGIN_STMT

  <bb 5> [local count: 1073634451]:
  # PllStatus_2 = PHI <51(2), 204(3), 90(4)>
<L6>:
  # DEBUG PllStatus => PllStatus_2
  # DEBUG BEGIN_STMT
  return PllStatus_2;

}



;; Function Mcu_Ipw_SetMode (Mcu_Ipw_SetMode, funcdef_no=4, decl_uid=5926, cgraph_uid=5, symbol_order=4)

Modification phase of node Mcu_Ipw_SetMode/4
Mcu_Ipw_SetMode (const struct Mcu_ModeConfigType * ModeConfigPtr)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Power_Ip_SetMode (ModeConfigPtr_2(D));
  return;

}



;; Function Mcu_Ipw_GetResetReason (Mcu_Ipw_GetResetReason, funcdef_no=5, decl_uid=5934, cgraph_uid=6, symbol_order=5)

Modification phase of node Mcu_Ipw_GetResetReason/5
Mcu_Ipw_GetResetReason ()
{
  Mcu_ResetType _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _3 = Power_Ip_GetResetReason ();
  return _3;

}



;; Function Mcu_Ipw_GetResetRawValue (Mcu_Ipw_GetResetRawValue, funcdef_no=6, decl_uid=5936, cgraph_uid=7, symbol_order=6)

Modification phase of node Mcu_Ipw_GetResetRawValue/6
Mcu_Ipw_GetResetRawValue ()
{
  Mcu_RawResetType _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _3 = Power_Ip_GetResetRawValue ();
  return _3;

}



;; Function Mcu_Ipw_SleepOnExit (Mcu_Ipw_SleepOnExit, funcdef_no=7, decl_uid=5938, cgraph_uid=8, symbol_order=7)

Modification phase of node Mcu_Ipw_SleepOnExit/7
Mcu_Ipw_SleepOnExit (Mcu_SleepOnExitType SleepOnExit)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  if (SleepOnExit_2(D) == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Power_Ip_DisableSleepOnExit ();
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Power_Ip_EnableSleepOnExit ();

  <bb 5> [local count: 1073741824]:
  return;

}


