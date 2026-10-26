/* deviced : extcon_av1_ops_exit@00015368 */

void extcon_av1_ops_exit(void)

{
  remove_extcon(extcon_ocm_ops_exit + DAT_00015388);
  return;
}

