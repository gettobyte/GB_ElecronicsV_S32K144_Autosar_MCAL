
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Crypto_Ipw_SheMPCompression/14:
  Jump functions of caller  Crypto_Ipw_SheDebugAuth/13:
  Jump functions of caller  Crypto_Ipw_SheDebugChal/12:
  Jump functions of caller  Crypto_Ipw_SheGetId/11:
  Jump functions of caller  Crypto_Ipw_SheGetStatus/10:
  Jump functions of caller  Crypto_Ipw_SheSetBootStatus/9:
  Jump functions of caller  Crypto_Ipw_SetSynchronousRequestsTimeout/8:
  Jump functions of caller  Crypto_Exts_MPCompression/7:
  Jump functions of caller  Crypto_Exts_SHE_DebugAuth/6:
  Jump functions of caller  Crypto_Exts_SHE_DebugChal/5:
  Jump functions of caller  Crypto_Exts_SHE_GetId/4:
  Jump functions of caller  Crypto_Exts_SHE_GetStatus/3:
  Jump functions of caller  Crypto_Exts_SHE_BootOk/2:
  Jump functions of caller  Crypto_Exts_SHE_BootFailure/1:
  Jump functions of caller  Crypto_Exts_SetSynchronousRequestsTimeout/0:

 Propagating constants:

Not considering Crypto_Exts_MPCompression for cloning; -fipa-cp-clone disabled.
Not considering Crypto_Exts_SHE_DebugAuth for cloning; -fipa-cp-clone disabled.
Not considering Crypto_Exts_SHE_DebugChal for cloning; -fipa-cp-clone disabled.
Not considering Crypto_Exts_SHE_GetId for cloning; -fipa-cp-clone disabled.
Not considering Crypto_Exts_SHE_GetStatus for cloning; -fipa-cp-clone disabled.
Not considering Crypto_Exts_SHE_BootOk for cloning; -fipa-cp-clone disabled.
Not considering Crypto_Exts_SHE_BootFailure for cloning; -fipa-cp-clone disabled.
Not considering Crypto_Exts_SetSynchronousRequestsTimeout for cloning; -fipa-cp-clone disabled.

overall_size: 61, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Crypto_Exts_MPCompression/7:
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
  Node: Crypto_Exts_SHE_DebugAuth/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Crypto_Exts_SHE_DebugChal/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Crypto_Exts_SHE_GetId/4:
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
  Node: Crypto_Exts_SHE_GetStatus/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Crypto_Exts_SHE_BootOk/2:
  Node: Crypto_Exts_SHE_BootFailure/1:
  Node: Crypto_Exts_SetSynchronousRequestsTimeout/0:
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

Crypto_Ipw_SheMPCompression/14 (Crypto_Ipw_SheMPCompression) @06a72c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_Exts_MPCompression/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_Ipw_SheDebugAuth/13 (Crypto_Ipw_SheDebugAuth) @06a72a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_Exts_SHE_DebugAuth/6 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_Ipw_SheDebugChal/12 (Crypto_Ipw_SheDebugChal) @06a728c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_Exts_SHE_DebugChal/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_Ipw_SheGetId/11 (Crypto_Ipw_SheGetId) @06a72700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_Exts_SHE_GetId/4 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_Ipw_SheGetStatus/10 (Crypto_Ipw_SheGetStatus) @06a72540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_Exts_SHE_GetStatus/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_Ipw_SheSetBootStatus/9 (Crypto_Ipw_SheSetBootStatus) @06a722a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_Exts_SHE_BootOk/2 (1073741824 (estimated locally),1.00 per call) Crypto_Exts_SHE_BootFailure/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_Ipw_SetSynchronousRequestsTimeout/8 (Crypto_Ipw_SetSynchronousRequestsTimeout) @06a720e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_Exts_SetSynchronousRequestsTimeout/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_Exts_MPCompression/7 (Crypto_Exts_MPCompression) @06a6c2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_Ipw_SheMPCompression/14 (1073741824 (estimated locally),1.00 per call) 
Crypto_Exts_SHE_DebugAuth/6 (Crypto_Exts_SHE_DebugAuth) @06a6cee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_Ipw_SheDebugAuth/13 (1073741824 (estimated locally),1.00 per call) 
Crypto_Exts_SHE_DebugChal/5 (Crypto_Exts_SHE_DebugChal) @06a6cc40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_Ipw_SheDebugChal/12 (1073741824 (estimated locally),1.00 per call) 
Crypto_Exts_SHE_GetId/4 (Crypto_Exts_SHE_GetId) @06a6c9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_Ipw_SheGetId/11 (1073741824 (estimated locally),1.00 per call) 
Crypto_Exts_SHE_GetStatus/3 (Crypto_Exts_SHE_GetStatus) @06a6c700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_Ipw_SheGetStatus/10 (1073741824 (estimated locally),1.00 per call) 
Crypto_Exts_SHE_BootOk/2 (Crypto_Exts_SHE_BootOk) @06a6c460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_Ipw_SheSetBootStatus/9 (1073741824 (estimated locally),1.00 per call) 
Crypto_Exts_SHE_BootFailure/1 (Crypto_Exts_SHE_BootFailure) @06a6c1c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_Ipw_SheSetBootStatus/9 (1073741824 (estimated locally),1.00 per call) 
Crypto_Exts_SetSynchronousRequestsTimeout/0 (Crypto_Exts_SetSynchronousRequestsTimeout) @06a67e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_Ipw_SetSynchronousRequestsTimeout/8 (1073741824 (estimated locally),1.00 per call) 

