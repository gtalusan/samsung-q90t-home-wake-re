/* deviced : _resume_poweroff@000244b0 */

undefined4 _resume_poweroff(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    __dlog_print(2,6,DAT_0002459c + 0x24574,DAT_00024598 + 0x24570,(int)&DAT_00024584 + DAT_00024594
                 ,DAT_00024590 + 0x2460c,0x64d);
    return 0;
  }
  __dlog_print(2,4,DAT_0002458c + 0x24510,DAT_00024588 + 0x24508,DAT_00024584 + 0x24518,
               DAT_00024580 + 0x245a4,0x652,*param_1);
  device_notify(1,param_1);
  free(param_1);
  return 0;
}

