/* deviced : dbus_method_sync_timeout_suspend_resume@00038e68 */

void dbus_method_sync_timeout_suspend_resume
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 *param_7,undefined4 *param_8,
               int param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 auStack_64 [56];
  int local_2c;
  
  piVar5 = *(int **)(DAT_000391e4 + 0x38e78 + DAT_000391e8);
  local_80 = 0;
  local_2c = *piVar5;
  iVar1 = dbus_bus_get(1,0,DAT_000391e4 + 0x38e78);
  if (iVar1 == 0) {
    __dlog_print(2,6,DAT_00039238 + 0x391d8,DAT_00039234 + 0x391d4,DAT_00039230 + 0x391e9,
                 (int)&DAT_000391fc + DAT_0003922c,0xa5);
    iVar1 = -1;
  }
  else {
    iVar2 = dbus_message_new_method_call(param_1,param_2,param_3,param_4);
    if (iVar2 == 0) {
      __dlog_print(2,6,DAT_00039218 + 0x39108,DAT_00039214 + 0x390fc,DAT_00039210 + 0x39111,
                   DAT_0003920c + 0x39124,0xac,param_2,param_3,param_4);
      local_80 = -0x4a;
    }
    else {
      dbus_message_iter_init_append(iVar2,auStack_64);
      iVar3 = append_variant(auStack_64,param_5,param_6);
      if (iVar3 < 0) {
        __dlog_print(2,6,DAT_000391f4 + 0x39020,DAT_000391f8 + 0x39030,DAT_000391f0 + 0x39035,
                     DAT_000391ec + 0x3904c,0xb5,iVar3,param_1,param_2,param_3,param_4);
        local_80 = iVar3;
      }
      else {
        dbus_error_init(&local_74);
        iVar3 = dbus_connection_send_with_reply_and_block(iVar1,iVar2,param_9 * 1000,&local_74);
        if (iVar3 == 0) {
          __dlog_print(2,6,DAT_00039228 + 0x39174,DAT_00039224 + 0x3916c,DAT_0003921c + 0x39179,
                       DAT_00039220 + 0x3919c,0xbe,local_74,local_70,param_1,param_2,param_3,param_4
                      );
          dbus_error_free(&local_74);
          local_80 = -0x46;
        }
        else {
          local_7c = 0;
          local_78 = 0;
          iVar4 = dbus_message_get_args
                            (iVar3,&local_74,0x69,&local_80,0x69,&local_7c,0x69,&local_78,0);
          *param_7 = local_7c;
          *param_8 = local_78;
          if (iVar4 == 0) {
            __dlog_print(2,6,DAT_00039208 + 0x39098,DAT_00039204 + 0x3908c,DAT_000391fc + 0x3909d,
                         DAT_00039200 + 0x390cc,0xcb,local_74,local_70,param_1,param_2,param_3,
                         param_4);
            dbus_error_free(&local_74);
            local_80 = -0x2a;
          }
          dbus_message_unref(iVar3);
        }
      }
      dbus_message_unref(iVar2);
    }
    dbus_connection_unref(iVar1);
    iVar1 = local_80;
  }
  if (local_2c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1);
  }
  return;
}

