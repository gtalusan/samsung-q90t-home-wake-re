/* deviced : extcon_hdbt_ops_exit@000155ec */

void extcon_hdbt_ops_exit(void)

{
  remove_extcon(DAT_0001560c + 0x1564c);
  return;
}

