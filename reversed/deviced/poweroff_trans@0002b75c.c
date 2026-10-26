/* deviced : poweroff_trans@0002b75c */

undefined4 poweroff_trans(void)

{
  if (*(code **)(DAT_0002b790 + 0x2b81c) == (code *)0x0) {
    return 0;
  }
  (**(code **)(DAT_0002b790 + 0x2b81c))(0);
  return 0;
}

