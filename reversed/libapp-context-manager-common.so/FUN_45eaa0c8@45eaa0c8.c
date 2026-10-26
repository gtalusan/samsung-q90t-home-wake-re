/* libapp-context-manager-common.so : FUN_45eaa0c8@45eaa0c8 */

bool FUN_45eaa0c8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = g_str_has_prefix(param_1,DAT_45eaa0f0 + 0x45eaa0d4,param_3,param_4,param_4);
  bVar1 = true;
  if (iVar2 != 1) {
    iVar2 = g_str_has_prefix(param_1,DAT_45eaa0f4 + 0x45eaa0e2);
    bVar1 = iVar2 == 1;
  }
  return bVar1;
}

