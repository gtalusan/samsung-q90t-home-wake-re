/* libapp-context-manager-common.so : window_util_set_input_bypass@45ea843c */

undefined4 window_util_set_input_bypass(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = KeyRouter_TV_Set_By_Pass(0,1);
  if (iVar1 == 0) {
    __dlog_print(0,6,DAT_45ea84fc + 0x45ea84ac,DAT_45ea8500 + 0x45ea84ae,DAT_45ea84f4 + 0x45ea84d5,
                 DAT_45ea84f8 + 0x45ea8608,0x1d6,0);
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = KeyRouter_TV_Set_By_Pass(0,2);
    if (iVar1 == 0) {
      __dlog_print(0,6,DAT_45ea850c + 0x45ea84da,DAT_45ea8510 + 0x45ea84dc,DAT_45ea8504 + 0x45ea8503
                   ,DAT_45ea8508 + 0x45ea8636,0x1dc,0);
      uVar2 = 0xffffffff;
    }
    else {
      __dlog_print(0,4,DAT_45ea84f0 + 0x45ea8480,DAT_45ea84ec + 0x45ea847e,DAT_45ea84e8 + 0x45ea84ab
                   ,(int)&DAT_45ea85d4 + DAT_45ea84e4,0x1e0);
      uVar2 = 0;
    }
  }
  return uVar2;
}

