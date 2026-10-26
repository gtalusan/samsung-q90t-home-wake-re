/* deviced : extcon_dp1_ops_exit@00015580 */

void extcon_dp1_ops_exit(void)

{
  remove_extcon(extcon_magicinfo_ops_exit + DAT_000155a0);
  return;
}

