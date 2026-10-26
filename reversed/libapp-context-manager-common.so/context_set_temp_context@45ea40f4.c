/* libapp-context-manager-common.so : context_set_temp_context@45ea40f4 */

undefined4 context_set_temp_context(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  bool bVar9;
  
  iVar8 = DAT_45ea4244 + 0x45ea4108;
  if (param_1 != 0 && param_2 != 0) {
    bVar9 = param_3 != 0;
    iVar6 = 0;
    if (bVar9) {
      iVar6 = param_4 + -99;
    }
    if ((bVar9 && param_4 != 99) && iVar6 < 0 == (bVar9 && SBORROW4(param_4,99))) {
      iVar6 = 5000;
      if (param_4 < 0x1389) {
        iVar6 = 0;
      }
      if (5000 < param_4) {
        iVar6 = 1;
      }
      if (iVar6 == 0 && param_5 != 0) {
        iVar6 = context_to_mask();
        iVar3 = event_filter_to_signal(param_3);
        if (iVar6 < 0) {
          __dlog_print(0,6,DAT_45ea4288 + 0x45ea423a,DAT_45ea4284 + 0x45ea4238,
                       DAT_45ea4280 + 0x45ea4265,DAT_45ea427c + 0x45ea4f12,0x135);
          uVar5 = 0xffffffff;
        }
        else if (iVar3 < 0) {
          __dlog_print(0,6,DAT_45ea4278 + 0x45ea420c,DAT_45ea4274 + 0x45ea420a,
                       DAT_45ea4270 + 0x45ea4237,DAT_45ea426c + 0x45ea4ee4,0x13a);
          uVar5 = 0xffffffff;
        }
        else {
          puVar4 = (undefined4 *)util_malloc_s(0xc);
          uVar5 = g_strdup(param_2);
          iVar2 = DAT_45ea424c;
          iVar1 = DAT_45ea4248;
          *puVar4 = uVar5;
          puVar4[2] = iVar6;
          puVar4[1] = iVar3;
          __dlog_print(0,4,DAT_45ea4254 + 0x45ea4188,DAT_45ea4250 + 0x45ea4186,iVar1 + 0x45ea41a5,
                       iVar2 + 0x45ea4e64,0x143);
          puVar7 = *(undefined4 **)(iVar8 + DAT_45ea4258);
          uVar5 = g_list_append(*puVar7,puVar4);
          *puVar7 = uVar5;
          context_set_timeout(iVar6,param_4,param_5);
          uVar5 = 0;
        }
        return uVar5;
      }
    }
  }
  __dlog_print(0,6,DAT_45ea4268 + 0x45ea41d8,DAT_45ea4264 + 0x45ea41d6,DAT_45ea4260 + 0x45ea4203,
               DAT_45ea425c + 0x45ea4eb0,300);
  return 0xffffffff;
}

