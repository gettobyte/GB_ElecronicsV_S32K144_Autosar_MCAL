
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OsIf_GetElapsed/7:
  Jump functions of caller  OsIf_MicrosToTicks/6:
  Jump functions of caller  OsIf_GetCounter/5:
  Jump functions of caller  Power_Ip_TimeoutExpired/3:
  Jump functions of caller  Power_Ip_StartTimeout/2:
  Jump functions of caller  Power_Ip_ReportPowerErrorsEmptyCallback/1:
  Jump functions of caller  Power_Ip_ReportPowerErrors/0:
    indirect simple callsite, calling param -1, offset 0, for stmt Power_Ip_pfReportErrorsCallback.0_1 (Error_3(D), ErrorCode_4(D));
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR

 Propagating constants:

Not considering Power_Ip_TimeoutExpired for cloning; -fipa-cp-clone disabled.
Not considering Power_Ip_StartTimeout for cloning; -fipa-cp-clone disabled.
Not considering Power_Ip_ReportPowerErrorsEmptyCallback for cloning; -fipa-cp-clone disabled.
Not considering Power_Ip_ReportPowerErrors for cloning; -fipa-cp-clone disabled.

overall_size: 36, max_new_size: 11001
 - context independent values, size: 3, time_benefit: 2.000000

IPA lattices after all propagation:

Lattices:
  Node: Power_Ip_TimeoutExpired/3:
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
  Node: Power_Ip_StartTimeout/2:
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
  Node: Power_Ip_ReportPowerErrorsEmptyCallback/1:
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
  Node: Power_Ip_ReportPowerErrors/0:
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

OsIf_GetElapsed/7 (OsIf_GetElapsed) @06727700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_TimeoutExpired/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OsIf_MicrosToTicks/6 (OsIf_MicrosToTicks) @06727540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_StartTimeout/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OsIf_GetCounter/5 (OsIf_GetCounter) @06727460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_StartTimeout/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Power_Ip_pfReportErrorsCallback/4 (Power_Ip_pfReportErrorsCallback) @067229d8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Power_Ip_ReportPowerErrors/0 (read)
  Availability: not_available
  Varpool flags:
Power_Ip_TimeoutExpired/3 (Power_Ip_TimeoutExpired) @0671aa80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OsIf_GetElapsed/7 (1073741824 (estimated locally),1.00 per call) 
Power_Ip_StartTimeout/2 (Power_Ip_StartTimeout) @0671aee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OsIf_MicrosToTicks/6 (1073741824 (estimated locally),1.00 per call) OsIf_GetCounter/5 (1073741824 (estimated locally),1.00 per call) 
Power_Ip_ReportPowerErrorsEmptyCallback/1 (Power_Ip_ReportPowerErrorsEmptyCallback) @0671ac40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Power_Ip_ReportPowerErrors/0 (Power_Ip_ReportPowerErrors) @0671a9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Power_Ip_pfReportErrorsCallback/4 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 

;; Function Power_Ip_ReportPowerErrors (Power_Ip_ReportPowerErrors, funcdef_no=0, decl_uid=5638, cgraph_uid=1, symbol_order=0)

Modification phase of node Power_Ip_ReportPowerErrors/0
Power_Ip_ReportPowerErrors (Power_Ip_ReportErrorType Error, uint8 ErrorCode)
{
  void (*<T4c6>) (Power_Ip_ReportErrorType, uint8) Power_Ip_pfReportErrorsCallback.0_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Power_Ip_pfReportErrorsCallback.0_1 = Power_Ip_pfReportErrorsCallback;
  Power_Ip_pfReportErrorsCallback.0_1 (Error_3(D), ErrorCode_4(D));
  return;

}



;; Function Power_Ip_ReportPowerErrorsEmptyCallback (Power_Ip_ReportPowerErrorsEmptyCallback, funcdef_no=1, decl_uid=5641, cgraph_uid=2, symbol_order=1)

Modification phase of node Power_Ip_ReportPowerErrorsEmptyCallback/1
Power_Ip_ReportPowerErrorsEmptyCallback (Power_Ip_ReportErrorType Error, uint8 ErrorCode)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function Power_Ip_StartTimeout (Power_Ip_StartTimeout, funcdef_no=2, decl_uid=5646, cgraph_uid=3, symbol_order=2)

Modification phase of node Power_Ip_StartTimeout/2
Power_Ip_StartTimeout (uint32 * StartTimeOut, uint32 * ElapsedTimeOut, uint32 * TimeoutTicksOut, uint32 TimeoutUs)
{
  long unsigned int _1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = OsIf_GetCounter (0);
  *StartTimeOut_5(D) = _1;
  # DEBUG BEGIN_STMT
  *ElapsedTimeOut_7(D) = 0;
  # DEBUG BEGIN_STMT
  _2 = OsIf_MicrosToTicks (TimeoutUs_9(D), 0);
  *TimeoutTicksOut_11(D) = _2;
  return;

}



;; Function Power_Ip_TimeoutExpired (Power_Ip_TimeoutExpired, funcdef_no=3, decl_uid=5650, cgraph_uid=4, symbol_order=3)

Modification phase of node Power_Ip_TimeoutExpired/3
Power_Ip_TimeoutExpired (uint32 * StartTimeInOut, uint32 * ElapsedTimeInOut, uint32 TimeoutTicks)
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _6;
  boolean _10;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _6 = OsIf_GetElapsed (StartTimeInOut_4(D), 0);
  _1 = *ElapsedTimeInOut_7(D);
  _2 = _1 + _6;
  *ElapsedTimeInOut_7(D) = _2;
  # DEBUG BEGIN_STMT
  _10 = _2 >= TimeoutTicks_9(D);
  return _10;

}


