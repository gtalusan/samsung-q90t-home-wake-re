/* tvctx-manager : FUN_00016934@00016934 */

void FUN_00016934(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  void *__ptr;
  
  uVar1 = DAT_00016a28;
  iVar3 = context_system_property_check("no_epg");
  uVar2 = DAT_00016a2c;
  if (iVar3 != 0) {
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > EPG N/A",DAT_00016a2c,uVar1,0x389);
    iVar3 = context_system_property_check("no_virtual_service");
    if (iVar3 != 0) {
      event_filter_handle("not_available",*(undefined4 *)(param_3 + 0x2c),param_3);
      return;
    }
  }
  __ptr = (void *)vconf_get_str("db/eden/last_used_livetv");
  iVar3 = g_strcmp0(__ptr,"NONE");
  if (iVar3 == 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > last livetv is NONE",uVar2,uVar1,0x395);
    free(__ptr);
    return;
  }
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > last livetv is %s",uVar2,uVar1,0x39a,__ptr);
  event_filter_handle("key.epg",*(undefined4 *)(param_3 + 0x2c),param_3);
  free(__ptr);
  return;
}

