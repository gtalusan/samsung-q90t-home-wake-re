/* libapp-context-manager-common.so : util_get_uiapp_has_metadata_byappid@45e9cae8 */

void util_get_uiapp_has_metadata_byappid(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  
  piVar3 = *(int **)(DAT_45e9cc34 + 0x45e9caf6 + DAT_45e9cc38);
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_24 = *piVar3;
  if (param_1 == 0 || param_2 == 0) {
    iVar1 = -1;
    __dlog_print(0,6,DAT_45e9cc6c + 0x45e9cbf8,DAT_45e9cc68 + 0x45e9cbf6,DAT_45e9cc64 + 0x45e9cc1f,
                 DAT_45e9cc60 + 0x45e9d214,0x41a);
  }
  else {
    iVar1 = FUN_45e9ca6c(param_1,&local_28);
    if (iVar1 == 0) {
      iVar1 = pkgmgrinfo_appinfo_get_component_type(local_28,&local_30);
      if (iVar1 < 0) {
        __dlog_print(0,6,DAT_45e9cc5c + 0x45e9cbca,DAT_45e9cc58 + 0x45e9cbc8,
                     DAT_45e9cc54 + 0x45e9cbf5,DAT_45e9cc50 + 0x45e9d1ea,0x426);
      }
      iVar2 = DAT_45e9cc3c + 0x45e9cb42;
      *param_3 = 0;
      iVar2 = g_strcmp0(local_30,iVar2);
      if ((iVar2 == 0) &&
         (iVar1 = pkgmgrinfo_appinfo_get_metadata_value(local_28,param_2,&local_2c), iVar1 == 0)) {
        __dlog_print(0,4,DAT_45e9cc48 + 0x45e9cb96,DAT_45e9cc4c + 0x45e9cb98,
                     DAT_45e9cc44 + 0x45e9cbc1,DAT_45e9cc40 + 0x45e9d1b6,0x42d,param_1,param_2);
        *param_3 = 1;
      }
      pkgmgrinfo_appinfo_destroy_appinfo(local_28);
    }
    else {
      iVar1 = -1;
      __dlog_print(0,6,DAT_45e9cc7c + 0x45e9cc2a,DAT_45e9cc78 + 0x45e9cc28,DAT_45e9cc74 + 0x45e9cc4f
                   ,DAT_45e9cc70 + 0x45e9d242,0x420,param_1);
    }
  }
  if (local_24 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1);
  }
  return;
}

