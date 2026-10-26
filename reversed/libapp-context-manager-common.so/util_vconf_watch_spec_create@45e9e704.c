/* libapp-context-manager-common.so : util_vconf_watch_spec_create@45e9e704 */

undefined4 *
util_vconf_watch_spec_create(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)util_malloc_s(0x10);
  uVar2 = g_strdup(param_1);
  iVar4 = DAT_45e9e8a8;
  *puVar1 = uVar2;
  iVar4 = iVar4 + 0x45e9e72c;
  puVar3 = puVar1;
  switch(param_2) {
  case 1:
    uVar2 = g_memdup(param_4,4);
    puVar1[2] = uVar2;
    switch(param_3) {
    case 0:
      puVar1[1] = *(undefined4 *)(iVar4 + DAT_45e9e8e0);
      return puVar1;
    case 1:
      puVar1[1] = *(undefined4 *)(iVar4 + DAT_45e9e8e4);
      return puVar1;
    case 2:
      puVar1[1] = *(undefined4 *)(iVar4 + DAT_45e9e8e8);
      return puVar1;
    case 3:
      puVar1[1] = *(undefined4 *)(iVar4 + DAT_45e9e8ec);
      return puVar1;
    default:
      __dlog_print(0,6,DAT_45e9e918 + 0x45e9e8a2,DAT_45e9e914 + 0x45e9e8a0,DAT_45e9e910 + 0x45e9e8cd
                   ,DAT_45e9e90c + 0x45e9f092,0x1c6);
    }
    break;
  case 2:
    uVar2 = g_memdup(param_4,4);
    puVar1[2] = uVar2;
    if (param_3 == 0) {
      puVar1[1] = *(undefined4 *)(iVar4 + DAT_45e9e8c4);
      return puVar1;
    }
    if (param_3 == 1) {
      puVar1[1] = *(undefined4 *)(iVar4 + DAT_45e9e8c0);
      return puVar1;
    }
    __dlog_print(0,6,DAT_45e9e8d8 + 0x45e9e80e,DAT_45e9e8d4 + 0x45e9e80c,DAT_45e9e8d0 + 0x45e9e839,
                 DAT_45e9e8cc + 0x45e9effe,0x1d4);
    break;
  case 3:
    uVar2 = g_memdup(param_4,8);
    puVar1[2] = uVar2;
    switch(param_3) {
    case 0:
      puVar1[1] = *(undefined4 *)(iVar4 + DAT_45e9e8f0);
      return puVar1;
    case 1:
      puVar1[1] = *(undefined4 *)(iVar4 + DAT_45e9e8f4);
      return puVar1;
    case 2:
      puVar1[1] = *(undefined4 *)(iVar4 + DAT_45e9e8f8);
      return puVar1;
    case 3:
      puVar1[1] = *(undefined4 *)(iVar4 + DAT_45e9e8dc);
      return puVar1;
    default:
      __dlog_print(0,6,DAT_45e9e908 + 0x45e9e878,DAT_45e9e904 + 0x45e9e876,DAT_45e9e900 + 0x45e9e8a3
                   ,DAT_45e9e8fc + 0x45e9f068,0x1e8);
    }
    break;
  case 4:
    uVar2 = g_strdup(param_4);
    puVar1[2] = uVar2;
    if (param_3 == 0) {
      puVar1[1] = *(undefined4 *)(iVar4 + DAT_45e9e8c8);
      return puVar1;
    }
    if (param_3 == 1) {
      puVar1[1] = *(undefined4 *)(iVar4 + DAT_45e9e8bc);
      return puVar1;
    }
    __dlog_print(0,6,DAT_45e9e8b8 + 0x45e9e75c,DAT_45e9e8b4 + 0x45e9e75a,DAT_45e9e8b0 + 0x45e9e787,
                 DAT_45e9e8ac + 0x45e9ef4c,0x1f7);
    break;
  default:
    goto switchD_45e9e72e_default;
  }
  g_free(*puVar1);
  g_free(puVar1[2]);
  puVar3 = (undefined4 *)0x0;
  g_free(puVar1);
switchD_45e9e72e_default:
  return puVar3;
}

