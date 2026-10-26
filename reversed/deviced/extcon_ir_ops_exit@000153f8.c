/* deviced : extcon_ir_ops_exit@000153f8 */

void extcon_ir_ops_exit(void)

{
  remove_extcon(DAT_00015418 + 0x15520);
  return;
}

