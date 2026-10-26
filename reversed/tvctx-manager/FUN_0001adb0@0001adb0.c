/* tvctx-manager : FUN_0001adb0@0001adb0 */

void FUN_0001adb0(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  int local_30;
  int local_2c;
  
  uVar2 = DAT_0001af88;
  uVar1 = DAT_0001af84;
  local_30 = 0;
  local_2c = __stack_chk_guard;
  if (param_3 == 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > invalid arg",DAT_0001af88,DAT_0001af84,0x59f);
    goto LAB_0001ae3e;
  }
  uVar6 = param_2;
  __dlog_print(0,3,"tvctx-manager","%s: %s(%d) > %s",DAT_0001af88,DAT_0001af84,0x5a3,param_2);
  iVar3 = json_from_string(param_2,&local_30);
  if (local_30 != 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > %s",uVar2,uVar1,0x5a7,
                 *(undefined4 *)(local_30 + 8));
    g_error_free(local_30);
    goto LAB_0001ae3e;
  }
  if (iVar3 == 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to get base node",uVar2,uVar1,0x5ac,uVar6)
    ;
    goto LAB_0001ae3e;
  }
  iVar4 = json_node_get_object();
  if (iVar4 == 0) {
    pcVar8 = "%s: %s(%d) > failed to get object";
    uVar7 = 0x5b2;
LAB_0001ae94:
    __dlog_print(0,6,"tvctx-manager",pcVar8,uVar2,uVar1,uVar7,uVar6);
  }
  else {
    iVar5 = json_object_has_member(iVar4,"prevtype");
    if (iVar5 == 0) {
      pcVar8 = "%s: %s(%d) > prevstate not found";
      uVar7 = 0x5b7;
      goto LAB_0001ae94;
    }
    iVar5 = json_object_has_member(iVar4,"curtype");
    if (iVar5 == 0) {
      pcVar8 = "%s: %s(%d) > curtype not found";
      uVar7 = 0x5bc;
      goto LAB_0001ae94;
    }
    uVar6 = json_object_get_int_member(iVar4,"prevtype");
    uVar7 = json_object_get_int_member(iVar4,"curtype");
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > ambient type changed %d -> %d",uVar2,uVar1,0x5c3,
                 uVar6,uVar7);
    DAT_0003b550 = uVar7;
  }
  json_node_unref(iVar3);
LAB_0001ae3e:
  if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}

