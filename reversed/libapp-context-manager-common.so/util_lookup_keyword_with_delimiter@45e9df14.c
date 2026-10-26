/* libapp-context-manager-common.so : util_lookup_keyword_with_delimiter@45e9df14 */

void util_lookup_keyword_with_delimiter(char *param_1,undefined4 param_2,char *param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  char *local_20;
  int local_1c;
  
  piVar4 = *(int **)(DAT_45e9df7c + 0x45e9df28 + DAT_45e9df80);
  local_20 = (char *)0x0;
  local_1c = *piVar4;
  pcVar1 = __strtok_r(param_1,param_3,&local_20);
  do {
    if (pcVar1 == (char *)0x0) {
      uVar3 = 0;
LAB_45e9df66:
      if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar3);
      }
      return;
    }
    iVar2 = g_strcmp0(pcVar1,param_2);
    if (iVar2 == 0) {
      uVar3 = 1;
      goto LAB_45e9df66;
    }
    pcVar1 = __strtok_r((char *)0x0,param_3,&local_20);
  } while( true );
}

