/* libapp-context-manager-common.so : FUN_45e98f58@45e98f58 */

void FUN_45e98f58(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_4c;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [24];
  int local_2c;
  
  piVar4 = *(int **)(DAT_45e99038 + 0x45e98f60 + DAT_45e9903c);
  local_2c = *piVar4;
  if (param_1 == 0) {
    __dlog_print(0,6,DAT_45e9905c + 0x45e99030,DAT_45e99058 + 0x45e9902e,DAT_45e99054 + 0x45e9905d,
                 DAT_45e99050 + 0x45e9902a,0x95);
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    g_hash_table_iter_init(auStack_44,*param_2);
LAB_45e98f8e:
    do {
      iVar2 = g_hash_table_iter_next(auStack_44,auStack_48,&local_4c);
      iVar1 = local_4c;
      while( true ) {
        if (iVar2 == 0) {
          if (iVar3 == 0) {
            __dlog_print(0,4,DAT_45e9904c + 0x45e9900a,DAT_45e99048 + 0x45e99008,
                         DAT_45e99044 + 0x45e99039,DAT_45e99040 + 0x45e99006,0xab);
          }
          goto LAB_45e98fbc;
        }
        local_4c = iVar1;
        iVar2 = g_strcmp0(*(undefined4 *)(iVar1 + 4),param_1);
        if ((iVar2 != 0) || (*(int *)(iVar1 + 0x24) != 0)) goto LAB_45e98f8e;
        if (iVar3 != 0) break;
        iVar3 = iVar1;
        if (*(int *)(iVar1 + 0x20) != 0) goto LAB_45e98fbc;
        iVar2 = g_hash_table_iter_next(auStack_44,auStack_48,&local_4c);
        iVar1 = local_4c;
      }
    } while (*(int *)(iVar1 + 0x20) == 0);
    iVar3 = iVar1;
  }
LAB_45e98fbc:
  if (local_2c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar3);
  }
  return;
}

