/* libapp-context-manager-common.so : window_util_set_input_configs@45ea8514 */

void window_util_set_input_configs
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_44;
  undefined1 auStack_40 [4];
  int local_3c;
  undefined4 local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar2 = DAT_45ea85cc + 0x45ea8585;
  piVar3 = *(int **)(DAT_45ea85c8 + 0x45ea852a + DAT_45ea85c4);
  iVar5 = DAT_45ea85d0 + 0x45ea86dc;
  iVar6 = DAT_45ea85d4 + 0x45ea8560;
  local_3c = *piVar3;
  iVar4 = DAT_45ea85d8 + 0x45ea8564;
  local_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  while (iVar1 = g_hash_table_iter_next(&local_c,auStack_40,&local_44), iVar1 != 0) {
    iVar1 = KeyRouter_Set_InputConfig(0,param_1,local_44);
    if (iVar1 == 0) {
      __dlog_print(0,6,iVar4,iVar6,iVar2,iVar5,0x1c9,param_1,local_44);
    }
  }
  if (local_3c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

