/* libapp-context-manager-common.so : FUN_45e99dc8@45e99dc8 */

int FUN_45e99dc8(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    bundle_iterate(param_1,DAT_45e99df8 + 0x45e99dd8,0);
    iVar1 = bundle_dup(param_1);
    if (iVar1 != 0) {
      bundle_iterate(param_1,DAT_45e99dfc + 0x45e99dee,iVar1);
    }
  }
  return iVar1;
}