;; Function Crypto_Exts_SetSynchronousRequestsTimeout (Crypto_Exts_SetSynchronousRequestsTimeout, funcdef_no=0, decl_uid=6010, cgraph_uid=1, symbol_order=0)

Modification phase of node Crypto_Exts_SetSynchronousRequestsTimeout/0
Crypto_Exts_SetSynchronousRequestsTimeout (uint32 u32Timeout)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG u32PartitionId => 0
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  Crypto_Ipw_SetSynchronousRequestsTimeout (0, u32Timeout_2(D));
  # DEBUG BEGIN_STMT
  return 1;

}



;; Function Crypto_Exts_SHE_BootFailure (Crypto_Exts_SHE_BootFailure, funcdef_no=1, decl_uid=6012, cgraph_uid=2, symbol_order=1)

Modification phase of node Crypto_Exts_SHE_BootFailure/1
Crypto_Exts_SHE_BootFailure ()
{
  Std_ReturnType RetVal;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG u32PartitionId => 0
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  RetVal_3 = Crypto_Ipw_SheSetBootStatus (0, 0);
  # DEBUG RetVal => RetVal_3
  # DEBUG BEGIN_STMT
  return RetVal_3;

}



;; Function Crypto_Exts_SHE_BootOk (Crypto_Exts_SHE_BootOk, funcdef_no=2, decl_uid=6014, cgraph_uid=3, symbol_order=2)

Modification phase of node Crypto_Exts_SHE_BootOk/2
Crypto_Exts_SHE_BootOk ()
{
  Std_ReturnType RetVal;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG u32PartitionId => 0
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  RetVal_3 = Crypto_Ipw_SheSetBootStatus (0, 1);
  # DEBUG RetVal => RetVal_3
  # DEBUG BEGIN_STMT
  return RetVal_3;

}



;; Function Crypto_Exts_SHE_GetStatus (Crypto_Exts_SHE_GetStatus, funcdef_no=3, decl_uid=6016, cgraph_uid=4, symbol_order=3)

Modification phase of node Crypto_Exts_SHE_GetStatus/3
Crypto_Exts_SHE_GetStatus (uint8 * pStatus)
{
  Std_ReturnType RetVal;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG u32PartitionId => 0
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  RetVal_4 = Crypto_Ipw_SheGetStatus (0, pStatus_2(D));
  # DEBUG RetVal => RetVal_4
  # DEBUG BEGIN_STMT
  return RetVal_4;

}



;; Function Crypto_Exts_SHE_GetId (Crypto_Exts_SHE_GetId, funcdef_no=4, decl_uid=6021, cgraph_uid=5, symbol_order=4)

Modification phase of node Crypto_Exts_SHE_GetId/4
Crypto_Exts_SHE_GetId (const uint8 * pChallenge, uint8 * pId, uint8 * pSreg, uint8 * pMac)
{
  Std_ReturnType RetVal;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG u32PartitionId => 0
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  RetVal_7 = Crypto_Ipw_SheGetId (0, pChallenge_2(D), pId_3(D), pSreg_4(D), pMac_5(D));
  # DEBUG RetVal => RetVal_7
  # DEBUG BEGIN_STMT
  return RetVal_7;

}



;; Function Crypto_Exts_SHE_DebugChal (Crypto_Exts_SHE_DebugChal, funcdef_no=5, decl_uid=6023, cgraph_uid=6, symbol_order=5)

Modification phase of node Crypto_Exts_SHE_DebugChal/5
Crypto_Exts_SHE_DebugChal (uint8 * pChallenge)
{
  Std_ReturnType RetVal;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG u32PartitionId => 0
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  RetVal_4 = Crypto_Ipw_SheDebugChal (0, pChallenge_2(D));
  # DEBUG RetVal => RetVal_4
  # DEBUG BEGIN_STMT
  return RetVal_4;

}



;; Function Crypto_Exts_SHE_DebugAuth (Crypto_Exts_SHE_DebugAuth, funcdef_no=6, decl_uid=6025, cgraph_uid=7, symbol_order=6)

Modification phase of node Crypto_Exts_SHE_DebugAuth/6
Crypto_Exts_SHE_DebugAuth (const uint8 * pAuthorization)
{
  Std_ReturnType RetVal;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG u32PartitionId => 0
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  RetVal_4 = Crypto_Ipw_SheDebugAuth (0, pAuthorization_2(D));
  # DEBUG RetVal => RetVal_4
  # DEBUG BEGIN_STMT
  return RetVal_4;

}



;; Function Crypto_Exts_MPCompression (Crypto_Exts_MPCompression, funcdef_no=7, decl_uid=6030, cgraph_uid=8, symbol_order=7)

Modification phase of node Crypto_Exts_MPCompression/7
Crypto_Exts_MPCompression (const uint8 * pInput, uint32 u32InputLen, uint8 * pResult, const uint32 * pResultLen)
{
  Std_ReturnType RetVal;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG u32PartitionId => 0
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  RetVal_7 = Crypto_Ipw_SheMPCompression (0, pInput_2(D), u32InputLen_3(D), pResult_4(D), pResultLen_5(D));
  # DEBUG RetVal => RetVal_7
  # DEBUG BEGIN_STMT
  return RetVal_7;

}


