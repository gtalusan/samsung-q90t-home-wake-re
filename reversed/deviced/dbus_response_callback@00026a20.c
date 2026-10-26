/* deviced : dbus_response_callback@00026a20 */

void dbus_response_callback(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  char *__s1;
  int iVar3;
  size_t sVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  undefined4 local_74;
  int local_70;
  undefined4 local_6c;
  char *local_68;
  undefined1 auStack_64 [56];
  int local_2c;
  
  piVar9 = *(int **)(DAT_00026fe4 + 0x26a38 + DAT_00026fe8);
  local_74 = 0;
  local_2c = *piVar9;
  iVar3 = dbus_message_get_args(param_2,0,0x73,&local_68,0x75,&local_70,0x69,&local_6c,0);
  if (iVar3 == 0) {
    __dlog_print(2,6,DAT_00027054 + 0x26dec,DAT_00027050 + 0x26de8,DAT_0002704c + 0x26dfc,
                 (int)&DAT_0002703c + DAT_00027048,0x67a);
    local_74 = 0xffffffea;
  }
  else {
    iVar3 = get_edbus_sender_pid(param_2);
    __s1 = local_68;
    sVar4 = strlen(local_68);
    iVar5 = strncmp(__s1,(char *)(DAT_00026fec + 0x26abc),sVar4);
    if (iVar5 == 0) {
      iVar5 = 2;
      piVar14 = (int *)(DAT_00026ff0 + 0x26ae4);
      bVar1 = false;
    }
    else {
      iVar5 = strncmp(__s1,(char *)(DAT_0002701c + 0x26c80),sVar4);
      if (iVar5 == 0) {
        iVar5 = 3;
        piVar14 = (int *)(DAT_00027074 + 0x26ef4);
        bVar1 = false;
      }
      else {
        iVar5 = strncmp(__s1,(char *)(DAT_00027020 + 0x26c9c),sVar4);
        if (iVar5 == 0) {
          iVar5 = 4;
          piVar14 = (int *)(DAT_00027098 + 0x26fc8);
          bVar1 = false;
        }
        else {
          iVar5 = strncmp(__s1,(char *)(DAT_00027024 + 0x26cb8),sVar4);
          if (iVar5 != 0) {
            __dlog_print(2,6,DAT_00027034 + 0x26d08,DAT_00027030 + 0x26d00,DAT_0002702c + 0x26d14,
                         DAT_00027028 + 0x26f54,0x698,__s1);
            local_74 = 0xffffffea;
            goto LAB_00026d60;
          }
          bVar1 = true;
          iVar5 = 2;
          piVar14 = (int *)((int)&DAT_00026fec + DAT_0002709c);
        }
      }
    }
    iVar11 = DAT_00026ff8;
    iVar8 = DAT_00026ff4;
    for (puVar10 = (undefined4 *)*piVar14;
        (puVar10 != (undefined4 *)0x0 && (piVar7 = (int *)*puVar10, piVar7 != (int *)0x0));
        puVar10 = (undefined4 *)puVar10[1]) {
      if ((iVar3 == *piVar7) && (piVar7[1] == local_70)) {
        bVar2 = true;
        *(undefined1 *)(piVar7 + 2) = 1;
        iVar13 = iVar3;
        __dlog_print(2,4,DAT_00027000 + 0x26b7c,DAT_00026ffc + 0x26b64,iVar8 + 0x26b6c,
                     iVar11 + 0x26dcc,0x6aa,__s1,iVar3,local_70,local_6c);
        piVar14 = (int *)*piVar14;
        if ((piVar14 == (int *)0x0) || (iVar8 = *piVar14, iVar8 == 0)) goto LAB_00026bd0;
        goto LAB_00026ba8;
      }
    }
    __dlog_print(2,4,DAT_00027044 + 0x26d58,DAT_00027040 + 0x26d54,DAT_0002703c + 0x26d68,
                 DAT_00027038 + 0x26fa8,0x6a2);
    local_74 = 0xfffffffe;
  }
  goto LAB_00026d60;
LAB_00026ba8:
  do {
    if ((*(char *)(iVar8 + 9) != '\0') && (bVar2 = false, *(char *)(iVar8 + 8) == '\0'))
    goto LAB_00026bd0;
    piVar14 = (int *)piVar14[1];
  } while ((piVar14 != (int *)0x0) && (iVar8 = *piVar14, iVar8 != 0));
  bVar2 = true;
LAB_00026bd0:
  if (bVar1) {
    if (*(int *)(DAT_00027004 + 0x26c18) == iVar5) {
      if (bVar2) {
        piVar14 = calloc(1,4);
        iVar3 = DAT_00027008 + 0x26e90;
        iVar11 = DAT_0002700c + 0x26c50;
        iVar12 = DAT_00027010 + 0x26c40;
        iVar8 = DAT_00027014 + 0x26c44;
        *piVar14 = iVar5;
        __dlog_print(2,4,iVar8,iVar12,iVar11,iVar3,0x6c3,iVar5,iVar13,local_70,local_6c);
        g_idle_add_full(100,DAT_00027018 + 0x26c64,piVar14,0);
      }
    }
    else {
      __dlog_print(2,6,DAT_00027094 + 0x26f9c,DAT_00027090 + 0x26f90,DAT_0002708c + 0x26fa4,
                   DAT_00027088 + 0x271e8,0x6ba,iVar3,local_68,local_70,local_6c);
      local_74 = 0xfffffffe;
    }
  }
  else {
    iVar8 = *(int *)(DAT_00027058 + 0x26e34);
    if (iVar8 == iVar5) {
      if ((bVar2) && (*(int *)(DAT_00027058 + 0x26e14) != 0)) {
        sVar4 = strlen(local_68);
        iVar3 = strncmp(local_68,(char *)(DAT_0002705c + 0x26e38),sVar4);
        if ((iVar3 != 0) ||
           ((iVar3 = power_need_background_standby_wait(), iVar3 == 0 ||
            (iVar3 = power_get_cold_poweroff_request(0), iVar3 != 0)))) {
          piVar14 = calloc(1,4);
          iVar3 = DAT_00027060 + 160000;
          iVar11 = DAT_00027064 + 0x26ec0;
          iVar13 = DAT_00027068 + 0x26eb0;
          iVar5 = DAT_0002706c + 0x26eb4;
          *piVar14 = iVar8;
          __dlog_print(2,4,iVar5,iVar13,iVar11,iVar3,0x6d7,iVar8);
          g_idle_add_full(100,DAT_00027070 + 0x26ed4,piVar14,0);
        }
      }
    }
    else {
      __dlog_print(2,6,DAT_00027084 + 0x26f40,DAT_00027080 + 0x26f34,DAT_0002707c + 0x26f48,
                   DAT_00027078 + 0x2718c,0x6cb,iVar3,local_68,local_70,local_6c);
      local_74 = 0xfffffffe;
    }
  }
LAB_00026d60:
  uVar6 = dbus_message_new_method_return(param_2);
  dbus_message_iter_init_append(uVar6,auStack_64);
  dbus_message_iter_append_basic(auStack_64,0x69,&local_74);
  if (local_2c != *piVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}

