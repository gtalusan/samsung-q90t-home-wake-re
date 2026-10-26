/* deviced : power_tv_exit@00022c98 */

void power_tv_exit(void)

{
  unregister_notifier(1,DAT_00022ce8 + 0x22cac);
  unregister_notifier(2,DAT_00022cec + 0x22cc0);
  unregister_notifier(4,DAT_00022cf0 + 0x22cd0);
  unregister_notifier(7,DAT_00022cf4 + 0x22ce0);
  return;
}

