/* libapp-context-manager-common.so : config_kv_put@45ea0b3c */

void config_kv_put(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = DAT_45ea0bac;
  iVar2 = DAT_45ea0bb0 + 0x45ea0b50;
  if (*(int *)(DAT_45ea0bac + 0x45ea0ccc) == 0) {
    iVar2 = g_hash_table_new_full
                      (*(undefined4 *)(iVar2 + DAT_45ea0bb8),*(undefined4 *)(iVar2 + DAT_45ea0bc0),
                       *(undefined4 *)(iVar2 + DAT_45ea0bbc),DAT_45ea0bc4 + 0x45ea0b98,param_4);
    *(int *)(iVar1 + 0x45ea0ccc) = iVar2;
    if (iVar2 == 0) {
      return;
    }
  }
  puVar3 = (undefined4 *)util_malloc_s(0xc);
  iVar1 = DAT_45ea0bb4;
  if (puVar3 == (undefined4 *)0x0) {
    return;
  }
  puVar3[2] = param_4;
  *puVar3 = param_2;
  puVar3[1] = param_3;
  uVar5 = *(undefined4 *)(iVar1 + 0x45ea0cec);
  uVar4 = g_strdup(param_1);
  g_hash_table_insert(uVar5,uVar4,puVar3);
  return;
}

