/* deviced : pm_unlock_state@0002f8c0 */

void pm_unlock_state(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  bool bVar12;
  undefined1 *puVar13;
  undefined1 auStack_12c [256];
  int local_2c;
  
  piVar11 = *(int **)(DAT_0002fc48 + 0x2f8d0 + DAT_0002fc4c);
  local_2c = *piVar11;
  uVar1 = parse_state_str(param_2);
  if (uVar1 == 7) {
    uVar9 = 0xffffffea;
    __dlog_print(2,6,DAT_0002fcac + 0x2fc40,DAT_0002fca8 + 0x2fc3c,DAT_0002fca4 + 0x2fc4a,
                 (int)&DAT_0002fc7c + DAT_0002fca0,0x10a,param_2);
    goto LAB_0002f94c;
  }
  piVar4 = *(int **)(DAT_0002fc50 + uVar1 * 4 + 0x2f914);
  if (piVar4 != (int *)0x0) {
    if (param_1 == *piVar4) {
LAB_0002fb70:
      *(int *)(DAT_0002fc94 + uVar1 * 4 + 0x2fb88) = piVar4[4];
LAB_0002fb04:
      if (piVar4[3] != 0) {
        __dlog_print(0,3,DAT_0002fc8c + 0x2fb50,DAT_0002fc90 + 0x2fb5c,DAT_0002fc88 + 0x2fb66,
                     DAT_0002fc84 + 0x2fbac,0xa4,*piVar4);
        g_source_remove(piVar4[3]);
      }
      free(piVar4);
    }
    else {
      piVar6 = piVar4;
      do {
        piVar6 = (int *)piVar6[4];
        if (piVar6 == (int *)0x0) goto LAB_0002f948;
      } while (param_1 != *piVar6);
      piVar5 = piVar4;
      if (piVar4 == piVar6) goto LAB_0002fb70;
      while (piVar4 = (int *)piVar5[4], piVar4 != (int *)0x0) {
        if (piVar6 == piVar4) {
          piVar5[4] = piVar4[4];
          goto LAB_0002fb04;
        }
        piVar5 = piVar4;
      }
    }
    iVar10 = DAT_0002fc58;
    iVar2 = DAT_0002fc54;
    puVar13 = auStack_12c;
    get_name_from_pid(param_1,puVar13,0xff);
    iVar8 = DAT_0002fc5c + 0x2f9f2;
    __dlog_print(2,4,iVar2 + 0x2f9b8,DAT_0002fc60 + 0x2f9e4,iVar8,iVar10 + 0x2fa30,0x118,param_2,
                 puVar13,param_1);
    if (*(int *)(DAT_0002fc64 + 0x2fa00) == 0) {
      piVar4 = (int *)get_poweroff_info();
      bVar12 = *piVar4 - 1U == 1;
      if (*piVar4 - 1U < 2) {
        bVar12 = uVar1 == 4;
      }
      if ((bVar12) &&
         (uVar7 = piVar4[1], iVar3 = get_current_power_state(),
         ((uint)(iVar3 == 4) & (uVar7 ^ 0x20000000) >> 0x1d) != 0)) {
        __dlog_print(2,4,iVar2 + 0x2f9b8,DAT_0002fc98 + 0x2fbcc,iVar8,iVar10 + 0x2fa30,0x126,param_2
                     ,puVar13,param_1);
        print_log_console(DAT_0002fc9c + 0x2fbe8);
        request_resume_poweroff(2);
      }
      iVar2 = config_get_product_type();
      if (((iVar2 == 4) || (iVar2 = config_is_portland_supported(), iVar2 != 0)) &&
         (*(int *)(DAT_0002fc68 + 0x2fa4c) == 0)) {
        uVar7 = *piVar4 - 1U;
        if (*piVar4 - 1U < 2) {
          uVar7 = uVar1;
        }
        if ((uVar7 == 1) && (iVar2 = get_current_power_state(), iVar2 == 1)) {
          iVar8 = DAT_0002fc70 + 0x2fa90;
          iVar10 = DAT_0002fc74 + 0x2fad2;
          iVar2 = DAT_0002fc6c + 0x2faf8;
          __dlog_print(2,4,iVar8,DAT_0002fc78 + 0x2fab8,iVar10,DAT_0002fc6c + 0x2fb18,0xd7);
          __dlog_print(2,4,iVar8,DAT_0002fc7c + 0x2fad0,iVar10,iVar2,0x130);
          print_log_console(DAT_0002fc80 + 0x2faf0);
          request_resume_poweroff(1);
          uVar9 = 0;
          goto LAB_0002f94c;
        }
      }
    }
  }
LAB_0002f948:
  uVar9 = 0;
LAB_0002f94c:
  if (local_2c != *piVar11) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}

