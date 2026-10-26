/* libapp-context-manager-common.so : context_ready@45e9f814 */

undefined4 context_ready(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    __dlog_print(0,6,DAT_45e9f8a4 + 0x45e9f87c,DAT_45e9f8a0 + 0x45e9f87a,DAT_45e9f89c + 0x45e9f8a9,
                 &UNK_45ea0186 + DAT_45e9f898,0x5f0);
    uVar1 = 0xffffffff;
  }
  else {
    FUN_45e9f7c4();
    __dlog_print(0,3,DAT_45e9f890 + 0x45e9f84a,DAT_45e9f894 + 0x45e9f84e,DAT_45e9f88c + 0x45e9f873,
                 DAT_45e9f888 + 0x45ea0152,0x5f6,*(undefined4 *)(DAT_45e9f884 + 0x45e9f86c));
    uVar1 = 0;
  }
  return uVar1;
}

