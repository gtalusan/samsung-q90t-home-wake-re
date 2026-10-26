/* deviced : is_valid_pid@00024690 */

undefined4 is_valid_pid(__pid_t param_1)

{
  int iVar1;
  
  if (param_1 < 1) {
    __dlog_print(2,6,DAT_00024784 + 0x2475c,DAT_00024780 + 0x24758,(int)&DAT_00024768 + DAT_0002477c
                 ,DAT_00024778 + 0x24820,0x1b0,param_1);
    return 0;
  }
  iVar1 = kill(param_1,0);
  if (iVar1 == 0) {
    return 1;
  }
  __dlog_print(2,6,DAT_00024774 + 0x24708,DAT_00024770 + 0x24704,DAT_0002476c + 0x24714,
               DAT_00024768 + 0x247cc,0x1b6,param_1);
  return 0;
}

