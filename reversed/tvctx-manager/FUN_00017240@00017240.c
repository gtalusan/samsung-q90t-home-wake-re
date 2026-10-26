/* tvctx-manager : FUN_00017240@00017240 */

void FUN_00017240(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  
  uVar2 = DAT_0001742c;
  uVar1 = DAT_00017428;
  uVar7 = param_1;
  uVar8 = param_2;
  uVar5 = param_4;
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > %s(%s), status %d",DAT_00017428,DAT_0001742c,0x3d,
               param_1,param_2,param_4);
  puVar3 = (uint *)FUN_00017014(param_1);
  if (puVar3 == (uint *)0x0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > null info",uVar1,uVar2,0x41,uVar7,uVar8,uVar5);
    return;
  }
  uVar6 = *puVar3;
  if (uVar6 != param_4) {
    uVar9 = param_4;
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > %d -> %d",uVar1,uVar2,0x46,uVar6,param_4,uVar5);
    *puVar3 = param_4;
    iVar4 = vconf_set_int(puVar3[7],param_4);
    if (iVar4 != 0) {
      __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to set status vconf",uVar1,uVar2,0x49,
                   uVar6,uVar9,uVar5);
    }
  }
  iVar4 = g_strcmp0(puVar3[2],param_3);
  if (iVar4 != 0) {
    uVar6 = puVar3[2];
    uVar7 = param_3;
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > etag changed (%s) -> (%s)",uVar1,uVar2,0x4d,uVar6
                 ,param_3,uVar5);
    g_free(puVar3[2]);
    uVar5 = g_strdup(param_3);
    puVar3[2] = uVar5;
    iVar4 = vconf_set_str(puVar3[6],uVar5);
    if (iVar4 != 0) {
      __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to set etag vconf",uVar1,uVar2,0x51,
                   uVar6,uVar7);
    }
  }
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > (%s) -> (%s)",uVar1,uVar2,0x54,puVar3[1],param_2);
  if (puVar3[1] == 0) {
LAB_00017352:
    if (param_4 < 2) {
LAB_000173fa:
      uVar5 = g_strdup(param_2);
      puVar3[1] = uVar5;
LAB_00017316:
      if (uVar5 != 0) goto LAB_00017318;
    }
    iVar4 = vconf_set_str(puVar3[5],"");
  }
  else {
    iVar4 = g_strcmp0(puVar3[1],param_2);
    if (iVar4 != 0) {
      free((void *)puVar3[1]);
      puVar3[1] = 0;
      goto LAB_00017352;
    }
    uVar5 = puVar3[1];
    if (1 < param_4) goto LAB_00017316;
    if (uVar5 == 0) goto LAB_000173fa;
LAB_00017318:
    iVar4 = vconf_set_str(puVar3[5]);
  }
  if (iVar4 != 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to set appid vconf",uVar1,uVar2,0x65);
  }
  return;
}

