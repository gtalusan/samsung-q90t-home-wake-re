/* libapp-context-manager-common.so : FUN_45e99578@45e99578 */

undefined4 FUN_45e99578(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char *__s1;
  
  __s1 = *(char **)(param_3 + 4);
  iVar1 = strcmp(__s1,(char *)(DAT_45e995c4 + 0x45e99586));
  if (iVar1 == 0) {
    __dlog_print(0,4,DAT_45e995d0 + 0x45e995b6,DAT_45e995d4 + 0x45e995ba,DAT_45e995cc + 0x45e995e5,
                 DAT_45e995c8 + 0x45e9965e,0x465,__s1);
    return 0;
  }
  return 1;
}

