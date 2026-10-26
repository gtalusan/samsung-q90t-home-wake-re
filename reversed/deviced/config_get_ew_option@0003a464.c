/* deviced : config_get_ew_option@0003a464 */

bool config_get_ew_option(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (*(char *)(DAT_0003a500 + 0x3a49b) != '\0') {
    return (bool)*(undefined1 *)(DAT_0003a500 + 0x3a488);
  }
  if (param_1 == 0) {
    if (*(char *)(DAT_0003a500 + 0x3a494) == '\0') {
      iVar1 = config_get_product_type_part_0();
    }
    else {
      iVar1 = *(int *)(DAT_0003a500 + 0x3a470);
    }
    bVar2 = iVar1 == 4;
  }
  else {
    bVar2 = false;
    if (param_1 == 1) {
      if (*(char *)(DAT_0003a500 + 0x3a494) == '\0') {
        iVar1 = config_get_product_type_part_0();
      }
      else {
        iVar1 = *(int *)(DAT_0003a500 + 0x3a470);
      }
      bVar2 = iVar1 == 0;
    }
  }
  iVar1 = DAT_0003a504;
  *(bool *)(DAT_0003a504 + 0x3a4d4) = bVar2;
  *(undefined1 *)(iVar1 + 0x3a4e7) = 1;
  return bVar2;
}

