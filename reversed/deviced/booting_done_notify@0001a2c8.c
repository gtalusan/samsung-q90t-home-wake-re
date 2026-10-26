/* deviced : booting_done_notify@0001a2c8 */

undefined4 booting_done_notify(void)

{
  __dlog_print(2,4,DAT_0001a33c + 0x1a314,DAT_0001a338 + 0x1a310,DAT_0001a334 + 0x1a323,
               DAT_0001a330 + 0x1a2f8,0x7b);
  device_notify(0);
  return 0;
}

