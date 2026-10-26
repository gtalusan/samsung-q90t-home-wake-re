/* deviced : extcon_scart1_ops_init@00015a54 */

void extcon_scart1_ops_init(void)

{
  add_extcon((int)&DAT_00015b04 + DAT_00015a74);
  return;
}

