/* deviced : tuner1_update@0001ef84 */

undefined4 tuner1_update(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 2) {
    __dlog_print(0,3,DAT_0001f05c + 0x1efe4,DAT_0001f058 + 0x1efe0,DAT_0001f054 + 0x1eff1,
                 DAT_0001f050 + 0x1f08c,0x15b,param_1);
    uVar1 = update_status(DAT_0001f060 + 0x1eff4,param_1);
    return uVar1;
  }
  __dlog_print(2,6,DAT_0001f070 + 0x1f044,DAT_0001f06c + 0x1f040,DAT_0001f068 + 0x1f051,
               DAT_0001f064 + 0x1f0ec,0x157,param_1);
  return 0xffffffff;
}

