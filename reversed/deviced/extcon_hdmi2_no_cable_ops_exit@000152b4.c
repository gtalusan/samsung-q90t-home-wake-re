/* deviced : extcon_hdmi2_no_cable_ops_exit@000152b4 */

void extcon_hdmi2_no_cable_ops_exit(void)

{
  remove_extcon(DAT_000152d4 + 0x15328);
  return;
}

