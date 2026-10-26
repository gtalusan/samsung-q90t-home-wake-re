/* deviced : broadcast_pre_state_changed_signal@0002b794 */

void broadcast_pre_state_changed_signal(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 *local_48;
  undefined1 auStack_44 [32];
  int local_24;
  
  piVar2 = *(int **)(DAT_0002b8b0 + 0x2b7a4 + DAT_0002b8b4);
  local_24 = *piVar2;
  if (5 < param_1 - 1U) {
    param_1 = 6;
  }
  puVar1 = (undefined4 *)get_poweroff_info();
  __snprintf_chk(auStack_44,0x20,1,0x20,DAT_0002b8b8 + 0x2b7ec,*puVar1);
  local_50 = *(undefined4 *)(param_1 * 0x1c + DAT_0002b8bc + 0x2b810 + 4);
  local_4c = *(undefined4 *)(param_2 * 0x1c + DAT_0002b8bc + 0x2b810 + 4);
  local_48 = auStack_44;
  __dlog_print(2,6,DAT_0002b8cc + 0x2b858,DAT_0002b8c8 + 0x2b844,DAT_0002b8c0 + 0x2b84e,
               DAT_0002b8c4 + 0x2b824,0x25d,local_50,local_4c,auStack_44);
  broadcast_edbus_signal
            (DAT_0002b8dc + 0x2b894,DAT_0002b8d4 + 0x2b88c,DAT_0002b8d8 + 0x2b890,
             DAT_0002b8d0 + 0x2b880,&local_50);
  if (local_24 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

