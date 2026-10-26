/* deviced : clone_usbhost@000356b0 */

char * clone_usbhost(char *param_1)

{
  char *param0;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (param_1 == (char *)0x0) {
    param0 = (char *)0x0;
  }
  else {
    param0 = calloc(1,0x1020);
    if (param0 == (char *)0x0) {
      __dlog_print(2,6,DAT_000357f8 + 0x357d8,DAT_000357f4 + 0x357d4,DAT_000357f0 + 0x357ea,
                   add_usbhost_list_from_usbdevice + DAT_000357ec,0xa5);
    }
    else {
      snprintf(param0,0x1000,(char *)(DAT_000357dc + 0x356f0),param_1);
      iVar1 = *(int *)(param_1 + 0x1014);
      uVar2 = *(undefined4 *)(param_1 + 0x1008);
      uVar3 = *(undefined4 *)(param_1 + 0x100c);
      uVar4 = *(undefined4 *)(param_1 + 0x1010);
      uVar5 = *(undefined4 *)(param_1 + 0x1004);
      *(undefined4 *)(param0 + 0x1000) = *(undefined4 *)(param_1 + 0x1000);
      *(undefined4 *)(param0 + 0x1004) = uVar5;
      *(undefined4 *)(param0 + 0x1008) = uVar2;
      *(undefined4 *)(param0 + 0x100c) = uVar3;
      *(undefined4 *)(param0 + 0x1010) = uVar4;
      if (iVar1 == 0) {
        iVar1 = DAT_000357e0 + 0x35774;
      }
      uVar2 = __strdup(iVar1);
      iVar1 = *(int *)(param_1 + 0x1018);
      *(undefined4 *)(param0 + 0x1014) = uVar2;
      if (iVar1 == 0) {
        iVar1 = DAT_000357e4 + 0x35780;
      }
      uVar2 = __strdup(iVar1);
      iVar1 = *(int *)(param_1 + 0x101c);
      *(undefined4 *)(param0 + 0x1018) = uVar2;
      if (iVar1 == 0) {
        iVar1 = DAT_000357e8 + 0x3578c;
      }
      uVar2 = __strdup(iVar1);
      *(undefined4 *)(param0 + 0x101c) = uVar2;
    }
  }
  return param0;
}

