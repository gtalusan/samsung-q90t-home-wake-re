/* deviced : dbus_get_earjack_key_status@0001c6d4 */

undefined4 dbus_get_earjack_key_status(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 local_58;
  undefined1 auStack_54 [56];
  int local_1c;
  
  piVar2 = *(int **)(DAT_0001c750 + 0x1c6e8 + DAT_0001c754);
  local_58 = *(undefined4 *)(DAT_0001c758 + 0x1c704);
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

