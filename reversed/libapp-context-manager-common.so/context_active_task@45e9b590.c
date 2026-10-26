/* libapp-context-manager-common.so : context_active_task@45e9b590 */

undefined4 context_active_task(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x2c);
  }
  return uVar1;
}

