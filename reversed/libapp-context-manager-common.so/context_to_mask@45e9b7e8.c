/* libapp-context-manager-common.so : context_to_mask@45e9b7e8 */

uint context_to_mask(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  piVar1 = (int *)g_strsplit(param_1,DAT_45e9ba38 + 0x45e9b7f6,0,param_4,param_4);
  if (piVar1 == (int *)0x0) {
    uVar5 = 0xffffffff;
  }
  else {
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      iVar7 = DAT_45e9ba3c + 0x45e9b81c;
      iVar8 = DAT_45e9ba40 + 0x45e9b81e;
      iVar9 = DAT_45e9ba44 + 0x45e9b820;
      piVar6 = piVar1;
      do {
        iVar2 = g_strcmp0(iVar4,iVar7);
        uVar3 = 1;
        if (iVar2 != 0) {
          iVar2 = g_strcmp0(iVar4,iVar8);
          uVar3 = 2;
          if (iVar2 != 0) {
            iVar2 = g_strcmp0(iVar4,iVar9);
            uVar3 = 4;
            if (iVar2 != 0) {
              iVar2 = g_strcmp0(iVar4,DAT_45e9ba48 + 0x45e9b85e);
              uVar3 = 0x20;
              if (iVar2 != 0) {
                iVar2 = g_strcmp0(iVar4,DAT_45e9ba4c + 0x45e9b86e);
                uVar3 = 0x10;
                if (iVar2 != 0) {
                  iVar2 = g_strcmp0(iVar4,DAT_45e9ba50 + 0x45e9b87e);
                  uVar3 = 0x40;
                  if (iVar2 != 0) {
                    iVar2 = g_strcmp0(iVar4,DAT_45e9ba54 + 0x45e9b88e);
                    uVar3 = 0x80;
                    if (iVar2 != 0) {
                      iVar2 = g_strcmp0(iVar4,DAT_45e9ba58 + 0x45e9b89e);
                      uVar3 = 0x100;
                      if (iVar2 != 0) {
                        iVar2 = g_strcmp0(iVar4,DAT_45e9ba5c + 0x45e9b8b0);
                        uVar3 = 0x200;
                        if (iVar2 != 0) {
                          iVar2 = g_strcmp0(iVar4,DAT_45e9ba60 + 0x45e9b8c2);
                          uVar3 = 0x400;
                          if (iVar2 != 0) {
                            iVar2 = g_strcmp0(iVar4,DAT_45e9ba64 + 0x45e9b8d4);
                            uVar3 = 0x800;
                            if (iVar2 != 0) {
                              iVar2 = g_strcmp0(iVar4,DAT_45e9ba68 + 0x45e9b8e6);
                              uVar3 = 0x2000;
                              if (iVar2 != 0) {
                                iVar2 = g_strcmp0(iVar4,DAT_45e9ba6c + 0x45e9b8f8);
                                uVar3 = 0x10000000;
                                if (iVar2 != 0) {
                                  iVar2 = g_strcmp0(iVar4,DAT_45e9ba70 + 0x45e9b90a);
                                  uVar3 = 0x20000000;
                                  if (iVar2 != 0) {
                                    iVar2 = g_strcmp0(iVar4,DAT_45e9ba74 + 0x45e9b91c);
                                    uVar3 = 0x4000;
                                    if (iVar2 != 0) {
                                      iVar2 = g_strcmp0(iVar4,DAT_45e9ba78 + 0x45e9b930);
                                      uVar3 = 0x8000;
                                      if (iVar2 != 0) {
                                        iVar2 = g_strcmp0(iVar4,DAT_45e9ba7c + 0x45e9b944);
                                        uVar3 = 0x8000000;
                                        if (iVar2 != 0) {
                                          iVar2 = g_strcmp0(iVar4,DAT_45e9ba80 + 0x45e9b958);
                                          uVar3 = 0x20000;
                                          if (iVar2 != 0) {
                                            iVar2 = g_strcmp0(iVar4,DAT_45e9ba84 + 0x45e9b96c);
                                            uVar3 = 8;
                                            if (iVar2 != 0) {
                                              iVar2 = g_strcmp0(iVar4,DAT_45e9ba88 + 0x45e9b97e);
                                              uVar3 = 0x40000;
                                              if (iVar2 != 0) {
                                                iVar2 = g_strcmp0(iVar4,DAT_45e9ba8c + 0x45e9b992);
                                                uVar3 = 0x10000;
                                                if (iVar2 != 0) {
                                                  iVar2 = g_strcmp0(iVar4,DAT_45e9ba90 + 0x45e9b9a6)
                                                  ;
                                                  uVar3 = 0x1000;
                                                  if (iVar2 != 0) {
                                                    iVar2 = g_strcmp0(iVar4,DAT_45e9ba94 +
                                                                            0x45e9b9ba);
                                                    uVar3 = 0x4000000;
                                                    if (iVar2 != 0) {
                                                      iVar2 = g_strcmp0(iVar4,DAT_45e9ba98 +
                                                                              0x45e9b9ce);
                                                      uVar3 = 0x80000;
                                                      if (iVar2 != 0) {
                                                        iVar2 = g_strcmp0(iVar4,DAT_45e9ba9c +
                                                                                0x45e9b9e2);
                                                        uVar3 = 0x100000;
                                                        if (iVar2 != 0) {
                                                          iVar2 = g_strcmp0(iVar4,DAT_45e9baa0 +
                                                                                  0x45e9b9f6);
                                                          uVar3 = 0x200000;
                                                          if (iVar2 != 0) {
                                                            iVar4 = g_hash_table_lookup(*(undefined4
                                                                                          *)((int)&
                                                  DAT_45e9ba6c + DAT_45e9baa4 + 2),iVar4);
                                                  if (iVar4 == 0) {
                                                    uVar5 = 0xffffffff;
                                                    break;
                                                  }
                                                  uVar3 = *(uint *)(iVar4 + 4);
                                                  if (uVar3 == 0xffffffff) {
                                                    uVar5 = 0xffffffff;
                                                    break;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        piVar6 = piVar6 + 1;
        iVar4 = *piVar6;
        uVar5 = uVar5 | uVar3;
      } while (iVar4 != 0);
    }
    g_strfreev(piVar1);
  }
  return uVar5;
}

