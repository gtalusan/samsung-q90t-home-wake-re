/* deviced : register_poweroff_interval_timer@0002f130 */

void register_poweroff_interval_timer(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*(char *)(DAT_0002f210 + 0x2f140) != '\0') {
    *(char *)(DAT_0002f210 + 0x2f140) = '\0';
  }
  iVar2 = DAT_0002f21c;
  iVar1 = DAT_0002f218;
  uVar3 = ecore_timer_add(0,0x403e0000,DAT_0002f214 + 0x2f17c,0);
  iVar4 = DAT_0002f228 + 0x2f1b4;
  iVar6 = DAT_0002f220 + 0x2f284;
  iVar5 = DAT_0002f224 + 0x2f1de;
  *(undefined4 *)(iVar1 + 0x2f194) = uVar3;
  __dlog_print(0,3,iVar2 + 0x2f198,iVar4,iVar5,iVar6,0x18a);
  if (*(int *)(iVar1 + 0x2f194) == 0) {
    __dlog_print(2,6,iVar2 + 0x2f198,DAT_0002f22c + 0x2f1fc,iVar5,iVar6,0x18e);
    return;
  }
  return;
}

