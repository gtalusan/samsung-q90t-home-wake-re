/* libapp-context-manager-common.so : FUN_45e9c1e0@45e9c1e0 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_45e9c1e0(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte local_145;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  int local_134;
  uint local_130;
  undefined1 auStack_12c [256];
  int local_2c;
  
  piVar4 = *(int **)(DAT_45e9c45c + 0x45e9c1f2 + DAT_45e9c460);
  local_134 = 0;
  local_2c = *piVar4;
  local_130 = 0xffffffff;
  local_138 = 0;
  local_13c = 0;
  local_145 = 0;
  local_140 = 0;
  local_144 = 0;
  memset(auStack_12c,0,0xff);
  iVar1 = aul_window_info_get_pid(param_1,&local_134);
  if (iVar1 < 0) {
    __dlog_print(0,6,DAT_45e9c490 + 0x45e9c396,DAT_45e9c494 + 0x45e9c398,DAT_45e9c488 + 0x45e9c3bb,
                 DAT_45e9c48c + 0x45e9c88c,999,iVar1);
    iVar1 = aul_window_info_get_visibility(param_1,&local_130);
  }
  else {
    iVar1 = aul_window_info_get_visibility(param_1,&local_130);
  }
  if (iVar1 < 0) {
    __dlog_print(0,6,DAT_45e9c4a0 + 0x45e9c3c4,DAT_45e9c4a4 + 0x45e9c3cc,DAT_45e9c498 + 0x45e9c3f5,
                 DAT_45e9c49c + 0x45e9c8cc,0x3eb,iVar1);
    iVar1 = aul_window_info_get_opaque(param_1,&local_145);
  }
  else {
    iVar1 = aul_window_info_get_opaque(param_1,&local_145);
  }
  if (iVar1 < 0) {
    __dlog_print(0,6,DAT_45e9c4b0 + 0x45e9c3fc,DAT_45e9c4b4 + 0x45e9c404,DAT_45e9c4a8 + 0x45e9c42d,
                 DAT_45e9c4ac + 0x45e9c904,0x3ef,iVar1);
  }
  uVar2 = (uint)local_145;
  iVar7 = DAT_45e9c464 + 0x45e9c798;
  iVar6 = DAT_45e9c468 + 0x45e9c2cd;
  iVar5 = DAT_45e9c46c + 0x45e9c2a6;
  iVar1 = local_134;
  uVar8 = local_130;
  __dlog_print(0,3,iVar5,DAT_45e9c470 + 0x45e9c2b4,iVar6,iVar7,0x3f1,local_134,local_130,uVar2);
  if (((local_134 != 0) && (local_145 != 0)) && (local_130 < 2)) {
    iVar3 = aul_window_info_get_geometry(param_1,&local_138,&local_13c,&local_140,&local_144);
    if (iVar3 < 0) {
      __dlog_print(0,6,iVar5,DAT_45e9c4c8 + 0x45e9c450,iVar6,iVar7,0x3f7,iVar3,uVar8,uVar2);
      iVar1 = iVar3;
    }
    iVar5 = util_is_portrait_pig_geometry(local_138,local_13c,local_140,local_144);
    if (iVar5 != 0) {
      iVar5 = aul_app_get_appid_bypid(local_134,auStack_12c,0xff);
      if (iVar5 == 0) {
        __dlog_print(0,4,DAT_45e9c4c0 + 0x45e9c42e,DAT_45e9c4c4 + 0x45e9c432,
                     DAT_45e9c4bc + 0x45e9c45b,DAT_45e9c4b8 + 0x45e9c924,0x400,auStack_12c,local_134
                    );
      }
      else {
        iVar6 = DAT_45e9c47c + 0x45e9c336;
        iVar7 = DAT_45e9c474 + 0x45e9c83a;
        iVar5 = DAT_45e9c478 + 0x45e9c371;
        __dlog_print(0,6,iVar6,DAT_45e9c480 + 0x45e9c340,iVar5,iVar7,0x3fd,iVar1);
        __dlog_print(0,4,iVar6,DAT_45e9c484 + 0x45e9c364,iVar5,iVar7,0x3fe,local_134);
      }
      *param_2 = 1;
    }
  }
  if (local_2c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

