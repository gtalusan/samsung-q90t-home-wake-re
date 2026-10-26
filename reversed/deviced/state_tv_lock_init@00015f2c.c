/* deviced : state_tv_lock_init@00015f2c */

void state_tv_lock_init(void)

{
  register_notifier(9,DAT_00015f5c + 0x15f40);
  register_notifier(10,DAT_00015f60 + 0x15f54);
  return;
}

