/* deviced : clone_usbdev@0003721c */

undefined4 * clone_usbdev(undefined4 *param_1)

{
  undefined4 *puVar1;
  size_t sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = malloc(0x48);
    pcVar7 = (char *)*param_1;
    sVar2 = strlen(pcVar7);
    uVar3 = __strndup(pcVar7,sVar2);
    uVar4 = param_1[2];
    uVar6 = param_1[3];
    uVar8 = param_1[4];
    uVar10 = param_1[5];
    uVar9 = param_1[6];
    puVar1[1] = param_1[1];
    puVar1[2] = uVar4;
    uVar4 = param_1[7];
    uVar5 = param_1[8];
    puVar1[3] = uVar6;
    puVar1[4] = uVar8;
    uVar6 = param_1[9];
    pcVar7 = (char *)param_1[10];
    puVar1[5] = uVar10;
    puVar1[6] = uVar9;
    puVar1[8] = uVar5;
    puVar1[9] = uVar6;
    puVar1[7] = uVar4;
    *puVar1 = uVar3;
    sVar2 = strlen(pcVar7);
    uVar3 = __strndup(pcVar7,sVar2);
    pcVar7 = (char *)param_1[0xb];
    puVar1[10] = uVar3;
    sVar2 = strlen(pcVar7);
    uVar3 = __strndup(pcVar7,sVar2);
    pcVar7 = (char *)param_1[0xc];
    puVar1[0xb] = uVar3;
    sVar2 = strlen(pcVar7);
    uVar3 = __strndup(pcVar7,sVar2);
    pcVar7 = (char *)param_1[0xd];
    puVar1[0xc] = uVar3;
    sVar2 = strlen(pcVar7);
    uVar3 = __strndup(pcVar7,sVar2);
    pcVar7 = (char *)param_1[0xe];
    puVar1[0xd] = uVar3;
    sVar2 = strlen(pcVar7);
    uVar3 = __strndup(pcVar7,sVar2);
    pcVar7 = (char *)param_1[0xf];
    puVar1[0xe] = uVar3;
    sVar2 = strlen(pcVar7);
    uVar3 = __strndup(pcVar7,sVar2);
    pcVar7 = (char *)param_1[0x10];
    puVar1[0xf] = uVar3;
    sVar2 = strlen(pcVar7);
    uVar3 = __strndup(pcVar7,sVar2);
    pcVar7 = (char *)param_1[0x11];
    puVar1[0x10] = uVar3;
    sVar2 = strlen(pcVar7);
    uVar3 = __strndup(pcVar7,sVar2);
    puVar1[0x11] = uVar3;
  }
  return puVar1;
}

