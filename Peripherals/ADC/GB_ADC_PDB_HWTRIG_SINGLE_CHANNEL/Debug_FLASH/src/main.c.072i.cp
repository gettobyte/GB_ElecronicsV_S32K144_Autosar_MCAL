
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Pdb_Adc_Ip_Init/19:
  Jump functions of caller  Adc_Ip_DoCalibration/18:
  Jump functions of caller  Adc_Ip_Init/16:
  Jump functions of caller  Trgmux_Ip_Init/14:
  Jump functions of caller  Port_Init/13:
  Jump functions of caller  IntCtrl_Ip_EnableIrq/12:
  Jump functions of caller  Adc_0_Isr/11:
  Jump functions of caller  IntCtrl_Ip_InstallHandler/10:
  Jump functions of caller  Clock_Ip_DistributePll/9:
  Jump functions of caller  Clock_Ip_GetPllStatus/8:
  Jump functions of caller  Clock_Ip_Init/6:
  Jump functions of caller  Adc_Ip_GetConvData/5:
  Jump functions of caller  main/4:
  Jump functions of caller  AdcConversionCompleteNotif/3:

 Propagating constants:

Not considering main for cloning; -fipa-cp-clone disabled.
Not considering AdcConversionCompleteNotif for cloning; -fipa-cp-clone disabled.

overall_size: 64, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: main/4:
  Node: AdcConversionCompleteNotif/3:
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

PdbHwUnit_0_BOARD_INITPERIPHERALS/20 (PdbHwUnit_0_BOARD_INITPERIPHERALS) @06e5df30
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main/4 (addr)
  Availability: not_available
  Varpool flags: read-only
Pdb_Adc_Ip_Init/19 (Pdb_Adc_Ip_Init) @06e651c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/4 (107374 (estimated locally),1.00 per call) 
  Calls: 
Adc_Ip_DoCalibration/18 (Adc_Ip_DoCalibration) @06e650e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/4 (868753 (estimated locally),8.09 per call) main/4 (107374 (estimated locally),1.00 per call) 
  Calls: 
AdcHwUnit_0_BOARD_INITPERIPHERALS/17 (AdcHwUnit_0_BOARD_INITPERIPHERALS) @06e5de10
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main/4 (addr)
  Availability: not_available
  Varpool flags: read-only
Adc_Ip_Init/16 (Adc_Ip_Init) @06e65000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/4 (107374 (estimated locally),1.00 per call) 
  Calls: 
Trgmux_Ip_xTrgmuxInitPB/15 (Trgmux_Ip_xTrgmuxInitPB) @06e5dd80
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main/4 (addr)
  Availability: not_available
  Varpool flags: read-only
Trgmux_Ip_Init/14 (Trgmux_Ip_Init) @06e5cee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/4 (107374 (estimated locally),1.00 per call) 
  Calls: 
Port_Init/13 (Port_Init) @06e5ce00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/4 (107374 (estimated locally),1.00 per call) 
  Calls: 
IntCtrl_Ip_EnableIrq/12 (IntCtrl_Ip_EnableIrq) @06e5cd20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/4 (107374 (estimated locally),1.00 per call) 
  Calls: 
