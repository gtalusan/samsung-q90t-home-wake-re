/* deviced : dbus_request_reboot_public@00021740 */

void dbus_request_reboot_public(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  __pid_t __pid;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 auStack_64 [56];
  int local_2c;
  
  piVar4 = *(int **)(DAT_0002193c + 0x21750 + DAT_00021940);
  local_2c = *piVar4;
  iVar1 = is_poweroff_in_progress();
  if (iVar1 == 0) {
    iVar2 = dbus_message_get_args(param_2,0,0x73,&local_6c,0);
    iVar1 = DAT_00021944;
    if (iVar2 == 0) {
      __dlog_print(2,6,DAT_00021960 + 0x218a4,DAT_0002195c + 0x218a0,DAT_00021958 + 0x218b4,
                   DAT_00021954 + 0x21890,0x1e3);
      local_68 = 0xffffffea;
    }
    else {
      __pid = get_edbus_sender_pid(param_2);
      iVar6 = DAT_00021948 + 0x217d8;
      iVar5 = DAT_0002194c + 0x217f8;
      __dlog_print(2,4,iVar1 + 0x217b4,DAT_00021950 + 0x217d0,iVar5,iVar6,0x1ea,local_6c);
      iVar2 = kill(__pid,0);
      if (iVar2 == -1) {
        __dlog_print(2,6,iVar1 + 0x217b4,DAT_00021974 + 0x21920,iVar5,iVar6,0x1ee,__pid);
        local_68 = 0xfffffffd;
      }
      else {
        local_68 = request_reboot(__pid,2,3,0);
      }
    }
  }
  else {
    local_68 = 0xffffffff;
    __dlog_print(2,5,DAT_00021970 + 0x218fc,DAT_0002196c + 0x218f4,DAT_00021968 + 0x21904,
                 DAT_00021964 + 0x218e0,0x1dc);
  }
  uVar3 = dbus_message_new_method_return(param_2);
  dbus_message_iter_init_append(uVar3,auStack_64);
  dbus_message_iter_append_basic(auStack_64,0x69,&local_68);
  if (local_2c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

