/* deviced : extcon_get_status@0001e098 */

undefined4 extcon_get_status(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0xffffffea;
  }
  iVar1 = find_extcon();
  if (iVar1 == 0) {
    return 0xfffffffe;
  }
  return *(undefined4 *)(iVar1 + 4);
}

