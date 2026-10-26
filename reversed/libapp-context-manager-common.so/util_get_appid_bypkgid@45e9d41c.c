/* libapp-context-manager-common.so : util_get_appid_bypkgid@45e9d41c */

void util_get_appid_bypkgid(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_24;
  int local_20;
  int local_1c;
  
  iVar1 = DAT_45e9d4ac;
  piVar3 = *(int **)(DAT_45e9d4a4 + 0x45e9d428 + DAT_45e9d4a8);
  local_1c = *piVar3;
  local_20 = 0;
  if (*(uint *)(DAT_45e9d4ac + 0x45e9d59c) < 5000) {
    uVar2 = util_get_default_uid();
    *(undefined4 *)(iVar1 + 0x45e9d59c) = uVar2;
    iVar1 = pkgmgrinfo_pkginfo_get_usr_pkginfo(param_1,uVar2,&local_24);
  }
  else {
    iVar1 = pkgmgrinfo_pkginfo_get_usr_pkginfo
                      (param_1,*(uint *)(DAT_45e9d4ac + 0x45e9d59c),&local_24);
  }
  if (iVar1 == 0) {
    iVar1 = pkgmgrinfo_pkginfo_get_mainappid(local_24,&local_20);
    uVar2 = 0;
    if ((iVar1 == 0) && (uVar2 = 0, local_20 != 0)) {
      uVar2 = g_strdup(local_20);
    }
    pkgmgrinfo_pkginfo_destroy_pkginfo(local_24);
  }
  else {
    uVar2 = 0;
  }
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

