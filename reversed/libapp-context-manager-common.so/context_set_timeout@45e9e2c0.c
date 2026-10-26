/* libapp-context-manager-common.so : context_set_timeout@45e9e2c0 */

undefined4 context_set_timeout(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  context_set(param_1,param_3);
  puVar2 = (undefined4 *)util_malloc_s(0xc);
  iVar1 = DAT_45e9e344;
  iVar4 = DAT_45e9e340 + 0x45e9e2e8;
  *puVar2 = param_1;
  puVar2[2] = param_3;
  uVar3 = g_timeout_add(param_2,iVar4,puVar2);
  puVar2[1] = uVar3;
  uVar3 = context_to_string(param_1);
  __dlog_print(0,3,DAT_45e9e354 + 0x45e9e322,DAT_45e9e350 + 0x45e9e31e,DAT_45e9e348 + 0x45e9e347,
               DAT_45e9e34c + 0x45e9eae2,0x2cb,uVar3,puVar2[1]);
  uVar3 = g_list_append(*(undefined4 *)(iVar1 + 0x45e9e2f0),puVar2);
  *(undefined4 *)(iVar1 + 0x45e9e2f0) = uVar3;
  return *(undefined4 *)(param_3 + 0x3c);
}

