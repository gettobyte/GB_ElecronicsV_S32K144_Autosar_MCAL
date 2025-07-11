
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Can_ProcessBusOffInterrupt/1:
  Jump functions of caller  Can_ErrorIrqCallback/0:

 Propagating constants:

Not considering Can_ErrorIrqCallback for cloning; -fipa-cp-clone disabled.

overall_size: 7, max_new_size: 11001
 - context independent values, size: 7, time_benefit: 2.000000

IPA lattices after all propagation:

Lattices:
  Node: Can_ErrorIrqCallback/0:
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

Can_ProcessBusOffInterrupt/1 (Can_ProcessBusOffInterrupt) @060c18c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_ErrorIrqCallback/0 (217325345 (estimated locally),0.20 per call) 
  Calls: 
Can_ErrorIrqCallback/0 (Can_ErrorIrqCallback) @060c1a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Can_ProcessBusOffInterrupt/1 (217325345 (estimated locally),0.20 per call) 

;; Function Can_ErrorIrqCallback (Can_ErrorIrqCallback, funcdef_no=0, decl_uid=6709, cgraph_uid=1, symbol_order=0)

Modification phase of node Can_ErrorIrqCallback/0
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


