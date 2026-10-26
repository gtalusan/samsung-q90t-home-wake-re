/* libapp-context-manager-common.so : FUN_45eaacec@45eaacec */

void FUN_45eaacec(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar4 = DAT_45eaae1c + 0x45eaacf8;
  if (param_1 != (int *)0x0) {
    iVar1 = param_1[3];
    if (((iVar1 == *(int *)(DAT_45eaae20 + 0x45eaad08)) ||
        (*(int *)(DAT_45eaae20 + 0x45eaad08) = -1, iVar1 == -1)) && (*param_1 == 1)) {
      __dlog_print(0,4,DAT_45eaae4c + 0x45eaae04,DAT_45eaae50 + 0x45eaae08,DAT_45eaae48 + 0x45eaae2f
                   ,DAT_45eaae44 + 0x45eab1ce,0xab,param_1[4],iVar1);
      iVar6 = param_1[3];
      iVar3 = *param_1;
      iVar1 = *(int *)(DAT_45eaae54 + 0x45eaae18);
      param_1[1] = iVar1;
    }
    else {
      iVar1 = window_util_check_registered_key(iVar1,param_3);
      iVar3 = *param_1;
      param_1[1] = iVar1;
      if (iVar3 == 0) {
        iVar6 = param_1[3];
        *(undefined4 *)(DAT_45eaae40 + 0x45eaadd8) = 0xffffffff;
      }
      else {
        iVar6 = param_1[3];
        piVar2 = (int *)(DAT_45eaae24 + 0x45eaad2c);
        *(int *)(DAT_45eaae24 + 0x45eaad30) = iVar1;
        *piVar2 = iVar6;
      }
    }
    iVar7 = DAT_45eaae28 + 0x45eab140;
    iVar9 = DAT_45eaae30 + 0x45eaad58;
    iVar8 = DAT_45eaae2c + 0x45eaad93;
    __dlog_print(0,4,iVar9,DAT_45eaae34 + 0x45eaad60,iVar8,iVar7,199,param_1[4],iVar6,iVar3,iVar1);
    puVar5 = (undefined4 *)**(int **)(iVar4 + DAT_45eaae38);
    if (((*param_1 == 0) ||
        (iVar4 = window_util_should_process_even_if_registered(param_1[3]), iVar4 != 0)) ||
       ((2 < param_1[1] - 2U || (iVar4 = context_check_mask(0x2000,param_3), iVar4 != 0)))) {
      while ((puVar5 != (undefined4 *)0x0 &&
             (iVar4 = (**(code **)*puVar5)(param_1,((undefined4 *)*puVar5)[1]), iVar4 == 0))) {
        puVar5 = (undefined4 *)puVar5[1];
      }
    }
    else {
      __dlog_print(0,4,iVar9,DAT_45eaae3c + 0x45eaadc8,iVar8,iVar7,0xce,param_1[1],iVar6,iVar3,iVar1
                  );
    }
  }
  return;
}

