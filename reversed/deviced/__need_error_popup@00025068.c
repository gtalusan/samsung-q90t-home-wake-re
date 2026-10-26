/* deviced : __need_error_popup@00025068 */

byte __need_error_popup(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = config_get_ces_option();
  if ((((iVar2 == 0) && (iVar2 = config_is_av1_box_model(), iVar2 == 0)) &&
      (*(int *)(__get_poweroff_wait_time + DAT_000250c8) != 1)) &&
     (iVar2 = config_get_product_type(), iVar2 != 4)) {
    bVar1 = is_force_poweroff_required(param_1);
    return bVar1 ^ 1;
  }
  return 0;
}

