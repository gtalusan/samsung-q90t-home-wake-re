/* deviced : config_get_stl_panel_mute@0003a9dc */

void config_get_stl_panel_mute(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 local_20;
  int local_1c;
  
  iVar1 = DAT_0003abc4;
  piVar6 = *(int **)(DAT_0003abbc + 0x3a9f4 + DAT_0003abc0);
  local_20 = 0;
  local_1c = *piVar6;
  if (*(char *)(DAT_0003abc4 + 0x3aa2d) == '\0') {
    iVar7 = DAT_0003abc8 + 0x3aa2c;
    iVar2 = vconf_get_int(iVar7,&local_20);
    if (iVar2 == 0) {
      iVar2 = vconf_notify_key_changed(iVar7,DAT_0003abcc + 0x3aa48);
      if (iVar2 == 0) {
        iVar2 = DAT_0003abd0 + 0x3ab6c;
        iVar4 = DAT_0003abd4 + 0x3aaa5;
        iVar5 = DAT_0003abd8 + 0x3aa94;
        iVar7 = DAT_0003abdc + 0x3aaa0;
        *(undefined4 *)(iVar1 + 0x3aa14) = local_20;
        *(undefined1 *)(iVar1 + 0x3aa2d) = 1;
        __dlog_print(2,4,iVar7,iVar5,iVar4,iVar2,0x141,local_20);
        uVar3 = *(undefined4 *)(iVar1 + 0x3aa14);
      }
      else {
        __dlog_print(2,6,DAT_0003ac0c + 0x3abb0,DAT_0003ac08 + 0x3abac,DAT_0003ac04 + 0x3abbd,
                     DAT_0003ac00 + 0x3ac80,0x13a,iVar7);
        uVar3 = local_20;
      }
    }
    else {
      __dlog_print(2,6,DAT_0003abec + 0x3ab0c,DAT_0003abe8 + 0x3ab08,DAT_0003abe4 + 0x3ab19,
                   (int)&DAT_0003abdc + DAT_0003abe0,0x134,iVar7);
      uVar3 = local_20;
    }
  }
  else {
    __dlog_print(2,4,DAT_0003abfc + 0x3ab60,DAT_0003abf8 + 0x3ab58,DAT_0003abf4 + 0x3ab69,
                 DAT_0003abf0 + 0x3ac30,0x12e,*(undefined4 *)(DAT_0003abc4 + 0x3aa14));
    uVar3 = *(undefined4 *)(iVar1 + 0x3aa14);
  }
  if (local_1c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

