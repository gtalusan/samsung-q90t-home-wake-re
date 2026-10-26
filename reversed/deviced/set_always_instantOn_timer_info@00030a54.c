/* deviced : set_always_instantOn_timer_info@00030a54 */

void set_always_instantOn_timer_info(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  __dlog_print(2,4,DAT_00030ad8 + 0x30aac,DAT_00030ad4 + 0x30aa4,DAT_00030ad0 + 0x30aaa,
               DAT_00030acc + 0x30b4c,0xd2,param_1,param_2);
  iVar1 = DAT_00030adc;
  *(undefined4 *)((int)&DAT_00030ad0 + DAT_00030adc) = param_1;
  *(undefined4 *)((int)&DAT_00030acc + iVar1) = param_2;
  return;
}

