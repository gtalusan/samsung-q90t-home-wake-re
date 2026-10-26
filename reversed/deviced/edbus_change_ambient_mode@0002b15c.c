/* deviced : edbus_change_ambient_mode@0002b15c */

void edbus_change_ambient_mode(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_74;
  undefined4 local_70;
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [56];
  int local_24;
  
  piVar3 = *(int **)(DAT_0002b34c + 0x2b16c + DAT_0002b350);
  local_24 = *piVar3;
  iVar1 = __is_ambient_mode_change_available();
  if (iVar1 == 0) {
    local_70 = 0xffffffff;
    __dlog_print(2,6,DAT_0002b380 + 0x2b310,DAT_0002b37c + 0x2b308,DAT_0002b378 + 0x2b31a,
                 DAT_0002b374 + 0x2b448,0x264);
  }
  else {
    dbus_error_init(auStack_6c);
    iVar1 = dbus_message_get_args(param_2,auStack_6c,0x73,&local_74,0);
    if (iVar1 == 0) {
      __dlog_print(2,6,DAT_0002b370 + 0x2b2b8,DAT_0002b36c + 0x2b2b4,DAT_0002b368 + 0x2b2ca,
                   DAT_0002b364 + 0x2b3f8,0x26d);
      local_70 = 0xffffffea;
    }
    else {
      iVar6 = DAT_0002b354 + 0x2b1dc;
      iVar5 = (int)&DAT_0002b358 + DAT_0002b358;
      iVar4 = DAT_0002b35c + 0x2b22a;
      iVar1 = local_74;
      __dlog_print(2,4,iVar6,DAT_0002b360 + 0x2b200,iVar4,iVar5,0x272,local_74);
      if (local_74 == 0) {
        __dlog_print(2,6,iVar6,DAT_0002b384 + 0x2b32c,iVar4,iVar5,0x276,iVar1);
        local_70 = 0xffffffea;
      }
      else {
        uVar2 = get_edbus_sender_pid(param_2);
        local_70 = ambient_set_current_mode(uVar2,local_74);
      }
    }
  }
  uVar2 = dbus_message_new_method_return(param_2);
  dbus_message_iter_init_append(uVar2,auStack_5c);
  dbus_message_iter_append_basic(auStack_5c,0x69,&local_70);
  if (local_24 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

