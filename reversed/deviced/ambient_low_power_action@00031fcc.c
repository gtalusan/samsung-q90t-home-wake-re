/* deviced : ambient_low_power_action@00031fcc */

undefined4 ambient_low_power_action(void)

{
  broadcast_state_changed_signal_by_ambient
            (*(undefined4 *)(DAT_00031fec + 0x31fdc),*(undefined4 *)(DAT_00031fec + 0x31fe0));
  return 0;
}

