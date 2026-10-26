/* libapp-context-manager-common.so : context_get_visible_overlay_event_subscriber_appid@45ea2000 */

int context_get_visible_overlay_event_subscriber_appid
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(DAT_45ea202c + 0x45ea2064);
  do {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    iVar3 = *piVar2;
    piVar2 = (int *)piVar2[1];
  } while ((iVar3 == 0) || (iVar1 = task_mgr_check_visible(iVar3,0,0,param_1,param_4), iVar1 == 0));
  return iVar3;
}

