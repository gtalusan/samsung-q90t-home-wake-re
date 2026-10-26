/* deviced : ambient_off_check@000327ec */

undefined4 ambient_off_check(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 4) {
    __dlog_print(2,6,DAT_000328f8 + 0x32888,DAT_000328f4 + 0x32878,DAT_000328f0 + 0x32892,
                 (int)&DAT_000328ec + DAT_000328ec,0xc6,
                 *(undefined4 *)(param_1 * 0x14 + DAT_000328e4 + 0x32840),DAT_000328e8 + 0x32844);
    uVar1 = 0xffffffff;
  }
  else if (param_2 == 1) {
    __dlog_print(2,6,DAT_00032908 + 0x328d8,DAT_00032904 + 0x328d4,DAT_00032900 + 0x328ea,
                 DAT_000328fc + 0x32944,0xcc);
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
    *(int *)(DAT_000328e0 + 0x3281c) = param_1;
  }
  return uVar1;
}

