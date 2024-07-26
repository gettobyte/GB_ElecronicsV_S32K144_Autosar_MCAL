
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Det_TestNoTransientFault/5:
  Jump functions of caller  Det_TestNoRuntimeError/4:
  Jump functions of caller  Det_TestNoError/3:
  Jump functions of caller  Det_TestLastReportTransientFault/2:
  Jump functions of caller  Det_TestLastReportRuntimeError/1:
  Jump functions of caller  Det_TestLastReportError/0:

 Propagating constants:

Not considering Det_TestNoTransientFault for cloning; -fipa-cp-clone disabled.
Not considering Det_TestNoRuntimeError for cloning; -fipa-cp-clone disabled.
Not considering Det_TestNoError for cloning; -fipa-cp-clone disabled.
Not considering Det_TestLastReportTransientFault for cloning; -fipa-cp-clone disabled.
Not considering Det_TestLastReportRuntimeError for cloning; -fipa-cp-clone disabled.
Not considering Det_TestLastReportError for cloning; -fipa-cp-clone disabled.

overall_size: 117, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Det_TestNoTransientFault/5:
  Node: Det_TestNoRuntimeError/4:
  Node: Det_TestNoError/3:
  Node: Det_TestLastReportTransientFault/2:
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
  Node: Det_TestLastReportRuntimeError/1:
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
  Node: Det_TestLastReportError/0:
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

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Det_TransientFaultId/17 (Det_TransientFaultId) @05cffc60
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Det_TestLastReportTransientFault/2 (read)Det_TestLastReportTransientFault/2 (write)Det_TestNoTransientFault/5 (read)Det_TestNoTransientFault/5 (write)
  Availability: not_available
  Varpool flags:
Det_TransientApiId/16 (Det_TransientApiId) @05cffc18
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Det_TestLastReportTransientFault/2 (read)Det_TestLastReportTransientFault/2 (write)Det_TestNoTransientFault/5 (read)Det_TestNoTransientFault/5 (write)
  Availability: not_available
  Varpool flags:
Det_TransientInstanceId/15 (Det_TransientInstanceId) @05cffbd0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Det_TestLastReportTransientFault/2 (read)Det_TestLastReportTransientFault/2 (write)Det_TestNoTransientFault/5 (read)Det_TestNoTransientFault/5 (write)
  Availability: not_available
  Varpool flags:
Det_TransientModuleId/14 (Det_TransientModuleId) @05cffb88
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Det_TestLastReportTransientFault/2 (read)Det_TestLastReportTransientFault/2 (write)Det_TestNoTransientFault/5 (read)Det_TestNoTransientFault/5 (write)
  Availability: not_available
  Varpool flags:
Det_RuntimeErrorId/13 (Det_RuntimeErrorId) @05cff828
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Det_TestLastReportRuntimeError/1 (read)Det_TestLastReportRuntimeError/1 (write)Det_TestNoRuntimeError/4 (read)Det_TestNoRuntimeError/4 (write)
  Availability: not_available
  Varpool flags:
Det_RuntimeApiId/12 (Det_RuntimeApiId) @05cff7e0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Det_TestLastReportRuntimeError/1 (read)Det_TestLastReportRuntimeError/1 (write)Det_TestNoRuntimeError/4 (read)Det_TestNoRuntimeError/4 (write)
  Availability: not_available
  Varpool flags:
Det_RuntimeInstanceId/11 (Det_RuntimeInstanceId) @05cff798
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Det_TestLastReportRuntimeError/1 (read)Det_TestLastReportRuntimeError/1 (write)Det_TestNoRuntimeError/4 (read)Det_TestNoRuntimeError/4 (write)
  Availability: not_available
  Varpool flags:
Det_RuntimeModuleId/10 (Det_RuntimeModuleId) @05cff750
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Det_TestLastReportRuntimeError/1 (read)Det_TestLastReportRuntimeError/1 (write)Det_TestNoRuntimeError/4 (read)Det_TestNoRuntimeError/4 (write)
  Availability: not_available
  Varpool flags:
Det_ErrorId/9 (Det_ErrorId) @05cff3f0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Det_TestLastReportError/0 (read)Det_TestLastReportError/0 (write)Det_TestNoError/3 (read)Det_TestNoError/3 (write)
  Availability: not_available
  Varpool flags:
