/* deviced : __floatundidf@0003cb78 */

ulonglong __floatundidf(uint param_1,uint param_2)

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
  bool bVar10;
  bool bVar11;
  
  if (param_1 == 0 && param_2 == 0) {
    return CONCAT44(param_2,param_1);
  }
  iVar8 = 0x432;
  uVar9 = 0;
  if (param_2 >> 0x16 != 0) {
    iVar8 = 3;
    if (param_2 >> 0x19 != 0) {
      iVar8 = 6;
    }
    if (param_2 >> 0x1c != 0) {
      iVar8 = iVar8 + 3;
    }
    uVar5 = iVar8 - ((int)param_2 >> 0x1f);
    uVar9 = param_1 << (0x20 - uVar5 & 0xff);
    param_1 = param_1 >> (uVar5 & 0xff) | param_2 << (0x20 - uVar5 & 0xff);
    param_2 = param_2 >> (uVar5 & 0xff);
    iVar8 = uVar5 + 0x432;
  }
  if (0xfffff < param_2) {
    if (0x1fffff < param_2) {
      uVar5 = param_2 & 1;
      param_2 = param_2 >> 1;
      bVar1 = (byte)param_1;
      param_1 = (uint)(uVar5 != 0) << 0x1f | param_1 >> 1;
      uVar9 = (uint)(bVar1 & 1) << 0x1f | uVar9 >> 1;
      iVar8 = iVar8 + 1;
      if (0xffbfffff < (uint)(iVar8 * 0x200000)) {
        return 0x7ff0000000000000;
      }
    }
LAB_0003c984:
    bVar10 = 0x7fffffff < uVar9;
    if (uVar9 == 0x80000000) {
      bVar10 = (param_1 & 1) != 0;
    }
    return CONCAT44(param_2 + iVar8 * 0x100000 + (uint)CARRY4(param_1,(uint)bVar10),param_1 + bVar10
                   );
  }
  bVar11 = (uVar9 & 0x80000000) != 0;
  uVar9 = uVar9 << 1;
  uVar5 = param_1 * 2;
  bVar10 = CARRY4(param_1,param_1);
  param_1 = param_1 * 2 + (uint)bVar11;
  param_2 = param_2 * 2 + (uint)(bVar10 || CARRY4(uVar5,(uint)bVar11));
  iVar8 = iVar8 + -1;
  if ((param_2 & 0x100000) != 0) goto LAB_0003c984;
  uVar2 = param_1;
  uVar5 = param_2;
  if (param_2 == 0) {
    uVar2 = 0;
    uVar5 = param_1;
  }
  iVar6 = LZCOUNT(uVar5);
  if (param_2 == 0) {
    iVar6 = iVar6 + 0x20;
  }
  uVar7 = iVar6 - 0xb;
  bVar11 = SBORROW4(uVar7,0x20);
  uVar3 = iVar6 - 0x2b;
  bVar10 = uVar3 == 0;
  uVar4 = uVar3;
  if ((int)uVar7 < 0x20) {
    bVar11 = SCARRY4(uVar3,0xc);
    uVar4 = iVar6 - 0x1f;
    bVar10 = uVar4 == 0;
    if (!bVar10 && -0xd < (int)uVar3) {
      uVar2 = uVar5 << (uVar7 & 0xff);
      uVar5 = uVar5 >> (0xc - uVar4 & 0xff);
      goto LAB_0003c9fc;
    }
    uVar3 = uVar7;
  }
  if (bVar10 || (int)uVar4 < 0 != bVar11) {
    uVar9 = 0x20 - uVar3;
  }
  uVar5 = uVar5 << (uVar3 & 0xff);
  if (bVar10 || (int)uVar4 < 0 != bVar11) {
    uVar5 = uVar5 | uVar2 >> (uVar9 & 0xff);
    uVar2 = uVar2 << (uVar3 & 0xff);
  }
LAB_0003c9fc:
  if ((int)uVar7 <= iVar8) {
    return CONCAT44(uVar5 + (iVar8 - uVar7) * 0x100000,uVar2);
  }
  uVar9 = ~(iVar8 - uVar7);
  if (0x1e < (int)uVar9) {
    return (ulonglong)(uVar5 >> (uVar9 - 0x1f & 0xff));
  }
  if (uVar9 - 0x13 == 0 || (int)(uVar9 - 0x1f) < -0xc) {
    uVar9 = uVar9 + 1;
    return CONCAT44(uVar5 >> (uVar9 & 0xff),uVar2 >> (uVar9 & 0xff) | uVar5 << (0x20 - uVar9 & 0xff)
                   );
  }
  uVar9 = 0xc - (uVar9 - 0x13);
  return (ulonglong)(uVar2 >> (0x20 - uVar9 & 0xff) | uVar5 << (uVar9 & 0xff));
}

