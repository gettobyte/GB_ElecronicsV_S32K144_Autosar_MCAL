
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Can_ProcessBusOffInterrupt/3:
  Jump functions of caller  Can_ProcessMesgBufferCommonInterrupt/2:
  Jump functions of caller  Can_ErrorIrqCallback/1:
  Jump functions of caller  Can_CommonIrqCallback/0:

 Propagating constants:

Not considering Can_ErrorIrqCallback for cloning; -fipa-cp-clone disabled.
Not considering Can_CommonIrqCallback for cloning; -fipa-cp-clone disabled.

overall_size: 45, max_new_size: 11001
 - context independent values, size: 7, time_benefit: 2.000000

IPA lattices after all propagation:

Lattices:
  Node: Can_ErrorIrqCallback/1:
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
  Node: Can_CommonIrqCallback/0:
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

Can_ProcessBusOffInterrupt/3 (Can_ProcessBusOffInterrupt) @061aa460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_ErrorIrqCallback/1 (217325345 (estimated locally),0.20 per call) 
  Calls: 
Can_ProcessMesgBufferCommonInterrupt/2 (Can_ProcessMesgBufferCommonInterrupt) @061aa2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_CommonIrqCallback/0 (89487432 (estimated locally),0.08 per call) Can_CommonIrqCallback/0 (89487432 (estimated locally),0.08 per call) Can_CommonIrqCallback/0 (89487432 (estimated locally),0.08 per call) Can_CommonIrqCallback/0 (89487432 (estimated locally),0.08 per call) Can_CommonIrqCallback/0 (89487432 (estimated locally),0.08 per call) 
  Calls: 
Can_ErrorIrqCallback/1 (Can_ErrorIrqCallback) @06097ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Can_ProcessBusOffInterrupt/3 (217325345 (estimated locally),0.20 per call) 
Can_CommonIrqCallback/0 (Can_CommonIrqCallback) @06097b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073634462 (estimated locally) body optimize_size
  Called by: 
  Calls: Can_ProcessMesgBufferCommonInterrupt/2 (89487432 (estimated locally),0.08 per call) Can_ProcessMesgBufferCommonInterrupt/2 (89487432 (estimated locally),0.08 per call) Can_ProcessMesgBufferCommonInterrupt/2 (89487432 (estimated locally),0.08 per call) Can_ProcessMesgBufferCommonInterrupt/2 (89487432 (estimated locally),0.08 per call) Can_ProcessMesgBufferCommonInterrupt/2 (89487432 (estimated locally),0.08 per call) 

;; Function Can_CommonIrqCallback (Can_CommonIrqCallback, funcdef_no=0, decl_uid=6713, cgraph_uid=1, symbol_order=0)

Modification phase of node Can_CommonIrqCallback/0
Can_CommonIrqCallback (uint8 u8Instance, Flexcan_Ip_EventType event, uint32 u32buffIdx, const struct Flexcan_Ip_StateType * driverState)
{
  _Bool _1;
  unsigned char _2;
  unsigned char _3;
  unsigned char _4;

  <bb 2> [local count: 1073634462]:
  # DEBUG BEGIN_STMT
  _1 = driverState_7(D)->mbs[u32buffIdx_8(D)].isPolling;
  if (_1 != 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536817231]:
  # DEBUG BEGIN_STMT
  switch (event_9(D)) <default: <L9> [16.67%], case 0: <L2> [16.67%], case 1: <L3> [16.67%], case 2: <L4> [16.67%], case 3: <L5> [16.67%], case 4: <L1> [16.67%]>

  <bb 4> [local count: 89487432]:
<L1>:
  # DEBUG BEGIN_STMT
  _2 = (unsigned char) u32buffIdx_8(D);
  Can_ProcessMesgBufferCommonInterrupt (u8Instance_10(D), _2, 3);
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 5> [local count: 89487432]:
<L2>:
  # DEBUG BEGIN_STMT
  _3 = (unsigned char) u32buffIdx_8(D);
  Can_ProcessMesgBufferCommonInterrupt (u8Instance_10(D), _3, 0);
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 89487432]:
<L3>:
  # DEBUG BEGIN_STMT
  _4 = (unsigned char) u32buffIdx_8(D);
  Can_ProcessMesgBufferCommonInterrupt (u8Instance_10(D), _4, 1);
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 7> [local count: 89487432]:
<L4>:
  # DEBUG BEGIN_STMT
  Can_ProcessMesgBufferCommonInterrupt (u8Instance_10(D), 6, 1);
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 89487432]:
<L5>:
  # DEBUG BEGIN_STMT
  Can_ProcessMesgBufferCommonInterrupt (u8Instance_10(D), 7, 1);
  # DEBUG BEGIN_STMT

  <bb 9> [local count: 1073741824]:
<L9>:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function Can_ErrorIrqCallback (Can_ErrorIrqCallback, funcdef_no=1, decl_uid=6731, cgraph_uid=2, symbol_order=1)

Modification phase of node Can_ErrorIrqCallback/1
Can_ErrorIrqCallback (uint8 u8Instance, Flexcan_Ip_EventType event, uint32 u32ErrStatus, const struct Flexcan_Ip_StateType * driverState)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (event_2(D) == 7)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
<L0>:
  # DEBUG BEGIN_STMT
  Can_ProcessBusOffInterrupt (u8Instance_4(D));
  # DEBUG BEGIN_STMT

  <bb 4> [local count: 1073741824]:
  return;

}


