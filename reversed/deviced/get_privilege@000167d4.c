/* deviced : get_privilege@000167d4 */

void get_privilege(undefined4 param_1,char *param_2,size_t param_3)

{
  FILE *__stream;
  size_t sVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  char acStack_112c [256];
  char acStack_102c [4096];
  int local_2c;
  
  piVar4 = *(int **)(DAT_000168d8 + 0x167e8 + DAT_000168dc);
  local_2c = *piVar4;
  __snprintf_chk(acStack_102c,0x1000,1,0x1000,DAT_000168e0 + 0x16818,param_1);
  __stream = fopen(acStack_102c,(char *)(DAT_000168e4 + 0x16844));
  if (__stream == (FILE *)0x0) {
    piVar3 = __errno_location();
    iVar2 = -*piVar3;
  }
  else {
    sVar1 = fread(acStack_112c,1,0xfe,__stream);
    fclose(__stream);
    if (sVar1 == 0) {
      iVar2 = -2;
    }
    else {
      acStack_112c[sVar1] = '\0';
      snprintf(param_2,param_3,(char *)(DAT_000168e8 + 0x1689c),acStack_112c);
      iVar2 = 0;
    }
  }
  if (local_2c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}

