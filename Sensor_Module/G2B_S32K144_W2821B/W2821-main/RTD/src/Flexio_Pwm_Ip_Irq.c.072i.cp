
IPA constant propagation start:
Determining dynamic type for call: _10 (0, _11);
  Starting walk at: _10 (0, _11);
  instance pointer: _11  Outer instance pointer: _11 offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Flexio_Pwm_Ip_IrqHandler/11:
    indirect simple callsite, calling param -1, offset 0, for stmt _12 (_13);
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _10 (0, _11);
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering Flexio_Pwm_Ip_IrqHandler for cloning; -fipa-cp-clone disabled.

overall_size: 28, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Flexio_Pwm_Ip_IrqHandler/11:
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

Flexio_Pwm_Ip_aState/13 (Flexio_Pwm_Ip_aState) @069c4f30
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Flexio_Pwm_Ip_IrqHandler/11 (read)
  Availability: not_available
  Varpool flags:
Flexio_Pwm_Ip_u8TimerIrqMask/12 (Flexio_Pwm_Ip_u8TimerIrqMask) @069c4ee8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Flexio_Pwm_Ip_IrqHandler/11 (read)
  Availability: not_available
  Varpool flags:
Flexio_Pwm_Ip_IrqHandler/11 (Flexio_Pwm_Ip_IrqHandler) @069ce460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexio_Pwm_Ip_u8TimerIrqMask/12 (read)Flexio_Pwm_Ip_aState/13 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(112742891 (estimated locally),0.10 per call) 
   Indirect call(375809638 (estimated locally),0.35 per call) 

;; Function Flexio_Pwm_Ip_IrqHandler (Flexio_Pwm_Ip_IrqHandler, funcdef_no=11, decl_uid=5453, cgraph_uid=12, symbol_order=11)

Modification phase of node Flexio_Pwm_Ip_IrqHandler/11
Flexio_Pwm_Ip_IrqHandler (uint8 ChannelId, uint8 TimerFlags)
{
  unsigned char Flexio_Pwm_Ip_u8TimerIrqMask.0_1;
  unsigned char _2;
  unsigned int _3;
  int _4;
  const struct Flexio_Pwm_Ip_ChannelConfigType * _5;
  unsigned char _6;
  int _7;
  unsigned int _8;
  unsigned int _9;
  void (*<T48b>) (Flexio_Pwm_Ip_OccurredIRQType, void *) _10;
  void * _11;
  void (*<T490>) (uint8) _12;
  unsigned char _13;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  Flexio_Pwm_Ip_u8TimerIrqMask.0_1 ={v} Flexio_Pwm_Ip_u8TimerIrqMask;
  _2 = Flexio_Pwm_Ip_u8TimerIrqMask.0_1 & TimerFlags_16(D);
  _3 = (unsigned int) _2;
  _4 = (int) ChannelId_17(D);
  _5 = Flexio_Pwm_Ip_aState[_4];
  _6 = _5->TimerId;
  _7 = (int) _6;
  _8 = _3 >> _7;
  _9 = _8 & 1;
  if (_9 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 3> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  _10 = _5->IplCallback.CbFunction;
  if (_10 != 0B)
    goto <bb 4>; [70.00%]
  else
    goto <bb 5>; [30.00%]

  <bb 4> [local count: 375809638]:
  # DEBUG BEGIN_STMT
  _11 = _5->IplCallback.CbParameter;
  _10 (0, _11);
  goto <bb 7>; [100.00%]

  <bb 5> [local count: 161061273]:
  # DEBUG BEGIN_STMT
  _12 = _5->HldCallback.CbFunction;
  if (_12 != 0B)
    goto <bb 6>; [70.00%]
  else
    goto <bb 7>; [30.00%]

  <bb 6> [local count: 112742891]:
  # DEBUG BEGIN_STMT
  _13 = _5->HldCallback.CbParameter;
  _12 (_13);

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}


