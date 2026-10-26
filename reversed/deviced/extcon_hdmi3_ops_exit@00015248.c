/* deviced : extcon_hdmi3_ops_exit@00015248 */

void extcon_hdmi3_ops_exit(void)

{
  remove_extcon(DAT_00015268 + 0x15280);
  return;
}

