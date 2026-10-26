/* libapp-context-manager-common.so : util_db_open@45e9c6c8 */

void util_db_open(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_7c;
  stat sStack_78;
  int local_1c;
  
  piVar3 = *(int **)(DAT_45e9c7ec + 0x45e9c6d0 + DAT_45e9c7f0);
  local_7c = 0;
  local_1c = *piVar3;
  if (param_1 == (char *)0x0) {
    __dlog_print(0,6,DAT_45e9c820 + 0x45e9c7b0,DAT_45e9c81c + 0x45e9c7ae,DAT_45e9c818 + 0x45e9c7dd,
                 DAT_45e9c814 + 0x45e9cd56,0x3e3);
    uVar2 = 0;
  }
  else {
    iVar1 = __lxstat(3,param_1,&sStack_78);
    if (iVar1 == -1) {
      __dlog_print(0,6,DAT_45e9c830 + 0x45e9c7e0,DAT_45e9c82c + 0x45e9c7de,DAT_45e9c828 + 0x45e9c807
                   ,DAT_45e9c824 + 0x45e9cd80,1000,param_1);
      uVar2 = 0;
    }
    else if ((sStack_78.st_mode & 0xf000) == 0xa000) {
      __dlog_print(0,6,DAT_45e9c810 + 0x45e9c786,DAT_45e9c80c + 0x45e9c784,DAT_45e9c808 + 0x45e9c7ad
                   ,DAT_45e9c804 + 0x45e9cd26,0x3ed,param_1);
      uVar2 = 0;
    }
    else {
      iVar1 = db_util_open_with_options(param_1,&local_7c,1,0);
      if (iVar1 == 0) {
        uVar2 = local_7c;
      }
      else {
        uVar2 = sqlite3_errmsg(local_7c);
        __dlog_print(0,6,DAT_45e9c800 + 0x45e9c74e,DAT_45e9c7fc + 0x45e9c74c,
                     DAT_45e9c7f8 + 0x45e9c773,DAT_45e9c7f4 + 0x45e9ccec,0x3f3,param_1,uVar2);
        db_util_close(local_7c);
        uVar2 = 0;
      }
    }
  }
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

