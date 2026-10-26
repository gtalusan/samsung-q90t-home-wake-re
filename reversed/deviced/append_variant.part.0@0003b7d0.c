/* deviced : append_variant.part.0@0003b7d0 */

void append_variant_part_0(undefined4 param_1,char *param_2,int param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_64 [56];
  int local_2c;
  
  piVar3 = *(int **)(DAT_0003b9cc + 0x3b7e8 + DAT_0003b9d0);
  cVar5 = *param_2;
  local_2c = *piVar3;
  if (cVar5 == '\0') {
LAB_0003b8c0:
    uVar2 = 0;
LAB_0003b9ac:
    if (local_2c != *piVar3) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar2);
    }
    return;
  }
  iVar6 = 0;
  iVar7 = DAT_0003b9d4 + 0x3b828;
LAB_0003b824:
  switch(cVar5) {
  case 'a':
    pcVar1 = param_2 + 1;
    iVar6 = iVar6 + 1;
    param_2 = param_2 + 1;
    if (*pcVar1 == 'y') {
      dbus_message_iter_open_container(param_1,0x61,iVar7,auStack_64);
      iVar4 = *(int *)(param_3 + iVar6 * 4);
      dbus_message_iter_append_fixed_array(auStack_64,0x79,iVar4,*(undefined4 *)(iVar4 + 4));
      dbus_message_iter_close_container(param_1,auStack_64);
    }
    goto LAB_0003b8ac;
  case 'b':
    strtol(*(char **)(param_3 + iVar6 * 4),(char **)0x0,10);
    dbus_message_iter_append_basic(param_1,0x62);
    goto LAB_0003b8ac;
  case 'c':
    break;
  case 'd':
    break;
  case 'e':
    break;
  case 'f':
    break;
  case 'g':
    break;
  case 'h':
    break;
  case 'i':
    strtol(*(char **)(param_3 + iVar6 * 4),(char **)0x0,10);
    dbus_message_iter_append_basic(param_1,0x69);
    goto LAB_0003b8ac;
  case 'j':
    break;
  case 'k':
    break;
  case 'l':
    break;
  case 'm':
    break;
  case 'n':
    break;
  case 'o':
    break;
  case 'p':
    break;
  case 'q':
    break;
  case 'r':
    break;
  case 's':
    dbus_message_iter_append_basic(param_1,0x73,param_3 + iVar6 * 4);
    goto LAB_0003b8ac;
  case 't':
    strtoll(*(char **)(param_3 + iVar6 * 4),(char **)0x0,10);
    dbus_message_iter_append_basic(param_1,0x74);
    goto LAB_0003b8ac;
  case 'u':
    strtoul(*(char **)(param_3 + iVar6 * 4),(char **)0x0,10);
    dbus_message_iter_append_basic(param_1,0x75);
LAB_0003b8ac:
    cVar5 = param_2[1];
    iVar6 = iVar6 + 1;
    param_2 = param_2 + 1;
    if (cVar5 == '\0') goto LAB_0003b8c0;
    goto LAB_0003b824;
  }
  uVar2 = 0xffffffea;
  goto LAB_0003b9ac;
}

