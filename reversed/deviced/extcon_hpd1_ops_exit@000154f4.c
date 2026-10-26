/* deviced : extcon_hpd1_ops_exit@000154f4 */

void extcon_hpd1_ops_exit(void)

{
  remove_extcon(DAT_00015514 + 0x156a8);
  return;
}

