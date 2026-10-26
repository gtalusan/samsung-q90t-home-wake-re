/* libapp-context-manager-common.so : config_kv_get@45ea0b1c */

undefined4 config_kv_get(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(DAT_45ea0b38 + 0x45ea0ca2) == 0) {
    return 0;
  }
  uVar1 = g_hash_table_lookup(*(int *)(DAT_45ea0b38 + 0x45ea0ca2),param_1);
  return uVar1;
}

