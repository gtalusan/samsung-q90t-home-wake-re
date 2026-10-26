/* libapp-context-manager-common.so : listen_run@45ea34dc */

undefined4 listen_run(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *__ptr;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (param_1 == 0) {
    __dlog_print(0,4,DAT_45ea37d0 + 0x45ea36ae,DAT_45ea37cc + 0x45ea36ac,DAT_45ea37c8 + 0x45ea36db,
                 DAT_45ea37c4 + 0x45ea42c4,0x267);
    return 0;
  }
  __dlog_print(0,4,DAT_45ea3768 + 0x45ea3514,DAT_45ea3764 + 0x45ea3510,DAT_45ea3760 + 0x45ea3539,
               DAT_45ea375c + 0x45ea4122,0x26b,*(undefined4 *)(param_1 + 0x2c));
  FUN_45ea29e0(*(undefined4 *)(param_1 + 0x2c),param_1,param_2);
  if (*(int *)(param_1 + 4) != 0) {
    hlogc(DAT_45ea3770 + 0x45ea3548,DAT_45ea376c + 0x45ea37c2,DAT_45ea3774 + 0x45ea353e);
    kpi_log_add(DAT_45ea3778 + 0x45ea354e,2,*(undefined4 *)(param_1 + 4));
    send_app_overlay_event(*(undefined4 *)(param_1 + 4),DAT_45ea377c + 0x45ea355c,param_2);
  }
  update_state(param_1,3,param_2);
  handle_listen(*(undefined4 *)(DAT_45ea3780 + 0x45ea358a),param_1,param_2);
  iVar6 = *(int *)(param_1 + 4);
  if (iVar6 != 0) {
    FUN_45e99484(param_1);
    iVar1 = context_system_property_check(DAT_45ea3784 + 0x45ea3588);
    if ((iVar1 == 0) &&
       ((iVar1 = g_strcmp0(iVar6,DAT_45ea37bc + 0x45ea3668), iVar1 == 0 ||
        (iVar1 = g_strcmp0(iVar6,DAT_45ea37c0 + 0x45ea3682), iVar1 == 0)))) {
      FUN_45e9ce90(iVar6,*(undefined4 *)(param_1 + 0x2c),param_2);
    }
    iVar1 = context_system_property_check(DAT_45ea3788 + 0x45ea3594);
    if (iVar1 != 0) {
      __ptr = (void *)vconf_get_str(DAT_45ea37b4 + 0x45ea363c);
      if (*(int *)(param_1 + 0x14) != 2) {
        iVar7 = DAT_45ea37b8 + 0x45ea3652;
        iVar1 = g_strcmp0(iVar6,iVar7);
        if ((iVar1 != 0) && (iVar1 = g_strcmp0(iVar6,__ptr), iVar1 == 0)) {
          iVar1 = util_is_btmusic_playing(param_2);
          if (iVar1 == 0) {
            iVar9 = DAT_45ea37ec + 0x45ea3718;
            iVar5 = DAT_45ea37e4 + 0x45ea4348;
            iVar8 = DAT_45ea37e8 + 0x45ea3753;
            iVar1 = iVar6;
            __dlog_print(0,4,iVar9,DAT_45ea37f0 + 0x45ea3722,iVar8,iVar5,0x24f,iVar6);
            iVar7 = aul_extension_app_group_relocate_below_base_appid(iVar6,iVar7);
            if (iVar7 < 0) {
              __dlog_print(0,6,iVar9,DAT_45ea37f4 + 0x45ea3756,iVar8,iVar5,0x251,iVar1);
            }
          }
          else {
            __dlog_print(0,4,DAT_45ea37e0 + 0x45ea36f8,DAT_45ea37dc + 0x45ea36f6,
                         DAT_45ea37d8 + 0x45ea3723,DAT_45ea37d4 + 0x45ea4318,0x24d);
          }
        }
      }
      free(__ptr);
    }
    iVar1 = context_system_property_check(DAT_45ea378c + 0x45ea35a0);
    if (((iVar1 != 0) &&
        (iVar1 = context_system_property_check(DAT_45ea3790 + 0x45ea35b4), iVar1 != 0)) &&
       (iVar1 = context_check_is_landscape_only(iVar6), iVar1 != 0)) {
      __dlog_print(0,4,DAT_45ea37a0 + 0x45ea35ee,DAT_45ea379c + 0x45ea35ea,DAT_45ea3798 + 0x45ea3615
                   ,DAT_45ea3794 + 0x45ea420a,0x259,iVar6);
      uVar2 = dcgettext(0,DAT_45ea37a4 + 0x45ea35fa,5);
      uVar3 = dcgettext(0,DAT_45ea37a8 + 0x45ea3606,5);
      uVar4 = dcgettext(0,DAT_45ea37ac + 0x45ea3614,5);
      task_mgr_launch_btn_popup(uVar2,uVar3,0,uVar4,0,0,0,param_2);
      context_system_property_add(DAT_45ea37b0 + 0x45ea3632);
    }
  }
  return 0;
}

