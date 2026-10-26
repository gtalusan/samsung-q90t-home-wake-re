/* deviced : extcon_magicinfo_ops_exit@000155a4 */

void extcon_magicinfo_ops_exit(void)

{
  remove_extcon(DAT_000155c4 + 0x155dc);
  return;
}

