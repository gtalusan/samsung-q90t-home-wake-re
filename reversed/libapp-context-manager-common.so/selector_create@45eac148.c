/* libapp-context-manager-common.so : selector_create@45eac148 */

long * selector_create(int param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  long lVar6;
  size_t sVar7;
  long *plVar8;
  int iVar9;
  int *piVar10;
  
  iVar4 = DAT_45eac430;
  plVar8 = (long *)0x0;
  *(undefined4 *)(DAT_45eac430 + 0x45eac1b2) = 0;
  if (param_1 == 0) {
    return (long *)0x0;
  }
  iVar9 = DAT_45eac434 + 0x45eac168;
  iVar1 = g_strstr_len(param_1,0xffffffff,iVar9);
  if (iVar1 != 0) {
    piVar2 = (int *)g_strsplit(param_1,iVar9,0);
    if (*piVar2 != 0) {
      piVar10 = piVar2;
      do {
        plVar8 = (long *)selector_append(plVar8);
        if (*(int *)(iVar4 + 0x45eac1b2) != 0) break;
        piVar10 = piVar10 + 1;
      } while (*piVar10 != 0);
      if (plVar8 != (long *)0x0) {
        plVar8[5] = plVar8[7];
        plVar8[7] = 0;
        g_strfreev(piVar2);
        if (*(int *)(DAT_45eac438 + 0x45eac20a) == 0) {
          return plVar8;
        }
        selector_free(plVar8);
        return (long *)0x0;
      }
    }
    g_strfreev(piVar2);
    if (*(int *)(DAT_45eac43c + 0x45eac222) == 0) {
      return (long *)0x0;
    }
    return (long *)0x0;
  }
  plVar8 = (long *)util_malloc_s(0x20);
  if (plVar8 == (long *)0x0) {
    *(undefined4 *)(iVar4 + 0x45eac1b2) = 1;
    return (long *)0x0;
  }
  piVar2 = (int *)g_strsplit(param_1,DAT_45eac440 + 0x45eac1ea,2);
  if (piVar2 == (int *)0x0) {
    *(undefined4 *)(iVar4 + 0x45eac1b2) = 2;
    g_free(plVar8);
    return (long *)0x0;
  }
  pcVar3 = (char *)*piVar2;
  if ((pcVar3 == (char *)0x0) || ((char *)piVar2[1] == (char *)0x0)) {
    *(undefined4 *)(DAT_45eac44c + 0x45eac324) = 2;
    goto LAB_45eac264;
  }
  if ((*pcVar3 == '\0') || (*(char *)piVar2[1] == '\0')) {
    *(undefined4 *)(DAT_45eac448 + 0x45eac2c0) = 2;
    goto LAB_45eac264;
  }
  iVar4 = g_str_has_prefix(pcVar3,DAT_45eac444 + 0x45eac210);
  if (iVar4 == 0) {
    plVar8[1] = 0;
  }
  else {
    plVar8[1] = 1;
  }
  iVar4 = selector_to_prop(*piVar2 + (uint)(iVar4 != 0));
  plVar8[3] = iVar4;
  if (iVar4 < 1) {
    *(undefined4 *)(DAT_45eac450 + 0x45eac340) = 3;
    goto LAB_45eac264;
  }
  pcVar3 = (char *)piVar2[1];
  param_1 = plVar8[1] + param_1;
  if (pcVar3 == (char *)0x0) goto LAB_45eac32c;
  switch(iVar4) {
  case 1:
    puVar5 = (undefined4 *)g_strsplit(pcVar3,DAT_45eac468 + 0x45eac362,2);
    if (puVar5 == (undefined4 *)0x0) {
      lVar6 = g_strdup(pcVar3);
      plVar8[2] = lVar6;
      *plVar8 = -1;
    }
    else {
      if (puVar5[1] == 0) {
        lVar6 = g_strdup(pcVar3);
        plVar8[2] = lVar6;
        *plVar8 = -1;
      }
      else {
        lVar6 = g_strdup(*puVar5);
        plVar8[2] = lVar6;
        lVar6 = strtol((char *)puVar5[1],(char **)0x0,10);
        *plVar8 = lVar6;
      }
      g_strfreev(puVar5);
    }
    break;
  default:
    lVar6 = g_strdup(pcVar3);
    plVar8[2] = lVar6;
    *plVar8 = 0;
    break;
  case 4:
    lVar6 = g_strdup(pcVar3);
    plVar8[2] = lVar6;
    iVar4 = task_to_type();
    *plVar8 = iVar4;
    goto joined_r0x45eac42a;
  case 5:
    lVar6 = g_strdup(pcVar3);
    plVar8[2] = lVar6;
    iVar4 = task_to_prio();
    *plVar8 = iVar4;
    goto joined_r0x45eac42a;
  case 6:
    lVar6 = g_strdup(pcVar3);
    plVar8[2] = lVar6;
    iVar4 = context_to_mask();
    *plVar8 = iVar4;
joined_r0x45eac42a:
    if (iVar4 < 0) {
LAB_45eac32c:
      lVar6 = plVar8[2];
      *(undefined4 *)(DAT_45eac464 + 0x45eac392) = 3;
      g_free(lVar6);
LAB_45eac264:
      g_free(plVar8);
      g_strfreev(piVar2);
      return (long *)0x0;
    }
    break;
  case 7:
  case 9:
    lVar6 = g_strdup(param_1 + 7);
    plVar8[2] = lVar6;
    *plVar8 = 0;
    break;
  case 8:
    lVar6 = g_strdup(param_1 + 5);
    plVar8[2] = lVar6;
    *plVar8 = 0;
    break;
  case 10:
    lVar6 = g_strdup(param_1 + 8);
    plVar8[2] = lVar6;
    *plVar8 = 0;
    break;
  case 0xb:
  case 0xc:
    lVar6 = g_strdup(param_1 + 6);
    plVar8[2] = lVar6;
    *plVar8 = 0;
    break;
  case 0xe:
    iVar4 = g_str_has_prefix(pcVar3,DAT_45eac46c + 0x45eac3c0);
    if (iVar4 != 0) {
      sVar7 = strlen(pcVar3);
      pcVar3 = (char *)g_strndup(pcVar3 + 1,sVar7 - 2);
      plVar8[2] = (long)pcVar3;
      if (pcVar3 == (char *)0x0) break;
      sVar7 = strlen(pcVar3);
      iVar4 = g_strstr_len(pcVar3,sVar7,DAT_45eac470 + 0x45eac408);
      iVar4 = (iVar4 - plVar8[2]) + 1;
      *plVar8 = iVar4;
      if (0 < iVar4) break;
    }
    *plVar8 = -1;
  }
  if (plVar8[3] - 7U < 6) {
    __dlog_print(0,3,DAT_45eac45c + 0x45eac308,DAT_45eac460 + 0x45eac30a,DAT_45eac458 + 0x45eac337,
                 DAT_45eac454 + 0x45eac2d0,0x107,plVar8[2]);
    lVar6 = selector_create(plVar8[2]);
    plVar8[4] = lVar6;
  }
  else {
    plVar8[4] = 0;
  }
  plVar8[6] = (long)plVar8;
  plVar8[7] = 0;
  plVar8[5] = 0;
  g_strfreev(piVar2);
  return plVar8;
}