Adc_0_Isr/11 (Adc_0_Isr) @06e5cc40
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: main/4 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
IntCtrl_Ip_InstallHandler/10 (IntCtrl_Ip_InstallHandler) @06e5cb60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/4 (107374 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_DistributePll/9 (Clock_Ip_DistributePll) @06e5ca80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/4 (107374 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_GetPllStatus/8 (Clock_Ip_GetPllStatus) @06e5c9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/4 (976127 (estimated locally),9.09 per call) 
  Calls: 
Mcu_aClockConfigPB/7 (Mcu_aClockConfigPB) @06e5db40
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main/4 (addr)main/4 (addr)
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_Init/6 (Clock_Ip_Init) @06e5c8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/4 (868753 (estimated locally),8.09 per call) main/4 (107374 (estimated locally),1.00 per call) 
  Calls: 
Adc_Ip_GetConvData/5 (Adc_Ip_GetConvData) @06e5c700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/4 (1073741824 (estimated locally),10000.02 per call) AdcConversionCompleteNotif/3 (118111600 (estimated locally),1.00 per call) 
  Calls: 
main/4 (main) @06e5c2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Mcu_aClockConfigPB/7 (addr)Mcu_aClockConfigPB/7 (addr)Adc_0_Isr/11 (addr)Trgmux_Ip_xTrgmuxInitPB/15 (addr)AdcHwUnit_0_BOARD_INITPERIPHERALS/17 (addr)PdbHwUnit_0_BOARD_INITPERIPHERALS/20 (addr)data/1 (write)
  Referring: 
  Availability: available
  Function flags: count:107374 (estimated locally) body only_called_at_startup executed_once optimize_size
  Called by: 
  Calls: Adc_Ip_GetConvData/5 (1073741824 (estimated locally),10000.02 per call) Pdb_Adc_Ip_Init/19 (107374 (estimated locally),1.00 per call) Adc_Ip_DoCalibration/18 (868753 (estimated locally),8.09 per call) Adc_Ip_DoCalibration/18 (107374 (estimated locally),1.00 per call) Adc_Ip_Init/16 (107374 (estimated locally),1.00 per call) Trgmux_Ip_Init/14 (107374 (estimated locally),1.00 per call) Port_Init/13 (107374 (estimated locally),1.00 per call) IntCtrl_Ip_EnableIrq/12 (107374 (estimated locally),1.00 per call) IntCtrl_Ip_InstallHandler/10 (107374 (estimated locally),1.00 per call) Clock_Ip_DistributePll/9 (107374 (estimated locally),1.00 per call) Clock_Ip_GetPllStatus/8 (976127 (estimated locally),9.09 per call) Clock_Ip_Init/6 (868753 (estimated locally),8.09 per call) Clock_Ip_Init/6 (107374 (estimated locally),1.00 per call) 
AdcConversionCompleteNotif/3 (AdcConversionCompleteNotif) @06e5c000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: notif_triggered/2 (write)data/1 (write)data/1 (read)data/1 (read)data/1 (read)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: Adc_Ip_GetConvData/5 (118111600 (estimated locally),1.00 per call) 
notif_triggered/2 (notif_triggered) @06d12f30
  Type: variable definition analyzed
  Visibility: force_output externally_visible public
  References: 
  Referring: AdcConversionCompleteNotif/3 (write)
  Availability: available
  Varpool flags: initialized
data/1 (data) @06d12ea0
  Type: variable definition analyzed
  Visibility: force_output externally_visible public
  References: 
  Referring: AdcConversionCompleteNotif/3 (read)AdcConversionCompleteNotif/3 (write)AdcConversionCompleteNotif/3 (read)AdcConversionCompleteNotif/3 (read)main/4 (write)
  Availability: available
  Varpool flags:

;; Function AdcConversionCompleteNotif (AdcConversionCompleteNotif, funcdef_no=1, decl_uid=6656, cgraph_uid=2, symbol_order=3)

Modification phase of node AdcConversionCompleteNotif/3
AdcConversionCompleteNotif (const uint8 ControlChanIdx)
{
  short unsigned int _1;
  long unsigned int _2;
  long unsigned int data.1_3;
  long unsigned int data.2_4;
  long unsigned int _5;
  long unsigned int data.3_6;
  long unsigned int _7;
  _Bool iftmp.0_8;
  _Bool iftmp.0_14;
  _Bool iftmp.0_15;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  notif_triggered ={v} 1;
  # DEBUG BEGIN_STMT
  _1 = Adc_Ip_GetConvData (0, ControlChanIdx_11(D));
  _2 = (long unsigned int) _1;
  data ={v} _2;
  # DEBUG BEGIN_STMT

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  data.1_3 ={v} data;
  if (data.1_3 > 819)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 536870913]:
  data.2_4 ={v} data;
  _5 = data.2_4 + 4294966477;
  iftmp.0_15 = _5 > 150;
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 536870913]:
  data.3_6 ={v} data;
  _7 = 819 - data.3_6;
  iftmp.0_14 = _7 > 150;

  <bb 6> [local count: 1073741824]:
  # iftmp.0_8 = PHI <iftmp.0_15(4), iftmp.0_14(5)>
  if (iftmp.0_8 != 0)
    goto <bb 8>; [89.00%]
  else
    goto <bb 7>; [11.00%]

  <bb 8> [local count: 955630223]:
  goto <bb 3>; [100.00%]

  <bb 7> [local count: 118111601]:
  return;

}



