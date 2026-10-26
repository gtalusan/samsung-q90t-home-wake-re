/* libapp-context-manager-common.so : find_task@45ea2bf4 */

void find_task(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 local_3c [2];
  undefined4 local_34;
  undefined4 *local_30;
  int local_2c;
  
  iVar5 = DAT_45ea3008;
  piVar7 = *(int **)(DAT_45ea3000 + 0x45ea2c0a + DAT_45ea3004);
  local_34 = 0;
  local_2c = *piVar7;
  local_3c[0] = param_1;
  puVar2 = (undefined4 *)g_hash_table_lookup(*(undefined4 *)(DAT_45ea3008 + 0x45ea2c42),local_3c);
  if (puVar2 == (undefined4 *)0x0) {
LAB_45ea2ce8:
    iVar5 = DAT_45ea302c;
    if (param_2 == 0) {
      __dlog_print(0,6,DAT_45ea3084 + 0x45ea2f48,DAT_45ea3080 + 0x45ea2f46,DAT_45ea307c + 0x45ea2f71
                   ,DAT_45ea3078 + 0x45ea3ada,0x54a);
      puVar4 = (undefined4 *)0x0;
      goto LAB_45ea2c9e;
    }
    iVar3 = DAT_45ea302c + 0x45ea38aa;
    iVar9 = DAT_45ea3034 + 0x45ea2d16;
    iVar8 = DAT_45ea3030 + 0x45ea2d53;
    __dlog_print(0,3,iVar9,DAT_45ea3038 + 0x45ea2d1a,iVar8,iVar3,0x54e,param_2);
    puVar4 = (undefined4 *)FUN_45e99c30(param_2,param_3);
    if (puVar4 == (undefined4 *)0x0) {
      __dlog_print(0,3,iVar9,DAT_45ea305c + 0x45ea2e2a,iVar8,iVar3,0x553,param_2);
      uVar1 = local_3c[0];
      local_30 = puVar4;
      puVar4 = (undefined4 *)util_malloc_s(0x58);
      if (puVar4 != (undefined4 *)0x0) {
        iVar3 = util_get_apptype_byappid(param_2,puVar4 + 2);
        if (iVar3 != 0) {
          __dlog_print(0,6,iVar9,DAT_45ea3088 + 0x45ea2f6e,iVar8,iVar5 + 0x45ea38b6,0x304,param_2);
        }
        iVar5 = g_strcmp0(puVar4[2],DAT_45ea3060 + 0x45ea2e5e);
        if (iVar5 == 0) {
          __dlog_print(0,4,DAT_45ea30a4 + 0x45ea2fca,DAT_45ea30a8 + 0x45ea2fce,
                       DAT_45ea30a0 + 0x45ea2ff9,DAT_45ea309c + 0x45ea3b6c,0x307,param_2,uVar1);
          g_free(puVar4[2]);
          g_free(puVar4);
          puVar4 = (undefined4 *)0x0;
        }
        else {
          puVar4[0xb] = uVar1;
          uVar6 = g_strdup(param_2);
          puVar4[1] = uVar6;
          FUN_45ea29e0(uVar1,puVar4,param_3);
          FUN_45ea2880(puVar4,param_3);
          iVar5 = util_get_uiapp_has_metadata_byappid(puVar4[1],DAT_45ea3064 + 0x45ea2e96,&local_30)
          ;
          if (iVar5 != 0) {
            __dlog_print(0,3,DAT_45ea3098 + 0x45ea2f9e,DAT_45ea3094 + 0x45ea2f9c,
                         DAT_45ea3090 + 0x45ea2fc5,DAT_45ea308c + 0x45ea3b38,0x314,param_2);
          }
          if ((local_30 != (undefined4 *)0x0) || (puVar4[7] != 0)) {
            iVar5 = DAT_45ea3068 + 0x45ea2ef7;
            iVar8 = DAT_45ea3070 + 0x45ea2eca;
            iVar3 = (int)&DAT_45ea3a80 + DAT_45ea306c;
            __dlog_print(0,4,iVar8,DAT_45ea3074 + 0x45ea2ed2,iVar5,iVar3,0x317,param_2);
            puVar4[7] = 1;
            puVar2 = (undefined4 *)
                     task_create(*puVar4,puVar4[1],puVar4[2],puVar4[3],puVar4[4],puVar4[5],1,0,1,0);
            if (puVar2 == (undefined4 *)0x0) {
              __dlog_print(0,6,iVar8,DAT_45ea30ac + 0x45ea2ff8,iVar5,iVar3,0x31d);
            }
            else {
              g_hash_table_insert(*(undefined4 *)(param_3 + 0x1c),*puVar2);
            }
          }
        }
      }
      goto LAB_45ea2c9e;
    }
    if (puVar4[1] == 0) {
      __dlog_print(0,3,iVar9,DAT_45ea3054 + 0x45ea2dda,iVar8,iVar3,0x558,param_2);
      puVar2 = (undefined4 *)*puVar4;
    }
    else {
      util_bundle_import_by_pid(local_3c[0],&local_34);
      __dlog_print(0,3,iVar9,DAT_45ea303c + 0x45ea2d60,iVar8,iVar3,0x55c,param_2);
      puVar2 = (undefined4 *)FUN_45e99e00(puVar4,local_34);
      if (puVar2 == (undefined4 *)0x0) {
        __dlog_print(0,3,iVar9,DAT_45ea3058 + 0x45ea2dfe,iVar8,iVar3,0x55f,param_2);
        puVar4 = (undefined4 *)g_list_first(puVar4);
        puVar2 = (undefined4 *)find_master_task();
      }
      bundle_free(local_34);
    }
    g_list_free(puVar4);
    puVar4 = (undefined4 *)0x0;
    if (puVar2 == (undefined4 *)0x0) goto LAB_45ea2c9e;
  }
  else {
    iVar3 = util_get_time_in_millis();
    if ((int)puVar2[1] < iVar3 + -9999) {
      __dlog_print(0,4,DAT_45ea3028 + 0x45ea2cdc,DAT_45ea3024 + 0x45ea2cd6,DAT_45ea301c + 0x45ea2d01
                   ,DAT_45ea3020 + 0x45ea3876,0x543,local_3c[0]);
      g_hash_table_remove(*(undefined4 *)(iVar5 + 0x45ea2c42),local_3c);
      goto LAB_45ea2ce8;
    }
    puVar2 = (undefined4 *)*puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      __dlog_print(0,4,DAT_45ea3050 + 0x45ea2dba,DAT_45ea304c + 0x45ea2db4,DAT_45ea3044 + 0x45ea2dd9
                   ,DAT_45ea3040 + 0x45ea3942,0x541,local_3c[0],DAT_45ea3048 + 0x45ea2db0);
      g_hash_table_remove(*(undefined4 *)(iVar5 + 0x45ea2c42),local_3c);
      goto LAB_45ea2ce8;
    }
    __dlog_print(0,4,DAT_45ea3018 + 0x45ea2c80,DAT_45ea3014 + 0x45ea2c78,DAT_45ea300c + 0x45ea2c97,
                 DAT_45ea3010 + 0x45ea3814,0x541,local_3c[0],*puVar2);
    g_hash_table_remove(*(undefined4 *)(iVar5 + 0x45ea2c42),local_3c);
  }
  puVar4 = (undefined4 *)task_clone(puVar2);
  FUN_45ea29e0(local_3c[0],puVar4,param_3);
LAB_45ea2c9e:
  if (local_2c != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar4);
  }
  return;
}

