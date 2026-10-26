/* tvctx-manager : FUN_00016e54@00016e54 */

void FUN_00016e54(uint param_1)

{
  void *__ptr;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    __ptr = (void *)vconf_get_str("memory/tvplayer/is_hdmi_dsc_out");
    uVar3 = DAT_00016f04;
    uVar2 = DAT_00016f00;
    if (__ptr == (void *)0x0) {
      param_1 = 1;
    }
    else {
      __dlog_print(0,3,"tvctx-manager","%s: %s(%d) > 8k_hdmi changed : %s",DAT_00016f00,DAT_00016f04
                   ,0x137,__ptr);
      iVar1 = g_strcmp0(__ptr,&DAT_000241e8);
      param_1 = (uint)(iVar1 != 0);
      free(__ptr);
    }
  }
  else {
    uVar2 = DAT_00016f00;
    uVar3 = DAT_00016f04;
  }
  epop_handler._48_4_ = param_1;
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > 8k_hdmi changed:%d",uVar2,uVar3,0x140,param_1);
  FUN_00016a30();
  return;
}

