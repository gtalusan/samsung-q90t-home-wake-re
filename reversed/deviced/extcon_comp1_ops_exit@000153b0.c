/* deviced : extcon_comp1_ops_exit@000153b0 */

void extcon_comp1_ops_exit(void)

{
  remove_extcon(DAT_000153d0 + 0x154b0);
  return;
}

