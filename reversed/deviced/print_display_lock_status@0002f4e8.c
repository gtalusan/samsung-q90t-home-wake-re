/* deviced : print_display_lock_status@0002f4e8 */

void print_display_lock_status(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_190 [100];
  undefined1 auStack_12c [256];
  int local_2c;
  
  piVar2 = *(int **)(DAT_0002f60c + 0x2f4fc + DAT_0002f610);
  puVar3 = *(undefined4 **)(DAT_0002f614 + param_1 * 4 + 0x2f508);
  local_2c = *piVar2;
  if (puVar3 != (undefined4 *)0x0) {
    iVar5 = DAT_0002f618 + 0x2f578;
    iVar6 = DAT_0002f620 + 0x2f550;
    iVar4 = DAT_0002f61c + 0x2f57e;
    do {
      get_name_from_pid(*puVar3,auStack_12c,0xff);
      uVar1 = get_power_state_str(param_1);
      __snprintf_chk(auStack_190,100,1,100,iVar6,uVar1,auStack_12c,*puVar3);
      print_log_console(auStack_190);
      uVar1 = get_power_state_str(param_1);
      __dlog_print(2,6,DAT_0002f628 + 0x2f5d4,DAT_0002f624 + 0x2f5c8,iVar4,iVar5,0x38,uVar1,
                   auStack_12c,*puVar3);
      puVar3 = (undefined4 *)puVar3[4];
    } while (puVar3 != (undefined4 *)0x0);
  }
  if (local_2c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

