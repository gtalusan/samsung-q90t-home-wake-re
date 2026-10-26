/* deviced : earjack_extcon_ops_exit@0001519c */

void earjack_extcon_ops_exit(void)

{
  remove_extcon(earkey_extcon_ops_exit + DAT_000151bc);
  return;
}

