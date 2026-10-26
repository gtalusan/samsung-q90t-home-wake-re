/* libapp-context-manager-common.so : test_task@45eab83c */

/* WARNING: Type propagation algorithm not settling */

void test_task(int *param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 *puVar8;
  int local_80;
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [24];
  char local_60 [52];
  int local_2c;
  
  piVar5 = *(int **)(DAT_45eabe6c + 0x45eab850 + DAT_45eabe70);
  local_2c = *piVar5;
  if (param_1 == (int *)0x0 || param_2 == (undefined4 *)0x0) {
    uVar2 = 0xffffffff;
    goto LAB_45eab90e;
  }
  switch(param_1[3]) {
  case 1:
    iVar1 = g_strcmp0(param_1[2],*param_2);
    if (iVar1 != 0) break;
    if (-1 < *param_1) {
      uVar2 = g_list_first(param_2[10]);
      iVar1 = g_list_position(uVar2,param_2[10]);
      if (iVar1 != *param_1) break;
    }
    goto LAB_45eab988;
  case 2:
    pcVar6 = (char *)param_1[2];
    if ((pcVar6 == (char *)0x0) || (*pcVar6 != '$')) {
      iVar1 = g_strcmp0(pcVar6,param_2[1]);
joined_r0x45eab9d4:
      if (iVar1 == 0) goto LAB_45eab988;
    }
    else {
      uVar2 = param_2[1];
      puVar8 = (undefined4 *)config_kv_get(pcVar6);
      if ((puVar8 != (undefined4 *)0x0) && (puVar8[1] != 0)) {
        __dlog_print(0,3,DAT_45eabee0 + 0x45eabcce,DAT_45eabedc + 0x45eabcc6,
                     DAT_45eabed4 + 0x45eabced,DAT_45eabed8 + 0x45eabc3c,0x168,pcVar6,uVar2);
        switch(*puVar8) {
        case 1:
          iVar1 = g_strcmp0(puVar8[1],uVar2);
          uVar7 = (uint)(iVar1 == 0);
          goto LAB_45eab938;
        case 2:
          iVar1 = g_hash_table_lookup(puVar8[1],uVar2);
          if (iVar1 != 0) goto LAB_45eab988;
          break;
        case 3:
          puVar8 = (undefined4 *)puVar8[1];
          if (puVar8 != (undefined4 *)0x0) {
            do {
              iVar1 = g_strcmp0(*puVar8,uVar2);
              if (iVar1 == 0) goto LAB_45eab988;
              puVar8 = (undefined4 *)puVar8[1];
            } while (puVar8 != (undefined4 *)0x0);
          }
          break;
        case 4:
          iVar1 = (*(code *)puVar8[1])(uVar2);
          if (iVar1 == 1) goto LAB_45eab988;
        }
      }
    }
    break;
  case 3:
    if (param_1[2] != 0) {
      iVar1 = param_2[2];
joined_r0x45eab9cc:
      if (iVar1 != 0) {
        iVar1 = g_strcmp0();
        goto joined_r0x45eab9d4;
      }
    }
    break;
  case 4:
    if (*param_1 != param_2[5]) break;
    goto LAB_45eab988;
  case 5:
    if (*param_1 != param_2[4]) break;
    goto LAB_45eab988;
  case 6:
    iVar1 = context_check_mask(*param_1,param_4);
joined_r0x45eabb42:
    if (iVar1 == 0) break;
    goto LAB_45eab988;
  case 7:
    iVar1 = param_2[0x10];
    if (iVar1 == 0) break;
LAB_45eab92e:
    uVar7 = selector_test_task(param_1[4],iVar1,param_4);
LAB_45eab938:
    if (param_1[1] != 1) goto joined_r0x45eabc24;
    goto joined_r0x45eabc2e;
  case 8:
    uVar7 = 0;
    g_hash_table_iter_init(auStack_78,*(undefined4 *)(param_4 + 0x20));
    do {
      iVar1 = g_hash_table_iter_next(auStack_78,auStack_7c,&local_80);
      if (iVar1 == 0) goto LAB_45eabc18;
    } while ((*(int *)(local_80 + 0x30) != 3) ||
            (uVar7 = selector_test_task(param_1[4],local_80,param_4), uVar7 != 1));
    goto LAB_45eab988;
  case 9:
    iVar1 = context_active_task(param_4);
    if (iVar1 != 0) goto LAB_45eab92e;
    break;
  case 10:
    iVar1 = selector_test_task(param_1[4],param_2,param_4);
    if ((iVar1 == 0) || (param_2[0xc] != 3)) break;
    goto LAB_45eab988;
  case 0xb:
    g_hash_table_iter_init(auStack_78,*(undefined4 *)(param_4 + 0x20));
    uVar7 = 0;
    do {
      iVar1 = g_hash_table_iter_next(auStack_78,auStack_7c,&local_80);
      if (iVar1 == 0) goto LAB_45eabc18;
      uVar7 = selector_test_task(param_1[4],local_80,param_4);
    } while (uVar7 != 1);
LAB_45eab988:
    uVar7 = param_1[1];
joined_r0x45eabc2e:
    if (uVar7 != 1) goto LAB_45eab946;
    goto LAB_45eab8fa;
  case 0xc:
    if (*(undefined4 **)(param_4 + 0x30) != (undefined4 *)0x0) {
      __dlog_print(0,4,DAT_45eabe90 + 0x45eaba08,DAT_45eabe94 + 0x45eaba0a,DAT_45eabe8c + 0x45eaba33
                   ,DAT_45eabe88 + 0x45eab998,0x238,**(undefined4 **)(param_4 + 0x30));
      iVar1 = *(int *)(param_4 + 0x30);
      if ((*(uint *)(iVar1 + 0x30) & 0xfffffffd) == 1) goto LAB_45eab92e;
    }
    break;
  case 0xd:
    iVar1 = 0;
    if (param_1[2] != 0) {
      iVar1 = g_strcmp0(param_1[2],DAT_45eabe98 + 0x45eaba32);
      if (iVar1 == 0) {
        puVar8 = *(undefined4 **)(param_4 + 0x34);
        if (puVar8 == (undefined4 *)0x0) {
          iVar1 = context_ready(param_4);
          if (iVar1 < 0) {
            __dlog_print(0,6,DAT_45eabf24 + 0x45eabe68,DAT_45eabf20 + 0x45eabe66,
                         DAT_45eabf1c + 0x45eabe93,DAT_45eabf18 + 0x45eabdde,0x194);
          }
          puVar8 = *(undefined4 **)(param_4 + 0x34);
          if (puVar8 == (undefined4 *)0x0) {
            __dlog_print(0,4,DAT_45eabe80 + 0x45eab8de,DAT_45eabe7c + 0x45eab8dc,
                         DAT_45eabe78 + 0x45eab905,DAT_45eabe74 + 0x45eab850,0x19a);
            puVar8 = (undefined4 *)
                     g_hash_table_lookup(*(undefined4 *)(param_4 + 0x1c),DAT_45eabe84 + 0x45eab8ea);
            if (puVar8 == (undefined4 *)0x0) break;
          }
        }
LAB_45eaba42:
        if (param_2 != puVar8) {
          if (param_2[1] != 0) {
            iVar1 = puVar8[1];
            goto joined_r0x45eab9cc;
          }
          break;
        }
        goto LAB_45eab988;
      }
      iVar1 = 0;
      if (param_1[2] != 0) {
        iVar1 = g_strcmp0(param_1[2],DAT_45eabebc + 0x45eabc3e);
        if (iVar1 == 0) {
          iVar1 = context_get_last_app_source();
          if (((iVar1 != 0) && (param_2[1] != 0)) &&
             (iVar4 = g_strcmp0(param_2[1],iVar1), iVar4 == 0)) {
            __dlog_print(0,4,DAT_45eabf0c + 0x45eabe2c,DAT_45eabf10 + 0x45eabe2e,
                         DAT_45eabf08 + 0x45eabe59,DAT_45eabf04 + 0x45eabda4,0x1af,iVar1);
            goto LAB_45eab988;
          }
          break;
        }
        iVar1 = 0;
        if (param_1[2] != 0) {
          iVar1 = g_strcmp0(param_1[2],DAT_45eabec0 + 0x45eabc50);
          if (iVar1 == 0) {
            puVar8 = *(undefined4 **)(param_4 + 0x2c);
            if (puVar8 != (undefined4 *)0x0) goto LAB_45eaba42;
            break;
          }
          iVar1 = param_1[2];
        }
      }
    }
    __dlog_print(0,6,DAT_45eabed0 + 0x45eabc80,DAT_45eabecc + 0x45eabc7e,DAT_45eabec8 + 0x45eabca9,
                 DAT_45eabec4 + 0x45eabbf6,0x1bd,iVar1);
    break;
  case 0xe:
    if (param_1[2] != 0) {
      local_60[0] = '\0';
      uVar2 = vconf_keylist_new();
      iVar1 = vconf_get(uVar2,param_1[2] + *param_1,0);
      if (-1 < iVar1) {
        uVar3 = vconf_keylist_nextnode(uVar2);
        iVar1 = vconf_keynode_get_type();
        if (iVar1 == 0x29) {
          uVar3 = vconf_keynode_get_int(uVar3);
          g_snprintf(local_60,0x32,DAT_45eabef0 + 0x45eabda8,uVar3);
        }
        else if (iVar1 == 0x2b) {
          iVar1 = vconf_keynode_get_bool(uVar3);
          if (iVar1 == 0) {
            iVar1 = DAT_45eabf14 + 0x45eabe38;
          }
          else {
            iVar1 = DAT_45eabee8 + 0x45eabd84;
          }
          g_snprintf(local_60,0x32,DAT_45eabeec + 0x45eabd90,iVar1);
        }
        else if (iVar1 == 0x28) {
          uVar3 = vconf_keynode_get_str(uVar3);
          g_snprintf(local_60,0x32,DAT_45eabee4 + 0x45eabd6e,uVar3);
        }
        else {
          __dlog_print(0,6,DAT_45eabea8 + 0x45eabac4,DAT_45eabea4 + 0x45eabac2,
                       DAT_45eabea0 + 0x45eabaed,DAT_45eabe9c + 0x45eaba5e,0x1df);
        }
        vconf_keylist_free(uVar2);
        __dlog_print(0,3,DAT_45eabeb4 + 0x45eabaf8,DAT_45eabeb8 + 0x45eabafe,
                     DAT_45eabeb0 + 0x45eabb2d,DAT_45eabeac + 0x45eaba9a,0x1e5,*param_1,local_60,
                     param_1[2]);
        uVar7 = 0;
        if (local_60[0] != '\0') {
          iVar1 = g_strstr_len(param_1[2],*param_1 + -1,local_60);
          uVar7 = (uint)(param_1[2] == iVar1);
        }
        goto LAB_45eab938;
      }
      __dlog_print(0,6,DAT_45eabf00 + 0x45eabddc,DAT_45eabefc + 0x45eabdda,DAT_45eabef8 + 0x45eabe05
                   ,DAT_45eabef4 + 0x45eabd76,0x1ce,*param_1 + param_1[2]);
      vconf_keylist_free(uVar2);
    }
    break;
  case 0xf:
    if (((param_4 != 0) && (*(int *)(param_4 + 0x24) != 0)) && (param_1[2] != 0)) {
      iVar1 = g_hash_table_lookup();
      goto joined_r0x45eabb42;
    }
    break;
  case 0x10:
    if (param_1[2] != 0) {
      iVar1 = param_2[3];
      goto joined_r0x45eab9cc;
    }
  }
  if (param_1[1] == 1) {
LAB_45eab946:
    if (param_3 == 0) {
      if ((param_1[5] != 0) && (iVar1 = test_task(param_1[5],param_2,1,param_4), iVar1 == 0))
      goto LAB_45eab900;
    }
    else {
      iVar1 = param_1[7];
      if (iVar1 != 0) goto LAB_45eab904;
    }
    uVar2 = 1;
  }
  else {
LAB_45eab8fa:
    if (param_3 == 0) {
LAB_45eab900:
      iVar1 = param_1[7];
      if (iVar1 != 0) {
LAB_45eab904:
        uVar2 = test_task(iVar1,param_2,param_3,param_4);
        goto LAB_45eab90e;
      }
    }
    uVar2 = 0;
  }
LAB_45eab90e:
  if (local_2c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
LAB_45eabc18:
  if (param_1[1] == 1) goto LAB_45eab946;
joined_r0x45eabc24:
  if (uVar7 != 0) goto LAB_45eab946;
  goto LAB_45eab8fa;
}

