/* libapp-context-manager-common.so : to_keysym@45ea9d48 */

undefined4 to_keysym(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (*(int *)(param_2 + 0x14) == 0)) {
    uVar1 = g_hash_table_lookup(*(undefined4 *)(DAT_45ea9d64 + 0x45ea9dbc),param_1);
    return uVar1;
  }
  return *(undefined4 *)(param_2 + 4);
}

