/* deviced : edbus_set_ambient_mode_and_type@0002aabc */

void edbus_set_ambient_mode_and_type(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int local_78;
  int local_74;
  uint local_70;
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [56];
  int local_24;
  
  piVar3 = *(int **)(DAT_0002adf0 + 0x2aacc + DAT_0002adf4);
  local_24 = *piVar3;
  iVar1 = __is_ambient_mode_change_available();
  if (iVar1 == 0) {
    local_78 = -1;
    __dlog_print(2,6,DAT_0002ae28 + 0x2ad0c,DAT_0002ae24 + 0x2ad04,DAT_0002ae20 + 0x2ad16,
                 (int)&DAT_0002ae0c + DAT_0002ae1c,0x341);
    goto LAB_0002aba0;
  }
  dbus_error_init(auStack_6c);
  iVar1 = dbus_message_get_args(param_2,auStack_6c,0x73,&local_74,0x69,&local_70,0);
  if (iVar1 == 0) {
    __dlog_print(2,6,DAT_0002ae38 + 0x2ad54,DAT_0002ae34 + 0x2ad50,DAT_0002ae30 + 0x2ad66,
                 DAT_0002ae2c + 0x2ae5c,0x34a);
    local_78 = -0x16;
    goto LAB_0002aba0;
  }
  if (local_70 == 4) {
LAB_0002abec:
    if (local_74 == 0) {
      __dlog_print(2,6,DAT_0002ae4c + 0x2ade0,DAT_0002ae48 + 0x2addc,DAT_0002ae44 + 0x2adf2,
                   DAT_0002ae40 + 0x2aee8,0x356);
      local_78 = -0x16;
    }
    else {
      iVar4 = DAT_0002ae08 + 0x2ac14;
      iVar5 = DAT_0002ae0c + 0x2ad50;
      iVar1 = DAT_0002ae10 + 0x2ac5a;
      uVar6 = local_70;
      __dlog_print(2,4,iVar4,DAT_0002ae14 + 0x2ac30,iVar1,iVar5,0x35b,local_74,local_70);
      uVar2 = get_edbus_sender_pid(param_2);
      local_78 = ambient_set_current_type(uVar2,local_70);
      if (local_78 == 0) {
        local_78 = ambient_set_current_mode(uVar2,local_74);
        if (local_78 != 0) {
          __dlog_print(2,6,iVar4,DAT_0002ae18 + 0x2acac,iVar1,iVar5,0x367,local_74,uVar6);
          ambient_unset_current_type(uVar2,local_70);
        }
      }
      else {
        __dlog_print(2,6,iVar4,DAT_0002ae3c + 0x2ad88,iVar1,iVar5,0x360,local_70,uVar6);
        local_78 = -0x16;
      }
    }
  }
  else {
    if ((int)local_70 < 5) {
      if (local_70 < 3) goto LAB_0002abec;
    }
    else if ((local_70 == 8) || (local_70 == 0x7fffffff)) goto LAB_0002abec;
    __dlog_print(2,6,DAT_0002ae00 + 0x2ab8c,DAT_0002ae04 + 0x2ab94,DAT_0002adf8 + 0x2ab9e,
                 DAT_0002adfc + 0x2acb0,0x350,local_70);
    local_78 = -0x16;
  }
LAB_0002aba0:
  uVar2 = dbus_message_new_method_return(param_2);
  dbus_message_iter_init_append(uVar2,auStack_5c);
  dbus_message_iter_append_basic(auStack_5c,0x69,&local_78);
  if (local_24 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

