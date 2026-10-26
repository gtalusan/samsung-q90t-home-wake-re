/* deviced : dbus_power_handler@00021c98 */

void dbus_power_handler(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  __pid_t __pid;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_70;
  int local_6c;
  char *local_68;
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [56];
  int local_1c;
  
  piVar3 = *(int **)(DAT_00021edc + 0x21ca8 + DAT_00021ee0);
  local_1c = *piVar3;
  dbus_error_init(auStack_64);
  iVar1 = dbus_message_get_args(param_2,auStack_64,0x73,&local_68,0x69,&local_6c,0);
  if (iVar1 == 0) {
    __dlog_print(2,6,DAT_00021f04 + 0x21e28,DAT_00021f00 + 0x21e24,DAT_00021efc + 0x21e38,
                 DAT_00021ef8 + 0x21e48,0x16f);
    local_70 = 0xffffffea;
  }
  else if (local_6c < 0) {
    __dlog_print(2,6,DAT_00021f14 + 0x21e78,DAT_00021f10 + 0x21e74,DAT_00021f0c + 0x21e88,
                 DAT_00021f08 + 0x21e98,0x176);
    local_70 = 0xffffffea;
  }
  else {
    __pid = get_edbus_sender_pid(param_2);
    iVar1 = kill(__pid,0);
    if (iVar1 == -1) {
      __dlog_print(2,6,DAT_00021f24 + 0x21ecc,DAT_00021f20 + 0x21ec4,DAT_00021f1c + 0x21ed8,
                   (int)&DAT_00021ee8 + DAT_00021f18,0x17f,__pid);
      local_70 = 0xfffffffd;
    }
    else {
      iVar1 = strncmp(local_68,(char *)(DAT_00021ee4 + 0x21d38),6);
      if (iVar1 == 0) {
        __dlog_print(2,4,DAT_00021ef4 + 0x21dc8,DAT_00021ef0 + 0x21dc4,DAT_00021eec + 0x21dd8,
                     DAT_00021ee8 + 0x21de8,0x186);
        local_70 = request_reboot(__pid,2,0,0);
      }
    }
  }
  uVar2 = dbus_message_new_method_return(param_2);
  dbus_message_iter_init_append(uVar2,auStack_54);
  dbus_message_iter_append_basic(auStack_54,0x69,&local_70);
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

