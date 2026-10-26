/* libapp-context-manager-common.so : task_mgr_task_run@45ea4994 */

undefined4 task_mgr_task_run(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == (undefined4 *)0x0 || param_3 == 0) {
    return 0xffffffff;
  }
  iVar1 = context_check_mask(0x20000400,param_3);
  if (iVar1 != 0 && param_2 == 0) {
    __dlog_print(0,6,DAT_45ea4b0c + 0x45ea4aa4,DAT_45ea4b08 + 0x45ea4aa2,DAT_45ea4b04 + 0x45ea4acf,
                 DAT_45ea4b00 + 0x45ea5838,0x977);
    uVar2 = 0xfffffffd;
  }
  else {
    iVar1 = check_trans_state(param_1[0xc],3);
    if (param_2 == 0 && iVar1 == 0) {
      return 0xffffffff;
    }
    iVar1 = test_blocker(param_1,5,param_3);
    if (iVar1 != 0 && param_2 == 0) {
      __dlog_print(0,4,DAT_45ea4b18 + 0x45ea4ad0,DAT_45ea4b1c + 0x45ea4ad6,DAT_45ea4b14 + 0x45ea4afd
                   ,DAT_45ea4b10 + 0x45ea5866,0x980,param_1[1]);
      uVar2 = 0xfffffffd;
    }
    else {
      iVar1 = aul_resume_pid(param_1[0xb]);
      if (iVar1 < 0) {
        __dlog_print(0,6,DAT_45ea4af8 + 0x45ea4a6a,DAT_45ea4afc + 0x45ea4a70,
                     DAT_45ea4af4 + 0x45ea4a97,DAT_45ea4af0 + 0x45ea5800,0x985,param_1[1]);
        uVar2 = 0xfffffffb;
      }
      else {
        __dlog_print(0,4,DAT_45ea4ae8 + 0x45ea4a2c,DAT_45ea4aec + 0x45ea4a32,
                     DAT_45ea4ae4 + 0x45ea4a59,DAT_45ea4ae0 + 0x45ea57c2,0x989,*param_1);
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

