/* libapp-context-manager-common.so : util_bundle_import_by_pid@45e9e574 */

undefined4 util_bundle_import_by_pid(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  
  iVar8 = DAT_45e9e600 + 0x45e9e582;
  puVar1 = (undefined4 *)__proc_get_cmdline_bypid();
  if (puVar1 == (undefined4 *)0x0) {
    uVar5 = 0xffffffff;
  }
  else {
    iVar2 = g_list_length();
    if (iVar2 < 2) {
      uVar5 = 0xffffffff;
      g_list_free_full(puVar1,*(undefined4 *)(iVar8 + DAT_45e9e608));
    }
    else {
      puVar3 = (undefined4 *)util_malloc_s(iVar2 * 4);
      puVar6 = puVar3;
      do {
        puVar7 = puVar6 + 1;
        *puVar6 = *puVar1;
        puVar1 = (undefined4 *)puVar1[1];
        puVar6 = puVar7;
      } while (puVar3 + iVar2 != puVar7);
      iVar4 = g_strcmp0(puVar3[1],DAT_45e9e604 + 0x45e9e5b8);
      if (iVar4 == 0) {
        uVar5 = bundle_import_from_argv(iVar2,puVar3);
        *param_2 = uVar5;
        uVar5 = 0;
      }
      else {
        uVar5 = 0xffffffff;
      }
      g_free(puVar3);
      g_list_free_full(puVar1,*(undefined4 *)(iVar8 + DAT_45e9e608));
    }
  }
  return uVar5;
}

