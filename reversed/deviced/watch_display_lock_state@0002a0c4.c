/* deviced : watch_display_lock_state@0002a0c4 */

undefined4 watch_display_lock_state(undefined4 param_1,undefined4 param_2)

{
  pm_unlock_all_state(param_2);
  return 0;
}

