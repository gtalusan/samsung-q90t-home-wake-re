/* libapp-context-manager-common.so : FUN_45ea37f8@45ea37f8 */

undefined4 FUN_45ea37f8(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = check_config_is_service_app(param_1[3]);
  if (iVar1 == 0) {
    listen_start(*param_1,param_1[3],param_2);
    iVar1 = task_mgr_task_find_pid(*param_1,param_2);
    if (iVar1 == 0) {
      __dlog_print(0,4,DAT_45ea3904 + 0x45ea38a4,DAT_45ea3908 + 0x45ea38a8,DAT_45ea3900 + 0x45ea38d1
                   ,DAT_45ea38fc + 0x45ea44e6,0x57e,*param_1);
    }
    else {
      iVar2 = aul_app_get_status(param_1[3]);
      if (iVar2 == 3) {
        __dlog_print(0,4,DAT_45ea3914 + 0x45ea38da,DAT_45ea3918 + 0x45ea38de,
                     DAT_45ea3910 + 0x45ea3907,DAT_45ea390c + 0x45ea451a,0x584,
                     *(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 0x2c));
        listen_run(iVar1,param_2);
      }
      else if (iVar2 == 2) {
        __dlog_print(0,4,DAT_45ea38f4 + 0x45ea3866,DAT_45ea38f8 + 0x45ea386a,
                     DAT_45ea38f0 + 0x45ea3895,DAT_45ea38ec + 0x45ea44a8,0x588,
                     *(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 0x2c));
        listen_run(iVar1,param_2);
        listen_active(iVar1,param_2);
      }
    }
  }
  return 0;
}

