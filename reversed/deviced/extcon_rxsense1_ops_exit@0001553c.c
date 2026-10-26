/* deviced : extcon_rxsense1_ops_exit@0001553c */

void extcon_rxsense1_ops_exit(void)

{
  remove_extcon((int)&DAT_00015718 + DAT_0001555c);
  return;
}

