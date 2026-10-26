/* deviced : edbus_getstate@0002a3b8 */

undefined4 edbus_getstate(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  char *local_78;
  undefined1 auStack_74 [56];
  char acStack_3c [32];
  int local_1c;
  
  piVar2 = *(int **)(DAT_0002a454 + 0x2a3c8 + DAT_0002a458);
  local_1c = *piVar2;
  local_78 = (char *)pm_get_state();
  snprintf(acStack_3c,0x20,(char *)(DAT_0002a45c + 0x2a3f4),local_78);
  local_78 = acStack_3c;
  uVar1 = dbus_message_new_method_return(param_2);
  dbus_message_iter_init_append(uVar1,auStack_74);
  dbus_message_iter_append_basic(auStack_74,0x73,&local_78);
  if (local_1c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}

