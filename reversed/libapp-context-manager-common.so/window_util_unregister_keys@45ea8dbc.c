/* libapp-context-manager-common.so : window_util_unregister_keys@45ea8dbc */

void window_util_unregister_keys
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_481c;
  undefined1 auStack_4818 [4];
  undefined1 auStack_4814 [18408];
  int local_2c;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piVar3 = *(int **)(DAT_45ea8ea4 + 0x45ea8dc6 + DAT_45ea8ea8);
  local_2c = *piVar3;
  local_10 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  KeyRouter_Reset_KeyList(auStack_4814);
  do {
    iVar1 = g_hash_table_iter_next(&local_10,auStack_4818,&local_481c);
    if (iVar1 == 0) goto LAB_45ea8e1e;
    iVar1 = KeyRouter_Add_Key(local_481c,0,auStack_4814);
  } while (iVar1 != 0);
  __dlog_print(0,6,DAT_45ea8eb4 + 0x45ea8e6c,DAT_45ea8eb8 + 0x45ea8e70,DAT_45ea8eb0 + 0x45ea8e99,
               DAT_45ea8eac + 0x45ea9076,0x6b,local_481c);
LAB_45ea8e1e:
  iVar1 = KeyRouter_UnSet_KeyList(0,auStack_4814);
  if (iVar1 == 0) {
    __dlog_print(0,6,DAT_45ea8ec8 + 0x45ea8e96,DAT_45ea8ec4 + 0x45ea8e94,DAT_45ea8ec0 + 0x45ea8ec3,
                 DAT_45ea8ebc + 0x45ea90a0,0x72);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  if (local_2c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

