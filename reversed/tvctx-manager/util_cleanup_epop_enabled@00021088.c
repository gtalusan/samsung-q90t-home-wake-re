/* tvctx-manager : util_cleanup_epop_enabled@00021088 */

void util_cleanup_epop_enabled(void)

{
  util_vconf_unwatch(epop_handler._56_4_);
  util_vconf_watch_spec_free(epop_handler._56_4_);
  epop_handler._56_4_ = 0;
  util_vconf_unwatch(epop_handler._60_4_);
  util_vconf_watch_spec_free(epop_handler._60_4_);
  epop_handler._60_4_ = 0;
  util_vconf_unwatch(epop_handler._64_4_);
  util_vconf_watch_spec_free(epop_handler._64_4_);
  epop_handler._64_4_ = 0;
  util_vconf_unwatch(epop_handler._68_4_);
  util_vconf_watch_spec_free(epop_handler._68_4_);
  epop_handler._68_4_ = 0;
  util_vconf_unwatch(epop_handler._72_4_);
  util_vconf_watch_spec_free(epop_handler._72_4_);
  epop_handler._72_4_ = 0;
  util_vconf_unwatch(epop_handler._76_4_);
  util_vconf_watch_spec_free(epop_handler._76_4_);
  epop_handler._76_4_ = 0;
  util_vconf_unwatch(epop_handler._80_4_);
  util_vconf_watch_spec_free(epop_handler._80_4_);
  epop_handler._80_4_ = 0;
  util_vconf_unwatch(epop_handler._84_4_);
  util_vconf_watch_spec_free(epop_handler._84_4_);
  epop_handler._84_4_ = 0;
  util_vconf_unwatch(epop_handler._88_4_);
  util_vconf_watch_spec_free(epop_handler._88_4_);
  epop_handler._88_4_ = 0;
  util_vconf_unwatch(epop_handler._92_4_);
  util_vconf_watch_spec_free(epop_handler._92_4_);
  epop_handler._92_4_ = 0;
  util_vconf_unwatch(epop_handler._96_4_);
  util_vconf_watch_spec_free(epop_handler._96_4_);
  epop_handler._96_4_ = 0;
  epop_handler._0_4_ = 0;
  epop_handler._52_4_ = 0;
  return;
}

