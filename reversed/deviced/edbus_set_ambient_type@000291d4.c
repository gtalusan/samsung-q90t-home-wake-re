/* deviced : edbus_set_ambient_type@000291d4 */

void edbus_set_ambient_type(undefined4 param_1,undefined4 param_2)

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
  
  piVar3 = *(int **)(DAT_0002939c + 0x291e4 + DAT_000293a0);
  local_1c = *piVar3;
  dbus_error_init(auStack_64);
  iVar1 = dbus_message_get_args(param_2,auStack_64,0x69,&local_6c,0);
  if (iVar1 == 0) {
    __dlog_print(2,6,DAT_000293d0 + 0x2938c,DAT_000293cc + 0x29388,DAT_000293c8 + 0x2939e,
                 DAT_000293c4 + 0x2937c,0x2a7);
    local_68 = 0xffffffea;
    goto LAB_000292e4;
  }
  uVar4 = local_6c;
  __dlog_print(2,4,DAT_000293b0 + 0x29278,DAT_000293ac + 0x2926c,DAT_000293a8 + 0x29282,
               DAT_000293a4 + 0x29264,0x2ac,local_6c);
  if (local_6c == 4) {
LAB_00029330:
    uVar2 = get_edbus_sender_pid(param_2);
    local_68 = ambient_set_current_type(uVar2,local_6c);
  }
  else {
    if ((int)local_6c < 5) {
      if (local_6c < 3) goto LAB_00029330;
    }
    else if ((local_6c == 8) || (local_6c == 0x7fffffff)) goto LAB_00029330;
    __dlog_print(2,6,DAT_000293c0 + 0x292dc,DAT_000293bc + 0x292d8,DAT_000293b8 + 0x292ee,
                 DAT_000293b4 + 0x292cc,0x2b0,uVar4);
    local_68 = 0xffffffea;
  }
LAB_000292e4:
  uVar2 = dbus_message_new_method_return(param_2);
  dbus_message_iter_init_append(uVar2,auStack_54);
  dbus_message_iter_append_basic(auStack_54,0x69,&local_68);
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

