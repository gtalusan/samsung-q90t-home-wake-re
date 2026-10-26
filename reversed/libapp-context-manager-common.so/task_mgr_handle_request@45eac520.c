/* libapp-context-manager-common.so : task_mgr_handle_request@45eac520 */

undefined4 task_mgr_handle_request(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_1 != 0) && (iVar1 = g_strcmp0(param_1,DAT_45eac5b4 + 0x45eac536), iVar1 == 0)) {
    uVar3 = util_debug(param_2,param_3);
    return uVar3;
  }
  iVar1 = event_filter_to_signal(param_2);
  if (iVar1 < 0) {
    event_filter_handle(param_2,0,param_3);
    return 0;
  }
  iVar2 = selector_create(param_1);
  if (iVar2 == 0 || param_2 == 0) {
    uVar3 = 0;
    if (iVar2 == 0) {
      return 0;
    }
  }
  else {
    uVar3 = task_mgr_handle_filter(iVar1,iVar2,0,0,0,0,param_3);
  }
  selector_free(iVar2);
  return uVar3;
}

