/* libapp-context-manager-common.so : init_ext_context@45e9e91c */

/* init_ext_context(manager_ctxt*) */

void init_ext_context(manager_ctxt *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  puVar8 = *(undefined4 **)(param_1 + 0x10);
  if (puVar8 != (undefined4 *)0x0) {
    iVar6 = DAT_45e9e9f0 + 0x45e9e93e;
    iVar11 = DAT_45e9e9e8 + 0x45e9f160;
    iVar10 = DAT_45e9e9ec + 0x45e9e979;
    do {
      puVar7 = (undefined4 *)*puVar8;
      puVar2 = (undefined4 *)util_malloc_s(0xc);
      iVar1 = DAT_45e9e9f8;
      iVar9 = DAT_45e9e9f4 + 0x45e9e976;
      uVar3 = context_get_custom_mask(*puVar7);
      *puVar2 = uVar3;
      __dlog_print(0,3,iVar9,iVar6,iVar10,iVar11,0xc4,uVar3);
      puVar2[1] = param_1;
      iVar4 = util_vconf_watch_spec_create(puVar7[1],puVar7[2],puVar7[3],puVar7[4]);
      iVar5 = DAT_45e9e9fc + 0x45e9e9b4;
      puVar2[2] = iVar4;
      if (iVar4 == 0) {
        uVar3 = context_to_string(*puVar2);
        __dlog_print(0,6,iVar9,DAT_45e9ea00 + 0x45e9e9d6,iVar10,iVar11,0xc9,uVar3);
        g_free(puVar2);
        return;
      }
      util_vconf_watch(iVar4,1,iVar5,puVar2);
      uVar3 = g_list_append(*(undefined4 *)(iVar1 + 0x45e9eaea),puVar2);
      puVar8 = (undefined4 *)puVar8[1];
      *(undefined4 *)(iVar1 + 0x45e9eaea) = uVar3;
    } while (puVar8 != (undefined4 *)0x0);
  }
  return;
}

