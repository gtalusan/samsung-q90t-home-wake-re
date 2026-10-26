/* deviced : edbus_unlockstate@000299c4 */

void edbus_unlockstate(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  __pid_t __pid;
  int *piVar3;
  char *local_70;
  char *local_6c;
  undefined4 local_68;
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [56];
  int local_1c;
  
  piVar3 = *(int **)(DAT_00029cd4 + 0x299d4 + DAT_00029cd8);
  local_1c = *piVar3;
  dbus_error_init(auStack_64);
  iVar1 = dbus_message_get_args(param_2,auStack_64,0x73,&local_70,0x73,&local_6c,0);
  if (iVar1 == 0) {
    __dlog_print(2,6,DAT_00029cf8 + 0x29b80,DAT_00029cf4 + 0x29b7c,DAT_00029cf0 + 0x29b92,
                 DAT_00029cec + 0x29bd0,0x1ca);
    local_68 = 0xffffffea;
  }
  else if (local_70 == (char *)0x0) {
    __dlog_print(2,6,DAT_00029d28 + 0x29c70,DAT_00029d24 + 0x29c6c,DAT_00029d20 + 0x29c82,
                 DAT_00029d1c + 0x29cc0,0x1d1);
    local_68 = 0xffffffea;
  }
  else if (*local_70 == '\0') {
    __dlog_print(2,6,DAT_00029d08 + 0x29bd0,DAT_00029d04 + 0x29bcc,DAT_00029d00 + 0x29be2,
                 DAT_00029cfc + 0x29c20,0x1d8);
    local_68 = 0xffffffea;
  }
  else {
    iVar1 = strcmp(local_70,(char *)(DAT_00029cdc + 0x29a4c));
    if (iVar1 == 0) {
      local_68 = 0;
    }
    else {
      __pid = get_edbus_sender_pid(param_2);
      iVar1 = kill(__pid,0);
      if (iVar1 == -1) {
        __dlog_print(2,6,DAT_00029d38 + 0x29cc4,DAT_00029d34 + 0x29cbc,DAT_00029d30 + 0x29cd2,
                     (int)&DAT_00029d10 + DAT_00029d2c,0x1e7,__pid);
        local_68 = 0xfffffffd;
      }
      else {
        iVar1 = strcmp(local_6c,(char *)(DAT_00029ce0 + 0x29acc));
        if (((iVar1 != 0) && (iVar1 = strcmp(local_6c,(char *)(DAT_00029ce4 + 0x29ae4)), iVar1 != 0)
            ) && (iVar1 = strcmp(local_6c,(char *)(DAT_00029ce8 + 0x29b00)), iVar1 != 0)) {
          __dlog_print(2,6,DAT_00029d18 + 0x29c24,DAT_00029d14 + 0x29c20,DAT_00029d10 + 0x29c32,
                       DAT_00029d0c + 0x29c70,0x1fa,local_6c);
        }
        local_68 = pm_unlock_state(__pid,local_70);
        iVar1 = pm_get_lock_count(__pid);
        if (iVar1 == 0) {
          unregister_edbus_watch(param_2,4);
        }
      }
    }
  }
  uVar2 = dbus_message_new_method_return(param_2);
  dbus_message_iter_init_append(uVar2,auStack_54);
  dbus_message_iter_append_basic(auStack_54,0x69,&local_68);
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

