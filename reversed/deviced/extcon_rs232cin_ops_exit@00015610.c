/* deviced : extcon_rs232cin_ops_exit@00015610 */

void extcon_rs232cin_ops_exit(void)

{
  remove_extcon(DAT_00015630 + 0x15684);
  return;
}

