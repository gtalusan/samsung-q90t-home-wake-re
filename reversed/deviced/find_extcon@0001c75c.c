/* deviced : find_extcon@0001c75c */

undefined4 * find_extcon(char *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 == (char *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar2 = *(undefined4 **)(DAT_0001c7c8 + 0x1c778);
    while( true ) {
      if (puVar2 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
      puVar3 = (undefined4 *)*puVar2;
      if ((puVar3 == (undefined4 *)0x0) || (iVar1 = strcmp((char *)*puVar3,param_1), iVar1 == 0))
      break;
      puVar2 = (undefined4 *)puVar2[1];
    }
  }
  return puVar3;
}

