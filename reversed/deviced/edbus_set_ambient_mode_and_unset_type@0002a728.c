/* deviced : edbus_set_ambient_mode_and_unset_type@0002a728 */

void edbus_set_ambient_mode_and_unset_type(undefined4 param_1,undefined4 param_2)

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
  
  piVar3 = *(int **)(DAT_0002aa5c + 0x2a738 + DAT_0002aa60);
  local_24 = *piVar3;
  iVar1 = __is_ambient_mode_change_available();
  if (iVar1 == 0) {
    local_78 = -1;
    __dlog_print(2,6,DAT_0002aa94 + 0x2a978,DAT_0002aa90 + 0x2a970,DAT_0002aa8c + 0x2a982,
                 DAT_0002aa88 + 0x2aa50,0x37b);
    goto LAB_0002a80c;
  }
  dbus_error_init(auStack_6c);
  iVar1 = dbus_message_get_args(param_2,auStack_6c,0x73,&local_74,0x69,&local_70,0);
  if (iVar1 == 0) {
    __dlog_print(2,6,DAT_0002aaa4 + 0x2a9c0,DAT_0002aaa0 + 0x2a9bc,DAT_0002aa9c + 0x2a9d2,
                 (int)&DAT_0002aaa0 + DAT_0002aa98,900);
    local_78 = -0x16;
    goto LAB_0002a80c;
  }
  if (local_70 == 4) {
LAB_0002a858:
    if (local_74 == 0) {
      __dlog_print(2,6,DAT_0002aab8 + 0x2aa4c,DAT_0002aab4 + 0x2aa48,DAT_0002aab0 + 0x2aa5e,
                   DAT_0002aaac + 0x2ab2c,0x390);
      local_78 = -0x16;
    }
    else {
      iVar4 = DAT_0002aa74 + 0x2a880;
      iVar5 = DAT_0002aa78 + 0x2a994;
      iVar1 = DAT_0002aa7c + 0x2a8c6;
      uVar6 = local_70;
      __dlog_print(2,4,iVar4,DAT_0002aa80 + 0x2a89c,iVar1,iVar5,0x395,local_74,local_70);
      uVar2 = get_edbus_sender_pid(param_2);
      local_78 = ambient_unset_current_type(uVar2,local_70);
      if (local_78 == 0) {
        local_78 = ambient_set_current_mode(uVar2,local_74);
        if (local_78 != 0) {
          __dlog_print(2,6,iVar4,DAT_0002aa84 + 0x2a918,iVar1,iVar5,0x3a1,local_74,uVar6);
          ambient_set_current_type(uVar2,local_70);
        }
      }
      else {
        __dlog_print(2,6,iVar4,DAT_0002aaa8 + 0x2a9f4,iVar1,iVar5,0x39a,local_70,uVar6);
        local_78 = -0x16;
      }
    }
  }
  else {
    if ((int)local_70 < 5) {
      if (local_70 < 3) goto LAB_0002a858;
    }
    else if ((local_70 == 8) || (local_70 == 0x7fffffff)) goto LAB_0002a858;
    __dlog_print(2,6,DAT_0002aa6c + 0x2a7f8,DAT_0002aa70 + 0x2a800,DAT_0002aa64 + 0x2a80a,
                 DAT_0002aa68 + 0x2a8f4,0x38a,local_70);
    local_78 = -0x16;
  }
LAB_0002a80c:
  uVar2 = dbus_message_new_method_return(param_2);
  dbus_message_iter_init_append(uVar2,auStack_5c);
  dbus_message_iter_append_basic(auStack_5c,0x69,&local_78);
  if (local_24 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

