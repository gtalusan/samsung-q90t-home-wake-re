/* libapp-context-manager-common.so : util_get_appbooting_supported_webapp_byappid@45e9d4b0 */

void util_get_appbooting_supported_webapp_byappid(undefined4 param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  char local_31;
  int local_30;
  int local_2c;
  
  piVar5 = *(int **)(DAT_45e9d700 + 0x45e9d4b8 + DAT_45e9d704);
  iVar6 = 1;
  local_31 = '\x01';
  local_2c = *piVar5;
  local_30 = 0;
  iVar2 = system_info_get_value_bool(0x11e,&local_31);
  if (iVar2 < 0) {
    uVar4 = 0xffffffff;
    __dlog_print(0,6,DAT_45e9d780 + 0x45e9d6c6,DAT_45e9d784 + 0x45e9d6c2,DAT_45e9d778 + 0x45e9d6e9,
                 DAT_45e9d77c + 0x45e9ddb4,0x32f,iVar2);
    goto LAB_45e9d4ee;
  }
  if (local_31 == '\0') {
    *param_2 = 0;
    uVar4 = 0;
    goto LAB_45e9d4ee;
  }
  iVar2 = pkgmgrinfo_appinfo_get_appinfo(param_1,&local_30);
  if (iVar2 != 0) {
    uVar4 = 0xffffffff;
    __dlog_print(0,6,DAT_45e9d774 + 0x45e9d698,DAT_45e9d770 + 0x45e9d696,DAT_45e9d76c + 0x45e9d6bd,
                 DAT_45e9d768 + 0x45e9dd76,0x339,iVar2);
    goto LAB_45e9d4ee;
  }
  if (local_30 == 0) {
    uVar4 = 0xffffffff;
    __dlog_print(0,6,DAT_45e9d794 + 0x45e9d6f6,DAT_45e9d790 + 0x45e9d6f4,DAT_45e9d78c + 0x45e9d71f,
                 DAT_45e9d788 + 0x45e9ddd8,0x33d);
    goto LAB_45e9d4ee;
  }
  iVar7 = DAT_45e9d708 + 0x45e9d528;
  iVar2 = FUN_45e99520(local_30,DAT_45e9d70c + 0x45e9d52a,iVar7);
  if (iVar2 == 0) {
    iVar3 = DAT_45e9d718 + 0x45e9d542;
    bVar1 = FUN_45e99520(local_30,DAT_45e9d714 + 0x45e9d53e,DAT_45e9d710 + 0x45e9d53c);
    bVar1 = bVar1 ^ 1;
    iVar2 = FUN_45e99520(local_30,iVar3,iVar7);
    if (iVar2 == 0) {
      iVar6 = FUN_45e99520(local_30,iVar3,DAT_45e9d764 + 0x45e9d662);
      iVar2 = iVar6;
    }
    iVar7 = FUN_45e99520(local_30,DAT_45e9d720 + 0x45e9d56a,DAT_45e9d71c + 0x45e9d566);
    if (iVar7 == 0) {
      __dlog_print(0,4,DAT_45e9d72c + 0x45e9d594,DAT_45e9d730 + 0x45e9d59c,DAT_45e9d728 + 0x45e9d5c9
                   ,DAT_45e9d724 + 0x45e9dc7a,0x352,bVar1,iVar6,0);
      if ((bVar1 != 0) && (iVar2 == 0)) {
LAB_45e9d626:
        __dlog_print(0,4,DAT_45e9d760 + 0x45e9d650,DAT_45e9d75c + 0x45e9d64c,
                     DAT_45e9d758 + 0x45e9d679,DAT_45e9d754 + 0x45e9dd30,0x35c,param_1,iVar6,iVar7);
        *param_2 = 1;
        goto LAB_45e9d5b0;
      }
    }
    else {
      iVar7 = 1;
      __dlog_print(0,4,DAT_45e9d74c + 0x45e9d61e,DAT_45e9d750 + 0x45e9d612,DAT_45e9d744 + 0x45e9d639
                   ,DAT_45e9d748 + 0x45e9dd00,0x352,bVar1,iVar6,1);
      if (bVar1 != 0) goto LAB_45e9d626;
    }
    *param_2 = 0;
  }
  else {
    __dlog_print(0,4,DAT_45e9d740 + 0x45e9d5e2,DAT_45e9d73c + 0x45e9d5e0,DAT_45e9d738 + 0x45e9d60b,
                 DAT_45e9d734 + 0x45e9dcc2,0x345,param_1);
    *param_2 = 0;
  }
LAB_45e9d5b0:
  pkgmgrinfo_appinfo_destroy_appinfo(local_30);
  uVar4 = 0;
LAB_45e9d4ee:
  if (local_2c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

