
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Power_Ip_PMC_PowerInit/0:

 Propagating constants:

Not considering Power_Ip_PMC_PowerInit for cloning; -fipa-cp-clone disabled.

overall_size: 18, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Power_Ip_PMC_PowerInit/0:
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

Power_Ip_PMC_PowerInit/0 (Power_Ip_PMC_PowerInit) @0671f380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function Power_Ip_PMC_PowerInit (Power_Ip_PMC_PowerInit, funcdef_no=0, decl_uid=5636, cgraph_uid=1, symbol_order=0)

Modification phase of node Power_Ip_PMC_PowerInit/0
Power_Ip_PMC_PowerInit (const struct Power_Ip_PMC_ConfigType * ConfigPtr)
{
  uint8 Tmp;
  unsigned char _1;
  unsigned char _2;
  unsigned char _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Tmp_5 ={v} MEM[(struct PMC_Type *)1074253824B].LVDSC1;
  # DEBUG Tmp => Tmp_5
  # DEBUG BEGIN_STMT
  Tmp_6 = Tmp_5 & 15;
  # DEBUG Tmp => Tmp_6
  # DEBUG BEGIN_STMT
  _1 = ConfigPtr_7(D)->Lvdsc1;
  Tmp_8 = _1 | Tmp_6;
  # DEBUG Tmp => Tmp_8
  # DEBUG BEGIN_STMT
  MEM[(struct PMC_Type *)1074253824B].LVDSC1 ={v} Tmp_8;
  # DEBUG BEGIN_STMT
  Tmp_10 ={v} MEM[(struct PMC_Type *)1074253824B].LVDSC2;
  # DEBUG Tmp => Tmp_10
  # DEBUG BEGIN_STMT
  Tmp_11 = Tmp_10 & 31;
  # DEBUG Tmp => Tmp_11
  # DEBUG BEGIN_STMT
  _2 = ConfigPtr_7(D)->Lvdsc2;
  Tmp_12 = _2 | Tmp_11;
  # DEBUG Tmp => Tmp_12
  # DEBUG BEGIN_STMT
  MEM[(struct PMC_Type *)1074253824B].LVDSC2 ={v} Tmp_12;
  # DEBUG BEGIN_STMT
  Tmp_14 ={v} MEM[(struct PMC_Type *)1074253824B].REGSC;
  # DEBUG Tmp => Tmp_14
  # DEBUG BEGIN_STMT
  Tmp_15 = Tmp_14 & 56;
  # DEBUG Tmp => Tmp_15
  # DEBUG BEGIN_STMT
  _3 = ConfigPtr_7(D)->Regsc;
  Tmp_16 = _3 | Tmp_15;
  # DEBUG Tmp => Tmp_16
  # DEBUG BEGIN_STMT
  MEM[(struct PMC_Type *)1074253824B].REGSC ={v} Tmp_16;
  return;

}


