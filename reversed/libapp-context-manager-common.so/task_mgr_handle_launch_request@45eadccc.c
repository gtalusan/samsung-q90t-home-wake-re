/* libapp-context-manager-common.so : task_mgr_handle_launch_request@45eadccc */

void task_mgr_handle_launch_request
               (undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int local_34;
  undefined4 *local_30;
  int local_2c;
  
  piVar6 = *(int **)(DAT_45eae020 + 0x45eadce0 + DAT_45eae024);
  local_2c = *piVar6;
  local_30 = (undefined4 *)0x0;
  local_34 = 0;
  __dlog_print(0,4,DAT_45eae030 + 0x45eadd1a,DAT_45eae034 + 0x45eadd1c,DAT_45eae02c + 0x45eadd2f,
               DAT_45eae028 + 0x45eade16,0xb05,param_1);
  if (param_2 != 0) {
    bundle_iterate(param_2,DAT_45eae038 + 0x45eadd32,0);
  }
  iVar1 = FUN_45eadbd0(param_1,param_2,param_3,param_4,&local_30,&local_34);
  if (iVar1 == 0) {
    if (local_30 != (undefined4 *)0x0) {
      __dlog_print(0,4,DAT_45eae044 + 0x45eadd7e,DAT_45eae048 + 0x45eadd84,DAT_45eae040 + 0x45eaddb3
                   ,DAT_45eae03c + 0x45eade92,0xb0b,*local_30,local_34);
      if (-1 < local_34) {
        iVar1 = task_mgr_task_launch(local_30,local_34,0,param_4);
        if (iVar1 == 0) {
          iVar1 = local_30[0xb];
        }
        goto LAB_45eadecc;
      }
      goto LAB_45eadda4;
    }
  }
  else {
LAB_45eadda4:
    if (local_30 != (undefined4 *)0x0) {
      iVar1 = context_check_mask(0x20000400,param_4);
      if (iVar1 == 0) {
        if (local_30[0xc] == 1) {
          iVar1 = -2;
          __dlog_print(0,4,DAT_45eae0b8 + 0x45eadfe8,DAT_45eae0b4 + 0x45eadfe4,
                       DAT_45eae0b0 + 0x45eae00d,DAT_45eae0ac + 0x45eae0f2,0xb23,local_30[1]);
        }
        else {
          iVar1 = check_trans_state(local_30[0xc],1);
          if (iVar1 == 0) {
            iVar1 = -1;
          }
          else {
            iVar1 = test_blocker(local_30,3,param_4);
            if (iVar1 == 0) {
              iVar2 = context_check_mask(0x20000400,param_4);
              iVar1 = DAT_45eae050;
              if (iVar2 == 0) {
                iVar7 = DAT_45eae04c + 0x45eade16;
                uVar8 = local_30[0xc];
                update_state(local_30,1,param_4);
                handle_listen(*(undefined4 *)(DAT_45eae054 + 0x45eadf94),local_30,param_4);
                uVar5 = *local_30;
                iVar2 = DAT_45eae058 + 0x45eade81;
                __dlog_print(0,4,iVar7,DAT_45eae05c + 0x45eade52,iVar2,iVar1 + 0x45eadf4e,0xb39,
                             uVar5);
                update_state(local_30,uVar8,param_4);
                if ((local_30[2] == 0) ||
                   (iVar3 = g_strcmp0(local_30[2],DAT_45eae060 + 0x45eade6a), iVar3 != 0)) {
                  iVar2 = FUN_45eacc34(local_30[1],param_2,param_4);
                  if (iVar2 < 1) {
                    iVar1 = -5;
                    __dlog_print(0,6,DAT_45eae0c8 + 0x45eae018,DAT_45eae0c4 + 0x45eae016,
                                 DAT_45eae0c0 + 0x45eae03d,DAT_45eae0bc + 0x45eae122,0xb4e,iVar2);
                  }
                  else {
                    puVar4 = (undefined4 *)task_mgr_task_find_pid(iVar2,param_4);
                    iVar1 = iVar2;
                    if (puVar4 == (undefined4 *)0x0) {
                      __dlog_print(0,4,DAT_45eae084 + 0x45eadf48,DAT_45eae088 + 0x45eadf4c,
                                   DAT_45eae080 + 0x45eadf73,DAT_45eae07c + 0x45eae05a,0xb4b,
                                   *local_30,iVar2);
                    }
                    else {
                      handle_listen(*(undefined4 *)(DAT_45eae064 + 0x45eae00c),puVar4,param_4);
                      __dlog_print(0,4,DAT_45eae070 + 0x45eadec4,DAT_45eae074 + 0x45eadeca,
                                   DAT_45eae06c + 0x45eadeef,DAT_45eae068 + 0x45eadfd6,0xb48,*puVar4
                                   ,iVar2);
                    }
                  }
                }
                else {
                  __dlog_print(0,4,iVar7,DAT_45eae078 + 0x45eadf08,iVar2,iVar1 + 0x45eadf4e,0xb3e,
                               uVar5);
                  iVar1 = FUN_45ead3d0(local_30[1],local_30[7],param_4);
                }
              }
              else {
                iVar1 = -3;
                __dlog_print(0,4,DAT_45eae0a8 + 0x45eadfb8,DAT_45eae0a4 + 0x45eadfb6,
                             DAT_45eae0a0 + 0x45eadfdf,(int)&DAT_45eae0c4 + DAT_45eae09c,0xb30);
              }
            }
            else {
              iVar1 = -3;
              __dlog_print(0,4,DAT_45eae098 + 0x45eadf8a,DAT_45eae094 + 0x45eadf80,
                           DAT_45eae090 + 0x45eadfb1,DAT_45eae08c + 0x45eae096,0xb2b,local_30[1]);
            }
          }
        }
      }
      else {
        iVar1 = -3;
      }
      goto LAB_45eadecc;
    }
  }
  iVar1 = FUN_45eacc34(param_1,param_2,param_4);
  if (iVar1 < 1) {
    iVar1 = -5;
  }
LAB_45eadecc:
  if (local_2c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1);
  }
  return;
}

