# samsung-q90t-home-wake-re

Reverse-engineering record for the **Home-button and boot/wake procedure** on
the Samsung QN55Q90TAFXZC (2020 Q90T) — firmware `T-NKMAKUC-REL-202505100505`,
Tizen 5.5.0, Linux 4.1.10 armv7l. Field-verified 2026-10-25/26 on the owner's
own TV.

This repository contains **no binaries, firmware, signatures, keys or device
identifiers** — only Ghidra scripts, decompilation output, and written
findings. Private identifiers in the raw logs are redacted (`<LAN>`).

## Contents

| Path | What it is |
| --- | --- |
| `docs/findings-home-wake.md` | The writeup: Home-key routing, the app-context system, app-booting eligibility gates, the booting-app recorder, wake handlers, deviced's standby poweroff |
| `docs/field-notes-2026-10-25.md` | The experimental record: vconf experiments, wake observations, the standby wedge, and the final working configuration |
| `ghidra/` | Headless Ghidra 12.2 scripts used (string-anchored decompile, function-string dumps, single-function decompile by address or symbol, full-binary C export) |
| `ghidra-output/` | Decompilation logs for `tvctx-manager`, `libapp-context-manager-common.so`, and `deviced` (addresses as analyzed) |
| `reversed/` | Decompiled C for **every function** of the three binaries, one `.c` file per function (`<name>@<address>.c`), grouped per binary |

## Method notes

- The analyzed binaries are plaintext ELF (stripped, not packed). Samsung's
  `#RPAC=` unit-file headers are attestation metadata, not ciphering — and the
  TV's `strings` utility is absent, which once made the binaries look
  encrypted (`grep -a` works fine).
- Decompilation was performed with Ghidra 12.2 `analyzeHeadless`:
  - project paths must live outside dot-directories (Ghidra rejects
    `.`-prefixed path elements)
  - Python post-scripts require PyGhidra in this build; Java GhidraScript
    works everywhere
  - non-stripped binaries can be decompiled by symbol name
- Function addresses in the logs are the imported-image addresses for the
  firmware named above; they are firmware-specific and not portable.

## Related repositories

- [samsung-tv-usb-root](https://github.com/gtalusan/samsung-tv-usb-root) — the
  exFAT exploit, its image builder, and the loopback (no-stick) UEP-down method
- [samsung-q90t-tizen-root](https://github.com/gtalusan/samsung-q90t-tizen-root) —
  Q90T root documentation and field notes
- [samsung-tizen5-cec-uepless](https://github.com/gtalusan/samsung-tizen5-cec-uepless) —
  the CEC input-name bridge

## Disclaimer

Personal research on the owner's own hardware. No firmware or proprietary
material is included. Nothing here is a recommendation to modify any device.
