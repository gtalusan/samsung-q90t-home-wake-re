/* libapp-context-manager-common.so : cmp_cb@45ea74e0 */

undefined4 cmp_cb(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (*param_1 == param_2) {
    uVar1 = 0;
  }
  return uVar1;
}

