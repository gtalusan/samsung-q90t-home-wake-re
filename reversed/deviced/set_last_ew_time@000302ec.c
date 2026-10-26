/* deviced : set_last_ew_time@000302ec */

void set_last_ew_time(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = vconf_set_int(DAT_0003035c + 0x30300,param_1);
  if (iVar1 != 0) {
    __dlog_print(2,6,DAT_0003036c + 0x30354,DAT_00030368 + 0x30350,DAT_00030364 + 0x30366,
                 DAT_00030360 + 0x30380,0x252);
  }
  return;
}

