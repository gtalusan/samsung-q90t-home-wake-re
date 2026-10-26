/* libapp-context-manager-common.so : util_get_apptype_byappid@45e9d798 */

void util_get_apptype_byappid(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  
  piVar4 = *(int **)(DAT_45e9d958 + 0x45e9d7ac + DAT_45e9d95c);
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_24 = *piVar4;
  if (param_1 == 0 || param_2 == (undefined4 *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar1 = FUN_45e9ca6c(param_1,&local_28);
    if (iVar1 == 0) {
      iVar1 = pkgmgrinfo_appinfo_get_component_type(local_28,&local_30);
      if (iVar1 < 0) {
        __dlog_print(0,6,DAT_45e9d9a8 + 0x45e9d91a,DAT_45e9d9a4 + 0x45e9d918,
                     DAT_45e9d9a0 + 0x45e9d945,DAT_45e9d99c + 0x45e9e02e,0x2f4);
      }
      iVar1 = g_strcmp0(local_30,DAT_45e9d960 + 0x45e9d7f6);
      if (iVar1 == 0) {
        uVar3 = g_strdup(local_30);
        *param_2 = uVar3;
        pkgmgrinfo_appinfo_destroy_appinfo(local_28);
        uVar3 = 0;
      }
      else {
        iVar1 = pkgmgrinfo_appinfo_get_apptype(local_28,&local_2c);
        if (iVar1 == 0) {
          uVar3 = 0;
          if (local_2c != 0) {
            iVar1 = g_strcmp0(local_2c,DAT_45e9d964 + 0x45e9d812);
            if ((((iVar1 != 0) &&
                 (iVar1 = g_strcmp0(local_2c,DAT_45e9d978 + 0x45e9d886), iVar1 != 0)) &&
                (iVar1 = g_strcmp0(local_2c,DAT_45e9d97c + 0x45e9d894), iVar1 != 0)) &&
               (((iVar1 = g_strcmp0(local_2c,DAT_45e9d980 + 0x45e9d8a2), iVar1 != 0 &&
                 (iVar1 = g_strcmp0(local_2c,DAT_45e9d984 + 0x45e9d8b0), iVar1 != 0)) &&
                (iVar1 = g_strcmp0(local_2c,DAT_45e9d988 + 0x45e9d8be), iVar1 != 0)))) {
              __dlog_print(0,3,DAT_45e9d994 + 0x45e9d8e6,DAT_45e9d998 + 0x45e9d8ea,
                           DAT_45e9d98c + 0x45e9d911,DAT_45e9d990 + 0x45e9e008,0x307,param_1,
                           local_2c);
            }
            if (local_2c != 0) {
              uVar2 = g_strdup();
              *param_2 = uVar2;
            }
          }
        }
        else {
          uVar3 = 0xffffffff;
          __dlog_print(0,6,DAT_45e9d974 + 0x45e9d87a,DAT_45e9d970 + 0x45e9d878,
                       DAT_45e9d96c + 0x45e9d89f,DAT_45e9d968 + 0x45e9df88,0x2fe,param_1);
        }
        pkgmgrinfo_appinfo_destroy_appinfo(local_28);
      }
    }
    else {
      uVar3 = 0xffffffff;
      __dlog_print(0,6,DAT_45e9d9b8 + 0x45e9d950,DAT_45e9d9b4 + 0x45e9d94e,DAT_45e9d9b0 + 0x45e9d975
                   ,DAT_45e9d9ac + 0x45e9e05e,0x2ee,param_1);
    }
  }
  if (local_24 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

