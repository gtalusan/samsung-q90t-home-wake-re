/* deviced : edbus_getdisplaycount@00029630 */

void edbus_getdisplaycount(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_58;
  undefined1 auStack_54 [56];
  int local_1c;
  
  piVar3 = *(int **)(DAT_000296d8 + 0x29640 + DAT_000296dc);
  local_58 = 0;
  local_1c = *piVar3;
  uVar1 = config_get_product_type();
  if ((uVar1 < 8) && ((1 << (uVar1 & 0xff) & 0xccU) != 0)) {
    local_58 = 0;
  }
  else {
    local_58 = 1;
  }
  uVar2 = dbus_message_new_method_return(param_2);
  dbus_message_iter_init_append(uVar2,auStack_54);
  dbus_message_iter_append_basic(auStack_54,0x69,&local_58);
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

