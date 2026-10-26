/* deviced : module_exit@000156c0 */

void module_exit(void)

{
  remove_device(DAT_000156e0 + 0x156f0);
  return;
}