Det_ApiId/8 (Det_ApiId) @05cff3a8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Det_TestLastReportError/0 (read)Det_TestLastReportError/0 (write)Det_TestNoError/3 (read)Det_TestNoError/3 (write)
  Availability: not_available
  Varpool flags:
Det_InstanceId/7 (Det_InstanceId) @05cff360
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Det_TestLastReportError/0 (read)Det_TestLastReportError/0 (write)Det_TestNoError/3 (read)Det_TestNoError/3 (write)
  Availability: not_available
  Varpool flags:
Det_ModuleId/6 (Det_ModuleId) @05cff318
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Det_TestLastReportError/0 (read)Det_TestLastReportError/0 (write)Det_TestNoError/3 (read)Det_TestNoError/3 (write)
  Availability: not_available
  Varpool flags:
Det_TestNoTransientFault/5 (Det_TestNoTransientFault) @05cf60e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Det_TransientModuleId/14 (read)Det_TransientInstanceId/15 (read)Det_TransientApiId/16 (read)Det_TransientFaultId/17 (read)Det_TransientModuleId/14 (write)Det_TransientInstanceId/15 (write)Det_TransientApiId/16 (write)Det_TransientFaultId/17 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Det_TestNoRuntimeError/4 (Det_TestNoRuntimeError) @05cf6d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Det_RuntimeModuleId/10 (read)Det_RuntimeInstanceId/11 (read)Det_RuntimeApiId/12 (read)Det_RuntimeErrorId/13 (read)Det_RuntimeModuleId/10 (write)Det_RuntimeInstanceId/11 (write)Det_RuntimeApiId/12 (write)Det_RuntimeErrorId/13 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Det_TestNoError/3 (Det_TestNoError) @05cf6a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Det_ModuleId/6 (read)Det_InstanceId/7 (read)Det_ApiId/8 (read)Det_ErrorId/9 (read)Det_ModuleId/6 (write)Det_InstanceId/7 (write)Det_ApiId/8 (write)Det_ErrorId/9 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Det_TestLastReportTransientFault/2 (Det_TestLastReportTransientFault) @05cf67e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Det_TransientModuleId/14 (read)Det_TransientInstanceId/15 (read)Det_TransientApiId/16 (read)Det_TransientFaultId/17 (read)Det_TransientModuleId/14 (write)Det_TransientInstanceId/15 (write)Det_TransientApiId/16 (write)Det_TransientFaultId/17 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Det_TestLastReportRuntimeError/1 (Det_TestLastReportRuntimeError) @05cf6540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Det_RuntimeModuleId/10 (read)Det_RuntimeInstanceId/11 (read)Det_RuntimeApiId/12 (read)Det_RuntimeErrorId/13 (read)Det_RuntimeModuleId/10 (write)Det_RuntimeInstanceId/11 (write)Det_RuntimeApiId/12 (write)Det_RuntimeErrorId/13 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Det_TestLastReportError/0 (Det_TestLastReportError) @05cf62a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Det_ModuleId/6 (read)Det_InstanceId/7 (read)Det_ApiId/8 (read)Det_ErrorId/9 (read)Det_ModuleId/6 (write)Det_InstanceId/7 (write)Det_ApiId/8 (write)Det_ErrorId/9 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function Det_TestLastReportError (Det_TestLastReportError, funcdef_no=0, decl_uid=5573, cgraph_uid=1, symbol_order=0)

Modification phase of node Det_TestLastReportError/0
Det_TestLastReportError (uint16 ModuleId, uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
{
  boolean result;
  short unsigned int _1;
  unsigned char _2;
  unsigned char _3;
  unsigned char _4;
  int iftmp.0_5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  _1 = Det_ModuleId[0];
  if (_1 == ModuleId_7(D))
    goto <bb 3>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 3> [local count: 365072220]:
  _2 = Det_InstanceId[0];
  if (_2 == InstanceId_8(D))
    goto <bb 4>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 4> [local count: 124124555]:
  _3 = Det_ApiId[0];
  if (_3 == ApiId_9(D))
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 42202349]:
  _4 = Det_ErrorId[0];
  if (_4 == ErrorId_10(D))
    goto <bb 7>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 6> [local count: 1059393026]:

  <bb 7> [local count: 1073741824]:
  # iftmp.0_5 = PHI <1(5), 0(6)>
  result_11 = (boolean) iftmp.0_5;
  # DEBUG result => result_11
  # DEBUG BEGIN_STMT
  Det_ModuleId[0] = 0;
  # DEBUG BEGIN_STMT
  Det_InstanceId[0] = 0;
  # DEBUG BEGIN_STMT
  Det_ApiId[0] = 0;
  # DEBUG BEGIN_STMT
  Det_ErrorId[0] = 0;
  # DEBUG BEGIN_STMT
  return result_11;

}



