/* libapp-context-manager-common.so : FUN_45ea7528@45ea7528 */

void FUN_45ea7528(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  
  puVar3 = (undefined1 *)(DAT_45ea7550 + 0x45ea7538);
  pcVar4 = *(code **)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x1c);
  uVar1 = *(undefined4 *)(param_1 + 8);
  *puVar3 = 1;
  (*pcVar4)(param_1 + 0x14,uVar1,uVar2,puVar3,param_4);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

