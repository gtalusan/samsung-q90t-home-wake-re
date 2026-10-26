/* deviced : hdcp1_update@0001f2e0 */

undefined4 hdcp1_update(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 2) {
    uVar1 = update_status(DAT_0001f358 + 0x1f2f8,param_1);
    return uVar1;
  }
  __dlog_print(2,6,DAT_0001f364 + 0x1f340,DAT_0001f368 + 0x1f348,DAT_0001f360 + 0x1f355,
               DAT_0001f35c + 0x1f430,0x189,param_1);
  return 0xffffffff;
}

