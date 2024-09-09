
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Adc_Ip_DoCalibration/16:
  Jump functions of caller  Adc_Ip_SetSoftwarePretrigger/15:
  Jump functions of caller  Adc_Ip_Init/13:
  Jump functions of caller  Trgmux_Ip_Init/11:
  Jump functions of caller  Port_Init/10:
  Jump functions of caller  Clock_Ip_DistributePll/9:
  Jump functions of caller  Clock_Ip_GetPllStatus/8:
  Jump functions of caller  Clock_Ip_Init/6:
  Jump functions of caller  Adc_Ip_GetConvData/5:
  Jump functions of caller  main/4:
  Jump functions of caller  AdcConversionCompleteNotif/3:

 Propagating constants:

Not considering main for cloning; -fipa-cp-clone disabled.
Not considering AdcConversionCompleteNotif for cloning; -fipa-cp-clone disabled.

overall_size: 58, max_new_size: 11001

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

Adc_Ip_DoCalibration/16 (Adc_Ip_DoCalibration) @06dab380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/4 (868753 (estimated locally),8.09 per call) main/4 (107374 (estimated locally),1.00 per call) 
  Calls: 
Adc_Ip_SetSoftwarePretrigger/15 (Adc_Ip_SetSoftwarePretrigger) @06dab2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/4 (107374 (estimated locally),1.00 per call) 
  Calls: 
AdcHwUnit_0_BOARD_INITPERIPHERALS/14 (AdcHwUnit_0_BOARD_INITPERIPHERALS) @06da7990
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main/4 (addr)
  Availability: not_available
  Varpool flags: read-only
Adc_Ip_Init/13 (Adc_Ip_Init) @06dab1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/4 (107374 (estimated locally),1.00 per call) 
  Calls: 
Trgmux_Ip_xTrgmuxInitPB/12 (Trgmux_Ip_xTrgmuxInitPB) @06da7900
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main/4 (addr)
  Availability: not_available
  Varpool flags: read-only
Trgmux_Ip_Init/11 (Trgmux_Ip_Init) @06dab0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/4 (107374 (estimated locally),1.00 per call) 
  Calls: 
Port_Init/10 (Port_Init) @06dab000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/4 (107374 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_DistributePll/9 (Clock_Ip_DistributePll) @06da2380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/4 (107374 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_GetPllStatus/8 (Clock_Ip_GetPllStatus) @06da2ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/4 (976127 (estimated locally),9.09 per call) 
  Calls: 
Mcu_aClockConfigPB/7 (Mcu_aClockConfigPB) @06da7750
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main/4 (addr)main/4 (addr)
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_Init/6 (Clock_Ip_Init) @06da2e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/4 (868753 (estimated locally),8.09 per call) main/4 (107374 (estimated locally),1.00 per call) 
  Calls: 
Adc_Ip_GetConvData/5 (Adc_Ip_GetConvData) @06da2c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/4 (1073741824 (estimated locally),10000.02 per call) AdcConversionCompleteNotif/3 (118111600 (estimated locally),1.00 per call) 
  Calls: 
main/4 (main) @06da27e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Mcu_aClockConfigPB/7 (addr)Mcu_aClockConfigPB/7 (addr)Trgmux_Ip_xTrgmuxInitPB/12 (addr)AdcHwUnit_0_BOARD_INITPERIPHERALS/14 (addr)data/1 (write)
  Referring: 
  Availability: available
  Function flags: count:107374 (estimated locally) body only_called_at_startup executed_once optimize_size
  Called by: 
  Calls: Adc_Ip_GetConvData/5 (1073741824 (estimated locally),10000.02 per call) Adc_Ip_DoCalibration/16 (868753 (estimated locally),8.09 per call) Adc_Ip_DoCalibration/16 (107374 (estimated locally),1.00 per call) Adc_Ip_SetSoftwarePretrigger/15 (107374 (estimated locally),1.00 per call) Adc_Ip_Init/13 (107374 (estimated locally),1.00 per call) Trgmux_Ip_Init/11 (107374 (estimated locally),1.00 per call) Port_Init/10 (107374 (estimated locally),1.00 per call) Clock_Ip_DistributePll/9 (107374 (estimated locally),1.00 per call) Clock_Ip_GetPllStatus/8 (976127 (estimated locally),9.09 per call) Clock_Ip_Init/6 (868753 (estimated locally),8.09 per call) Clock_Ip_Init/6 (107374 (estimated locally),1.00 per call) 
AdcConversionCompleteNotif/3 (AdcConversionCompleteNotif) @06da2540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: notif_triggered/2 (write)data/1 (write)data/1 (read)data/1 (read)data/1 (read)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: Adc_Ip_GetConvData/5 (118111600 (estimated locally),1.00 per call) 
notif_triggered/2 (notif_triggered) @06d9fb88
  Type: variable definition analyzed
  Visibility: force_output externally_visible public
  References: 
  Referring: AdcConversionCompleteNotif/3 (write)
  Availability: available
  Varpool flags: initialized
data/1 (data) @06d9faf8
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



;; Function main (main, funcdef_no=2, decl_uid=6940, cgraph_uid=3, symbol_order=4) (executed once)

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
  clockStatus_26 = Clock_Ip_Init (&Mcu_aClockConfigPB[0]);
  # DEBUG clockStatus => clockStatus_26

  <bb 4> [local count: 976127]:
  # clockStatus_4 = PHI <clockStatus_12(2), clockStatus_26(3)>
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
  Port_Init (0B);
  # DEBUG BEGIN_STMT
  Trgmux_Ip_Init (&Trgmux_Ip_xTrgmuxInitPB);
  # DEBUG trgmuxStatus => NULL
  # DEBUG BEGIN_STMT
  Adc_Ip_Init (0, &AdcHwUnit_0_BOARD_INITPERIPHERALS);
  # DEBUG BEGIN_STMT
  Adc_Ip_SetSoftwarePretrigger (0, 4);
  # DEBUG BEGIN_STMT
  adcStatus_20 = Adc_Ip_DoCalibration (0);
  # DEBUG adcStatus => adcStatus_20
  # DEBUG BEGIN_STMT
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 868753]:
  # DEBUG BEGIN_STMT
  adcStatus_24 = Adc_Ip_DoCalibration (0);
  # DEBUG adcStatus => adcStatus_24

  <bb 8> [local count: 976127]:
  # adcStatus_5 = PHI <adcStatus_20(6), adcStatus_24(7)>
  # DEBUG adcStatus => adcStatus_5
  # DEBUG BEGIN_STMT
  if (adcStatus_5 != 0)
    goto <bb 7>; [89.00%]
  else
    goto <bb 10>; [11.00%]

  <bb 10> [local count: 107374]:

  <bb 9> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = Adc_Ip_GetConvData (0, 4);
  _3 = (long unsigned int) _2;
  data ={v} _3;
  # DEBUG BEGIN_STMT

  <bb 12> [local count: 1073741824]:
  goto <bb 9>; [100.00%]

}


