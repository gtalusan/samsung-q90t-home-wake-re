/* libapp-context-manager-common.so : init_handler@45e99b20 */

void init_handler(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  iVar1 = DAT_45e99bdc;
  iVar4 = DAT_45e99bd8 + 0x45e99b30;
  puVar7 = (undefined4 *)(DAT_45e99be4 + 0x45e99b3a);
  puVar6 = (undefined4 *)(DAT_45e99be8 + 0x45e99b3e);
  uVar3 = g_list_append(*(undefined4 *)(DAT_45e99bdc + 0x45e99b42),
                        *(undefined4 *)(iVar4 + DAT_45e99be0));
  iVar2 = DAT_45e99bec;
  *(undefined4 *)(iVar1 + 0x45e99b42) = uVar3;
  uVar3 = g_list_append(*(undefined4 *)(iVar1 + 0x45e99b46),*(undefined4 *)(iVar4 + iVar2));
  iVar2 = DAT_45e99bf0;
  *(undefined4 *)(iVar1 + 0x45e99b46) = uVar3;
  uVar3 = g_list_append(*(undefined4 *)(iVar1 + 0x45e99b4a),*(undefined4 *)(iVar4 + iVar2));
  iVar2 = DAT_45e99bf4;
  *(undefined4 *)(iVar1 + 0x45e99b4a) = uVar3;
  uVar3 = g_list_append(*(undefined4 *)(iVar1 + 0x45e99b4e),*(undefined4 *)(iVar4 + iVar2));
  iVar2 = DAT_45e99bf8;
  *(undefined4 *)(iVar1 + 0x45e99b4e) = uVar3;
  uVar3 = g_list_append(*puVar7,*(undefined4 *)(iVar4 + iVar2));
  iVar2 = DAT_45e99bfc;
  *puVar7 = uVar3;
  uVar3 = g_list_append(*puVar6,*(undefined4 *)(iVar4 + iVar2));
  iVar2 = DAT_45e99c00;
  *puVar6 = uVar3;
  uVar3 = g_list_append(*(undefined4 *)(iVar1 + 0x45e99b52),*(undefined4 *)(iVar4 + iVar2));
  iVar2 = DAT_45e99c04;
  *(undefined4 *)(iVar1 + 0x45e99b52) = uVar3;
  uVar3 = g_list_append(*(undefined4 *)(iVar1 + 0x45e99b56),*(undefined4 *)(iVar4 + iVar2));
  iVar2 = DAT_45e99c08;
  *(undefined4 *)(iVar1 + 0x45e99b56) = uVar3;
  uVar3 = g_list_append(*(undefined4 *)(iVar1 + 0x45e99b46),iVar2 + 0x45e99ba2);
  iVar2 = DAT_45e99c0c;
  *(undefined4 *)(iVar1 + 0x45e99b46) = uVar3;
  uVar5 = *(undefined4 *)(iVar4 + iVar2);
  uVar3 = g_list_append(*(undefined4 *)(iVar1 + 0x45e99b42),uVar5);
  *(undefined4 *)(iVar1 + 0x45e99b42) = uVar3;
  uVar3 = g_list_append(*(undefined4 *)(iVar1 + 0x45e99b4a),uVar5);
  *(undefined4 *)(iVar1 + 0x45e99b4a) = uVar3;
  uVar3 = g_list_append(*(undefined4 *)(iVar1 + 0x45e99b4e),uVar5);
  *(undefined4 *)(iVar1 + 0x45e99b4e) = uVar3;
  uVar3 = g_list_append(*(undefined4 *)(iVar1 + 0x45e99b46),uVar5);
  *(undefined4 *)(iVar1 + 0x45e99b46) = uVar3;
  return;
}

