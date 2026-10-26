/* libapp-context-manager-common.so : context_count_task_invisible_delivery@45e9bf7c */

void context_count_task_invisible_delivery(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_44;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [24];
  int local_24;
  
  piVar3 = *(int **)(DAT_45e9bffc + 0x45e9bf84 + DAT_45e9c000);
  local_24 = *piVar3;
  if ((param_2 == 0) || (*(int *)(param_2 + 0x20) == 0)) {
    iVar2 = -1;
  }
  else {
    iVar2 = 0;
    g_hash_table_iter_init(auStack_3c);
    while (iVar1 = g_hash_table_iter_next(auStack_3c,auStack_40,&local_44), iVar1 != 0) {
      while ((*(int *)(local_44 + 0x30) == param_1 && (*(int *)(local_44 + 0x38) != 0))) {
        iVar2 = iVar2 + 1;
        iVar1 = g_hash_table_iter_next(auStack_3c,auStack_40,&local_44);
        if (iVar1 == 0) goto LAB_45e9bfdc;
      }
    }
  }
LAB_45e9bfdc:
  if (local_24 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}