;; Function Det_TestLastReportRuntimeError (Det_TestLastReportRuntimeError, funcdef_no=1, decl_uid=5578, cgraph_uid=2, symbol_order=1)

Modification phase of node Det_TestLastReportRuntimeError/1
Det_TestLastReportRuntimeError (uint16 ModuleId, uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
{
  boolean result;
  short unsigned int _1;
  unsigned char _2;
  unsigned char _3;
  unsigned char _4;
  int iftmp.1_5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  _1 = Det_RuntimeModuleId[0];
  if (_1 == ModuleId_7(D))
    goto <bb 3>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 3> [local count: 365072220]:
  _2 = Det_RuntimeInstanceId[0];
  if (_2 == InstanceId_8(D))
    goto <bb 4>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 4> [local count: 124124555]:
  _3 = Det_RuntimeApiId[0];
  if (_3 == ApiId_9(D))
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 42202349]:
  _4 = Det_RuntimeErrorId[0];
  if (_4 == ErrorId_10(D))
    goto <bb 7>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 6> [local count: 1059393026]:

  <bb 7> [local count: 1073741824]:
  # iftmp.1_5 = PHI <1(5), 0(6)>
  result_11 = (boolean) iftmp.1_5;
  # DEBUG result => result_11
  # DEBUG BEGIN_STMT
  Det_RuntimeModuleId[0] = 0;
  # DEBUG BEGIN_STMT
  Det_RuntimeInstanceId[0] = 0;
  # DEBUG BEGIN_STMT
  Det_RuntimeApiId[0] = 0;
  # DEBUG BEGIN_STMT
  Det_RuntimeErrorId[0] = 0;
  # DEBUG BEGIN_STMT
  return result_11;

}



;; Function Det_TestLastReportTransientFault (Det_TestLastReportTransientFault, funcdef_no=2, decl_uid=5583, cgraph_uid=3, symbol_order=2)

Modification phase of node Det_TestLastReportTransientFault/2
Det_TestLastReportTransientFault (uint16 ModuleId, uint8 InstanceId, uint8 ApiId, uint8 FaultId)
{
  boolean result;
  short unsigned int _1;
  unsigned char _2;
  unsigned char _3;
  unsigned char _4;
  int iftmp.2_5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  _1 = Det_TransientModuleId[0];
  if (_1 == ModuleId_7(D))
    goto <bb 3>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 3> [local count: 365072220]:
  _2 = Det_TransientInstanceId[0];
  if (_2 == InstanceId_8(D))
    goto <bb 4>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 4> [local count: 124124555]:
  _3 = Det_TransientApiId[0];
  if (_3 == ApiId_9(D))
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 42202349]:
  _4 = Det_TransientFaultId[0];
  if (_4 == FaultId_10(D))
    goto <bb 7>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 6> [local count: 1059393026]:

  <bb 7> [local count: 1073741824]:
  # iftmp.2_5 = PHI <1(5), 0(6)>
  result_11 = (boolean) iftmp.2_5;
  # DEBUG result => result_11
  # DEBUG BEGIN_STMT
  Det_TransientModuleId[0] = 0;
  # DEBUG BEGIN_STMT
  Det_TransientInstanceId[0] = 0;
  # DEBUG BEGIN_STMT
  Det_TransientApiId[0] = 0;
  # DEBUG BEGIN_STMT
  Det_TransientFaultId[0] = 0;
  # DEBUG BEGIN_STMT
  return result_11;

}



;; Function Det_TestNoError (Det_TestNoError, funcdef_no=3, decl_uid=5585, cgraph_uid=4, symbol_order=3)

