/* tvctx-manager : cp_app_init_keymap@0001c450 */

void cp_app_init_keymap(void)

{
  key_handler_init_keymap
            (8,&DAT_00026fbc,"Netflix","XF86Amazon","AmazonInstantVideo","XF86KeyYouTube","YouTube",
             "XF86LaunchApp1",&DAT_00027024,"XF86LaunchApp2","Rakuten","XF86KeyGlobo","Globoplay",
             "XF86WWW","WebBrowser","XF86KeyZee5",&DAT_00026fc8);
  return;
}

