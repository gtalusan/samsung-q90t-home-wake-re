# Field notes — 2026-10-25/26

Experimental record from the owner's TV (T-NKMAKUC-REL-202505100505, Tizen
5.5.0). Private addresses redacted. These are observations with attribution
kept honest: several causal questions remain open.

## The setup under test

- Rooted via the UEP-down USB method; boot-time root persistence through the
  patched `profile.d` hook → `/opt/usr/share/tvroot/boot.sh`, which starts the
  tvroot command agent, dropbear (:22) and cecdump (:8787, CEC bridge).
- Launcher: CleanFrame (WGT), installed with the Home-key carrier TPK.
- Home key → launcher via the app-context rule; `db/first_screen/type`
  already named the launcher.

## vconf boot-key experiments (rounds 1–3)

| Round | Change | Result |
| --- | --- | --- |
| 1 | boot.sh set `memory/appfw/booting_appid` = launcher at ~1s uptime (before the 2.3s booting-app launch) | booted tv-viewer anyway; key rewritten by the system |
| 2 | `db/appfw/booting_appid_backup` = launcher (persisted) | booted tv-viewer; TV rewrote the key back itself |
| 3 | `db/menu/smart_hub/ontvsetting/auto_start` = 1 (first_screen already = launcher) | booted tv-viewer |

Conclusion: those keys are boot-flow outputs (see findings §3), and the
booting-app decision is gated by metadata eligibility. The launcher became
eligible after adding the three `tizen:metadata` entries, after which a
graceful power-off with the launcher foreground records it and the next cold
boot brings it up first (**owner-verified**).

## The standby/wake wedge

Observed repeatedly on 2026-10-25:

- deviced requests a full cold poweroff 60s after standby (log in findings §5).
- Wakes attempted across that boundary landed the TV in a half-state:
  `memory/sysman/power_state = 6`, SSH alive, display dark, remote
  unresponsive. Recovery only by mains-cycle. Quick wakes inside the window
  worked.
- Tests with `auto_start = 1` (fs_autostart active) also wedged. Correlation
  recorded; mechanism **not** claimed.
- `db/boot/instant_on` was set 1→0 at 23:14 and reverted to 1 at 00:08 at the
  owner's request; the owner is skeptical of the instant-on attribution. The
  owner-verified end behaviour after the stick's retirement: standby → full
  poweroff; power-on → clean cold boot the remote always wins. Whether the
  setting, the stick, or both explain the change is **unresolved**.

## USB stick hazards (now retired)

- The crafted trigger partition, once mounted, hangs filesystem I/O; `df`
  (which enumerates mounts) hangs system-wide.
- `echo N > /sys/bus/usb/drivers/usb/unbind` hangs inside the kernel USB
  disconnect path and wedges the VFS; `umount -l` is the recovery move.
- The stick is retired by the loopback UEP-down method (documented in
  `samsung-tv-usb-root/docs/LOOPBACK-UEP.md`): the exploit image fires from
  `/dev/loop0` at uptime=2s on a stickless boot; dropbear and cecdump come up
  normally; no USB device involved.

## Signing notes

- The Tizen CLI signs with no password and no prompts when run as a plain
  subprocess; under a pty it reports success while writing an unsigned package.
- `tizen cli-config default.profiles.path=…` prints success but is ignored;
  the profile store is fixed. The Q90T signing profile is `q90t-sdk`.
- On-TV install: `pkgcmd -i -t wgt -p <path> -n <pkgid>` over SSH.

## Final state (2026-10-26)

- Stickless boot: UEP down at ~2s via loopback; SSH and CEC bridge up.
- Launcher installed and boot-eligible; launcher-first on cold boot verified.
- `instant_on` back at stock (1). Wake-behaviour attribution open.
