/* libapp-context-manager-common.so : FUN_45eab130@45eab130 */

void FUN_45eab130(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int local_28;
  int local_24;
  
  piVar4 = *(int **)(DAT_45eab260 + 0x45eab142 + DAT_45eab264);
  local_28 = -1;
  local_24 = *piVar4;
  g_variant_get(param_1,DAT_45eab268 + 0x45eab15e,&local_28);
  iVar1 = g_strcmp0(param_3,DAT_45eab26c + 0x45eab16e);
  if (iVar1 == 0) {
    __dlog_print(0,4,DAT_45eab278 + 0x45eab198,DAT_45eab27c + 0x45eab19a,DAT_45eab274 + 0x45eab1c3,
                 DAT_45eab270 + 0x45eab5d4,0x91,local_28);
    uVar2 = 0x20000000;
  }
  else {
    iVar1 = g_strcmp0(param_3,DAT_45eab284 + 0x45eab1d6);
    if (iVar1 != 0) {
      iVar1 = g_strcmp0(param_3,DAT_45eab298 + 0x45eab21e);
      if (iVar1 == 0) {
        __dlog_print(0,4,DAT_45eab2a4 + 0x45eab24c,DAT_45eab2a8 + 0x45eab24e,
                     DAT_45eab2a0 + 0x45eab279,DAT_45eab29c + 0x45eab68a,0xa1,local_28);
        uVar3 = 0;
        if (0 < local_28) {
          key_sequence_remove_external();
        }
      }
      else {
        uVar3 = 0xffffffff;
      }
      goto LAB_45eab1ac;
    }
    __dlog_print(0,4,DAT_45eab290 + 0x45eab200,DAT_45eab294 + 0x45eab202,DAT_45eab28c + 0x45eab22d,
                 DAT_45eab288 + 0x45eab63e,0x99,local_28);
    uVar2 = 0x800;
  }
  uVar3 = 0;
  if (local_28 == 1) {
    uVar3 = 0;
    context_set(uVar2,param_4);
  }
  else {
    context_unset();
  }
LAB_45eab1ac:
  uVar3 = g_variant_new(DAT_45eab280 + 0x45eab1b4,uVar3);
  g_dbus_method_invocation_return_value(param_2,uVar3);
  if (local_24 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

