/* libapp-context-manager-common.so : test_task_filter@45ea56ac */

void test_task_filter(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  
  puVar5 = *(undefined4 **)(param_3 + 4);
  if (puVar5 != (undefined4 *)0x0) {
    iVar2 = DAT_45ea57d0 + 0x45ea650a;
    iVar8 = DAT_45ea57d8 + 0x45ea56d8;
    iVar7 = DAT_45ea57dc + 0x45ea56da;
    iVar4 = DAT_45ea57d4 + 0x45ea5713;
    do {
      while( true ) {
        puVar6 = (undefined4 *)*puVar5;
        puVar5 = (undefined4 *)puVar5[1];
        if ((puVar6[1] == param_2) &&
           (iVar1 = selector_test_task(*puVar6,param_1,param_3), 0 < iVar1)) break;
LAB_45ea56e8:
        if (puVar5 == (undefined4 *)0x0) {
          return;
        }
      }
      __dlog_print(0,3,iVar7,iVar8,iVar4,iVar2,0x64c,*param_1);
      if (puVar6[9] != 0) {
        puVar3 = param_1;
        if (param_2 == 8) {
          puVar3 = *(undefined4 **)(param_3 + 0x2c);
        }
        task_mgr_handle_filter(puVar6[2],puVar6[9],puVar3,puVar6[5],0,0,param_3);
      }
      iVar1 = puVar6[3];
      if (iVar1 == 2) {
        iVar1 = param_1[0x10];
        if (iVar1 == 0) goto LAB_45ea5770;
LAB_45ea5792:
        task_mgr_handle_filter_request(puVar6[2],iVar1,0,puVar6[5],0,puVar6[7],param_3);
        iVar1 = puVar6[2];
      }
      else {
        if (iVar1 == 3) {
          iVar1 = *(int *)(param_3 + 0x2c);
          if (iVar1 != 0) goto LAB_45ea5792;
        }
        else if (iVar1 == 1) {
          task_mgr_handle_filter_request(puVar6[2],param_1,0,puVar6[5],0,puVar6[7],param_3);
        }
LAB_45ea5770:
        iVar1 = puVar6[2];
      }
      if (iVar1 == 10) {
        context_set_timeout(0x400,puVar6[4],param_3);
      }
      if (puVar6[6] == 0) goto LAB_45ea56e8;
      event_filter_handle(puVar6[6],param_1,param_3);
    } while (puVar5 != (undefined4 *)0x0);
  }
  return;
}

