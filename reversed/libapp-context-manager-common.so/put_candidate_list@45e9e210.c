/* libapp-context-manager-common.so : put_candidate_list@45e9e210 */

void put_candidate_list(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = DAT_45e9e29c;
  iVar4 = DAT_45e9e298 + 0x45e9e218;
  if (*(int *)(param_2 + 0xc) != 0) {
    return;
  }
  if (*(int *)(DAT_45e9e29c + 0x45e9e24e) == 0) {
    iVar4 = g_hash_table_new_full
                      (*(undefined4 *)(iVar4 + DAT_45e9e2ac),*(undefined4 *)(iVar4 + DAT_45e9e2a8),
                       *(undefined4 *)(iVar4 + DAT_45e9e2a4));
    *(int *)(iVar1 + 0x45e9e24e) = iVar4;
    if (iVar4 == 0) {
      __dlog_print(0,6,DAT_45e9e2bc + 0x45e9e294,DAT_45e9e2b8 + 0x45e9e292,DAT_45e9e2b4 + 0x45e9e2c1
                   ,DAT_45e9e2b0 + 0x45e9ea3a,0x88);
      return;
    }
  }
  puVar2 = (undefined4 *)util_malloc_s(4);
  *puVar2 = param_1;
  piVar3 = (int *)util_malloc_s(8);
  *piVar3 = param_2;
  iVar4 = util_get_time_in_millis();
  iVar1 = DAT_45e9e2a0;
  piVar3[1] = iVar4;
  g_hash_table_insert(*(undefined4 *)(iVar1 + 0x45e9e276),puVar2,piVar3);
  return;
}

