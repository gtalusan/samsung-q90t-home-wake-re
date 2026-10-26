/* libapp-context-manager-common.so : task_to_prio@45e9ec78 */

undefined4 task_to_prio(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = g_strcmp0(param_1,DAT_45e9ecc8 + 0x45e9ec86,param_3,param_4,param_4);
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = g_strcmp0(param_1,DAT_45e9eccc + 0x45e9ec98);
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = g_strcmp0(param_1,DAT_45e9ecd0 + 0x45e9eca8);
  if (iVar1 == 0) {
    return 4;
  }
  iVar1 = g_strcmp0(param_1,DAT_45e9ecd4 + 0x45e9ecb8);
  uVar2 = 0xffffffff;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  return uVar2;
}

