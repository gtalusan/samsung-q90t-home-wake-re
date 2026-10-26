/* libapp-context-manager-common.so : window_util_check_registered_key@45eaab1c */

int window_util_check_registered_key(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 < 0x300) {
    iVar1 = KeyRouter_Get_RegisterStatus();
    uVar3 = param_1;
    iVar4 = iVar1;
    __dlog_print(0,3,DAT_45eaac90 + 0x45eaab5c,DAT_45eaac8c + 0x45eaab58,DAT_45eaac88 + 0x45eaab81,
                 DAT_45eaac84 + 0x45eaaede,0x83,param_1,iVar1);
    if (((param_1 == *(uint *)(DAT_45eaac94 + 0x45eaab90)) ||
        (param_1 == *(uint *)(DAT_45eaac94 + 0x45eaab94))) ||
       (param_1 == *(uint *)(DAT_45eaac94 + 0x45eaab8c))) {
      if (param_2 == 0) {
        __dlog_print(0,6,DAT_45eaace8 + 0x45eaac80,DAT_45eaace4 + 0x45eaac7e,
                     DAT_45eaace0 + 0x45eaacab,DAT_45eaacdc + 0x45eab02c,0x36,uVar3,iVar4);
      }
      else {
        if (iVar1 != 0) {
          __dlog_print(0,4,DAT_45eaacb8 + 0x45eaabf6,DAT_45eaacb4 + 0x45eaabf4,
                       DAT_45eaacb0 + 0x45eaac21,DAT_45eaacac + 0x45eaafa2,0x3b,uVar3,iVar4);
          context_set(0x1000,param_2);
          return iVar1;
        }
        if (((*(int **)(param_2 + 0x2c) == (int *)0x0) ||
            (iVar2 = **(int **)(param_2 + 0x2c), iVar2 == 0)) ||
           (iVar2 = g_strcmp0(iVar2,DAT_45eaac98 + 0x45eaab94), iVar2 != 0)) {
          __dlog_print(0,4,DAT_45eaaca8 + 0x45eaabbe,DAT_45eaaca4 + 0x45eaabbc,
                       DAT_45eaaca0 + 0x45eaabe9,DAT_45eaac9c + 0x45eaaf6a,0x41,uVar3,iVar4);
          context_unset(0x1000,param_2);
          return 0;
        }
        __dlog_print(0,3,DAT_45eaacc8 + 0x45eaac2c,DAT_45eaacc4 + 0x45eaac2a,
                     DAT_45eaacc0 + 0x45eaac59,DAT_45eaacbc + 0x45eaafda,0x3f,uVar3,iVar4);
      }
    }
  }
  else {
    iVar1 = -1;
    __dlog_print(0,6,DAT_45eaacd8 + 0x45eaac58,DAT_45eaacd4 + 0x45eaac56,DAT_45eaacd0 + 0x45eaac7f,
                 DAT_45eaaccc + 0x45eaafdc,0x7e);
  }
  return iVar1;
}

