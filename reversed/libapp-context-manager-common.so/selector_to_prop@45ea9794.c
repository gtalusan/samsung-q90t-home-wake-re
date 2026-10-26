/* libapp-context-manager-common.so : selector_to_prop@45ea9794 */

undefined4 selector_to_prop(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  iVar1 = g_strcmp0(param_1,DAT_45ea98b0 + 0x45ea97a2,param_3,param_4,param_4);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = g_strcmp0(param_1,DAT_45ea98b4 + 0x45ea97b2);
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = g_strcmp0(param_1,DAT_45ea98b8 + 0x45ea97c4);
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = g_strcmp0(param_1,DAT_45ea98bc + 0x45ea97d4);
  if (iVar1 == 0) {
    return 4;
  }
  iVar1 = g_strcmp0(param_1,DAT_45ea98c0 + 0x45ea97e4);
  if (iVar1 == 0) {
    return 5;
  }
  iVar1 = g_strcmp0(param_1,DAT_45ea98c4 + 0x45ea97f4);
  if (iVar1 == 0) {
    return 6;
  }
  iVar1 = strncmp(param_1,(char *)(DAT_45ea98c8 + 0x45ea9806),7);
  if (iVar1 == 0) {
    return 7;
  }
  iVar1 = strncmp(param_1,(char *)(DAT_45ea98cc + 0x45ea9818),5);
  if (iVar1 == 0) {
    return 8;
  }
  iVar1 = strncmp(param_1,(char *)(DAT_45ea98d0 + 0x45ea982a),7);
  if (iVar1 == 0) {
    return 9;
  }
  iVar1 = strncmp(param_1,(char *)(DAT_45ea98d4 + 0x45ea983c),8);
  if (iVar1 == 0) {
    return 10;
  }
  iVar1 = strncmp(param_1,(char *)(DAT_45ea98d8 + 0x45ea984e),6);
  if (iVar1 == 0) {
    return 0xc;
  }
  iVar1 = strncmp(param_1,(char *)(DAT_45ea98dc + 0x45ea9860),6);
  if (iVar1 == 0) {
    return 0xb;
  }
  iVar1 = g_strcmp0(param_1,DAT_45ea98e0 + 0x45ea9870);
  if (iVar1 == 0) {
    return 0xd;
  }
  iVar1 = g_strcmp0(param_1,DAT_45ea98e4 + 0x45ea9880);
  if (iVar1 == 0) {
    return 0xe;
  }
  iVar1 = g_strcmp0(param_1,DAT_45ea98e8 + 0x45ea9890);
  if (iVar1 == 0) {
    return 0xf;
  }
  iVar1 = g_strcmp0(param_1,DAT_45ea98ec + 0x45ea98a0);
  uVar2 = 0xffffffff;
  if (iVar1 == 0) {
    uVar2 = 0x10;
  }
  return uVar2;
}

