/* libapp-context-manager-common.so : cmp_bundle@45e99ccc */

void cmp_bundle(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int local_24;
  undefined4 local_20;
  int local_1c;
  
  piVar2 = *(int **)(DAT_45e99d94 + 0x45e99cd4 + DAT_45e99d98);
  local_1c = *piVar2;
  if (param_1 != 0) {
    __dlog_print(0,3,DAT_45e99da8 + 0x45e99d0c,DAT_45e99da4 + 0x45e99d0a,DAT_45e99da0 + 0x45e99d37,
                 DAT_45e99d9c + 0x45e99e10,0x4de);
    bundle_iterate(param_1,DAT_45e99dac + 0x45e99d18,0);
  }
  if (param_2 != 0) {
    __dlog_print(0,3,DAT_45e99dbc + 0x45e99d42,DAT_45e99db8 + 0x45e99d40,DAT_45e99db4 + 0x45e99d6d,
                 DAT_45e99db0 + 0x45e99e46,0x4e3);
    bundle_iterate(param_2,DAT_45e99dc0 + 0x45e99d4e,0);
  }
  local_20 = 1;
  local_24 = param_2;
  iVar1 = bundle_get_count(param_1);
  if ((iVar1 == 0) && (iVar1 = bundle_get_count(param_2), iVar1 != 0)) {
    uVar3 = 0;
  }
  else {
    if (param_1 != 0) {
      bundle_iterate(param_1,DAT_45e99dc4 + 0x45e99d6c,&local_24);
    }
    uVar3 = local_20;
  }
  if (local_1c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

