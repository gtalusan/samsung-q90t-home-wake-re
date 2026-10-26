/* deviced : power_get_poweroff_extra_info@00020cc0 */

void power_get_poweroff_extra_info(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  piVar9 = *(int **)(DAT_0002122c + 0x20cd0 + DAT_00021230);
  local_1c = *piVar9;
  if (param_1 == (undefined1 *)0x0) goto LAB_00020d38;
  if (*(char *)(DAT_00021234 + 0x20d7b) == '\0') {
    iVar10 = DAT_00021240 + 0x20d68;
    local_28 = -1;
    local_20 = -1;
    local_24 = 1;
    iVar3 = vconf_get_int(iVar10,&local_28);
    if (iVar3 != 0) {
      __dlog_print(2,6,DAT_000212e0 + 0x210b0,DAT_000212dc + 0x210ac,DAT_000212d8 + 0x210bc,
                   DAT_000212d4 + 0x210fc,0x7f,iVar10);
    }
    iVar10 = DAT_00021244 + 0x20d98;
    *(bool *)(DAT_00021248 + 0x20da0) = local_28 != -1;
    iVar3 = vconf_get_int(iVar10,&local_24);
    if (iVar3 != 0) {
      __dlog_print(2,6,DAT_000212d0 + 0x21064,DAT_000212cc + 0x21060,DAT_000212c8 + 0x21070,
                   DAT_000212c4 + 0x210b0,0x86,iVar10);
    }
    iVar10 = DAT_0002124c + 0x20dcc;
    *(bool *)(DAT_00021250 + 0x20dd5) = local_24 != 0;
    iVar3 = vconf_get_int(iVar10,&local_20);
    if (iVar3 != 0) {
      __dlog_print(2,6,DAT_000212c0 + 0x21018,DAT_000212bc + 0x21014,DAT_000212b8 + 0x21024,
                   DAT_000212b4 + 0x21064,0x8d,iVar10);
    }
    iVar3 = DAT_00021254;
    iVar10 = DAT_00021258 + 0x20e04;
    *(bool *)(DAT_00021254 + 0x20e02) = local_20 != -1;
    pcVar5 = (char *)vconf_get_str(iVar10);
    if (pcVar5 == (char *)0x0) {
      iVar7 = DAT_000212a4 + 0x20fc0;
      iVar4 = DAT_000212a8 + 0x21018;
      iVar8 = DAT_000212ac + 0x20fb4;
      iVar11 = DAT_000212b0 + 0x20fc4;
      *(undefined1 *)(iVar3 + 0x20e03) = 0;
      iVar3 = local_24;
      iVar10 = local_20;
      __dlog_print(2,4,iVar11,iVar8,iVar7,iVar4,0x9d,local_28,local_24,local_20,0);
    }
    else {
      snprintf((char *)(iVar3 + 0x20e03),0x80,(char *)(DAT_0002125c + 0x20e2c),pcVar5);
      iVar3 = local_24;
      iVar10 = local_20;
      pcVar6 = pcVar5;
      __dlog_print(2,4,DAT_00021268 + 0x20e74,DAT_0002126c + 0x20e84,DAT_00021264 + 0x20e90,
                   DAT_00021260 + 0x20ec8,0x9d,local_28,local_24,local_20,pcVar5);
      free(pcVar5);
      pcVar5 = pcVar6;
    }
    iVar11 = DAT_00021270 + 0x20ea8;
    iVar4 = vconf_notify_key_changed(iVar11,DAT_00021274 + 0x20eac,0);
    if (iVar4 == 0) {
      iVar11 = DAT_00021278 + 0x20ec8;
      iVar4 = vconf_notify_key_changed(iVar11,DAT_0002127c + 0x20ecc);
      if (iVar4 == 0) {
        iVar11 = DAT_00021280 + 0x20ee8;
        iVar3 = vconf_notify_key_changed(iVar11,DAT_00021284 + 0x20eec);
        if (iVar3 == 0) {
          iVar11 = DAT_00021288 + 0x20f08;
          iVar3 = vconf_notify_key_changed(iVar11,DAT_0002128c + 0x20f0c);
          if (iVar3 == 0) {
            __dlog_print(0,3,DAT_0002129c + 0x20f54,DAT_00021298 + 0x20f50,DAT_00021294 + 0x20f68,
                         DAT_00021290 + 0x20fbc,0x72);
            *(undefined1 *)(DAT_000212a0 + 0x20fe7) = 1;
            goto LAB_00020d00;
          }
          __dlog_print(2,6,DAT_00021320 + 0x211d8,DAT_0002131c + 0x211d4,DAT_00021318 + 0x211e4,
                       (int)&DAT_00021234 + DAT_00021314,0x6e,iVar11);
        }
        else {
          __dlog_print(2,6,DAT_00021330 + 0x21224,DAT_0002132c + 0x21220,
                       (int)&DAT_00021230 + DAT_00021328,(int)&DAT_00021280 + DAT_00021324,0x68,
                       iVar11);
        }
      }
      else {
        __dlog_print(2,6,DAT_00021310 + 0x2118c,DAT_0002130c + 0x21188,DAT_00021308 + 0x21198,
                     DAT_00021304 + 0x211e8,0x62,iVar11,iVar3,iVar10,pcVar5);
      }
    }
    else {
      __dlog_print(2,6,DAT_000212f0 + 0x210fc,DAT_000212ec + 0x210f8,DAT_000212e8 + 0x21108,
                   DAT_000212e4 + 0x21158,0x5c,iVar11,iVar3,iVar10,pcVar5);
    }
    __dlog_print(2,6,DAT_00021300 + 0x21140,DAT_000212fc + 0x2113c,DAT_000212f8 + 0x21150,
                 DAT_000212f4 + 0x21190,0xa4,iVar11);
  }
LAB_00020d00:
  pcVar6 = (char *)(DAT_00021238 + 0x20d1b);
  pcVar5 = (char *)(DAT_0002123c + 0x20d20);
  uVar1 = *(undefined1 *)(DAT_00021238 + 0x20d18);
  uVar2 = *(undefined1 *)(DAT_00021238 + 0x20d1a);
  param_1[1] = *(undefined1 *)(DAT_00021238 + 0x20d19);
  *param_1 = uVar1;
  param_1[2] = uVar2;
  snprintf(param_1 + 3,0x80,pcVar5,pcVar6);
LAB_00020d38:
  if (local_1c != *piVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

