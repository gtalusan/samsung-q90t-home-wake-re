/* libapp-context-manager-common.so : property_dump@45ea91ec */

void property_dump(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 auStack_44 [24];
  int local_2c;
  
  iVar2 = DAT_45ea9290;
  iVar1 = DAT_45ea928c;
  piVar4 = *(int **)(DAT_45ea9284 + 0x45ea91f4 + DAT_45ea9288);
  local_2c = *piVar4;
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    g_hash_table_iter_init(auStack_44);
    iVar5 = DAT_45ea9298 + 0x45ea9228;
    iVar7 = DAT_45ea9294 + 0x45ea9238;
    iVar6 = 0;
    while (iVar3 = g_hash_table_iter_next(auStack_44,&local_48,&local_4c), iVar3 != 0) {
      __dlog_print(0,3,iVar5,iVar7,iVar2 + 0x45ea9263,iVar1 + 0x45ea949e,0xb1,iVar6,local_48,
                   local_4c);
      iVar6 = iVar6 + 1;
    }
  }
  if (local_2c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

