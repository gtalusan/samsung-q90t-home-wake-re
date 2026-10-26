/* tvctx-manager : FUN_00017c68@00017c68 */

void FUN_00017c68(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = DAT_00017d40;
  if (param_2 == 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > bad arguments",DAT_00017d3c,DAT_00017d40,0x960);
    return;
  }
  iVar3 = vconf_keynode_get_int();
  uVar1 = DAT_00017d3c;
  iVar4 = iVar3;
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > animation status changed to %d",DAT_00017d3c,uVar2,
               0x965,iVar3);
  if (iVar3 != 0) {
    context_system_property_add("on_power_animation");
    return;
  }
  context_system_property_remove();
  iVar3 = context_system_property_check("power_key_delayed");
  if (iVar3 == 0) {
    return;
  }
  __dlog_print(0,5,"tvctx-manager","%s: %s(%d) > handle power key - input while power animation",
               uVar1,uVar2,0x96d,iVar4);
  event_filter_handle("power.close",*(undefined4 *)(param_2 + 0x2c),param_2);
  return;
}

