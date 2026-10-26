/* deviced : _resume_ambient_poweroff@000245a0 */

undefined4 _resume_ambient_poweroff(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    __dlog_print(2,6,DAT_0002468c + 0x24664,DAT_00024688 + 0x24660,(int)&DAT_00024674 + DAT_00024684
                 ,DAT_00024680 + 0x24710,0x65d);
    return 0;
  }
  __dlog_print(2,4,DAT_0002467c + 0x24600,DAT_00024678 + 0x245f8,DAT_00024674 + 0x24608,
               DAT_00024670 + 0x246a8,0x662,*param_1);
  device_notify(4,param_1);
  free(param_1);
  return 0;
}

