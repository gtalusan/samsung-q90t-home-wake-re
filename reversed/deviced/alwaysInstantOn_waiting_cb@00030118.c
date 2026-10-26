/* deviced : alwaysInstantOn_waiting_cb@00030118 */

void alwaysInstantOn_waiting_cb(void)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_24 [16];
  int local_14;
  
  iVar1 = DAT_000301b8;
  piVar2 = *(int **)(DAT_000301b0 + 0x3012c + DAT_000301b4);
  local_14 = *piVar2;
  if (*(int *)(DAT_000301b8 + 0x30144) != 0) {
    ecore_timer_del();
    *(undefined4 *)(iVar1 + 0x30144) = 0;
  }
  build_power_off_req(auStack_24,1,1,*(undefined4 *)(DAT_000301bc + 0x3017c),
                      *(undefined4 *)(DAT_000301bc + 0x30180));
  device_notify(7,auStack_24);
  if (local_14 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}

