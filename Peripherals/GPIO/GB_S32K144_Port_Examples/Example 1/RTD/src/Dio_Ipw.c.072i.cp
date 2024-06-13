
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Gpio_Dio_Ip_ClearPins/12:
  Jump functions of caller  Gpio_Dio_Ip_SetPins/11:
  Jump functions of caller  Gpio_Dio_Ip_WritePins/10:
  Jump functions of caller  Gpio_Dio_Ip_ReadPins/9:
  Jump functions of caller  Gpio_Dio_Ip_WritePin/8:
  Jump functions of caller  Gpio_Dio_Ip_ReadPin/7:
  Jump functions of caller  Dio_Ipw_WriteChannelGroup/5:
  Jump functions of caller  Dio_Ipw_ReadChannelGroup/4:
  Jump functions of caller  Dio_Ipw_WritePort/3:
  Jump functions of caller  Dio_Ipw_ReadPort/2:
  Jump functions of caller  Dio_Ipw_WriteChannel/1:
  Jump functions of caller  Dio_Ipw_ReadChannel/0:

 Propagating constants:

Not considering Dio_Ipw_WriteChannelGroup for cloning; -fipa-cp-clone disabled.
Not considering Dio_Ipw_ReadChannelGroup for cloning; -fipa-cp-clone disabled.
Not considering Dio_Ipw_WritePort for cloning; -fipa-cp-clone disabled.
Not considering Dio_Ipw_ReadPort for cloning; -fipa-cp-clone disabled.
Not considering Dio_Ipw_WriteChannel for cloning; -fipa-cp-clone disabled.
Not considering Dio_Ipw_ReadChannel for cloning; -fipa-cp-clone disabled.

overall_size: 64, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Dio_Ipw_WriteChannelGroup/5:
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
  Node: Dio_Ipw_ReadChannelGroup/4:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dio_Ipw_WritePort/3:
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
  Node: Dio_Ipw_ReadPort/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dio_Ipw_WriteChannel/1:
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
  Node: Dio_Ipw_ReadChannel/0:
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

Gpio_Dio_Ip_ClearPins/12 (Gpio_Dio_Ip_ClearPins) @066e80e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dio_Ipw_WriteChannelGroup/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Gpio_Dio_Ip_SetPins/11 (Gpio_Dio_Ip_SetPins) @066e8ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dio_Ipw_WriteChannelGroup/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Gpio_Dio_Ip_WritePins/10 (Gpio_Dio_Ip_WritePins) @066e8c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dio_Ipw_WritePort/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Gpio_Dio_Ip_ReadPins/9 (Gpio_Dio_Ip_ReadPins) @066e8a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dio_Ipw_ReadChannelGroup/4 (1073741824 (estimated locally),1.00 per call) Dio_Ipw_ReadPort/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Gpio_Dio_Ip_WritePin/8 (Gpio_Dio_Ip_WritePin) @066e88c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dio_Ipw_WriteChannel/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Gpio_Dio_Ip_ReadPin/7 (Gpio_Dio_Ip_ReadPin) @066e8700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dio_Ipw_ReadChannel/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
GpioBaseAdresses/6 (GpioBaseAdresses) @066e46c0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dio_Ipw_WritePort/3 (read)Dio_Ipw_ReadChannelGroup/4 (read)Dio_Ipw_ReadChannel/0 (read)Dio_Ipw_WriteChannel/1 (read)Dio_Ipw_ReadPort/2 (read)Dio_Ipw_WriteChannelGroup/5 (read)
  Availability: not_available
  Varpool flags:
Dio_Ipw_WriteChannelGroup/5 (Dio_Ipw_WriteChannelGroup) @066e82a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: GpioBaseAdresses/6 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Gpio_Dio_Ip_ClearPins/12 (1073741824 (estimated locally),1.00 per call) Gpio_Dio_Ip_SetPins/11 (1073741824 (estimated locally),1.00 per call) 
Dio_Ipw_ReadChannelGroup/4 (Dio_Ipw_ReadChannelGroup) @066e8000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: GpioBaseAdresses/6 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Gpio_Dio_Ip_ReadPins/9 (1073741824 (estimated locally),1.00 per call) 
Dio_Ipw_WritePort/3 (Dio_Ipw_WritePort) @066e28c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: GpioBaseAdresses/6 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Gpio_Dio_Ip_WritePins/10 (1073741824 (estimated locally),1.00 per call) 
Dio_Ipw_ReadPort/2 (Dio_Ipw_ReadPort) @066e2ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: GpioBaseAdresses/6 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Gpio_Dio_Ip_ReadPins/9 (1073741824 (estimated locally),1.00 per call) 
Dio_Ipw_WriteChannel/1 (Dio_Ipw_WriteChannel) @066e2c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: GpioBaseAdresses/6 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Gpio_Dio_Ip_WritePin/8 (1073741824 (estimated locally),1.00 per call) 
Dio_Ipw_ReadChannel/0 (Dio_Ipw_ReadChannel) @066e27e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: GpioBaseAdresses/6 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Gpio_Dio_Ip_ReadPin/7 (1073741824 (estimated locally),1.00 per call) 

