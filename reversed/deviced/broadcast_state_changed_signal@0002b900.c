/* deviced : broadcast_state_changed_signal@0002b900 */

void broadcast_state_changed_signal(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  
  iVar2 = DAT_0002ba5c + 0x2b920;
  iVar3 = param_2 * 0x1c + iVar2;
  piVar1 = *(int **)(DAT_0002ba60 + 0x2b928 + DAT_0002ba64);
  local_24 = *piVar1;
  local_34 = *(undefined4 *)(iVar3 + 4);
  broadcast_edbus_signal
            (DAT_0002ba74 + 0x2b964,DAT_0002ba70 + 0x2b960,DAT_0002ba6c + 0x2b954,
             DAT_0002ba68 + 0x2b948,&local_34);
  local_30 = *(undefined4 *)(iVar3 + 4);
  if (5 < param_1 - 1U) {
    param_1 = 6;
  }
  local_34 = *(undefined4 *)(param_1 * 0x1c + iVar2 + 4);
  iVar2 = ambient_get_mode_updated();
  if (iVar2 == 0) {
    local_2c = ambient_get_current_mode_str();
  }
  else {
    local_2c = ambient_get_old_mode_str();
  }
  local_28 = ambient_get_current_mode_str();
  __dlog_print(2,6,DAT_0002ba84 + 0x2b9f8,DAT_0002ba80 + 0x2b9f4,DAT_0002ba7c + 0x2ba0e,
               DAT_0002ba78 + 0x2b9f4,0x247,local_34,local_30,local_2c,local_28);
  broadcast_edbus_signal
            (DAT_0002ba94 + 0x2ba30,DAT_0002ba90 + 0x2ba28,DAT_0002ba8c + 0x2ba24,
             DAT_0002ba88 + 0x2ba1c,&local_34);
  ambient_set_mode_updated(0);
  if (local_24 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

