/* deviced : sys_get_int@000165dc */

void sys_get_int(char *param_1,long *param_2)

{
  int __fd;
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  int *piVar4;
  char acStack_11c [256];
  int local_1c;
  
  piVar4 = *(int **)(DAT_00016694 + 0x165ec + DAT_00016698);
  local_1c = *piVar4;
  __fd = open(param_1,0);
  if (__fd != -1) {
    uVar1 = read(__fd,acStack_11c,0xff);
    if (uVar1 < 0xff) {
      uVar3 = 0;
      acStack_11c[uVar1] = '\0';
      close(__fd);
      lVar2 = strtol(acStack_11c,(char **)0x0,10);
      *param_2 = lVar2;
      goto LAB_0001665c;
    }
    close(__fd);
  }
  uVar3 = 0xfffffffb;
  *param_2 = -1;
LAB_0001665c:
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

