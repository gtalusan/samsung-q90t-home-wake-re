/* libapp-context-manager-common.so : task_mgr_task_launch@45ea4b20 */

void task_mgr_task_launch(undefined4 *param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint local_30;
  int local_2c;
  
  piVar7 = *(int **)(DAT_45ea5018 + 0x45ea4b34 + DAT_45ea501c);
  uVar11 = (uint)(param_3 == 0);
  local_2c = *piVar7;
  iVar1 = context_check_mask(0x20000400,param_4);
  uVar8 = uVar11;
  if (iVar1 == 0) {
    uVar8 = 0;
  }
  if (uVar8 != 0) {
    iVar1 = -3;
    goto LAB_45ea4d2a;
  }
  if (param_1 == (undefined4 *)0x0) {
LAB_45ea4f26:
    iVar1 = -1;
    goto LAB_45ea4d2a;
  }
  param_2 = param_2 & ~((int)param_2 >> 0x1f);
  uVar2 = g_list_first(param_1[10]);
  param_1[10] = uVar2;
  piVar3 = (int *)g_list_nth(uVar2,param_2);
  param_1[10] = piVar3;
  iVar1 = 0;
  if (piVar3 != (int *)0x0) {
    iVar1 = *piVar3;
    bundle_iterate(iVar1,DAT_45ea5020 + 0x45ea4b98,0);
    local_30 = uVar8;
    if (iVar1 == 0) {
      FUN_45eaca68();
    }
    else {
      bundle_get_str(iVar1,DAT_45ea5024 + 0x45ea4bb2,&local_30);
      if ((local_30 != 0) &&
         ((iVar4 = g_strcmp0(local_30,DAT_45ea5028 + 0x45ea4bc0), iVar4 == 0 ||
          (iVar4 = g_strcmp0(local_30,DAT_45ea502c + 0x45ea4bd2), iVar4 == 0)))) {
        iVar4 = DAT_45ea5060 + 0x45ea4d60;
        context_system_property_add(iVar4);
        __dlog_print(0,3,DAT_45ea506c + 0x45ea4d7e,DAT_45ea5070 + 0x45ea4d8a,
                     DAT_45ea5064 + 0x45ea4daf,DAT_45ea5068 + 0x45ea4d7a,0x5af,iVar4);
      }
    }
  }
  iVar4 = g_strcmp0(*param_1,DAT_45ea5030 + 0x45ea4be4);
  if ((iVar4 == 0) && (iVar4 = context_check_mask(0x80,param_4), iVar4 == 0)) {
    iVar1 = aul_app_is_running(param_1[1]);
    if (iVar1 == 0) {
      __dlog_print(0,4,DAT_45ea50bc + 0x45ea4f1c,DAT_45ea50b8 + 0x45ea4f1a,DAT_45ea50b4 + 0x45ea4f49
                   ,DAT_45ea50b0 + 0x45ea5cc6,0x928);
    }
    FUN_45eacc34(param_1[1],*(undefined4 *)param_1[10],param_4);
    __dlog_print(0,4,DAT_45ea5080 + 0x45ea4de0,DAT_45ea507c + 0x45ea4dde,DAT_45ea5078 + 0x45ea4e05,
                 DAT_45ea5074 + 0x45ea5b82,0x92b,param_2);
    iVar1 = 0;
    goto LAB_45ea4d2a;
  }
  if (param_1[0xc] != 1) {
    uVar11 = 0;
  }
  if (uVar11 != 0) {
    iVar1 = -2;
    __dlog_print(0,4,DAT_45ea50ec + 0x45ea4fbc,DAT_45ea50e8 + 0x45ea4fb8,DAT_45ea50e4 + 0x45ea4fe1,
                 DAT_45ea50e0 + 0x45ea5d5e,0x930,param_1[1]);
    goto LAB_45ea4d2a;
  }
  iVar4 = check_trans_state(param_1[0xc],1);
  if (iVar4 == 0) {
    if (param_3 == 0) goto LAB_45ea4f26;
LAB_45ea4d48:
    context_check_mask(0x20000400,param_4);
  }
  else {
    if (param_3 != 0) goto LAB_45ea4d48;
    iVar4 = test_blocker(param_1,3,param_4);
    if (iVar4 != 0) {
      iVar1 = -3;
      __dlog_print(0,4,DAT_45ea50fc + 0x45ea4ff0,DAT_45ea50f8 + 0x45ea4fea,DAT_45ea50f4 + 0x45ea5013
                   ,DAT_45ea50f0 + 0x45ea5d90,0x938,param_1[1]);
      goto LAB_45ea4d2a;
    }
    iVar4 = context_check_mask(0x20000400,param_4);
    if (iVar4 != 0) {
      iVar1 = -3;
      __dlog_print(0,4,DAT_45ea50cc + 0x45ea4f56,DAT_45ea50c8 + 0x45ea4f54,DAT_45ea50c4 + 0x45ea4f7d
                   ,DAT_45ea50c0 + 0x45ea5cfa,0x93d);
      goto LAB_45ea4d2a;
    }
  }
  uVar10 = param_1[0xc];
  update_state(param_1,1,param_4);
  iVar12 = DAT_45ea5038 + 0x45ea4c54;
  handle_listen(*(undefined4 *)(DAT_45ea5034 + 0x45ea4c4e),param_1,param_4);
  uVar2 = *param_1;
  iVar9 = DAT_45ea503c + 0x45ea4ca1;
  iVar4 = DAT_45ea5040 + 0x45ea5a28;
  uVar8 = param_2;
  __dlog_print(0,4,iVar12,DAT_45ea5044 + 0x45ea4c7c,iVar9,iVar4,0x946,uVar2,param_2);
  update_state(param_1,uVar10,param_4);
  if (param_1[5] == 4) {
    syspopup_launch_direct(*param_1,iVar1);
    iVar1 = 0;
    uVar2 = util_get_time_in_millis();
    *(undefined4 *)(param_4 + 0x28) = uVar2;
    __dlog_print(0,3,iVar12,DAT_45ea5098 + 0x45ea4e70,iVar9,iVar4,0x94c,uVar2,uVar8);
  }
  else if ((param_1[2] == 0) ||
          (iVar5 = g_strcmp0(param_1[2],DAT_45ea5048 + 0x45ea4ca8), iVar5 != 0)) {
    iVar4 = FUN_45eacc34(param_1[1],iVar1,param_4);
    iVar9 = FUN_45eaa0c8(param_1[1]);
    iVar1 = DAT_45ea50a0;
    if ((iVar9 == 0) && (iVar4 == -9 || iVar4 == -3)) {
      uVar2 = param_1[1];
      iVar9 = DAT_45ea509c + 0x45ea4ecb;
      iVar5 = DAT_45ea50a4 + 0x45ea4ea2;
      __dlog_print(0,4,iVar5,DAT_45ea50a8 + 0x45ea4eb2,iVar9,DAT_45ea50a0 + 0x45ea5c5e,0x95a,uVar2);
      iVar12 = param_1[1];
      piVar3 = (int *)util_malloc_s(0x14);
      iVar4 = DAT_45ea50ac;
      if (piVar3 == (int *)0x0) {
        __dlog_print(0,6,iVar5,DAT_45ea5100 + 0x45ea500e,iVar9,iVar1 + 0x45ea5c76,0x88a,uVar2);
        iVar1 = 0;
      }
      else {
        piVar3[1] = iVar12;
        *piVar3 = (int)param_1;
        piVar3[2] = param_3;
        piVar3[3] = param_2;
        iVar1 = util_get_time_in_millis();
        piVar3[4] = iVar1;
        task_ref(*piVar3);
        uVar2 = g_list_append(*(undefined4 *)(iVar4 + 0x45ea516c),piVar3);
        *(undefined4 *)(iVar4 + 0x45ea516c) = uVar2;
        iVar1 = 0;
      }
    }
    else if (iVar4 < 1) {
      iVar1 = -1;
      __dlog_print(0,6,DAT_45ea50d8 + 0x45ea4f7e,DAT_45ea50dc + 0x45ea4f84,DAT_45ea50d4 + 0x45ea4fab
                   ,DAT_45ea50d0 + 0x45ea5d28,0x961,*param_1,iVar4);
    }
    else {
      puVar6 = (undefined4 *)task_mgr_task_find_pid(iVar4,param_4);
      iVar1 = iVar4;
      if (puVar6 == (undefined4 *)0x0) {
        __dlog_print(0,4,DAT_45ea5090 + 0x45ea4e36,DAT_45ea5094 + 0x45ea4e38,
                     DAT_45ea508c + 0x45ea4e65,DAT_45ea5088 + 0x45ea5bdc,0x96a,*param_1,iVar4);
        put_candidate_list(iVar4,param_1,param_4);
      }
      else {
        __dlog_print(0,4,DAT_45ea5054 + 0x45ea4d14,DAT_45ea5058 + 0x45ea4d16,
                     DAT_45ea5050 + 0x45ea4d3f,DAT_45ea504c + 0x45ea5abe,0x967,*puVar6,iVar4);
        handle_listen(*(undefined4 *)(DAT_45ea505c + 0x45ea4d26),puVar6,param_4);
      }
    }
  }
  else {
    __dlog_print(0,4,iVar12,DAT_45ea5084 + 0x45ea4dfc,iVar9,iVar4,0x951,uVar2,uVar8);
    iVar1 = FUN_45ead3d0(param_1[1],param_1[7],param_4);
  }
LAB_45ea4d2a:
  if (local_2c != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1);
  }
  return;
}

