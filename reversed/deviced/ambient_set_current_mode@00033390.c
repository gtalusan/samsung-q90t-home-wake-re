/* deviced : ambient_set_current_mode@00033390 */

void ambient_set_current_mode(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 local_228;
  undefined1 auStack_224 [256];
  undefined1 auStack_124 [256];
  int local_24;
  
  iVar3 = DAT_000335fc;
  piVar6 = *(int **)(DAT_000335f4 + 0x333a0 + DAT_000335f8);
  local_24 = *piVar6;
  iVar1 = parse_mode_str(param_2);
  iVar5 = *(int *)(iVar3 + 0x333cc);
  iVar2 = get_current_power_state();
  if (iVar1 == 5) {
    __dlog_print(2,6,DAT_00033644 + 0x335e8,DAT_00033640 + 0x335e4,DAT_0003363c + 0x335f6,
                 DAT_00033638 + 0x3376c,0x327,param_2);
    iVar3 = -0x16;
  }
  else if (iVar1 == iVar5) {
    __dlog_print(2,4,DAT_00033634 + 0x33598,DAT_00033630 + 0x3358c,DAT_0003362c + 0x335a6,
                 DAT_00033628 + 0x3371c,0x32d,
                 *(undefined4 *)(*(int *)(iVar3 + 0x333cc) * 0x14 + DAT_00033624 + 0x33554));
    iVar3 = 0;
  }
  else if (iVar1 == 4) {
    if (iVar2 == 5 && iVar5 == 3) {
      iVar3 = 0;
      get_cmdline_name(param_1,auStack_224,0x100);
      __dlog_print(2,4,DAT_0003361c + 0x334e0,DAT_00033618 + 0x334dc,DAT_00033614 + 0x334ea,
                   DAT_00033610 + 0x33660,0x33d,param_1,auStack_224);
      __snprintf_chk(auStack_124,0x100,1,0x100,DAT_00033620 + 0x33500,param_1,auStack_224);
      print_log_console(auStack_124);
      local_228 = 1;
      puVar4 = (undefined4 *)get_ambient_poweroff_info();
      *puVar4 = 0;
      device_notify(4,&local_228);
    }
    else {
      __dlog_print(2,6,DAT_0003360c + 0x33478,DAT_00033608 + 0x33470,DAT_00033604 + 0x33482,
                   (int)&DAT_000335f8 + DAT_00033600,0x335,iVar5,iVar2);
      iVar3 = -1;
    }
  }
  else {
    iVar3 = change_mode(param_1,iVar1);
    iVar3 = iVar3 >> 0x1f;
  }
  if (local_24 != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar3);
  }
  return;
}

