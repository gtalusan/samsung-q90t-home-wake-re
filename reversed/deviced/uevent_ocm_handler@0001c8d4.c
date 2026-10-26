/* deviced : uevent_ocm_handler@0001c8d4 */

void uevent_ocm_handler(undefined4 param_1)

{
  char *__s1;
  int iVar1;
  int *piVar2;
  undefined1 auStack_78 [100];
  int local_14;
  
  piVar2 = *(int **)(DAT_0001cd1c + 0x1c8e4 + DAT_0001cd20);
  local_14 = *piVar2;
  __s1 = (char *)udev_device_get_property_value(param_1,DAT_0001cd24 + 0x1c8fc);
  if (__s1 != (char *)0x0) {
    iVar1 = strcmp(__s1,(char *)(DAT_0001cd28 + 0x1c918));
    if (iVar1 == 0) {
      iVar1 = vconf_set_int(DAT_0001cd68 + 0x1ca94,2);
      if (iVar1 == 0) {
        __s1 = (char *)0x2;
        __dlog_print(2,4,DAT_0001cda0 + 0x1cb94,DAT_0001cd9c + 0x1cb90,DAT_0001cd98 + 0x1cb9d,
                     DAT_0001cd94 + 0x1cb6c,0x122,2);
        iVar1 = DAT_0001cda4 + 0x1cba0;
      }
      else {
        __s1 = (char *)0x2;
        __dlog_print(2,6,DAT_0001cd78 + 0x1cae8,DAT_0001cd74 + 0x1cae4,DAT_0001cd70 + 0x1caf1,
                     DAT_0001cd6c + 0x1cac0,0x11d,2);
        iVar1 = DAT_0001cd7c + 0x1caf4;
      }
    }
    else {
      iVar1 = strcmp(__s1,(char *)(DAT_0001cd2c + 0x1c930));
      if (iVar1 == 0) {
        iVar1 = vconf_set_int(DAT_0001cd50 + 0x1c9e8,3);
        if (iVar1 == 0) {
          __s1 = (char *)0x3;
          __dlog_print(2,4,DAT_0001cdcc + 0x1cc5c,DAT_0001cdc8 + 0x1cc58,DAT_0001cdc4 + 0x1cc65,
                       DAT_0001cdc0 + 0x1cc34,0x130,3);
          iVar1 = DAT_0001cdd0 + 0x1cc68;
        }
        else {
          __s1 = (char *)0x3;
          __dlog_print(2,6,DAT_0001cd60 + 0x1ca3c,DAT_0001cd5c + 0x1ca38,DAT_0001cd58 + 0x1ca45,
                       DAT_0001cd54 + 0x1ca14,299,3);
          iVar1 = DAT_0001cd64 + 0x1ca48;
        }
      }
      else {
        iVar1 = strcmp(__s1,(char *)(DAT_0001cd30 + 0x1c948));
        if (iVar1 == 0) {
          iVar1 = vconf_set_int(DAT_0001cda8 + 0x1cbb0,4);
          if (iVar1 == 0) {
            __s1 = (char *)0x4;
            __dlog_print(2,4,DAT_0001cdf4 + 0x1cd0c,DAT_0001cdf0 + 0x1cd08,DAT_0001cdec + 0x1cd15,
                         DAT_0001cde8 + 0x1cce4,0x13e,4);
            iVar1 = DAT_0001cdf8 + 0x1cd18;
          }
          else {
            __s1 = (char *)0x4;
            __dlog_print(2,6,DAT_0001cdb8 + 0x1cc04,DAT_0001cdb4 + 0x1cc00,DAT_0001cdb0 + 0x1cc0d,
                         DAT_0001cdac + 0x1cbdc,0x139,4);
            iVar1 = DAT_0001cdbc + 0x1cc10;
          }
        }
        else {
          iVar1 = strcmp(__s1,(char *)(DAT_0001cd34 + 0x1c960));
          if (iVar1 == 0) {
            iVar1 = vconf_set_int(DAT_0001cd38 + 0x1c978,5);
            if (iVar1 == 0) {
              __s1 = (char *)0x5;
              __dlog_print(2,4,DAT_0001cde0 + 0x1ccb4,DAT_0001cddc + 0x1ccb0,DAT_0001cdd8 + 0x1ccbd,
                           DAT_0001cdd4 + 0x1cc8c,0x14c,5);
              iVar1 = DAT_0001cde4 + 0x1ccc0;
            }
            else {
              __s1 = (char *)0x5;
              __dlog_print(2,6,DAT_0001cd48 + 0x1c9cc,DAT_0001cd44 + 0x1c9c8,DAT_0001cd40 + 0x1c9d5,
                           DAT_0001cd3c + 0x1c9a4,0x147,5);
              iVar1 = DAT_0001cd4c + 0x1c9d8;
            }
          }
          else {
            __dlog_print(2,6,DAT_0001cd8c + 0x1cb3c,DAT_0001cd88 + 0x1cb38,DAT_0001cd84 + 0x1cb49,
                         DAT_0001cd80 + 0x1cb18,0x152,__s1);
            iVar1 = DAT_0001cd90 + 0x1cb48;
          }
        }
      }
    }
    __snprintf_chk(auStack_78,100,1,100,iVar1,__s1);
    print_log_console(auStack_78);
  }
  if (local_14 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

