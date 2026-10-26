/* tvctx-manager : FUN_000180f0@000180f0 */

void FUN_000180f0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = vconf_keynode_get_type();
  if (iVar1 == 0x29) {
    DAT_0003b520 = vconf_keynode_get_int(param_1);
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > ewbs window id changed:%d",DAT_00018178,
                 DAT_00018174,0x409,DAT_0003b520);
    return;
  }
  uVar2 = vconf_keynode_get_name();
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > unexpected type detected:%s",DAT_00018178,
               DAT_00018174,0x40c,uVar2);
  return;
}

