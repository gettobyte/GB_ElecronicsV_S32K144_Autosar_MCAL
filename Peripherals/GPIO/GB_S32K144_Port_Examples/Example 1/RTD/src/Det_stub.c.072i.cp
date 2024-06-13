
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Sys_GetCoreID/6:
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

overall_size: 129, max_new_size: 11001

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

Det_TransientFaultId/18 (Det_TransientFaultId) @06845360
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Det_TestLastReportTransientFault/2 (read)Det_TestLastReportTransientFault/2 (write)Det_TestNoTransientFault/5 (read)Det_TestNoTransientFault/5 (write)
  Availability: not_available
  Varpool flags:
Det_TransientApiId/17 (Det_TransientApiId) @06845318
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Det_TestLastReportTransientFault/2 (read)Det_TestLastReportTransientFault/2 (write)Det_TestNoTransientFault/5 (read)Det_TestNoTransientFault/5 (write)
  Availability: not_available
  Varpool flags:
Det_TransientInstanceId/16 (Det_TransientInstanceId) @068452d0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Det_TestLastReportTransientFault/2 (read)Det_TestLastReportTransientFault/2 (write)Det_TestNoTransientFault/5 (read)Det_TestNoTransientFault/5 (write)
  Availability: not_available
  Varpool flags:
Det_TransientModuleId/15 (Det_TransientModuleId) @06845288
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Det_TestLastReportTransientFault/2 (read)Det_TestLastReportTransientFault/2 (write)Det_TestNoTransientFault/5 (read)Det_TestNoTransientFault/5 (write)
  Availability: not_available
  Varpool flags:
Det_RuntimeErrorId/14 (Det_RuntimeErrorId) @066e3e58
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Det_TestLastReportRuntimeError/1 (read)Det_TestLastReportRuntimeError/1 (write)Det_TestNoRuntimeError/4 (read)Det_TestNoRuntimeError/4 (write)
  Availability: not_available
  Varpool flags:
Det_RuntimeApiId/13 (Det_RuntimeApiId) @066e3e10
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Det_TestLastReportRuntimeError/1 (read)Det_TestLastReportRuntimeError/1 (write)Det_TestNoRuntimeError/4 (read)Det_TestNoRuntimeError/4 (write)
  Availability: not_available
  Varpool flags:
Det_RuntimeInstanceId/12 (Det_RuntimeInstanceId) @066e3dc8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Det_TestLastReportRuntimeError/1 (read)Det_TestLastReportRuntimeError/1 (write)Det_TestNoRuntimeError/4 (read)Det_TestNoRuntimeError/4 (write)
  Availability: not_available
  Varpool flags:
Det_RuntimeModuleId/11 (Det_RuntimeModuleId) @066e3d80
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Det_TestLastReportRuntimeError/1 (read)Det_TestLastReportRuntimeError/1 (write)Det_TestNoRuntimeError/4 (read)Det_TestNoRuntimeError/4 (write)
  Availability: not_available
  Varpool flags:
Det_ErrorId/10 (Det_ErrorId) @066e3990
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Det_TestLastReportError/0 (read)Det_TestLastReportError/0 (write)Det_TestNoError/3 (read)Det_TestNoError/3 (write)
  Availability: not_available
  Varpool flags:
Det_ApiId/9 (Det_ApiId) @066e3948
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Det_TestLastReportError/0 (read)Det_TestLastReportError/0 (write)Det_TestNoError/3 (read)Det_TestNoError/3 (write)
  Availability: not_available
  Varpool flags:
Det_InstanceId/8 (Det_InstanceId) @066e3900
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Det_TestLastReportError/0 (read)Det_TestLastReportError/0 (write)Det_TestNoError/3 (read)Det_TestNoError/3 (write)
  Availability: not_available
  Varpool flags:
