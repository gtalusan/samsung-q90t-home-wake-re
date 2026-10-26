/* libapp-context-manager-common.so : listen_stop@45ea3ac8 */

undefined4 listen_stop(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = DAT_45ea3c90 + 0x45ea3ae4;
  iVar7 = DAT_45ea3c88 + 0x45ea475e;
  iVar4 = DAT_45ea3c8c + 0x45ea3b21;
  __dlog_print(0,4,iVar8,DAT_45ea3c94 + 0x45ea3af4,iVar4,iVar7,0x203,param_1);
  window_handler_release_pid(param_1);
  iVar1 = task_mgr_task_find_pid(param_1,param_2);
  if (iVar1 == 0) {
    __dlog_print(0,3,iVar8,DAT_45ea3cc8 + 0x45ea3c3a,iVar4,iVar7,0x20a,param_1);
    return 0;
  }
  remove_epop_blocker_pid(param_1,param_2);
  uVar5 = *(undefined4 *)(iVar1 + 4);
  iVar4 = g_strcmp0(*(undefined4 *)(param_2 + 0x38),DAT_45ea3c98 + 0x45ea3b2c);
  if ((iVar4 != 0) &&
     (iVar7 = g_strcmp0(uVar5,*(undefined4 *)(param_2 + 0x38)), iVar4 = DAT_45ea3cac, iVar7 == 0)) {
    puVar6 = (undefined4 *)(DAT_45ea3cac + 0x45ea3baa);
    iVar8 = task_mgr_check_visible(puVar6,0,0,param_2);
    iVar7 = DAT_45ea3cb0;
    if (iVar8 != 0) {
      uVar5 = *(undefined4 *)(iVar4 + 0x45ea3bae);
      uVar2 = *(undefined4 *)(iVar4 + 0x45ea3bb2);
      uVar3 = *(undefined4 *)(iVar4 + 0x45ea3bb6);
      *(undefined4 *)(DAT_45ea3cb0 + 0x45ea3d44) = *puVar6;
      *(undefined4 *)(iVar7 + 0x45ea3d48) = uVar5;
      *(undefined4 *)(iVar7 + 0x45ea3d4c) = uVar2;
      *(undefined4 *)(iVar7 + 0x45ea3d50) = uVar3;
      uVar5 = *(undefined4 *)(iVar4 + 0x45ea3bba);
      *(short *)(iVar7 + 0x45ea3d54) = (short)uVar5;
      *(char *)(iVar7 + 0x45ea3d56) = (char)((uint)uVar5 >> 0x10);
      FUN_45eacab8(param_2 + 0x34);
    }
  }
  if (iVar1 == *(int *)(param_2 + 0x2c)) {
    __dlog_print(0,4,DAT_45ea3cd8 + 0x45ea3c70,DAT_45ea3cd4 + 0x45ea3c6c,DAT_45ea3cd0 + 0x45ea3c99,
                 DAT_45ea3ccc + 0x45ea48d4,0x212,param_1);
    handle_listen(*(undefined4 *)((int)&DAT_45ea3ca0 + DAT_45ea3cdc),iVar1,param_2);
    *(undefined4 *)(param_2 + 0x2c) = 0;
  }
  if (*(int *)(iVar1 + 0x30) == 3) {
    listen_pause(iVar1,param_2);
  }
  iVar7 = DAT_45ea3c9c + 0x45ea3b46;
  iVar4 = context_system_property_check(iVar7);
  if ((iVar4 != 0) &&
     (iVar4 = g_strcmp0(*(undefined4 *)(iVar1 + 4),DAT_45ea3cb4 + 0x45ea3be0), iVar4 == 0)) {
    context_system_property_remove(iVar7);
    __dlog_print(0,4,DAT_45ea3cc4 + 0x45ea3c14,DAT_45ea3cc0 + 0x45ea3c12,DAT_45ea3cbc + 0x45ea3c3d,
                 DAT_45ea3cb8 + 0x45ea4886,0x1fd);
  }
  iVar4 = DAT_45ea3ca0;
  hlogc(DAT_45ea3ca4 + 0x45ea3b8a,(int)&DAT_45ea3dec + DAT_45ea3ca0,DAT_45ea3ca8 + 0x45ea3b62,
        *(undefined4 *)(iVar1 + 4));
  remove_task(iVar1,param_2);
  update_state(iVar1,5,param_2);
  handle_listen(*(undefined4 *)(iVar4 + 0x45ea3b6c),iVar1,param_2);
  release_task(iVar1,param_2);
  return 0;
}

