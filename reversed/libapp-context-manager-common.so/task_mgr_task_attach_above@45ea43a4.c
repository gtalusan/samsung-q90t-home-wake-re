/* libapp-context-manager-common.so : task_mgr_task_attach_above@45ea43a4 */

undefined4 task_mgr_task_attach_above(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_3 == 0 || (param_1 == 0 || param_4 == 0)) {
    __dlog_print(0,6,DAT_45ea45a4 + 0x45ea452c,DAT_45ea45a0 + 0x45ea4528,DAT_45ea459c + 0x45ea4555,
                 DAT_45ea4598 + 0x45ea522c,0x9fb,param_3);
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = context_check_mask(0x20000400,param_4);
    if (iVar1 != 0 && param_2 == 0) {
      uVar2 = 0xfffffffd;
    }
    else {
      iVar1 = test_blocker(param_1,0xe,param_4);
      if (iVar1 != 0 && param_2 == 0) {
        __dlog_print(0,3,DAT_45ea45b0 + 0x45ea4558,DAT_45ea45b4 + 0x45ea455a,
                     DAT_45ea45ac + 0x45ea4585,DAT_45ea45a8 + 0x45ea525e,0xa03,
                     *(undefined4 *)(param_1 + 4));
        uVar2 = 0xfffffffd;
      }
      else {
        if ((*(int *)(DAT_45ea4568 + 0x45ea4416) != 0) &&
           ((iVar1 = g_strcmp0(DAT_45ea456c + 0x45ea4422,param_3), iVar1 == 0 ||
            (iVar1 = g_strcmp0(DAT_45ea4594 + 0x45ea44f2,param_3), iVar1 == 0)))) {
          param_3 = *(int *)(DAT_45ea4570 + 0x45ea442e);
        }
        iVar1 = task_mgr_check_visible(*(undefined4 *)(param_1 + 4),0,0,param_4);
        if ((iVar1 == 0) || (iVar1 = task_mgr_check_visible(param_3,0,0,param_4), iVar1 == 0)) {
          __dlog_print(0,4,DAT_45ea457c + 0x45ea4466,DAT_45ea4580 + 0x45ea446a,
                       DAT_45ea4578 + 0x45ea4493,DAT_45ea4574 + 0x45ea516c,0xa11,param_3,
                       *(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x2c));
          if (*(int *)(param_1 + 0x4c) != 0) {
            iVar1 = g_strcmp0(*(int *)(param_1 + 0x4c),param_3);
            if (iVar1 == 0) {
              return 0;
            }
            g_free(*(undefined4 *)(param_1 + 0x4c));
            *(undefined4 *)(param_1 + 0x4c) = 0;
          }
          uVar2 = g_strdup(param_3);
          *(undefined4 *)(param_1 + 0x4c) = uVar2;
          return 0;
        }
        __dlog_print(0,6,DAT_45ea458c + 0x45ea44c0,DAT_45ea4590 + 0x45ea44c2,
                     DAT_45ea4588 + 0x45ea44e9,DAT_45ea4584 + 0x45ea51c4,0xa0d,
                     *(undefined4 *)(param_1 + 4),param_3);
        uVar2 = 0xffffffff;
      }
    }
  }
  return uVar2;
}

