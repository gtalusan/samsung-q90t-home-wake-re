/* deviced : earjack_extcon_ops_init@000158d0 */

void earjack_extcon_ops_init(void)

{
  add_extcon(earkey_extcon_ops_init + DAT_000158f0);
  return;
}

