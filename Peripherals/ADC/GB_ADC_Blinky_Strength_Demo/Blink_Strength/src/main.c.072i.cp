
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Dio_WriteChannel/18:
  Jump functions of caller  Adc_Ip_StartConversion/17:
  Jump functions of caller  Adc_Ip_DoCalibration/16:
  Jump functions of caller  Adc_Ip_Init/14:
  Jump functions of caller  Port_Init/13:
  Jump functions of caller  Clock_Ip_DistributePll/12:
  Jump functions of caller  Clock_Ip_GetPllStatus/11:
  Jump functions of caller  Clock_Ip_Init/9:
  Jump functions of caller  Adc_Ip_GetConvData/7:
  Jump functions of caller  main/6:
    callsite  main/6 -> TestDelay/5 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x3fffffc
         VR  [0, 61602900]
    callsite  main/6 -> TestDelay/5 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x3fffffc
         VR  [0, 61602900]
  Jump functions of caller  TestDelay/5:
  Jump functions of caller  AdcConversionCompleteNotif/4:

 Propagating constants:

Not considering main for cloning; -fipa-cp-clone disabled.
Not considering TestDelay for cloning; -fipa-cp-clone disabled.
Not considering AdcConversionCompleteNotif for cloning; -fipa-cp-clone disabled.

overall_size: 82, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: main/6:
  Node: TestDelay/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: AdcConversionCompleteNotif/4:
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

Dio_WriteChannel/18 (Dio_WriteChannel) @06cd1d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/6 (1073741824 (estimated locally),10000.02 per call) main/6 (1073741824 (estimated locally),10000.02 per call) 
  Calls: 
Adc_Ip_StartConversion/17 (Adc_Ip_StartConversion) @06cd1c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/6 (107374 (estimated locally),1.00 per call) 
  Calls: 
Adc_Ip_DoCalibration/16 (Adc_Ip_DoCalibration) @06cd1b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/6 (868753 (estimated locally),8.09 per call) main/6 (107374 (estimated locally),1.00 per call) 
  Calls: 
AdcHwUnit_0_BOARD_INITPERIPHERALS/15 (AdcHwUnit_0_BOARD_INITPERIPHERALS) @06e4a000
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main/6 (addr)
  Availability: not_available
  Varpool flags: read-only
Adc_Ip_Init/14 (Adc_Ip_Init) @06cd1a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/6 (107374 (estimated locally),1.00 per call) 
  Calls: 