Modification phase of node Det_TestNoError/3
Det_TestNoError ()
{
  boolean result;
  short unsigned int _1;
  unsigned char _2;
  unsigned char _3;
  unsigned char _4;
  _Bool _5;
  int iftmp.3_6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  _1 = Det_ModuleId[0];
  if (_1 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:
  _2 = Det_InstanceId[0];
  if (_2 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 4> [local count: 268435456]:
  _3 = Det_ApiId[0];
  if (_3 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 134217728]:
  _4 = Det_ErrorId[0];
  if (_4 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 6> [local count: 67108864]:

  <bb 7> [local count: 1073741824]:
  # iftmp.3_6 = PHI <1(3), 0(6), 1(2), 1(5), 1(4)>
  result_8 = (boolean) iftmp.3_6;
  # DEBUG result => result_8
  # DEBUG BEGIN_STMT
  Det_ModuleId[0] = 0;
  # DEBUG BEGIN_STMT
  Det_InstanceId[0] = 0;
  # DEBUG BEGIN_STMT
  Det_ApiId[0] = 0;
  # DEBUG BEGIN_STMT
  Det_ErrorId[0] = 0;
  # DEBUG BEGIN_STMT
  _5 = ~result_8;
  return _5;

}



;; Function Det_TestNoRuntimeError (Det_TestNoRuntimeError, funcdef_no=4, decl_uid=5587, cgraph_uid=5, symbol_order=4)

Modification phase of node Det_TestNoRuntimeError/4
Det_TestNoRuntimeError ()
{
  boolean result;
  short unsigned int _1;
  unsigned char _2;
  unsigned char _3;
  unsigned char _4;
  _Bool _5;
  int iftmp.4_6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  _1 = Det_RuntimeModuleId[0];
  if (_1 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:
  _2 = Det_RuntimeInstanceId[0];
  if (_2 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 4> [local count: 268435456]:
  _3 = Det_RuntimeApiId[0];
  if (_3 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 134217728]:
  _4 = Det_RuntimeErrorId[0];
  if (_4 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 6> [local count: 67108864]:

  <bb 7> [local count: 1073741824]:
  # iftmp.4_6 = PHI <1(3), 0(6), 1(2), 1(5), 1(4)>
  result_8 = (boolean) iftmp.4_6;
  # DEBUG result => result_8
  # DEBUG BEGIN_STMT
  Det_RuntimeModuleId[0] = 0;
  # DEBUG BEGIN_STMT
  Det_RuntimeInstanceId[0] = 0;
  # DEBUG BEGIN_STMT
  Det_RuntimeApiId[0] = 0;
  # DEBUG BEGIN_STMT
  Det_RuntimeErrorId[0] = 0;
  # DEBUG BEGIN_STMT
  _5 = ~result_8;
  return _5;

}



;; Function Det_TestNoTransientFault (Det_TestNoTransientFault, funcdef_no=5, decl_uid=5589, cgraph_uid=6, symbol_order=5)

Modification phase of node Det_TestNoTransientFault/5
Det_TestNoTransientFault ()
{
  boolean result;
  short unsigned int _1;
  unsigned char _2;
  unsigned char _3;
  unsigned char _4;
  _Bool _5;
  int iftmp.5_6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  _1 = Det_TransientModuleId[0];
  if (_1 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:
  _2 = Det_TransientInstanceId[0];
  if (_2 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 4> [local count: 268435456]:
  _3 = Det_TransientApiId[0];
  if (_3 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 134217728]:
  _4 = Det_TransientFaultId[0];
  if (_4 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 6> [local count: 67108864]:

  <bb 7> [local count: 1073741824]:
  # iftmp.5_6 = PHI <1(3), 0(6), 1(2), 1(5), 1(4)>
  result_8 = (boolean) iftmp.5_6;
  # DEBUG result => result_8
  # DEBUG BEGIN_STMT
  Det_TransientModuleId[0] = 0;
  # DEBUG BEGIN_STMT
  Det_TransientInstanceId[0] = 0;
  # DEBUG BEGIN_STMT
  Det_TransientApiId[0] = 0;
  # DEBUG BEGIN_STMT
  Det_TransientFaultId[0] = 0;
  # DEBUG BEGIN_STMT
  _5 = ~result_8;
  return _5;

}


