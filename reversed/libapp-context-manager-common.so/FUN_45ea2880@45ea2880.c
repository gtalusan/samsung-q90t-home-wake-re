/* libapp-context-manager-common.so : FUN_45ea2880@45ea2880 */

void FUN_45ea2880(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  puVar4 = (undefined4 *)*param_2;
  iVar8 = DAT_45ea29b4 + 0x45ea341e;
  iVar5 = DAT_45ea29b8 + 0x45ea28e9;
  __dlog_print(0,4,DAT_45ea29c0 + 0x45ea28c6,DAT_45ea29bc + 0x45ea28c4,iVar5,iVar8,0x491,param_1[1])
  ;
  if (puVar4 != (undefined4 *)0x0) {
    iVar7 = DAT_45ea29c4 + 0x45ea28d6;
    do {
      puVar6 = (undefined4 *)*puVar4;
      iVar3 = DAT_45ea29c8 + 0x45ea28ec;
      __dlog_print(0,3,iVar3,iVar7,iVar5,iVar8,0x494,*puVar6);
      iVar1 = selector_test_task(puVar6[4],param_1,param_2);
      if ((iVar1 == 1) && (param_1[9] == 0)) {
        __dlog_print(0,4,iVar3,DAT_45ea29cc + 0x45ea2932,iVar5,iVar8,0x497,*puVar6);
        uVar2 = g_strdup(*puVar6);
        *param_1 = uVar2;
        param_1[4] = puVar6[2];
        param_1[5] = puVar6[1];
        param_1[7] = puVar6[3];
        return;
      }
      puVar4 = (undefined4 *)puVar4[1];
    } while (puVar4 != (undefined4 *)0x0);
  }
  __dlog_print(0,3,DAT_45ea29d8 + 0x45ea2984,DAT_45ea29dc + 0x45ea2986,DAT_45ea29d4 + 0x45ea29b1,
               DAT_45ea29d0 + 0x45ea34e4,0x4a2,param_1[1]);
  uVar2 = g_strdup(param_1[1]);
  param_1[4] = 3;
  *param_1 = uVar2;
  param_1[5] = 9;
  param_1[7] = 0;
  return;
}

