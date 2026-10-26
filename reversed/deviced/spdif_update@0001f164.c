/* deviced : spdif_update@0001f164 */

undefined4 spdif_update(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 2) {
    __dlog_print(0,3,DAT_0001f23c + 0x1f1c4,DAT_0001f238 + 0x1f1c0,DAT_0001f234 + 0x1f1d1,
                 DAT_0001f230 + 0x1f28c,0x175,param_1);
    uVar1 = update_status(DAT_0001f240 + 0x1f1d4,param_1);
    return uVar1;
  }
  __dlog_print(2,6,DAT_0001f250 + 0x1f224,DAT_0001f24c + 0x1f220,DAT_0001f248 + 0x1f231,
               DAT_0001f244 + 0x1f2ec,0x171,param_1);
  return 0xffffffff;
}

