/* deviced : extcon_init_state@0001daec */

void extcon_init_state(void)

{
  int iVar1;
  
  iVar1 = get_extcon_init_state();
  if (iVar1 < 0) {
    __dlog_print(2,6,DAT_0001dc54 + 0x1dc1c,DAT_0001dc50 + 0x1dc18,DAT_0001dc4c + 0x1dc29,
                 DAT_0001dc48 + 0x1dcbc,0x244,iVar1);
  }
  iVar1 = DAT_0001dc20;
  register_kernel_uevent_control(DAT_0001dc20 + 0x1db10);
  register_kernel_uevent_control(iVar1 + 0x1db20);
  iVar1 = __create_ready_flag();
  if (iVar1 < 0) {
    __dlog_print(2,6,DAT_0001dc44 + 0x1dbd0,DAT_0001dc40 + 0x1dbcc,DAT_0001dc3c + 0x1dbe1,
                 DAT_0001dc38 + 0x1dc74,599);
  }
  __dlog_print(2,4,DAT_0001dc30 + 0x1db6c,DAT_0001dc2c + 0x1db68,DAT_0001dc28 + 0x1db7d,
               (int)&DAT_0001dc24 + DAT_0001dc24,0x236);
  ecore_timer_add(0,0x40000000,DAT_0001dc34 + 0x1db80,0);
  return;
}

