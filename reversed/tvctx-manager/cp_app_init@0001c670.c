/* tvctx-manager : cp_app_init@0001c670 */

void cp_app_init(undefined4 param_1)

{
  FUN_00017840(8,&DAT_00026fbc,"Netflix","XF86Amazon","AmazonInstantVideo","XF86KeyYouTube",
               "YouTube","XF86LaunchApp1",&DAT_00027024,"XF86LaunchApp2","Rakuten","XF86KeyGlobo",
               "Globoplay","XF86WWW","WebBrowser","XF86KeyZee5",&DAT_00026fc8);
  vconf_notify_key_changed("memory/was/app_install",0x17431,param_1);
  vconf_notify_key_changed("memory/was/app_uninstall",0x17431,param_1);
  return;
}

