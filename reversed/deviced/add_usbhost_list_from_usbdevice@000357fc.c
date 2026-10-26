/* deviced : add_usbhost_list_from_usbdevice@000357fc */

int add_usbhost_list_from_usbdevice(int *param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  char *__s2;
  int iVar8;
  
  iVar2 = DAT_00035ad0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail((char *)((int)&DAT_00035ac8 + DAT_00035b28),(char *)(DAT_00035b24 + 0x35ac0),0xbe,
                  (char *)((int)&DAT_00035b1c + DAT_00035b20));
  }
  iVar7 = DAT_00035ad0 + 0x35850;
  __dlog_print(0,3,DAT_00035ad8 + 0x35868,DAT_00035ad4 + 0x3585c,DAT_00035acc + 0x35872,
               DAT_00035ac8 + 0x358b4,0xc0,*param_1);
  g_mutex_lock(iVar7);
  piVar5 = *(int **)(iVar2 + 0x35858);
  if (piVar5 != (int *)0x0) {
    pcVar1 = (char *)*piVar5;
    piVar5 = (int *)piVar5[1];
    if (pcVar1 != (char *)0x0) {
      __s2 = (char *)*param_1;
      do {
        iVar2 = strncmp(pcVar1,__s2,0x1000);
        if (iVar2 == 0) {
          __dlog_print(0,3,DAT_00035af8 + 0x359f4,DAT_00035afc + 0x359fc,DAT_00035af4 + 0x35a0e,
                       DAT_00035af0 + 0x35a50,0xc9,__s2);
          g_mutex_unlock(DAT_00035b00 + 0x35a08);
          return -0x11;
        }
        if (piVar5 == (int *)0x0) break;
        pcVar1 = (char *)*piVar5;
        piVar5 = (int *)piVar5[1];
      } while (pcVar1 != (char *)0x0);
    }
  }
  g_mutex_unlock(DAT_00035adc + 0x358c8);
  pcVar1 = calloc(1,0x1020);
  if (pcVar1 == (char *)0x0) {
    piVar5 = __errno_location();
    __dlog_print(2,6,DAT_00035b18 + 0x35a90,DAT_00035b1c + 0x35a98,DAT_00035b14 + 0x35a9a,
                 (int)&DAT_00035adc + DAT_00035b10,0xd3,*piVar5);
    iVar2 = -*piVar5;
  }
  else {
    snprintf(pcVar1,0x1000,(char *)(DAT_00035ae0 + 0x358f4),(char *)*param_1);
    iVar2 = param_1[0xc];
    iVar8 = param_1[2];
    iVar7 = param_1[3];
    iVar4 = param_1[5];
    iVar6 = param_1[6];
    *(int *)(pcVar1 + 0x1000) = param_1[1];
    *(int *)(pcVar1 + 0x1004) = iVar8;
    *(int *)(pcVar1 + 0x1008) = iVar7;
    *(int *)(pcVar1 + 0x100c) = iVar4;
    *(int *)(pcVar1 + 0x1010) = iVar6;
    if (iVar2 == 0) {
      iVar2 = DAT_00035b08 + 0x35a2c;
    }
    uVar3 = __strdup(iVar2);
    iVar2 = param_1[0xd];
    *(undefined4 *)(pcVar1 + 0x1014) = uVar3;
    if (iVar2 == 0) {
      iVar2 = DAT_00035b0c + 0x35a38;
    }
    uVar3 = __strdup(iVar2);
    iVar2 = param_1[0xe];
    *(undefined4 *)(pcVar1 + 0x1018) = uVar3;
    if (iVar2 == 0) {
      iVar2 = DAT_00035b04 + 0x35a20;
    }
    uVar3 = __strdup(iVar2);
    iVar2 = DAT_00035ae4;
    iVar7 = DAT_00035ae4 + 0x35968;
    *(undefined4 *)(pcVar1 + 0x101c) = uVar3;
    g_mutex_lock(iVar7);
    uVar3 = g_list_append(*(undefined4 *)(iVar2 + 0x35970),pcVar1);
    *(undefined4 *)(iVar2 + 0x35970) = uVar3;
    uVar3 = clone_usbhost(pcVar1);
    g_idle_add_full(200,DAT_00035aec + 0x3599c,uVar3,DAT_00035ae8 + 0x35998);
    g_mutex_unlock(iVar7);
    iVar2 = 0;
  }
  return iVar2;
}

