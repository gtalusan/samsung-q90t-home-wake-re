/* deviced : pm_get_state@0002dd40 */

undefined4 pm_get_state(void)

{
  return *(undefined4 *)(*(int *)(DAT_0002dd74 + 0x2dd54) * 0x1c + DAT_0002dd78 + 0x2dd5c);
}

