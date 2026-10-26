/* deviced : register_print_local_time_timer@000311e0 */

void register_print_local_time_timer(void)

{
  ecore_timer_add(0,0x403e0000,DAT_0003120c + 0x311f4,0);
  return;
}

