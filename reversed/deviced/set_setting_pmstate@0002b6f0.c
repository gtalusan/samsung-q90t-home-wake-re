/* deviced : set_setting_pmstate@0002b6f0 */

void set_setting_pmstate(undefined4 param_1)

{
  vconf_set_int(DAT_0002b710 + 0x2b704,param_1);
  return;
}

