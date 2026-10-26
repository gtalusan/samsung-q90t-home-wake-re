/* deviced : edbus_setbrightness@00029540 */

undefined4 edbus_setbrightness(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined1 auStack_5c [4];
  undefined4 local_58;
  undefined1 auStack_54 [56];
  int local_1c;
  
  piVar2 = *(int **)(DAT_00029618 + 0x29554 + DAT_0002961c);
  local_1c = *piVar2;
  dbus_message_iter_init(param_2,auStack_54);
  dbus_message_iter_get_basic(auStack_54,auStack_5c);
  local_58 = 0;
  __dlog_print(2,6,DAT_0002962c + 0x295cc,DAT_00029628 + 0x295c4,DAT_00029624 + 0x295da,
               DAT_00029620 + 0x295e8,0xd3);
  uVar1 = dbus_message_new_method_return(param_2);
  dbus_message_iter_init_append(uVar1,auStack_54);
  dbus_message_iter_append_basic(auStack_54,0x69,&local_58);
  if (local_1c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}

