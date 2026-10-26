/* deviced : get_cmdline_name@00016498 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void get_cmdline_name(undefined4 param_1,char *param_2,uint param_3)

{
  int __fd;
  char *pcVar1;
  size_t sVar2;
  int *piVar3;
  undefined4 uVar4;
  char *__s;
  int *piVar5;
  char acStack_1028 [4096];
  undefined1 local_28;
  int local_24;
  
  __s = acStack_1028;
  piVar5 = *(int **)(DAT_000165d0 + 0x164b8 + DAT_000165d4);
  local_24 = *piVar5;
  __snprintf_chk(acStack_1028,0x1001,1,0x1001,DAT_000165d8 + 0x164ec,param_1);
  __fd = open(acStack_1028,0);
  if (__fd < 0) {
    piVar3 = __errno_location();
    uVar4 = 0xffffffff;
    *piVar3 = 3;
  }
  else {
    read(__fd,acStack_1028,0x1000);
    close(__fd);
    local_28 = 0;
    pcVar1 = strrchr(acStack_1028,0x2f);
    if (pcVar1 != (char *)0x0) {
      __s = pcVar1 + 1;
    }
    sVar2 = strlen(__s);
    if (param_3 < sVar2 + 1) {
      piVar3 = __errno_location();
      uVar4 = 0xffffffff;
      *piVar3 = 0x4b;
    }
    else {
      strncpy(param_2,__s,param_3 - 1);
      uVar4 = 0;
      param_2[param_3 - 1] = '\0';
    }
  }
  if (local_24 != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

