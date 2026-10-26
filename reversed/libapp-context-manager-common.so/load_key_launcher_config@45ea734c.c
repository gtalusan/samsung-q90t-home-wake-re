/* libapp-context-manager-common.so : load_key_launcher_config@45ea734c */

void load_key_launcher_config(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int local_30;
  int local_2c;
  
  piVar9 = *(int **)(DAT_45ea7490 + 0x45ea735a + DAT_45ea7494);
  local_30 = 0;
  local_2c = *piVar9;
  iVar1 = g_dir_open(param_1,0,&local_30);
  if (iVar1 == 0 || local_30 != 0) {
    __dlog_print(0,5,DAT_45ea74c0 + 0x45ea745a,DAT_45ea74bc + 0x45ea7458,DAT_45ea74b8 + 0x45ea7483,
                 DAT_45ea74b4 + 0x45ea8386,0x6f7,param_1);
  }
  else {
    iVar2 = g_dir_read_name();
    if (iVar2 != 0) {
      iVar7 = DAT_45ea7498 + 0x45ea73d5;
      iVar6 = DAT_45ea749c + 0x45ea82e8;
      iVar8 = DAT_45ea74a0 + 0x45ea73aa;
      iVar10 = DAT_45ea74a4 + 0x45ea73ae;
      do {
        while ((iVar3 = g_strcmp0(iVar2,iVar8), iVar3 != 0 &&
               (iVar4 = g_strcmp0(iVar2,iVar10), iVar3 = DAT_45ea74ac, iVar4 != 0))) {
          uVar5 = g_strconcat(param_1,DAT_45ea74a8 + 0x45ea73e2,iVar2,0);
          __dlog_print(0,4,iVar3 + 0x45ea73f6,DAT_45ea74b0 + 0x45ea7402,iVar7,iVar6,0x704,uVar5);
          iVar2 = load_config_item(uVar5);
          if (iVar2 < 0) {
            __dlog_print(0,6,iVar3 + 0x45ea73f6,DAT_45ea74c4 + 0x45ea7484,iVar7,iVar6,0x707,uVar5);
          }
          g_free(uVar5);
          iVar2 = g_dir_read_name(iVar1);
          if (iVar2 == 0) goto LAB_45ea7428;
        }
        iVar2 = g_dir_read_name(iVar1);
      } while (iVar2 != 0);
    }
LAB_45ea7428:
    g_dir_close(iVar1);
  }
  if (local_2c != *piVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

