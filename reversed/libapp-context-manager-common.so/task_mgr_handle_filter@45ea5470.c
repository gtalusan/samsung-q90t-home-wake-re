/* libapp-context-manager-common.so : task_mgr_handle_filter@45ea5470 */

void task_mgr_handle_filter
               (undefined4 param_1,undefined4 *param_2,int *param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,int param_7)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_68;
  int *local_4c;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [24];
  int local_2c;
  
  piVar5 = *(int **)(DAT_45ea5664 + 0x45ea5482 + DAT_45ea5668);
  local_2c = *piVar5;
  switch(param_1) {
  case 3:
    iVar8 = *(int *)(param_7 + 0x1c);
    if (iVar8 != 0) {
LAB_45ea54ee:
      g_hash_table_iter_init(auStack_44,iVar8);
      if (param_2[3] - 1 < 2) {
        local_68 = *param_2;
        *param_2 = 0xffffffff;
      }
      else {
        local_68 = 0;
      }
      iVar8 = DAT_45ea566c + 0x45ea634e;
      iVar6 = DAT_45ea5670 + 0x45ea5557;
      iVar4 = DAT_45ea5674 + 0x45ea5528;
      iVar7 = DAT_45ea5678 + 0x45ea552c;
LAB_45ea553e:
      do {
        iVar2 = g_hash_table_iter_next(auStack_44,auStack_48,&local_4c);
        piVar1 = local_4c;
        if (iVar2 == 0) goto code_r0x45ea554c;
        iVar2 = selector_test_task(param_2,local_4c,param_7);
        if (iVar2 == 1) {
          if (param_3 == (int *)0x0 || piVar1 == (int *)0x0) {
            __dlog_print(0,4,DAT_45ea5698 + 0x45ea5628,DAT_45ea5694 + 0x45ea5626,
                         DAT_45ea5690 + 0x45ea5653,DAT_45ea568c + 0x45ea6448,0x5e8);
          }
          else {
            if (piVar1 == param_3) goto LAB_45ea553e;
            if ((param_3[1] == 0) || (piVar1[1] == 0)) {
              __dlog_print(0,6,iVar7,iVar4,iVar6,iVar8,0x5f0);
            }
            else {
              iVar2 = g_strcmp0();
              if (iVar2 == 0) {
                if (*param_3 == 0) {
                  iVar2 = *piVar1;
                }
                else {
                  if (*piVar1 == 0) goto LAB_45ea55de;
                  iVar2 = g_strcmp0();
                }
                if (iVar2 == 0) goto LAB_45ea553e;
              }
            }
          }
LAB_45ea55de:
          task_mgr_handle_filter_request(param_1,piVar1,local_68,param_4,param_6,param_5,param_7);
        }
      } while( true );
    }
    __dlog_print(0,6,DAT_45ea5688 + 0x45ea5586,DAT_45ea5684 + 0x45ea5584,DAT_45ea5680 + 0x45ea55b1,
                 DAT_45ea567c + 0x45ea638e,0x60d);
    uVar3 = 0;
    break;
  default:
    uVar3 = 0xffffffff;
    break;
  case 5:
  case 6:
  case 7:
  case 9:
  case 0xd:
  case 0xe:
    iVar8 = *(int *)(param_7 + 0x20);
    if (iVar8 != 0) goto LAB_45ea54ee;
    __dlog_print(0,6,DAT_45ea56a8 + 0x45ea5652,DAT_45ea56a4 + 0x45ea5650,DAT_45ea56a0 + 0x45ea567d,
                 DAT_45ea569c + 0x45ea645a,0x619);
    uVar3 = 0;
    break;
  case 0xb:
    uVar3 = selector_get_context(param_2);
    context_set(uVar3,param_7);
    uVar3 = 0;
    break;
  case 0xc:
    uVar3 = selector_get_context(param_2);
    context_unset(uVar3,param_7);
    uVar3 = 0;
  }
  goto LAB_45ea54c2;
code_r0x45ea554c:
  uVar3 = 0;
  if (param_2[3] - 1 < 2) {
    *param_2 = local_68;
  }
LAB_45ea54c2:
  if (local_2c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

