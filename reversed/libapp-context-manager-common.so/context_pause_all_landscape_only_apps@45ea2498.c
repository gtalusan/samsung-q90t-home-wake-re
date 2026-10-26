/* libapp-context-manager-common.so : context_pause_all_landscape_only_apps@45ea2498 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void context_pause_all_landscape_only_apps(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_4c [4];
  undefined4 local_48;
  undefined1 auStack_44 [24];
  int local_2c;
  
  iVar1 = DAT_45ea2750;
  piVar8 = *(int **)(DAT_45ea2744 + 0x45ea24aa + DAT_45ea2748);
  local_2c = *piVar8;
  if (*(int *)(DAT_45ea274c + 0x45ea24fa) == 0) {
    __dlog_print(0,6,DAT_45ea27dc + 0x45ea273c,DAT_45ea27d8 + 0x45ea273a,DAT_45ea27d4 + 0x45ea2767,
                 DAT_45ea27d0 + 0x45ea3238,0x532);
  }
  else {
    g_hash_table_iter_init(auStack_44);
    iVar6 = _LAB_45ea275c + 0x45ea24e2;
    iVar7 = DAT_45ea2754 + 0x45ea2fee;
    iVar9 = DAT_45ea2758 + 0x45ea251b;
LAB_45ea24ec:
    iVar3 = g_hash_table_iter_next(auStack_44,&local_48,auStack_4c);
    if (iVar3 != 0) {
      while (uVar2 = local_48, iVar3 = g_strcmp0(local_48,iVar1 + 0x45ea24d6), iVar3 == 0) {
        iVar3 = aul_app_get_status(uVar2);
        if (iVar3 == 5 || iVar3 < 0) {
          __dlog_print(0,5,DAT_45ea27a4 + 0x45ea2680,_LAB_45ea27a0 + 0x45ea267a,
                       _LAB_45ea2798 + 0x45ea269d,_LAB_45ea279c + 0x45ea31aa,0x500,uVar2,iVar3);
          goto LAB_45ea24ec;
        }
        iVar3 = bundle_create();
        if (iVar3 == 0) {
          __dlog_print(0,6,DAT_45ea27cc + 0x45ea2712,DAT_45ea27c8 + 0x45ea2710,
                       DAT_45ea27c4 + 0x45ea273f,DAT_45ea27c0 + 0x45ea3238,0x506);
          goto LAB_45ea24ec;
        }
        bundle_add(iVar3,_LAB_45ea2764 + 0x45ea253a,_LAB_45ea2760 + 0x45ea2538);
        bundle_add(iVar3,_LAB_45ea276c + 0x45ea2548,_LAB_45ea2768 + 0x45ea2546);
        bundle_add(iVar3,_LAB_45ea2774 + 0x45ea2556,_LAB_45ea2770 + 0x45ea2554);
        __dlog_print(0,4,_LAB_45ea2784 + 0x45ea2580,_LAB_45ea2780 + 0x45ea257c,
                     _LAB_45ea277c + 0x45ea25a5,_LAB_45ea2778 + 0x45ea309e,0x50d,uVar2);
        aul_launch_app_async(uVar2,iVar3);
        bundle_free(iVar3);
        iVar3 = g_hash_table_iter_next(auStack_44,&local_48,auStack_4c);
        if (iVar3 == 0) goto LAB_45ea259e;
      }
      iVar3 = context_system_property_check(iVar6);
      if ((iVar3 != 0) && (iVar3 = task_mgr_check_visible(uVar2,0,0,param_1), iVar3 != 0)) {
        __dlog_print(0,4,DAT_45ea27b4 + 0x45ea26bc,DAT_45ea27b0 + 0x45ea26b8,
                     DAT_45ea27ac + 0x45ea26e5,DAT_45ea27a8 + 0x45ea31b6,0x53e,uVar2);
        context_system_property_add(DAT_45ea27b8 + 0x45ea26c4);
        task_mgr_pause_partial_app(param_1);
      }
      iVar10 = _LAB_45ea2788 + 0x45ea25cc;
      __dlog_print(0,4,iVar10,_LAB_45ea278c + 0x45ea25d2,iVar9,iVar7,0x542,uVar2);
      aul_pause_app(uVar2);
      iVar3 = aul_app_get_pid(uVar2);
      iVar4 = aul_app_get_status(uVar2);
      if (iVar4 == 0 && 0 < iVar3) {
        iVar4 = iVar3;
        __dlog_print(0,4,iVar10,_LAB_45ea2790 + 0x45ea261a,iVar9,iVar7,0x549,uVar2,iVar3);
        iVar5 = aul_terminate_pid_async_ex(iVar3);
        if (iVar5 < 0) {
          __dlog_print(0,6,iVar10,DAT_45ea27bc + 0x45ea26e4,iVar9,iVar7,0x54c,iVar5,iVar4);
        }
        else {
          __dlog_print(0,4,iVar10,_LAB_45ea2794 + 0x45ea2644,iVar9,iVar7,0x54e,uVar2,iVar3);
        }
      }
      goto LAB_45ea24ec;
    }
  }
LAB_45ea259e:
  if (local_2c != *piVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

