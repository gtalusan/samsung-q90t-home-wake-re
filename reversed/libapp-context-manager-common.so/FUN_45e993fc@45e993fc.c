/* libapp-context-manager-common.so : FUN_45e993fc@45e993fc */

void FUN_45e993fc(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  void *local_20;
  int local_1c;
  
  piVar2 = *(int **)(DAT_45e9946c + 0x45e99406 + DAT_45e99470);
  local_20 = (void *)0x0;
  local_1c = *piVar2;
  iVar1 = app_operation_get_default_app(param_1,&local_20);
  if (iVar1 < 0) {
    __dlog_print(0,3,DAT_45e99480 + 0x45e99464,DAT_45e9947c + 0x45e99462,DAT_45e99478 + 0x45e9948d,
                 DAT_45e99474 + 0x45e994da,0x2ab,param_1);
  }
  free(local_20);
  if (local_1c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 >= 0);
  }
  return;
}

