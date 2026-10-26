/* deviced : unregister_notifier@000170a0 */

undefined4 unregister_notifier(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (param_2 == 0) {
    __dlog_print(2,6,DAT_000171f0 + 0x171c8,DAT_000171ec + 0x171c4,DAT_000171e8 + 0x171d7,
                 DAT_000171e4 + 0x171b0,0x53);
    uVar1 = 0xffffffea;
  }
  else {
    puVar3 = *(undefined4 **)(DAT_000171d0 + 0x170c0);
    if ((puVar3 != (undefined4 *)0x0) &&
       (puVar4 = (undefined1 *)*puVar3, puVar4 != (undefined1 *)0x0)) {
      iVar2 = DAT_000171d8 + 0x17123;
      iVar7 = DAT_000171dc + 0x170f8;
      iVar5 = DAT_000171d4 + 0x170fc;
      iVar6 = DAT_000171e0 + 0x17100;
      do {
        if ((*(int *)(puVar4 + 4) == param_1) && (param_2 == *(int *)(puVar4 + 8))) {
          __dlog_print(2,4,iVar6,iVar7,iVar2,iVar5,0x59,param_1,param_2);
          puVar3 = (undefined4 *)puVar3[1];
          *puVar4 = 1;
        }
        else {
          puVar3 = (undefined4 *)puVar3[1];
        }
      } while ((puVar3 != (undefined4 *)0x0) &&
              (puVar4 = (undefined1 *)*puVar3, puVar4 != (undefined1 *)0x0));
    }
    uVar1 = 0;
  }
  return uVar1;
}

