/* deviced : edbus_get_ambient_mode@0002a2b8 */

undefined4 edbus_get_ambient_mode(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  char *local_78;
  undefined1 auStack_74 [56];
  char acStack_3c [32];
  int local_1c;
  
  piVar2 = *(int **)(DAT_0002a39c + 0x2a2c8 + DAT_0002a3a0);
  local_1c = *piVar2;
  local_78 = (char *)ambient_get_current_mode_str();
  snprintf(acStack_3c,0x20,(char *)(DAT_0002a3a4 + 0x2a2f4),local_78);
  local_78 = acStack_3c;
  __dlog_print(0,3,DAT_0002a3b0 + 0x2a340,DAT_0002a3b4 + 0x2a348,DAT_0002a3ac + 0x2a35a,
               DAT_0002a3a8 + 0x2a3d0,0x291,acStack_3c);
  uVar1 = dbus_message_new_method_return(param_2);
  dbus_message_iter_init_append(uVar1,auStack_74);
  dbus_message_iter_append_basic(auStack_74,0x73,&local_78);
  if (local_1c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}

