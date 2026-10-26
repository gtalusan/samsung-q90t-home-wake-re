/* libapp-context-manager-common.so : FUN_45ead9dc@45ead9dc */

void FUN_45ead9dc(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 *param_5,
                 undefined4 *param_6)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int *local_4c;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [24];
  int local_2c;
  
  piVar3 = *(int **)(DAT_45eadae8 + 0x45ead9f0 + DAT_45eadaec);
  local_2c = *piVar3;
  if (param_4 == 0) {
    __dlog_print(0,6,DAT_45eadb0c + 0x45eadadc,DAT_45eadb08 + 0x45eadada,DAT_45eadb04 + 0x45eadb07,
                 (int)&DAT_45eadbc4 + DAT_45eadb00,0xa42);
    uVar4 = 0xffffffff;
  }
  else if (param_5 == (undefined4 *)0x0 || param_6 == (undefined4 *)0x0) {
    __dlog_print(0,6,DAT_45eadafc + 0x45eadaae,DAT_45eadaf8 + 0x45eadaac,DAT_45eadaf4 + 0x45eadad9,
                 DAT_45eadaf0 + 0x45eadb96,0xa47);
    uVar4 = 0xffffffff;
  }
  else {
    g_hash_table_iter_init(auStack_44,param_4);
    do {
      iVar1 = g_hash_table_iter_next(auStack_44,auStack_48,&local_4c);
      if (iVar1 == 0) goto LAB_45eada82;
    } while (((param_1 == 0) || (iVar1 = g_strcmp0(local_4c[1],param_1), iVar1 != 0)) &&
            ((param_3 == 0 ||
             ((*local_4c == 0 || (iVar1 = g_strcmp0(*local_4c,param_3), iVar1 != 0))))));
    if (local_4c == (int *)0x0) {
LAB_45eada82:
      uVar4 = 0xffffffff;
    }
    else {
      *param_5 = local_4c;
      uVar2 = FUN_45ead98c(local_4c,param_2);
      uVar4 = 0;
      *param_6 = uVar2;
    }
  }
  if (local_2c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

