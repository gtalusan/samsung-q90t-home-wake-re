/* deviced : state_tv_init@00015dd0 */

void state_tv_init(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = DAT_00015ec4;
  __dlog_print(2,4,DAT_00015ec0 + 0x15e20,DAT_00015ebc + 0x15e1c,DAT_00015eb8 + 0x15e2e,
               DAT_00015eb4 + 0x1615c,0x4a4);
  iVar4 = 1;
  iVar8 = DAT_00015ecc + 0x15e4c;
  iVar7 = DAT_00015ed0 + 0x15e54;
  iVar2 = DAT_00015ed4 + 0x15e58;
  iVar3 = DAT_00015ed8 + 0x15e60;
  iVar6 = DAT_00015ec8 + 0x15e64;
  piVar5 = (int *)(iVar1 + 0x15e50);
  while( true ) {
    iVar4 = iVar4 * 0x1c + iVar6;
    *(int *)(iVar4 + 4) = iVar3;
    *(int *)(iVar4 + 0x10) = iVar2;
    *(int *)(iVar4 + 8) = iVar7;
    *(int *)(iVar4 + 0xc) = iVar8;
    if (piVar5 + 5 == (int *)((int)&DAT_00015ec8 + iVar1)) break;
    iVar8 = piVar5[4];
    iVar7 = piVar5[3];
    iVar2 = piVar5[2];
    iVar4 = *piVar5;
    iVar3 = piVar5[1];
    piVar5 = piVar5 + 5;
  }
  change_proc_change_state(DAT_00015edc + 0x15e9c);
  register_notifier(0xb,DAT_00015ee0 + 0x15eac);
  return;
}

