/* libapp-context-manager-common.so : FUN_45e99e00@45e99e00 */

undefined4 * FUN_45e99e00(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((param_1 == (int *)0x0 || param_2 == 0) || (iVar1 = FUN_45e99dc8(param_2), iVar1 == 0)) {
    return (undefined4 *)0x0;
  }
  do {
    for (puVar3 = *(undefined4 **)(*param_1 + 0x28); puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)puVar3[1]) {
      iVar2 = cmp_bundle(*puVar3,iVar1);
      if (iVar2 != 0) {
        puVar3 = (undefined4 *)*param_1;
        if (puVar3 != (undefined4 *)0x0) {
          __dlog_print(0,3,DAT_45e99e90 + 0x45e99e72,DAT_45e99e94 + 0x45e99e76,
                       DAT_45e99e8c + 0x45e99e9f,listen_active + DAT_45e99e88,0x51c,*puVar3);
          goto LAB_45e99e40;
        }
        break;
      }
    }
    param_1 = (int *)param_1[1];
    if (param_1 == (int *)0x0) {
      puVar3 = (undefined4 *)0x0;
LAB_45e99e40:
      bundle_free(iVar1);
      return puVar3;
    }
  } while( true );
}

