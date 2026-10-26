/* deviced : extcon_hdcp1_ops_exit@00015518 */

void extcon_hdcp1_ops_exit(void)

{
  remove_extcon((int)&DAT_000156e0 + DAT_00015538);
  return;
}

