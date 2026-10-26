/* libapp-context-manager-common.so : context_select_apps@45ea331c */

void context_select_apps(undefined4 param_1,code *param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_4c;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [24];
  int local_2c;
  
  piVar4 = *(int **)(DAT_45ea3398 + 0x45ea332e + DAT_45ea339c);
  local_2c = *piVar4;
  if (param_2 == (code *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    g_hash_table_iter_init(auStack_44,*(undefined4 *)(param_4 + 0x20));
    while (iVar2 = g_hash_table_iter_next(auStack_44,auStack_48,&local_4c), uVar1 = local_4c,
          uVar3 = 0, iVar2 != 0) {
      iVar2 = selector_test_task(param_1,local_4c,param_4);
      if (iVar2 != 0) {
        (*param_2)(uVar1,param_3,param_4);
      }
    }
  }
  if (local_2c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

