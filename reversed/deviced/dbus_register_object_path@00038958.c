/* deviced : dbus_register_object_path@00038958 */

void dbus_register_object_path(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 auStack_34 [4];
  undefined4 local_30;
  int local_24;
  
  piVar3 = *(int **)(DAT_00038ab0 + 0x38968 + DAT_00038ab4);
  local_24 = *piVar3;
  dbus_error_init(auStack_34);
  iVar1 = dbus_connection_register_object_path(param_1,param_2,param_3,0);
  if (iVar1 == 0) {
    __dlog_print(2,6,DAT_00038ac4 + 0x38a44,DAT_00038ac0 + 0x38a40,DAT_00038abc + 0x38a51,
                 DAT_00038ab8 + 0x38a34,0x4e,param_2);
    uVar2 = 0xffffffff;
  }
  else {
    if (param_4 != 0) {
      dbus_bus_add_match(param_1,param_4,auStack_34);
      iVar1 = dbus_error_is_set(auStack_34);
      if (iVar1 != 0) {
        __dlog_print(2,6,DAT_00038ad4 + 0x38a98,DAT_00038ad0 + 0x38a90,DAT_00038acc + 0x38aa1,
                     DAT_00038ac8 + 0x38a88,0x54,param_4,local_30);
        dbus_error_free(auStack_34);
        uVar2 = 0xffffffff;
        goto LAB_000389e4;
      }
    }
    uVar2 = 0;
  }
LAB_000389e4:
  if (local_24 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

