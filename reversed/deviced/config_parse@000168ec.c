/* deviced : config_parse@000168ec */

void config_parse(char *param_1,code *param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  FILE *__stream;
  char *pcVar3;
  size_t sVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  char *__reject;
  char *__accept;
  undefined4 unaff_r4;
  char *__s;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  uint local_fc;
  char *local_f8;
  char *local_f4;
  char *local_f0;
  char acStack_ec [63];
  undefined1 local_ad;
  char acStack_ac [128];
  int local_2c;
  
  bVar2 = param_2 == (code *)0x0 || param_1 == (char *)0x0;
  if (bVar2) {
    unaff_r4 = 0xffffffea;
  }
  local_fc = (uint)bVar2;
  piVar7 = *(int **)(DAT_00016d78 + 0x16908 + DAT_00016d7c);
  local_2c = *piVar7;
  if (param_2 == (code *)0x0 || param_1 == (char *)0x0) {
    local_fc = 0;
  }
  else {
    __stream = fopen(param_1,(char *)(DAT_00016d90 + 0x169bc));
    if (__stream != (FILE *)0x0) {
      __reject = (char *)(DAT_00016d94 + 0x169dc);
      __s = (char *)(DAT_00016d98 + 0x169e4);
      __accept = (char *)(DAT_00016d9c + 0x169f0);
LAB_000169f0:
      do {
        do {
          pcVar3 = fgets(acStack_ac,0x80,__stream);
          if (pcVar3 == (char *)0x0) {
            __dlog_print(0,3,DAT_00016db4 + 0x16d00,DAT_00016db8 + 0x16d08,DAT_00016dac + 0x16d0b,
                         DAT_00016db0 + 0x16cf4,0x86,param_1);
            fclose(__stream);
            unaff_r4 = 0;
            goto LAB_00016990;
          }
          sVar4 = strcspn(acStack_ac,__reject);
          local_fc = local_fc + 1;
          acStack_ac[sVar4] = '\0';
          sVar4 = strspn(acStack_ac,__accept);
          pcVar9 = acStack_ac + sVar4;
          pcVar3 = (char *)__rawmemchr(pcVar9,0);
          if (pcVar9 < pcVar3) {
            do {
              pcVar5 = strchr(__s,(uint)(byte)pcVar3[-1]);
              pcVar8 = pcVar3 + -1;
              if (pcVar5 == (char *)0x0) goto LAB_00016a88;
              pcVar3 = pcVar8;
            } while (pcVar9 != pcVar8);
            pcVar3 = pcVar9;
          }
LAB_00016a88:
          *pcVar3 = '\0';
          cVar1 = acStack_ac[sVar4];
        } while (cVar1 == '#');
        if (cVar1 != '[') {
          if (cVar1 != '\0') {
            pcVar3 = strchr(pcVar9,0x3d);
            iVar6 = DAT_00016da0;
            if ((pcVar3 == (char *)0x0) || (*pcVar3 != '=')) goto LAB_00016be4;
            *pcVar3 = '\0';
            sVar4 = strspn(pcVar9,(char *)(iVar6 + 0x16ae0));
            pcVar9 = pcVar9 + sVar4;
            pcVar5 = (char *)__rawmemchr(pcVar9,0);
            if (pcVar9 < pcVar5) {
              do {
                pcVar8 = strchr((char *)(iVar6 + 0x16ae0),(uint)(byte)pcVar5[-1]);
                pcVar10 = pcVar5 + -1;
                if (pcVar8 == (char *)0x0) goto LAB_00016b2c;
                pcVar5 = pcVar10;
              } while (pcVar10 != pcVar9);
              pcVar5 = pcVar9;
            }
LAB_00016b2c:
            *pcVar5 = '\0';
            pcVar8 = (char *)(DAT_00016da4 + 0x16b44);
            sVar4 = strspn(pcVar3 + 1,pcVar8);
            pcVar5 = pcVar3 + 1 + sVar4;
            pcVar3 = (char *)__rawmemchr(pcVar5,0);
            if (pcVar5 < pcVar3) {
              do {
                pcVar10 = strchr(pcVar8,(uint)(byte)pcVar3[-1]);
                pcVar11 = pcVar3 + -1;
                if (pcVar10 == (char *)0x0) goto LAB_00016b94;
                pcVar3 = pcVar11;
              } while (pcVar11 != pcVar5);
              pcVar3 = pcVar5;
            }
LAB_00016b94:
            *pcVar3 = '\0';
            pcVar3 = strchr(pcVar5,0x23);
            iVar6 = DAT_00016da8;
            if ((pcVar3 != (char *)0x0) && (*pcVar3 == '#')) {
              *pcVar3 = '\0';
              sVar4 = strspn(pcVar5,(char *)(iVar6 + 0x16c5c));
              pcVar5 = pcVar5 + sVar4;
              pcVar3 = (char *)__rawmemchr(pcVar5,0);
              if (pcVar5 < pcVar3) {
                do {
                  pcVar8 = strchr((char *)(iVar6 + 0x16c5c),(uint)(byte)pcVar3[-1]);
                  pcVar10 = pcVar3 + -1;
                  if (pcVar8 == (char *)0x0) goto LAB_00016cb4;
                  pcVar3 = pcVar10;
                } while (pcVar10 != pcVar5);
                pcVar3 = pcVar5;
              }
LAB_00016cb4:
              *pcVar3 = '\0';
            }
            local_f8 = acStack_ec;
            local_f4 = pcVar9;
            local_f0 = pcVar5;
            iVar6 = (*param_2)(&local_f8,param_3);
            if (iVar6 < 0) goto LAB_00016be4;
          }
          goto LAB_000169f0;
        }
        pcVar3 = strchr(pcVar9,0x5d);
        if ((pcVar3 == (char *)0x0) || (*pcVar3 != ']')) goto LAB_00016be4;
        *pcVar3 = '\0';
        strncpy(acStack_ec,acStack_ac + sVar4 + 1,0x40);
        local_ad = 0;
      } while( true );
    }
    unaff_r4 = 0xfffffffb;
    __dlog_print(2,6,DAT_00016dc4 + 0x16d60,DAT_00016dc8 + 0x16d70,DAT_00016dbc + 0x16d67,
                 DAT_00016dc0 + 0x16d48,0x47,param_1);
    local_fc = 0;
  }
LAB_00016940:
  __dlog_print(2,6,DAT_00016d88 + 0x16980,DAT_00016d8c + 0x16990,DAT_00016d80 + 0x1698f,
               DAT_00016d84 + 0x16964,0x8f,param_1,local_fc);
LAB_00016990:
  if (local_2c != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(unaff_r4);
  }
  return;
LAB_00016be4:
  unaff_r4 = 0xffffffb6;
  fclose(__stream);
  goto LAB_00016940;
}

