/* tvctx-manager : cp_app_add_all_key@0001c570 */

void cp_app_add_all_key(void)

{
  if (DAT_0003b504 == 0) {
    FUN_00017840(8,&DAT_00026fbc,"Netflix","XF86Amazon","AmazonInstantVideo","XF86KeyYouTube",
                 "YouTube","XF86LaunchApp1",&DAT_00027024,"XF86LaunchApp2","Rakuten","XF86KeyGlobo",
                 "Globoplay","XF86WWW","WebBrowser","XF86KeyZee5",&DAT_00026fc8);
    if (DAT_0003b504 == 0) {
      __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > cp_app_info_table is null",DAT_0001c66c,
                   DAT_0001c668,0x24d);
      return;
    }
  }
  g_hash_table_foreach(DAT_0003b504,0x16809,0);
  return;
}

