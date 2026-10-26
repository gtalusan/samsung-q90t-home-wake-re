/* tvctx-manager : FUN_0001b828@0001b828 */

void FUN_0001b828(uint param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  char *pcVar10;
  char local_35;
  int local_34;
  int local_30;
  int local_2c;
  
  iVar2 = DAT_0001bb98;
  uVar1 = DAT_0001bb94;
  local_2c = __stack_chk_guard;
  iVar3 = context_check_mask(0x400);
  uVar9 = param_1;
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > power off called:%x",uVar1,iVar2,0x6e2,param_1);
  context_set(0x8000000,param_2);
  pcVar6 = *(char **)(param_2 + 0x38);
  local_34 = 0;
  local_30 = 0;
  local_35 = '\0';
  iVar4 = vconf_get_int("db/menu/app_booting",&local_30);
  if (iVar4 != 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to get %s",uVar1,iVar2 + 0x14,0x6a5,
                 "db/menu/app_booting");
    goto LAB_0001b8e2;
  }
  if (local_30 == 0) {
    uVar8 = 0x6aa;
    pcVar6 = "%s: %s(%d) > app booting disabled";
LAB_0001b8cc:
    __dlog_print(0,5,"tvctx-manager",pcVar6,uVar1,iVar2 + 0x14,uVar8,uVar9);
    goto LAB_0001b8e2;
  }
  iVar4 = system_info_get_value_bool(0x1e8,&local_35);
  if (iVar4 == 0) {
    iVar4 = system_info_get_value_int(0x2c7,&local_34);
    if (iVar4 != 0) {
      uVar8 = 0x6b3;
      pcVar6 = "%s: %s(%d) > SYSTEM_INFO_KEY_APP_BOOT_SUPPORT_AFTER_RESET get failed";
      goto LAB_0001b9a0;
    }
    iVar4 = context_system_property_check("portland_on_portrait");
    if (iVar4 != 0) {
      uVar8 = 0x6b8;
      pcVar6 = "%s: %s(%d) > on portrait";
      goto LAB_0001b8cc;
    }
    iVar5 = device_power_get_ambient_mode();
    iVar7 = iVar2 + 0x14;
    iVar4 = iVar5;
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > cur ambient mode %d",uVar1,iVar7,0x6bd,iVar5);
    if (0 < iVar5) goto LAB_0001b8e2;
    if (iVar5 != 0) {
      __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > device_power_get_ambient_mode failed",uVar1,
                   iVar7,0x6c2,iVar4);
    }
    iVar4 = local_34;
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > appboot %d, appboot_after_reset %d",uVar1,iVar7,
                 0x6c5,local_35,local_34);
    if ((local_35 == '\0') || (local_34 != 1)) goto LAB_0001b8e2;
    iVar5 = context_system_property_check("autorun_last_app");
    if ((iVar5 == 0) ||
       ((pcVar6 == (char *)0x0 || (iVar5 = context_check_is_livetv(pcVar6), iVar5 != 0)))) {
      uVar8 = context_get_last_service();
      __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > last source : %s, app-source : %s",uVar1,iVar7,
                   0x6d2,uVar8,pcVar6);
      goto LAB_0001b8e2;
    }
    pcVar10 = pcVar6;
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > saving last appsource %s for recovery",uVar1,
                 iVar7,0x6cb,pcVar6,iVar4);
    iVar4 = vconf_set_str("db/volt/last_service_app_booting",pcVar6);
    if (iVar4 != 0) {
      __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to set %s",uVar1,iVar7,0x6cd,
                   "db/volt/last_service_app_booting");
      goto LAB_0001b8e2;
    }
  }
  else {
    uVar8 = 0x6af;
    pcVar6 = "%s: %s(%d) > SYSTEM_INFO_KEY_APP_BOOTING_SUPPORT get failed";
LAB_0001b9a0:
    __dlog_print(0,6,"tvctx-manager",pcVar6,uVar1,iVar2 + 0x14,uVar8);
LAB_0001b8e2:
    pcVar10 = "db/volt/last_service_app_booting";
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > reset %s",uVar1,iVar2 + 0x14,0x6d6,
                 "db/volt/last_service_app_booting");
    iVar4 = vconf_set_str("db/volt/last_service_app_booting","");
    if (iVar4 != 0) {
      pcVar10 = "db/volt/last_service_app_booting";
      __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to set %s",uVar1,iVar2 + 0x14,0x6d8,
                   "db/volt/last_service_app_booting");
    }
  }
  if ((param_1 & 0x40000000) == 0) goto LAB_0001b94e;
  __dlog_print(0,3,"tvctx-manager","%s: %s(%d) > suspend mode received",uVar1,iVar2,0x6e7,pcVar10);
  DAT_0003b56c = 0;
  if (iVar3 == 0) {
    context_unset(0x20000000,param_2);
    event_filter_handle("power.suspend",*(undefined4 *)(param_2 + 0x2c),param_2);
    iVar4 = context_system_property_check("portland_on_portrait");
    if (iVar4 != 0) {
      tzplatform_mkpath(7,"/app-boot-manager");
      FUN_0001b6ac();
      context_set(0x20000000,param_2);
      goto LAB_0001b94e;
    }
LAB_0001bac0:
    if ((*(int *)(param_2 + 0x38) == 0) ||
       ((iVar4 = context_check_is_livetv(), iVar4 == 0 &&
        (iVar4 = context_find_running_task_byappid(*(undefined4 *)(param_2 + 0x38),param_2),
        iVar4 == 0)))) {
      __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > source app stopped or empty, launch livetv",
                   uVar1,iVar2,0x6f4);
      event_filter_handle("power.livetv",*(undefined4 *)(param_2 + 0x2c),param_2);
    }
    tzplatform_mkpath(7,"/app-boot-manager");
    FUN_0001b6ac();
    context_set(0x20000000,param_2);
    if (iVar3 == 0) goto LAB_0001b94e;
  }
  else {
    context_unset(0x400,param_2);
    context_unset(0x20000000,param_2);
    event_filter_handle("power.suspend",*(undefined4 *)(param_2 + 0x2c),param_2);
    iVar4 = context_system_property_check("portland_on_portrait");
    if (iVar4 == 0) goto LAB_0001bac0;
    tzplatform_mkpath(7,"/app-boot-manager");
    FUN_0001b6ac();
    context_set(0x20000000,param_2);
  }
  context_set(0x400,param_2);
LAB_0001b94e:
  if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}

