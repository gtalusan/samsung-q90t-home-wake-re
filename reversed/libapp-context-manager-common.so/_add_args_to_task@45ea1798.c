/* libapp-context-manager-common.so : _add_args_to_task@45ea1798 */

int _add_args_to_task(undefined4 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  puVar1 = (undefined4 *)FUN_45e98f58(param_1,param_3 + 4);
  if (puVar1 == (undefined4 *)0x0 || param_2 == 0) {
    __dlog_print(0,6,DAT_45ea1a0c + 0x45ea19a0,DAT_45ea1a08 + 0x45ea199e,DAT_45ea1a04 + 0x45ea19c9,
                 DAT_45ea1a00 + 0x45ea2412,0xb9,param_1);
    iVar7 = -1;
  }
  else {
    iVar2 = bundle_create();
    piVar3 = (int *)g_strsplit(param_2,DAT_45ea19a8 + 0x45ea17d0,0);
    iVar7 = DAT_45ea19b8;
    iVar4 = *piVar3;
    iVar12 = iVar2;
    if (iVar4 != 0) {
      iVar9 = DAT_45ea19ac + 0x45ea1825;
      iVar14 = DAT_45ea19b4 + 0x45ea17f8;
      iVar13 = DAT_45ea19b0 + 0x45ea227c;
      piVar11 = piVar3;
LAB_45ea182a:
      do {
        puVar5 = (undefined4 *)g_strsplit(iVar4,iVar14,2);
        if (puVar5 == (undefined4 *)0x0) {
          __dlog_print(0,6,DAT_45ea19f8 + 0x45ea1968,DAT_45ea19fc + 0x45ea196c,
                       DAT_45ea19f4 + 0x45ea1995,DAT_45ea19f0 + 0x45ea23de,0xc3,param_2);
LAB_45ea193c:
          iVar12 = 0;
          bundle_free(iVar2);
          break;
        }
        pcVar10 = (char *)*puVar5;
        if ((((pcVar10 == (char *)0x0) || (pcVar8 = (char *)puVar5[1], pcVar8 == (char *)0x0)) ||
            (*pcVar10 == '\0')) || (*pcVar8 == '\0')) {
          __dlog_print(0,6,DAT_45ea19e8 + 0x45ea192a,DAT_45ea19ec + 0x45ea1930,
                       DAT_45ea19e4 + 0x45ea1957,DAT_45ea19e0 + 0x45ea23a0,0xc3,param_2);
          g_strfreev(puVar5);
          goto LAB_45ea193c;
        }
        if (*(int *)(iVar7 + 0x45ea180a) != 0) {
          iVar4 = g_strcmp0(DAT_45ea19c0 + 0x45ea1864);
          if ((iVar4 == 0) || (iVar4 = g_strcmp0(DAT_45ea19bc + 0x45ea1808,puVar5[1]), iVar4 == 0))
          {
            __dlog_print(0,6,DAT_45ea19c4 + 0x45ea1878,DAT_45ea19c8 + 0x45ea1880,iVar9,iVar13,0xce);
            bundle_add(iVar2,*puVar5,*(undefined4 *)(DAT_45ea19cc + 0x45ea189c));
            g_strfreev(puVar5);
            piVar11 = piVar11 + 1;
            iVar4 = *piVar11;
            if (iVar4 == 0) break;
            goto LAB_45ea182a;
          }
          pcVar10 = (char *)*puVar5;
          pcVar8 = (char *)puVar5[1];
        }
        bundle_add(iVar2,pcVar10,pcVar8);
        g_strfreev(puVar5);
        piVar11 = piVar11 + 1;
        iVar4 = *piVar11;
      } while (iVar4 != 0);
    }
    g_strfreev(piVar3);
    __dlog_print(0,4,DAT_45ea19d8 + 0x45ea18e2,DAT_45ea19dc + 0x45ea18e6,DAT_45ea19d4 + 0x45ea190f,
                 DAT_45ea19d0 + 0x45ea234e,0xda,*puVar1,puVar1[1],puVar1[8],param_2);
    if (iVar12 == 0) {
      uVar6 = puVar1[10];
    }
    else {
      uVar6 = g_list_append(puVar1[10],iVar12);
      puVar1[10] = uVar6;
    }
    iVar7 = g_list_length(uVar6);
    iVar7 = iVar7 + -1;
  }
  return iVar7;
}

