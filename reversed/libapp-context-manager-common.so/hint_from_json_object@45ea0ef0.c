/* libapp-context-manager-common.so : hint_from_json_object@45ea0ef0 */

undefined4 hint_from_json_object(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = DAT_45ea0fdc + 0x45ea0f00;
  uVar2 = json_object_get_string_member(param_2,iVar4);
  __dlog_print(0,3,DAT_45ea0fec + 0x45ea0f32,DAT_45ea0fe8 + 0x45ea0f30,DAT_45ea0fe4 + 0x45ea0f57,
               DAT_45ea0fe0 + 0x45ea1908,0x354,uVar2);
  iVar3 = json_object_has_member(param_2,iVar4);
  iVar1 = DAT_45ea0ff0;
  if (iVar3 != 0) {
    json_object_get_string_member(param_2,iVar4);
    uVar2 = g_strdup();
    *param_1 = uVar2;
    iVar4 = json_object_has_member(param_2,iVar1 + 0x45ea0f4e);
    iVar3 = DAT_45ea0ff4;
    if (iVar4 != 0) {
      json_object_get_string_member(param_2,iVar1 + 0x45ea0f4e);
      uVar2 = task_to_type();
      param_1[1] = uVar2;
      iVar4 = json_object_has_member(param_2,iVar3 + 0x45ea0f6a);
      iVar1 = DAT_45ea0ff8;
      if (iVar4 != 0) {
        json_object_get_string_member(param_2,iVar3 + 0x45ea0f6a);
        uVar2 = task_to_prio();
        param_1[2] = uVar2;
        iVar3 = json_object_has_member(param_2,iVar1 + 0x45ea0f86);
        if (iVar3 == 0) {
          param_1[3] = 0;
        }
        else {
          uVar2 = json_object_get_boolean_member(param_2,iVar1 + 0x45ea0f86);
          param_1[3] = uVar2;
        }
        iVar1 = DAT_45ea0ffc;
        param_1[4] = 0;
        iVar3 = json_object_has_member(param_2,iVar1 + 0x45ea0fa4);
        if (iVar3 != 0) {
          uVar2 = json_object_get_array_member(param_2,iVar1 + 0x45ea0fa4);
          json_array_foreach_element(uVar2,DAT_45ea1000 + 0x45ea0fbc,param_1 + 4);
          return 0;
        }
      }
    }
  }
  return 0xffffffff;
}

