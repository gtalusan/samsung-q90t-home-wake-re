/* deviced : poweroff_waiting_cb@00024348 */

void poweroff_waiting_cb(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int local_84;
  undefined1 auStack_80 [100];
  int local_1c;
  
  iVar1 = DAT_0002448c;
  piVar3 = *(int **)(DAT_00024484 + 0x2435c + DAT_00024488);
  local_1c = *piVar3;
  if (param_1 == (int *)0x0) {
    __dlog_print(2,6,DAT_000244ac + 0x2447c,DAT_000244a8 + 0x24478,(int)&DAT_0002448c + DAT_000244a4
                 ,DAT_000244a0 + 0x244f4,0x311);
  }
  else {
    local_84 = *param_1;
    __dlog_print(2,5,DAT_00024498 + 0x243c0,DAT_00024494 + 0x243bc,DAT_00024490 + 0x243c8,
                 DAT_0002448c + 0x24434,0x317,local_84);
    __snprintf_chk(auStack_80,100,1,100,DAT_0002449c + 0x243e0,local_84);
    print_log_console(auStack_80);
    if (local_84 - 2U < 3) {
      uVar2 = *(undefined4 *)(iVar1 + (local_84 - 2U) * 4 + 0x24448);
    }
    else {
      uVar2 = 0;
    }
    print_callback_list_console_part_1(uVar2);
    device_notify(1,&local_84);
  }
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}

