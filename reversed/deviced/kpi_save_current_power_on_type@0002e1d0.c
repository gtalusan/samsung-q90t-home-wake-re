/* deviced : kpi_save_current_power_on_type@0002e1d0 */

void kpi_save_current_power_on_type(int param_1)

{
  int iVar1;
  
  iVar1 = config_get_product_type();
  if (iVar1 != 0) {
    return;
  }
  iVar1 = DAT_0002e234 + 0x2e1f8;
  if (param_1 != 0x32) {
    if ((param_1 != 0x34) && (iVar1 = pm_get_power_key_count(iVar1), iVar1 == 0)) {
      set_PowerOn_type(DAT_0002e23c + 0x2e22c);
      return;
    }
    iVar1 = DAT_0002e238 + 0x2e218;
  }
  set_PowerOn_type(iVar1);
  return;
}

