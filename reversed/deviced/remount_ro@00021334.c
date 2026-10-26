/* deviced : remount_ro@00021334 */

void remount_ro(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  char *__needle;
  char acStack_3ac [640];
  undefined1 auStack_12c [256];
  int local_2c;
  
  piVar5 = *(int **)(DAT_00021498 + 0x21344 + DAT_0002149c);
  local_2c = *piVar5;
  iVar1 = setmntent(DAT_000214a4 + 0x21368,DAT_000214a0 + 0x2135c);
  if (iVar1 != 0) {
    iVar6 = 0;
    pcVar7 = (char *)(DAT_000214a8 + 0x21390);
    __needle = (char *)(DAT_000214ac + 0x21394);
    while (iVar2 = getmntent(iVar1), iVar2 != 0) {
      while (((iVar6 < 10 && (iVar3 = strcmp(*(char **)(iVar2 + 8),pcVar7), iVar3 == 0)) &&
             (pcVar4 = strstr(*(char **)(iVar2 + 0xc),__needle), pcVar4 != (char *)0x0))) {
        iVar3 = iVar6 * 0x40;
        iVar6 = iVar6 + 1;
        memset(acStack_3ac + iVar3,0,0x40);
        strncpy(acStack_3ac + iVar3,*(char **)(iVar2 + 4),0x3f);
        iVar2 = getmntent(iVar1);
        if (iVar2 == 0) goto LAB_0002140c;
      }
    }
LAB_0002140c:
    endmntent(iVar1);
    if (iVar6 != 0) {
      iVar6 = iVar6 + -1;
      iVar1 = DAT_000214b0 + 0x21434;
      pcVar7 = acStack_3ac + iVar6 * 0x40;
      while( true ) {
        __snprintf_chk(auStack_12c,0x100,1,0x100,iVar1,pcVar7);
        sleep(1);
        umount2(pcVar7,2);
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar7 = pcVar7 + -0x40;
      }
    }
  }
  if (local_2c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

