/* deviced : extcon_spdif_ops_exit@000154d0 */

void extcon_spdif_ops_exit(void)

{
  remove_extcon(DAT_000154f0 + 0x15670);
  return;
}

