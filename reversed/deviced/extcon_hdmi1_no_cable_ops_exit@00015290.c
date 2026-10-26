/* deviced : extcon_hdmi1_no_cable_ops_exit@00015290 */

void extcon_hdmi1_no_cable_ops_exit(void)

{
  remove_extcon(DAT_000152b0 + 0x152f0);
  return;
}

