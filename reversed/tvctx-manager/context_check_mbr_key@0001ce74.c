/* tvctx-manager : context_check_mbr_key@0001ce74 */

undefined4 context_check_mbr_key(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = context_check_mask(0x10,param_3);
  if ((iVar1 == 0) && (iVar1 = g_strcmp0(param_1,"XF86Exit"), iVar1 == 0)) {
    return 0;
  }
  iVar1 = window_util_should_process_even_if_registered(param_2);
  if (iVar1 == 0) {
    uVar2 = mbr_handled(param_1);
    return uVar2;
  }
  return 0;
}

