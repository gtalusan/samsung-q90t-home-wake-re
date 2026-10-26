/* deviced : edbus_lockstate@00029d3c */

void edbus_lockstate(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  __pid_t __pid;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  char *local_180;
  char *local_17c;
  char *local_178;
  int local_174;
  undefined4 local_170;
  undefined1 auStack_16c [16];
  undefined1 auStack_15c [56];
  undefined1 auStack_124 [256];
  int local_24;
  
  piVar4 = *(int **)(DAT_0002a064 + 0x29d4c + DAT_0002a068);
  local_24 = *piVar4;
  dbus_error_init(auStack_16c);
  iVar1 = dbus_message_get_args
                    (param_2,auStack_16c,0x73,&local_180,0x73,&local_17c,0x73,&local_178,0x69,
                     &local_174,0);
  if (iVar1 == 0) {
    __dlog_print(2,6,DAT_0002a088 + 0x29f0c,DAT_0002a084 + 0x29f08,DAT_0002a080 + 0x29f1e,
                 DAT_0002a07c + 0x29f70,0x140);
    local_170 = 0xffffffea;
  }
  else {
    __pid = get_edbus_sender_pid(param_2);
    iVar1 = kill(__pid,0);
    if (iVar1 == -1) {
      __dlog_print(2,6,DAT_0002a0c0 + 0x2a054,DAT_0002a0bc + 0x2a04c,DAT_0002a0b8 + 0x2a062,
                   (int)&DAT_0002a0b4 + DAT_0002a0b4,0x148,__pid);
      local_170 = 0xfffffffd;
    }
    else if ((local_180 == (char *)0x0) || (local_174 < 0)) {
      get_cmdline_name(__pid,auStack_124,0x100);
      __dlog_print(2,6,DAT_0002a0ac + 0x29fe4,DAT_0002a0a8 + 0x29fd8,DAT_0002a0a4 + 0x29fea,
                   DAT_0002a0a0 + 0x2a040,0x150,auStack_124,local_174);
      local_170 = 0xffffffea;
    }
    else {
      iVar1 = strcmp(local_180,(char *)(DAT_0002a06c + 0x29dfc));
      local_170 = 0;
      if (iVar1 != 0) {
        iVar1 = strcmp(local_17c,(char *)(DAT_0002a070 + 0x29e18));
        if (iVar1 == 0) {
          uVar3 = 1;
        }
        else {
          iVar1 = strcmp(local_17c,(char *)(DAT_0002a08c + 0x29f28));
          if (iVar1 == 0) {
            uVar3 = 2;
          }
          else {
            uVar3 = 1;
            __dlog_print(2,6,DAT_0002a09c + 0x29f80,DAT_0002a098 + 0x29f7c,DAT_0002a094 + 0x29f8a,
                         DAT_0002a090 + 0x29fdc,0x165,local_17c);
          }
        }
        iVar1 = strcmp(local_178,(char *)(DAT_0002a074 + 0x29e38));
        if (iVar1 == 0) {
          uVar3 = uVar3 | 4;
        }
        else {
          iVar1 = strcmp(local_178,(char *)(DAT_0002a078 + 0x29e54));
          if (iVar1 == 0) {
            uVar3 = uVar3 | 8;
          }
        }
        iVar1 = pm_get_lock_count(__pid);
        if (iVar1 == 0) {
          register_edbus_watch(param_2,4,DAT_0002a0b0 + 0x2a008);
        }
        local_170 = pm_lock_state(__pid,local_180,uVar3,local_174);
      }
    }
  }
  uVar2 = dbus_message_new_method_return(param_2);
  dbus_message_iter_init_append(uVar2,auStack_15c);
  dbus_message_iter_append_basic(auStack_15c,0x69,&local_170);
  if (local_24 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

