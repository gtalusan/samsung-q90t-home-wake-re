/* deviced : state_tv_lock_deinit@000156e4 */

void state_tv_lock_deinit(void)

{
  unregister_notifier(8,DAT_00015714 + 0x156f8);
  unregister_notifier(10,DAT_00015718 + 0x1570c);
  return;
}

