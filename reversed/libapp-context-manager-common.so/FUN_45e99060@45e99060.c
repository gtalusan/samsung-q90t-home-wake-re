/* libapp-context-manager-common.so : FUN_45e99060@45e99060 */

void FUN_45e99060(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  
  puVar3 = *(undefined4 **)(DAT_45e990f8 + 0x45e9906a);
  if (puVar3 != (undefined4 *)0x0) {
    puVar7 = (undefined4 *)(DAT_45e99104 + 0x45e9908a);
    iVar6 = DAT_45e990fc + 0x45e990b2;
    iVar8 = DAT_45e99108 + 0x45e99090;
    iVar5 = DAT_45e99100 + 0x45e990c7;
    do {
      while( true ) {
        puVar4 = (uint *)*puVar3;
        puVar3 = (undefined4 *)puVar3[1];
        if (((puVar4 != (uint *)0x0) && ((*puVar4 & param_1) != 0)) &&
           (uVar2 = *puVar4 & ~param_1, *puVar4 = uVar2, uVar2 == 0)) break;
        if (puVar3 == (undefined4 *)0x0) {
          return;
        }
      }
      uVar1 = g_list_remove(*puVar7,puVar4);
      *puVar7 = uVar1;
      g_source_remove(puVar4[1]);
      __dlog_print(0,3,DAT_45e9910c + 0x45e990e8,iVar8,iVar5,iVar6,0x2e3,puVar4[1]);
      g_free(puVar4);
    } while (puVar3 != (undefined4 *)0x0);
  }
  return;
}

