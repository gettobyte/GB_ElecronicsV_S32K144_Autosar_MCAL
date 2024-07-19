
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OsIf_GetElapsed/7:
  Jump functions of caller  OsIf_MicrosToTicks/6:
  Jump functions of caller  OsIf_GetCounter/5:
  Jump functions of caller  PowerTimeoutExpired/3:
  Jump functions of caller  PowerStartTimeout/2:
  Jump functions of caller  ReportPowerErrorsEmptyCallback/1:
  Jump functions of caller  ReportPowerErrors/0:
    indirect simple callsite, calling param -1, offset 0, for stmt powerReportErrorsCallback.0_1 (error_3(D), u8ErrorCode_4(D));
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR

 Propagating constants:

Not considering PowerTimeoutExpired for cloning; -fipa-cp-clone disabled.
Not considering PowerStartTimeout for cloning; -fipa-cp-clone disabled.
Not considering ReportPowerErrorsEmptyCallback for cloning; -fipa-cp-clone disabled.
Not considering ReportPowerErrors for cloning; -fipa-cp-clone disabled.

overall_size: 36, max_new_size: 11001
 - context independent values, size: 3, time_benefit: 2.000000

IPA lattices after all propagation:

Lattices:
  Node: PowerTimeoutExpired/3:
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
  Node: PowerStartTimeout/2:
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
    param [3]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ReportPowerErrorsEmptyCallback/1:
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
  Node: ReportPowerErrors/0:
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

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OsIf_GetElapsed/7 (OsIf_GetElapsed) @06785000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: PowerTimeoutExpired/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OsIf_MicrosToTicks/6 (OsIf_MicrosToTicks) @06785e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: PowerStartTimeout/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OsIf_GetCounter/5 (OsIf_GetCounter) @06785d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: PowerStartTimeout/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
powerReportErrorsCallback/4 (powerReportErrorsCallback) @06789318
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: ReportPowerErrors/0 (read)
  Availability: not_available
  Varpool flags:
PowerTimeoutExpired/3 (PowerTimeoutExpired) @06785700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OsIf_GetElapsed/7 (1073741824 (estimated locally),1.00 per call) 
PowerStartTimeout/2 (PowerStartTimeout) @06785460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OsIf_MicrosToTicks/6 (1073741824 (estimated locally),1.00 per call) OsIf_GetCounter/5 (1073741824 (estimated locally),1.00 per call) 
ReportPowerErrorsEmptyCallback/1 (ReportPowerErrorsEmptyCallback) @067851c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
ReportPowerErrors/0 (ReportPowerErrors) @06779ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: powerReportErrorsCallback/4 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 

;; Function ReportPowerErrors (ReportPowerErrors, funcdef_no=0, decl_uid=5640, cgraph_uid=1, symbol_order=0)

Modification phase of node ReportPowerErrors/0
ReportPowerErrors (Power_Ip_PowerReportErrorType error, uint8 u8ErrorCode)
{
  void (*<T4c6>) (Power_Ip_PowerReportErrorType, uint8) powerReportErrorsCallback.0_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  powerReportErrorsCallback.0_1 = powerReportErrorsCallback;
  powerReportErrorsCallback.0_1 (error_3(D), u8ErrorCode_4(D));
  return;

}



;; Function ReportPowerErrorsEmptyCallback (ReportPowerErrorsEmptyCallback, funcdef_no=1, decl_uid=5643, cgraph_uid=2, symbol_order=1)

Modification phase of node ReportPowerErrorsEmptyCallback/1
ReportPowerErrorsEmptyCallback (Power_Ip_PowerReportErrorType error, uint8 u8ErrorCode)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function PowerStartTimeout (PowerStartTimeout, funcdef_no=2, decl_uid=5648, cgraph_uid=3, symbol_order=2)

Modification phase of node PowerStartTimeout/2
PowerStartTimeout (uint32 * startTimeOut, uint32 * elapsedTimeOut, uint32 * timeoutTicksOut, uint32 timeoutUs)
{
  long unsigned int _1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = OsIf_GetCounter (0);
  *startTimeOut_5(D) = _1;
  # DEBUG BEGIN_STMT
  *elapsedTimeOut_7(D) = 0;
  # DEBUG BEGIN_STMT
  _2 = OsIf_MicrosToTicks (timeoutUs_9(D), 0);
  *timeoutTicksOut_11(D) = _2;
  return;

}



;; Function PowerTimeoutExpired (PowerTimeoutExpired, funcdef_no=3, decl_uid=5652, cgraph_uid=4, symbol_order=3)

Modification phase of node PowerTimeoutExpired/3
PowerTimeoutExpired (uint32 * startTimeInOut, uint32 * elapsedTimeInOut, uint32 TimeoutTicks)
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _6;
  boolean _10;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _6 = OsIf_GetElapsed (startTimeInOut_4(D), 0);
  _1 = *elapsedTimeInOut_7(D);
  _2 = _1 + _6;
  *elapsedTimeInOut_7(D) = _2;
  # DEBUG BEGIN_STMT
  _10 = _2 >= TimeoutTicks_9(D);
  return _10;

}


