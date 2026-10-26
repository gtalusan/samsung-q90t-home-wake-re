/* tvctx-manager : FUN_0001b320@0001b320 */

void FUN_0001b320(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar2 = vconf_keynode_get_str();
  uVar3 = vconf_keynode_get_name(param_1);
  if (param_2 == 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > bad arguments",DAT_0001b544,DAT_0001b540,0x858);
    return;
  }
  iVar4 = g_strcmp0(uVar3,"memory/tv-viewer/visible_banners");
  if (iVar4 != 0) {
    iVar4 = g_strcmp0(uVar3,"memory/tv-viewer/visible_video_banners");
    uVar1 = DAT_0001b54c;
    uVar3 = DAT_0001b544;
    if (iVar4 == 0) {
      uVar5 = uVar2;
      __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > tv-viewer video banner changed : %s",
                   DAT_0001b544,DAT_0001b54c,0x848,uVar2);
      iVar4 = util_lookup_keyword_with_delimiter(uVar2,&DAT_00026868,&DAT_00026758);
      if (iVar4 == 0) {
        context_system_property_remove("ocl_banner_visible");
        return;
      }
      __dlog_print(0,5,"tvctx-manager","%s: %s(%d) > one connect board disconnected",uVar3,uVar1,
                   0x84b,uVar5);
      context_system_property_add("ocl_banner_visible");
    }
    else {
      __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > invalid key name",DAT_0001b544,DAT_0001b540,
                   0x861);
    }
    return;
  }
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > tv-viewer banner changed : %s",DAT_0001b544,
               DAT_0001b548,0x83b,uVar2);
  iVar4 = util_lookup_keyword_with_delimiter(uVar2,"channel",&DAT_00026758);
  if (iVar4 != 0) {
    event_filter_handle("partial_webapp.pause",*(undefined4 *)(param_2 + 0x2c),param_2);
    event_filter_handle("partial_native_on_ch_banner.pause",*(undefined4 *)(param_2 + 0x2c),param_2)
    ;
  }
  iVar4 = context_system_property_check("portland_on_portrait");
  if ((iVar4 != 0) || (iVar4 = context_system_property_check("rotate_to_portrait"), iVar4 != 0)) {
    iVar4 = util_lookup_keyword_with_delimiter(uVar2,"source",&DAT_00026758);
    if (iVar4 != 0) {
      event_filter_handle("portrait_info_banner.pause",*(undefined4 *)(param_2 + 0x2c),param_2);
      context_system_property_add("source_banner_visible_on_portrait");
      return;
    }
    iVar4 = util_lookup_keyword_with_delimiter(uVar2,"info",&DAT_00026758);
    if (iVar4 != 0) {
      event_filter_handle("portrait_info_banner.pause",*(undefined4 *)(param_2 + 0x2c),param_2);
    }
  }
  context_system_property_remove("source_banner_visible_on_portrait");
  return;
}

