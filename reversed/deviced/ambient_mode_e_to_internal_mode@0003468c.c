/* deviced : ambient_mode_e_to_internal_mode@0003468c */

undefined4 ambient_mode_e_to_internal_mode(undefined4 param_1)

{
  int iVar1;
  char *__file;
  
  iVar1 = DAT_00034738;
  switch(param_1) {
  case 0:
    return 1;
  case 1:
    return 2;
  case 2:
    return 3;
  case 3:
    return 4;
  default:
    __file = (char *)(DAT_00034734 + 0x346e4);
    __dlog_print(2,6,DAT_00034740 + 0x34714,DAT_0003473c + 0x3470c,DAT_00034734 + 0x3471a,
                 DAT_00034738 + 0x3496c,0x3dc,param_1);
                    /* WARNING: Subroutine does not return */
    __assert_fail((char *)((int)&DAT_00034734 + DAT_00034744),__file,0x3dd,(char *)(iVar1 + 0x3498c)
                 );
  }
}

