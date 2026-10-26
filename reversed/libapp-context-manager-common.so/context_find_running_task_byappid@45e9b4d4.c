/* libapp-context-manager-common.so : context_find_running_task_byappid@45e9b4d4 */

void context_find_running_task_byappid(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_44;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [24];
  int local_24;
  
  piVar3 = *(int **)(DAT_45e9b578 + 0x45e9b4dc + DAT_45e9b57c);
  local_24 = *piVar3;
  if (param_1 == 0 || *(int *)(param_2 + 0x20) == 0) {
    iVar2 = 0;
    __dlog_print(0,6,DAT_45e9b58c + 0x45e9b56c,DAT_45e9b588 + 0x45e9b56a,DAT_45e9b584 + 0x45e9b595,
                 DAT_45e9b580 + 0x45e9b952,0x376,param_1);
  }
  else {
    g_hash_table_iter_init(auStack_3c);
    do {
      iVar1 = g_hash_table_iter_next(auStack_3c,auStack_40,&local_44);
      iVar2 = local_44;
      if (iVar1 == 0) {
        iVar2 = 0;
        break;
      }
    } while (((local_44 == 0) || (*(int *)(local_44 + 4) == 0)) ||
            (iVar1 = g_strcmp0(*(int *)(local_44 + 4),param_1), iVar1 != 0));
  }
  if (local_24 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}