Port_Init/13 (Port_Init) @06cd19a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/6 (107374 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_DistributePll/12 (Clock_Ip_DistributePll) @06cd18c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/6 (107374 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_GetPllStatus/11 (Clock_Ip_GetPllStatus) @06cd17e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/6 (976127 (estimated locally),9.09 per call) 
  Calls: 
Mcu_aClockConfigPB/10 (Mcu_aClockConfigPB) @06ccce10
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main/6 (addr)main/6 (addr)
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_Init/9 (Clock_Ip_Init) @06cd1700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/6 (868753 (estimated locally),8.09 per call) main/6 (107374 (estimated locally),1.00 per call) 
  Calls: 
DelayTimer.6935/8 (DelayTimer) @06ccc900
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: TestDelay/5 (read)TestDelay/5 (write)TestDelay/5 (read)TestDelay/5 (write)
  Availability: available
  Varpool flags: initialized
Adc_Ip_GetConvData/7 (Adc_Ip_GetConvData) @06cd1460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/6 (1073741824 (estimated locally),10000.02 per call) main/6 (1073741824 (estimated locally),10000.02 per call) AdcConversionCompleteNotif/4 (118111600 (estimated locally),1.00 per call) 
  Calls: 
main/6 (main) @06cd1000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Mcu_aClockConfigPB/10 (addr)Mcu_aClockConfigPB/10 (addr)AdcHwUnit_0_BOARD_INITPERIPHERALS/15 (addr)
  Referring: 
  Availability: available
  Function flags: count:107374 (estimated locally) body only_called_at_startup executed_once optimize_size
  Called by: 
  Calls: TestDelay/5 (1073741824 (estimated locally),10000.02 per call) Adc_Ip_GetConvData/7 (1073741824 (estimated locally),10000.02 per call) Dio_WriteChannel/18 (1073741824 (estimated locally),10000.02 per call) TestDelay/5 (1073741824 (estimated locally),10000.02 per call) Adc_Ip_GetConvData/7 (1073741824 (estimated locally),10000.02 per call) Dio_WriteChannel/18 (1073741824 (estimated locally),10000.02 per call) Adc_Ip_StartConversion/17 (107374 (estimated locally),1.00 per call) Adc_Ip_DoCalibration/16 (868753 (estimated locally),8.09 per call) Adc_Ip_DoCalibration/16 (107374 (estimated locally),1.00 per call) Adc_Ip_Init/14 (107374 (estimated locally),1.00 per call) Port_Init/13 (107374 (estimated locally),1.00 per call) Clock_Ip_DistributePll/12 (107374 (estimated locally),1.00 per call) Clock_Ip_GetPllStatus/11 (976127 (estimated locally),9.09 per call) Clock_Ip_Init/9 (868753 (estimated locally),8.09 per call) Clock_Ip_Init/9 (107374 (estimated locally),1.00 per call) 
TestDelay/5 (TestDelay) @06cc5ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: DelayTimer.6935/8 (read)DelayTimer.6935/8 (write)DelayTimer.6935/8 (read)DelayTimer.6935/8 (write)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: main/6 (1073741824 (estimated locally),10000.02 per call) main/6 (1073741824 (estimated locally),10000.02 per call) 
  Calls: 
AdcConversionCompleteNotif/4 (AdcConversionCompleteNotif) @06cc5b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: notif_triggered/1 (write)data/3 (write)data/3 (read)data/3 (read)data/3 (read)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: Adc_Ip_GetConvData/7 (118111600 (estimated locally),1.00 per call) 
data/3 (data) @06cc4e10
  Type: variable definition analyzed
  Visibility: force_output externally_visible public
  References: 
  Referring: AdcConversionCompleteNotif/4 (write)AdcConversionCompleteNotif/4 (read)AdcConversionCompleteNotif/4 (read)AdcConversionCompleteNotif/4 (read)
  Availability: available
  Varpool flags:
exit_code/2 (exit_code) @06cc4dc8
  Type: variable definition analyzed
  Visibility: force_output externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized
notif_triggered/1 (notif_triggered) @06cc4d38
  Type: variable definition analyzed
  Visibility: force_output externally_visible public
  References: 
  Referring: AdcConversionCompleteNotif/4 (write)
  Availability: available
  Varpool flags: initialized

;; Function AdcConversionCompleteNotif (AdcConversionCompleteNotif, funcdef_no=1, decl_uid=6637, cgraph_uid=2, symbol_order=4)

Modification phase of node AdcConversionCompleteNotif/4
AdcConversionCompleteNotif (const uint8 ControlChanIdx)
{
  short unsigned int _1;
  short unsigned int data.1_2;
  short unsigned int data.2_3;
  unsigned int _4;
  unsigned int _5;
  short unsigned int data.3_6;
  unsigned int _7;
  unsigned int _8;
  _Bool iftmp.0_9;
  _Bool iftmp.0_15;
  _Bool iftmp.0_16;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  notif_triggered ={v} 1;
  # DEBUG BEGIN_STMT
  _1 = Adc_Ip_GetConvData (0, ControlChanIdx_12(D));
  data ={v} _1;
  # DEBUG BEGIN_STMT

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  data.1_2 ={v} data;
  if (data.1_2 > 819)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 536870913]:
  data.2_3 ={v} data;
  _4 = (unsigned int) data.2_3;
  _5 = _4 + 4294966477;
  iftmp.0_16 = _5 > 150;
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 536870913]:
  data.3_6 ={v} data;
  _7 = (unsigned int) data.3_6;
  _8 = 819 - _7;
  iftmp.0_15 = _8 > 150;

  <bb 6> [local count: 1073741824]:
  # iftmp.0_9 = PHI <iftmp.0_16(4), iftmp.0_15(5)>
  if (iftmp.0_9 != 0)
    goto <bb 8>; [89.00%]
  else
    goto <bb 7>; [11.00%]

  <bb 8> [local count: 955630223]:
  goto <bb 3>; [100.00%]

  <bb 7> [local count: 118111601]:
  return;

}



