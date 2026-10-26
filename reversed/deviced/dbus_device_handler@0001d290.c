/* deviced : dbus_device_handler@0001d290 */

void dbus_device_handler(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  __pid_t __pid;
  int *piVar3;
  undefined4 local_78;
  uint local_74;
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [56];
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  
  piVar3 = *(int **)(DAT_0001d48c + 0x1d2a0 + DAT_0001d490);
  local_78 = 0;
  local_1c = *piVar3;
  dbus_error_init(auStack_6c);
  iVar1 = dbus_message_get_args
                    (param_2,auStack_6c,0x73,auStack_70,0x69,&local_74,0x73,&local_24,0x73,&local_20
                     ,0);
  if (iVar1 == 0) {
    __dlog_print(2,6,DAT_0001d4b0 + 0x1d428,DAT_0001d4ac + 0x1d424,DAT_0001d4a8 + 0x1d439,
                 DAT_0001d4a4 + 0x1d458,0x1b6);
    local_78 = 0xffffffea;
  }
  else if (local_74 < 2) {
    __pid = get_edbus_sender_pid(param_2);
    iVar1 = kill(__pid,0);
    if (iVar1 == -1) {
      __dlog_print(2,6,DAT_0001d4c0 + 0x1d47c,DAT_0001d4bc + 0x1d474,DAT_0001d4b8 + 0x1d489,
                   (int)&DAT_0001d4a8 + DAT_0001d4b4,0x1c3,__pid);
      local_78 = 0xfffffffd;
    }
    else {
      extcon_update(local_24,local_20);
    }
  }
  else {
    __dlog_print(2,6,DAT_0001d4a0 + 0x1d368,DAT_0001d49c + 0x1d364,DAT_0001d498 + 0x1d379,
                 DAT_0001d494 + 0x1d398,0x1bc);
    local_78 = 0xffffffea;
  }
  uVar2 = dbus_message_new_method_return(param_2);
  dbus_message_iter_init_append(uVar2,auStack_5c);
  dbus_message_iter_append_basic(auStack_5c,0x69,&local_78);
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