;; Function Dio_Ipw_ReadChannel (Dio_Ipw_ReadChannel, funcdef_no=0, decl_uid=5565, cgraph_uid=1, symbol_order=0)

Modification phase of node Dio_Ipw_ReadChannel/0
Dio_Ipw_ReadChannel (Dio_ChannelType ChannelId)
{
  const struct GPIO_Type * GpioBase;
  uint32 u32PinIndex;
  uint32 u32GpioInstance;
  Dio_LevelType ChannelLevel;
  short unsigned int _1;
  long unsigned int _2;
  short unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ChannelLevel => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = ChannelId_4(D) >> 5;
  u32GpioInstance_5 = (uint32) _1;
  # DEBUG u32GpioInstance => u32GpioInstance_5
  # DEBUG BEGIN_STMT
  _3 = ChannelId_4(D) & 31;
  u32PinIndex_6 = (uint32) _3;
  # DEBUG u32PinIndex => u32PinIndex_6
  # DEBUG BEGIN_STMT
  _2 = GpioBaseAdresses[u32GpioInstance_5];
  GpioBase_8 = (const struct GPIO_Type *) _2;
  # DEBUG GpioBase => GpioBase_8
  # DEBUG BEGIN_STMT
  ChannelLevel_10 = Gpio_Dio_Ip_ReadPin (GpioBase_8, u32PinIndex_6);
  # DEBUG ChannelLevel => ChannelLevel_10
  # DEBUG BEGIN_STMT
  return ChannelLevel_10;

}



;; Function Dio_Ipw_WriteChannel (Dio_Ipw_WriteChannel, funcdef_no=1, decl_uid=5568, cgraph_uid=2, symbol_order=1)

Modification phase of node Dio_Ipw_WriteChannel/1
Dio_Ipw_WriteChannel (Dio_ChannelType ChannelId, Dio_LevelType Level)
{
  struct GPIO_Type * GpioBase;
  uint32 u32PinIndex;
  uint32 u32GpioInstance;
  short unsigned int _1;
  long unsigned int _2;
  short unsigned int _10;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = ChannelId_3(D) >> 5;
  u32GpioInstance_4 = (uint32) _1;
  # DEBUG u32GpioInstance => u32GpioInstance_4
  # DEBUG BEGIN_STMT
  _10 = ChannelId_3(D) & 31;
  u32PinIndex_5 = (uint32) _10;
  # DEBUG u32PinIndex => u32PinIndex_5
  # DEBUG BEGIN_STMT
  _2 = GpioBaseAdresses[u32GpioInstance_4];
  GpioBase_7 = (struct GPIO_Type *) _2;
  # DEBUG GpioBase => GpioBase_7
  # DEBUG BEGIN_STMT
  Gpio_Dio_Ip_WritePin (GpioBase_7, u32PinIndex_5, Level_8(D));
  return;

}



;; Function Dio_Ipw_ReadPort (Dio_Ipw_ReadPort, funcdef_no=2, decl_uid=5570, cgraph_uid=3, symbol_order=2)

Modification phase of node Dio_Ipw_ReadPort/2
Dio_Ipw_ReadPort (Dio_PortType PortId)
{
  const struct GPIO_Type * GpioBase;
  Dio_PortLevelType PortLevel;
  int _1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG PortLevel => 0
  # DEBUG BEGIN_STMT
  _1 = (int) PortId_3(D);
  _2 = GpioBaseAdresses[_1];
  GpioBase_5 = (const struct GPIO_Type *) _2;
  # DEBUG GpioBase => GpioBase_5
  # DEBUG BEGIN_STMT
  PortLevel_7 = Gpio_Dio_Ip_ReadPins (GpioBase_5);
  # DEBUG PortLevel => PortLevel_7
  # DEBUG BEGIN_STMT
  return PortLevel_7;

}



