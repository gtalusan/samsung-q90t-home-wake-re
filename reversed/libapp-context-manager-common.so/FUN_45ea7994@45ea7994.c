/* libapp-context-manager-common.so : FUN_45ea7994@45ea7994 */

bool FUN_45ea7994(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = DAT_45ea7a2c + 0x45ea79ac;
  iVar4 = DAT_45ea7a24 + 0x45ea7a16;
  iVar3 = DAT_45ea7a28 + 0x45ea79e7;
  __dlog_print(0,4,iVar5,DAT_45ea7a30 + 0x45ea79c0,iVar3,iVar4,0xdf);
  iVar1 = ecore_wl2_connected_display_get(0);
  if (iVar1 == 0) {
    __dlog_print(0,6,iVar5,DAT_45ea7a38 + 0x45ea79fe,iVar3,iVar4,0xe4);
    return true;
  }
  uVar2 = ecore_wl2_input_default_input_get();
  ecore_wl2_sync();
  iVar1 = ecore_wl2_input_keymap_get(uVar2);
  if (iVar1 == 0) {
    __dlog_print(0,6,iVar5,DAT_45ea7a3c + 0x45ea7a1a,iVar3,iVar4,0xec);
  }
  else {
    *(int *)(DAT_45ea7a34 + 0x45ea79f6) = iVar1;
    FUN_45ea78ac();
  }
  return iVar1 == 0;
}

