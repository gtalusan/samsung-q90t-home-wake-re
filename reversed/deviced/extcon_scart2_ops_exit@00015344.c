/* deviced : extcon_scart2_ops_exit@00015344 */

void extcon_scart2_ops_exit(void)

{
  remove_extcon(DAT_00015364 + 0x15408);
  return;
}

