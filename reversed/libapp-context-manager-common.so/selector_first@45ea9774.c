/* libapp-context-manager-common.so : selector_first@45ea9774 */

undefined4 selector_first(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
  }
  return uVar1;
}

