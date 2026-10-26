/* tvctx-manager : __handle_app_booting_on_wakeup@0001db68 */

/* __handle_app_booting_on_wakeup(manager_ctxt*) */

void __handle_app_booting_on_wakeup(manager_ctxt *param_1)

{
  size_t sVar1;
  ssize_t sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  socklen_t local_16c;
  int local_168;
  timeval local_164;
  char acStack_15c [64];
  sockaddr local_11c [6];
  undefined4 uStack_b0;
  fd_set local_ac;
  int local_2c;
  
  local_2c = __stack_chk_guard;
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > %s is alive resume app source",DAT_0001de40,
               DAT_0001de44,0x461,*(undefined4 *)(param_1 + 0x38));
  __snprintf_chk(acStack_15c,0x40,1,0x40,"%d:%s",0x11,*(undefined4 *)(param_1 + 0x38));
  if (DAT_0003b464 != 0xffffffff) goto LAB_0001dbde;
  local_11c[0].sa_family = 1;
  strncpy(local_11c[0].sa_data,"/tmp/perfmonsock",0x6b);
  uVar4 = socket(1,1,0);
  if ((int)uVar4 < 0) {
    prctl(0x29a,"perfmon Client: No socket created:",0x22);
    goto LAB_0001dbde;
  }
  uVar5 = fcntl(uVar4,3,0);
  if ((int)uVar5 < 0) {
    pcVar7 = "perfmon Client:socket fcntl get fail:";
    uVar8 = 0x25;
  }
  else {
    iVar3 = fcntl(uVar4,4,uVar5 | 0x800);
    if (-1 < iVar3) {
      iVar3 = connect(uVar4,local_11c,0x6e);
      if (iVar3 < 0) {
        piVar6 = __errno_location();
        if (*piVar6 != 0x73) {
          DAT_0003b464 = 0xffffffff;
          prctl(0x29a,"perfmon Client:connect error",0x1c);
          usleep(10000);
          iVar3 = connect(uVar4,local_11c,0x6e);
          if (-1 < iVar3) goto LAB_0001dd32;
          pcVar7 = "perfmon Client:connect error count out";
          uVar8 = 0x26;
          if (*piVar6 != 0x73) goto LAB_0001dd14;
        }
        puVar9 = &uStack_b0;
        local_164.tv_sec = 1;
        local_164.tv_usec = 0;
        do {
          puVar9 = puVar9 + 1;
          *puVar9 = 0;
        } while (puVar9 != local_ac.fds_bits + 0x1f);
        iVar3 = __fdelt_chk(uVar4);
        local_ac.fds_bits[iVar3] = 1 << (uVar4 & 0x1f) | local_ac.fds_bits[iVar3];
        iVar3 = select(uVar4 + 1,(fd_set *)0x0,&local_ac,(fd_set *)0x0,&local_164);
        if (iVar3 < 1) {
          pcVar7 = "perfmon Client:connect timeout";
          uVar8 = 0x1e;
        }
        else {
          local_16c = 4;
          getsockopt(uVar4,1,4,&local_168,&local_16c);
          pcVar7 = "perfmon Client:connect delayed error";
          uVar8 = 0x24;
          if (local_168 == 0) {
            prctl(0x29a,"perfmon Client:connect delayed",0x1e);
            DAT_0003b464 = uVar4;
            goto LAB_0001dbde;
          }
        }
        DAT_0003b464 = 0xffffffff;
        prctl(0x29a,pcVar7,uVar8);
        close(uVar4);
      }
      else {
LAB_0001dd32:
        DAT_0003b464 = uVar4;
      }
      goto LAB_0001dbde;
    }
    pcVar7 = "perfmon Client:socket fcntl fail:";
    uVar8 = 0x21;
  }
LAB_0001dd14:
  prctl(0x29a,pcVar7,uVar8);
  close(uVar4);
LAB_0001dbde:
  uVar4 = DAT_0003b464;
  if ((int)DAT_0003b464 < 1) {
    prctl(0x29a,"perfmon Client:try connect",0x1a);
    DAT_0003b468 = DAT_0003b468 + -1;
  }
  else {
    sVar1 = strlen(acStack_15c);
    sVar2 = send(uVar4,acStack_15c,sVar1 + 1,0x4000);
    if (sVar2 < 0) {
      prctl(0x29a,"perfmon Client:cannot Notify_performance_annotate",0x31);
      DAT_0003b468 = DAT_0003b468 + -1;
      close(DAT_0003b464);
      DAT_0003b464 = 0xffffffff;
    }
    else {
      sVar1 = strlen(acStack_15c);
      prctl(0x29a,acStack_15c,sVar1);
      close(DAT_0003b464);
      DAT_0003b464 = 0xffffffff;
    }
  }
  iVar3 = FUN_00019010(*(undefined4 *)(param_1 + 0x38));
  if (iVar3 == 0) {
    event_filter_handle("power.app",*(undefined4 *)(param_1 + 0x2c),param_1);
  }
  if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

