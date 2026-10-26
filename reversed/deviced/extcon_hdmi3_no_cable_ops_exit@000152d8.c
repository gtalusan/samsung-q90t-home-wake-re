/* deviced : extcon_hdmi3_no_cable_ops_exit@000152d8 */

void extcon_hdmi3_no_cable_ops_exit(void)

{
  remove_extcon(DAT_000152f8 + 0x15360);
  return;
}

