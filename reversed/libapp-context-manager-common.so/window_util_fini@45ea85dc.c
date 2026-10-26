/* libapp-context-manager-common.so : window_util_fini@45ea85dc */

void window_util_fini(void)

{
  int *piVar1;
  undefined4 in_r3;
  int iVar2;
  
  if (*(int *)(window_util_init + DAT_45ea8624 + 6) != 0) {
    ecore_event_handler_del();
  }
  piVar1 = (int *)(DAT_45ea8628 + 0x45ea8648);
  *(undefined4 *)(DAT_45ea8628 + 0x45ea8644) = 0;
  if (*piVar1 != 0) {
    ecore_event_handler_del();
  }
  iVar2 = DAT_45ea862c + 0x45ea8608;
  *(undefined4 *)(DAT_45ea862c + 0x45ea865c) = 0;
  KeyRouter_TV_UnSet_By_Pass(0,1,0,iVar2,in_r3);
  KeyRouter_TV_UnSet_By_Pass(0,2,0);
  KeyRouter_Finalize();
  KeyRouter_TV_Finalize();
  return;
}

