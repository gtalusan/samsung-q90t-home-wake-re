/* deviced : extcon_hdmi4_no_cable_ops_exit@000152fc */

void extcon_hdmi4_no_cable_ops_exit(void)

{
  remove_extcon(DAT_0001531c + 0x15398);
  return;
}

