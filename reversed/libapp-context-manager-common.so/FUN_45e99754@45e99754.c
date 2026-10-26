/* libapp-context-manager-common.so : FUN_45e99754@45e99754 */

void FUN_45e99754(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_34;
  undefined8 local_30;
  int local_24;
  
  piVar4 = *(int **)(DAT_45e997f8 + 0x45e9975c + DAT_45e997fc);
  iVar3 = *param_2;
  local_30._0_4_ = 0;
  local_30._4_4_ = 0;
  local_30 = 0;
  local_24 = *piVar4;
  local_34 = 0;
  if (iVar3 != 0) {
    uVar1 = vconf_keynode_get_type();
    switch(uVar1) {
    case 0x28:
      puVar2 = (undefined8 *)vconf_keynode_get_str(param_1);
      break;
    case 0x29:
      local_34 = vconf_keynode_get_int(param_1);
      puVar2 = (undefined8 *)&local_34;
      break;
    case 0x2a:
      local_30 = vconf_keynode_get_dbl(param_1);
      puVar2 = &local_30;
      break;
    case 0x2b:
      local_34 = vconf_keynode_get_bool(param_1);
      puVar2 = (undefined8 *)&local_34;
      break;
    default:
      goto switchD_45e9978a_default;
    }
    iVar3 = (**(code **)(iVar3 + 4))(puVar2,*(undefined4 *)(iVar3 + 8));
    if (iVar3 == 0) {
      (*(code *)param_2[1])(0,param_2[2]);
    }
    else {
      (*(code *)param_2[1])(1,param_2[2]);
    }
  }
switchD_45e9978a_default:
  if (local_24 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

