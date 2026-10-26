/* deviced : extcon_hdmi4_ops_exit@0001526c */

void extcon_hdmi4_ops_exit(void)

{
  remove_extcon(DAT_0001528c + 0x152b8);
  return;
}