Det_ModuleId/7 (Det_ModuleId) @066e38b8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Det_TestLastReportError/0 (read)Det_TestLastReportError/0 (write)Det_TestNoError/3 (read)Det_TestNoError/3 (write)
  Availability: not_available
  Varpool flags:
Sys_GetCoreID/6 (Sys_GetCoreID) @066e5e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Det_TestNoTransientFault/5 (1073741824 (estimated locally),1.00 per call) Det_TestNoRuntimeError/4 (1073741824 (estimated locally),1.00 per call) Det_TestNoError/3 (1073741824 (estimated locally),1.00 per call) Det_TestLastReportTransientFault/2 (1073741824 (estimated locally),1.00 per call) Det_TestLastReportRuntimeError/1 (1073741824 (estimated locally),1.00 per call) Det_TestLastReportError/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Det_TestNoTransientFault/5 (Det_TestNoTransientFault) @066e50e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Det_TransientModuleId/15 (read)Det_TransientInstanceId/16 (read)Det_TransientApiId/17 (read)Det_TransientFaultId/18 (read)Det_TransientModuleId/15 (write)Det_TransientInstanceId/16 (write)Det_TransientApiId/17 (write)Det_TransientFaultId/18 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Sys_GetCoreID/6 (1073741824 (estimated locally),1.00 per call) 
Det_TestNoRuntimeError/4 (Det_TestNoRuntimeError) @066e5d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Det_RuntimeModuleId/11 (read)Det_RuntimeInstanceId/12 (read)Det_RuntimeApiId/13 (read)Det_RuntimeErrorId/14 (read)Det_RuntimeModuleId/11 (write)Det_RuntimeInstanceId/12 (write)Det_RuntimeApiId/13 (write)Det_RuntimeErrorId/14 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Sys_GetCoreID/6 (1073741824 (estimated locally),1.00 per call) 
Det_TestNoError/3 (Det_TestNoError) @066e5a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Det_ModuleId/7 (read)Det_InstanceId/8 (read)Det_ApiId/9 (read)Det_ErrorId/10 (read)Det_ModuleId/7 (write)Det_InstanceId/8 (write)Det_ApiId/9 (write)Det_ErrorId/10 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Sys_GetCoreID/6 (1073741824 (estimated locally),1.00 per call) 
Det_TestLastReportTransientFault/2 (Det_TestLastReportTransientFault) @066e57e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Det_TransientModuleId/15 (read)Det_TransientInstanceId/16 (read)Det_TransientApiId/17 (read)Det_TransientFaultId/18 (read)Det_TransientModuleId/15 (write)Det_TransientInstanceId/16 (write)Det_TransientApiId/17 (write)Det_TransientFaultId/18 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Sys_GetCoreID/6 (1073741824 (estimated locally),1.00 per call) 
Det_TestLastReportRuntimeError/1 (Det_TestLastReportRuntimeError) @066e5540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Det_RuntimeModuleId/11 (read)Det_RuntimeInstanceId/12 (read)Det_RuntimeApiId/13 (read)Det_RuntimeErrorId/14 (read)Det_RuntimeModuleId/11 (write)Det_RuntimeInstanceId/12 (write)Det_RuntimeApiId/13 (write)Det_RuntimeErrorId/14 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Sys_GetCoreID/6 (1073741824 (estimated locally),1.00 per call) 
Det_TestLastReportError/0 (Det_TestLastReportError) @066e52a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Det_ModuleId/7 (read)Det_InstanceId/8 (read)Det_ApiId/9 (read)Det_ErrorId/10 (read)Det_ModuleId/7 (write)Det_InstanceId/8 (write)Det_ApiId/9 (write)Det_ErrorId/10 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Sys_GetCoreID/6 (1073741824 (estimated locally),1.00 per call) 

;; Function Det_TestLastReportError (Det_TestLastReportError, funcdef_no=0, decl_uid=5573, cgraph_uid=1, symbol_order=0)

