/* deviced : ambient_set_initial_mode@0003375c */

/* WARNING: Removing unreachable block (ram,0x000337b0) */
/* WARNING: Removing unreachable block (ram,0x000337c4) */
/* WARNING: Removing unreachable block (ram,0x000337c0) */
/* WARNING: Removing unreachable block (ram,0x000337c8) */
/* WARNING: Removing unreachable block (ram,0x000337bc) */
/* WARNING: Removing unreachable block (ram,0x000337b8) */
/* WARNING: Recovered jumptable eliminated as dead code */

void ambient_set_initial_mode(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  piVar6 = *(int **)(DAT_00033924 + 0x33770 + DAT_00033928);
  iVar3 = *piVar6;
  iVar7 = DAT_0003392c + 0x33794;
  iVar1 = vconf_get_int(iVar7);
  iVar2 = DAT_00033934;
  if (iVar1 == 0) {
    iVar7 = DAT_00033930 + 0x337e4;
    *(undefined4 *)(DAT_00033934 + 0x337f0) = 1;
    iVar1 = vconf_get_int(iVar7);
    if (iVar1 == 0) {
      uVar4 = *(undefined4 *)(iVar2 + 0x337f0);
      iVar2 = DAT_00033948 + 0x33a74;
      iVar7 = DAT_00033950 + 0x338ce;
      iVar1 = DAT_00033954 + 0x338b0;
      iVar5 = DAT_00033958 + 0x338bc;
      *(undefined4 *)(DAT_0003394c + 0x33894) = 0;
      __dlog_print(2,4,iVar1,iVar5,iVar7,iVar2,0x395,uVar4,0,0,0);
    }
    else {
      __dlog_print(2,6,DAT_00033944 + 0x33844,DAT_00033940 + 0x33840,DAT_0003393c + 0x33852,
                   DAT_00033938 + 0x33a08,0x38f,iVar7);
    }
  }
  else {
    __dlog_print(2,6,DAT_00033968 + 0x33914,DAT_00033964 + 0x33910,DAT_00033960 + 0x33922,
                 DAT_0003395c + 0x33ad8,0x374,iVar7);
  }
  if (iVar3 != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

