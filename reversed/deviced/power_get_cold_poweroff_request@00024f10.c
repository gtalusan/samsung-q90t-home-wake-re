/* deviced : power_get_cold_poweroff_request@00024f10 */

void power_get_cold_poweroff_request(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  byte local_114;
  byte local_113;
  byte local_112;
  char local_111 [129];
  undefined1 auStack_90 [100];
  int local_2c;
  
  piVar2 = *(int **)(DAT_0002504c + 0x24f20 + DAT_00025050);
  local_2c = *piVar2;
  power_get_poweroff_extra_info(&local_114);
  if (local_111[0] == '\0') {
    bVar3 = (local_114 | local_112) ^ 1;
  }
  else {
    bVar3 = 0;
  }
  if (local_111[0] == '\0') {
    bVar3 = bVar3 & local_113;
    bVar4 = bVar3 ^ 1;
  }
  else {
    bVar4 = 1;
  }
  uVar1 = config_get_poweroff_interval_reset();
  __dlog_print(2,4,DAT_00025060 + 0x24fcc,DAT_0002505c + 0x24fc4,DAT_00025058 + 0x24fd4,
               DAT_00025054 + 0x25100,0x9e,bVar3,local_113,-(local_112 ^ 1),local_111,uVar1);
  if (param_1 != 0) {
    __snprintf_chk(auStack_90,100,1,100,DAT_00025064 + 0x25008,bVar3,local_113,-(local_112 ^ 1),
                   local_111,uVar1);
    print_log_console(auStack_90);
  }
  if (local_2c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar4);
  }
  return;
}

