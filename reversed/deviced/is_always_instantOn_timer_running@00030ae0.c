/* deviced : is_always_instantOn_timer_running@00030ae0 */

bool is_always_instantOn_timer_running(void)

{
  return *(int *)(DAT_00030b08 + 0x30af8) != 0;
}

