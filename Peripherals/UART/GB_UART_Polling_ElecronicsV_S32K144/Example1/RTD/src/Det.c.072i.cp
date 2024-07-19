
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Det_Start/16:
  Jump functions of caller  Det_ReportTransientFault/15:
  Jump functions of caller  Det_ReportRuntimeError/14:
  Jump functions of caller  Det_ReportError/13:
  Jump functions of caller  Det_Init/12:

 Propagating constants:

Function Det_Start/16 is not versionable, reason: not a tree_versionable_function.
Not considering Det_ReportTransientFault for cloning; -fipa-cp-clone disabled.
Not considering Det_ReportRuntimeError for cloning; -fipa-cp-clone disabled.
Not considering Det_ReportError for cloning; -fipa-cp-clone disabled.
Not considering Det_Init for cloning; -fipa-cp-clone disabled.

overall_size: 28, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Det_Start/16:
  Node: Det_ReportTransientFault/15:
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
  Node: Det_ReportRuntimeError/14:
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
  Node: Det_ReportError/13:
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
  Node: Det_Init/12:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Det_Start/16 (Det_Start) @067872a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: Det_Init/12 (1073741824 (estimated locally),1.00 per call) 
Det_ReportTransientFault/15 (Det_ReportTransientFault) @06787000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Det_TransientModuleId/9 (write)Det_TransientInstanceId/6 (write)Det_TransientApiId/7 (write)Det_TransientFaultId/8 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Det_ReportRuntimeError/14 (Det_ReportRuntimeError) @06783c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Det_RuntimeModuleId/11 (write)Det_RuntimeInstanceId/3 (write)Det_RuntimeApiId/4 (write)Det_RuntimeErrorId/5 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Det_ReportError/13 (Det_ReportError) @06783e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Det_ModuleId/10 (write)Det_InstanceId/0 (write)Det_ApiId/1 (write)Det_ErrorId/2 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Det_Init/12 (Det_Init) @06783b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: Det_Start/16 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Det_RuntimeModuleId/11 (Det_RuntimeModuleId) @06723ee8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Det_ReportRuntimeError/14 (write)
  Availability: available
  Varpool flags:
Det_ModuleId/10 (Det_ModuleId) @06723ea0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Det_ReportError/13 (write)
  Availability: available
  Varpool flags:
Det_TransientModuleId/9 (Det_TransientModuleId) @06723e58
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Det_ReportTransientFault/15 (write)
  Availability: available
  Varpool flags:
Det_TransientFaultId/8 (Det_TransientFaultId) @06723e10
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Det_ReportTransientFault/15 (write)
  Availability: available
  Varpool flags:
Det_TransientApiId/7 (Det_TransientApiId) @06723dc8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Det_ReportTransientFault/15 (write)
  Availability: available
  Varpool flags:
Det_TransientInstanceId/6 (Det_TransientInstanceId) @06723d80
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Det_ReportTransientFault/15 (write)
  Availability: available
  Varpool flags:
Det_RuntimeErrorId/5 (Det_RuntimeErrorId) @06723d38
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Det_ReportRuntimeError/14 (write)
  Availability: available
  Varpool flags:
Det_RuntimeApiId/4 (Det_RuntimeApiId) @06723cf0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Det_ReportRuntimeError/14 (write)
  Availability: available
  Varpool flags:
Det_RuntimeInstanceId/3 (Det_RuntimeInstanceId) @06723ca8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Det_ReportRuntimeError/14 (write)
  Availability: available
  Varpool flags:
Det_ErrorId/2 (Det_ErrorId) @06723c60
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Det_ReportError/13 (write)
  Availability: available
  Varpool flags:
Det_ApiId/1 (Det_ApiId) @06723c18
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Det_ReportError/13 (write)
  Availability: available
  Varpool flags:
Det_InstanceId/0 (Det_InstanceId) @06723bd0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Det_ReportError/13 (write)
  Availability: available
  Varpool flags:

;; Function Det_Init (Det_Init, funcdef_no=0, decl_uid=5551, cgraph_uid=1, symbol_order=12)

Modification phase of node Det_Init/12
Det_Init ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Det_ReportError (Det_ReportError, funcdef_no=1, decl_uid=5556, cgraph_uid=2, symbol_order=13)

Modification phase of node Det_ReportError/13
Det_ReportError (uint16 ModuleId, uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  Det_ModuleId[0] = ModuleId_2(D);
  # DEBUG BEGIN_STMT
  Det_InstanceId[0] = InstanceId_4(D);
  # DEBUG BEGIN_STMT
  Det_ApiId[0] = ApiId_6(D);
  # DEBUG BEGIN_STMT
  Det_ErrorId[0] = ErrorId_8(D);
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Det_ReportRuntimeError (Det_ReportRuntimeError, funcdef_no=2, decl_uid=5561, cgraph_uid=3, symbol_order=14)

Modification phase of node Det_ReportRuntimeError/14
Det_ReportRuntimeError (uint16 ModuleId, uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  Det_RuntimeModuleId[0] = ModuleId_2(D);
  # DEBUG BEGIN_STMT
  Det_RuntimeInstanceId[0] = InstanceId_4(D);
  # DEBUG BEGIN_STMT
  Det_RuntimeApiId[0] = ApiId_6(D);
  # DEBUG BEGIN_STMT
  Det_RuntimeErrorId[0] = ErrorId_8(D);
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Det_ReportTransientFault (Det_ReportTransientFault, funcdef_no=3, decl_uid=5566, cgraph_uid=4, symbol_order=15)

Modification phase of node Det_ReportTransientFault/15
Det_ReportTransientFault (uint16 ModuleId, uint8 InstanceId, uint8 ApiId, uint8 FaultId)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  Det_TransientModuleId[0] = ModuleId_2(D);
  # DEBUG BEGIN_STMT
  Det_TransientInstanceId[0] = InstanceId_4(D);
  # DEBUG BEGIN_STMT
  Det_TransientApiId[0] = ApiId_6(D);
  # DEBUG BEGIN_STMT
  Det_TransientFaultId[0] = FaultId_8(D);
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Det_Start (Det_Start, funcdef_no=6, decl_uid=5568, cgraph_uid=5, symbol_order=16)

Modification phase of node Det_Start/16
Det_Start ()
{
  <bb 2> [local count: 1073741824]:
  Det_Init (); [tail call]
  return;

}


