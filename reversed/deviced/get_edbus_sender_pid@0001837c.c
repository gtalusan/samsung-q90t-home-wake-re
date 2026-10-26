/* deviced : get_edbus_sender_pid@0001837c */

void get_edbus_sender_pid(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_5c;
  undefined4 local_58;
  undefined1 auStack_54 [56];
  int local_1c;
  
  piVar3 = *(int **)(DAT_0001866c + 0x18390 + DAT_00018670);
  local_1c = *piVar3;
  if (param_1 == 0) {
    __dlog_print(2,6,DAT_000186a0 + 0x18528,DAT_0001869c + 0x18524,DAT_00018698 + 0x18537,
                 DAT_00018694 + 0x185b4,0xd9);
    local_58 = 0xffffffff;
  }
  else {
    local_5c = dbus_message_get_sender();
    if (local_5c == 0) {
      __dlog_print(2,6,DAT_000186c0 + 0x185c0,DAT_000186bc + 0x185bc,DAT_000186b8 + 0x185cf,
                   DAT_000186b4 + 0x1864c,0xe0);
      local_58 = 0xffffffff;
    }
    else {
      iVar1 = dbus_message_new_method_call
                        (DAT_00018674 + 0x183c8,DAT_0001867c + 0x183d4,DAT_00018674 + 0x183c8,
                         DAT_00018678 + 0x183d0);
      if (iVar1 == 0) {
        __dlog_print(2,6,DAT_000186b0 + 0x18574,DAT_000186ac + 0x18570,DAT_000186a8 + 0x18583,
                     DAT_000186a4 + 0x18600,0xea);
        local_58 = 0xffffffff;
      }
      else {
        iVar2 = dbus_message_append_args(iVar1,0x73,&local_5c,0);
        if (iVar2 == 0) {
          __dlog_print(2,6,DAT_00018690 + 0x184d4,DAT_0001868c + 0x184d0,DAT_00018688 + 0x184e3,
                       DAT_00018684 + 0x18560,0xf2);
          dbus_message_unref(iVar1);
          local_58 = 0xffffffff;
        }
        else {
          iVar2 = e_dbus_message_send(*(undefined4 *)(DAT_00018680 + 0x18418),iVar1,0,0xffffffff,0);
          if (iVar2 == 0) {
            __dlog_print(2,6,DAT_000186d0 + 0x1860c,DAT_000186cc + 0x18608,DAT_000186c8 + 0x1861b,
                         (int)&DAT_00018698 + DAT_000186c4,0xfa);
            dbus_message_unref(iVar1);
            local_58 = 0xffffffff;
          }
          else {
            dbus_message_unref(iVar1);
            dbus_pending_call_block(iVar2);
            iVar1 = dbus_pending_call_steal_reply(iVar2);
            dbus_pending_call_unref(iVar2);
            if (iVar1 == 0) {
              __dlog_print(2,6,DAT_000186e0 + 0x18660,DAT_000186dc + 0x1865c,DAT_000186d8 + 0x1866f,
                           DAT_000186d4 + 0x186ec,0x108);
              local_58 = 0xffffffff;
            }
            else {
              dbus_message_iter_init(iVar1,auStack_54);
              dbus_message_iter_get_basic(auStack_54,&local_58);
              dbus_message_unref(iVar1);
            }
          }
        }
      }
    }
  }
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_58);
  }
  return;
}

