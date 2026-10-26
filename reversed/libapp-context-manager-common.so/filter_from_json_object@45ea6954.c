/* libapp-context-manager-common.so : filter_from_json_object@45ea6954 */

undefined4
filter_from_json_object
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = DAT_45ea6a78 + 0x45ea6964;
  iVar1 = json_object_has_member(param_2,iVar4,param_3,param_4,param_4);
  iVar3 = DAT_45ea6a80;
  if (iVar1 != 0) {
    iVar5 = DAT_45ea6a7c + 0x45ea697c;
    uVar2 = json_object_get_array_member(param_2,iVar4);
    *param_1 = 0;
    json_array_foreach_element(uVar2,iVar5,param_1);
    iVar4 = json_object_has_member(param_2,iVar3 + 0x45ea6982);
    iVar1 = DAT_45ea6a84;
    if (iVar4 != 0) {
      json_object_get_string_member(param_2,iVar3 + 0x45ea6982);
      uVar2 = event_filter_to_signal();
      param_1[1] = uVar2;
      iVar4 = json_object_has_member(param_2,iVar1 + 0x45ea69aa);
      iVar3 = DAT_45ea6a88;
      if (iVar4 != 0) {
        json_object_get_string_member(param_2,iVar1 + 0x45ea69aa);
        uVar2 = event_filter_to_signal();
        param_1[2] = uVar2;
        iVar1 = json_object_has_member(param_2,iVar3 + 0x45ea69c8);
        if (iVar1 != 0) {
          uVar2 = json_object_get_array_member(param_2,iVar3 + 0x45ea69c8);
          param_1[9] = 0;
          json_array_foreach_element(uVar2,iVar5,param_1 + 9);
        }
        iVar1 = DAT_45ea6a8c + 0x45ea69de;
        iVar3 = json_object_has_member(param_2,iVar1);
        if (iVar3 != 0) {
          json_object_get_string_member(param_2,iVar1);
          uVar2 = event_filter_to_target();
          param_1[3] = uVar2;
        }
        iVar1 = DAT_45ea6a90 + 0x45ea69ee;
        iVar3 = json_object_has_member(param_2,iVar1);
        if (iVar3 != 0) {
          uVar2 = json_object_get_int_member(param_2,iVar1);
          param_1[4] = uVar2;
        }
        iVar1 = DAT_45ea6a94 + 0x45ea69fc;
        iVar3 = json_object_has_member(param_2,iVar1);
        if (iVar3 != 0) {
          json_object_get_string_member(param_2,iVar1);
          uVar2 = g_strdup();
          param_1[6] = uVar2;
        }
        iVar1 = DAT_45ea6a98 + 0x45ea6a0a;
        iVar3 = json_object_has_member(param_2,iVar1);
        if (iVar3 == 0) {
          return 0;
        }
        uVar2 = json_object_get_boolean_member(param_2,iVar1);
        param_1[5] = uVar2;
        return 0;
      }
    }
  }
  return 0xffffffff;
}

