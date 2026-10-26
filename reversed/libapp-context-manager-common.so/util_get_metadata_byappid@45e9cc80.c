/* libapp-context-manager-common.so : util_get_metadata_byappid@45e9cc80 */

void util_get_metadata_byappid(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  
  piVar3 = *(int **)(DAT_45e9cd44 + 0x45e9cc8e + DAT_45e9cd48);
  local_28 = 0;
  local_2c = 0;
  local_24 = *piVar3;
  iVar1 = FUN_45e9ca6c(param_1,&local_28);
  if (iVar1 == 0) {
    iVar1 = pkgmgrinfo_appinfo_get_metadata_value(local_28,param_2,&local_2c);
    if (iVar1 == 0) {
      __dlog_print(0,4,DAT_45e9cd54 + 0x45e9cd04,DAT_45e9cd58 + 0x45e9cd0a,DAT_45e9cd50 + 0x45e9cd2f
                   ,DAT_45e9cd4c + 0x45e9d344,0x409,param_1,param_2,local_2c);
    }
    uVar2 = g_strdup(local_2c);
    *param_3 = uVar2;
    pkgmgrinfo_appinfo_destroy_appinfo(local_28);
  }
  else {
    iVar1 = -1;
    __dlog_print(0,6,DAT_45e9cd68 + 0x45e9cd3c,DAT_45e9cd64 + 0x45e9cd3a,DAT_45e9cd60 + 0x45e9cd5f,
                 DAT_45e9cd5c + 0x45e9d378,0x403,param_1);
  }
  if (local_24 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1);
  }
  return;
}

