/* libapp-context-manager-common.so : util_is_portrait_pig_geometry@45e9c1b0 */

undefined4 util_is_portrait_pig_geometry(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  if (param_1 == 600 && param_2 == 0) {
    if (param_3 == 0x260 && param_4 == 0x438) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

