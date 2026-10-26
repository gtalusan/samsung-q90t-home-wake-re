/* deviced : usbhost_broadcast_remove_signal@00035688 */

undefined4 usbhost_broadcast_remove_signal(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  broadcast_usbhost_signal_part_0(0);
  return 0;
}