;; Function Dio_Ipw_WritePort (Dio_Ipw_WritePort, funcdef_no=3, decl_uid=5573, cgraph_uid=4, symbol_order=3)

Modification phase of node Dio_Ipw_WritePort/3
Dio_Ipw_WritePort (Dio_PortType PortId, Dio_PortLevelType Level)
{
  struct GPIO_Type * GpioBase;
  int _1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG CrtLevel => Level_3(D)
  # DEBUG BEGIN_STMT
  _1 = (int) PortId_4(D);
  _2 = GpioBaseAdresses[_1];
  GpioBase_6 = (struct GPIO_Type *) _2;
  # DEBUG GpioBase => GpioBase_6
  # DEBUG BEGIN_STMT
  Gpio_Dio_Ip_WritePins (GpioBase_6, Level_3(D));
  return;

}



;; Function Dio_Ipw_ReadChannelGroup (Dio_Ipw_ReadChannelGroup, funcdef_no=4, decl_uid=5575, cgraph_uid=5, symbol_order=4)

Modification phase of node Dio_Ipw_ReadChannelGroup/4
Dio_Ipw_ReadChannelGroup (const struct Dio_ChannelGroupType * pChannelGroupIdPtr)
{
  const struct GPIO_Type * GpioBase;
  Dio_PortLevelType pinsValue;
  Dio_PortLevelType PortLevel;
  unsigned char _1;
  int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  unsigned char _6;
  int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG PortLevel => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = pChannelGroupIdPtr_9(D)->port;
  _2 = (int) _1;
  _3 = GpioBaseAdresses[_2];
  GpioBase_10 = (const struct GPIO_Type *) _3;
  # DEBUG GpioBase => GpioBase_10
  # DEBUG BEGIN_STMT
  pinsValue_12 = Gpio_Dio_Ip_ReadPins (GpioBase_10);
  # DEBUG pinsValue => pinsValue_12
  # DEBUG BEGIN_STMT
  _4 = pChannelGroupIdPtr_9(D)->mask;
  _5 = _4 & pinsValue_12;
  _6 = pChannelGroupIdPtr_9(D)->u8offset;
  _7 = (int) _6;
  PortLevel_13 = _5 >> _7;
  # DEBUG PortLevel => PortLevel_13
  # DEBUG BEGIN_STMT
  return PortLevel_13;

}



;; Function Dio_Ipw_WriteChannelGroup (Dio_Ipw_WriteChannelGroup, funcdef_no=5, decl_uid=5578, cgraph_uid=6, symbol_order=5)

Modification phase of node Dio_Ipw_WriteChannelGroup/5
Dio_Ipw_WriteChannelGroup (const struct Dio_ChannelGroupType * pChannelGroupIdPtr, Dio_PortLevelType Level)
{
  struct GPIO_Type * GpioBase;
  Dio_PortLevelType ValueClear;
  Dio_PortLevelType ValueSet;
  unsigned char _1;
  int _2;
  long unsigned int _3;
  unsigned char _4;
  int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = pChannelGroupIdPtr_11(D)->port;
  _2 = (int) _1;
  _3 = GpioBaseAdresses[_2];
  GpioBase_12 = (struct GPIO_Type *) _3;
  # DEBUG GpioBase => GpioBase_12
  # DEBUG BEGIN_STMT
  _4 = pChannelGroupIdPtr_11(D)->u8offset;
  _5 = (int) _4;
  _6 = Level_13(D) << _5;
  _7 = pChannelGroupIdPtr_11(D)->mask;
  ValueSet_14 = _6 & _7;
  # DEBUG ValueSet => ValueSet_14
  # DEBUG BEGIN_STMT
  Gpio_Dio_Ip_SetPins (GpioBase_12, ValueSet_14);
  # DEBUG BEGIN_STMT
  _8 = ~ValueSet_14;
  _9 = pChannelGroupIdPtr_11(D)->mask;
  ValueClear_16 = _8 & _9;
  # DEBUG ValueClear => ValueClear_16
  # DEBUG BEGIN_STMT
  Gpio_Dio_Ip_ClearPins (GpioBase_12, ValueClear_16);
  return;

}


