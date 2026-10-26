/* deviced : usbdev_broadcast_signal@0003661c */

void usbdev_broadcast_signal(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  if ((uVar1 & 0xffffffef) != 0xef && uVar1 != 9) {
    __dlog_print(2,4,DAT_000366c4 + 0x3668c,DAT_000366c8 + 0x3669c,DAT_000366c0 + 0x366b1,
                 (int)&DAT_000366c8 + DAT_000366bc,0xaf,param_2,*param_1,uVar1,param_1[2],
                 param_1[0x10]);
  }
  usbdev_broadcast_signal_part_0(param_1,param_2);
  return;
}

