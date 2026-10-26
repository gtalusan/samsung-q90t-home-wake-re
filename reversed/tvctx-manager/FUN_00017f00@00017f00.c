/* tvctx-manager : FUN_00017f00@00017f00 */

void FUN_00017f00(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = vconf_keynode_get_type();
  if (iVar1 == 0x29) {
    DAT_0003b518 = vconf_keynode_get_int(param_1);
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > acm window id changed:%d",DAT_00017f88,
                 DAT_00017f84,0x436,DAT_0003b518);
    return;
  }
  uVar2 = vconf_keynode_get_name();
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > unexpected type detected:%s",DAT_00017f88,
               DAT_00017f84,0x439,uVar2);
  return;
}

