/* tvctx-manager : FUN_00016f08@00016f08 */

void FUN_00016f08(undefined4 param_1,uint *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = vconf_get_int(param_2[7]);
  uVar2 = DAT_00016fa8;
  uVar1 = DAT_00016fa4;
  if (iVar3 == 0) {
    uVar4 = *param_2;
  }
  else {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to get %s",DAT_00016fa8,DAT_00016fa4,0xb2,
                 param_2[7]);
    uVar4 = *param_2;
  }
  if (uVar4 < 2) {
    uVar4 = vconf_get_str(param_2[5]);
    param_2[1] = uVar4;
  }
  uVar4 = vconf_get_str(param_2[6]);
  param_2[2] = uVar4;
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > appid : %s, status : %d, etag : %s",uVar2,uVar1,
               0xb9,param_2[1],*param_2,uVar4);
  return;
}

