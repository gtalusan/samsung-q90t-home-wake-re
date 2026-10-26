/* deviced : post_wakeup_waiting_cb@0002ff18 */

void post_wakeup_waiting_cb(void)

{
  int iVar1;
  int *piVar2;
  undefined4 local_3c;
  undefined1 *local_38;
  undefined1 auStack_34 [32];
  int local_14;
  
  iVar1 = DAT_00030050;
  piVar2 = *(int **)(DAT_00030048 + 0x2ff2c + DAT_0003004c);
  local_14 = *piVar2;
  if (*(int *)(DAT_00030050 + 0x2ff40) != 0) {
    ecore_timer_del();
    *(undefined4 *)(iVar1 + 0x2ff40) = 0;
  }
  iVar1 = pi_get_wakeup_reason(&local_3c);
  if (iVar1 < 0) {
    __dlog_print(2,6,DAT_00030078 + 0x30040,DAT_00030074 + 0x3003c,DAT_00030070 + 0x3004e,
                 DAT_0003006c + 0x30030,0x75,iVar1);
  }
  __snprintf_chk(auStack_34,0x20,1,0x20,DAT_00030054 + 0x2ff8c,local_3c);
  local_38 = auStack_34;
  broadcast_edbus_signal
            (DAT_00030060 + 0x2ffc4,DAT_0003005c + 0x2ffbc,DAT_00030064 + 0x2ffc8,
             DAT_00030058 + 0x2ffb0,&local_38);
  trace_begin(DAT_00030068 + 0x2ffd8,auStack_34);
  trace_end();
  if (local_14 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}

