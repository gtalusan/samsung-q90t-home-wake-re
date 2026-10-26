/* libapp-context-manager-common.so : FUN_45ea7b20@45ea7b20 */

void FUN_45ea7b20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_20;
  int local_1c;
  
  iVar1 = DAT_45ea7b78;
  piVar3 = *(int **)(DAT_45ea7b7c + 0x45ea7b3c + DAT_45ea7b80);
  local_20 = 0;
  local_1c = *piVar3;
  g_dbus_connection_register_object
            (param_1,DAT_45ea7b88 + 0x45ea7b5c,
             **(undefined4 **)(*(int *)(DAT_45ea7b78 + 0x45ea7b60) + 8),DAT_45ea7b84 + 0x45ea7b4c,
             param_3,0,&local_20);
  iVar2 = *piVar3;
  *(undefined4 *)(iVar1 + 0x45ea7b64) = param_1;
  if (local_1c != iVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

