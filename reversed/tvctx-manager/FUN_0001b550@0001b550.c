/* tvctx-manager : FUN_0001b550@0001b550 */

void FUN_0001b550(uint param_1)

{
  void *__ptr;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    __ptr = (void *)vconf_get_str("memory/tv-viewer/visible_video_banners");
    uVar3 = DAT_0001b608;
    uVar2 = DAT_0001b604;
    if (__ptr == (void *)0x0) {
      param_1 = 1;
    }
    else {
      __dlog_print(0,3,"tvctx-manager","%s: %s(%d) > tv-viewer video banner changed : %s",
                   DAT_0001b604,DAT_0001b608,0x121,__ptr);
      iVar1 = util_lookup_keyword_with_delimiter(__ptr,"fullbg",&DAT_00026758);
      param_1 = (uint)(iVar1 == 0);
      free(__ptr);
    }
  }
  else {
    uVar2 = DAT_0001b604;
    uVar3 = DAT_0001b608;
  }
  epop_handler._24_4_ = param_1;
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > video banner state changed:%d",uVar2,uVar3,0x12a,
               param_1);
  FUN_00016a30();
  return;
}

