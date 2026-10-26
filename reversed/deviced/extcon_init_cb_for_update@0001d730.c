/* deviced : extcon_init_cb_for_update@0001d730 */

undefined4 extcon_init_cb_for_update(void)

{
  __dlog_print(2,4,DAT_0001d79c + 0x1d77c,DAT_0001d798 + 0x1d778,DAT_0001d794 + 0x1d78d,
               DAT_0001d790 + 0x1d7dc,0x22b);
  get_extcon_init_state();
  return 0;
}

