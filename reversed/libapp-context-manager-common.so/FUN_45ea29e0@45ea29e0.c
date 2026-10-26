/* libapp-context-manager-common.so : FUN_45ea29e0@45ea29e0 */

void FUN_45ea29e0(undefined4 param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  void *__ptr;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 local_30;
  int local_2c;
  
  piVar5 = *(int **)(DAT_45ea2bac + 0x45ea29f4 + DAT_45ea2bb0);
  local_2c = *piVar5;
  if (param_2 == (undefined4 *)0x0 || param_3 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar1 = g_strcmp0(*param_2,DAT_45ea2bb4 + 0x45ea2a0a);
    if ((iVar1 != 0) && (iVar1 = g_strcmp0(*param_2,DAT_45ea2bb8 + 0x45ea2a2e), iVar1 != 0)) {
      local_30 = param_1;
      if (param_2[0x14] != 1) {
        uVar3 = param_2[1];
        iVar1 = g_strcmp0(uVar3,DAT_45ea2bbc + 0x45ea2a4a);
        if ((iVar1 == 0) || (iVar1 = g_strcmp0(uVar3,DAT_45ea2bc0 + 0x45ea2a56), iVar1 == 0)) {
          __ptr = (void *)g_strdup(DAT_45ea2bc4 + 0x45ea2a62);
        }
        else {
          iVar1 = g_strcmp0(uVar3,DAT_45ea2be8 + 0x45ea2b34);
          if (iVar1 == 0) {
            __ptr = (void *)g_strdup(DAT_45ea2bf0 + 0x45ea2ba0);
          }
          else {
            __ptr = (void *)aul_extension_app_get_last_operation(uVar3);
          }
        }
        if (__ptr != (void *)0x0) {
          iVar4 = DAT_45ea2bcc + 0x45ea2ac7;
          iVar6 = DAT_45ea2bc8 + 0x45ea360a;
          iVar7 = DAT_45ea2bd0 + 0x45ea2a9c;
          __dlog_print(0,4,iVar7,DAT_45ea2bd4 + 0x45ea2aa4,iVar4,iVar6,0x2be,param_2[1],local_30,
                       __ptr);
          iVar1 = FUN_45e993fc(__ptr);
          if ((iVar1 != 0) && (iVar1 = g_strcmp0(param_2[3],__ptr), iVar1 != 0)) {
            g_free(param_2[3]);
            uVar3 = g_strdup(__ptr);
            param_2[3] = uVar3;
            iVar1 = g_hash_table_lookup(*(undefined4 *)(param_3 + 0x20),&local_30);
            if (iVar1 != 0) {
              __dlog_print(0,4,iVar7,DAT_45ea2bec + 0x45ea2b82,iVar4,iVar6,0x2cc,*param_2);
              g_free(*param_2);
              FUN_45ea2880(param_2,param_3);
            }
          }
          free(__ptr);
        }
      }
      uVar3 = aul_app_get_last_caller_pid(param_1);
      __dlog_print(0,4,DAT_45ea2be4 + 0x45ea2ae6,DAT_45ea2be0 + 0x45ea2ae0,DAT_45ea2bdc + 0x45ea2b0b
                   ,DAT_45ea2bd8 + 0x45ea3668,0x2e5,param_1,uVar3);
      iVar1 = task_mgr_task_find_pid(uVar3,param_3);
      if (iVar1 != 0) {
        if (*(int *)(iVar1 + 0x28) != 0) {
          uVar3 = g_list_first();
          uVar3 = g_list_position(uVar3,*(undefined4 *)(iVar1 + 0x28));
          param_2[0x11] = uVar3;
        }
        if (iVar1 != param_2[0x10]) {
          if (param_2[0x10] != 0) {
            task_unref();
          }
          uVar2 = task_ref(iVar1);
          uVar3 = 0;
          param_2[0x10] = uVar2;
          goto LAB_45ea2a12;
        }
      }
    }
    uVar3 = 0;
  }
LAB_45ea2a12:
  if (local_2c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

