/* libapp-context-manager-common.so : FUN_45e9ea04@45e9ea04 */

void FUN_45e9ea04(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar1 = DAT_45e9eaf0;
  iVar4 = DAT_45e9eaf4 + 0x45e9ea1a;
  if (*(int *)(DAT_45e9eaf0 + 0x45e9eb8e) == 0) {
    iVar4 = g_hash_table_new_full
                      (*(undefined4 *)(iVar4 + DAT_45e9eb28),*(undefined4 *)(iVar4 + DAT_45e9eb24),
                       *(undefined4 *)(iVar4 + DAT_45e9eb20));
    *(int *)(iVar1 + 0x45e9eb8e) = iVar4;
    if (iVar4 == 0) {
      util_handle_critical(DAT_45e9eb2c + 0x45e9eaec);
    }
  }
  puVar2 = (undefined4 *)util_malloc_s(8);
  if (puVar2 == (undefined4 *)0x0) {
    util_handle_critical(DAT_45e9eb1c + 0x45e9eac8);
  }
  iVar4 = DAT_45e9eb10;
  iVar1 = DAT_45e9eb0c;
  if (param_1 == 1) {
    *puVar2 = 1;
    puVar2[1] = param_3;
    __dlog_print(0,3,DAT_45e9eb14 + 0x45e9eab6,DAT_45e9eb18 + 0x45e9eaba,iVar4 + 0x45e9eadb,
                 iVar1 + 0x45e9f2d4,0x72,param_2,param_3);
  }
  else if (param_1 == 4) {
    *puVar2 = 4;
    uVar3 = g_strdup(param_3);
    iVar4 = DAT_45e9eafc;
    iVar1 = DAT_45e9eaf8;
    puVar2[1] = uVar3;
    __dlog_print(0,3,DAT_45e9eb04 + 0x45e9ea68,DAT_45e9eb00 + 0x45e9ea64,iVar4 + 0x45e9ea8b,
                 iVar1 + 0x45e9f284,0x77,param_2,param_3);
  }
  uVar5 = *(undefined4 *)((int)&DAT_45e9ebf0 + DAT_45e9eb08);
  uVar3 = g_strdup(param_2);
  g_hash_table_insert(uVar5,uVar3,puVar2);
  return;
}

