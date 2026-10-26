/* libapp-context-manager-common.so : FUN_45eab728@45eab728 */

void FUN_45eab728(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int local_28;
  int local_24;
  
  piVar4 = *(int **)(DAT_45eab804 + 0x45eab738 + DAT_45eab808);
  local_28 = 0;
  local_24 = *piVar4;
  iVar1 = g_strcmp0(param_3,DAT_45eab80c + 0x45eab748);
  if (iVar1 == 0) {
    __dlog_print(0,3,DAT_45eab838 + 0x45eab7f2,DAT_45eab834 + 0x45eab7f0,DAT_45eab830 + 0x45eab821,
                 DAT_45eab82c + 0x45eab74a,0xb7);
    uVar3 = *(uint *)(param_4 + 0x3c) & 0x3ffffff;
  }
  else {
    iVar1 = g_strcmp0(param_3,DAT_45eab810 + 0x45eab760);
    if (iVar1 == 0) {
      __dlog_print(0,3,DAT_45eab824 + 0x45eab7b0,DAT_45eab820 + 0x45eab7ae,DAT_45eab81c + 0x45eab7df
                   ,DAT_45eab818 + 0x45eab706,0xbb);
      g_variant_get(param_1,DAT_45eab828 + 0x45eab7bc,&local_28);
      uVar3 = 0;
      if (local_28 != 0) {
        uVar3 = context_to_mask();
        g_free(local_28);
      }
    }
    else {
      uVar3 = 0xffffffff;
    }
  }
  uVar2 = g_variant_new(DAT_45eab814 + 0x45eab772,uVar3);
  g_dbus_method_invocation_return_value(param_2,uVar2);
  if (local_24 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

