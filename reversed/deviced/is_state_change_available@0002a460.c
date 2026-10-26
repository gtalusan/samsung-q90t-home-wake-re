/* deviced : is_state_change_available@0002a460 */

void is_state_change_available(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  
  iVar1 = DAT_0002a598;
  piVar6 = *(int **)(DAT_0002a588 + 0x2a470 + DAT_0002a58c);
  iVar3 = *piVar6;
  iVar7 = DAT_0002a590 + 0x2a490;
  iVar4 = DAT_0002a594 + 0x2a564;
  iVar2 = get_poweroff_info();
  uVar5 = *(uint *)(iVar2 + 8) & 0x9fffffff;
  uVar8 = *(undefined4 *)(iVar2 + 0x10);
  uVar9 = uVar5;
  __dlog_print(2,4,iVar7,DAT_0002a59c + 0x2a4e0,iVar1 + 0x2a4e2,iVar4,0x33,uVar8,uVar5);
  if (*(uint *)(iVar2 + 0x10) < 2) {
    if (*(uint *)(iVar2 + 0x10) == 0) {
      uVar8 = 1;
      goto LAB_0002a4f8;
    }
    iVar2 = is_force_poweroff_required(uVar5);
    if (iVar2 == 0) {
      iVar2 = vconf_get_int(DAT_0002a5a0 + 0x2a540);
      if (iVar2 != 0) {
        __dlog_print(2,6,iVar7,DAT_0002a5a4 + 0x2a568,iVar1 + 0x2a4e2,iVar4,0x46,uVar8,uVar9);
      }
      uVar8 = 1;
      goto LAB_0002a4f8;
    }
  }
  uVar8 = 0;
LAB_0002a4f8:
  if (iVar3 != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}

