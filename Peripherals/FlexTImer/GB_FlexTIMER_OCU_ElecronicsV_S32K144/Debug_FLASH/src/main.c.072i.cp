
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Ftm_Ocu_Ip_EnableNotification/19:
  Jump functions of caller  Ftm_Ocu_Ip_StartChannel/18:
  Jump functions of caller  Ftm_Ocu_Ip_Init/16:
  Jump functions of caller  FTM_0_CH_0_CH_1_ISR/15:
  Jump functions of caller  IntCtrl_Ip_InstallHandler/14:
  Jump functions of caller  IntCtrl_Ip_EnableIrq/13:
  Jump functions of caller  Port_Init/12:
  Jump functions of caller  Clock_Ip_DistributePll/11:
  Jump functions of caller  Clock_Ip_GetPllStatus/10:
  Jump functions of caller  Clock_Ip_Init/8:
  Jump functions of caller  main/7:
  Jump functions of caller  OcuNotification/6:

 Propagating constants:

Not considering main for cloning; -fipa-cp-clone disabled.
Not considering OcuNotification for cloning; -fipa-cp-clone disabled.

overall_size: 45, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: main/7:
  Node: OcuNotification/6:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Ftm_Ocu_Ip_EnableNotification/19 (Ftm_Ocu_Ip_EnableNotification) @06dfb7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/7 (53687 (estimated locally),1.00 per call) 
  Calls: 
Ftm_Ocu_Ip_StartChannel/18 (Ftm_Ocu_Ip_StartChannel) @06dfb700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/7 (53687 (estimated locally),1.00 per call) 
  Calls: 
Ftm_Ocu_Ip_ModuleCfgPB_BOARD_INITPERIPHERALS/17 (Ftm_Ocu_Ip_ModuleCfgPB_BOARD_INITPERIPHERALS) @06df5b40
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main/7 (addr)
  Availability: not_available
  Varpool flags: read-only
Ftm_Ocu_Ip_Init/16 (Ftm_Ocu_Ip_Init) @06dfb620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/7 (53687 (estimated locally),1.00 per call) 
  Calls: 
FTM_0_CH_0_CH_1_ISR/15 (FTM_0_CH_0_CH_1_ISR) @06dfb540
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: main/7 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
IntCtrl_Ip_InstallHandler/14 (IntCtrl_Ip_InstallHandler) @06dfb460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/7 (53687 (estimated locally),1.00 per call) 
  Calls: 
IntCtrl_Ip_EnableIrq/13 (IntCtrl_Ip_EnableIrq) @06dfb380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/7 (53687 (estimated locally),1.00 per call) 
  Calls: 
