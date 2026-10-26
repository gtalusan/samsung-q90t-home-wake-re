/* tvctx-manager : context_handle_micom_power_key_count@0001d384 */

void context_handle_micom_power_key_count(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int local_2c;
  int local_28;
  int local_24;
  
  local_24 = __stack_chk_guard;
  local_28 = 0;
  local_2c = 0;
  piVar3 = (int *)IPowerControl::getInstance();
  iVar4 = device_power_get_wakeup_reason();
  if (iVar4 == 0x68) {
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > skip instant on when os upgrade",DAT_0001d514,
                 DAT_0001d518,0xa0e);
  }
  else {
    iVar4 = (**(code **)(*piVar3 + 0x48))(piVar3,&local_2c);
    uVar2 = DAT_0001d518;
    uVar1 = DAT_0001d514;
    if (iVar4 == 0) {
      if (local_2c != 0) {
        __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > Always Instant On. set power state to normal"
                     ,DAT_0001d514,DAT_0001d518,0xa15);
        __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > Always Instant On. set power state to normal"
                     ,uVar1,uVar2,0xa16);
        iVar4 = util_set_power_state_normal(0x20,1);
        if (iVar4 == 0) goto LAB_0001d42c;
      }
    }
    else {
      __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to get panel key count",DAT_0001d514,
                   DAT_0001d518,0xa1b);
    }
    iVar4 = (**(code **)(*piVar3 + 0x44))(piVar3,&local_28);
    uVar2 = DAT_0001d518;
    uVar1 = DAT_0001d514;
    if (iVar4 == 0) {
      if (local_28 != 0) {
        __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > Always Instant On. set power state to normal"
                     ,DAT_0001d514,DAT_0001d518,0xa1f);
        __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > Always Instant On. set power state to normal"
                     ,uVar1,uVar2,0xa20);
        util_set_power_state_normal(1);
      }
    }
    else {
      __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to get power key count",DAT_0001d514,
                   DAT_0001d518,0xa25);
    }
  }
LAB_0001d42c:
  if (local_24 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

