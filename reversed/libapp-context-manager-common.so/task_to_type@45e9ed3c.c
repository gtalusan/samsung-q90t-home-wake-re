/* libapp-context-manager-common.so : task_to_type@45e9ed3c */

undefined4 task_to_type(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = g_strcmp0(param_1,DAT_45e9eddc + 0x45e9ed4a,param_3,param_4,param_4);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = g_strcmp0(param_1,DAT_45e9ede0 + 0x45e9ed5a);
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = g_strcmp0(param_1,DAT_45e9ede4 + 0x45e9ed6c);
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = g_strcmp0(param_1,DAT_45e9ede8 + 0x45e9ed7c);
  if (iVar1 == 0) {
    return 4;
  }
  iVar1 = g_strcmp0(param_1,DAT_45e9edec + 0x45e9ed8c);
  if (iVar1 == 0) {
    return 5;
  }
  iVar1 = g_strcmp0(param_1,DAT_45e9edf0 + 0x45e9ed9c);
  if (iVar1 == 0) {
    return 6;
  }
  iVar1 = g_strcmp0(param_1,DAT_45e9edf4 + 0x45e9edac);
  if (iVar1 == 0) {
    return 7;
  }
  iVar1 = g_strcmp0(param_1,DAT_45e9edf8 + 0x45e9edbc);
  if (iVar1 == 0) {
    return 8;
  }
  iVar1 = g_strcmp0(param_1,DAT_45e9edfc + 0x45e9edcc);
  uVar2 = 0xffffffff;
  if (iVar1 == 0) {
    uVar2 = 9;
  }
  return uVar2;
}

