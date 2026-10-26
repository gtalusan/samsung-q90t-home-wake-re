/* libapp-context-manager-common.so : FUN_45e9f27c@45e9f27c */

void FUN_45e9f27c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 == 0 || param_1 == 0) {
    __dlog_print(0,6,DAT_45e9f534 + 0x45e9f36e,DAT_45e9f530 + 0x45e9f36c,DAT_45e9f52c + 0x45e9f399,
                 DAT_45e9f528 + 0x45e9fc0e,0x3a5);
    return;
  }
  if (*(int *)(DAT_45e9f4f4 + 0x45e9f2d6) != 0) {
    iVar1 = g_strcmp0();
    if ((iVar1 == 0) &&
       ((*(int *)(param_2 + 0x34) != 0 ||
        (iVar1 = g_strcmp0(param_1,DAT_45e9f508 + 0x45e9f2dc), iVar1 == 0)))) {
      __dlog_print(0,3,DAT_45e9f504 + 0x45e9f2ca,DAT_45e9f500 + 0x45e9f2c8,DAT_45e9f4fc + 0x45e9f2f3
                   ,DAT_45e9f4f8 + 0x45e9fb68,0x3ab,param_1);
      return;
    }
    iVar1 = DAT_45e9f50c;
    if (*(int *)(DAT_45e9f50c + 0x45e9f328) != 0) {
      g_free();
      *(undefined4 *)(iVar1 + 0x45e9f328) = 0;
    }
  }
  iVar6 = DAT_45e9f510 + 0x45e9f2fa;
  iVar2 = g_strcmp0(param_1,iVar6);
  iVar1 = DAT_45e9f514;
  if (iVar2 == 0) {
    if (*(char *)(DAT_45e9f514 + 0x45e9f344) != '\0') {
      __dlog_print(0,4,DAT_45e9f520 + 0x45e9f332,DAT_45e9f524 + 0x45e9f336,DAT_45e9f51c + 0x45e9f361
                   ,DAT_45e9f518 + 0x45e9fbd4,0x3b8,param_1);
      uVar3 = g_strdup(iVar6);
      *(undefined4 *)(iVar1 + 0x45e9f348) = uVar3;
      return;
    }
  }
  else {
    iVar1 = context_find_running_task_byappid(param_1,param_2);
    if (iVar1 == 0) {
      iVar4 = DAT_45e9f56c + 0x45e9f45e;
      iVar6 = DAT_45e9f564 + 0x45e9fd0c;
      iVar1 = DAT_45e9f570 + 0x45e9f468;
      iVar2 = DAT_45e9f568 + 0x45e9f497;
      __dlog_print(0,4,iVar4,DAT_45e9f574 + 0x45e9f46a,iVar2,iVar6,0x3c2,param_1,iVar1);
      uVar3 = g_strdup(iVar1);
      iVar1 = DAT_45e9f57c + 0x45e9f4a6;
      *(undefined4 *)(DAT_45e9f578 + 0x45e9f4ce) = uVar3;
      __dlog_print(0,4,iVar4,iVar1,iVar2,iVar6,0x3c6,param_1,uVar3);
      if (*(int *)(param_2 + 0x34) != 0) {
        task_unref();
        *(undefined4 *)(param_2 + 0x34) = 0;
      }
      task_mgr_task_find_name(DAT_45e9f580 + 0x45e9f4b8,param_2);
      iVar1 = task_ref();
      *(int *)(param_2 + 0x34) = iVar1;
    }
    else {
      uVar3 = g_strdup(param_1);
      iVar2 = DAT_45e9f53c + 0x45e9fc58;
      iVar4 = DAT_45e9f540 + 0x45e9f3e3;
      iVar5 = DAT_45e9f544 + 0x45e9f3ba;
      iVar6 = DAT_45e9f548 + 0x45e9f3c0;
      *(undefined4 *)(DAT_45e9f538 + 0x45e9f3de) = uVar3;
      __dlog_print(0,4,iVar6,iVar5,iVar4,iVar2,0x3c6,param_1,uVar3);
      if (*(int *)(param_2 + 0x34) != 0) {
        task_unref();
        *(undefined4 *)(param_2 + 0x34) = 0;
      }
      iVar1 = task_ref(iVar1);
      *(int *)(param_2 + 0x34) = iVar1;
    }
    if (iVar1 == 0) {
      __dlog_print(0,6,DAT_45e9f590 + 0x45e9f4e6,DAT_45e9f58c + 0x45e9f4e4,DAT_45e9f588 + 0x45e9f511
                   ,DAT_45e9f584 + 0x45e9fd96,0x395,param_1,uVar3);
    }
    else {
      iVar5 = DAT_45e9f554 + 0x45e9f3f8;
      iVar4 = DAT_45e9f54c + 0x45e9fcb8;
      iVar6 = DAT_45e9f550 + 0x45e9f433;
      __dlog_print(0,4,iVar5,DAT_45e9f558 + 0x45e9f404,iVar6,iVar4,0x399,*(undefined4 *)(iVar1 + 4),
                   uVar3);
      iVar2 = DAT_45e9f55c + 0x45e9f416;
      iVar1 = vconf_set_str(iVar2,*(undefined4 *)(*(int *)(param_2 + 0x34) + 4));
      if (iVar1 != 0) {
        __dlog_print(0,6,iVar5,DAT_45e9f560 + 0x45e9f436,iVar6,iVar4,0x39d,iVar2);
      }
    }
  }
  return;
}

