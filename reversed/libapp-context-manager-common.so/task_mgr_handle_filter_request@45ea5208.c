/* libapp-context-manager-common.so : task_mgr_handle_filter_request@45ea5208 */

int task_mgr_handle_filter_request
              (undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,int param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_2 == (undefined4 *)0x0) {
    return -1;
  }
  uVar4 = *param_2;
  if (param_6 == 0) {
    uVar1 = event_filter_to_signal_string();
    __dlog_print(0,4,DAT_45ea5464 + 0x45ea53be,DAT_45ea5460 + 0x45ea53b6,DAT_45ea545c + 0x45ea53e1,
                 DAT_45ea5458 + 0x45ea619e,0x5be,uVar4,uVar1);
    switch(param_1) {
    case 3:
      goto switchD_45ea5268_caseD_3;
    default:
      iVar2 = 0;
      iVar3 = DAT_45ea5468 + 0x45ea540c;
      goto LAB_45ea52fe;
    case 5:
    case 7:
      goto switchD_45ea5268_caseD_5;
    case 6:
      goto switchD_45ea5268_caseD_6;
    case 9:
      goto switchD_45ea5268_caseD_9;
    case 0xd:
      goto switchD_45ea5268_caseD_d;
    case 0xe:
      goto switchD_45ea5268_caseD_e;
    }
  }
  uVar1 = event_filter_to_signal_string();
  __dlog_print(0,4,DAT_45ea5420 + 0x45ea525c,DAT_45ea5424 + 0x45ea5250,DAT_45ea541c + 0x45ea5285,
               DAT_45ea5418 + 0x45ea603a,0x5bb,param_6,uVar4,uVar1);
  switch(param_1) {
  case 3:
switchD_45ea5268_caseD_3:
    iVar2 = task_mgr_task_launch(param_2,param_3,param_4,param_7);
    FUN_45eaca68();
    break;
  default:
    iVar2 = 0;
    iVar3 = DAT_45ea5450 + 0x45ea5386;
    goto LAB_45ea5294;
  case 5:
  case 7:
switchD_45ea5268_caseD_5:
    iVar2 = task_mgr_task_run(param_2,param_4,param_7);
    break;
  case 6:
switchD_45ea5268_caseD_6:
    iVar2 = task_mgr_task_pause(param_2,param_4,param_7);
    break;
  case 9:
switchD_45ea5268_caseD_9:
    iVar2 = task_mgr_task_stop(param_2,param_4,param_7);
    break;
  case 0xd:
switchD_45ea5268_caseD_d:
    iVar2 = task_mgr_task_stop_pending(param_2,param_4,param_7);
    break;
  case 0xe:
switchD_45ea5268_caseD_e:
    iVar2 = task_mgr_task_attach_above(param_2,param_4,param_5,param_7);
  }
  if (param_6 == 0) {
    if (iVar2 < 0) {
      iVar3 = DAT_45ea546c + 0x45ea5412;
    }
    else {
      iVar3 = DAT_45ea543c + 0x45ea5300;
    }
LAB_45ea52fe:
    uVar1 = *param_2;
    uVar4 = event_filter_to_signal_string(param_1);
    __dlog_print(0,4,DAT_45ea544c + 0x45ea5334,DAT_45ea5448 + 0x45ea5330,DAT_45ea5444 + 0x45ea5357,
                 DAT_45ea5440 + 0x45ea6114,0x5de,iVar3,uVar1,uVar4,iVar2);
    return iVar2;
  }
  if (iVar2 < 0) {
    iVar3 = DAT_45ea5454 + 0x45ea538e;
  }
  else {
    iVar3 = DAT_45ea5428 + 0x45ea5296;
  }
LAB_45ea5294:
  uVar1 = *param_2;
  uVar4 = event_filter_to_signal_string(param_1);
  __dlog_print(0,4,DAT_45ea5438 + 0x45ea52ca,DAT_45ea5434 + 0x45ea52c6,DAT_45ea5430 + 0x45ea52ed,
               DAT_45ea542c + 0x45ea60aa,0x5db,iVar3,param_6,uVar1,uVar4,iVar2);
  return iVar2;
}

