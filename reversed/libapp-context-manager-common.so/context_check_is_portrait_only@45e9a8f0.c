/* libapp-context-manager-common.so : context_check_is_portrait_only@45e9a8f0 */

bool context_check_is_portrait_only(undefined4 param_1)

{
  int iVar1;
  
  if (*(int *)(DAT_45e9a968 + 0x45e9a940) == 0) {
    __dlog_print(0,6,DAT_45e9a988 + 0x45e9a960,DAT_45e9a984 + 0x45e9a95e,DAT_45e9a980 + 0x45e9a98b,
                 DAT_45e9a97c + 0x45e9abb8,0x596);
    return false;
  }
  iVar1 = g_hash_table_contains(*(int *)(DAT_45e9a968 + 0x45e9a940),param_1);
  if (iVar1 != 0) {
    __dlog_print(0,4,DAT_45e9a978 + 0x45e9a932,DAT_45e9a974 + 0x45e9a930,DAT_45e9a970 + 0x45e9a95b,
                 DAT_45e9a96c + 0x45e9ab88,0x59d,param_1);
  }
  return iVar1 != 0;
}

