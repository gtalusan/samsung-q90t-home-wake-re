/* libapp-context-manager-common.so : FUN_45e99520@45e99520 */

void FUN_45e99520(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_20;
  int local_1c;
  
  piVar3 = *(int **)(DAT_45e99570 + 0x45e99530 + DAT_45e99574);
  local_20 = 0;
  local_1c = *piVar3;
  iVar2 = pkgmgrinfo_appinfo_get_metadata_value(param_1,param_2,&local_20);
  if (iVar2 == 0) {
    iVar2 = g_strcmp0(local_20,param_3);
    bVar1 = iVar2 == 0;
  }
  else {
    bVar1 = false;
  }
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}