Port_Init/12 (Port_Init) @06dfb2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/7 (53687 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_DistributePll/11 (Clock_Ip_DistributePll) @06dfb1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/7 (53687 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_GetPllStatus/10 (Clock_Ip_GetPllStatus) @06dfb0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/7 (488064 (estimated locally),9.09 per call) 
  Calls: 
Mcu_aClockConfigPB/9 (Mcu_aClockConfigPB) @06df5900
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main/7 (addr)main/7 (addr)
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_Init/8 (Clock_Ip_Init) @06dfb000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/7 (434377 (estimated locally),8.09 per call) main/7 (53687 (estimated locally),1.00 per call) 
  Calls: 
main/7 (main) @06df3c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Mcu_aClockConfigPB/9 (addr)Mcu_aClockConfigPB/9 (addr)FTM_0_CH_0_CH_1_ISR/15 (addr)Ftm_Ocu_Ip_ModuleCfgPB_BOARD_INITPERIPHERALS/17 (addr)Toggle_Led/4 (read)Toggle_Led/4 (write)
  Referring: 
  Availability: available
  Function flags: count:53687 (estimated locally) body only_called_at_startup executed_once optimize_size
  Called by: 
  Calls: Ftm_Ocu_Ip_EnableNotification/19 (53687 (estimated locally),1.00 per call) Ftm_Ocu_Ip_StartChannel/18 (53687 (estimated locally),1.00 per call) Ftm_Ocu_Ip_Init/16 (53687 (estimated locally),1.00 per call) IntCtrl_Ip_InstallHandler/14 (53687 (estimated locally),1.00 per call) IntCtrl_Ip_EnableIrq/13 (53687 (estimated locally),1.00 per call) Port_Init/12 (53687 (estimated locally),1.00 per call) Clock_Ip_DistributePll/11 (53687 (estimated locally),1.00 per call) Clock_Ip_GetPllStatus/10 (488064 (estimated locally),9.09 per call) Clock_Ip_Init/8 (434377 (estimated locally),8.09 per call) Clock_Ip_Init/8 (53687 (estimated locally),1.00 per call) 
OcuNotification/6 (OcuNotification) @06df39a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: count/5 (read)count/5 (write)Toggle_Led/4 (write)count/5 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
count/5 (count) @06df0ee8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: OcuNotification/6 (read)OcuNotification/6 (write)OcuNotification/6 (write)
  Availability: available
  Varpool flags: initialized
Toggle_Led/4 (Toggle_Led) @06df0e58
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: OcuNotification/6 (write)main/7 (read)main/7 (write)
  Availability: available
  Varpool flags: initialized
exit_code/3 (exit_code) @06df0ca8
  Type: variable definition analyzed
  Visibility: force_output externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized

;; Function OcuNotification (OcuNotification, funcdef_no=3, decl_uid=6798, cgraph_uid=4, symbol_order=6)

Modification phase of node OcuNotification/6
OcuNotification ()
{
  long unsigned int count.0_1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  count.0_1 = count;
  _2 = count.0_1 + 1;
  count = _2;
  if (count.0_1 > 13999)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Toggle_Led ={v} 1;
  # DEBUG BEGIN_STMT
  count = 0;

  <bb 4> [local count: 1073741824]:
  return;

}



;; Function main (main, funcdef_no=4, decl_uid=6802, cgraph_uid=5, symbol_order=7) (executed once)

Modification phase of node main/7
main ()
{
  Clock_Ip_StatusType clockStatus;
  <unnamed type> _1;
  _Bool Toggle_Led.2_2;

  <bb 2> [local count: 53687]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  clockStatus_9 = Clock_Ip_Init (&Mcu_aClockConfigPB[0]);
  # DEBUG clockStatus => clockStatus_9
  # DEBUG BEGIN_STMT
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 434377]:
  # DEBUG BEGIN_STMT
  clockStatus_20 = Clock_Ip_Init (&Mcu_aClockConfigPB[0]);
  # DEBUG clockStatus => clockStatus_20

  <bb 4> [local count: 488064]:
  # clockStatus_3 = PHI <clockStatus_9(2), clockStatus_20(3)>
  # DEBUG clockStatus => clockStatus_3
  # DEBUG BEGIN_STMT
  if (clockStatus_3 != 0)
    goto <bb 3>; [89.00%]
  else
    goto <bb 10>; [11.00%]

  <bb 10> [local count: 53687]:

  <bb 5> [local count: 488064]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Clock_Ip_GetPllStatus ();
  if (_1 != 0)
    goto <bb 12>; [89.00%]
  else
    goto <bb 6>; [11.00%]

  <bb 12> [local count: 434377]:
  goto <bb 5>; [100.00%]

  <bb 6> [local count: 53687]:
  # DEBUG BEGIN_STMT
  Clock_Ip_DistributePll ();
  # DEBUG BEGIN_STMT
  Port_Init (0B);
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_EnableIrq (99);
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_InstallHandler (99, FTM_0_CH_0_CH_1_ISR, 0B);
  # DEBUG BEGIN_STMT
  Ftm_Ocu_Ip_Init (&Ftm_Ocu_Ip_ModuleCfgPB_BOARD_INITPERIPHERALS);
  # DEBUG BEGIN_STMT
  Ftm_Ocu_Ip_StartChannel (0, 0);
  # DEBUG BEGIN_STMT
  Ftm_Ocu_Ip_EnableNotification (0, 0);

  <bb 7> [local count: 536870913]:

  <bb 8> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Toggle_Led.2_2 ={v} Toggle_Led;
  if (Toggle_Led.2_2 != 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 11> [local count: 536870913]:
  goto <bb 8>; [100.00%]

  <bb 9> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Toggle_Led ={v} 0;
  goto <bb 7>; [100.00%]

}


