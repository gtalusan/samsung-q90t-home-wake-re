/* tvctx-manager : FUN_0001b6ac@0001b6ac */

void FUN_0001b6ac(char *param_1)

{
  int iVar1;
  __pid_t _Var2;
  long lVar3;
  int __fd;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  int local_24;
  
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_24 = __stack_chk_guard;
  local_44 = 0;
  local_34 = 0;
  local_2c = 0;
  uStack_30 = uStack_40;
  uStack_28 = uStack_40;
  iVar1 = pipe2(&DAT_0003b564,0x800);
  if (iVar1 < 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > Failed to create pipe",DAT_0001b824,DAT_0001b820,
                 0x672);
  }
  else {
    signal(0x11,(__sighandler_t)0x1);
    _Var2 = fork();
    if (_Var2 == -1) {
      __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > Failed to fork: app-boot-manager resume",
                   DAT_0001b824,DAT_0001b820,0x683);
    }
    else {
      if (_Var2 == 0) {
        __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > child process",DAT_0001b824,DAT_0001b820,
                     0x67b);
        iVar1 = DAT_0003b564;
        lVar3 = sysconf(4);
        if (3 < lVar3) {
          __fd = 3;
          do {
            if (iVar1 != __fd) {
              close(__fd);
            }
            __fd = __fd + 1;
          } while (lVar3 != __fd);
        }
        __snprintf_chk(&local_44,0x20,1,0x20,"%d",DAT_0003b564);
        execl(param_1,param_1,"resume",&local_44,0);
        close(DAT_0003b564);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > parent process : %d",DAT_0001b824,DAT_0001b820,
                   0x686,_Var2);
    }
    close(DAT_0003b564);
  }
  if (local_24 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

