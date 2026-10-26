/* deviced : extcon_scart1_ops_exit@00015320 */

void extcon_scart1_ops_exit(void)

{
  remove_extcon((int)&DAT_000153d0 + DAT_00015340);
  return;
}

