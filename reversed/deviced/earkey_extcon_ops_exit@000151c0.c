/* deviced : earkey_extcon_ops_exit@000151c0 */

void earkey_extcon_ops_exit(void)

{
  remove_extcon(DAT_000151dc + 0x151d0);
  return;
}

