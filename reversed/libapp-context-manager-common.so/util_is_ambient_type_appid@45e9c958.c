/* libapp-context-manager-common.so : util_is_ambient_type_appid@45e9c958 */

bool util_is_ambient_type_appid
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = g_strcmp0(param_1,DAT_45e9c98c + 0x45e9c964,param_3,param_4,param_4);
  if ((iVar1 == 0) || (iVar1 = g_strcmp0(param_1,DAT_45e9c990 + 0x45e9c974), iVar1 == 0)) {
    return true;
  }
  iVar1 = g_strcmp0(param_1,DAT_45e9c994 + 0x45e9c982);
  return iVar1 == 0;
}

