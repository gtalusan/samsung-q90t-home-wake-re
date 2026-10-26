/* deviced : get_name_from_pid@000162a0 */

void get_name_from_pid(undefined4 param_1,char *param_2,size_t param_3)

{
  FILE *__stream;
  size_t sVar1;
  int *piVar2;
  char *pcVar3;
  int *piVar4;
  char acStack_124 [256];
  int local_24;
  
  piVar4 = *(int **)(DAT_000163f0 + 0x162b0 + DAT_000163f4);
  local_24 = *piVar4;
  memset(acStack_124,0,0xff);
  __snprintf_chk(acStack_124,0xff,1,0xff,DAT_000163f8 + 0x162fc,param_1);
  __stream = fopen(acStack_124,(char *)(DAT_000163fc + 0x16318));
  if (__stream == (FILE *)0x0) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    __dlog_print(2,6,DAT_00016410 + 0x163e0,DAT_0001640c + 0x163dc,DAT_00016408 + 0x163eb,
                 DAT_00016404 + 0x163c0,0x4b,acStack_124,pcVar3);
  }
  else {
    sVar1 = fread(acStack_124,1,0xfe,__stream);
    acStack_124[sVar1] = '\0';
    fclose(__stream);
    piVar2 = __errno_location();
  }
  snprintf(param_2,param_3,(char *)(DAT_00016400 + 0x1636c),acStack_124);
  if (local_24 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(-*piVar2);
  }
  return;
}

