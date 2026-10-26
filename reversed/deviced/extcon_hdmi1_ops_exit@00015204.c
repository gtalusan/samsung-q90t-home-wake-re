/* deviced : extcon_hdmi1_ops_exit@00015204 */

void extcon_hdmi1_ops_exit(void)

{
  remove_extcon(DAT_00015220 + 0x15214);
  return;
}

