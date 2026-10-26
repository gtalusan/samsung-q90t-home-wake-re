/* tvctx-manager : FUN_00016a30@00016a30 */

void FUN_00016a30(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = DAT_00016b98;
  uVar1 = DAT_00016b94;
  if ((((((epop_handler._8_4_ == 1) && (epop_handler._12_4_ == 1)) && (epop_handler._16_4_ == 1)) &&
       ((epop_handler._20_4_ == 1 && (epop_handler._24_4_ == 1)))) &&
      ((epop_handler._28_4_ == 1 && ((epop_handler._32_4_ == 1 && (epop_handler._36_4_ == 1)))))) &&
     ((epop_handler._40_4_ == 1 && (epop_handler._44_4_ == 1)))) {
    uVar4 = (uint)(epop_handler._48_4_ == 1);
  }
  else {
    uVar4 = 0;
  }
  if (uVar4 != epop_handler._52_4_) {
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > epop state changed:%d",DAT_00016b94,DAT_00016b98,
                 0xe0,uVar4);
    __dlog_print(0,4,"tvctx-manager",
                 "%s: %s(%d) > epop:%d, block:%d, subt:%d, banner:%d, video banner:%d, cc:%d, ttx:%d, pip:%d, vr360:%d, upscale demo:%d, tv_8k_hdmi:%d"
                 ,uVar1,uVar2,0xe1,epop_handler._8_4_,epop_handler._12_4_,epop_handler._16_4_,
                 epop_handler._20_4_,epop_handler._24_4_,epop_handler._28_4_,epop_handler._32_4_,
                 epop_handler._36_4_,epop_handler._40_4_,epop_handler._44_4_,epop_handler._48_4_);
    epop_handler._52_4_ = uVar4;
    if (epop_handler._4_4_ != 0) {
      (*(code *)epop_handler._4_4_)(uVar4,epop_handler._0_4_);
    }
  }
  iVar3 = context_system_property_check("epop_support");
  if (iVar3 == 0) {
    __dlog_print(0,5,"tvctx-manager","%s: %s(%d) > epop unsupported",DAT_00016b94,DAT_00016b98,0xeb)
    ;
  }
  return;
}

