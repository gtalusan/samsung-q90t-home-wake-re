/* libapp-context-manager-common.so : context_set_last_source@45e9f770 */

void context_set_last_source(int param_1,int param_2)

{
  if (param_2 == 0 || param_1 == 0) {
    __dlog_print(0,6,DAT_45e9f7c0 + 0x45e9f7ae,DAT_45e9f7bc + 0x45e9f7ac,DAT_45e9f7b8 + 0x45e9f7d7,
                 (int)&DAT_45ea009c + DAT_45e9f7b4,0x5be,param_1);
    return;
  }
  FUN_45e9f27c();
  return;
}

