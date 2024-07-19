
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_00/10:
  Jump functions of caller  SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_00/9:
  Jump functions of caller  Gpio_Dio_Ip_ReadPin/8:
  Jump functions of caller  Gpio_Dio_Ip_ReadPins/7:
  Jump functions of caller  Gpio_Dio_Ip_TogglePins/6:
  Jump functions of caller  Gpio_Dio_Ip_ClearPins/5:
  Jump functions of caller  Gpio_Dio_Ip_SetPins/4:
  Jump functions of caller  Gpio_Dio_Ip_GetPinsOutput/3:
  Jump functions of caller  Gpio_Dio_Ip_WritePins/2:
  Jump functions of caller  Gpio_Dio_Ip_WritePin/1:

 Propagating constants:

Not considering Gpio_Dio_Ip_ReadPin for cloning; -fipa-cp-clone disabled.
Not considering Gpio_Dio_Ip_ReadPins for cloning; -fipa-cp-clone disabled.
Not considering Gpio_Dio_Ip_TogglePins for cloning; -fipa-cp-clone disabled.
Not considering Gpio_Dio_Ip_ClearPins for cloning; -fipa-cp-clone disabled.
Not considering Gpio_Dio_Ip_SetPins for cloning; -fipa-cp-clone disabled.
Not considering Gpio_Dio_Ip_GetPinsOutput for cloning; -fipa-cp-clone disabled.
Not considering Gpio_Dio_Ip_WritePins for cloning; -fipa-cp-clone disabled.
Not considering Gpio_Dio_Ip_WritePin for cloning; -fipa-cp-clone disabled.

overall_size: 43, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Gpio_Dio_Ip_ReadPin/8:
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
  Node: Gpio_Dio_Ip_ReadPins/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Gpio_Dio_Ip_TogglePins/6:
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
  Node: Gpio_Dio_Ip_ClearPins/5:
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
  Node: Gpio_Dio_Ip_SetPins/4:
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
  Node: Gpio_Dio_Ip_GetPinsOutput/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Gpio_Dio_Ip_WritePins/2:
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
  Node: Gpio_Dio_Ip_WritePin/1:
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

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_00/10 (SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_00) @068d20e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Gpio_Dio_Ip_WritePin/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_00/9 (SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_00) @068d2000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Gpio_Dio_Ip_WritePin/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Gpio_Dio_Ip_ReadPin/8 (Gpio_Dio_Ip_ReadPin) @068cf0e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Gpio_Dio_Ip_ReadPins/7 (Gpio_Dio_Ip_ReadPins) @068cfd20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Gpio_Dio_Ip_TogglePins/6 (Gpio_Dio_Ip_TogglePins) @068cfa80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Gpio_Dio_Ip_ClearPins/5 (Gpio_Dio_Ip_ClearPins) @068cf700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Gpio_Dio_Ip_SetPins/4 (Gpio_Dio_Ip_SetPins) @068cf380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Gpio_Dio_Ip_GetPinsOutput/3 (Gpio_Dio_Ip_GetPinsOutput) @068cf000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Gpio_Dio_Ip_WritePins/2 (Gpio_Dio_Ip_WritePins) @0678e9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Gpio_Dio_Ip_WritePin/1 (Gpio_Dio_Ip_WritePin) @0678ec40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_00/10 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_00/9 (1073741824 (estimated locally),1.00 per call) 
GpioBaseAdresses/0 (GpioBaseAdresses) @068c8b40
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized

;; Function Gpio_Dio_Ip_WritePin (Gpio_Dio_Ip_WritePin, funcdef_no=0, decl_uid=5525, cgraph_uid=1, symbol_order=1)

Modification phase of node Gpio_Dio_Ip_WritePin/1
Gpio_Dio_Ip_WritePin (struct GPIO_Type * const base, Gpio_Dio_Ip_PinsChannelType pin, Gpio_Dio_Ip_PinsLevelType value)
{
  Gpio_Dio_Ip_PinsChannelType pinsValues;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_00 ();
  # DEBUG BEGIN_STMT
  pinsValues_8 ={v} base_7(D)->PDOR;
  # DEBUG pinsValues => pinsValues_8
  # DEBUG BEGIN_STMT
  _1 = 1 << pin_9(D);
  _2 = ~_1;
  pinsValues_10 = _2 & pinsValues_8;
  # DEBUG pinsValues => pinsValues_10
  # DEBUG BEGIN_STMT
  _3 = (long unsigned int) value_11(D);
  _4 = _3 << pin_9(D);
  pinsValues_12 = _4 | pinsValues_10;
  # DEBUG pinsValues => pinsValues_12
  # DEBUG BEGIN_STMT
  base_7(D)->PDOR ={v} pinsValues_12;
  # DEBUG BEGIN_STMT
  SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_00 ();
  return;

}



