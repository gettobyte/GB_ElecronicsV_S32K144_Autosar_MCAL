
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  main/1:

 Propagating constants:

Not considering main for cloning; -fipa-cp-clone disabled.

overall_size: 7, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: main/1:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

main/1 (main) @0675a2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: exit_code/0 (read)exit_code/0 (read)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body only_called_at_startup executed_once optimize_size
  Called by: 
  Calls: 
exit_code/0 (exit_code) @06736438
  Type: variable definition analyzed
  Visibility: force_output externally_visible public
  References: 
  Referring: main/1 (read)main/1 (read)
  Availability: available
  Varpool flags: initialized

;; Function main (main, funcdef_no=0, decl_uid=5524, cgraph_uid=1, symbol_order=1) (executed once)

Modification phase of node main/1
main ()
{
  int exit_code.0_1;
  int _3;

  <bb 2> [local count: 118111600]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  exit_code.0_1 ={v} exit_code;
  if (exit_code.0_1 != 0)
    goto <bb 4>; [11.00%]
  else
    goto <bb 5>; [89.00%]

  <bb 5> [local count: 955630223]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  _3 ={v} exit_code;
  return _3;

}


