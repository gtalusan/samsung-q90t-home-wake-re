/* libapp-context-manager-common.so : task_mgr_task_find_pid@45e99988 */

undefined4 task_mgr_task_find_pid(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 local_c;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if (*(int *)(param_2 + 0x20) != 0) {
      local_c = param_1;
      uVar1 = g_hash_table_lookup(*(int *)(param_2 + 0x20),&local_c);
    }
  }
  return uVar1;
}