Modification phase of node Det_TestLastReportError/0
Det_TestLastReportError (uint16 ModuleId, uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
{
  uint32 u32CoreId;
  boolean result;
  unsigned char _1;
  short unsigned int _2;
  unsigned char _3;
  unsigned char _4;
  unsigned char _5;
  int iftmp.0_6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  _1 = Sys_GetCoreID ();
  u32CoreId_9 = (uint32) _1;
  # DEBUG u32CoreId => u32CoreId_9
  # DEBUG BEGIN_STMT
  _2 = Det_ModuleId[u32CoreId_9];
  if (_2 == ModuleId_10(D))
    goto <bb 3>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 3> [local count: 365072220]:
  _3 = Det_InstanceId[u32CoreId_9];
  if (_3 == InstanceId_11(D))
    goto <bb 4>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 4> [local count: 124124555]:
  _4 = Det_ApiId[u32CoreId_9];
  if (_4 == ApiId_12(D))
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 42202349]:
  _5 = Det_ErrorId[u32CoreId_9];
  if (_5 == ErrorId_13(D))
    goto <bb 7>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 6> [local count: 1059393026]:

  <bb 7> [local count: 1073741824]:
  # iftmp.0_6 = PHI <1(5), 0(6)>
  result_14 = (boolean) iftmp.0_6;
  # DEBUG result => result_14
  # DEBUG BEGIN_STMT
  Det_ModuleId[u32CoreId_9] = 0;
  # DEBUG BEGIN_STMT
  Det_InstanceId[u32CoreId_9] = 0;
  # DEBUG BEGIN_STMT
  Det_ApiId[u32CoreId_9] = 0;
  # DEBUG BEGIN_STMT
  Det_ErrorId[u32CoreId_9] = 0;
  # DEBUG BEGIN_STMT
  return result_14;

}



;; Function Det_TestLastReportRuntimeError (Det_TestLastReportRuntimeError, funcdef_no=1, decl_uid=5578, cgraph_uid=2, symbol_order=1)

Modification phase of node Det_TestLastReportRuntimeError/1
Det_TestLastReportRuntimeError (uint16 ModuleId, uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
{
  uint32 u32CoreId;
  boolean result;
  unsigned char _1;
  short unsigned int _2;
  unsigned char _3;
  unsigned char _4;
  unsigned char _5;
  int iftmp.1_6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  _1 = Sys_GetCoreID ();
  u32CoreId_9 = (uint32) _1;
  # DEBUG u32CoreId => u32CoreId_9
  # DEBUG BEGIN_STMT
  _2 = Det_RuntimeModuleId[u32CoreId_9];
  if (_2 == ModuleId_10(D))
    goto <bb 3>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 3> [local count: 365072220]:
  _3 = Det_RuntimeInstanceId[u32CoreId_9];
  if (_3 == InstanceId_11(D))
    goto <bb 4>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 4> [local count: 124124555]:
  _4 = Det_RuntimeApiId[u32CoreId_9];
  if (_4 == ApiId_12(D))
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 42202349]:
  _5 = Det_RuntimeErrorId[u32CoreId_9];
  if (_5 == ErrorId_13(D))
    goto <bb 7>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 6> [local count: 1059393026]:

  <bb 7> [local count: 1073741824]:
  # iftmp.1_6 = PHI <1(5), 0(6)>
  result_14 = (boolean) iftmp.1_6;
  # DEBUG result => result_14
  # DEBUG BEGIN_STMT
  Det_RuntimeModuleId[u32CoreId_9] = 0;
  # DEBUG BEGIN_STMT
  Det_RuntimeInstanceId[u32CoreId_9] = 0;
  # DEBUG BEGIN_STMT
  Det_RuntimeApiId[u32CoreId_9] = 0;
  # DEBUG BEGIN_STMT
  Det_RuntimeErrorId[u32CoreId_9] = 0;
  # DEBUG BEGIN_STMT
  return result_14;

}



