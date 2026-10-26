/* deviced : get_status@0001f3f8 */

undefined4 get_status(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = vconf_get_int();
  uVar2 = 0;
  if (iVar1 != 0) {
    __dlog_print(2,6,DAT_0001f478 + 0x1f464,DAT_0001f474 + 0x1f460,DAT_0001f470 + 0x1f471,
                 DAT_0001f46c + 0x1f568,0x45,param_1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

