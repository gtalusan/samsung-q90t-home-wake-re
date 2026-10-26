/* libapp-context-manager-common.so : FUN_45e9ca6c@45e9ca6c */

void FUN_45e9ca6c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_45e9cad0;
  if (*(uint *)(DAT_45e9cad0 + 0x45e9cbe6) < 5000) {
    uVar2 = util_get_default_uid();
    *(undefined4 *)(iVar1 + 0x45e9cbe6) = uVar2;
  }
  __dlog_print(0,3,DAT_45e9cae0 + 0x45e9cab6,DAT_45e9cadc + 0x45e9cab4,DAT_45e9cad8 + 0x45e9cadf,
               DAT_45e9cad4 + 0x45e9d0bc,0x2dd,param_1);
  pkgmgrinfo_appinfo_get_usr_appinfo(param_1,*(undefined4 *)(DAT_45e9cae4 + 0x45e9cc2e),param_2);
  return;
}

