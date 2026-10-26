/* libapp-context-manager-common.so : event_filter_to_target@45ea95c0 */

undefined4
event_filter_to_target(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = g_strcmp0(param_1,DAT_45ea9600 + 0x45ea95ce,param_3,param_4,param_4);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = g_strcmp0(param_1,DAT_45ea9604 + 0x45ea95de);
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = g_strcmp0(param_1,DAT_45ea9608 + 0x45ea95f0);
  uVar2 = 0xffffffff;
  if (iVar1 == 0) {
    uVar2 = 3;
  }
  return uVar2;
}

