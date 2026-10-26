/* libapp-context-manager-common.so : load_config_item@45ea71f0 */

void load_config_item(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int local_28;
  int local_24;
  
  piVar6 = *(int **)(DAT_45ea7310 + 0x45ea71fe + DAT_45ea7314);
  local_28 = 0;
  local_24 = *piVar6;
  uVar1 = json_parser_new();
  iVar2 = json_parser_load_from_file(uVar1,param_1,&local_28);
  if (iVar2 == 0) {
    uVar5 = 0;
    if (local_28 != 0) {
      __dlog_print(0,6,DAT_45ea7330 + 0x45ea72bc,DAT_45ea7334 + 0x45ea72c0,DAT_45ea7328 + 0x45ea72e3
                   ,DAT_45ea732c + 0x45ea81e6,0x6d0,*(undefined4 *)(local_28 + 8));
      uVar5 = 0xffffffff;
      g_error_free(local_28);
    }
  }
  else {
    iVar2 = json_parser_get_root(uVar1);
    if (iVar2 == 0) {
      __dlog_print(0,6,DAT_45ea7348 + 0x45ea7306,DAT_45ea7344 + 0x45ea7304,DAT_45ea7340 + 0x45ea7333
                   ,DAT_45ea733c + 0x45ea8224,0x6d9);
      uVar5 = 0;
    }
    else {
      iVar3 = json_node_get_node_type();
      if (iVar3 == 0) {
        FUN_45ea6fbc(0,0,iVar2,0);
        uVar5 = 0;
      }
      else {
        iVar3 = json_node_get_node_type(iVar2);
        if (iVar3 == 1) {
          uVar5 = 0;
          uVar4 = json_node_get_array(iVar2);
          json_array_foreach_element(uVar4,DAT_45ea7338 + 0x45ea72de,0);
        }
        else {
          uVar5 = 0;
          __dlog_print(0,6,DAT_45ea7324 + 0x45ea7286,DAT_45ea7320 + 0x45ea7284,
                       DAT_45ea731c + 0x45ea72af,DAT_45ea7318 + 0x45ea81a0,0x6e5);
        }
      }
    }
  }
  g_object_unref(uVar1);
  if (local_24 != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

