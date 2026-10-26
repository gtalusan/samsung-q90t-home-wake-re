/* libapp-context-manager-common.so : FUN_45eaa0f8@45eaa0f8 */

void FUN_45eaa0f8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *__nptr;
  long lVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int local_30;
  int local_2c;
  
  piVar6 = *(int **)(DAT_45eaa2e4 + 0x45eaa10a + DAT_45eaa2e8);
  local_30 = 0;
  local_2c = *piVar6;
  iVar1 = json_from_string(param_1,&local_30);
  if (local_30 == 0) {
    if (iVar1 == 0) {
      __dlog_print(0,6,DAT_45eaa33c + 0x45eaa2bc,DAT_45eaa338 + 0x45eaa2ba,DAT_45eaa334 + 0x45eaa2e9
                   ,DAT_45eaa330 + 0x45eaa5ee,0x121);
    }
    else {
      iVar2 = json_node_get_object();
      if (iVar2 == 0) {
        __dlog_print(0,6,DAT_45eaa320 + 0x45eaa240,DAT_45eaa31c + 0x45eaa23e,
                     DAT_45eaa318 + 0x45eaa26d,DAT_45eaa314 + 0x45eaa572,0x127);
      }
      else {
        iVar7 = DAT_45eaa2ec + 0x45eaa140;
        iVar3 = json_object_has_member(iVar2,iVar7);
        if (iVar3 != 0) {
          iVar8 = DAT_45eaa300 + 0x45eaa1df;
          iVar3 = DAT_45eaa308 + 0x45eaa1ae;
          iVar5 = DAT_45eaa304 + 0x45eaa4f8;
          __dlog_print(0,4,iVar3,DAT_45eaa30c + 0x45eaa1be,iVar8,iVar5,0x12e,param_1,iVar5);
          iVar2 = json_object_get_member(iVar2,iVar7);
          if (iVar2 == 0) {
            __dlog_print(0,6,iVar3,DAT_45eaa324 + 0x45eaa25a,iVar8,iVar5,0x132,param_1);
          }
          else {
            iVar2 = json_node_get_object();
            if (iVar2 == 0) {
              __dlog_print(0,6,iVar3,DAT_45eaa328 + 0x45eaa276,iVar8,iVar5,0x138,param_1);
            }
            else {
              __nptr = (char *)json_object_get_string_member(iVar2,DAT_45eaa310 + 0x45eaa1e4);
              if (__nptr == (char *)0x0) {
                __dlog_print(0,6,iVar3,DAT_45eaa32c + 0x45eaa292,iVar8,iVar5,0x13e,param_1);
              }
              else {
                lVar4 = strtol(__nptr,(char **)0x0,10);
                iVar2 = task_mgr_task_find_pid(lVar4,param_2);
                if (iVar2 != 0) {
                  iVar2 = *(int *)(iVar2 + 4);
                  json_node_unref(iVar1);
                  if (iVar2 != 0) {
                    task_mgr_manual_launch(iVar2,0,0,param_2);
                  }
                  goto LAB_45eaa14c;
                }
                __dlog_print(0,6,iVar3,DAT_45eaa340 + 0x45eaa2d8,iVar8,iVar5,0x145,lVar4);
              }
            }
          }
        }
      }
      json_node_unref(iVar1);
    }
  }
  else {
    __dlog_print(0,6,DAT_45eaa2f8 + 0x45eaa182,DAT_45eaa2fc + 0x45eaa188,DAT_45eaa2f4 + 0x45eaa1af,
                 DAT_45eaa2f0 + 0x45eaa4b4,0x11b,*(undefined4 *)(local_30 + 8));
    g_error_free(local_30);
  }
LAB_45eaa14c:
  if (local_2c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

