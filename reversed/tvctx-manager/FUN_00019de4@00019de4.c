/* tvctx-manager : FUN_00019de4@00019de4 */

void FUN_00019de4(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar1 = DAT_0001a03c;
  if (param_2 == 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > bad arguments",DAT_0001a040,DAT_0001a03c,0x86b);
    return;
  }
  iVar3 = vconf_keynode_get_str();
  uVar2 = DAT_0001a040;
  iVar5 = iVar3;
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > %s : %s",DAT_0001a040,uVar1,0x870,
               "memory/tv-viewer/viewer_state",iVar3);
  if ((iVar3 == 0) || (iVar4 = g_strcmp0(iVar3,""), iVar4 == 0)) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > %s is not set",uVar2,uVar1,0x873,
                 "memory/tv-viewer/viewer_state",iVar5);
    return;
  }
  iVar5 = g_strcmp0(iVar3,"resume_focus");
  if (iVar5 == 0) {
    iVar5 = context_check_mask(0x20001,param_2);
    if (iVar5 == 0) {
      context_set_last_source("org.tizen.tv-viewer",param_2);
    }
    context_system_property_remove("tv-viewer_paused");
    context_set(0x11,param_2);
  }
  else {
    iVar5 = g_strcmp0(iVar3,"resume_unfocus");
    if (iVar5 == 0) {
      iVar5 = context_check_mask(0x20001,param_2);
      if (iVar5 == 0) {
        context_set_last_source("org.tizen.tv-viewer",param_2);
      }
      context_system_property_remove("tv-viewer_paused");
      context_set(1,param_2);
      context_unset(0x10,param_2);
      iVar5 = g_strcmp0(iVar3,"pause");
      goto joined_r0x00019f18;
    }
    context_system_property_add("tv-viewer_paused");
    iVar5 = context_count_task_invisible_delivery(3,param_2);
    if (iVar5 < 1) {
      uVar6 = 0x11;
    }
    else {
      uVar6 = 0x10;
    }
    context_unset(uVar6,param_2);
  }
  iVar5 = g_strcmp0(iVar3,"pause");
joined_r0x00019f18:
  if (iVar5 != 0) {
    iVar5 = task_mgr_task_find_name("tv-viewer",param_2);
    if (iVar5 == 0) {
      __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to find tv-viewer task",uVar2,uVar1,
                   0x890);
    }
    else if (*(int *)(iVar5 + 0x4c) != 0) {
      uVar6 = *(undefined4 *)(iVar5 + 4);
      __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > attach %s above %s",uVar2,uVar1,0x893,
                   *(int *)(iVar5 + 0x4c),uVar6);
      iVar3 = aul_resume_app(*(undefined4 *)(iVar5 + 0x4c));
      if (iVar3 < 0) {
        __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to resume appid:%s",uVar2,uVar1,0x895,
                     *(undefined4 *)(iVar5 + 0x4c),uVar6);
      }
      g_free(*(undefined4 *)(iVar5 + 0x4c));
      *(undefined4 *)(iVar5 + 0x4c) = 0;
    }
  }
  task_mgr_set_current_fullscreen_appid(param_2);
  return;
}

