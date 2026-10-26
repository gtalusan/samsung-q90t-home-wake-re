/* deviced : ports_from_syspath_new@0003670c */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void ports_from_syspath_new(char *param_1,int param_2)

{
  size_t __n;
  size_t sVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  char *__s;
  int iVar7;
  int iVar8;
  int iVar9;
  char acStack_202c [4096];
  char acStack_102c [4096];
  int local_2c;
  
  piVar5 = *(int **)(DAT_00036950 + 0x36724 + DAT_00036954);
  local_2c = *piVar5;
  if (param_2 != 0 && param_1 != (char *)0x0) {
    __dlog_print(param_2 == 0 || param_1 == (char *)0x0,3,DAT_00036964 + 0x367a4,
                 DAT_00036960 + 0x367a0,DAT_0003695c + 0x367ad,DAT_00036958 + 0x367e0,0x89,param_1);
    __snprintf_chk(acStack_202c,0x1000,1,0x1000,DAT_00036968 + 0x367c4,param_2);
    __n = strnlen(acStack_202c,0x1000);
    iVar9 = DAT_00036974 + 0x3680c;
    iVar7 = DAT_00036970 + 0x3687c;
    iVar8 = DAT_00036978 + 0x36814;
    snprintf(acStack_102c,0x1000,(char *)(DAT_0003696c + 0x367fc),param_1);
    sVar1 = strnlen(param_1,0x1000);
    iVar6 = DAT_0003697c + 0x36881;
    while (pcVar3 = strrchr(acStack_102c,0x2f), pcVar3 != (char *)0x0) {
      __dlog_print(0,3,iVar8,iVar9,iVar6,iVar7,0x95,pcVar3);
      iVar2 = strncmp(pcVar3,acStack_202c,__n);
      if ((iVar2 == 0) && (__s = pcVar3 + __n, __s < acStack_102c + sVar1)) {
        pcVar3 = strchr(__s,0x3a);
        if (pcVar3 != (char *)0x0) {
          *pcVar3 = '\0';
        }
        uVar4 = __strdup(__s);
        goto LAB_000368d8;
      }
      *pcVar3 = '\0';
    }
  }
  uVar4 = 0;
LAB_000368d8:
  if (local_2c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

