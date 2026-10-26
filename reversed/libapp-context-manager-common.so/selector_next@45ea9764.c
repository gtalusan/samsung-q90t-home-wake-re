/* libapp-context-manager-common.so : selector_next@45ea9764 */

undefined4 selector_next(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
  }
  return uVar1;
}