;; Function main (main, funcdef_no=2, decl_uid=7053, cgraph_uid=3, symbol_order=4) (executed once)

Modification phase of node main/4
main ()
{
  Adc_Ip_StatusType adcStatus;
  Clock_Ip_StatusType clockStatus;
  <unnamed type> _1;
  short unsigned int _2;
  long unsigned int _3;

  <bb 2> [local count: 107374]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  clockStatus_12 = Clock_Ip_Init (&Mcu_aClockConfigPB[0]);
  # DEBUG clockStatus => clockStatus_12
  # DEBUG BEGIN_STMT
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 868753]:
  # DEBUG BEGIN_STMT
  clockStatus_28 = Clock_Ip_Init (&Mcu_aClockConfigPB[0]);
  # DEBUG clockStatus => clockStatus_28

  <bb 4> [local count: 976127]:
  # clockStatus_4 = PHI <clockStatus_12(2), clockStatus_28(3)>
  # DEBUG clockStatus => clockStatus_4
  # DEBUG BEGIN_STMT
  if (clockStatus_4 != 0)
    goto <bb 3>; [89.00%]
  else
    goto <bb 11>; [11.00%]

  <bb 11> [local count: 107374]:

  <bb 5> [local count: 976127]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Clock_Ip_GetPllStatus ();
  if (_1 != 0)
    goto <bb 13>; [89.00%]
  else
    goto <bb 6>; [11.00%]

  <bb 13> [local count: 868753]:
  goto <bb 5>; [100.00%]

  <bb 6> [local count: 107374]:
  # DEBUG BEGIN_STMT
  Clock_Ip_DistributePll ();
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_InstallHandler (39, Adc_0_Isr, 0B);
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_EnableIrq (39);
  # DEBUG BEGIN_STMT
  Port_Init (0B);
  # DEBUG BEGIN_STMT
  Trgmux_Ip_Init (&Trgmux_Ip_xTrgmuxInitPB);
  # DEBUG trgmuxStatus => NULL
  # DEBUG BEGIN_STMT
  Adc_Ip_Init (0, &AdcHwUnit_0_BOARD_INITPERIPHERALS);
  # DEBUG BEGIN_STMT
  adcStatus_21 = Adc_Ip_DoCalibration (0);
  # DEBUG adcStatus => adcStatus_21
  # DEBUG BEGIN_STMT
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 868753]:
  # DEBUG BEGIN_STMT
  adcStatus_26 = Adc_Ip_DoCalibration (0);
  # DEBUG adcStatus => adcStatus_26

  <bb 8> [local count: 976127]:
  # adcStatus_5 = PHI <adcStatus_21(6), adcStatus_26(7)>
  # DEBUG adcStatus => adcStatus_5
  # DEBUG BEGIN_STMT
  if (adcStatus_5 != 0)
    goto <bb 7>; [89.00%]
  else
    goto <bb 9>; [11.00%]

  <bb 9> [local count: 107374]:
  # DEBUG BEGIN_STMT
  Pdb_Adc_Ip_Init (0, &PdbHwUnit_0_BOARD_INITPERIPHERALS);

  <bb 10> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = Adc_Ip_GetConvData (0, 4);
  _3 = (long unsigned int) _2;
  data ={v} _3;
  # DEBUG BEGIN_STMT

  <bb 12> [local count: 1073741824]:
  goto <bb 10>; [100.00%]

}


