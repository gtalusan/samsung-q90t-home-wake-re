/* libapp-context-manager-common.so : FUN_45e9eeb8@45e9eeb8 */

void FUN_45e9eeb8(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar1 = vconf_keynode_get_str();
  iVar2 = task_mgr_task_find_name(DAT_45e9efe4 + 0x45e9eece,param_2);
  if (iVar2 == 0) {
    __dlog_print(0,6,DAT_45e9f02c + 0x45e9efc4,DAT_45e9f028 + 0x45e9efc2,DAT_45e9f024 + 0x45e9eff1,
                 DAT_45e9f020 + 0x45e9f812,0x72b);
    return;
  }
  __dlog_print(0,4,DAT_45e9eff4 + 0x45e9ef00,DAT_45e9eff0 + 0x45e9eefa,DAT_45e9efec + 0x45e9ef25,
               DAT_45e9efe8 + 0x45e9f746,0x72f,uVar1);
  iVar5 = *(int *)(iVar2 + 0x14);
  iVar3 = g_strcmp0(uVar1,DAT_45e9eff8 + 0x45e9ef0c);
  if (iVar3 == 0) {
    iVar3 = 9;
    *(undefined4 *)(iVar2 + 0x14) = 9;
  }
  else {
    iVar3 = 2;
    *(undefined4 *)(iVar2 + 0x14) = 2;
  }
  if (iVar5 != iVar3) {
    uVar1 = task_to_type_string();
    __dlog_print(0,4,DAT_45e9f008 + 0x45e9ef46,DAT_45e9f004 + 0x45e9ef42,DAT_45e9f000 + 0x45e9ef6d,
                 DAT_45e9effc + 0x45e9f78e,0x738,uVar1);
    if (*(int *)(DAT_45e9f00c + 0x45e9ef7a) != 0) {
      g_source_remove();
    }
    iVar3 = DAT_45e9f010;
    uVar1 = g_idle_add(DAT_45e9f014 + 0x45e9ef60,param_2);
    iVar5 = *(int *)(iVar2 + 0x30);
    *(undefined4 *)(iVar3 + 0x45e9ef8a) = uVar1;
    *(undefined4 *)(iVar3 + 0x45e9ef96) = 0;
    if (iVar5 == 3) {
      if (*(int *)(iVar2 + 0x14) == 2) {
        context_set_partial_appid_vconf(*(undefined4 *)(DAT_45e9f030 + 0x45e9efd2));
        handle_listen(*(undefined4 *)(iVar3 + 0x45e9ef76),iVar2,param_2);
      }
      else {
        uVar4 = *(undefined4 *)(DAT_45e9f018 + 0x45e9ef86);
        uVar1 = context_get_current_partial_appid();
        iVar2 = g_strcmp0(uVar4,uVar1);
        if (iVar2 == 0) {
          context_set_partial_appid_vconf(DAT_45e9f01c + 0x45e9ef9c);
        }
      }
    }
  }
  return;
}

