/* deviced : module_exit@00015178 */

void module_exit(void)

{
  remove_device((int)&DAT_00015198 + DAT_00015198);
  return;
}

