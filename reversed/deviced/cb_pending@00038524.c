/* deviced : cb_pending@00038524 */

void cb_pending(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_34;
  undefined4 local_30;
  int local_24;
  
  piVar3 = *(int **)(DAT_0003872c + 0x38534 + DAT_00038730);
  local_24 = *piVar3;
  iVar1 = dbus_pending_call_get_completed();
  if (iVar1 == 0) {
    __dlog_print(2,4,DAT_0003873c + 0x38598,DAT_00038740 + 0x3859c,DAT_00038734 + 0x385a9,
                 DAT_00038738 + 0x3857c,400);
    dbus_pending_call_unref(param_1);
  }
  else {
    dbus_error_init(&local_34);
    iVar1 = dbus_pending_call_steal_reply(param_1);
    if (iVar1 == 0) {
      __dlog_print(2,6,DAT_0003874c + 0x3865c,DAT_00038750 + 0x38668,DAT_00038748 + 0x38675,
                   DAT_00038744 + 0x38634,0x198,local_34,local_30);
      if (*param_2 != 0) {
        dbus_set_error(&local_34,DAT_00038758 + 0x38690,DAT_00038754 + 0x3868c);
        (*(code *)*param_2)(param_2[1],0,&local_34);
        dbus_error_free(&local_34);
      }
    }
    else {
      iVar2 = dbus_set_error_from_message(&local_34,iVar1);
      if (iVar2 == 0) {
        if ((code *)*param_2 != (code *)0x0) {
          (*(code *)*param_2)(param_2[1],iVar1,&local_34);
        }
      }
      else {
        __dlog_print(2,6,DAT_00038764 + 0x386f0,DAT_00038768 + 0x386fc,DAT_00038760 + 0x38709,
                     DAT_0003875c + 0x386c8,0x1a5,local_34,local_30);
        if ((code *)*param_2 != (code *)0x0) {
          (*(code *)*param_2)(param_2[1],0,&local_34);
        }
        dbus_error_free(&local_34);
      }
      dbus_message_unref(iVar1);
      dbus_pending_call_unref(param_1);
    }
  }
  if (local_24 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

