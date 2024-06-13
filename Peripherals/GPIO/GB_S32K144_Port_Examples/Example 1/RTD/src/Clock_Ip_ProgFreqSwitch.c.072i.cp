
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Clock_Ip_ProgressiveFrequencyClockSwitchEmpty/0:

 Propagating constants:

Not considering Clock_Ip_ProgressiveFrequencyClockSwitchEmpty for cloning; -fipa-cp-clone disabled.

overall_size: 3, max_new_size: 11001
 - context independent values, size: 3, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: Clock_Ip_ProgressiveFrequencyClockSwitchEmpty/0:
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

Clock_Ip_axPcfsCallbacks/1 (Clock_Ip_axPcfsCallbacks) @069a95e8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_ProgressiveFrequencyClockSwitchEmpty/0 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Clock_Ip_ProgressiveFrequencyClockSwitchEmpty/0 (Clock_Ip_ProgressiveFrequencyClockSwitchEmpty) @068c6000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axPcfsCallbacks/1 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function Clock_Ip_ProgressiveFrequencyClockSwitchEmpty (Clock_Ip_ProgressiveFrequencyClockSwitchEmpty, funcdef_no=0, decl_uid=6056, cgraph_uid=1, symbol_order=0)

Modification phase of node Clock_Ip_ProgressiveFrequencyClockSwitchEmpty/0
Clock_Ip_ProgressiveFrequencyClockSwitchEmpty (const struct Clock_Ip_PcfsConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}


