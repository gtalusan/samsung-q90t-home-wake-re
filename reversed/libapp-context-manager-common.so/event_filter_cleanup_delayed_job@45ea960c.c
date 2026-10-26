/* libapp-context-manager-common.so : event_filter_cleanup_delayed_job@45ea960c */

void event_filter_cleanup_delayed_job(void)

{
  int iVar1;
  undefined4 in_r3;
  
  iVar1 = DAT_45ea9630;
  if (*(int *)(DAT_45ea9630 + 0x45ea966e) != 0) {
    g_hash_table_foreach_remove
              (*(int *)(DAT_45ea9630 + 0x45ea966e),DAT_45ea9634 + 0x45ea9620,0,in_r3,in_r3);
    g_hash_table_destroy(*(undefined4 *)(iVar1 + 0x45ea966e));
    *(undefined4 *)(iVar1 + 0x45ea966e) = 0;
  }
  return;
}