;; Function Det_TestLastReportTransientFault (Det_TestLastReportTransientFault, funcdef_no=2, decl_uid=5583, cgraph_uid=3, symbol_order=2)

Modification phase of node Det_TestLastReportTransientFault/2
Det_TestLastReportTransientFault (uint16 ModuleId, uint8 InstanceId, uint8 ApiId, uint8 FaultId)
{
  uint32 u32CoreId;
  boolean result;
  unsigned char _1;
  short unsigned int _2;
  unsigned char _3;
  unsigned char _4;
  unsigned char _5;
  int iftmp.2_6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  _1 = Sys_GetCoreID ();
  u32CoreId_9 = (uint32) _1;
  # DEBUG u32CoreId => u32CoreId_9
  # DEBUG BEGIN_STMT
  _2 = Det_TransientModuleId[u32CoreId_9];
  if (_2 == ModuleId_10(D))
    goto <bb 3>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 3> [local count: 365072220]:
  _3 = Det_TransientInstanceId[u32CoreId_9];
  if (_3 == InstanceId_11(D))
    goto <bb 4>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 4> [local count: 124124555]:
  _4 = Det_TransientApiId[u32CoreId_9];
  if (_4 == ApiId_12(D))
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 42202349]:
  _5 = Det_TransientFaultId[u32CoreId_9];
  if (_5 == FaultId_13(D))
    goto <bb 7>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 6> [local count: 1059393026]:

  <bb 7> [local count: 1073741824]:
  # iftmp.2_6 = PHI <1(5), 0(6)>
  result_14 = (boolean) iftmp.2_6;
  # DEBUG result => result_14
  # DEBUG BEGIN_STMT
  Det_TransientModuleId[u32CoreId_9] = 0;
  # DEBUG BEGIN_STMT
  Det_TransientInstanceId[u32CoreId_9] = 0;
  # DEBUG BEGIN_STMT
  Det_TransientApiId[u32CoreId_9] = 0;
  # DEBUG BEGIN_STMT
  Det_TransientFaultId[u32CoreId_9] = 0;
  # DEBUG BEGIN_STMT
  return result_14;

}



;; Function Det_TestNoError (Det_TestNoError, funcdef_no=3, decl_uid=5585, cgraph_uid=4, symbol_order=3)

