/* libapp-context-manager-common.so : FUN_45e99c30@45e99c30 */

void FUN_45e99c30(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int local_4c;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [24];
  int local_2c;
  
  uVar3 = 0;
  piVar4 = *(int **)(DAT_45e99cc4 + 0x45e99c3e + DAT_45e99cc8);
  local_2c = *piVar4;
  if (param_1 != 0 && param_2 != 0) {
    uVar3 = 0;
    g_hash_table_iter_init(auStack_44,*(undefined4 *)(param_2 + 0x1c));
    while (iVar1 = g_hash_table_iter_next(auStack_44,auStack_48,&local_4c), iVar1 != 0) {
      while ((iVar1 = local_4c, iVar2 = g_strcmp0(*(undefined4 *)(local_4c + 4),param_1), iVar2 == 0
             && (*(int *)(iVar1 + 0x24) == 0))) {
        uVar3 = g_list_append(uVar3,iVar1);
        iVar1 = g_hash_table_iter_next(auStack_44,auStack_48,&local_4c);
        if (iVar1 == 0) goto LAB_45e99cac;
      }
    }
  }
LAB_45e99cac:
  if (local_2c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

