
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Clock_Ip_SetExternalSignalFrequency/0:

 Propagating constants:

Not considering Clock_Ip_SetExternalSignalFrequency for cloning; -fipa-cp-clone disabled.

overall_size: 3, max_new_size: 11001
 - context independent values, size: 3, time_benefit: 2.000000

IPA lattices after all propagation:

Lattices:
  Node: Clock_Ip_SetExternalSignalFrequency/0:
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

Clock_Ip_SetExternalSignalFrequency/0 (Clock_Ip_SetExternalSignalFrequency) @06a628c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function Clock_Ip_SetExternalSignalFrequency (Clock_Ip_SetExternalSignalFrequency, funcdef_no=0, decl_uid=6042, cgraph_uid=1, symbol_order=0)

Modification phase of node Clock_Ip_SetExternalSignalFrequency/0
Clock_Ip_SetExternalSignalFrequency (Clock_Ip_NameType SignalName, uint32 Frequency)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}