Modification phase of node Det_TestNoError/3
Det_TestNoError ()
{
  uint32 u32CoreId;
  boolean result;
  unsigned char _1;
  short unsigned int _2;
  unsigned char _3;
  unsigned char _4;
  unsigned char _5;
  _Bool _6;
  int iftmp.3_7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  _1 = Sys_GetCoreID ();
  u32CoreId_10 = (uint32) _1;
  # DEBUG u32CoreId => u32CoreId_10
  # DEBUG BEGIN_STMT
  _2 = Det_ModuleId[u32CoreId_10];
  if (_2 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:
  _3 = Det_InstanceId[u32CoreId_10];
  if (_3 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 4> [local count: 268435456]:
  _4 = Det_ApiId[u32CoreId_10];
  if (_4 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 134217728]:
  _5 = Det_ErrorId[u32CoreId_10];
  if (_5 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 6> [local count: 67108864]:

  <bb 7> [local count: 1073741824]:
  # iftmp.3_7 = PHI <1(3), 0(6), 1(2), 1(5), 1(4)>
  result_11 = (boolean) iftmp.3_7;
  # DEBUG result => result_11
  # DEBUG BEGIN_STMT
  Det_ModuleId[u32CoreId_10] = 0;
  # DEBUG BEGIN_STMT
  Det_InstanceId[u32CoreId_10] = 0;
  # DEBUG BEGIN_STMT
  Det_ApiId[u32CoreId_10] = 0;
  # DEBUG BEGIN_STMT
  Det_ErrorId[u32CoreId_10] = 0;
  # DEBUG BEGIN_STMT
  _6 = ~result_11;
  return _6;

}



;; Function Det_TestNoRuntimeError (Det_TestNoRuntimeError, funcdef_no=4, decl_uid=5587, cgraph_uid=5, symbol_order=4)

Modification phase of node Det_TestNoRuntimeError/4
Det_TestNoRuntimeError ()
{
  uint32 u32CoreId;
  boolean result;
  unsigned char _1;
  short unsigned int _2;
  unsigned char _3;
  unsigned char _4;
  unsigned char _5;
  _Bool _6;
  int iftmp.4_7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  _1 = Sys_GetCoreID ();
  u32CoreId_10 = (uint32) _1;
  # DEBUG u32CoreId => u32CoreId_10
  # DEBUG BEGIN_STMT
  _2 = Det_RuntimeModuleId[u32CoreId_10];
  if (_2 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:
  _3 = Det_RuntimeInstanceId[u32CoreId_10];
  if (_3 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 4> [local count: 268435456]:
  _4 = Det_RuntimeApiId[u32CoreId_10];
  if (_4 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 134217728]:
  _5 = Det_RuntimeErrorId[u32CoreId_10];
  if (_5 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 6> [local count: 67108864]:

  <bb 7> [local count: 1073741824]:
  # iftmp.4_7 = PHI <1(3), 0(6), 1(2), 1(5), 1(4)>
  result_11 = (boolean) iftmp.4_7;
  # DEBUG result => result_11
  # DEBUG BEGIN_STMT
  Det_RuntimeModuleId[u32CoreId_10] = 0;
  # DEBUG BEGIN_STMT
  Det_RuntimeInstanceId[u32CoreId_10] = 0;
  # DEBUG BEGIN_STMT
  Det_RuntimeApiId[u32CoreId_10] = 0;
  # DEBUG BEGIN_STMT
  Det_RuntimeErrorId[u32CoreId_10] = 0;
  # DEBUG BEGIN_STMT
  _6 = ~result_11;
  return _6;

}



;; Function Det_TestNoTransientFault (Det_TestNoTransientFault, funcdef_no=5, decl_uid=5589, cgraph_uid=6, symbol_order=5)

Modification phase of node Det_TestNoTransientFault/5
Det_TestNoTransientFault ()
{
  uint32 u32CoreId;
  boolean result;
  unsigned char _1;
  short unsigned int _2;
  unsigned char _3;
  unsigned char _4;
  unsigned char _5;
  _Bool _6;
  int iftmp.5_7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  _1 = Sys_GetCoreID ();
  u32CoreId_10 = (uint32) _1;
  # DEBUG u32CoreId => u32CoreId_10
  # DEBUG BEGIN_STMT
  _2 = Det_TransientModuleId[u32CoreId_10];
  if (_2 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:
  _3 = Det_TransientInstanceId[u32CoreId_10];
  if (_3 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 4> [local count: 268435456]:
  _4 = Det_TransientApiId[u32CoreId_10];
  if (_4 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 134217728]:
  _5 = Det_TransientFaultId[u32CoreId_10];
  if (_5 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 6> [local count: 67108864]:

  <bb 7> [local count: 1073741824]:
  # iftmp.5_7 = PHI <1(3), 0(6), 1(2), 1(5), 1(4)>
  result_11 = (boolean) iftmp.5_7;
  # DEBUG result => result_11
  # DEBUG BEGIN_STMT
  Det_TransientModuleId[u32CoreId_10] = 0;
  # DEBUG BEGIN_STMT
  Det_TransientInstanceId[u32CoreId_10] = 0;
  # DEBUG BEGIN_STMT
  Det_TransientApiId[u32CoreId_10] = 0;
  # DEBUG BEGIN_STMT
  Det_TransientFaultId[u32CoreId_10] = 0;
  # DEBUG BEGIN_STMT
  _6 = ~result_11;
  return _6;

}


