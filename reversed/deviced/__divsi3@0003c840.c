/* deviced : __divsi3@0003c840 */

int __divsi3(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  if (param_2 != 0) {
    return param_1 / param_2;
  }
  bVar2 = param_1 < 0;
  if (0 < param_1) {
    param_1 = 0x7fffffff;
  }
  if (bVar2) {
    param_1 = -0x80000000;
  }
  iVar1 = __aeabi_ldiv0(param_1);
  return iVar1;
}

