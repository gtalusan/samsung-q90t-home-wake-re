# Home & boot/wake procedure — findings

Target: QN55Q90TAFXZC, firmware `T-NKMAKUC-REL-202505100505`, Tizen 5.5.0,
Linux 4.1.10 armv7l. Sources: static analysis (Ghidra, plaintext ELF) of
`tvctx-manager`, `libapp-context-manager-common.so`, `app-boot-manager`,
`deviced`, plus `/etc/tvctx-manager/appctx-config.json`, the app-context SQLite
databases, buxton2 vconf layers, and field experiments.

## 1. Home-key routing (Tizen 5.x)

- Key rules register **only from TPK manifests** on Tizen 5.x; a WGT cannot
  register key rules. The system rule database is
  `/opt/dbspace/.app-context.db`, table `key_filter`
  (`appid,key,longpress,override,on_selector,request,target_selector,args`).
- Samsung's own rule: `com.samsung.tv.csfs | XF86Home → launch
  package:com.samsung.tv.csfs | entry_point:smarthub_key`.
- A minimal carrier TPK can shadow it: `HomeKeyRu1.HomeKey | XF86Home → launch
  package:<launcher> | entry_point:home` — both rows coexist; the custom rule
  wins in practice. The carrier needs only
  `http://tizen.org/privilege/appmanager.launch`; its service-application can
  be a no-op stub (`on-boot="false"`).

## 2. tvctx-manager: the context engine

- Service unit runs `/usr/bin/tvctx-manager
  /etc/tvctx-manager/appctx-config.json /etc/tvctx-manager/launcher` after
  `wm_ready` + `vconf_ready`.
- The config drives power/boot behaviour as **event rules**:
  - `on: power.app` → `run last:app` (with the `system:app_booting_mode`
    context)
  - `on: power.livetv` → `launch last:source`
  - `on: power.normal` → stop monopolies; `power.frametv` → art-app; etc.
- Wake handler `__handle_app_booting_on_wakeup` (0x1db68): perfmon
  bookkeeping, then a gate (`FUN_00019010`) that either activates the booting
  app **below the first screen** (`activate %s below fs`) or dispatches
  `power.app`.
- `FUN_00019010` (0x19010) gates on the context properties `product:wall`,
  `shop_mode`, and **`fs_autostart`**: with fs_autostart active it
  `aul_launch_app(firstscreen_appid, __K_RELOCATE_BELOW=booting_appid)`;
  otherwise it returns 0 and `power.app` resumes the last app directly.
- Power-off handler (0x1e910): on `power.standby`, if the `autorun_last_app`
  context property is absent it calls `__activate_livetv` — i.e. it sets up a
  livetv boot for the next wake.
- Context properties are set from vconf in the init handler, e.g.
  `db/menu/smart_hub/ontvsetting/auto_start == 1` → add property
  `fs_autostart`. `libapp-context-manager-common.so` FUN_45e9f8a8 toggles
  `autorun_last_app` from `system:app_booting_mode` ∧ `db/menu/app_booting`.
  **Which components actually set `app_booting_mode` was not fully resolved.**
- The first-screen appid (`DAT_0003b534`) comes from vconf
  `db/first_screen/type`; logs: `firstscreen appid is null` / `failed to get
  firstscreen appid from vconf`.

## 3. App-booting eligibility (the launcher-as-booting-app gate)

`libapp-context-manager-common.so`:

- `util_get_appbooting_supported_webapp_byappid` (0x9d4b0) — **web apps**:
  1. system-info bool `SYSTEM_INFO_KEY_APP_BOOTING_SUPPORT` (id 0x11e) must be
     on (model capability)
  2. `pkgmgrinfo_appinfo_get_appinfo` on the appid
  3. metadata *equality* checks (`FUN_45e99520` — true only when the key is
     present AND equals the expected value):
     - `http://samsung.com/tv/metadata/disable.appbooting` ≠ `"true"`
     - `http://samsung.com/tv/metadata/transparent.support` ≠ `"true"`
     - `http://samsung.com/tv/metadata/multitasking.support` /
       `http://samsung.com/tv/metadata/transparent.opaque.support` combination