;; Function Gpio_Dio_Ip_WritePins (Gpio_Dio_Ip_WritePins, funcdef_no=1, decl_uid=5528, cgraph_uid=2, symbol_order=2)

Modification phase of node Gpio_Dio_Ip_WritePins/2
Gpio_Dio_Ip_WritePins (struct GPIO_Type * const base, Gpio_Dio_Ip_PinsChannelType pins)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  base_2(D)->PDOR ={v} pins_3(D);
  return;

}



;; Function Gpio_Dio_Ip_GetPinsOutput (Gpio_Dio_Ip_GetPinsOutput, funcdef_no=2, decl_uid=5530, cgraph_uid=3, symbol_order=3)

Modification phase of node Gpio_Dio_Ip_GetPinsOutput/3
Gpio_Dio_Ip_GetPinsOutput (const struct GPIO_Type * const base)
{
  Gpio_Dio_Ip_PinsChannelType returnValue;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG returnValue => 0
  # DEBUG BEGIN_STMT
  returnValue_3 ={v} base_2(D)->PDOR;
  # DEBUG returnValue => returnValue_3
  # DEBUG BEGIN_STMT
  return returnValue_3;

}



;; Function Gpio_Dio_Ip_SetPins (Gpio_Dio_Ip_SetPins, funcdef_no=3, decl_uid=5533, cgraph_uid=4, symbol_order=4)

Modification phase of node Gpio_Dio_Ip_SetPins/4
Gpio_Dio_Ip_SetPins (struct GPIO_Type * const base, Gpio_Dio_Ip_PinsChannelType pins)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  base_2(D)->PSOR ={v} pins_3(D);
  return;

}



;; Function Gpio_Dio_Ip_ClearPins (Gpio_Dio_Ip_ClearPins, funcdef_no=4, decl_uid=5536, cgraph_uid=5, symbol_order=5)

Modification phase of node Gpio_Dio_Ip_ClearPins/5
Gpio_Dio_Ip_ClearPins (struct GPIO_Type * const base, Gpio_Dio_Ip_PinsChannelType pins)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  base_2(D)->PCOR ={v} pins_3(D);
  return;

}



;; Function Gpio_Dio_Ip_TogglePins (Gpio_Dio_Ip_TogglePins, funcdef_no=5, decl_uid=5539, cgraph_uid=6, symbol_order=6)

Modification phase of node Gpio_Dio_Ip_TogglePins/6
Gpio_Dio_Ip_TogglePins (struct GPIO_Type * const base, Gpio_Dio_Ip_PinsChannelType pins)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  base_2(D)->PTOR ={v} pins_3(D);
  return;

}



;; Function Gpio_Dio_Ip_ReadPins (Gpio_Dio_Ip_ReadPins, funcdef_no=6, decl_uid=5541, cgraph_uid=7, symbol_order=7)

Modification phase of node Gpio_Dio_Ip_ReadPins/7
Gpio_Dio_Ip_ReadPins (const struct GPIO_Type * const base)
{
  Gpio_Dio_Ip_PinsChannelType returnValue;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG returnValue => 0
  # DEBUG BEGIN_STMT
  returnValue_3 ={v} base_2(D)->PDIR;
  # DEBUG returnValue => returnValue_3
  # DEBUG BEGIN_STMT
  return returnValue_3;

}



;; Function Gpio_Dio_Ip_ReadPin (Gpio_Dio_Ip_ReadPin, funcdef_no=7, decl_uid=5544, cgraph_uid=8, symbol_order=8)

Modification phase of node Gpio_Dio_Ip_ReadPin/8
Gpio_Dio_Ip_ReadPin (const struct GPIO_Type * const base, Gpio_Dio_Ip_PinsChannelType pin)
{
  Gpio_Dio_Ip_PinsLevelType returnValue;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG returnValue => 0
  # DEBUG BEGIN_STMT
  _1 ={v} base_6(D)->PDIR;
  _2 = 1 << pin_7(D);
  _3 = _1 & _2;
  _4 = _3 >> pin_7(D);
  returnValue_8 = (Gpio_Dio_Ip_PinsLevelType) _4;
  # DEBUG returnValue => returnValue_8
  # DEBUG BEGIN_STMT
  return returnValue_8;

}


