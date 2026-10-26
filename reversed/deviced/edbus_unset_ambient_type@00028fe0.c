/* deviced : edbus_unset_ambient_type@00028fe0 */

void edbus_unset_ambient_type(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  uint local_6c;
  undefined4 local_68;
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [56];
  int local_1c;
  
  piVar3 = *(int **)(DAT_0002919c + 0x28ff0 + DAT_000291a0);
  local_1c = *piVar3;
  dbus_error_init(auStack_64);
  iVar1 = dbus_message_get_args(param_2,auStack_64,0x69,&local_6c,0);
  if (iVar1 == 0) {
    __dlog_print(2,6,DAT_000291cc + 0x29188,DAT_000291d0 + 0x2918c,DAT_000291c4 + 0x2919a,
                 DAT_000291c8 + 0x2916c,0x2cf);
    local_68 = 0xffffffea;
    goto LAB_000290e8;
  }
  uVar4 = local_6c;
  __dlog_print(2,4,DAT_000291ac + 0x29078,DAT_000291b0 + 0x2907c,DAT_000291a4 + 0x2908a,
               DAT_000291a8 + 0x29058,0x2d4,local_6c);
  if (local_6c == 4) {
LAB_00029134:
    uVar2 = get_edbus_sender_pid(param_2);
    local_68 = ambient_unset_current_type(uVar2,local_6c);
  }
  else {
    if ((int)local_6c < 5) {
      if (local_6c < 3) goto LAB_00029134;
    }
    else if ((local_6c == 8) || (local_6c == 0x7fffffff)) goto LAB_00029134;
    __dlog_print(2,6,DAT_000291bc + 0x290dc,DAT_000291c0 + 0x290e0,DAT_000291b4 + 0x290ee,
                 DAT_000291b8 + 0x290c0,0x2d8,uVar4);
    local_68 = 0xffffffea;
  }
LAB_000290e8:
  uVar2 = dbus_message_new_method_return(param_2);
  dbus_message_iter_init_append(uVar2,auStack_54);
  dbus_message_iter_append_basic(auStack_54,0x69,&local_68);
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

