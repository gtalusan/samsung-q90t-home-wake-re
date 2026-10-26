/* tvctx-manager : cp_app_init_fs_appid@0001c518 */

void cp_app_init_fs_appid(void)

{
  DAT_0003b588 = vconf_get_str("db/first_screen/type");
  if (DAT_0003b588 == 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to get firstscreen appid from vconf",
                 DAT_0001c56c,DAT_0001c568,0x254);
    return;
  }
  return;
}

