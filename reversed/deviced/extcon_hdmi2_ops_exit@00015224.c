/* deviced : extcon_hdmi2_ops_exit@00015224 */

void extcon_hdmi2_ops_exit(void)

{
  remove_extcon(extcon_hdmi3_ops_exit + DAT_00015244);
  return;
}

