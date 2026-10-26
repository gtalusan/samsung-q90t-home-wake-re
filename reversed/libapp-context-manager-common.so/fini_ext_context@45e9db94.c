/* libapp-context-manager-common.so : fini_ext_context@45e9db94 */

/* fini_ext_context(manager_ctxt*) */

manager_ctxt * fini_ext_context(manager_ctxt *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(DAT_45e9dbd0 + 0x45e9dd0c);
  if (piVar1 != (int *)0x0) {
    do {
      iVar2 = *piVar1;
      util_vconf_unwatch(*(undefined4 *)(iVar2 + 8));
      util_vconf_watch_spec_free(*(undefined4 *)(iVar2 + 8));
      g_free(iVar2);
      iVar2 = DAT_45e9dbd4;
      piVar1 = (int *)piVar1[1];
    } while (piVar1 != (int *)0x0);
    param_1 = (manager_ctxt *)0x0;
    if (*(int *)(DAT_45e9dbd4 + 0x45e9dd32) != 0) {
      param_1 = (manager_ctxt *)g_list_free();
      *(undefined4 *)(iVar2 + 0x45e9dd32) = 0;
    }
  }
  return param_1;
}

