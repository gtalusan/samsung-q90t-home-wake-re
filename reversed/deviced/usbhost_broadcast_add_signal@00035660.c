/* deviced : usbhost_broadcast_add_signal@00035660 */

undefined4 usbhost_broadcast_add_signal(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  broadcast_usbhost_signal_part_0(1);
  return 0;
}

