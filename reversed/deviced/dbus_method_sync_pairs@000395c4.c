/* deviced : dbus_method_sync_pairs@000395c4 */

void dbus_method_sync_pairs
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               int param_5,undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined1 auStack_d4 [56];
  undefined1 auStack_9c [56];
  undefined1 auStack_64 [56];
  int local_2c;
  
  iVar6 = 0;
  piVar8 = *(int **)(DAT_000399b0 + 0x395d4 + DAT_000399b4);
  local_f0 = 0;
  local_2c = *piVar8;
  iVar1 = dbus_bus_get(1,0,DAT_000399b0 + 0x395d4);
  if (iVar1 == 0) {
    __dlog_print(2,6,DAT_00039a08 + 0x399a4,DAT_00039a04 + 0x399a0,DAT_00039a00 + 0x399b5,
                 dbus_method_async + DAT_000399fc,0x126);
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = dbus_message_new_method_call(param_1,param_2,param_3,param_4);
    if (iVar2 == 0) {
      __dlog_print(2,6,DAT_000399e4 + 0x398c0,DAT_000399e8 + 0x398c4,DAT_000399e0 + 0x398cd,
                   DAT_000399dc + 0x39924,0x12d,param_2,param_3,param_4);
      local_f0 = 0xffffffb6;
    }
    else {
      dbus_message_iter_init_append(iVar2,auStack_d4);
      dbus_message_iter_open_container(auStack_d4,0x61,DAT_000399b8 + 0x39670,auStack_9c);
      if (0 < param_5) {
        iVar5 = DAT_000399bc + 0x39728;
        iVar4 = DAT_000399c4 + 0x396ac;
        iVar7 = DAT_000399c0 + 0x396dd;
        do {
          local_ec = *param_6;
          local_e8 = param_6[1];
          iVar6 = iVar6 + 2;
          __dlog_print(2,4,DAT_000399c8 + 0x396fc,iVar4,iVar7,iVar5,0x137,local_ec,local_e8);
          dbus_message_iter_open_container(auStack_9c,0x65,0,auStack_64);
          dbus_message_iter_append_basic(auStack_64,0x73,&local_ec);
          dbus_message_iter_append_basic(auStack_64,0x73,&local_e8);
          dbus_message_iter_close_container(auStack_9c,auStack_64);
          param_6 = param_6 + 2;
        } while ((param_5 - 1U & 0xfffffffe) + 2 != iVar6);
      }
      dbus_message_iter_close_container(auStack_d4,auStack_9c);
      dbus_error_init(&local_e4);
      iVar6 = dbus_connection_send_with_reply_and_block(iVar1,iVar2,0xffffffff,&local_e4);
      if (iVar6 == 0) {
        __dlog_print(2,6,DAT_000399f8 + 0x3994c,DAT_000399f0 + 0x39924,DAT_000399ec + 0x39941,
                     (int)&DAT_000399d0 + DAT_000399f4,0x143,local_e4,local_e0,param_1,param_2,
                     param_3,param_4);
        dbus_error_free(&local_e4);
        local_f0 = 0xffffffba;
      }
      else {
        iVar4 = dbus_message_get_args(iVar6,&local_e4,0x69,&local_f0,0);
        if (iVar4 == 0) {
          __dlog_print(2,6,DAT_000399d8 + 0x39864,DAT_000399d0 + 0x3983c,DAT_000399cc + 0x39859,
                       DAT_000399d4 + 0x398e8,0x14c,local_e4,local_e0,param_1,param_2,param_3,
                       param_4);
          dbus_error_free(&local_e4);
        }
        dbus_message_unref(iVar6);
      }
      dbus_message_unref(iVar2);
    }
    dbus_connection_unref(iVar1);
    uVar3 = local_f0;
  }
  if (local_2c != *piVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

