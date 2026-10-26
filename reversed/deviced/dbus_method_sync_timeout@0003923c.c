/* deviced : dbus_method_sync_timeout@0003923c */

void dbus_method_sync_timeout
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,int param_7)

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
  
  piVar5 = *(int **)(DAT_0003956c + 0x3924c + DAT_00039570);
  local_78 = 0;
  local_2c = *piVar5;
  iVar1 = dbus_bus_get(1,0,DAT_0003956c + 0x3924c);
  if (iVar1 == 0) {
    __dlog_print(2,6,DAT_000395c0 + 0x39560,DAT_000395bc + 0x3955c,DAT_000395b8 + 0x39571,
                 (int)&DAT_000395ac + DAT_000395b4,0xe6);
    iVar1 = -1;
  }
  else {
    iVar2 = dbus_message_new_method_call(param_1,param_2,param_3,param_4);
    if (iVar2 == 0) {
      __dlog_print(2,6,DAT_000395a0 + 0x39490,DAT_0003959c + 0x39484,DAT_00039598 + 0x39499,
                   DAT_00039594 + 0x394d4,0xed,param_2,param_3,param_4);
      local_78 = -0x4a;
    }
    else {
      dbus_message_iter_init_append(iVar2,auStack_64);
      iVar3 = append_variant(auStack_64,param_5,param_6);
      if (iVar3 < 0) {
        __dlog_print(2,6,DAT_0003957c + 0x393a8,DAT_00039580 + 0x393b8,DAT_00039578 + 0x393bd,
                     DAT_00039574 + 0x393fc,0xf6,iVar3,param_1,param_2,param_3,param_4);
        local_78 = iVar3;
      }
      else {
        dbus_error_init(&local_74);
        iVar3 = dbus_connection_send_with_reply_and_block(iVar1,iVar2,param_7 * 1000,&local_74);
        if (iVar3 == 0) {
          __dlog_print(2,6,DAT_000395b0 + 0x394fc,DAT_000395ac + 0x394f4,DAT_000395a4 + 0x39501,
                       DAT_000395a8 + 0x3954c,0xff,local_74,local_70,param_1,param_2,param_3,param_4
                      );
          dbus_error_free(&local_74);
          local_78 = -0x46;
        }
        else {
          iVar4 = dbus_message_get_args(iVar3,&local_74,0x69,&local_78,0);
          if (iVar4 == 0) {
            __dlog_print(2,6,DAT_00039590 + 0x39420,DAT_0003958c + 0x39414,DAT_00039584 + 0x39425,
                         DAT_00039588 + 0x3947c,0x108,local_74,local_70,param_1,param_2,param_3,
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

