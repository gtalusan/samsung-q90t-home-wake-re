/* tvctx-manager : FUN_00016c74@00016c74 */

void FUN_00016c74(uint param_1)

{
  void *__ptr;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    __ptr = (void *)vconf_get_str("memory/tv-viewer/visible_banners");
    uVar3 = DAT_00016d20;
    uVar2 = DAT_00016d1c;
    if (__ptr != (void *)0x0) {
      __dlog_print(0,3,"tvctx-manager","%s: %s(%d) > tv-viewer banner changed : %s",DAT_00016d1c,
                   DAT_00016d20,0x10b,__ptr);
      iVar1 = g_strcmp0(__ptr,&DAT_000240f4);
      param_1 = (uint)(iVar1 == 0);
      free(__ptr);
    }
  }
  else {
    uVar2 = DAT_00016d1c;
    uVar3 = DAT_00016d20;
  }
  epop_handler._20_4_ = param_1;
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > banner state changed:%d",uVar2,uVar3,0x114,param_1)
  ;
  FUN_00016a30();
  return;
}

