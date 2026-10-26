/* libapp-context-manager-common.so : listen_pause@45ea391c */

undefined4 listen_pause(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    __dlog_print(0,4,DAT_45ea3ac0 + 0x45ea3a56,DAT_45ea3abc + 0x45ea3a54,DAT_45ea3ab8 + 0x45ea3a83,
                 (int)&DAT_45ea46b0 + DAT_45ea3ab4,0x1d5);
    return 0;
  }
  remove_epop_blocker_pid(param_1[0xb]);
  if (param_1[1] != 0) {
    hlogc(DAT_45ea3a84 + 0x45ea3964,DAT_45ea3a80 + 0x45ea3bd2,DAT_45ea3a88 + 0x45ea394a);
    kpi_log_add(DAT_45ea3a8c + 0x45ea3958,3,param_1[1]);
    send_app_overlay_event(param_1[1],DAT_45ea3a90 + 0x45ea3964,param_2);
  }
  update_state(param_1,4,param_2);
  handle_listen(*(undefined4 *)(DAT_45ea3a94 + 0x45ea3996),param_1,param_2);
  if (param_1[6] != 0) {
    iVar4 = DAT_45ea3aa0 + 0x45ea39a6;
    iVar3 = DAT_45ea3a98 + 0x45ea460e;
    iVar2 = DAT_45ea3a9c + 0x45ea39e1;
    __dlog_print(0,4,iVar4,DAT_45ea3aa4 + 0x45ea39ae,iVar2,iVar3,0x1e4);
    iVar1 = aul_app_get_status_bypid(param_1[0xb]);
    __dlog_print(0,4,iVar4,DAT_45ea3aa8 + 0x45ea39d8,iVar2,iVar3,0x1e6,iVar1);
    if (iVar1 != 5) {
      iVar1 = aul_terminate_pid(param_1[0xb]);
      if (iVar1 == 0) {
        __dlog_print(0,4,iVar4,DAT_45ea3aac + 0x45ea3a00,iVar2,iVar3,0x1f0,*param_1);
        return 0;
      }
      __dlog_print(0,6,iVar4,DAT_45ea3ab0 + 0x45ea3a26,iVar2,iVar3,0x1ed,param_1[0xb]);
      return 0;
    }
    __dlog_print(0,4,iVar4,DAT_45ea3ac4 + 0x45ea3a7c,iVar2,iVar3,0x1e8,*param_1);
  }
  return 0;
}

