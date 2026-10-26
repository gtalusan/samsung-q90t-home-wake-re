/* deviced : extcon_tuner1_ops_exit@00015488 */

void extcon_tuner1_ops_exit(void)

{
  remove_extcon(DAT_000154a8 + 0x15600);
  return;
}

