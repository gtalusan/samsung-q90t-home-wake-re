/* deviced : module_exit@000151e0 */

void module_exit(void)

{
  remove_device(DAT_00015200 + 0x15230);
  return;
}

