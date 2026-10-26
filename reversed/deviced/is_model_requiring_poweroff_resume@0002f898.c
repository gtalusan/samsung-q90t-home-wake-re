/* deviced : is_model_requiring_poweroff_resume@0002f898 */

undefined4 is_model_requiring_poweroff_resume(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = config_get_product_type();
  if (iVar1 == 4) {
    return 1;
  }
  uVar2 = config_is_portland_supported();
  return uVar2;
}

