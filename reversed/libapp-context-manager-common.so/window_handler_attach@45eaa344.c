/* libapp-context-manager-common.so : window_handler_attach@45eaa344 */

undefined4 window_handler_attach(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  puVar2 = (undefined4 *)util_malloc_s(8);
  iVar1 = DAT_45eaa3c0;
  *puVar2 = param_2;
  puVar2[1] = param_3;
  if (param_1 == 0) {
    puVar5 = *(undefined4 **)(iVar1 + 0x45eaa35e + DAT_45eaa3c8);
    uVar4 = g_list_append(*puVar5,puVar2);
    *puVar5 = uVar4;
    return 0;
  }
  if (param_1 == 1) {
    uVar4 = 0;
    puVar5 = *(undefined4 **)(iVar1 + 0x45eaa35e + DAT_45eaa3c4);
    uVar3 = g_list_append(*puVar5,puVar2);
    *puVar5 = uVar3;
  }
  else {
    uVar4 = 0xffffffff;
    __dlog_print(0,6,DAT_45eaa3d8 + 0x45eaa3ba,DAT_45eaa3d4 + 0x45eaa3b8,DAT_45eaa3d0 + 0x45eaa3e1,
                 DAT_45eaa3cc + 0x45eaa6fe,0xe8);
  }
  return uVar4;
}

