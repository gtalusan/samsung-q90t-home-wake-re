/* tvctx-manager : util_listen_epop_enabled@00021298 */

void util_listen_epop_enabled(undefined4 param_1,undefined4 param_2)

{
  if (epop_handler._0_4_ == 0) {
    epop_handler._0_4_ = param_2;
    epop_handler._4_4_ = param_1;
    epop_handler._56_4_ = util_vconf_watch_spec_create("db/tools/support/epop",1,1,&DAT_0003b5ac);
    epop_handler._60_4_ =
         util_vconf_watch_spec_create("memory/epop/blocked_by_api",1,0,&DAT_0003b5ac);
    epop_handler._64_4_ =
         util_vconf_watch_spec_create("db/menu/subtitle/subtitle",1,0,&DAT_0003b5ac);
    epop_handler._68_4_ =
         util_vconf_watch_spec_create("memory/tv-viewer/visible_banners",4,0,&DAT_0003b5ac);
    epop_handler._72_4_ =
         util_vconf_watch_spec_create("memory/tv-viewer/visible_video_banners",4,0,&DAT_0003b5ac);
    epop_handler._76_4_ = util_vconf_watch_spec_create("db/menu/caption/caption",1,0,&DAT_0003b5ac);
    epop_handler._80_4_ = util_vconf_watch_spec_create("memory/ttx/ttx_mode",1,1,DAT_000214a4);
    epop_handler._84_4_ =
         util_vconf_watch_spec_create("db/menu/picture/pip/onoff",1,0,&DAT_0003b5ac);
    epop_handler._88_4_ =
         util_vconf_watch_spec_create("memory/video-player/360_playing_status",1,0,&DAT_0003b5ac);
    epop_handler._92_4_ =
         util_vconf_watch_spec_create("memory/video-player/upscaling_demo_status",1,0,&DAT_0003b5ac)
    ;
    epop_handler._96_4_ =
         util_vconf_watch_spec_create("memory/tvplayer/is_hdmi_dsc_out",4,0,&DAT_0003b5ac);
    util_vconf_watch(epop_handler._56_4_,1,&LAB_00016b9c_1,epop_handler);
    util_vconf_watch(epop_handler._60_4_,1,&LAB_00016be4_1,epop_handler);
    util_vconf_watch(epop_handler._64_4_,1,&LAB_00016c2c_1,epop_handler);
    util_vconf_watch(epop_handler._68_4_,1,0x16c75,epop_handler);
    util_vconf_watch(epop_handler._72_4_,1,0x1b551,epop_handler);
    util_vconf_watch(epop_handler._76_4_,1,&LAB_00016d24_1,epop_handler);
    util_vconf_watch(epop_handler._80_4_,1,&LAB_000176c8_1,epop_handler);
    util_vconf_watch(epop_handler._84_4_,1,&LAB_00016d70_1,epop_handler);
    util_vconf_watch(epop_handler._88_4_,1,&LAB_00016dbc_1,epop_handler);
    util_vconf_watch(epop_handler._92_4_,1,&LAB_00016e08_1,epop_handler);
    util_vconf_watch(epop_handler._96_4_,1,0x16e55,epop_handler);
    return;
  }
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > epop listener already set",DAT_000214a0,
               DAT_0002149c,0x174);
  return;
}

