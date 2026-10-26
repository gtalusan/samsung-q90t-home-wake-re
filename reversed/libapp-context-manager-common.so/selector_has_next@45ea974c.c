/* libapp-context-manager-common.so : selector_has_next@45ea974c */

undefined4 selector_has_next(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (uVar1 = 0, *(int *)(param_1 + 0x1c) != 0)) {
    uVar1 = 1;
  }
  return uVar1;
}

