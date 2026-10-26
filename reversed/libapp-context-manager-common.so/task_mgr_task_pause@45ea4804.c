/* libapp-context-manager-common.so : task_mgr_task_pause@45ea4804 */

undefined4 task_mgr_task_pause(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == (undefined4 *)0x0 || param_3 == 0) {
    return 0xffffffff;
  }
  iVar1 = context_check_mask(0x20000400,param_3);
  if (iVar1 != 0 && param_2 == 0) {
    uVar2 = 0xfffffffd;
  }
  else {
    iVar1 = check_trans_state(param_1[0xc],4);
    if (param_2 == 0 && iVar1 == 0) {
      return 0xffffffff;
    }
    iVar1 = test_blocker(param_1,6,param_3);
    if (iVar1 != 0 && param_2 == 0) {
      __dlog_print(0,4,DAT_45ea498c + 0x45ea4946,DAT_45ea4990 + 0x45ea494c,DAT_45ea4988 + 0x45ea4973
                   ,DAT_45ea4984 + 0x45ea56c8,0x99a,param_1[1]);
      uVar2 = 0xfffffffd;
    }
    else {
      if (param_1[0xc] == 4) {
        __dlog_print(0,4,DAT_45ea4970 + 0x45ea48d4,DAT_45ea496c + 0x45ea48d0,
                     DAT_45ea4968 + 0x45ea48f9,DAT_45ea4964 + 0x45ea564e,0x99f,*param_1);
      }
      iVar1 = aul_pause_pid(param_1[0xb]);
      if (iVar1 < 0) {
        __dlog_print(0,6,DAT_45ea497c + 0x45ea490e,DAT_45ea4980 + 0x45ea4914,
                     DAT_45ea4978 + 0x45ea493b,(int)&DAT_45ea5690 + DAT_45ea4974,0x9a3,param_1[0xb])
        ;
        uVar2 = 0xfffffffb;
      }
      else {
        __dlog_print(0,4,DAT_45ea495c + 0x45ea489a,DAT_45ea4960 + 0x45ea48a0,
                     DAT_45ea4958 + 0x45ea48c7,DAT_45ea4954 + 0x45ea561c,0x9a6,*param_1);
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

