/* deviced : extcon_dvi1_ops_exit@00015560 */

void extcon_dvi1_ops_exit(void)

{
  remove_extcon(DAT_0001557c + 0x15570);
  return;
}

