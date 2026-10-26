/* libapp-context-manager-common.so : context_unset@45e9b614 */

undefined4 context_unset(uint param_1,manager_ctxt *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x3c);
  *(uint *)(param_2 + 0x3c) = uVar1 & ~param_1;
  if (uVar1 != (uVar1 & ~param_1)) {
    handle_context_change(uVar1 & param_1,param_2);
  }
  FUN_45e99060(param_1);
  return *(undefined4 *)(param_2 + 0x3c);
}

