/* libapp-context-manager-common.so : util_is_fullscreen_geometry@45e9c4cc */

undefined4 util_is_fullscreen_geometry(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_45e9c564 + 0x45e9c4de);
  if ((iVar3 == 0) || (iVar1 = *(int *)(DAT_45e9c564 + 0x45e9c4e2), iVar1 == 0)) {
    FUN_45e996e4();
    iVar3 = *(int *)(DAT_45e9c580 + 0x45e9c558);
    iVar1 = *(int *)(DAT_45e9c580 + 0x45e9c55c);
  }
  __dlog_print(0,4,DAT_45e9c574 + 0x45e9c51c,DAT_45e9c570 + 0x45e9c512,DAT_45e9c56c + 0x45e9c53d,
               DAT_45e9c568 + 0x45e9ca2a,0x459,param_1,param_2,param_3,param_4,iVar3,iVar1);
  if (((param_1 == 0 && param_2 == 0) && (param_3 == *(int *)(DAT_45e9c578 + 0x45e9c536))) &&
     (param_4 == *(int *)(DAT_45e9c578 + 0x45e9c53a))) {
    uVar2 = 1;
  }
  else {
    iVar3 = context_system_property_check(DAT_45e9c57c + 0x45e9c53c);
    uVar2 = 0;
    if (iVar3 != 0) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

