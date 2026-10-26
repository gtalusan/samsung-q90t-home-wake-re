/* deviced : lcdoff_trans@0002bdc8 */

undefined4 lcdoff_trans(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)(DAT_0002be6c + 0x2bde0);
  iVar1 = DAT_0002be70 + 0x2be48;
  iVar3 = DAT_0002be74 + 0x2be2e;
  iVar4 = DAT_0002be78 + 0x2be24;
  iVar2 = DAT_0002be7c + 0x2be28;
  *(undefined4 *)(DAT_0002be6c + 0x2bde4) = *puVar5;
  *puVar5 = 3;
  __dlog_print(2,4,iVar2,iVar4,iVar3,iVar1,0x35d);
  if (*(code **)(DAT_0002be80 + 0x2be9c) != (code *)0x0) {
    (**(code **)(DAT_0002be80 + 0x2be9c))(0);
  }
  broadcast_state_changed_signal(*(undefined4 *)(DAT_0002be84 + 0x2be60),3);
  return 0;
}

