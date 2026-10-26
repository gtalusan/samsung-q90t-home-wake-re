/* libapp-context-manager-common.so : __proc_get_cmdline_bypid@45e9dda4 */

void __proc_get_cmdline_bypid(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  ssize_t sVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;
  char *__file;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  char acStack_20025 [9];
  char acStack_2001c [2];
  char acStack_2001a [26];
  char acStack_20000 [9];
  char acStack_1fff7 [131035];
  
  piVar9 = *(int **)(DAT_45e9def4 + 0x45e9ddba + DAT_45e9def8);
  __file = acStack_20025 + 1;
  iVar8 = *piVar9;
  __snprintf_chk(__file,0x20000,1,0x20000,DAT_45e9defc + 0x45e9ddca,param_1);
  iVar2 = open(__file,0);
  if (-1 < iVar2) {
    sVar3 = read(iVar2,__file,0x1ffff);
    if (sVar3 < 1) {
      uVar7 = 0;
      close(iVar2);
      goto LAB_45e9de58;
    }
    __file[sVar3] = '\0';
    close(iVar2);
    iVar2 = strncmp(__file,(char *)(DAT_45e9df00 + 0x45e9de24),7);
    if (iVar2 == 0) {
      pcVar6 = acStack_2001c;
    }
    else {
      pcVar6 = (char *)tzplatform_mkpath(0,DAT_45e9df04 + 0x45e9de7e);
      iVar2 = strncmp(__file,pcVar6,0x33);
      if (iVar2 == 0) {
        pcVar5 = __file;
        do {
          do {
            pcVar6 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar6;
          } while (cVar1 != '\0');
        } while (*pcVar6 == '-');
      }
      else {
        iVar2 = strncmp(__file,(char *)(DAT_45e9df08 + 0x45e9deac),9);
        if (iVar2 == 0) {
          pcVar6 = (char *)tzplatform_mkpath(7,DAT_45e9df0c + 0x45e9debc);
          iVar2 = strncmp(acStack_2001a,pcVar6,0x19);
          if (iVar2 == 0) {
            iVar2 = strncmp(acStack_20000,(char *)(DAT_45e9df10 + 0x45e9deda),8);
            pcVar6 = acStack_1fff7;
            if (iVar2 != 0) {
              pcVar6 = __file;
            }
            goto LAB_45e9de2e;
          }
        }
        pcVar6 = __file;
      }
    }
LAB_45e9de2e:
    if (pcVar6 < __file + sVar3 + -1) {
      uVar7 = 0;
      do {
        uVar4 = g_strdup(pcVar6);
        uVar7 = g_list_append(uVar7,uVar4);
        cVar1 = *pcVar6;
        while (cVar1 != '\0') {
          pcVar6 = pcVar6 + 1;
          cVar1 = *pcVar6;
        }
        pcVar6 = pcVar6 + 1;
      } while (pcVar6 < __file + sVar3 + -1);
      goto LAB_45e9de58;
    }
  }
  uVar7 = 0;
LAB_45e9de58:
  if (iVar8 != *piVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

