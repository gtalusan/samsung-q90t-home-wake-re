/* libapp-context-manager-common.so : key_handler_push_key_event@45eaaf64 */

void key_handler_push_key_event(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int unaff_r5;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  int local_34;
  int local_30;
  int local_2c;
  
  bVar10 = param_1 == 0;
  bVar11 = param_2 == 0;
  if (bVar10 || bVar11) {
    unaff_r5 = 1;
  }
  piVar5 = *(int **)(DAT_45eab0dc + 0x45eaaf72 + DAT_45eab0e0);
  if (!bVar10 && !bVar11) {
    unaff_r5 = 0;
  }
  local_2c = *piVar5;
  if (bVar10 || bVar11) {
    __dlog_print(0,6,DAT_45eab10c + 0x45eab070,DAT_45eab108 + 0x45eab06e,DAT_45eab104 + 0x45eab09b,
                 DAT_45eab100 + 0x45eab490,0xe6);
  }
  else {
    iVar1 = to_keysym(param_1,unaff_r5);
    uVar2 = window_util_get_keycode();
    if (iVar1 == 0) {
      __dlog_print(0,6,DAT_45eab11c + 0x45eab0a8,DAT_45eab118 + 0x45eab0a6,DAT_45eab114 + 0x45eab0d3
                   ,DAT_45eab110 + 0x45eab4c8,0xef);
    }
    else {
      piVar3 = (int *)g_hash_table_lookup(*(undefined4 *)(DAT_45eab0e4 + 0x45eab00e),iVar1);
      if (piVar3 == (int *)0x0) {
        __dlog_print(0,4,DAT_45eab128 + 0x45eab0d0,DAT_45eab12c + 0x45eab0d2,
                     DAT_45eab124 + 0x45eab0fd,DAT_45eab120 + 0x45eab4f0,0xf7,iVar1);
      }
      else {
        if ((*(int *)(param_2 + 0x2c) == 0) ||
           (iVar1 = *(int *)(*(int *)(param_2 + 0x2c) + 0x54), iVar1 == 0)) {
          local_34 = 0;
        }
        else {
          local_30 = unaff_r5;
          property_get_value_int(iVar1,DAT_45eab0e8 + 0x45eaafca,&local_30);
          local_34 = local_30;
        }
        iVar6 = DAT_45eab0ec + 0x45eab01d;
        iVar1 = DAT_45eab0f4 + 0x45eaafee;
        iVar8 = DAT_45eab0f0 + 0x45eab420;
        iVar9 = DAT_45eab0f8 + 0x45eaaff8;
        do {
          iVar7 = *piVar3;
          if (iVar7 != 0) {
            if ((local_34 == 2) ||
               (iVar4 = window_util_check_registered_key(uVar2,param_2), 0 < iVar4)) {
              __dlog_print(0,4,DAT_45eab0fc + 0x45eab00e,iVar9,iVar6,iVar8,0x105,param_1);
            }
            else if (*(int *)(iVar7 + 4) == iVar1) {
              FUN_45eabf50(0,*(undefined4 *)(iVar7 + 8),param_2);
            }
          }
          piVar3 = (int *)piVar3[1];
        } while (piVar3 != (int *)0x0);
      }
    }
  }
  if (local_2c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

