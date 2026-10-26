/* deviced : is_poweroff_in_progress@0003be44 */

bool is_poweroff_in_progress(void)

{
  return 1 < *(uint *)(DAT_0003be70 + 0x3be64);
}

