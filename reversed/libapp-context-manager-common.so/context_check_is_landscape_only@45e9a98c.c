/* libapp-context-manager-common.so : context_check_is_landscape_only@45e9a98c */

bool context_check_is_landscape_only(undefined4 param_1)

{
  int iVar1;
  
  if (*(int *)(DAT_45e9aa04 + 0x45e9a9e0) == 0) {
    __dlog_print(0,6,DAT_45e9aa24 + 0x45e9a9fc,DAT_45e9aa20 + 0x45e9a9fa,DAT_45e9aa1c + 0x45e9aa27,
                 (int)&DAT_45e9ac74 + DAT_45e9aa18,0x588);
    return false;
  }
  iVar1 = g_hash_table_contains(*(int *)(DAT_45e9aa04 + 0x45e9a9e0),param_1);
  if (iVar1 != 0) {
    __dlog_print(0,4,DAT_45e9aa14 + 0x45e9a9ce,DAT_45e9aa10 + 0x45e9a9cc,DAT_45e9aa0c + 0x45e9a9f7,
                 DAT_45e9aa08 + 0x45e9ac44,0x58f,param_1);
  }
  return iVar1 != 0;
}

