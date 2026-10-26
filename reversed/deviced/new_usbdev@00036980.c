/* deviced : new_usbdev@00036980 */

undefined4 * new_usbdev(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char *__nptr;
  char *__nptr_00;
  char *__nptr_01;
  char *__nptr_02;
  char *__nptr_03;
  char *__nptr_04;
  char *__nptr_05;
  undefined4 *puVar5;
  long lVar6;
  undefined4 uVar7;
  void *pvVar8;
  int iVar9;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  
  pcVar1 = (char *)udev_device_get_subsystem();
  pcVar2 = (char *)udev_device_get_devtype(param_1);
  iVar3 = udev_device_get_devpath(param_1);
  if (iVar3 != 0) {
    if ((((*pcVar1 == 'u') && (pcVar1[1] == 's')) && (pcVar1[2] == 'b')) &&
       ((pcVar1[3] == '\0' && (iVar4 = strcmp(pcVar2,(char *)(DAT_00037054 + 0x36d00)), iVar4 == 0))
       )) {
      iVar4 = param_1;
    }
    else {
      iVar4 = udev_device_get_parent_with_subsystem_devtype
                        (param_1,DAT_00037018 + 0x369d8,DAT_00037014 + 0x369d4);
      if (iVar4 == 0) {
        return (undefined4 *)0x0;
      }
    }
    iVar9 = DAT_0003701c + 0x369f0;
    pcVar2 = (char *)udev_device_get_sysattr_value(iVar4,iVar9);
    if (pcVar2 == (char *)0x0) {
      __dlog_print(2,6,DAT_0003707c + 0x36ddc,DAT_00037078 + 0x36dd8,DAT_00037074 + 0x36ded,
                   DAT_00037070 + 0x36e38,0x16e,iVar9);
      return (undefined4 *)0x0;
    }
    iVar9 = DAT_00037020 + 0x36a10;
    __nptr = (char *)udev_device_get_sysattr_value(iVar4,iVar9);
    if (__nptr == (char *)0x0) {
      __dlog_print(2,6,DAT_0003708c + 0x36e30,DAT_00037088 + 0x36e2c,DAT_00037084 + 0x36e3d,
                   DAT_00037080 + 0x36e88,0x16f,iVar9);
      return (undefined4 *)0x0;
    }
    iVar9 = DAT_00037024 + 0x36a2c;
    __nptr_00 = (char *)udev_device_get_sysattr_value(iVar4,iVar9);
    if (__nptr_00 == (char *)0x0) {
      __dlog_print(2,6,DAT_0003709c + 0x36e7c,DAT_00037098 + 0x36e78,DAT_00037094 + 0x36e8d,
                   DAT_00037090 + 0x36ed8,0x170,iVar9);
      return (undefined4 *)0x0;
    }
    iVar9 = DAT_00037028 + 0x36a4c;
    __nptr_01 = (char *)udev_device_get_sysattr_value(iVar4,iVar9);
    if (__nptr_01 == (char *)0x0) {
      __dlog_print(2,6,DAT_000370ac + 0x36ecc,DAT_000370a8 + 0x36ec8,DAT_000370a4 + 0x36edd,
                   DAT_000370a0 + 0x36f28,0x171,iVar9);
      return (undefined4 *)0x0;
    }
    iVar4 = udev_device_get_parent(iVar4);
    if (iVar4 != 0) {
      iVar9 = DAT_0003702c + 0x36a78;
      __nptr_02 = (char *)udev_device_get_sysattr_value(iVar4,iVar9);
      if (__nptr_02 == (char *)0x0) {
        __dlog_print(2,6,DAT_000370bc + 0x36f1c,DAT_000370b8 + 0x36f18,DAT_000370b4 + 0x36f2d,
                     DAT_000370b0 + 0x36f78,0x177,iVar9);
        return (undefined4 *)0x0;
      }
      iVar9 = DAT_00037030 + 0x36a98;
      __nptr_03 = (char *)udev_device_get_sysattr_value(iVar4,iVar9);
      if (__nptr_03 == (char *)0x0) {
        __dlog_print(2,6,DAT_000370cc + 0x36f6c,DAT_000370c8 + 0x36f68,DAT_000370c4 + 0x36f7d,
                     DAT_000370c0 + 0x36fc8,0x178,iVar9);
        return (undefined4 *)0x0;
      }
      iVar9 = DAT_00037034 + 0x36ab8;
      __nptr_04 = (char *)udev_device_get_sysattr_value(iVar4,iVar9);
      if (__nptr_04 == (char *)0x0) {
        __dlog_print(2,6,DAT_000370dc + 0x36fc0,DAT_000370d8 + 0x36fbc,DAT_000370d4 + 0x36fcd,
                     (int)&DAT_00037018 + DAT_000370d0,0x179,iVar9);
        return (undefined4 *)0x0;
      }
      iVar9 = DAT_00037038 + 0x36ad4;
      __nptr_05 = (char *)udev_device_get_sysattr_value(iVar4,iVar9);
      if (__nptr_05 == (char *)0x0) {
        __dlog_print(2,6,DAT_000370ec + 0x3700c,DAT_000370e8 + 0x37008,DAT_000370e4 + 0x3701d,
                     (int)&DAT_00037068 + DAT_000370e0,0x17a,iVar9);
        return (undefined4 *)0x0;
      }
      local_44 = udev_device_get_property_value(param_1,DAT_0003703c + 0x36af4);
      if (local_44 == 0) {
        local_44 = DAT_00037064 + 0x36d68;
      }
      local_38 = udev_device_get_sysattr_value(iVar4,DAT_00037040 + 0x36b10);
      if (local_38 == 0) {
        local_38 = DAT_00037068 + 0x36d78;
      }
      local_3c = udev_device_get_sysattr_value(iVar4,DAT_00037044 + 0x36b2c);
      if (local_3c == 0) {
        local_3c = DAT_0003706c + 0x36d88;
      }
      local_40 = udev_device_get_sysattr_value(iVar4,DAT_00037048 + 0x36b48);
      if (local_40 == 0) {
        local_40 = DAT_0003705c + 0x36d4c;
      }
      iVar9 = udev_device_get_sysattr_value(iVar4,DAT_0003704c + 0x36b64);
      if (iVar9 == 0) {
        iVar9 = DAT_00037060 + 0x36d5c;
      }
      udev_device_get_sysattr_value(iVar4,DAT_00037050 + 0x36b7c);
      iVar4 = udev_device_get_syspath(param_1);
      if (iVar4 == 0) {
        iVar4 = DAT_00037058 + 0x36d40;
      }
      puVar5 = malloc(0x48);
      lVar6 = strtol(pcVar2,(char **)0x0,0x10);
      puVar5[1] = lVar6;
      lVar6 = strtol(__nptr,(char **)0x0,0x10);
      puVar5[2] = lVar6;
      lVar6 = strtol(__nptr_00,(char **)0x0,0x10);
      puVar5[3] = lVar6;
      lVar6 = strtol(__nptr_01,(char **)0x0,0);
      puVar5[4] = lVar6;
      lVar6 = strtol(__nptr_02,(char **)0x0,0x10);
      puVar5[5] = lVar6;
      lVar6 = strtol(__nptr_03,(char **)0x0,0x10);
      puVar5[6] = lVar6;
      lVar6 = strtol(__nptr_04,(char **)0x0,0);
      puVar5[7] = lVar6;
      lVar6 = strtol(__nptr_05,(char **)0x0,0);
      puVar5[8] = lVar6;
      uVar7 = __strdup(iVar3);
      *puVar5 = uVar7;
      uVar7 = __strdup(local_38);
      puVar5[0xc] = uVar7;
      uVar7 = __strdup(local_3c);
      puVar5[0xd] = uVar7;
      uVar7 = __strdup(iVar4);
      puVar5[0xb] = uVar7;
      uVar7 = __strdup(local_40);
      puVar5[0xe] = uVar7;
      uVar7 = __strdup(iVar9);
      puVar5[0xf] = uVar7;
      uVar7 = __strdup(local_44);
      puVar5[0x10] = uVar7;
      uVar7 = __strdup(pcVar1);
      puVar5[0x11] = uVar7;
      pcVar1 = (char *)ports_from_syspath_new(iVar4,__nptr_04);
      if (pcVar1 == (char *)0x0) {
        puVar5[9] = 0xfffffffe;
        pvVar8 = calloc(1,1);
        puVar5[10] = pvVar8;
        return puVar5;
      }
      lVar6 = strtol(pcVar1,(char **)0x0,10);
      puVar5[10] = pcVar1;
      puVar5[9] = lVar6;
      return puVar5;
    }
  }
  return (undefined4 *)0x0;
}

