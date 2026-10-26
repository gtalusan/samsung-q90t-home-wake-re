/* libapp-context-manager-common.so : FUN_45eadbd0@45eadbd0 */

void FUN_45eadbd0(int param_1,undefined4 param_2,int param_3,int param_4,int *param_5,
                 undefined4 *param_6)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int local_4c;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [24];
  int local_2c;
  
  piVar5 = *(int **)(DAT_45eadcc4 + 0x45eadbe2 + DAT_45eadcc8);
  local_2c = *piVar5;
  if (param_5 == (int *)0x0 || param_6 == (undefined4 *)0x0) {
LAB_45eadc6c:
    uVar6 = 0xffffffff;
  }
  else {
    if ((param_3 == 0) ||
       (iVar1 = g_hash_table_lookup(*(undefined4 *)(param_4 + 0x1c),param_3), iVar1 == 0)) {
      piVar3 = (int *)FUN_45e99c30(param_1,param_4);
      if (piVar3 == (int *)0x0) {
        if (param_1 == 0) goto LAB_45eadc6c;
LAB_45eadc76:
        g_hash_table_iter_init(auStack_44,*(undefined4 *)(param_4 + 0x20));
        do {
          iVar1 = g_hash_table_iter_next(auStack_44,auStack_48,&local_4c);
          if (iVar1 == 0) goto LAB_45eadc6c;
          iVar4 = g_strcmp0(*(undefined4 *)(local_4c + 4),param_1);
          iVar1 = local_4c;
        } while (iVar4 != 0);
      }
      else if ((piVar3[1] == 0) && (iVar1 = *piVar3, iVar1 != 0)) {
        g_list_free();
      }
      else {
        iVar1 = FUN_45e99e00(piVar3,param_2);
        g_list_free(piVar3);
        if (param_1 != 0 && iVar1 == 0) goto LAB_45eadc76;
      }
      if (iVar1 == 0) goto LAB_45eadc6c;
    }
    *param_5 = iVar1;
    uVar2 = FUN_45ead98c(iVar1,param_2);
    uVar6 = 0;
    *param_6 = uVar2;
  }
  if (local_2c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}

