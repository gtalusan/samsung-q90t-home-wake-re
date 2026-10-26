/* deviced : edbus_getlockcount@0002a0dc */

void edbus_getlockcount(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *local_6c;
  undefined4 local_68;
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [56];
  int local_1c;
  
  piVar3 = *(int **)(DAT_0002a284 + 0x2a0ec + DAT_0002a288);
  local_68 = 0xffffffff;
  local_1c = *piVar3;
  dbus_error_init(auStack_64);
  iVar1 = dbus_message_get_args(param_2,auStack_64,0x73,&local_6c,0);
  if (iVar1 == 0) {
    __dlog_print(2,6,DAT_0002a2a4 + 0x2a234,DAT_0002a2a0 + 0x2a230,DAT_0002a29c + 0x2a246,
                 (int)&DAT_0002a2a8 + DAT_0002a298,0x192);
  }
  else if (local_6c == (char *)0x0) {
    __dlog_print(2,6,DAT_0002a2b4 + 0x2a27c,DAT_0002a2b0 + 0x2a278,DAT_0002a2ac + 0x2a28e,
                 DAT_0002a2a8 + 0x2a2f0,0x199);
  }
  else {
    iVar1 = strcmp(local_6c,(char *)(DAT_0002a28c + 0x2a158));
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      iVar1 = strcmp(local_6c,(char *)(DAT_0002a290 + 0x2a170));
      if (iVar1 == 0) {
        uVar2 = 3;
      }
      else {
        iVar1 = strcmp(local_6c,(char *)(DAT_0002a294 + 0x2a1d8));
        if (iVar1 != 0) goto LAB_0002a184;
        uVar2 = 4;
      }
    }
    local_68 = get_display_lock_count(uVar2);
  }
LAB_0002a184:
  uVar2 = dbus_message_new_method_return(param_2);
  dbus_message_iter_init_append(uVar2,auStack_54);
  dbus_message_iter_append_basic(auStack_54,0x69,&local_68);
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

