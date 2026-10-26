/* deviced : dbus_udev_handler@0001ba10 */

void dbus_udev_handler(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  __pid_t __pid;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_74;
  int local_70;
  undefined1 auStack_6c [4];
  char *local_68;
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [56];
  int local_1c;
  
  piVar3 = *(int **)(DAT_0001bc3c + 0x1ba20 + DAT_0001bc40);
  local_74 = 0;
  local_1c = *piVar3;
  dbus_error_init(auStack_64);
  iVar1 = dbus_message_get_args(param_2,auStack_64,0x73,auStack_6c,0x69,&local_70,0x73,&local_68,0);
  if (iVar1 == 0) {
    __dlog_print(2,6,DAT_0001bc58 + 0x1bb7c,DAT_0001bc54 + 0x1bb78,DAT_0001bc50 + 0x1bb8b,
                 DAT_0001bc4c + 0x1bbe0,0x228);
    local_74 = 0xffffffea;
  }
  else if (local_70 < 0) {
    __dlog_print(2,6,DAT_0001bc68 + 0x1bbd8,DAT_0001bc64 + 0x1bbd4,DAT_0001bc60 + 0x1bbe7,
                 (int)&DAT_0001bc3c + DAT_0001bc5c,0x22e);
    local_74 = 0xffffffea;
  }
  else {
    __pid = get_edbus_sender_pid(param_2);
    iVar1 = kill(__pid,0);
    if (iVar1 == -1) {
      __dlog_print(2,6,DAT_0001bc78 + 0x1bc2c,DAT_0001bc74 + 0x1bc24,DAT_0001bc70 + 0x1bc37,
                   DAT_0001bc6c + 0x1bc8c,0x235,__pid);
      local_74 = 0xfffffffd;
    }
    else {
      iVar1 = strncmp(local_68,(char *)(DAT_0001bc44 + 0x1bac8),5);
      if (iVar1 == 0) {
        uevent_kernel_control_start();
        uevent_udev_control_start();
      }
      else {
        iVar1 = strncmp(local_68,(char *)(DAT_0001bc48 + 0x1bae4),4);
        if (iVar1 == 0) {
          uevent_kernel_control_stop();
          uevent_udev_control_stop();
        }
      }
    }
  }
  uVar2 = dbus_message_new_method_return(param_2);
  dbus_message_iter_init_append(uVar2,auStack_54);
  dbus_message_iter_append_basic(auStack_54,0x69,&local_74);
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

