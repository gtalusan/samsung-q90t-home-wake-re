/* deviced : register_always_instantOn_timer@00030b0c */

void register_always_instantOn_timer(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  __pid_t _Var2;
  
  iVar1 = __aeabi_dcmpeq(param_1,param_2,0,0x405e0000);
  if (iVar1 == 0) {
    iVar1 = ecore_timer_add(param_1,param_2,DAT_00030c50 + 0x30bd8);
    *(int *)(DAT_00030c54 + 0x30bec) = iVar1;
  }
  else {
    iVar1 = ecore_timer_add(0,0x405e0000,DAT_00030c38 + 0x30b50,0);
    *(int *)(DAT_00030c3c + 0x30b68) = iVar1;
  }
  if (iVar1 == 0) {
    __dlog_print(2,6,DAT_00030c64 + 0x30c30,DAT_00030c60 + 0x30c2c,DAT_00030c5c + 0x30c42,
                 DAT_00030c58 + 0x30d00,0xfd);
    return;
  }
  _Var2 = getpid();
  set_always_instantOn_timer_info(_Var2,0x40000003);
  __dlog_print(2,4,DAT_00030c4c + 0x30bbc,DAT_00030c48 + 0x30bb8,DAT_00030c44 + 0x30bc6,
               DAT_00030c40 + 0x30c84,0x103);
  return;
}

