/* deviced : lcdon_check@0002bfc0 */

void lcdon_check(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 local_30;
  int local_2c;
  
  piVar4 = *(int **)(DAT_0002c1bc + 0x2bfd0 + DAT_0002c1c0);
  local_2c = *piVar4;
  piVar1 = (int *)get_poweroff_info();
  if (*piVar1 - 1U < 2) {
    uVar7 = piVar1[1] & 0x20000000;
  }
  else {
    uVar7 = 0;
  }
  iVar2 = config_get_product_type();
  if (((iVar2 == 4) || (iVar2 = config_get_B2B_option(), iVar2 != 0)) ||
     (iVar2 = config_is_portland_supported(), iVar2 != 0)) {
    iVar2 = DAT_0002c1c8;
    iVar6 = piVar1[3];
    iVar8 = DAT_0002c1c4 + 0x2c044;
    iVar5 = DAT_0002c1cc + 0x2c092;
    iVar9 = param_2;
    __dlog_print(2,4,iVar8,DAT_0002c1d0 + 0x2c07c,iVar5,DAT_0002c1c8 + 0x2c0c4,0x229,iVar6,param_2);
    if ((iVar6 != 2) && (param_2 - 3U < 2)) {
      iVar6 = param_2 * 0x1c + DAT_0002c1e8 + 0x2c154;
      __dlog_print(2,4,iVar8,DAT_0002c1ec + 0x2c16c,iVar5,iVar2 + 0x2c0b8,0x283,
                   *(undefined4 *)(iVar6 + 4),iVar9);
      local_30 = *(undefined4 *)(iVar6 + 4);
      broadcast_edbus_signal
                (DAT_0002c1fc + 0x2c1a8,DAT_0002c1f8 + 0x2c1a4,DAT_0002c1f4 + 0x2c198,
                 DAT_0002c1f0 + 0x2c190,&local_30);
      broadcast_pre_state_changed_signal(param_1,param_2);
    }
  }
  if ((uVar7 == 0) && (iVar2 = get_display_lock_count(1), 0 < iVar2)) {
    print_display_lock_status(1);
    print_log_console(DAT_0002c1d4 + 0x2c0f0);
    __dlog_print(2,6,DAT_0002c1e4 + 0x2c134,DAT_0002c1e0 + 0x2c130,DAT_0002c1dc + 0x2c142,
                 DAT_0002c1d8 + 0x2c168,0x292);
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;
  }
  if (local_2c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

