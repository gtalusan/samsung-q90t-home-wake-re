/* libapp-context-manager-common.so : init_task_list@45e9fdc4 */

void init_task_list(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_44;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [24];
  int local_24;
  
  piVar2 = *(int **)(DAT_45e9fe68 + 0x45e9fdce + DAT_45e9fe6c);
  local_24 = *piVar2;
  context_set(0x400,param_1);
  aul_app_get_running_app_info(DAT_45e9fe70 + 0x45e9fdf0,param_1);
  if (*(int *)(param_1 + 0x2c) == 0) {
    __dlog_print(0,6,DAT_45e9fe80 + 0x45e9fe60,DAT_45e9fe7c + 0x45e9fe5e,DAT_45e9fe78 + 0x45e9fe8b,
                 DAT_45e9fe74 + 0x45ea07a8,0x598);
  }
  g_hash_table_iter_init(auStack_3c,*(undefined4 *)(param_1 + 0x20));
  while (iVar1 = g_hash_table_iter_next(auStack_3c,auStack_40,&local_44), iVar1 != 0) {
    context_notify_task(local_44,param_1);
  }
  context_unset(0x400);
  if (local_24 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

