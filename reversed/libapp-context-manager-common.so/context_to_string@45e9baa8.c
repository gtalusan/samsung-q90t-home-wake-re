/* libapp-context-manager-common.so : context_to_string@45e9baa8 */

int context_to_string(uint param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1 == 0x1000) {
    return DAT_45e9bc8c + 0x45e9bc18;
  }
  if ((int)param_1 < 0x1001) {
    if (param_1 == 0x20) {
      return DAT_45e9bc90 + 0x45e9bc1e;
    }
    if ((int)param_1 < 0x21) {
      if (param_1 == 4) {
        return DAT_45e9bc78 + 0x45e9bbfa;
      }
      if ((int)param_1 < 5) {
        if (param_1 == 1) {
          return DAT_45e9bc4c + 0x45e9bbb8;
        }
        if (param_1 == 2) {
          return DAT_45e9bc34 + 0x45e9bb66;
        }
      }
      else {
        if (param_1 == 8) {
          return DAT_45e9bc60 + 0x45e9bbd6;
        }
        if (param_1 == 0x10) {
          return DAT_45e9bc44 + 0x45e9bba6;
        }
      }
    }
    else {
      if (param_1 == 0x100) {
        return DAT_45e9bc70 + 0x45e9bbee;
      }
      if ((int)param_1 < 0x101) {
        if (param_1 == 0x40) {
          return DAT_45e9bc54 + 0x45e9bbc4;
        }
        if (param_1 == 0x80) {
          return DAT_45e9bc3c + 0x45e9bb86;
        }
      }
      else {
        if (param_1 == 0x400) {
          return DAT_45e9bc80 + 0x45e9bc06;
        }
        if (param_1 == 0x800) {
          return DAT_45e9bc58 + 0x45e9bbca;
        }
        if (param_1 == 0x200) {
          return DAT_45e9bc2c + 0x45e9bb32;
        }
      }
    }
  }
  else {
    if (param_1 == 0x80000) {
      return DAT_45e9bc48 + 0x45e9bbb2;
    }
    if ((int)param_1 < 0x80001) {
      if (param_1 == 0x8000) {
        return DAT_45e9bc6c + 0x45e9bbe8;
      }
      if ((int)param_1 < 0x8001) {
        if (param_1 == 0x2000) {
          return DAT_45e9bc50 + 0x45e9bbbe;
        }
        if (param_1 == 0x4000) {
          return DAT_45e9bc40 + 0x45e9bb98;
        }
      }
      else {
        if (param_1 == 0x20000) {
          return DAT_45e9bc88 + 0x45e9bc12;
        }
        if (param_1 == 0x40000) {
          return DAT_45e9bc68 + 0x45e9bbe2;
        }
        if (param_1 == 0x10000) {
          return DAT_45e9bc7c + 0x45e9bc00;
        }
      }
    }
    else {
      if (param_1 == 0x4000000) {
        return DAT_45e9bc74 + 0x45e9bbf4;
      }
      if ((int)param_1 < 0x4000001) {
        if (param_1 == 0x100000) {
          return DAT_45e9bc64 + 0x45e9bbdc;
        }
        if (param_1 == 0x200000) {
          return DAT_45e9bc38 + 0x45e9bb78;
        }
      }
      else {
        if (param_1 == 0x10000000) {
          return DAT_45e9bc84 + 0x45e9bc0c;
        }
        if (param_1 == 0x20000000) {
          return DAT_45e9bc5c + 0x45e9bbd0;
        }
        if (param_1 == 0x8000000) {
          return DAT_45e9bc30 + 0x45e9bb52;
        }
      }
    }
  }
  param_1 = param_1 >> 1;
  if (param_1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 1;
      param_1 = param_1 >> 1;
    } while (param_1 != 0);
  }
  iVar1 = DAT_45e9bc28 + 0x45e9bafc;
  piVar3 = *(int **)(**(int **)(DAT_45e9bc24 + 0x45e9bb62) + (iVar2 + -0x16) * 4);
  if (piVar3 != (int *)0x0) {
    iVar1 = *piVar3;
  }
  return iVar1;
}

