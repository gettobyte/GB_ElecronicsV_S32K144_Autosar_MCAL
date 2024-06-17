
IPA constant propagation start:
Determining dynamic type for call: Port_Ipw_SetGpioPadOutput (PinIndex_27(D), pConfigPtr_26(D));
  Starting walk at: Port_Ipw_SetGpioPadOutput (PinIndex_27(D), pConfigPtr_26(D));
  instance pointer: pConfigPtr_26(D)  Outer instance pointer: pConfigPtr_26(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Port_Ipw_SetGpioDirChangeability (PinPad_28, 1);
Determining dynamic type for call: Port_Ipw_SetPinDirection (PinIndex_27(D), ePadDirection_33, pConfigPtr_26(D));
  Starting walk at: Port_Ipw_SetPinDirection (PinIndex_27(D), ePadDirection_33, pConfigPtr_26(D));
  instance pointer: pConfigPtr_26(D)  Outer instance pointer: pConfigPtr_26(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Port_Ipw_SetGpioDirChangeability (PinPad_28, 1);
  Function call may change dynamic type:Port_Ipw_SetGpioPadOutput (PinIndex_27(D), pConfigPtr_26(D));
Determining dynamic type for call: Port_Ipw_Init_UnusedPins (pConfigPtr_19(D));
  Starting walk at: Port_Ipw_Init_UnusedPins (pConfigPtr_19(D));
  instance pointer: pConfigPtr_19(D)  Outer instance pointer: pConfigPtr_19(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Port_Ci_Port_Ip_Init (2, _12);
  Function call may change dynamic type:Port_Ci_Port_Ip_SetDFER (_7, _10);
  Function call may change dynamic type:Port_Ci_Port_Ip_ConfigDigitalFilter (_6, _4);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_00/23:
  Jump functions of caller  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_00/22:
  Jump functions of caller  Port_Ci_Port_Ip_ReadPCR/21:
  Jump functions of caller  Port_Ci_Port_Ip_SetPCR/19:
  Jump functions of caller  Port_Ci_Port_Ip_SetPIDR/18:
  Jump functions of caller  Port_Ci_Port_Ip_ClearPDDR/17:
  Jump functions of caller  Port_Ci_Port_Ip_SetPDDR/16:
  Jump functions of caller  Port_Ci_Port_Ip_SetPCOR/15:
  Jump functions of caller  Port_Ci_Port_Ip_SetPSOR/14:
  Jump functions of caller  Port_Ci_Port_Ip_Init/12:
  Jump functions of caller  Port_Ci_Port_Ip_SetDFER/11:
  Jump functions of caller  Port_Ci_Port_Ip_ConfigDigitalFilter/10:
  Jump functions of caller  Port_Ipw_RefreshPortDirection/8:
  Jump functions of caller  Port_Ipw_SetGpioPadOutput/7:
  Jump functions of caller  Port_Ipw_SetGpioDirChangeability/6:
  Jump functions of caller  Port_Ipw_SetPinMode/5:
    callsite  Port_Ipw_SetPinMode/5 -> Port_Ipw_SetGpioDirChangeability/6 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Port_Ipw_SetPinMode/5 -> Port_Ipw_SetPinDirection/4 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Port_Ipw_SetPinMode/5 -> Port_Ipw_SetGpioPadOutput/7 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Port_Ipw_SetPinMode/5 -> Port_Ipw_SetGpioDirChangeability/6 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  Port_Ipw_SetPinDirection/4:
  Jump functions of caller  Port_Ipw_Init/3:
    callsite  Port_Ipw_Init/3 -> Port_Ipw_Init_UnusedPins/2 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Port_Ipw_Init_UnusedPins/2:

 Propagating constants:

Not considering Port_Ipw_RefreshPortDirection for cloning; -fipa-cp-clone disabled.
Not considering Port_Ipw_SetGpioPadOutput for cloning; -fipa-cp-clone disabled.
Not considering Port_Ipw_SetGpioDirChangeability for cloning; -fipa-cp-clone disabled.
Not considering Port_Ipw_SetPinMode for cloning; -fipa-cp-clone disabled.
Not considering Port_Ipw_SetPinDirection for cloning; -fipa-cp-clone disabled.
Not considering Port_Ipw_Init for cloning; -fipa-cp-clone disabled.

overall_size: 301, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Port_Ipw_RefreshPortDirection/8:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Port_Ipw_SetGpioPadOutput/7:
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
  Node: Port_Ipw_SetGpioDirChangeability/6:
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
  Node: Port_Ipw_SetPinMode/5:
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
  Node: Port_Ipw_SetPinDirection/4:
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
  Node: Port_Ipw_Init/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Port_Ipw_Init_UnusedPins/2:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

SchM_Exit_Port_PORT_EXCLUSIVE_AREA_00/23 (SchM_Exit_Port_PORT_EXCLUSIVE_AREA_00) @06826ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ipw_SetGpioDirChangeability/6 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Port_PORT_EXCLUSIVE_AREA_00/22 (SchM_Enter_Port_PORT_EXCLUSIVE_AREA_00) @06826e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ipw_SetGpioDirChangeability/6 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Port_Ci_Port_Ip_ReadPCR/21 (Port_Ci_Port_Ip_ReadPCR) @06826c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ipw_SetPinMode/5 (453655921 (estimated locally),0.42 per call) 
  Calls: 
Port_au16PinDescription/20 (Port_au16PinDescription) @0682fea0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Port_Ipw_SetPinMode/5 (read)
  Availability: not_available
  Varpool flags: read-only
Port_Ci_Port_Ip_SetPCR/19 (Port_Ci_Port_Ip_SetPCR) @068269a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ipw_SetPinMode/5 (453655921 (estimated locally),0.42 per call) Port_Ipw_Init_UnusedPins/2 (955630223 (estimated locally),8.09 per call) 
  Calls: 
Port_Ci_Port_Ip_SetPIDR/18 (Port_Ci_Port_Ip_SetPIDR) @068267e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ipw_RefreshPortDirection/8 (18265121 (estimated locally),0.15 per call) Port_Ipw_SetPinDirection/4 (61567824 (estimated locally),0.06 per call) Port_Ipw_Init_UnusedPins/2 (94543479 (estimated locally),0.80 per call) 
  Calls: 
Port_Ci_Port_Ip_ClearPDDR/17 (Port_Ci_Port_Ip_ClearPDDR) @06826700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ipw_RefreshPortDirection/8 (90242694 (estimated locally),0.76 per call) Port_Ipw_SetPinDirection/4 (304188856 (estimated locally),0.28 per call) Port_Ipw_Init_UnusedPins/2 (467112052 (estimated locally),3.95 per call) 
  Calls: 
Port_Ci_Port_Ip_SetPDDR/16 (Port_Ci_Port_Ip_SetPDDR) @06826620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ipw_RefreshPortDirection/8 (48354889 (estimated locally),0.41 per call) Port_Ipw_SetPinDirection/4 (162994009 (estimated locally),0.15 per call) Port_Ipw_Init_UnusedPins/2 (488518169 (estimated locally),4.14 per call) 
  Calls: 
Port_Ci_Port_Ip_SetPCOR/15 (Port_Ci_Port_Ip_SetPCOR) @06826540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ipw_SetGpioPadOutput/7 (282617438 (estimated locally),0.26 per call) Port_Ipw_Init_UnusedPins/2 (128581890 (estimated locally),1.09 per call) 
  Calls: 
Port_Ci_Port_Ip_SetPSOR/14 (Port_Ci_Port_Ip_SetPSOR) @06826460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ipw_SetGpioPadOutput/7 (217325345 (estimated locally),0.20 per call) Port_Ipw_Init_UnusedPins/2 (98876077 (estimated locally),0.84 per call) 
  Calls: 
Port_au32PortCiGpioBaseAddr/13 (Port_au32PortCiGpioBaseAddr) @0682f3a8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Port_Ipw_Init_UnusedPins/2 (read)Port_Ipw_Init_UnusedPins/2 (read)Port_Ipw_Init_UnusedPins/2 (read)Port_Ipw_SetPinDirection/4 (read)Port_Ipw_SetPinDirection/4 (read)Port_Ipw_SetPinDirection/4 (read)Port_Ipw_SetGpioPadOutput/7 (read)Port_Ipw_SetGpioPadOutput/7 (read)Port_Ipw_Init_UnusedPins/2 (read)Port_Ipw_Init_UnusedPins/2 (read)Port_Ipw_RefreshPortDirection/8 (read)Port_Ipw_RefreshPortDirection/8 (read)Port_Ipw_RefreshPortDirection/8 (read)
  Availability: not_available
  Varpool flags:
Port_Ci_Port_Ip_Init/12 (Port_Ci_Port_Ip_Init) @068262a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ipw_Init/3 (97603132 (estimated locally),1.00 per call) 
  Calls: 
Port_Ci_Port_Ip_SetDFER/11 (Port_Ci_Port_Ip_SetDFER) @068261c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ipw_Init/3 (789698069 (estimated locally),8.09 per call) 
  Calls: 
Port_Ci_Port_Ip_ConfigDigitalFilter/10 (Port_Ci_Port_Ip_ConfigDigitalFilter) @068260e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ipw_Init/3 (789698069 (estimated locally),8.09 per call) 
  Calls: 
Port_au32PortCiPortBaseAddr/9 (Port_au32PortCiPortBaseAddr) @0678be10
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Port_Ipw_Init/3 (read)Port_Ipw_Init/3 (read)Port_Ipw_Init_UnusedPins/2 (read)Port_Ipw_SetPinMode/5 (read)Port_Ipw_SetPinMode/5 (read)
  Availability: not_available
  Varpool flags:
Port_Ipw_RefreshPortDirection/8 (Port_Ipw_RefreshPortDirection) @06820e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Port_au32PortCiGpioBaseAddr/13 (read)Port_au32PortCiGpioBaseAddr/13 (read)Port_au32PortCiGpioBaseAddr/13 (read)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: Port_Ci_Port_Ip_SetPIDR/18 (18265121 (estimated locally),0.15 per call) Port_Ci_Port_Ip_ClearPDDR/17 (90242694 (estimated locally),0.76 per call) Port_Ci_Port_Ip_SetPDDR/16 (48354889 (estimated locally),0.41 per call) 
Port_Ipw_SetGpioPadOutput/7 (Port_Ipw_SetGpioPadOutput) @06820620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Port_au32PortCiGpioBaseAddr/13 (read)Port_au32PortCiGpioBaseAddr/13 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Port_Ipw_SetPinMode/5 (49760030 (estimated locally),0.05 per call) 
  Calls: Port_Ci_Port_Ip_SetPCOR/15 (282617438 (estimated locally),0.26 per call) Port_Ci_Port_Ip_SetPSOR/14 (217325345 (estimated locally),0.20 per call) 
Port_Ipw_SetGpioDirChangeability/6 (Port_Ipw_SetGpioDirChangeability) @06820000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Port_Ipw_au16GpioDirChangeability/1 (read)Port_Ipw_au16GpioDirChangeability/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Port_Ipw_SetPinMode/5 (299412908 (estimated locally),0.28 per call) Port_Ipw_SetPinMode/5 (154243013 (estimated locally),0.14 per call) 
  Calls: SchM_Exit_Port_PORT_EXCLUSIVE_AREA_00/23 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_00/22 (1073741824 (estimated locally),1.00 per call) 
Port_Ipw_SetPinMode/5 (Port_Ipw_SetPinMode) @06816380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Port_au16PinDescription/20 (read)Port_au32PortCiPortBaseAddr/9 (read)Port_au32PortCiPortBaseAddr/9 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Port_Ci_Port_Ip_SetPCR/19 (453655921 (estimated locally),0.42 per call) Port_Ci_Port_Ip_ReadPCR/21 (453655921 (estimated locally),0.42 per call) Port_Ipw_SetGpioDirChangeability/6 (299412908 (estimated locally),0.28 per call) Port_Ipw_SetPinDirection/4 (154243013 (estimated locally),0.14 per call) Port_Ipw_SetGpioPadOutput/7 (49760030 (estimated locally),0.05 per call) Port_Ipw_SetGpioDirChangeability/6 (154243013 (estimated locally),0.14 per call) 
Port_Ipw_SetPinDirection/4 (Port_Ipw_SetPinDirection) @06816a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Port_Ipw_au16GpioDirChangeability/1 (read)Port_au32PortCiGpioBaseAddr/13 (read)Port_au32PortCiGpioBaseAddr/13 (read)Port_au32PortCiGpioBaseAddr/13 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: Port_Ipw_SetPinMode/5 (154243013 (estimated locally),0.14 per call) 
  Calls: Port_Ci_Port_Ip_SetPIDR/18 (61567824 (estimated locally),0.06 per call) Port_Ci_Port_Ip_ClearPDDR/17 (304188856 (estimated locally),0.28 per call) Port_Ci_Port_Ip_SetPDDR/16 (162994009 (estimated locally),0.15 per call) 
Port_Ipw_Init/3 (Port_Ipw_Init) @068162a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Port_au32PortCiPortBaseAddr/9 (read)Port_au32PortCiPortBaseAddr/9 (read)Port_Ipw_au16GpioDirChangeability/1 (write)
  Referring: 
  Availability: available
  Function flags: count:97603132 (estimated locally) body optimize_size
  Called by: 
  Calls: Port_Ipw_Init_UnusedPins/2 (97603132 (estimated locally),1.00 per call) Port_Ci_Port_Ip_Init/12 (97603132 (estimated locally),1.00 per call) Port_Ci_Port_Ip_SetDFER/11 (789698069 (estimated locally),8.09 per call) Port_Ci_Port_Ip_ConfigDigitalFilter/10 (789698069 (estimated locally),8.09 per call) 
Port_Ipw_Init_UnusedPins/2 (Port_Ipw_Init_UnusedPins) @06816000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Port_au32PortCiGpioBaseAddr/13 (read)Port_au32PortCiGpioBaseAddr/13 (read)Port_au32PortCiGpioBaseAddr/13 (read)Port_au32PortCiGpioBaseAddr/13 (read)Port_au32PortCiGpioBaseAddr/13 (read)Port_au32PortCiPortBaseAddr/9 (read)
  Referring: 
  Availability: local
  Function flags: count:118111600 (estimated locally) body local optimize_size
  Called by: Port_Ipw_Init/3 (97603132 (estimated locally),1.00 per call) 
  Calls: Port_Ci_Port_Ip_SetPCR/19 (955630223 (estimated locally),8.09 per call) Port_Ci_Port_Ip_SetPIDR/18 (94543479 (estimated locally),0.80 per call) Port_Ci_Port_Ip_ClearPDDR/17 (467112052 (estimated locally),3.95 per call) Port_Ci_Port_Ip_SetPDDR/16 (488518169 (estimated locally),4.14 per call) Port_Ci_Port_Ip_SetPCOR/15 (128581890 (estimated locally),1.09 per call) Port_Ci_Port_Ip_SetPSOR/14 (98876077 (estimated locally),0.84 per call) 
Port_Ipw_au16GpioDirChangeability/1 (Port_Ipw_au16GpioDirChangeability) @06785f78
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Port_Ipw_Init/3 (write)Port_Ipw_SetPinDirection/4 (read)Port_Ipw_SetGpioDirChangeability/6 (read)Port_Ipw_SetGpioDirChangeability/6 (write)
  Availability: available
  Varpool flags:

;; Function Port_Ipw_Init (Port_Ipw_Init, funcdef_no=2, decl_uid=5685, cgraph_uid=3, symbol_order=3)

Modification phase of node Port_Ipw_Init/3
Port_Ipw_Init (const struct Port_ConfigType * pConfigPtr)
{
  uint8 u8Port;
  uint8 u8NumDigFilterPorts;
  uint16 u16PinIndex;
  const struct Port_Ci_Port_Ip_DigitalFilterConfigType * _1;
  unsigned int _2;
  unsigned int _3;
  const struct Port_Ci_Port_Ip_DigitalFilterConfigType * _4;
  int _5;
  struct PORT_Type * _6;
  struct PORT_Type * _7;
  const struct Port_Ci_Port_Ip_DigitalFilterConfigType * _8;
  const struct Port_Ci_Port_Ip_DigitalFilterConfigType * _9;
  long unsigned int _10;
  short unsigned int _11;
  const struct Port_Ci_Port_Ip_PinSettingsConfig * _12;
  int _13;

  <bb 2> [local count: 97603132]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  u8NumDigFilterPorts_20 = pConfigPtr_19(D)->u8NumDigitalFilterPorts;
  # DEBUG u8NumDigFilterPorts => u8NumDigFilterPorts_20
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG u16PinIndex => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 789698069]:
  # DEBUG BEGIN_STMT
  _1 = pConfigPtr_19(D)->pDigitalFilterConfig;
  _2 = (unsigned int) u16PinIndex_14;
  _3 = _2 * 8;
  _4 = _1 + _3;
  u8Port_25 = _4->u8Port;
  # DEBUG u8Port => u8Port_25
  # DEBUG BEGIN_STMT
  _5 = (int) u8Port_25;
  _6 = Port_au32PortCiPortBaseAddr[_5];
  Port_Ci_Port_Ip_ConfigDigitalFilter (_6, _4);
  # DEBUG BEGIN_STMT
  _7 = Port_au32PortCiPortBaseAddr[_5];
  _8 = pConfigPtr_19(D)->pDigitalFilterConfig;
  _9 = _8 + _3;
  _10 = _9->u32PinMask;
  Port_Ci_Port_Ip_SetDFER (_7, _10);
  # DEBUG BEGIN_STMT
  u16PinIndex_28 = u16PinIndex_14 + 1;
  # DEBUG u16PinIndex => u16PinIndex_28

  <bb 4> [local count: 887301202]:
  # u16PinIndex_14 = PHI <0(2), u16PinIndex_28(3)>
  # DEBUG u16PinIndex => u16PinIndex_14
  # DEBUG BEGIN_STMT
  _11 = (short unsigned int) u8NumDigFilterPorts_20;
  if (_11 > u16PinIndex_14)
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 97603132]:
  # DEBUG BEGIN_STMT
  _12 = pConfigPtr_19(D)->IpConfigPtr;
  Port_Ci_Port_Ip_Init (2, _12);
  # DEBUG BEGIN_STMT
  Port_Ipw_Init_UnusedPins (pConfigPtr_19(D));
  # DEBUG BEGIN_STMT
  # DEBUG u16PinIndex => 0
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 976138693]:
  # DEBUG BEGIN_STMT
  _13 = (int) u16PinIndex_15;
  Port_Ipw_au16GpioDirChangeability[_13] = 0;
  # DEBUG BEGIN_STMT
  u16PinIndex_24 = u16PinIndex_15 + 1;
  # DEBUG u16PinIndex => u16PinIndex_24

  <bb 7> [local count: 1073741824]:
  # u16PinIndex_15 = PHI <0(5), u16PinIndex_24(6)>
  # DEBUG u16PinIndex => u16PinIndex_15
  # DEBUG BEGIN_STMT
  if (u16PinIndex_15 != 10)
    goto <bb 6>; [90.91%]
  else
    goto <bb 8>; [9.09%]

  <bb 8> [local count: 97603132]:
  return;

}



