/* deviced : dbus_method_async@00039a0c */

void dbus_method_async(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined1 auStack_64 [56];
  int local_2c;
  
  piVar4 = *(int **)(DAT_00039c5c + 0x39a1c + DAT_00039c60);
  local_2c = *piVar4;
  iVar1 = dbus_bus_get(1,0);
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
    __dlog_print(2,6,DAT_00039ca0 + 0x39c54,DAT_00039c9c + 0x39c50,DAT_00039c98 + 0x39c61,
                 DAT_00039c94 + 0x39cd0,0x164);
  }
  else {
    iVar2 = dbus_message_new_method_call(param_1,param_2,param_3,param_4);
    if (iVar2 == 0) {
      uVar5 = 0xffffffb6;
      __dlog_print(2,6,DAT_00039c90 + 0x39c04,DAT_00039c8c + 0x39bfc,DAT_00039c88 + 0x39c09,
                   (int)&DAT_00039c78 + DAT_00039c84,0x16b,param_2,param_3,param_4);
    }
    else {
      dbus_message_iter_init_append(iVar2,auStack_64);
      iVar3 = append_variant(auStack_64,param_5,param_6);
      if (iVar3 < 0) {
        uVar5 = 0xffffffb6;
        __dlog_print(2,6,DAT_00039c7c + 0x39b90,DAT_00039c80 + 0x39b98,DAT_00039c74 + 0x39ba1,
                     DAT_00039c78 + 0x39c2c,0x174,iVar3,param_1,param_2,param_3,param_4);
      }
      else {
        iVar3 = dbus_connection_send(iVar1,iVar2,0);
        if (iVar3 == 1) {
          uVar5 = 0;
        }
        else {
          uVar5 = 0xffffffba;
          __dlog_print(2,6,DAT_00039c6c + 0x39b08,DAT_00039c70 + 0x39b10,DAT_00039c64 + 0x39b19,
                       DAT_00039c68 + 0x39ba4,0x17c,param_1,param_2,param_3,param_4);
        }
      }
      dbus_message_unref(iVar2);
    }
    dbus_connection_unref(iVar1);
  }
  if (local_2c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

