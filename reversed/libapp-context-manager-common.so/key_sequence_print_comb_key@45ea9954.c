/* libapp-context-manager-common.so : key_sequence_print_comb_key@45ea9954 */

void key_sequence_print_comb_key(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_45ea99c0 + 0x45ea9970;
  iVar2 = DAT_45ea99c4 + 0x45ea9972;
  iVar4 = DAT_45ea99b8 + 0x45ea9c0e;
  iVar1 = DAT_45ea99bc + 0x45ea99ad;
  __dlog_print(0,3,iVar2,iVar3,iVar1,iVar4,0x122);
  FUN_45ea7dac(**(undefined4 **)(key_sequence_remove_all + DAT_45ea99c8),0);
  __dlog_print(0,3,iVar2,iVar3,iVar1,iVar4,0x124);
  return;
}

