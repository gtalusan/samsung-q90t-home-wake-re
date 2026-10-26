/* libapp-context-manager-common.so : event_filter_to_signal@45ea9448 */

undefined4
event_filter_to_signal(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = g_strcmp0(param_1,DAT_45ea9538 + 0x45ea9456,param_3,param_4,param_4);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = g_strcmp0(param_1,DAT_45ea953c + 0x45ea9466);
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = g_strcmp0(param_1,DAT_45ea9540 + 0x45ea9478);
  if (iVar1 == 0) {
    return 4;
  }
  iVar1 = g_strcmp0(param_1,DAT_45ea9544 + 0x45ea9488);
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = g_strcmp0(param_1,DAT_45ea9548 + 0x45ea9498);
  if (iVar1 == 0) {
    return 5;
  }
  iVar1 = g_strcmp0(param_1,DAT_45ea954c + 0x45ea94a8);
  if (iVar1 == 0) {
    return 6;
  }
  iVar1 = g_strcmp0(param_1,DAT_45ea9550 + 0x45ea94b8);
  if (iVar1 == 0) {
    return 9;
  }
  iVar1 = g_strcmp0(param_1,DAT_45ea9554 + 0x45ea94c8);
  if (iVar1 == 0) {
    return 10;
  }
  iVar1 = g_strcmp0(param_1,DAT_45ea9558 + 0x45ea94d8);
  if (iVar1 == 0) {
    return 0xb;
  }
  iVar1 = g_strcmp0(param_1,DAT_45ea955c + 0x45ea94e8);
  if (iVar1 == 0) {
    return 0xc;
  }
  iVar1 = g_strcmp0(param_1,DAT_45ea9560 + 0x45ea94f8);
  if (iVar1 == 0) {
    return 7;
  }
  iVar1 = g_strcmp0(param_1,DAT_45ea9564 + 0x45ea9508);
  if (iVar1 == 0) {
    return 8;
  }
  iVar1 = g_strcmp0(param_1,DAT_45ea9568 + 0x45ea9518);
  if (iVar1 == 0) {
    return 0xd;
  }
  iVar1 = g_strcmp0(param_1,DAT_45ea956c + 0x45ea9528);
  uVar2 = 0xffffffff;
  if (iVar1 == 0) {
    uVar2 = 0xe;
  }
  return uVar2;
}

