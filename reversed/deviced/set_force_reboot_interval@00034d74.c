/* deviced : set_force_reboot_interval@00034d74 */

void set_force_reboot_interval(undefined4 param_1)

{
  __dlog_print(2,4,DAT_00034de8 + 0x34dc8,DAT_00034de4 + 0x34dc0,DAT_00034de0 + 0x34dce,
               DAT_00034ddc + 0x34da0,0x59,param_1);
  pi_set_force_reboot_interval(param_1);
  return;
}

