/* libapp-context-manager-common.so : task_mgr_task_find_name@45e999a8 */

void task_mgr_task_find_name(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *local_44;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [24];
  int local_24;
  
  piVar3 = *(int **)(DAT_45e99a18 + 0x45e999b0 + DAT_45e99a1c);
  local_24 = *piVar3;
  if ((param_2 == 0) || (*(int *)(param_2 + 0x20) == 0)) {
LAB_45e99a10:
    piVar2 = (int *)0x0;
  }
  else {
    g_hash_table_iter_init(auStack_3c);
    do {
      iVar1 = g_hash_table_iter_next(auStack_3c,auStack_40,&local_44);
      piVar2 = local_44;
      if (iVar1 == 0) goto LAB_45e99a10;
    } while (((local_44 == (int *)0x0) || (*local_44 == 0)) ||
            (iVar1 = g_strcmp0(param_1), iVar1 != 0));
  }
  if (local_24 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(piVar2);
  }
  return;
}

