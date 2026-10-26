/* libapp-context-manager-common.so : listen_status_event@45ea3df8 */

void listen_status_event(int param_1,uint param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  __pid_t _Var3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int local_230;
  undefined1 auStack_22c [256];
  undefined1 auStack_12c [256];
  int local_2c;
  
  piVar8 = *(int **)(DAT_45ea4098 + 0x45ea3e0c + DAT_45ea409c);
  local_2c = *piVar8;
  if (param_1 == 0) goto LAB_45ea3e1a;
  iVar7 = DAT_45ea40a0 + 0x45ea3e81;
  iVar4 = (int)&DAT_45ea4b14 + DAT_45ea40a4;
  iVar6 = DAT_45ea40a8 + 0x45ea3e54;
  iVar5 = param_1;
  uVar9 = param_2;
  __dlog_print(0,4,iVar6,DAT_45ea40ac + 0x45ea3e64,iVar7,iVar4,0x44d,param_1,param_2);
  iVar2 = task_mgr_task_find_pid(param_1,param_3);
  if (iVar2 == 0) {
    __dlog_print(0,4,iVar6,DAT_45ea40b0 + 0x45ea3f06,iVar7,iVar4,0x451,iVar5,uVar9);
    iVar5 = aul_app_get_appid_bypid(param_1,auStack_22c,0xff);
    if (iVar5 != 0) {
      __dlog_print(0,4,iVar6,DAT_45ea40c0 + 0x45ea3fc6,iVar7,iVar4,0x454,param_1,uVar9);
      goto LAB_45ea3e1a;
    }
    _Var3 = getpgid(param_1);
    if ((param_1 != _Var3) && (iVar5 = task_mgr_task_find_pid(_Var3,param_3), iVar5 != 0)) {
      __dlog_print(0,4,iVar6,DAT_45ea40b4 + 0x45ea3f48,iVar7,iVar4,0x45c,param_1,_Var3);
      goto LAB_45ea3e1a;
    }
    listen_start(param_1,auStack_22c,param_3);
    iVar2 = task_mgr_task_find_pid(param_1,param_3);
    if (iVar2 == 0) {
      __dlog_print(0,6,DAT_45ea40d0 + 0x45ea400a,DAT_45ea40cc + 0x45ea4008,DAT_45ea40c8 + 0x45ea4037
                   ,DAT_45ea40c4 + 0x45ea4cbc,0x464);
      goto LAB_45ea3e1a;
    }
  }
  iVar5 = *(int *)(iVar2 + 0x14);
  if ((param_2 & 0xfffffffb) == 3) {
    task_mgr_set_current_fullscreen_appid(param_3);
  }
  if (iVar5 == 2 && (param_2 - 3 & 0xfffffffd) == 0) {
    local_230 = 0;
    __snprintf_chk(auStack_12c,0xff,1,0xff,DAT_45ea40bc + 0x45ea3f6e,DAT_45ea40b8 + 0x45ea3f6c,
                   *(undefined4 *)(iVar2 + 4));
    iVar4 = vconf_get_bool(auStack_12c,&local_230);
    if (iVar4 != 0) {
      __dlog_print(0,3,DAT_45ea40e0 + 0x45ea4046,DAT_45ea40dc + 0x45ea4044,DAT_45ea40d8 + 0x45ea406d
                   ,DAT_45ea40d4 + 0x45ea4d04,0x434,auStack_12c);
LAB_45ea3f98:
      if (param_2 != 5) {
        if (param_2 == 7) {
          bVar1 = false;
          goto LAB_45ea3ec8;
        }
        if (param_2 != 3) goto LAB_45ea3e1a;
        bVar1 = false;
        goto LAB_45ea3eb2;
      }
      bVar1 = false;
      goto LAB_45ea3ee0;
    }
    if (local_230 != 1) goto LAB_45ea3f98;
    __dlog_print(0,4,DAT_45ea40f0 + 0x45ea4076,DAT_45ea40ec + 0x45ea4070,
                 &UNK_45ea4097 + DAT_45ea40e4,DAT_45ea40e8 + 0x45ea4d40,0x439,
                 *(undefined4 *)(iVar2 + 4));
    *(undefined4 *)(iVar2 + 0x14) = 9;
    bVar1 = true;
    if (param_2 == 5) goto LAB_45ea3ee0;
    bVar1 = true;
    if (param_2 == 7) goto LAB_45ea3ec8;
    bVar1 = true;
    if (param_2 == 3) goto LAB_45ea3eb2;
  }
  else {
    if (param_2 == 5) {
      bVar1 = false;
LAB_45ea3ee0:
      listen_active(iVar2,param_3);
    }
    else if (param_2 == 7) {
      bVar1 = false;
LAB_45ea3ec8:
      listen_pause(iVar2,param_3);
    }
    else {
      if (param_2 != 3) goto LAB_45ea3e1a;
      bVar1 = false;
LAB_45ea3eb2:
      listen_run(iVar2,param_3);
    }
    if (!bVar1) goto LAB_45ea3e1a;
  }
  *(int *)(iVar2 + 0x14) = iVar5;
LAB_45ea3e1a:
  if (local_2c != *piVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}

