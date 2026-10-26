/* deviced : config_get_product_type@0003a1b4 */

undefined4 config_get_product_type(void)

{
  undefined4 uVar1;
  
  if (*(char *)(DAT_0003a1ec + 0x3a1e8) == '\0') {
    uVar1 = config_get_product_type_part_0();
    return uVar1;
  }
  return *(undefined4 *)(DAT_0003a1ec + 0x3a1c4);
}

