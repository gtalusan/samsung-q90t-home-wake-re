/* libapp-context-manager-common.so : context_system_property_check@45e9a444 */

bool context_system_property_check(undefined4 param_1)

{
  int iVar1;
  
  if (*(int *)(DAT_45e9a464 + 0x45e9a47a) == 0) {
    return false;
  }
  iVar1 = g_hash_table_lookup(*(int *)(DAT_45e9a464 + 0x45e9a47a),param_1);
  return iVar1 != 0;
}

