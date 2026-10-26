/* libapp-context-manager-common.so : context_init_post@45ea33a0 */

void context_init_post(manager_ctxt *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  
  init_ext_context(param_1);
  __dlog_print(0,4,DAT_45ea34ac + 0x45ea33d4,DAT_45ea34a8 + 0x45ea33d2,DAT_45ea34a4 + 0x45ea33fd,
               DAT_45ea34a0 + 0x45ea3fbe,0x5e7);
  iVar1 = DAT_45ea34b8;
  puVar5 = *(undefined4 **)(param_1 + 4);
  iVar4 = DAT_45ea34b0 + 0x45ea33de;
  if (puVar5 != (undefined4 *)0x0) {
    iVar6 = DAT_45ea34b4 + 0x45ea33ea;
    do {
      while( true ) {
        puVar7 = (undefined4 *)*puVar5;
        puVar5 = (undefined4 *)puVar5[1];
        if (puVar7[1] - 0xb < 2) break;
        if (puVar5 == (undefined4 *)0x0) goto LAB_45ea33fe;
      }
      uVar2 = selector_get_context(*puVar7);
      puVar3 = (undefined4 *)util_malloc_s(0x10);
      if (puVar3 == (undefined4 *)0x0) {
        __dlog_print(0,6,DAT_45ea34d8 + 0x45ea349a,DAT_45ea34d4 + 0x45ea3498,
                     DAT_45ea34d0 + 0x45ea34c7,(int)&DAT_45ea409c + DAT_45ea34cc,0x35a);
        break;
      }
      *puVar3 = uVar2;
      puVar3[2] = puVar7;
      puVar3[3] = param_1;
      if (puVar7[1] == 0xc) {
        puVar3[1] = 0;
      }
      else {
        puVar3[1] = 1;
      }
      context_add_change_handler(uVar2,iVar6,puVar3);
      uVar2 = g_list_append(*(undefined4 *)(iVar1 + 0x45ea3560),puVar3);
      *(undefined4 *)(iVar1 + 0x45ea3560) = uVar2;
    } while (puVar5 != (undefined4 *)0x0);
  }
LAB_45ea33fe:
  uVar2 = ecore_event_handler_add
                    (**(undefined4 **)(iVar4 + DAT_45ea34bc),DAT_45ea34c0 + 0x45ea340a,0);
  *(undefined4 *)(DAT_45ea34c4 + 0x45ea358e) = uVar2;
  VirtualKey_Initialize(DAT_45ea34c8 + 0x45ea341e);
  return;
}

