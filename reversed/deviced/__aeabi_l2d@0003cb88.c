/* deviced : __aeabi_l2d@0003cb88 */

ulonglong __aeabi_l2d(uint param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  
  if (param_1 == 0 && param_2 == 0) {
    return CONCAT44(param_2,param_1);
  }
  uVar9 = param_2 & 0x80000000;
  uVar3 = param_2;
  if ((int)uVar9 < 0) {
    bVar11 = param_1 != 0;
    param_1 = -param_1;
    uVar3 = -param_2 - (uint)bVar11;
  }
  iVar8 = 0x432;
  uVar10 = 0;
  if (uVar3 >> 0x16 != 0) {
    iVar8 = 3;
    if (uVar3 >> 0x19 != 0) {
      iVar8 = 6;
    }
    if (uVar3 >> 0x1c != 0) {
      iVar8 = iVar8 + 3;
    }
    uVar5 = iVar8 - ((int)uVar3 >> 0x1f);
    uVar10 = param_1 << (0x20 - uVar5 & 0xff);
    param_1 = param_1 >> (uVar5 & 0xff) | uVar3 << (0x20 - uVar5 & 0xff);
    uVar3 = uVar3 >> (uVar5 & 0xff);
    iVar8 = uVar5 + 0x432;
  }
  if (0xfffff < uVar3) {
    if (0x1fffff < uVar3) {
      uVar5 = uVar3 & 1;
      uVar3 = uVar3 >> 1;
      bVar1 = (byte)param_1;
      param_1 = (uint)(uVar5 != 0) << 0x1f | param_1 >> 1;
      uVar10 = (uint)(bVar1 & 1) << 0x1f | uVar10 >> 1;
      iVar8 = iVar8 + 1;
      if (0xffbfffff < (uint)(iVar8 * 0x200000)) {
        return (ulonglong)(uVar9 | 0x7ff00000) << 0x20;
      }
    }
LAB_0003c984:
    bVar11 = 0x7fffffff < uVar10;
    if (uVar10 == 0x80000000) {
      bVar11 = (param_1 & 1) != 0;
    }
    return CONCAT44(uVar3 + iVar8 * 0x100000 + (uint)CARRY4(param_1,(uint)bVar11) | uVar9,
                    param_1 + bVar11);
  }
  bVar12 = (uVar10 & 0x80000000) != 0;
  uVar10 = uVar10 << 1;
  uVar5 = param_1 * 2;
  bVar11 = CARRY4(param_1,param_1);
  param_1 = param_1 * 2 + (uint)bVar12;
  uVar3 = uVar3 * 2 + (uint)(bVar11 || CARRY4(uVar5,(uint)bVar12));
  iVar8 = iVar8 + -1;
  if ((uVar3 & 0x100000) != 0) goto LAB_0003c984;
  uVar2 = param_1;
  uVar5 = uVar3;
  if (uVar3 == 0) {
    uVar2 = 0;
    uVar5 = param_1;
  }
  iVar6 = LZCOUNT(uVar5);
  if (uVar3 == 0) {
    iVar6 = iVar6 + 0x20;
  }
  uVar7 = iVar6 - 0xb;
  bVar12 = SBORROW4(uVar7,0x20);
  uVar3 = iVar6 - 0x2b;
  bVar11 = uVar3 == 0;
  uVar4 = uVar3;
  if ((int)uVar7 < 0x20) {
    bVar12 = SCARRY4(uVar3,0xc);
    uVar4 = iVar6 - 0x1f;
    bVar11 = uVar4 == 0;
    if (!bVar11 && -0xd < (int)uVar3) {
      uVar2 = uVar5 << (uVar7 & 0xff);
      uVar5 = uVar5 >> (0xc - uVar4 & 0xff);
      goto LAB_0003c9fc;
    }
    uVar3 = uVar7;
  }
  if (bVar11 || (int)uVar4 < 0 != bVar12) {
    uVar10 = 0x20 - uVar3;
  }
  uVar5 = uVar5 << (uVar3 & 0xff);
  if (bVar11 || (int)uVar4 < 0 != bVar12) {
    uVar5 = uVar5 | uVar2 >> (uVar10 & 0xff);
    uVar2 = uVar2 << (uVar3 & 0xff);
  }
LAB_0003c9fc:
  if ((int)uVar7 <= iVar8) {
    return CONCAT44(uVar5 + (iVar8 - uVar7) * 0x100000 | uVar9,uVar2);
  }
  uVar3 = ~(iVar8 - uVar7);
  if (0x1e < (int)uVar3) {
    return CONCAT44(param_2,uVar5 >> (uVar3 - 0x1f & 0xff)) & 0x80000000ffffffff;
  }
  if (uVar3 - 0x13 == 0 || (int)(uVar3 - 0x1f) < -0xc) {
    uVar3 = uVar3 + 1;
    return CONCAT44(uVar9 | uVar5 >> (uVar3 & 0xff),
                    uVar2 >> (uVar3 & 0xff) | uVar5 << (0x20 - uVar3 & 0xff));
  }
  uVar3 = 0xc - (uVar3 - 0x13);
  return CONCAT44(param_2,uVar2 >> (0x20 - uVar3 & 0xff) | uVar5 << (uVar3 & 0xff)) &
         0x80000000ffffffff;
}

