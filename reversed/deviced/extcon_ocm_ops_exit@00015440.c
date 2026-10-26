/* deviced : extcon_ocm_ops_exit@00015440 */

void extcon_ocm_ops_exit(void)

{
  remove_extcon(DAT_00015460 + 0x15590);
  return;
}

