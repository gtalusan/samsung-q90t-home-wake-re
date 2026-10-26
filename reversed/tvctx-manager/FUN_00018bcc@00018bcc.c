/* tvctx-manager : FUN_00018bcc@00018bcc */

void FUN_00018bcc(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  uVar2 = DAT_00018e44;
  if (param_2 == 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > null param",DAT_00018e7c,DAT_00018e78,0x4be);
    return;
  }
  uVar4 = param_1;
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > key combination %d",DAT_00018e44,DAT_00018e3c,0x4c2
               ,param_1);
  switch(param_1) {
  case 7:
    pcVar3 = "keysequence.Info_Factory";
    break;
  default:
    __dlog_print(0,5,"tvctx-manager","%s: %s(%d) > unknown key combination",uVar2,DAT_00018e40,0x4a5
                 ,uVar4);
    return;
  case 0xe:
  case 0x5e:
    pcVar3 = "keysequence.Mute_1_1_9_Enter";
    break;
  case 0x43:
    pcVar3 = "keysequence.FF_Play_Pause_RW";
    break;
  case 0x44:
    pcVar3 = "keysequence.Factory_Enter_Info";
    break;
  case 0x4a:
    pcVar3 = "keysequence.Mute_1_1_4_Mute";
    break;
  case 0x51:
    pcVar3 = "keysequence.Mute_1_2_2_6_Exit";
    break;
  case 0x6a:
    pcVar3 = "keysequence.Mute_7_9_9_Exit";
    break;
  case 0x6b:
    pcVar3 = "keysequence.Menu_Red";
    break;
  case 0x6d:
    pcVar3 = "keysequence.Info_1_5_9_Exit";
    break;
  case 0x6f:
    pcVar3 = "keysequence.Mute_1_8_3_Mute";
    break;
  case 0x72:
    pcVar3 = "keysequence.VolDown_VolUp_Mute";
  }
  iVar1 = g_strcmp0(pcVar3,"keysequence.Mute_7_9_9_Exit");
  if (iVar1 == 0) {
    iVar1 = context_system_property_check("product:portland");
    if (iVar1 == 0) {
      return;
    }
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > send %s by %s",uVar2,DAT_00018e40,0x4ad,
                 "XF86KeyRotatePanel","keysequence.Mute_7_9_9_Exit");
    uVar2 = window_util_get_keycode("XF86KeyRotatePanel");
    VirtualKey_Send_KeyCode(uVar2,2);
    return;
  }
  iVar1 = g_strcmp0(pcVar3,"keysequence.VolDown_VolUp_Mute");
  if (iVar1 == 0) {
    iVar1 = system("/usr/bin/chrt -f 99 /opt/etc/ira_vlog_dump_for_external.sh &");
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > VolDown_VolUp_Mute ret : %d",uVar2,DAT_00018e40,
                 0x4b2,iVar1);
    return;
  }
  event_filter_handle(pcVar3,*(undefined4 *)(param_2 + 0x2c),param_2);
  return;
}

