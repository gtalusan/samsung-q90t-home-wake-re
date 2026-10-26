/* libapp-context-manager-common.so : task_mgr_check_blocked@45eae0cc */

void task_mgr_check_blocked
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  int local_34;
  int local_30;
  int local_2c;
  
  piVar5 = *(int **)(DAT_45eae25c + 0x45eae0dc + DAT_45eae260);
  local_30 = 0;
  local_34 = 0;
  local_2c = *piVar5;
  if (param_1 == 0) {
    __dlog_print(0,6,DAT_45eae280 + 0x45eae252,DAT_45eae27c + 0x45eae250,DAT_45eae278 + 0x45eae27f,
                 &UNK_45eae384 + DAT_45eae274,0xab6);
    uVar4 = 0;
    goto LAB_45eae122;
  }
  switch(param_4) {
  case 3:
    iVar2 = context_check_mask(0x20000400,param_5);
    if (iVar2 == 0) {
      uVar6 = 1;
      FUN_45eadbd0(param_1,param_2,param_3,param_5,&local_30,&local_34);
      goto LAB_45eae19a;
    }
    goto LAB_45eae120;
  default:
    uVar4 = 0;
    goto LAB_45eae122;
  case 5:
    uVar6 = 3;
    break;
  case 6:
    uVar6 = 4;
    break;
  case 7:
    uVar6 = 8;
    break;
  case 9:
    uVar6 = 5;
    iVar2 = context_check_mask(0x20000400,param_5);
    if (iVar2 != 0) goto LAB_45eae120;
    goto LAB_45eae14a;
  }
  iVar2 = context_check_mask(0x20000400,param_5);
  if (iVar2 == 0) {
LAB_45eae14a:
    FUN_45ead9dc(param_1,param_2,param_3,*(undefined4 *)(param_5 + 0x20),&local_30,&local_34);
LAB_45eae19a:
    uVar4 = 0;
    if (local_30 == 0) goto LAB_45eae122;
    iVar3 = check_trans_state(*(undefined4 *)(local_30 + 0x30),uVar6);
    iVar2 = local_30;
    if (iVar3 != 0) {
      if (local_34 < 0) {
        local_34 = 0;
      }
      iVar3 = *(int *)(local_30 + 0x28);
      if (iVar3 != 0) {
        uVar4 = g_list_first(iVar3);
        iVar1 = local_30;
        *(undefined4 *)(iVar2 + 0x28) = uVar4;
        uVar4 = g_list_nth(*(undefined4 *)(local_30 + 0x28),local_34);
        *(undefined4 *)(iVar1 + 0x28) = uVar4;
      }
      iVar2 = test_blocker(local_30,param_4,param_5);
      if (iVar2 == 0) {
        *(int *)(local_30 + 0x28) = iVar3;
        uVar4 = 0;
      }
      else {
        __dlog_print(0,3,DAT_45eae26c + 0x45eae220,DAT_45eae270 + 0x45eae222,
                     DAT_45eae268 + 0x45eae24d,&UNK_45eae352 + DAT_45eae264,0xaea,
                     *(undefined4 *)(local_30 + 4));
        uVar4 = 1;
        *(int *)(local_30 + 0x28) = iVar3;
      }
      goto LAB_45eae122;
    }
  }
LAB_45eae120:
  uVar4 = 1;
LAB_45eae122:
  if (local_2c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

