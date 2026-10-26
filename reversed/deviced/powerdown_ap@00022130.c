/* deviced : powerdown_ap@00022130 */

void powerdown_ap(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint local_118;
  byte local_114;
  byte local_113;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined1 local_6c;
  int local_2c;
  
  iVar6 = DAT_00022664;
  piVar8 = *(int **)(DAT_00022654 + 0x22144 + DAT_00022658);
  local_2c = *piVar8;
  iVar7 = DAT_0002265c + 0x22164;
  local_118 = 0;
  iVar5 = DAT_00022660 + 0x221e4;
  powerdown();
  iVar6 = iVar6 + 0x221c0;
  __dlog_print(2,6,iVar7,DAT_00022668 + 0x22198,iVar6,iVar5,0x7e);
  power_get_poweroff_extra_info(&local_114);
  uVar9 = (uint)local_113;
  iVar1 = config_is_factory_mode();
  if (iVar1 != 0) {
    __dlog_print(2,6,iVar7,DAT_0002266c + 0x221e4,iVar6,iVar5,0x88);
    vconf_set_int(DAT_00022670 + 0x22200,2);
    sync();
    local_90 = *(undefined4 *)(DAT_00022674 + 0x22214);
    uStack_8c = *(undefined4 *)(DAT_00022674 + 0x22218);
    uStack_88 = *(undefined4 *)(DAT_00022674 + 0x2221c);
    uStack_84 = *(undefined4 *)(DAT_00022674 + 0x22220);
    local_80 = *(undefined4 *)(DAT_00022674 + 0x22224);
    uStack_7c = *(undefined4 *)(DAT_00022674 + 0x22228);
    uStack_78 = *(undefined4 *)(DAT_00022674 + 0x2222c);
    local_74 = CONCAT22(local_74._2_2_,(short)*(undefined4 *)(DAT_00022674 + 0x22230));
    print_log_console(&local_90);
    tv_autotest_osd_mute(1);
    tv_autotest_set_factory_reset_pattern(9);
    __dlog_print(2,6,iVar7,DAT_00022678 + 0x22250,iVar6,iVar5,0x95);
    local_90 = *(undefined4 *)(DAT_0002267c + 0x22274);
    uStack_8c = *(undefined4 *)(DAT_0002267c + 0x22278);
    uStack_88 = *(undefined4 *)(DAT_0002267c + 0x2227c);
    uStack_84 = *(undefined4 *)(DAT_0002267c + 0x22280);
    local_80 = *(undefined4 *)(DAT_0002267c + 0x22284);
    uStack_7c = *(undefined4 *)(DAT_0002267c + 0x22288);
    uStack_78 = *(undefined4 *)(DAT_0002267c + 0x2228c);
    print_log_console(&local_90);
LAB_00022288:
    if (local_2c != *piVar8) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  iVar2 = config_get_always_instant_on_support();
  iVar3 = get_poweroff_info();
  iVar1 = -(local_114 ^ 1);
  if ((uVar9 & (local_114 ^ 1)) == 0) {
    iVar6 = DAT_000226b4 + 0x22530;
  }
  else {
    if (iVar2 != 0) {
      if (*(char *)(iVar3 + 0x1c) != '\0') {
        __dlog_print(2,6,iVar7,DAT_000226b8 + 0x2256c,iVar6,iVar5,0xa7);
        local_90 = *(undefined4 *)(DAT_000226bc + 0x22584);
        uStack_8c = *(undefined4 *)(DAT_000226bc + 0x22588);
        uStack_88 = *(undefined4 *)(DAT_000226bc + 0x2258c);
        uStack_84 = *(undefined4 *)(DAT_000226bc + 0x22590);
        local_80 = *(undefined4 *)(DAT_000226bc + 0x22594);
        uStack_7c = *(undefined4 *)(DAT_000226bc + 0x22598);
        uStack_78 = *(undefined4 *)(DAT_000226bc + 0x2259c);
        local_74 = CONCAT22(local_74._2_2_,(short)*(undefined4 *)(DAT_000226bc + 0x225a0));
        print_log_console(&local_90);
        flush_log_console();
        sync();
        pi_request_reboot(0x6a);
        __dlog_print(2,6,iVar7,DAT_000226c0 + 0x225c8,iVar6,iVar5,0xaf);
        local_90 = *(undefined4 *)(DAT_000226c4 + 0x225e4);
        uStack_8c = *(undefined4 *)(DAT_000226c4 + 0x225e8);
        uStack_88 = *(undefined4 *)(DAT_000226c4 + 0x225ec);
        uStack_84 = *(undefined4 *)(DAT_000226c4 + 0x225f0);
        local_80 = *(undefined4 *)(DAT_000226c4 + 0x225f4);
        uStack_7c = *(undefined4 *)(DAT_000226c4 + 0x225f8);
        uStack_78 = *(undefined4 *)(DAT_000226c4 + 0x225fc);
        local_74 = *(undefined4 *)(DAT_000226c4 + 0x22600);
        uStack_70 = *(undefined4 *)(DAT_000226c4 + 0x22604);
        local_6c = (undefined1)*(undefined4 *)(DAT_000226c4 + 0x22608);
        print_log_console(&local_90);
        goto LAB_00022288;
      }
      uVar4 = *(uint *)(iVar3 + 4) & 0x9fffffff;
      uVar11 = (uint)(uVar4 == 0x10);
      uVar10 = 1;
      __snprintf_chk(&local_90,100,1,100,DAT_00022698 + 0x223c0,uVar9,iVar1,1,uVar11);
      print_log_console(&local_90);
      if (uVar4 != 0x10) {
        iVar3 = DAT_0002269c + 0x22408;
        iVar2 = vconf_get_int(iVar3,&local_118);
        if (iVar2 == 0) {
          __snprintf_chk(&local_90,100,1,100,DAT_000226a0 + 0x22430,local_118,iVar1,uVar10,uVar11);
          print_log_console(&local_90);
          if (local_118 < 2) {
            uVar9 = local_118;
            __dlog_print(2,6,iVar7,DAT_000226a4 + 0x22478,iVar6,iVar5,0xcd,local_118);
            __snprintf_chk(&local_90,100,1,100,DAT_000226a8 + 0x22498,local_118);
            print_log_console(&local_90);
            local_118 = local_118 + 1;
            iVar1 = vconf_set_int(iVar3);
            if (iVar1 == 0) {
              print_log_console(DAT_000226c8 + 0x22614);
              sync();
              flush_log_console();
              pi_request_reboot(0x32);
              __dlog_print(2,6,iVar7,DAT_000226cc + 0x22644,iVar6,iVar5,0xe0);
            }
            else {
              __dlog_print(2,6,iVar7,DAT_000226ac + 0x224e4,iVar6,iVar5,0xd5,uVar9);
              local_90 = *(undefined4 *)(DAT_000226b0 + 0x22500);
              uStack_8c = *(undefined4 *)(DAT_000226b0 + 0x22504);
              uStack_88 = *(undefined4 *)(DAT_000226b0 + 0x22508);
              uStack_84 = *(undefined4 *)(DAT_000226b0 + 0x2250c);
              local_80 = *(undefined4 *)(DAT_000226b0 + 0x22510);
              uStack_7c = *(undefined4 *)(DAT_000226b0 + 0x22514);
              uStack_78 = *(undefined4 *)(DAT_000226b0 + 0x22518);
              local_74 = *(undefined4 *)(DAT_000226b0 + 0x2251c);
              uStack_70 = *(undefined4 *)(DAT_000226b0 + 0x22520);
              local_6c = (undefined1)*(undefined4 *)(DAT_000226b0 + 0x22524);
              print_log_console(&local_90);
            }
          }
        }
      }
      goto LAB_00022314;
    }
    iVar6 = DAT_00022680 + 0x222d4;
  }
  __snprintf_chk(&local_90,100,1,100,iVar6,uVar9,iVar1,iVar2,
                 (*(uint *)(iVar3 + 4) & 0x9fffffff) == 0x10);
  print_log_console(&local_90);
LAB_00022314:
  print_log_console(DAT_00022684 + 0x22320);
  iVar6 = config_get_ew_option(0);
  if ((iVar6 != 0) && (iVar6 = need_ew_boot(), iVar6 != 0)) {
    sync();
    set_ew_boot_mode();
  }
  sync();
                    /* WARNING: Subroutine does not return */
  reboot(0x4321fedc);
}

