/* deviced : _bl_onoff@000347e0 */

void _bl_onoff(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  size_t sVar3;
  ssize_t sVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  __useconds_t __useconds;
  uint __fd;
  int *piVar9;
  uint *puVar10;
  socklen_t local_174;
  int local_170;
  timespec local_16c;
  timeval local_164;
  sockaddr asStack_15c [6];
  undefined4 uStack_f0;
  fd_set local_ec;
  char acStack_6c [64];
  int local_2c;
  
  piVar8 = *(int **)(DAT_00034cec + 0x347f8 + DAT_00034cf0);
  local_16c.tv_sec = 0;
  local_16c.tv_nsec = 0;
  local_2c = *piVar8;
  clock_gettime(1,&local_16c);
  if (param_2 != 1) {
    remove_panel_display_time_update_timer();
    iVar6 = DAT_00034cf4;
    *(__time_t *)(DAT_00034cf4 + 0x34840) = local_16c.tv_sec;
    *(long *)(iVar6 + 0x34844) = local_16c.tv_nsec;
    goto LAB_00034840;
  }
  register_panel_display_time_update_timer();
  iVar6 = local_16c.tv_nsec - *(int *)(DAT_00034d0c + 0x348dc);
  if (iVar6 < 0) {
    iVar6 = iVar6 + 1000000000;
    iVar7 = (local_16c.tv_sec - *(int *)(DAT_00034d0c + 0x348d8)) + -1;
  }
  else {
    iVar7 = local_16c.tv_sec - *(int *)(DAT_00034d0c + 0x348d8);
  }
  if (0 < iVar6 && iVar7 == 0) {
    __useconds = 999999 - iVar6 / 1000;
    usleep(__useconds);
    __dlog_print(2,4,DAT_00034d1c + 0x34988,DAT_00034d18 + 0x34980,DAT_00034d10 + 0x3498a,
                 DAT_00034d14 + 0x34964,0x44,__useconds / 1000);
  }
  puVar10 = (uint *)(DAT_00034d20 + 0x349a0);
  __snprintf_chk(acStack_6c,0x40,1,0x40,DAT_00034d24 + 0x349a8,0xd,0);
  __fd = *puVar10;
  if (__fd == 0xffffffff) {
    asStack_15c[0].sa_family = 1;
    strncpy(asStack_15c[0].sa_data,(char *)(DAT_00034d34 + 0x34a74),0x6b);
    __fd = socket(1,1,0);
    if ((int)__fd < 0) {
      prctl(0x29a,DAT_00034d68 + 0x34cc4,0x22);
      __fd = *puVar10;
    }
    else {
      uVar5 = fcntl(__fd,3,0);
      if ((int)uVar5 < 0) {
        uVar2 = 0x25;
        iVar6 = DAT_00034d6c + 0x34cdc;
      }
      else {
        iVar6 = fcntl(__fd,4,uVar5 | 0x800);
        if (-1 < iVar6) {
          iVar6 = connect(__fd,asStack_15c,0x6e);
          if (iVar6 < 0) {
            piVar9 = __errno_location();
            if (*piVar9 != 0x73) {
              iVar6 = DAT_00034d38 + 0x34b00;
              *puVar10 = 0xffffffff;
              prctl(0x29a,iVar6,0x1c);
              usleep(10000);
              iVar6 = connect(__fd,asStack_15c,0x6e);
              if (-1 < iVar6) goto LAB_00034b54;
              if (*piVar9 != 0x73) {
                uVar2 = 0x26;
                iVar6 = DAT_00034d3c + 0x34b40;
                goto LAB_00034b3c;
              }
            }
            local_164.tv_sec = 1;
            puVar1 = &uStack_f0;
            local_164.tv_usec = 0;
            do {
              puVar1 = puVar1 + 1;
              *puVar1 = 0;
            } while (puVar1 != local_ec.fds_bits + 0x1f);
            iVar6 = __fdelt_chk(__fd);
            local_ec.fds_bits[iVar6] = local_ec.fds_bits[iVar6] | 1 << (__fd & 0x1f);
            iVar6 = select(__fd + 1,(fd_set *)0x0,&local_ec,(fd_set *)0x0,&local_164);
            if (iVar6 < 1) {
              uVar2 = 0x1e;
              puVar1 = (undefined4 *)(DAT_00034d60 + 0x34cac);
              iVar6 = DAT_00034d64 + 0x34cb0;
            }
            else {
              local_174 = 4;
              getsockopt(__fd,1,4,&local_170,&local_174);
              if (local_170 == 0) {
                prctl(0x29a,DAT_00034d44 + 0x34c14,0x1e);
                *(uint *)(DAT_00034d48 + 0x34c20) = __fd;
                goto LAB_000349cc;
              }
              uVar2 = 0x24;
              puVar1 = (undefined4 *)(DAT_00034d54 + 0x34c70);
              iVar6 = DAT_00034d58 + 0x34c74;
            }
            *puVar1 = 0xffffffff;
            prctl(0x29a,iVar6,uVar2);
            close(__fd);
            __fd = *(uint *)(DAT_00034d5c + 0x34c94);
          }
          else {
LAB_00034b54:
            *(uint *)(DAT_00034d40 + 0x34b60) = __fd;
          }
          goto LAB_000349cc;
        }
        uVar2 = 0x21;
        iVar6 = (int)&DAT_00034cec + DAT_00034d70;
      }
LAB_00034b3c:
      prctl(0x29a,iVar6,uVar2);
      close(__fd);
      __fd = *puVar10;
    }
  }
LAB_000349cc:
  if ((int)__fd < 1) {
    prctl(0x29a,DAT_00034d2c + 0x34a40,0x1a);
    *(int *)(DAT_00034d30 + 0x34a50) = *(int *)(DAT_00034d30 + 0x34a50) + -1;
  }
  else {
    sVar3 = strlen(acStack_6c);
    sVar4 = send(__fd,acStack_6c,sVar3 + 1,0x4000);
    iVar7 = DAT_00034d4c;
    iVar6 = DAT_00034d28;
    if (sVar4 < 0) {
      piVar9 = (int *)(DAT_00034d4c + 0x34c3c);
      prctl(0x29a,DAT_00034d50 + 0x34c40,0x31);
      iVar6 = *piVar9;
      *(int *)(iVar7 + 0x34c40) = *(int *)(iVar7 + 0x34c40) + -1;
      close(iVar6);
      *piVar9 = -1;
    }
    else {
      sVar3 = strlen(acStack_6c);
      prctl(0x29a,acStack_6c,sVar3);
      close(*(int *)(iVar6 + 0x34a10));
      *(int *)(iVar6 + 0x34a10) = -1;
    }
  }
LAB_00034840:
  __dlog_print(2,4,DAT_00034d00 + 0x3487c,DAT_00034d04 + 0x34880,DAT_00034cf8 + 0x3488e,
               DAT_00034cfc + 0x34860,0x4f);
  trace_begin(DAT_00034d08 + 0x3488c);
  puVar1 = (undefined4 *)DisplayPanel_getInstance();
  uVar2 = (*(code *)*puVar1)(param_2 != 0);
  trace_end();
  if (local_2c != *piVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

