/* deviced : dbus_method_sync@00038ad8 */

void dbus_method_sync(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 auStack_64 [56];
  int local_2c;
  
  piVar5 = *(int **)(DAT_00038e10 + 0x38ae8 + DAT_00038e14);
  local_78 = 0;
  local_2c = *piVar5;
  iVar1 = dbus_bus_get(1,0,DAT_00038e10 + 0x38ae8);
  if (iVar1 == 0) {
    __dlog_print(2,6,DAT_00038e64 + 0x38e04,DAT_00038e60 + 0x38e00,DAT_00038e5c + 0x38e15,
                 (int)&DAT_00038e14 + DAT_00038e58,0x69);
    iVar1 = -1;
  }
  else {
    iVar2 = dbus_message_new_method_call(param_1,param_2,param_3,param_4);
    if (iVar2 == 0) {
      __dlog_print(2,6,DAT_00038e44 + 0x38d34,DAT_00038e40 + 0x38d28,DAT_00038e3c + 0x38d3d,
                   DAT_00038e38 + 0x38d3c,0x70,param_2,param_3,param_4);
      local_78 = -0x4a;
    }
    else {
      dbus_message_iter_init_append(iVar2,auStack_64);
      iVar3 = append_variant(auStack_64,param_5,param_6);
      if (iVar3 < 0) {
        __dlog_print(2,6,DAT_00038e20 + 0x38c4c,DAT_00038e24 + 0x38c5c,DAT_00038e1c + 0x38c61,
                     DAT_00038e18 + 0x38c64,0x79,iVar3,param_1,param_2,param_3,param_4);
        local_78 = iVar3;
      }
      else {
        dbus_error_init(&local_74);
        iVar3 = dbus_connection_send_with_reply_and_block(iVar1,iVar2,0xffffffff,&local_74);
        if (iVar3 == 0) {
          __dlog_print(2,6,DAT_00038e54 + 0x38da0,DAT_00038e50 + 0x38d98,DAT_00038e48 + 0x38da5,
                       DAT_00038e4c + 0x38db4,0x82,local_74,local_70,param_1,param_2,param_3,param_4
                      );
          dbus_error_free(&local_74);
          local_78 = -0x46;
        }
        else {
          iVar4 = dbus_message_get_args(iVar3,&local_74,0x69,&local_78,0);
          dbus_message_unref(iVar3);
          if (iVar4 == 0) {
            __dlog_print(2,6,DAT_00038e34 + 0x38cc4,DAT_00038e30 + 0x38cb8,DAT_00038e28 + 0x38cc9,
                         DAT_00038e2c + 0x38ce4,0x8c,local_74,local_70,param_1,param_2,param_3,
                         param_4);
            dbus_error_free(&local_74);
            local_78 = -0x2a;
          }
          dbus_message_unref(iVar3);
        }
      }
      dbus_message_unref(iVar2);
    }
    dbus_connection_unref(iVar1);
    iVar1 = local_78;
  }
  if (local_2c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1);
  }
  return;
}

