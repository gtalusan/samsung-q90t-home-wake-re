/* tvctx-manager : FUN_00017ac0@00017ac0 */

void FUN_00017ac0(void)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  iVar1 = vconf_keynode_get_int();
  if (iVar1 == 1) {
    context_system_property_add("cec-stb_connected");
    uVar2 = 0x8a7;
    pcVar3 = "%s: %s(%d) > cec stb connected";
  }
  else {
    context_system_property_remove();
    uVar2 = 0x8ab;
    pcVar3 = "%s: %s(%d) > cec stb disconnected";
  }
  __dlog_print(0,4,"tvctx-manager",pcVar3,DAT_00017b20,DAT_00017b1c,uVar2);
  return;
}

