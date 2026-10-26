/* libapp-context-manager-common.so : window_util_listen_event@45ea8a48 */

undefined4 window_util_listen_event(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = DAT_45ea8b90 + 0x45ea8a64;
  iVar5 = DAT_45ea8b88 + 0x45ea8c1e;
  iVar4 = DAT_45ea8b8c + 0x45ea8aa1;
  iVar7 = DAT_45ea8b98 + 0x45ea8a86;
  __dlog_print(0,4,iVar6,DAT_45ea8b94 + 0x45ea8a80,iVar4,iVar5,0x128);
  iVar1 = DAT_45ea8b9c;
  if (param_1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    __dlog_print(0,4,iVar6,DAT_45ea8ba0 + 0x45ea8aa6,iVar4,iVar5,300);
    iVar2 = KeyRouter_Initialize
                      (*(undefined4 *)(iVar1 + 0x45ea8aa6),*(undefined4 *)(iVar1 + 0x45ea8aaa),
                       *(undefined4 *)(iVar1 + 0x45ea8aae),*(undefined4 *)(iVar1 + 0x45ea8ab6));
    if (iVar2 == 0) {
      __dlog_print(0,4,iVar6,DAT_45ea8bb8 + 0x45ea8b3e,iVar4,iVar5,0x12f);
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = ecore_event_handler_add
                        (**(undefined4 **)(iVar7 + DAT_45ea8ba4),DAT_45ea8ba8 + 0x45ea8ac6,param_2);
      iVar2 = DAT_45ea8bac;
      *(undefined4 *)(iVar1 + 0x45ea8aee) = uVar3;
      iVar7 = ecore_event_handler_add
                        (**(undefined4 **)(iVar7 + iVar2),DAT_45ea8bb0 + 0x45ea8ade,param_2);
      *(int *)(iVar1 + 0x45ea8af2) = iVar7;
      if (*(int *)(iVar1 + 0x45ea8aee) == 0 || iVar7 == 0) {
        __dlog_print(0,4,iVar6,DAT_45ea8bc0 + 0x45ea8b72,iVar4,iVar5,0x136);
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = 0;
        iVar7 = KeyRouter_TV_Initialize
                          (*(undefined4 *)(iVar1 + 0x45ea8aa6),*(undefined4 *)(iVar1 + 0x45ea8aaa),
                           *(undefined4 *)(iVar1 + 0x45ea8aae),*(undefined4 *)(iVar1 + 0x45ea8aba));
        if (iVar7 == 0) {
          __dlog_print(0,4,iVar6,DAT_45ea8bbc + 0x45ea8b58,iVar4,iVar5,0x13c);
          uVar3 = 0xffffffff;
        }
        else {
          __dlog_print(0,4,iVar6,DAT_45ea8bb4 + 0x45ea8b1a,iVar4,iVar5,0x140);
          *(int *)(iVar1 + 0x45ea8aa2) = param_1;
        }
      }
    }
  }
  return uVar3;
}

