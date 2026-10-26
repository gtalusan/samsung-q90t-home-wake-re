/* libapp-context-manager-common.so : task_mgr_task_stop@45ea46b4 */

int task_mgr_task_stop(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == (undefined4 *)0x0 || param_3 == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_45ea45b8(param_1,param_3);
    if (param_2 != 0 || iVar1 == 0) {
      iVar2 = g_strcmp0(*param_1,DAT_45ea47cc + 0x45ea46ee);
      iVar1 = DAT_45ea47e0;
      if (iVar2 == 0) {
        iVar2 = aul_app_get_status_bypid(param_1[0xb]);
        iVar4 = DAT_45ea47e8 + 0x45ea4752;
        iVar3 = DAT_45ea47e4 + 0x45ea478d;
        __dlog_print(0,3,iVar4,DAT_45ea47ec + 0x45ea476a,iVar3,iVar1 + 0x45ea54b6,0x9c2,iVar2);
        if (iVar2 == 5) {
          __dlog_print(0,5,iVar4,DAT_45ea47f0 + 0x45ea478e,iVar3,iVar1 + 0x45ea54b6,0x9c5,*param_1);
          return 0;
        }
      }
      iVar1 = aul_terminate_pid(param_1[0xb]);
      if (iVar1 == 0) {
        __dlog_print(0,4,DAT_45ea47d8 + 0x45ea4724,DAT_45ea47dc + 0x45ea4728,
                     DAT_45ea47d4 + 0x45ea4751,DAT_45ea47d0 + 0x45ea5492,0x9de,*param_1);
        return 0;
      }
      iVar1 = -5;
      __dlog_print(0,6,DAT_45ea4800 + 0x45ea47c4,DAT_45ea47fc + 0x45ea47c0,DAT_45ea47f8 + 0x45ea47e9
                   ,DAT_45ea47f4 + 0x45ea552a,0x9db,param_1[0xb]);
    }
  }
  return iVar1;
}