- `util_get_uiapp_has_metadata_byappid` (0x9cae8) — **native apps**: single
  check `http://samsung.com/tv/metadata/appbootingsupport` == `"true"`.
- Recorder `FUN_45ea1a10` (the "app booting appid updated by PIG" path): on a
  fullscreen visible window, resolves the task's appid, runs the eligibility
  gate for the task type (`webapp` vs native), and on success writes:
  - `memory/volt/last_service` = `app-source`
  - `memory/volt/last_service_app_booting` = appid
  - `context_set_booting_appid_vconf(appid)` → **both**
    `memory/appfw/booting_appid` and `db/appfw/booting_appid_backup`
- Consequence: the `booting_appid*` keys are **outputs** of the boot flow, not
  inputs. Writing them directly does nothing for an ineligible app, and the
  system rewrites them with what it actually boots (field rounds 1–3).
- `context_init_pre` reads `memory/volt/last_service_app_booting`,
  `db/menu/app_booting`, `memory/appfw/booting_appid` at startup.

For a WGT launcher to be boot-eligible, `config.xml` needs:

```xml
<tizen:metadata key="http://samsung.com/tv/metadata/appbootingsupport" value="true"/>
<tizen:metadata key="http://samsung.com/tv/metadata/multitasking.support" value="true"/>
<tizen:metadata key="http://samsung.com/tv/metadata/disable.appbooting" value="false"/>
```

With that, a graceful power-off while the launcher is foreground records it,
and the next cold boot brings it up first (owner-verified).

## 4. app-boot-manager and vconf layers

- `app-boot-manager` (oneshot at sysinit, `WantedBy=sysinit.target`) reads
  `db/menu/app_booting`, `db/appfw/booting_appid_backup`,
  `db/first_screen/type`, `db/menu/smart_hub/ontvsetting/auto_start`,
  `db/volt/last_service_app_booting`, `memory/appfw/booting_appid`, and the
  bizapp pair `db/menu/system/smartfeatures/autorun-defaultapp` /
  `autorunsignage` (the defaultapp value is a WAS-DB numeric app_id; it is a
  signage/bizapp channel, not the consumer path).
- Live vconf "db" layer persists in `/opt/var/lib/buxton2/system.db`
  (writable); `/etc/buxton2/system.db` is the RO template. The memory layer is
  per-boot.

## 5. deviced: standby poweroff

- At standby, deviced logs and requests a full cold poweroff:
  `power_suspend : %d, instant_on : %d, save_error_log : %d,
  request_cold_poweroff(%s), interval(%d)` — interval 60s on this model
  (`config_get_poweroff_interval_reset`).
- `power_get_poweroff_extra_info` (0x20cc0) fills the flags from three vconf
  ints (`memory/boot/power_suspend`, `power_suspend_sel`, plus instant-on)
  and the string key `memory/boot/cold_poweroff_request_pkg`; it registers
  vconf notifications on each.
- `powerdown_ap` (0x22130) contains the fallback
  `standby_reboot doesn't work go to cold poweroff`; `restart_ap` (0x226d0)
  handles `Serdes Error in background standby, Going standby reboot`.
- Field behaviour and the wake wedge are covered in the field notes; the
  causal attribution between settings, the retired USB stick, and the wedge is
  left **unresolved** there.

## 6. Tooling quirks worth knowing

- Port-hex checks: 8787 = `0x2253` (existing scripts checked `0x224F` = 8783,
  a harmless early-exit bug).
- `umount -l` detaches a wedged exFAT mount instantly; a raw USB unbind
  (`echo N > /sys/bus/usb/drivers/usb/unbind`) hangs the kernel USB path while
  the trigger filesystem is mounted.
- On-TV installs: `pkgcmd -i -t wgt -p <path> -n <pkgid>` over SSH; sdb's
  `vd_appinstall` hangs, and a wedged pkgmgr can trip the watchdog.
