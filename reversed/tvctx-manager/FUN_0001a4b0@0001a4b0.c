/* tvctx-manager : FUN_0001a4b0@0001a4b0 */

void FUN_0001a4b0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = DAT_0001a60c;
  uVar1 = DAT_0001a608;
  if (param_1 == 1) {
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > orientation(%d) : %s%s",DAT_0001a60c,DAT_0001a608
                 ,0x99a,1,"landscape","");
    context_system_property_remove("sensor_portrait");
    iVar3 = context_system_property_check("shop_mode");
    if ((iVar3 != 0) && (iVar3 = context_check_mask(0x40000,param_2), iVar3 != 0)) {
      event_filter_handle("epop.launch",*(undefined4 *)(param_2 + 0x2c),param_2);
      event_filter_handle("epop.friendly.launch",*(undefined4 *)(param_2 + 0x2c),param_2);
    }
  }
  else {
    if (param_1 == 4) {
      __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > orientation(%d) : %s%s",DAT_0001a60c,
                   DAT_0001a608,0x99a,4,"","portrait");
      context_system_property_add("sensor_portrait");
      event_filter_handle("frame32.sensor.portrait",*(undefined4 *)(param_2 + 0x2c),param_2);
      context_pause_all_landscape_only_apps(param_2);
      return;
    }
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > orientation(%d) : %s%s",DAT_0001a60c,DAT_0001a608
                 ,0x99a,param_1,"","");
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > unsupported value",uVar2,uVar1,0x99d);
  }
  return;
}

