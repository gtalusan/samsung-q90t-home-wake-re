/* deviced : edbus_changestate@0002b388 */

void edbus_changestate(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int local_6c;
  undefined4 local_68;
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [56];
  int local_1c;
  
  piVar3 = *(int **)(DAT_0002b544 + 0x2b398 + DAT_0002b548);
  local_1c = *piVar3;
  iVar1 = is_state_change_available();
  if (iVar1 == 0) {
    local_68 = 0xffffffff;
    __dlog_print(2,5,DAT_0002b558 + 0x2b49c,DAT_0002b554 + 0x2b494,DAT_0002b550 + 0x2b4a6,
                 DAT_0002b54c + 0x2b5f0,0xf2);
  }
  else {
    dbus_error_init(auStack_64);
    iVar1 = dbus_message_get_args(param_2,auStack_64,0x73,&local_6c,0);
    if (iVar1 == 0) {
      __dlog_print(2,6,DAT_0002b568 + 0x2b4e4,DAT_0002b564 + 0x2b4e0,DAT_0002b560 + 0x2b4f6,
                   DAT_0002b55c + 0x2b640,0xfb);
      local_68 = 0xffffffea;
    }
    else if (local_6c == 0) {
      __dlog_print(2,6,DAT_0002b578 + 0x2b534,DAT_0002b574 + 0x2b530,DAT_0002b570 + 0x2b546,
                   DAT_0002b56c + 0x2b690,0x102);
      local_68 = 0xffffffea;
    }
    else {
      uVar2 = get_edbus_sender_pid(param_2);
      local_68 = pm_change_state(uVar2,local_6c);
    }
  }
  uVar2 = dbus_message_new_method_return(param_2);
  dbus_message_iter_init_append(uVar2,auStack_54);
  dbus_message_iter_append_basic(auStack_54,0x69,&local_68);
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

