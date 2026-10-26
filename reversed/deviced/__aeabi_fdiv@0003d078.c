/* deviced : __aeabi_fdiv@0003d078 */

uint __aeabi_fdiv(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  
  uVar2 = param_1 >> 0x17 & 0xff;
  bVar8 = uVar2 == 0;
  if (!bVar8) {
    param_4 = param_2 >> 0x17 & 0xff;
    bVar8 = param_4 == 0;
  }
  if (!bVar8) {
    bVar8 = uVar2 == 0xff;
  }
  if (!bVar8) {
    bVar8 = param_4 == 0xff;
  }
  if (bVar8) {
    param_4 = param_2 >> 0x17 & 0xff;
    if (uVar2 == 0xff) {
      if ((param_1 & 0x7fffff) != 0) {
LAB_0003d06e:
        return param_1 | 0x7fc00000;
      }
      if (param_4 == 0xff) {
        param_1 = param_2;
        goto LAB_0003d06e;
      }
    }
    else {
      if (param_4 == 0xff) {
        if ((param_2 & 0x7fffff) == 0) {
LAB_0003d024:
          return (param_1 ^ param_2) & 0x80000000;
        }
        param_1 = param_2;
        goto LAB_0003d06e;
      }
      if ((param_1 & 0x7fffffff) != 0 && (param_2 & 0x7fffffff) != 0) {
        bVar8 = uVar2 == 0;
        uVar6 = param_1 & 0x80000000;
        while( true ) {
          if (bVar8) {
            param_1 = param_1 << 1;
            bVar8 = (param_1 & 0x800000) == 0;
          }
          if (!bVar8) break;
          uVar2 = uVar2 - 1;
        }
        param_1 = param_1 | uVar6;
        bVar8 = param_4 == 0;
        uVar6 = param_2 & 0x80000000;
        while( true ) {
          if (bVar8) {
            param_2 = param_2 << 1;
            bVar8 = (param_2 & 0x800000) == 0;
          }
          if (!bVar8) break;
          param_4 = param_4 - 1;
        }
        param_2 = param_2 | uVar6;
        goto LAB_0003d090;
      }
      if ((param_1 & 0x7fffffff) == 0) {
        if ((param_2 & 0x7fffffff) != 0) goto LAB_0003d024;
        goto LAB_0003d06e;
      }
    }
    param_1 = param_1 ^ param_2;
  }
  else {
LAB_0003d090:
    iVar3 = uVar2 - param_4;
    if ((param_2 & 0x7fffff) == 0) {
      param_1 = (param_1 ^ param_2) & 0x80000000 | param_1 & 0x7fffff;
      bVar9 = SCARRY4(iVar3,0x7f);
      iVar5 = iVar3 + 0x7f;
      bVar8 = iVar5 == 0;
      iVar7 = iVar5;
      if (!bVar8 && -0x80 < iVar3) {
        bVar9 = SBORROW4(0xff,iVar5);
        iVar7 = -iVar5 + 0xff;
        bVar8 = -iVar5 == -0xff;
      }
      if (!bVar8 && iVar7 < 0 == bVar9) {
        return param_1 | iVar5 * 0x800000;
      }
      param_1 = param_1 | 0x800000;
      uVar6 = 0;
      bVar9 = SBORROW4(iVar5,1);
      uVar4 = iVar3 + 0x7e;
      bVar8 = uVar4 == 0;
      uVar2 = uVar4;
    }
    else {
      uVar1 = (param_2 & 0x7fffff) << 5 | 0x10000000;
      uVar6 = (param_1 & 0x7fffff) << 5 | 0x10000000;
      param_1 = (param_1 ^ param_2) & 0x80000000;
      bVar8 = uVar1 <= uVar6;
      if (!bVar8) {
        uVar6 = uVar6 << 1;
      }
      uVar4 = iVar3 + 0x7d + (uint)bVar8;
      uVar2 = 0x800000;
      do {
        if (uVar1 <= uVar6) {
          uVar6 = uVar6 - uVar1;
          param_1 = param_1 | uVar2;
        }
        if (uVar1 >> 1 <= uVar6) {
          uVar6 = uVar6 - (uVar1 >> 1);
          param_1 = param_1 | uVar2 >> 1;
        }
        if (uVar1 >> 2 <= uVar6) {
          uVar6 = uVar6 - (uVar1 >> 2);
          param_1 = param_1 | uVar2 >> 2;
        }
        if (uVar1 >> 3 <= uVar6) {
          uVar6 = uVar6 - (uVar1 >> 3);
          param_1 = param_1 | uVar2 >> 3;
        }
        uVar6 = uVar6 * 0x10;
        bVar8 = uVar6 == 0;
        if (!bVar8) {
          uVar2 = uVar2 >> 4;
          bVar8 = uVar2 == 0;
        }
      } while (!bVar8);
      bVar9 = SBORROW4(uVar4,0xfd);
      bVar8 = uVar4 == 0xfd;
      uVar2 = uVar4 - 0xfd;
      if (uVar4 < 0xfe) {
        param_1 = param_1 + uVar4 * 0x800000 + (uint)(uVar1 <= uVar6);
        if (uVar6 == uVar1) {
          param_1 = param_1 & 0xfffffffe;
        }
        return param_1;
      }
    }
    if (bVar8 || (int)uVar2 < 0 != bVar9) {
      if ((int)uVar4 < -0x18) {
        return param_1 & 0x80000000;
      }
      uVar2 = (param_1 << 1) >> (-uVar4 & 0xff);
      uVar4 = param_1 << (uVar4 + 0x20 & 0xff);
      uVar2 = ((uint)((param_1 & 0x80000000) != 0) << 0x1f | uVar2 >> 1) + (uint)((byte)uVar2 & 1);
      if (uVar6 == 0 && (uVar4 & 0x7fffffff) == 0) {
        uVar2 = uVar2 & ~(uVar4 >> 0x1f);
      }
      return uVar2;
    }
  }
  return param_1 & 0x80000000 | 0x7f800000;
}

