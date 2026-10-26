/* tvctx-manager : FUN_0001a7b0@0001a7b0 */

void FUN_0001a7b0(undefined4 param_1,int param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  
  if (param_3 == 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > invalid parameter",DAT_0001a878,DAT_0001a874,
                 0x9b2);
  }
  else {
    iVar2 = (int)*(float *)(param_2 + 0x14);
    pcVar1 = "";
    if (iVar2 == DAT_0003b548) {
      pcVar1 = "unchanged";
    }
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > %d %s",DAT_0001a878,DAT_0001a874,0x9b6,iVar2,
                 pcVar1);
    if (iVar2 != DAT_0003b548) {
      DAT_0003b548 = iVar2;
      FUN_0001a4b0(iVar2,param_3);
      iVar2 = context_system_property_check("sensor_portrait");
      if (iVar2 != 0) {
        FUN_0001a6d4(param_3);
        return;
      }
    }
  }
  return;
}

