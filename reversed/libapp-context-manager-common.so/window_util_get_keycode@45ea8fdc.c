/* libapp-context-manager-common.so : window_util_get_keycode@45ea8fdc */

int window_util_get_keycode(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return -1;
  }
  if (*(int *)(DAT_45ea9058 + 0x45ea8ffc) == 0) {
    __dlog_print(0,6,DAT_45ea9068 + 0x45ea9022,DAT_45ea9064 + 0x45ea9020,DAT_45ea9060 + 0x45ea904d,
                 DAT_45ea905c + 0x45ea9262,0x25);
    iVar1 = -1;
  }
  else {
    iVar1 = GetKeyCodeFromKeyName(*(int *)(DAT_45ea9058 + 0x45ea8ffc),param_1);
    if (iVar1 < 1) {
      __dlog_print(0,6,DAT_45ea9078 + 0x45ea904e,DAT_45ea9074 + 0x45ea904c,DAT_45ea9070 + 0x45ea9079
                   ,DAT_45ea906c + 0x45ea928e,0x2d);
      iVar1 = -1;
    }
  }
  return iVar1;
}

