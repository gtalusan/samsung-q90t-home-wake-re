/* deviced : edbus_get_ambient_type@00029464 */

undefined4 edbus_get_ambient_type(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 local_58;
  undefined1 auStack_54 [56];
  int local_1c;
  
  piVar2 = *(int **)(DAT_00029528 + 0x29474 + DAT_0002952c);
  local_1c = *piVar2;
  local_58 = ambient_get_current_type();
  __dlog_print(2,4,DAT_00029538 + 0x294cc,DAT_0002953c + 0x294d0,DAT_00029534 + 0x294e6,
               DAT_00029530 + 0x294dc,0x2f2,local_58);
  uVar1 = dbus_message_new_method_return(param_2);
  dbus_message_iter_init_append(uVar1,auStack_54);
  dbus_message_iter_append_basic(auStack_54,0x69,&local_58);
  if (local_1c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}

