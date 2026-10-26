/* deviced : dbus_subscribe_callback@00023814 */

void dbus_subscribe_callback(undefined4 param_1,undefined4 param_2)

{
  char *__s1;
  int iVar1;
  __pid_t __pid;
  size_t __n;
  undefined4 uVar2;
  int iVar3;
  __pid_t *p_Var4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  char *local_170;
  int local_16c;
  int local_168;
  undefined1 auStack_164 [56];
  undefined1 auStack_12c [256];
  int local_2c;
  
  piVar7 = *(int **)(DAT_00023c78 + 0x23828 + DAT_00023c7c);
  local_2c = *piVar7;
  iVar1 = dbus_message_get_args(param_2,0,0x73,&local_170,0x75,&local_168,0);
  if (iVar1 == 0) {
    __dlog_print(2,6,DAT_00023ccc + 0x23b40,DAT_00023cc8 + 0x23b3c,DAT_00023cc4 + 0x23b50,
                 DAT_00023cc0 + 0x23b8c,0x5ae);
    local_16c = -0x16;
  }
  else {
    __pid = get_edbus_sender_pid(param_2);
    iVar1 = kill(__pid,0);
    __s1 = local_170;
    if (iVar1 == -1) {
      __dlog_print(2,6,DAT_00023cf4 + 0x23c10,DAT_00023cf0 + 0x23c08,DAT_00023cec + 0x23c1c,
                   DAT_00023ce8 + 0x23c58,0x5b6,__pid);
      local_16c = -3;
    }
    else {
      __n = strlen(local_170);
      iVar1 = strncmp(__s1,(char *)(DAT_00023c80 + 0x238a4),__n);
      if (iVar1 == 0) {
        puVar8 = (undefined4 *)(DAT_00023c84 + 0x238c4);
      }
      else {
        iVar1 = strncmp(__s1,(char *)(DAT_00023c9c + 0x239dc),__n);
        if (iVar1 == 0) {
          puVar8 = (undefined4 *)(DAT_00023cd0 + 0x23b5c);
        }
        else {
          iVar1 = strncmp(__s1,(char *)(DAT_00023ca0 + 0x239f8),__n);
          if (iVar1 == 0) {
            puVar8 = (undefined4 *)(DAT_00023ce4 + 0x23bcc);
          }
          else {
            iVar1 = strncmp(__s1,(char *)(DAT_00023ca4 + 0x23a14),__n);
            if (iVar1 != 0) {
              __dlog_print(2,6,DAT_00023d04 + 0x23c68,DAT_00023d00 + 0x23c5c,DAT_00023cfc + 0x23c70,
                           (int)&DAT_00023cac + DAT_00023cf8,0x5cd,__s1,__pid);
              local_16c = -0x16;
              goto LAB_00023984;
            }
            puVar8 = (undefined4 *)(DAT_00023ca8 + 0x23a34);
          }
        }
      }
      if (*(int *)(DAT_00023c88 + 0x238e0) != 0) {
        __dlog_print(2,5,DAT_00023ce0 + 0x23ba4,DAT_00023cdc + 0x23ba0,DAT_00023cd8 + 0x23bb0,
                     DAT_00023cd4 + 0x23bec,0x5d4,__pid);
      }
      iVar1 = local_168;
      puVar9 = (undefined4 *)*puVar8;
      if ((puVar9 != (undefined4 *)0x0) && (piVar5 = (int *)*puVar9, piVar5 != (int *)0x0)) {
        puVar6 = puVar9;
        do {
          if ((__pid == *piVar5) && (piVar5[1] == local_168)) {
            __dlog_print(2,5,DAT_00023c98 + 0x23974,DAT_00023c94 + 0x23968,DAT_00023c90 + 0x2397c,
                         DAT_00023c8c + 0x239bc,0x5e5,local_170,__pid,local_168);
            local_16c = -0x11;
            goto LAB_00023984;
          }
          puVar6 = (undefined4 *)puVar6[1];
        } while ((puVar6 != (undefined4 *)0x0) && (piVar5 = (int *)*puVar6, piVar5 != (int *)0x0));
      }
      iVar3 = get_matched_callback(__pid);
      p_Var4 = calloc(0xc,1);
      if (p_Var4 == (__pid_t *)0x0) {
        piVar5 = __errno_location();
        local_16c = -*piVar5;
      }
      else {
        *p_Var4 = __pid;
        p_Var4[1] = iVar1;
        uVar2 = g_list_append(puVar9);
        local_16c = 0;
        *puVar8 = uVar2;
      }
      get_name_from_pid(__pid,auStack_12c,0xff);
      __dlog_print(2,4,DAT_00023cb8 + 0x23acc,DAT_00023cb4 + 0x23ac0,DAT_00023cb0 + 0x23ad0,
                   DAT_00023cac + 0x23b0c,0x5f0,local_170,__pid,auStack_12c,local_168);
      if (iVar3 == 0 && local_16c == 0) {
        register_edbus_watch(param_2,9,DAT_00023cbc + 0x23af8);
      }
    }
  }
LAB_00023984:
  uVar2 = dbus_message_new_method_return(param_2);
  dbus_message_iter_init_append(uVar2,auStack_164);
  dbus_message_iter_append_basic(auStack_164,0x69,&local_16c);
  if (local_2c != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

