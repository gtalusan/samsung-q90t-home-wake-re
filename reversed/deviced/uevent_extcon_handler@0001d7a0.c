/* deviced : uevent_extcon_handler@0001d7a0 */

void uevent_extcon_handler(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  char *__s;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 auStack_52c [256];
  undefined1 auStack_42c [1024];
  int local_2c;
  
  piVar4 = *(int **)(DAT_0001d964 + 0x1d7b0 + DAT_0001d968);
  local_2c = *piVar4;
  pcVar2 = (char *)udev_device_get_property_value(param_1,DAT_0001d96c + 0x1d7c4);
  iVar1 = DAT_0001d970;
  if (pcVar2 != (char *)0x0) {
    uVar7 = udev_device_get_seqnum(param_1);
    iVar6 = DAT_0001d974 + 0x1d8a8;
    iVar5 = DAT_0001d978 + 0x1d83d;
    uVar3 = udev_device_get_action(param_1);
    __dlog_print(2,4,iVar1 + 0x1d800,DAT_0001d97c + 0x1d848,iVar5,iVar6,0xf9,uVar3,uVar7,uVar7);
    __dlog_print(2,4,iVar1 + 0x1d800,DAT_0001d980 + 0x1d874,iVar5,iVar6,0xfa,pcVar2);
    uVar3 = udev_device_get_action(param_1);
    __snprintf_chk(auStack_42c,0x400,1,0x400,DAT_0001d984 + 0x1d8ac,uVar3,uVar7,pcVar2);
    print_log_console_extcon(auStack_42c);
    while ((*pcVar2 != '\0' && (__s = strchr(pcVar2,0x3d), __s != (char *)0x0))) {
      memset(auStack_52c,0,0xff);
      __memcpy_chk(auStack_52c,pcVar2,(int)__s - (int)pcVar2,0xff);
      extcon_update(auStack_52c,__s + 1);
      pcVar2 = strchr(__s,10);
      if ((pcVar2 == (char *)0x0) || (pcVar2 = pcVar2 + 1, pcVar2 == (char *)0x0)) break;
    }
  }
  if (local_2c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

