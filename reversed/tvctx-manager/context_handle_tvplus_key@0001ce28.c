/* tvctx-manager : context_handle_tvplus_key@0001ce28 */

undefined4 context_handle_tvplus_key(void)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FCAPI::GetVirtualChannelsAPI();
  uVar2 = (**(code **)(*piVar1 + 0xc0))();
  __dlog_print(0,4,"tvctx-manager",
               "%s: %s(%d) > pVirtualChannelsAPI->LaunchTVPlusHomeScreen(), ret(%d)",DAT_0001ce70,
               DAT_0001ce6c,0xbec,uVar2);
  return uVar2;
}

