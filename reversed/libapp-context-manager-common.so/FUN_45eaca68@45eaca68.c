/* libapp-context-manager-common.so : FUN_45eaca68@45eaca68 */

void FUN_45eaca68(void)

{
  int iVar1;
  
  iVar1 = DAT_45eacaac + 0x45eaca90;
  __dlog_print(0,3,DAT_45eacab4 + 0x45eaca96,DAT_45eacab0 + 0x45eaca92,DAT_45eacaa8 + 0x45eacab7,
               DAT_45eacaa4 + 0x45eaca92,0x5a6,iVar1);
  context_system_property_remove(iVar1);
  return;
}