;; Function Port_Ipw_SetPinDirection (Port_Ipw_SetPinDirection, funcdef_no=3, decl_uid=5689, cgraph_uid=4, symbol_order=4)

Modification phase of node Port_Ipw_SetPinDirection/4
Port_Ipw_SetPinDirection (Port_PinType PinIndex, Port_PinDirectionType eDirection, const struct Port_ConfigType * pConfigPtr)
{
  uint16 u16PinChangeDirFlagWord;
  uint8 u8PinDescBitOffset;
  Std_ReturnType PinDirError;
  uint16 Pin;
  const struct Port_PinConfigType * _1;
  long unsigned int _2;
  const struct Port_PinConfigType * _3;
  unsigned char _4;
  short unsigned int _5;
  unsigned char _6;
  int _7;
  _Bool _8;
  int _9;
  long unsigned int _10;
  short unsigned int _11;
  short unsigned int _12;
  short unsigned int _13;
  long unsigned int _14;
  struct GPIO_Type * _15;
  long unsigned int _16;
  long unsigned int _17;
  short unsigned int _18;
  long unsigned int _19;
  struct GPIO_Type * _20;
  long unsigned int _21;
  long unsigned int _22;
  struct GPIO_Type * _23;
  short unsigned int _30;
  short unsigned int _37;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  _1 = pConfigPtr_27(D)->pUsedPadConfig;
  _2 = PinIndex_28(D) * 20;
  _3 = _1 + _2;
  Pin_29 = _3->Pin;
  # DEBUG Pin => Pin_29
  # DEBUG BEGIN_STMT
  # DEBUG PinDirError => 0
  # DEBUG BEGIN_STMT
  _4 = (unsigned char) Pin_29;
  u8PinDescBitOffset_31 = _4 & 15;
  # DEBUG u8PinDescBitOffset => u8PinDescBitOffset_31
  # DEBUG BEGIN_STMT
  _5 = Pin_29 >> 4;
  _6 = (unsigned char) _5;
  _7 = (int) _6;
  u16PinChangeDirFlagWord_32 = Port_Ipw_au16GpioDirChangeability[_7];
  # DEBUG u16PinChangeDirFlagWord => u16PinChangeDirFlagWord_32
  # DEBUG BEGIN_STMT
  _8 = _3->bDC;
  if (_8 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870911]:
  _9 = (int) u8PinDescBitOffset_31;
  _10 = 1 << _9;
  _11 = (short unsigned int) _10;
  _12 = _11 & u16PinChangeDirFlagWord_32;
  if (_12 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 4> [local count: 805306368]:
  # DEBUG BEGIN_STMT
  if (eDirection_33(D) == 2)
    goto <bb 5>; [20.24%]
  else
    goto <bb 6>; [79.76%]

  <bb 5> [local count: 162994009]:
  # DEBUG BEGIN_STMT
  _13 = Pin_29 >> 5;
  _14 = (long unsigned int) _13;
  _15 = Port_au32PortCiGpioBaseAddr[_14];
  _37 = Pin_29 & 31;
  _16 = (long unsigned int) _37;
  _17 = 1 << _16;
  Port_Ci_Port_Ip_SetPDDR (_15, _17);
  goto <bb 10>; [100.00%]

  <bb 6> [local count: 642312359]:
  # DEBUG BEGIN_STMT
  if (eDirection_33(D) == 1)
    goto <bb 8>; [20.24%]
  else
    goto <bb 7>; [79.76%]

  <bb 7> [local count: 512308337]:
  if (eDirection_33(D) == 3)
    goto <bb 8>; [34.00%]
  else
    goto <bb 10>; [66.00%]

  <bb 8> [local count: 304188856]:
  # DEBUG BEGIN_STMT
  _18 = Pin_29 >> 5;
  _19 = (long unsigned int) _18;
  _20 = Port_au32PortCiGpioBaseAddr[_19];
  _30 = Pin_29 & 31;
  _21 = (long unsigned int) _30;
  _22 = 1 << _21;
  Port_Ci_Port_Ip_ClearPDDR (_20, _22);
  # DEBUG BEGIN_STMT
  if (eDirection_33(D) == 3)
    goto <bb 9>; [20.24%]
  else
    goto <bb 10>; [79.76%]

  <bb 9> [local count: 61567824]:
  # DEBUG BEGIN_STMT
  _23 = Port_au32PortCiGpioBaseAddr[_19];
  Port_Ci_Port_Ip_SetPIDR (_23, _22);

  <bb 10> [local count: 1073741824]:
  # PinDirError_24 = PHI <0(7), 1(3), 0(5), 0(9), 0(8)>
  # DEBUG PinDirError => PinDirError_24
  # DEBUG BEGIN_STMT
  return PinDirError_24;

}



;; Function Port_Ipw_SetGpioDirChangeability (Port_Ipw_SetGpioDirChangeability, funcdef_no=5, decl_uid=5680, cgraph_uid=6, symbol_order=6)

Modification phase of node Port_Ipw_SetGpioDirChangeability/6
Port_Ipw_SetGpioDirChangeability (uint16 PadID, boolean bStatus)
{
  uint16 u16PinDirFlagWord;
  uint8 u8PinBitOffset;
  unsigned char _1;
  unsigned char _2;
  int _3;
  int _4;
  long unsigned int _5;
  short unsigned int _6;
  int _7;
  long unsigned int _8;
  short unsigned int _9;
  short unsigned int _10;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_00 ();
  # DEBUG BEGIN_STMT
  _1 = (unsigned char) PadID_14(D);
  u8PinBitOffset_15 = _1 & 15;
  # DEBUG u8PinBitOffset => u8PinBitOffset_15
  # DEBUG BEGIN_STMT
  _2 = _1 >> 4;
  _3 = (int) _2;
  u16PinDirFlagWord_16 = Port_Ipw_au16GpioDirChangeability[_3];
  # DEBUG u16PinDirFlagWord => u16PinDirFlagWord_16
  # DEBUG BEGIN_STMT
  if (bStatus_17(D) != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _4 = (int) u8PinBitOffset_15;
  _5 = 1 << _4;
  _6 = (short unsigned int) _5;
  u16PinDirFlagWord_19 = _6 | u16PinDirFlagWord_16;
  # DEBUG u16PinDirFlagWord => u16PinDirFlagWord_19
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _7 = (int) u8PinBitOffset_15;
  _8 = 1 << _7;
  _9 = (short unsigned int) _8;
  _10 = ~_9;
  u16PinDirFlagWord_18 = _10 & u16PinDirFlagWord_16;
  # DEBUG u16PinDirFlagWord => u16PinDirFlagWord_18

  <bb 5> [local count: 1073741824]:
  # u16PinDirFlagWord_11 = PHI <u16PinDirFlagWord_19(3), u16PinDirFlagWord_18(4)>
  # DEBUG u16PinDirFlagWord => u16PinDirFlagWord_11
  # DEBUG BEGIN_STMT
  Port_Ipw_au16GpioDirChangeability[_3] = u16PinDirFlagWord_11;
  # DEBUG BEGIN_STMT
  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_00 ();
  return;

}



;; Function Port_Ipw_SetGpioPadOutput (Port_Ipw_SetGpioPadOutput, funcdef_no=6, decl_uid=5683, cgraph_uid=7, symbol_order=7)

Modification phase of node Port_Ipw_SetGpioPadOutput/7
Port_Ipw_SetGpioPadOutput (Port_PinType PinIndex, const struct Port_ConfigType * pConfigPtr)
{
  uint8 u8LocalPDO;
  uint16 Pin;
  const struct Port_PinConfigType * _1;
  long unsigned int _2;
  const struct Port_PinConfigType * _3;
  short unsigned int _4;
  long unsigned int _5;
  struct GPIO_Type * _6;
  long unsigned int _7;
  long unsigned int _8;
  short unsigned int _9;
  long unsigned int _10;
  struct GPIO_Type * _11;
  long unsigned int _12;
  long unsigned int _13;
  short unsigned int _22;
  short unsigned int _23;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = pConfigPtr_16(D)->pUsedPadConfig;
  _2 = PinIndex_17(D) * 20;
  _3 = _1 + _2;
  Pin_18 = _3->Pin;
  # DEBUG Pin => Pin_18
  # DEBUG BEGIN_STMT
  u8LocalPDO_19 = _3->u8PDO;
  # DEBUG u8LocalPDO => u8LocalPDO_19
  # DEBUG BEGIN_STMT
  if (u8LocalPDO_19 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  _4 = Pin_18 >> 5;
  _5 = (long unsigned int) _4;
  _6 = Port_au32PortCiGpioBaseAddr[_5];
  _23 = Pin_18 & 31;
  _7 = (long unsigned int) _23;
  _8 = 1 << _7;
  Port_Ci_Port_Ip_SetPSOR (_6, _8);
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 856416480]:
  # DEBUG BEGIN_STMT
  if (u8LocalPDO_19 == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 282617438]:
  # DEBUG BEGIN_STMT
  _9 = Pin_18 >> 5;
  _10 = (long unsigned int) _9;
  _11 = Port_au32PortCiGpioBaseAddr[_10];
  _22 = Pin_18 & 31;
  _12 = (long unsigned int) _22;
  _13 = 1 << _12;
  Port_Ci_Port_Ip_SetPCOR (_11, _13);

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Port_Ipw_SetPinMode (Port_Ipw_SetPinMode, funcdef_no=4, decl_uid=5693, cgraph_uid=5, symbol_order=5)

Modification phase of node Port_Ipw_SetPinMode/5
Port_Ipw_SetPinMode (Port_PinType PinIndex, Port_PinModeType PinMode, const struct Port_ConfigType * pConfigPtr)
{
  Port_PinDirectionType ePadDirection;
  uint32 u32LocalPCR;
  uint16 u16PinDescBitOffset;
  uint16 u16PinDescWord;
  uint16 PinPad;
  Std_ReturnType PinModeError;
  const struct Port_PinConfigType * _1;
  long unsigned int _2;
  const struct Port_PinConfigType * _3;
  int _4;
  short unsigned int _5;
  int _6;
  int _7;
  int _8;
  int _9;
  int _10;
  const struct Port_PinConfigType * _11;
  const struct Port_PinConfigType * _12;
  short unsigned int _13;
  long unsigned int _14;
  struct PORT_Type * _15;
  long unsigned int _16;
  long unsigned int _17;
  long unsigned int _18;
  struct PORT_Type * _19;
  short unsigned int _24;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG PinModeError => 0
  # DEBUG BEGIN_STMT
  _1 = pConfigPtr_26(D)->pUsedPadConfig;
  _2 = PinIndex_27(D) * 20;
  _3 = _1 + _2;
  PinPad_28 = _3->Pin;
  # DEBUG PinPad => PinPad_28
  # DEBUG BEGIN_STMT
  # DEBUG PinCfgRegValue => PinMode_29(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (PinMode_29(D) > 7)
    goto <bb 11>; [35.00%]
  else
    goto <bb 3>; [65.00%]

  <bb 3> [local count: 697932186]:
  # DEBUG BEGIN_STMT
  # DEBUG ePadDirection => 0
  # DEBUG BEGIN_STMT
  u16PinDescBitOffset_30 = PinPad_28 & 15;
  # DEBUG u16PinDescBitOffset => u16PinDescBitOffset_30
  # DEBUG BEGIN_STMT
  _4 = (int) PinMode_29(D);
  _5 = PinPad_28 >> 4;
  _6 = (int) _5;
  u16PinDescWord_31 = Port_au16PinDescription[_4][_6];
  # DEBUG u16PinDescWord => u16PinDescWord_31
  # DEBUG BEGIN_STMT
  _7 = (int) u16PinDescWord_31;
  _8 = (int) u16PinDescBitOffset_30;
  _9 = _7 >> _8;
  _10 = _9 & 1;
  if (_10 != 0)
    goto <bb 4>; [65.00%]
  else
    goto <bb 11>; [35.00%]

  <bb 4> [local count: 453655921]:
  # DEBUG BEGIN_STMT
  if (PinMode_29(D) == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 5> [local count: 154243013]:
<L3>:
  # DEBUG BEGIN_STMT
  Port_Ipw_SetGpioDirChangeability (PinPad_28, 1);
  # DEBUG BEGIN_STMT
  _11 = pConfigPtr_26(D)->pUsedPadConfig;
  _12 = _11 + _2;
  ePadDirection_33 = _12->ePadDir;
  # DEBUG ePadDirection => ePadDirection_33
  # DEBUG BEGIN_STMT
  if (ePadDirection_33 != 1)
    goto <bb 6>; [66.00%]
  else
    goto <bb 8>; [34.00%]

  <bb 6> [local count: 101800389]:
  if (ePadDirection_33 != 3)
    goto <bb 7>; [48.88%]
  else
    goto <bb 8>; [51.12%]

  <bb 7> [local count: 49760030]:
  # DEBUG BEGIN_STMT
  Port_Ipw_SetGpioPadOutput (PinIndex_27(D), pConfigPtr_26(D));

  <bb 8> [local count: 154243013]:
  # DEBUG BEGIN_STMT
  Port_Ipw_SetPinDirection (PinIndex_27(D), ePadDirection_33, pConfigPtr_26(D));
  # DEBUG BEGIN_STMT
  goto <bb 10>; [100.00%]

  <bb 9> [local count: 299412908]:
<L8>:
  # DEBUG BEGIN_STMT
  Port_Ipw_SetGpioDirChangeability (PinPad_28, 0);
  # DEBUG BEGIN_STMT

  <bb 10> [local count: 453655921]:
  # DEBUG BEGIN_STMT
  _13 = PinPad_28 >> 5;
  _14 = (long unsigned int) _13;
  _15 = Port_au32PortCiPortBaseAddr[_14];
  _24 = PinPad_28 & 31;
  _16 = (long unsigned int) _24;
  u32LocalPCR_38 = Port_Ci_Port_Ip_ReadPCR (_15, _16);
  # DEBUG u32LocalPCR => u32LocalPCR_38
  # DEBUG BEGIN_STMT
  u32LocalPCR_39 = u32LocalPCR_38 & 4294965503;
  # DEBUG u32LocalPCR => u32LocalPCR_39
  # DEBUG BEGIN_STMT
  _17 = (long unsigned int) PinMode_29(D);
  _18 = _17 << 8;
  u32LocalPCR_40 = _18 | u32LocalPCR_39;
  # DEBUG u32LocalPCR => u32LocalPCR_40
  # DEBUG BEGIN_STMT
  _19 = Port_au32PortCiPortBaseAddr[_14];
  Port_Ci_Port_Ip_SetPCR (_19, _16, u32LocalPCR_40);

  <bb 11> [local count: 1073741824]:
  # PinModeError_20 = PHI <13(2), 0(10), 13(3)>
  # DEBUG PinModeError => PinModeError_20
  # DEBUG BEGIN_STMT
  return PinModeError_20;

}



;; Function Port_Ipw_RefreshPortDirection (Port_Ipw_RefreshPortDirection, funcdef_no=7, decl_uid=5695, cgraph_uid=8, symbol_order=8)

Modification phase of node Port_Ipw_RefreshPortDirection/8
Port_Ipw_RefreshPortDirection (const struct Port_ConfigType * pConfigPtr)
{
  uint16 PinPad;
  uint16 u16PinIndex;
  uint16 u16NumPins;
  const struct Port_PinConfigType * _1;
  unsigned int _2;
  unsigned int _3;
  const struct Port_PinConfigType * _4;
  _Bool _5;
  _Bool _6;
  <unnamed type> _7;
  short unsigned int _8;
  long unsigned int _9;
  struct GPIO_Type * _10;
  long unsigned int _11;
  long unsigned int _12;
  short unsigned int _13;
  long unsigned int _14;
  struct GPIO_Type * _15;
  long unsigned int _16;
  long unsigned int _17;
  const struct Port_PinConfigType * _18;
  const struct Port_PinConfigType * _19;
  <unnamed type> _20;
  struct GPIO_Type * _21;
  short unsigned int _28;
  short unsigned int _34;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  u16NumPins_27 = pConfigPtr_26(D)->u16NumPins;
  # DEBUG u16NumPins => u16NumPins_27
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG u16PinIndex => 0
  goto <bb 12>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  _1 = pConfigPtr_26(D)->pUsedPadConfig;
  _2 = (unsigned int) u16PinIndex_22;
  _3 = _2 * 20;
  _4 = _1 + _3;
  _5 = _4->bDC;
  if (_5 != 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 4> [local count: 477815111]:
  # DEBUG BEGIN_STMT
  _6 = _4->bGPIO;
  if (_6 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 5> [local count: 238907556]:
  # DEBUG BEGIN_STMT
  PinPad_29 = _4->Pin;
  # DEBUG PinPad => PinPad_29
  # DEBUG BEGIN_STMT
  _7 = _4->ePadDir;
  if (_7 == 2)
    goto <bb 6>; [20.24%]
  else
    goto <bb 7>; [79.76%]

  <bb 6> [local count: 48354889]:
  # DEBUG BEGIN_STMT
  _8 = PinPad_29 >> 5;
  _9 = (long unsigned int) _8;
  _10 = Port_au32PortCiGpioBaseAddr[_9];
  _34 = PinPad_29 & 31;
  _11 = (long unsigned int) _34;
  _12 = 1 << _11;
  Port_Ci_Port_Ip_SetPDDR (_10, _12);
  goto <bb 11>; [100.00%]

  <bb 7> [local count: 190552666]:
  # DEBUG BEGIN_STMT
  if (_7 == 1)
    goto <bb 9>; [20.24%]
  else
    goto <bb 8>; [79.76%]

  <bb 8> [local count: 151984807]:
  if (_7 == 3)
    goto <bb 9>; [34.00%]
  else
    goto <bb 11>; [66.00%]

  <bb 9> [local count: 90242694]:
  # DEBUG BEGIN_STMT
  _13 = PinPad_29 >> 5;
  _14 = (long unsigned int) _13;
  _15 = Port_au32PortCiGpioBaseAddr[_14];
  _28 = PinPad_29 & 31;
  _16 = (long unsigned int) _28;
  _17 = 1 << _16;
  Port_Ci_Port_Ip_ClearPDDR (_15, _17);
  # DEBUG BEGIN_STMT
  _18 = pConfigPtr_26(D)->pUsedPadConfig;
  _19 = _18 + _3;
  _20 = _19->ePadDir;
  if (_20 == 3)
    goto <bb 10>; [20.24%]
  else
    goto <bb 11>; [79.76%]

  <bb 10> [local count: 18265121]:
  # DEBUG BEGIN_STMT
  _21 = Port_au32PortCiGpioBaseAddr[_14];
  Port_Ci_Port_Ip_SetPIDR (_21, _17);

  <bb 11> [local count: 955630225]:
  # DEBUG BEGIN_STMT
  u16PinIndex_33 = u16PinIndex_22 + 1;
  # DEBUG u16PinIndex => u16PinIndex_33

  <bb 12> [local count: 1073741824]:
  # u16PinIndex_22 = PHI <0(2), u16PinIndex_33(11)>
  # DEBUG u16PinIndex => u16PinIndex_22
  # DEBUG BEGIN_STMT
  if (u16PinIndex_22 < u16NumPins_27)
    goto <bb 3>; [89.00%]
  else
    goto <bb 13>; [11.00%]

  <bb 13> [local count: 118111601]:
  return;

}


