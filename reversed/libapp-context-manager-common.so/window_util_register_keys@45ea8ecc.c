/* libapp-context-manager-common.so : window_util_register_keys@45ea8ecc */

void window_util_register_keys
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_4824;
  undefined1 auStack_4820 [4];
  undefined1 auStack_481c [18408];
  int local_34;
  undefined4 local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piVar3 = *(int **)(DAT_45ea8fb4 + 0x45ea8ed6 + DAT_45ea8fb8);
  local_34 = *piVar3;
  local_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  KeyRouter_Reset_KeyList(auStack_481c);
  do {
    iVar1 = g_hash_table_iter_next(&local_c,auStack_4820,&local_4824);
    if (iVar1 == 0) goto LAB_45ea8f30;
    iVar1 = KeyRouter_Add_Key(local_4824,param_1,auStack_481c);
  } while (iVar1 != 0);
  __dlog_print(0,6,DAT_45ea8fc4 + 0x45ea8f7e,DAT_45ea8fc8 + 0x45ea8f82,DAT_45ea8fc0 + 0x45ea8fab,
               (int)&DAT_45ea91a4 + DAT_45ea8fbc,0x52,local_4824);
LAB_45ea8f30:
  iVar1 = KeyRouter_Set_KeyList(0,auStack_481c);
  if (iVar1 == 0) {
    __dlog_print(0,6,DAT_45ea8fd8 + 0x45ea8fa8,DAT_45ea8fd4 + 0x45ea8fa6,DAT_45ea8fd0 + 0x45ea8fd5,
                 DAT_45ea8fcc + 0x45ea91ce,0x59);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  if (local_34 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

