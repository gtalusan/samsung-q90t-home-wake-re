/* deviced : extcon_fan_ops_exit@0001541c */

void extcon_fan_ops_exit(void)

{
  remove_extcon(DAT_0001543c + 0x15558);
  return;
}

