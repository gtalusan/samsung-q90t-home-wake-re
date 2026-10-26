/* deviced : get_extcon_init_state@0001d4c4 */

void get_extcon_init_state(void)

{
  DIR *__dirp;
  dirent *pdVar1;
  int iVar2;
  int *piVar3;
  char *__name;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  char acStack_12c [256];
  int local_2c;
  
  piVar9 = *(int **)(DAT_0001d6e4 + 0x1d4d4 + DAT_0001d6e8);
  local_2c = *piVar9;
  __name = (char *)(DAT_0001d6ec + 0x1d4f0);
  __dirp = opendir(__name);
  if (__dirp == (DIR *)0x0) {
    piVar3 = __errno_location();
    iVar5 = -*piVar3;
    __dlog_print(2,6,DAT_0001d72c + 0x1d6b8,DAT_0001d728 + 0x1d6b4,DAT_0001d724 + 0x1d6dd,
                 (int)&DAT_0001d710 + DAT_0001d720,0x17d,__name,iVar5);
LAB_0001d630:
    if (local_2c != *piVar9) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(iVar5);
    }
    return;
  }
  iVar6 = DAT_0001d6f0 + 0x1d580;
  iVar5 = DAT_0001d6f4 + 0x1d549;
  do {
    iVar8 = DAT_0001d6f8 + 0x1d528;
    iVar7 = DAT_0001d6fc + 0x1d52c;
    do {
      do {
        pdVar1 = readdir(__dirp);
        if (pdVar1 == (dirent *)0x0) {
          closedir(__dirp);
          iVar5 = 0;
          goto LAB_0001d630;
        }
      } while (pdVar1->d_name[0] == '.');
      __snprintf_chk(acStack_12c,0x100,1,0x100,iVar7,iVar8,pdVar1->d_name);
      iVar4 = DAT_0001d700 + 0x1d590;
      __dlog_print(2,6,iVar4,DAT_0001d704 + 0x1d5a4,iVar5,iVar6,0x18b,acStack_12c);
      iVar2 = access(acStack_12c,0);
    } while (iVar2 != 0);
    iVar7 = config_parse(acStack_12c,DAT_0001d708 + 0x1d5cc);
    if (iVar7 < 0) {
      __dlog_print(2,6,iVar4,DAT_0001d71c + 0x1d680,iVar5,iVar6,0x195,acStack_12c,iVar7);
    }
    __dlog_print(2,6,DAT_0001d714 + 0x1d614,DAT_0001d718 + 0x1d61c,DAT_0001d710 + 0x1d629,
                 DAT_0001d70c + 0x1d660,0x198,acStack_12c);
  } while( true );
}

