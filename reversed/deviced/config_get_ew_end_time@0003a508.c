/* deviced : config_get_ew_end_time@0003a508 */

undefined4 config_get_ew_end_time(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(char *)(DAT_0003a580 + 0x3a540) != '\0') {
    return *(undefined4 *)(DAT_0003a580 + 0x3a530);
  }
  if (*(char *)(DAT_0003a580 + 0x3a538) == '\0') {
    iVar2 = config_get_product_type_part_0();
  }
  else {
    iVar2 = *(int *)(DAT_0003a580 + 0x3a514);
  }
  iVar1 = DAT_0003a584;
  if (iVar2 == 0) {
    uVar3 = 0x54600;
  }
  else {
    uVar3 = 0x503340;
    if (iVar2 != 4) {
      uVar3 = 0;
    }
  }
  *(undefined4 *)(DAT_0003a584 + 0x3a578) = uVar3;
  convert_interval_to_minutes[iVar1] = (code)0x1;
  return uVar3;
}

