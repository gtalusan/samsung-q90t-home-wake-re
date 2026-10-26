/* libapp-context-manager-common.so : context_notify_task@45e9fa40 */

void context_notify_task(undefined4 *param_1,int param_2)

{
  int iVar1;
  void *__ptr;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 auStack_4c [4];
  int local_48;
  undefined1 auStack_44 [24];
  int local_2c;
  
  piVar4 = *(int **)(DAT_45e9fd5c + 0x45e9fa48 + DAT_45e9fd60);
  local_2c = *piVar4;
  if (param_1[4] == 1) {
    iVar3 = param_1[0xc];
    if (iVar3 == 3) {
      __dlog_print(0,3,DAT_45e9fd98 + 0x45e9fce6,DAT_45e9fd94 + 0x45e9fce4,DAT_45e9fd90 + 0x45e9fd11
                   ,DAT_45e9fd8c + 0x45ea061a,0x1c6);
      context_set(0x80,param_2);
      vconf_set_int(DAT_45e9fd9c + 0x45e9fcf8,1);
      goto LAB_45e9fa60;
    }
    if (iVar3 != 4) goto LAB_45e9fa68;
    if (param_2 != 0) {
      iVar3 = 0;
      g_hash_table_iter_init(auStack_44,*(undefined4 *)(param_2 + 0x20));
      while (iVar6 = g_hash_table_iter_next(auStack_44,auStack_4c,&local_48), iVar6 != 0) {
        if (((local_48 != 0) && (*(int *)(local_48 + 0x30) == 3)) &&
           (*(int *)(local_48 + 0x10) == 1)) {
          iVar3 = iVar3 + 1;
        }
      }
      if (iVar3 == 0) {
        __dlog_print(0,3,DAT_45e9fdac + 0x45e9fd28,DAT_45e9fda8 + 0x45e9fd26,
                     DAT_45e9fda4 + 0x45e9fd55,DAT_45e9fda0 + 0x45ea065e,0x1cb);
        context_unset(0x80,param_2);
        vconf_set_int(DAT_45e9fdb0 + 0x45e9fd3a,0);
      }
      goto LAB_45e9fa60;
    }
  }
  else {
LAB_45e9fa60:
    iVar3 = param_1[0xc];
    if (iVar3 == 3) {
      switch(param_1[5]) {
      case 1:
        context_set(0x20,param_2);
        iVar3 = g_strcmp0(*param_1,DAT_45e9fd84 + 0x45e9fc6a);
        if (iVar3 == 0) {
          context_set(0x40,param_2);
        }
        break;
      case 2:
        context_set(0x100,param_2);
        iVar3 = g_strcmp0(param_1[1],DAT_45e9fd6c + 0x45e9fbc4);
        if (iVar3 != 0) {
          context_set_partial_appid_vconf(param_1[1]);
        }
        break;
      case 3:
        context_set(0x200,param_2);
        break;
      case 6:
        context_set(4,param_2);
        break;
      case 8:
        context_set(0x8000,param_2);
      }
      if (param_1[0xe] != 0) {
        context_set(1,param_2);
      }
      if (((param_1[7] != 0) && (param_1[1] != 0)) &&
         (iVar3 = g_strcmp0(param_1[1],DAT_45e9fd70 + 0x45e9fbf0), iVar3 != 0)) {
        __dlog_print(0,6,DAT_45e9fd7c + 0x45e9fc1a,DAT_45e9fd80 + 0x45e9fc22,
                     DAT_45e9fd74 + 0x45e9fc47,DAT_45e9fd78 + 0x45ea055c,0x1d6,param_1[1]);
        FUN_45e9f27c(param_1[1],param_2);
      }
      goto LAB_45e9fa6e;
    }
LAB_45e9fa68:
    if (1 < iVar3 - 4U) goto LAB_45e9fa6e;
  }
  iVar3 = param_1[5];
  if (iVar3 == 2) {
    uVar5 = param_1[1];
    uVar2 = context_get_current_partial_appid();
    iVar3 = g_strcmp0(uVar5,uVar2);
    if (iVar3 == 0) {
      context_set_partial_appid_vconf(DAT_45e9fd88 + 0x45e9fcba);
      iVar3 = param_1[5];
    }
    else {
      iVar3 = param_1[5];
    }
  }
  if (param_2 != 0) {
    iVar6 = 0;
    g_hash_table_iter_init(auStack_44,*(undefined4 *)(param_2 + 0x20));
    while (iVar1 = g_hash_table_iter_next(auStack_44,auStack_4c,&local_48), iVar1 != 0) {
      while (((local_48 != 0 && (*(int *)(local_48 + 0x30) == 3)) &&
             (*(int *)(local_48 + 0x14) == iVar3))) {
        iVar6 = iVar6 + 1;
        iVar1 = g_hash_table_iter_next(auStack_44,auStack_4c,&local_48);
        if (iVar1 == 0) goto LAB_45e9fade;
      }
    }
LAB_45e9fade:
    if (iVar6 == 0) {
      switch(param_1[5]) {
      case 1:
        context_unset(0x20,param_2);
        iVar3 = g_strcmp0(*param_1,DAT_45e9fd64 + 0x45e9fb64);
        if (iVar3 == 0) {
          context_unset(0x40,param_2);
        }
        break;
      case 2:
        context_unset(0x100,param_2);
        break;
      case 3:
        context_unset(0x200,param_2);
        break;
      case 6:
        context_unset(4,param_2);
        break;
      case 8:
        context_unset(0x8000,param_2);
      }
      if ((param_1[0xe] != 0) &&
         (__ptr = (void *)vconf_get_str(DAT_45e9fd68 + 0x45e9fb7e), __ptr != (void *)0x0)) {
        iVar3 = context_count_task_invisible_delivery(3,param_2);
        if ((iVar3 < 1) && (iVar3 = g_strcmp0(__ptr,DAT_45e9fdb4 + 0x45e9fd46), iVar3 == 0)) {
          context_unset(1,param_2);
        }
        free(__ptr);
      }
    }
  }
LAB_45e9fa6e:
  if (local_2c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

