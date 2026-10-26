/* libapp-context-manager-common.so : context_add_change_handler@45e9e358 */

void context_add_change_handler(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_45e9e388;
  puVar2 = (undefined4 *)util_malloc_s(0xc);
  uVar3 = *(undefined4 *)(iVar1 + 0x45e9e3cc);
  *puVar2 = param_1;
  puVar2[1] = param_2;
  puVar2[2] = param_3;
  uVar3 = g_list_append(uVar3,puVar2);
  *(undefined4 *)(iVar1 + 0x45e9e3cc) = uVar3;
  return;
}

