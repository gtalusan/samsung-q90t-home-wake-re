/* libapp-context-manager-common.so : FUN_45e995d8@45e995d8 */

void FUN_45e995d8(void)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  pcVar2 = (char *)vconf_keynode_get_str();
  iVar1 = DAT_45e996ac;
  if (pcVar2 != (char *)0x0) {
    setenv((char *)(DAT_45e996a8 + 0x45e995f4),pcVar2,1);
    setenv((char *)(DAT_45e996b0 + 0x45e99602),pcVar2,1);
    pcVar2 = setlocale(6,(char *)(iVar1 + 0x45e99600));
    if (pcVar2 == (char *)0x0) {
      pcVar2 = setlocale(6,(char *)(DAT_45e996b4 + 0x45e9961e));
      if (pcVar2 == (char *)0x0) {
        iVar5 = DAT_45e996d0 + 0x45e99668;
        iVar4 = DAT_45e996c8 + 0x45e99734;
        iVar3 = DAT_45e996cc + 0x45e996a3;
        __dlog_print(0,5,iVar5,DAT_45e996d4 + 0x45e9966e,iVar3,iVar4,0x457);
        setenv((char *)(DAT_45e996dc + 0x45e99682),(char *)(DAT_45e996d8 + 0x45e99680),1);
        pcVar2 = setlocale(6,(char *)(iVar1 + 0x45e99600));
        if (pcVar2 == (char *)0x0) {
          __dlog_print(0,6,iVar5,DAT_45e996e0 + 0x45e996a2,iVar3,iVar4,0x45b);
        }
      }
      else {
        __dlog_print(0,4,DAT_45e996c4 + 0x45e9964a,DAT_45e996c0 + 0x45e99648,
                     DAT_45e996bc + 0x45e99675,DAT_45e996b8 + 0x45e99706,0x455,pcVar2);
      }
    }
  }
  return;
}

