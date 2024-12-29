
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Ftm_Pwm_Ip_DeInit/7:
  Jump functions of caller  Ftm_Pwm_Ip_Init/6:
  Jump functions of caller  Pwm_Ipw_DeInitInstance/5:
  Jump functions of caller  Pwm_Ipw_DeInit/4:
  Jump functions of caller  Pwm_Ipw_InitInstance/3:
  Jump functions of caller  Pwm_Ipw_Init/2:

 Propagating constants:

Not considering Pwm_Ipw_DeInitInstance for cloning; -fipa-cp-clone disabled.
Not considering Pwm_Ipw_DeInit for cloning; -fipa-cp-clone disabled.
Not considering Pwm_Ipw_InitInstance for cloning; -fipa-cp-clone disabled.
Not considering Pwm_Ipw_Init for cloning; -fipa-cp-clone disabled.

overall_size: 46, max_new_size: 11001
 - context independent values, size: 10, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: Pwm_Ipw_DeInitInstance/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Pwm_Ipw_DeInit/4:
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
  Node: Pwm_Ipw_InitInstance/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Pwm_Ipw_Init/2:
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

Ftm_Pwm_Ip_DeInit/7 (Ftm_Pwm_Ip_DeInit) @069c59a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Pwm_Ipw_DeInitInstance/5 (195204116 (estimated locally),0.18 per call) 
  Calls: 
Ftm_Pwm_Ip_Init/6 (Ftm_Pwm_Ip_Init) @069c5700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Pwm_Ipw_InitInstance/3 (195204116 (estimated locally),0.18 per call) 
  Calls: 
Pwm_Ipw_DeInitInstance/5 (Pwm_Ipw_DeInitInstance) @069c51c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Ftm_Pwm_Ip_DeInit/7 (195204116 (estimated locally),0.18 per call) 
Pwm_Ipw_DeInit/4 (Pwm_Ipw_DeInit) @0694ce00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Pwm_Ipw_aFtmDutyCycle/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Pwm_Ipw_InitInstance/3 (Pwm_Ipw_InitInstance) @0694c620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Ftm_Pwm_Ip_Init/6 (195204116 (estimated locally),0.18 per call) 
Pwm_Ipw_Init/2 (Pwm_Ipw_Init) @0694c2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Pwm_Ipw_aFtmDutyCycle/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Pwm_Ipw_aFtmDutyCycle/1 (Pwm_Ipw_aFtmDutyCycle) @06949f30
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Pwm_Ipw_Init/2 (write)Pwm_Ipw_DeInit/4 (write)
  Availability: available
  Varpool flags:

;; Function Pwm_Ipw_Init (Pwm_Ipw_Init, funcdef_no=1, decl_uid=5951, cgraph_uid=2, symbol_order=2)

Modification phase of node Pwm_Ipw_Init/2
Pwm_Ipw_Init (const struct Pwm_IpwChannelConfigType * const IpConfig)
{
  <unnamed type> _1;
  unsigned char _2;
  int _3;
  const struct Ftm_Pwm_Ip_ChannelConfigType * _4;
  unsigned char _5;
  int _6;
  short unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = IpConfig_10(D)->ChannelType;
  if (_1 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
<L0>:
  # DEBUG BEGIN_STMT
  _2 = IpConfig_10(D)->ChannelInstanceId;
  _3 = (int) _2;
  _4 = IpConfig_10(D)->FtmChConfig;
  _5 = _4->ChannelId;
  _6 = (int) _5;
  _7 = IpConfig_10(D)->ChannelDutyCycle;
  Pwm_Ipw_aFtmDutyCycle[_3][_6] = _7;
  # DEBUG BEGIN_STMT

  <bb 4> [local count: 1073741824]:
<L4>:
  return;

}



;; Function Pwm_Ipw_InitInstance (Pwm_Ipw_InitInstance, funcdef_no=2, decl_uid=5953, cgraph_uid=3, symbol_order=3)

Modification phase of node Pwm_Ipw_InitInstance/3
Pwm_Ipw_InitInstance (const struct Pwm_IpwInstanceConfigType * const IpConfig)
{
  <unnamed type> _1;
  const struct Ftm_Pwm_Ip_UserCfgType * _2;
  unsigned char _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = IpConfig_6(D)->InstanceType;
  if (_1 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 3> [local count: 365072220]:
<L0>:
  # DEBUG BEGIN_STMT
  _2 = IpConfig_6(D)->FtmInsConfig;
  if (_2 != 0B)
    goto <bb 4>; [53.47%]
  else
    goto <bb 5>; [46.53%]

  <bb 4> [local count: 195204116]:
  # DEBUG BEGIN_STMT
  _3 = IpConfig_6(D)->InstanceId;
  Ftm_Pwm_Ip_Init (_3, _2);

  <bb 5> [local count: 1073741824]:
<L6>:
  return;

}



;; Function Pwm_Ipw_DeInit (Pwm_Ipw_DeInit, funcdef_no=3, decl_uid=5956, cgraph_uid=4, symbol_order=4)

Modification phase of node Pwm_Ipw_DeInit/4
Pwm_Ipw_DeInit (const struct Pwm_IpwChannelConfigType * const IpConfig, Pwm_OutputStateType ChannelIdleState)
{
  <unnamed type> _1;
  unsigned char _2;
  int _3;
  const struct Ftm_Pwm_Ip_ChannelConfigType * _4;
  unsigned char _5;
  int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = IpConfig_9(D)->ChannelType;
  if (_1 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
<L0>:
  # DEBUG BEGIN_STMT
  _2 = IpConfig_9(D)->ChannelInstanceId;
  _3 = (int) _2;
  _4 = IpConfig_9(D)->FtmChConfig;
  _5 = _4->ChannelId;
  _6 = (int) _5;
  Pwm_Ipw_aFtmDutyCycle[_3][_6] = 0;
  # DEBUG BEGIN_STMT

  <bb 4> [local count: 1073741824]:
<L4>:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Pwm_Ipw_DeInitInstance (Pwm_Ipw_DeInitInstance, funcdef_no=4, decl_uid=5958, cgraph_uid=5, symbol_order=5)

Modification phase of node Pwm_Ipw_DeInitInstance/5
Pwm_Ipw_DeInitInstance (const struct Pwm_IpwInstanceConfigType * const IpConfig)
{
  <unnamed type> _1;
  const struct Ftm_Pwm_Ip_UserCfgType * _2;
  unsigned char _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = IpConfig_6(D)->InstanceType;
  if (_1 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 3> [local count: 365072220]:
<L0>:
  # DEBUG BEGIN_STMT
  _2 = IpConfig_6(D)->FtmInsConfig;
  if (_2 != 0B)
    goto <bb 4>; [53.47%]
  else
    goto <bb 5>; [46.53%]

  <bb 4> [local count: 195204116]:
  # DEBUG BEGIN_STMT
  _3 = IpConfig_6(D)->InstanceId;
  Ftm_Pwm_Ip_DeInit (_3);

  <bb 5> [local count: 1073741824]:
<L6>:
  return;

}


