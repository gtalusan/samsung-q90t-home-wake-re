/* deviced : extcon_tuner2_ops_exit@000154ac */

void extcon_tuner2_ops_exit(void)

{
  remove_extcon(DAT_000154cc + 0x15638);
  return;
}

