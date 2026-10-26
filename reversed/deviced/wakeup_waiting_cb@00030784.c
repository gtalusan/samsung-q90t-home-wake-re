/* deviced : wakeup_waiting_cb@00030784 */

void wakeup_waiting_cb(void)

{
  int iVar1;
  int *piVar2;
  undefined4 local_3c;
  undefined1 *local_38;
  undefined1 auStack_34 [32];
  int local_14;
  
  iVar1 = DAT_000308c0;
  piVar2 = *(int **)(DAT_000308b8 + 0x30798 + DAT_000308bc);
  local_14 = *piVar2;
  if (*(int *)(DAT_000308c0 + 0x307bc) != 0) {
    ecore_timer_del();
    *(undefined4 *)(iVar1 + 0x307bc) = 0;
  }
  iVar1 = pi_get_wakeup_reason(&local_3c);
  if (iVar1 < 0) {
    __dlog_print(2,6,DAT_000308e8 + 0x308b0,DAT_000308e4 + 0x308ac,DAT_000308e0 + 0x308be,
                 DAT_000308dc + 0x30928,0xa8,iVar1);
  }
  __snprintf_chk(auStack_34,0x20,1,0x20,DAT_000308c4 + 0x307f8,local_3c);
  local_38 = auStack_34;
  broadcast_edbus_signal
            (DAT_000308d0 + 0x30830,DAT_000308cc + 0x30828,DAT_000308d4 + 0x30834,
             DAT_000308c8 + 0x3081c,&local_38);
  trace_begin(DAT_000308d8 + 0x30844,auStack_34);
  trace_end();
  register_post_wakeup_callback_timer();
  if (local_14 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}

