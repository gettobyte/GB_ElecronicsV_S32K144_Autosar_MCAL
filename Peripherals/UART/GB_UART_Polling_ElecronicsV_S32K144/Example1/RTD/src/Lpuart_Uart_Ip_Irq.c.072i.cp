
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Lpuart_Uart_Ip_IrqHandler/28:
  Jump functions of caller  LPUART_UART_IP_1_IRQHandler/27:

 Propagating constants:

Not considering LPUART_UART_IP_1_IRQHandler for cloning; -fipa-cp-clone disabled.

overall_size: 6, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: LPUART_UART_IP_1_IRQHandler/27:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Lpuart_Uart_Ip_IrqHandler/28 (Lpuart_Uart_Ip_IrqHandler) @05b1ee00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: LPUART_UART_IP_1_IRQHandler/27 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
LPUART_UART_IP_1_IRQHandler/27 (LPUART_UART_IP_1_IRQHandler) @05b1e9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Lpuart_Uart_Ip_IrqHandler/28 (1073741824 (estimated locally),1.00 per call) 

;; Function LPUART_UART_IP_1_IRQHandler (LPUART_UART_IP_1_IRQHandler, funcdef_no=27, decl_uid=5864, cgraph_uid=28, symbol_order=27)

Modification phase of node LPUART_UART_IP_1_IRQHandler/27
LPUART_UART_IP_1_IRQHandler ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Lpuart_Uart_Ip_IrqHandler (1);
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  return;

}


