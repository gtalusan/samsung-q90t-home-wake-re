/* libapp-context-manager-common.so : key_handler_init_pre@45ea9c74 */

void key_handler_init_pre(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  
  iVar1 = DAT_45ea9c98 + 0x45ea9c80;
  uVar2 = g_hash_table_new_full
                    (*(undefined4 *)(iVar1 + DAT_45ea9ca4),*(undefined4 *)(iVar1 + DAT_45ea9ca0),
                     *(undefined4 *)(iVar1 + DAT_45ea9c9c),DAT_45ea9ca8 + 0x45ea9c8a,in_r3);
  *(undefined4 *)(DAT_45ea9cac + 0x45ea9cfa) = uVar2;
  return;
}

