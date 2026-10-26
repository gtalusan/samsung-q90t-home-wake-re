/* deviced : _sys_power_state@00027ffc */

undefined4 _sys_power_state(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (2 < param_2) {
    return 0;
  }
  if (param_2 - 1 < 2) {
    return 0xffffffff;
  }
  uVar1 = sys_set_str(DAT_00028058 + 0x2803c,DAT_00028054 + 0x28038);
  return uVar1;
}

