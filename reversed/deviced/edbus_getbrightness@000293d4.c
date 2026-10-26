/* deviced : edbus_getbrightness@000293d4 */

undefined4 edbus_getbrightness(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 local_58;
  undefined1 auStack_54 [56];
  int local_1c;
  
  piVar2 = *(int **)(DAT_00029448 + 0x293ec + DAT_0002944c);
  local_58 = 100;
  local_1c = *piVar2;
  uVar1 = dbus_message_new_method_return(param_2);
  dbus_message_iter_init_append(uVar1,auStack_54);
  dbus_message_iter_append_basic(auStack_54,0x69,&local_58);
  if (local_1c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}