;; Function TestDelay (TestDelay, funcdef_no=2, decl_uid=6931, cgraph_uid=3, symbol_order=5)

Modification phase of node TestDelay/5
TestDelay (uint32 delay)
{
  static volatile uint32 DelayTimer = 0;
  long unsigned int DelayTimer.4_1;
  long unsigned int _2;
  long unsigned int DelayTimer.5_3;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  DelayTimer.4_1 ={v} DelayTimer;
  _2 = DelayTimer.4_1 + 1;
  DelayTimer ={v} _2;

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  DelayTimer.5_3 ={v} DelayTimer;
  if (DelayTimer.5_3 < delay_6(D))
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  DelayTimer ={v} 0;
  return;

}



;; Function main (main, funcdef_no=3, decl_uid=6940, cgraph_uid=4, symbol_order=6) (executed once)

Modification phase of node main/6
main ()
{
  Adc_Ip_StatusType adcStatus;
  Clock_Ip_StatusType clockStatus;
  <unnamed type> _1;
  short unsigned int _2;
  int _3;
  int _4;
  long unsigned int _5;
  short unsigned int _6;
  int _7;
  int _8;
  long unsigned int _9;

  <bb 2> [local count: 107374]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  clockStatus_18 = Clock_Ip_Init (&Mcu_aClockConfigPB[0]);
  # DEBUG clockStatus => clockStatus_18
  # DEBUG BEGIN_STMT
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 868753]:
  # DEBUG BEGIN_STMT
  clockStatus_35 = Clock_Ip_Init (&Mcu_aClockConfigPB[0]);
  # DEBUG clockStatus => clockStatus_35

  <bb 4> [local count: 976127]:
  # clockStatus_10 = PHI <clockStatus_18(2), clockStatus_35(3)>
  # DEBUG clockStatus => clockStatus_10
  # DEBUG BEGIN_STMT
  if (clockStatus_10 != 0)
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
  Adc_Ip_Init (0, &AdcHwUnit_0_BOARD_INITPERIPHERALS);
  # DEBUG BEGIN_STMT
  adcStatus_24 = Adc_Ip_DoCalibration (0);
  # DEBUG adcStatus => adcStatus_24
  # DEBUG BEGIN_STMT
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 868753]:
  # DEBUG BEGIN_STMT
  adcStatus_33 = Adc_Ip_DoCalibration (0);
  # DEBUG adcStatus => adcStatus_33

  <bb 8> [local count: 976127]:
  # adcStatus_11 = PHI <adcStatus_24(6), adcStatus_33(7)>
  # DEBUG adcStatus => adcStatus_11
  # DEBUG BEGIN_STMT
  if (adcStatus_11 != 0)
    goto <bb 7>; [89.00%]
  else
    goto <bb 9>; [11.00%]

  <bb 9> [local count: 107374]:
  # DEBUG BEGIN_STMT
  Adc_Ip_StartConversion (0, 12, 0);

  <bb 10> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dio_WriteChannel (112, 0);
  # DEBUG BEGIN_STMT
  _2 = Adc_Ip_GetConvData (0, 0);
  _3 = (int) _2;
  _4 = _3 * 940;
  _5 = (long unsigned int) _4;
  TestDelay (_5);
  # DEBUG BEGIN_STMT
  Dio_WriteChannel (112, 1);
  # DEBUG BEGIN_STMT
  _6 = Adc_Ip_GetConvData (0, 0);
  _7 = (int) _6;
  _8 = _7 * 940;
  _9 = (long unsigned int) _8;
  TestDelay (_9);
  # DEBUG BEGIN_STMT

  <bb 12> [local count: 1073741824]:
  goto <bb 10>; [100.00%]

}


