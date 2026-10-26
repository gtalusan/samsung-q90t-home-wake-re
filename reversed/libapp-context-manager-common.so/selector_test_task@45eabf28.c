/* libapp-context-manager-common.so : selector_test_task@45eabf28 */

undefined4 selector_test_task(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((param_1 == 0 || param_2 == 0) || (*(int *)(param_1 + 0x18) == 0)) {
    return 0xffffffff;
  }
  uVar1 = test_task(param_1,param_2,0,param_3,param_4);
  return uVar1;
}

