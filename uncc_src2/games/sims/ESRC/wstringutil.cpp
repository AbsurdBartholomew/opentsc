// STATUS: NOT STARTED

#include "wstringutil.h"

char __sprintfbuff[32] = {
	/* [0] = */ 0,
	/* [1] = */ 0,
	/* [2] = */ 0,
	/* [3] = */ 0,
	/* [4] = */ 0,
	/* [5] = */ 0,
	/* [6] = */ 0,
	/* [7] = */ 0,
	/* [8] = */ 0,
	/* [9] = */ 0,
	/* [10] = */ 0,
	/* [11] = */ 0,
	/* [12] = */ 0,
	/* [13] = */ 0,
	/* [14] = */ 0,
	/* [15] = */ 0,
	/* [16] = */ 0,
	/* [17] = */ 0,
	/* [18] = */ 0,
	/* [19] = */ 0,
	/* [20] = */ 0,
	/* [21] = */ 0,
	/* [22] = */ 0,
	/* [23] = */ 0,
	/* [24] = */ 0,
	/* [25] = */ 0,
	/* [26] = */ 0,
	/* [27] = */ 0,
	/* [28] = */ 0,
	/* [29] = */ 0,
	/* [30] = */ 0,
	/* [31] = */ 0
};

short unsigned int __floatstrbuff[32] = {
	/* [0] = */ 0,
	/* [1] = */ 0,
	/* [2] = */ 0,
	/* [3] = */ 0,
	/* [4] = */ 0,
	/* [5] = */ 0,
	/* [6] = */ 0,
	/* [7] = */ 0,
	/* [8] = */ 0,
	/* [9] = */ 0,
	/* [10] = */ 0,
	/* [11] = */ 0,
	/* [12] = */ 0,
	/* [13] = */ 0,
	/* [14] = */ 0,
	/* [15] = */ 0,
	/* [16] = */ 0,
	/* [17] = */ 0,
	/* [18] = */ 0,
	/* [19] = */ 0,
	/* [20] = */ 0,
	/* [21] = */ 0,
	/* [22] = */ 0,
	/* [23] = */ 0,
	/* [24] = */ 0,
	/* [25] = */ 0,
	/* [26] = */ 0,
	/* [27] = */ 0,
	/* [28] = */ 0,
	/* [29] = */ 0,
	/* [30] = */ 0,
	/* [31] = */ 0
};

unsigned int CatWsABToBuff(c16 *pA, c16 *pB, c16 *outBuff, unsigned int outBuffSize) {
	c16 *pOut;
	c16 *pIn;
	unsigned int i;
	
  uint uVar1;
  
  uVar1 = 0;
  if ((*pA != 0) && (outBuffSize != 1)) {
    *outBuff = *pA;
    while( true ) {
      pA = pA + 1;
      outBuff = outBuff + 1;
      uVar1 = uVar1 + 1;
      if ((*pA == 0) || (outBuffSize - 1 <= uVar1)) break;
      *outBuff = *pA;
    }
  }
  if (*pB != 0) {
    if (outBuffSize - 1 <= uVar1) {
      *outBuff = 0;
      return uVar1;
    }
    *outBuff = *pB;
    while( true ) {
      pB = pB + 1;
      outBuff = outBuff + 1;
      uVar1 = uVar1 + 1;
      if ((*pB == 0) || (outBuffSize - 1 <= uVar1)) break;
      *outBuff = *pB;
    }
  }
  *outBuff = 0;
  return uVar1;
}

unsigned int CatWsAToBuff(c16 *pA, c16 *outBuff, unsigned int outBuffSize) {
	c16 *pOut;
	c16 *pIn;
	unsigned int i;
	unsigned int copycount;
	
  short sVar1;
  short *psVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  sVar1 = *outBuff;
  psVar2 = outBuff;
  while (sVar1 != 0) {
    psVar2 = psVar2 + 1;
    uVar4 = uVar4 + 1;
    sVar1 = *psVar2;
  }
  psVar2 = outBuff + uVar4;
  uVar3 = 0;
  if (*pA != 0) {
    if (outBuffSize - 1 <= uVar4) {
      *psVar2 = 0;
      return 0;
    }
    *psVar2 = *pA;
    while( true ) {
      pA = pA + 1;
      psVar2 = psVar2 + 1;
      uVar4 = uVar4 + 1;
      uVar3 = uVar3 + 1;
      if ((*pA == 0) || (outBuffSize - 1 <= uVar4)) break;
      *psVar2 = *pA;
    }
  }
  *psVar2 = 0;
  return uVar3;
}

unsigned int FloatToWString(float fin, c16 *outBuff, unsigned int outBuffSize) {
  uint uVar1;
  
  memset(__sprintfbuff,0,0x20);
  sprintf(__sprintfbuff,"%f");
  uVar1 = CopyCharStrToWString__FPCcPUsUi(__sprintfbuff,outBuff,outBuffSize);
  return uVar1;
}

unsigned int IntToWString(int in, c16 *outBuff, unsigned int outBuffSize, int ndig) {
	int zeros;
	char szZeros[5];
	
  uint uVar1;
  char szZeros [5];
  
  uVar1 = 0;
  memset(__sprintfbuff,0,0x20);
  szZeros[0] = DAT_003b63b8;
  memset((void *)((uint)szZeros | 1),0,4);
  if (1 < ndig) {
    if (in < 10) {
      szZeros[0] = '0';
    }
    uVar1 = (uint)(in < 10);
  }
  if ((2 < ndig) && (in < 100)) {
    szZeros[uVar1] = '0';
    uVar1 = uVar1 + 1;
  }
  if ((3 < ndig) && (in < 1000)) {
    szZeros[uVar1] = '0';
    uVar1 = uVar1 + 1;
  }
  szZeros[uVar1] = '\0';
  if (szZeros[0] == '\0') {
    sprintf(__sprintfbuff,"%d");
  }
  else {
    sprintf(__sprintfbuff,"%s%d");
  }
  uVar1 = CopyCharStrToWString__FPCcPUsUi(__sprintfbuff,outBuff,outBuffSize);
  return uVar1;
}

unsigned int CopyCharStrToWString(char *szin, c16 *outBuff, unsigned int outBuffSize) {
	c16 *pOut;
	char *pIn;
	unsigned int i;
	
  char cVar1;
  uint uVar2;
  
  uVar2 = 0;
  cVar1 = *szin;
  if (*szin != '\0') {
    if (outBuffSize == 1) {
      *outBuff = 0;
      return 0;
    }
    do {
      szin = szin + 1;
      uVar2 = uVar2 + 1;
      *outBuff = (short)cVar1;
      outBuff = outBuff + 1;
      cVar1 = *szin;
      if (*szin == '\0') break;
    } while (uVar2 < outBuffSize - 1);
  }
  *outBuff = 0;
  return uVar2;
}

int wcsncmp(c16 *s1, c16 *s2, c16 count) {
	int diff;
	int i;
	
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = 0;
  uVar1 = *s1;
  while( true ) {
    uVar2 = *s2;
    iVar3 = (uint)uVar1 - (uint)uVar2;
    lVar4 = (long)((int)lVar4 + 1);
    if ((((iVar3 != 0) || (s1 = (short *)((ushort *)s1 + 1), uVar1 == 0)) ||
        (s2 = (short *)((ushort *)s2 + 1), uVar2 == 0)) || ((long)((long)count & 0xffffU) <= lVar4))
    break;
    uVar1 = *s1;
  }
  return iVar3;
}

bool SubstituteString(c16 *instr, c16 *searchString, c16 *substring, StringBufW255 &outBuff) {
	StackString2<256> buff;
	int formatLen;
	int searchLen;
	c16 lbrack;
	c16 rbrack;
	c16 ncmp;
	bool done;
	c16 *str;
	
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  StackString2_256_ buff;
  
                    /* inlined from ../MSrc/StringBuffer2.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/StringBuffer2.h */
  __13StringBuffer2PUsUi(&buff.field0_0x0,(short *)((uint)&buff | 8),0x100);
  append__13StringBuffer2PCUsi(&buff.field0_0x0,instr,-1);
                    /* end of inlined section */
  iVar3 = length__C13StringBuffer2(&buff.field0_0x0);
  uVar4 = wcslen__FPCUs(searchString);
  erase__13StringBuffer2(&outBuff->field0_0x0);
  psVar5 = c_str__C8BString2(&_sLbrack);
  uVar6 = find__C13StringBuffer2PCUsi(&buff.field0_0x0,psVar5,0);
  uVar6 = uVar6 & 0xffff;
  psVar5 = c_str__C8BString2(&_sRbrack);
  uVar7 = find__C13StringBuffer2PCUsi(&buff.field0_0x0,psVar5,0);
  uVar7 = uVar7 & 0xffff;
  if (((uVar6 == 0xffff) || (uVar7 == 0xffff)) || (bVar1 = false, uVar7 <= uVar6)) {
LAB_001ee71c:
    erase__13StringBuffer2(&outBuff->field0_0x0);
    psVar5 = c_str__C13StringBuffer2(&buff.field0_0x0);
    append__13StringBuffer2PCUsi(&outBuff->field0_0x0,psVar5,-1);
    bVar2 = false;
  }
  else {
    uVar9 = (uVar7 - uVar6) - 1 & 0xffff;
    do {
      if ((uVar9 == 0) || (uVar9 != uVar4)) {
LAB_001ee6d0:
        psVar5 = c_str__C8BString2(&_sLbrack);
        uVar6 = find__C13StringBuffer2PCUsi(&buff.field0_0x0,psVar5,uVar7 + 1);
        uVar6 = uVar6 & 0xffff;
        psVar5 = c_str__C8BString2(&_sRbrack);
        uVar7 = find__C13StringBuffer2PCUsi(&buff.field0_0x0,psVar5,uVar7 + 1);
        uVar7 = uVar7 & 0xffff;
        if (((uVar6 == 0xffff) || (uVar7 == 0xffff)) || (uVar7 <= uVar6)) goto LAB_001ee71c;
        uVar9 = (uVar7 - uVar6) - 1 & 0xffff;
      }
      else {
        psVar5 = AddrAt__13StringBuffer2i(&buff.field0_0x0,uVar6 + 1);
        iVar8 = wcsncmp__FPCUsT0Us(psVar5,searchString,(short)uVar9);
        if (iVar8 != 0) goto LAB_001ee6d0;
        if (uVar6 != 0) {
          psVar5 = c_str__C13StringBuffer2(&buff.field0_0x0);
          append__13StringBuffer2PCUsi(&outBuff->field0_0x0,psVar5,uVar6);
        }
        append__13StringBuffer2PCUsi(&outBuff->field0_0x0,substring,-1);
        bVar1 = true;
        if ((int)(uVar7 + 1) < iVar3) {
          psVar5 = AddrAt__13StringBuffer2i(&buff.field0_0x0,uVar7 + 1);
          append__13StringBuffer2PCUsi(&outBuff->field0_0x0,psVar5,-1);
          bVar1 = true;
        }
      }
      bVar2 = true;
    } while (!bVar1);
  }
  return bVar2;
}

bool SubstituteStringAll(c16 *instr, c16 *searchString, c16 *substring, BString2 &outBuff) {
	BString2 origstring;
	bool more;
	bool didreplace;
	
  bool bVar1;
  short *instr_00;
  bool bVar2;
  BString2 origstring;
  
  __8BString2PCUs(&origstring,instr);
  bVar2 = false;
  erase__8BString2UiUi(outBuff,0,0xffffffff);
  append__8BString2RC8BString2UiUi(outBuff,&origstring,0,0xffffffff);
  do {
    instr_00 = c_str__C8BString2(outBuff);
    bVar1 = SubstituteString__FPCUsN20R8BString2(instr_00,searchString,substring,outBuff);
    if (bVar2 == false) {
      bVar2 = bVar1;
    }
  } while (bVar1);
  ___8BString2(&origstring,2);
  return bVar2;
}

bool SubstituteStringAll(c16 *instr, c16 *searchString, c16 *substring, StringBufW255 &outBuff) {
	StringBufW255 origstring;
	bool more;
	bool didreplace;
	c16 *str;
	
  bool bVar1;
  short *instr_00;
  bool bVar2;
  StackString2_256_ origstring;
  
                    /* inlined from ../MSrc/StringBuffer2.h */
  bVar2 = false;
  __13StringBuffer2PUsUi(&origstring.field0_0x0,(short *)((uint)&origstring | 8),0x100);
                    /* end of inlined section */
                    /* inlined from ../MSrc/StringBuffer2.h */
  append__13StringBuffer2PCUsi(&origstring.field0_0x0,instr,-1);
                    /* end of inlined section */
  erase__13StringBuffer2(&outBuff->field0_0x0);
  append__13StringBuffer2RC13StringBuffer2i(&outBuff->field0_0x0,&origstring.field0_0x0,-1);
  do {
    instr_00 = c_str__C13StringBuffer2(&outBuff->field0_0x0);
    bVar1 = SubstituteString__FPCUsN20Rt12StackString21Ui256
                      (instr_00,searchString,substring,outBuff);
    if (bVar2 == false) {
      bVar2 = bVar1;
    }
  } while (bVar1);
  return bVar2;
}

bool SubstituteString(c16 *instr, c16 *searchString, c16 *substring, BString2 &outBuff) {
	BString2 buff;
	int formatLen;
	int searchLen;
	c16 lbrack;
	c16 rbrack;
	c16 ncmp;
	bool done;
	
  bool bVar1;
  uint uVar2;
  uint uVar3;
  short *psVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  BString2 buff;
  
  __8BString2PCUs(&buff,instr);
  uVar2 = length__C8BString2(&buff);
  uVar3 = wcslen__FPCUs(searchString);
  erase__8BString2UiUi(outBuff,0,0xffffffff);
  psVar4 = c_str__C8BString2(&_sLbrack);
  uVar5 = find__C8BString2PCUsUi(&buff,psVar4,0);
  uVar5 = uVar5 & 0xffff;
  psVar4 = c_str__C8BString2(&_sRbrack);
  uVar6 = find__C8BString2PCUsUi(&buff,psVar4,0);
  uVar6 = uVar6 & 0xffff;
  if (((uVar5 == 0xffff) || (uVar6 == 0xffff)) || (bVar1 = false, uVar6 <= uVar5)) {
LAB_001eead4:
    psVar4 = c_str__C8BString2(&buff);
    assign__8BString2PCUs(outBuff,psVar4);
    ___8BString2(&buff,2);
    bVar1 = false;
  }
  else {
    uVar8 = (uVar6 - uVar5) - 1 & 0xffff;
    do {
      if ((uVar8 == 0) || (uVar8 != uVar3)) {
LAB_001eea88:
        psVar4 = c_str__C8BString2(&_sLbrack);
        uVar5 = find__C8BString2PCUsUi(&buff,psVar4,uVar6 + 1);
        uVar5 = uVar5 & 0xffff;
        psVar4 = c_str__C8BString2(&_sRbrack);
        uVar6 = find__C8BString2PCUsUi(&buff,psVar4,uVar6 + 1);
        uVar6 = uVar6 & 0xffff;
        if (((uVar5 == 0xffff) || (uVar6 == 0xffff)) || (uVar6 <= uVar5)) goto LAB_001eead4;
        uVar8 = (uVar6 - uVar5) - 1 & 0xffff;
      }
      else {
        psVar4 = __vc__8BString2Ui(&buff,uVar5 + 1);
        iVar7 = wcsncmp__FPCUsT0Us(psVar4,searchString,(short)uVar8);
        if (iVar7 != 0) goto LAB_001eea88;
        if (uVar5 != 0) {
          psVar4 = c_str__C8BString2(&buff);
          append__8BString2PCUsUi(outBuff,psVar4,uVar5);
        }
        append__8BString2PCUs(outBuff,substring);
        bVar1 = true;
        if ((int)(uVar6 + 1) < (int)uVar2) {
          psVar4 = __vc__8BString2Ui(&buff,uVar6 + 1);
          append__8BString2PCUs(outBuff,psVar4);
          bVar1 = true;
        }
      }
    } while (!bVar1);
    ___8BString2(&buff,2);
    bVar1 = true;
  }
  return bVar1;
}

void GetTimeString(int hours, int mins, u16 *ampm, StringBufW255 &outStr) {
	StringBufW255 szTimeFormat;
	
  short *psVar1;
  int iVar2;
  short *psVar3;
  short *substring;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  int in;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  StackString2_256_ szTimeFormat;
  StringBuffer2 SStack_2b0;
  short asStack_2a8 [260];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
                    /* inlined from ../MSrc/StringBuffer2.h */
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* end of inlined section */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from ../MSrc/StringBuffer2.h */
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  __13StringBuffer2PUsUi(&szTimeFormat.field0_0x0,(short *)((uint)&szTimeFormat | 8),0x100);
                    /* end of inlined section */
  psVar1 = GetUiString__7EGlobalPCc(&_globals,"time format");
                    /* inlined from ../MSrc/StringBuffer2.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/StringBuffer2.h */
  __13StringBuffer2PUsUi(&SStack_2b0,asStack_2a8,0x100);
  append__13StringBuffer2PCUsi(&SStack_2b0,psVar1,-1);
  copy__13StringBuffer2RC13StringBuffer2(&szTimeFormat.field0_0x0,&SStack_2b0);
                    /* end of inlined section */
  psVar1 = c_str__C8BString2(&_sAM_PMLookup);
  iVar2 = find__C13StringBuffer2PCUsi(&szTimeFormat.field0_0x0,psVar1,0);
  in = hours;
  if (iVar2 != -1) {
    in = 0xc;
    if (hours % 0xc != 0) {
      in = hours % 0xc;
    }
  }
  erase__13StringBuffer2(&outStr->field0_0x0);
  __floatstrbuff[0] = 0;
  IntToWString__FiPUsUii(mins,__floatstrbuff,0x20,2);
  psVar1 = c_str__C13StringBuffer2(&szTimeFormat.field0_0x0);
  psVar3 = c_str__C8BString2(&_sMinLookup);
  SubstituteString__FPCUsN20Rt12StackString21Ui256(psVar1,psVar3,__floatstrbuff,outStr);
  __floatstrbuff[0] = 0;
  IntToWString__FiPUsUii(in,__floatstrbuff,0x20,0);
  psVar1 = c_str__C13StringBuffer2(&outStr->field0_0x0);
  psVar3 = c_str__C8BString2(&_sHoursLookup);
  SubstituteString__FPCUsN20Rt12StackString21Ui256(psVar1,psVar3,__floatstrbuff,outStr);
  psVar1 = c_str__C13StringBuffer2(&outStr->field0_0x0);
  psVar3 = c_str__C8BString2(&_sColon);
  substring = GetUiString__7EGlobalPCc(&_globals,"time seperator");
  SubstituteString__FPCUsN20Rt12StackString21Ui256(psVar1,psVar3,substring,outStr);
  psVar1 = c_str__C13StringBuffer2(&outStr->field0_0x0);
  psVar3 = c_str__C8BString2(&_sAM_PMLookup);
  SubstituteString__FPCUsN20Rt12StackString21Ui256(psVar1,psVar3,ampm,outStr);
  __floatstrbuff[0] = 0;
  return;
}

void GetMoneyString(int dollars, StringBufW255 &outStr) {
	bool bNegative;
	c16 *pMForm;
	StringBufW255 tempStr;
	short unsigned int negStr[32];
	
  int in;
  bool bVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  int iVar5;
  char *pRef;
  StackString2_256_ tempStr;
  short negStr [32];
  
  bVar1 = false;
  if (dollars < 0) {
    if (dollars < 0) {
      dollars = -dollars;
    }
    bVar1 = true;
    if (dollars < 0) {
      iVar5 = 0;
      goto LAB_001eedd0;
    }
  }
  iVar5 = 99999;
  if (dollars < 100000) {
    iVar5 = dollars;
  }
LAB_001eedd0:
  if (iVar5 < 1000) {
    pRef = "money less than 1000";
  }
  else {
    pRef = "money greater than 999";
  }
  psVar2 = GetUiString__7EGlobalPCc(&_globals,pRef);
  if (psVar2 != (short *)0x0) {
    in = iVar5 % 1000;
    __floatstrbuff[0] = 0;
    IntToWString__FiPUsUii(iVar5 / 1000,__floatstrbuff,0x20,0);
                    /* inlined from ../MSrc/StringBuffer2.h */
    __13StringBuffer2PUsUi(&tempStr.field0_0x0,(short *)((uint)&tempStr | 8),0x100);
                    /* end of inlined section */
    erase__13StringBuffer2(&tempStr.field0_0x0);
    if (bVar1) {
      CopyCharStrToWString__FPCcPUsUi("-",negStr,0x20);
      append__13StringBuffer2PCUsi(&tempStr.field0_0x0,negStr,-1);
    }
    append__13StringBuffer2PCUsi(&tempStr.field0_0x0,psVar2,-1);
    psVar2 = c_str__C13StringBuffer2(&tempStr.field0_0x0);
    psVar3 = c_str__C8BString2(&_s1000s);
    SubstituteString__FPCUsN20Rt12StackString21Ui256(psVar2,psVar3,__floatstrbuff,outStr);
    __floatstrbuff[0] = 0;
    if ((iVar5 / 1000 == 0) && (in < 100)) {
      if (in < 10) {
        IntToWString__FiPUsUii(in,__floatstrbuff,0x20,1);
      }
      else {
        IntToWString__FiPUsUii(in,__floatstrbuff,0x20,2);
      }
    }
    else {
      IntToWString__FiPUsUii(in,__floatstrbuff,0x20,3);
    }
    psVar2 = c_str__C13StringBuffer2(&outStr->field0_0x0);
    psVar3 = c_str__C8BString2(&_s100s);
    SubstituteString__FPCUsN20Rt12StackString21Ui256(psVar2,psVar3,__floatstrbuff,outStr);
    psVar2 = c_str__C13StringBuffer2(&outStr->field0_0x0);
    psVar3 = c_str__C8BString2(&_sDlrSgn);
    psVar4 = c_str__C8BString2(&_sDlrSgn);
    SubstituteString__FPCUsN20Rt12StackString21Ui256(psVar2,psVar3,psVar4,outStr);
    psVar2 = c_str__C13StringBuffer2(&outStr->field0_0x0);
    psVar3 = c_str__C8BString2(&_sComma);
    psVar4 = GetUiString__7EGlobalPCc(&_globals,"money seperator");
    SubstituteString__FPCUsN20Rt12StackString21Ui256(psVar2,psVar3,psVar4,outStr);
    __floatstrbuff[0] = 0;
  }
  return;
}

void ReplaceButtonPrompts(c16 *instr, BString2 &outStr) {
	BString2 origstring;
	StackString2<16> szReplace;
	
  short *psVar1;
  short *psVar2;
  short *psVar3;
  BString2 origstring;
  StackString2_16_ szReplace;
  
  __8BString2PCUs(&origstring,instr);
  erase__8BString2UiUi(outStr,0,0xffffffff);
  append__8BString2RC8BString2UiUi(outStr,&origstring,0,0xffffffff);
                    /* inlined from ../MSrc/StringBuffer2.h */
  __13StringBuffer2PUsUi(&szReplace.field0_0x0,szReplace.fChars,0x10);
                    /* end of inlined section */
  erase__13StringBuffer2(&szReplace.field0_0x0);
  appendChar__13StringBuffer2Us(&szReplace.field0_0x0,3);
  psVar1 = c_str__C8BString2(outStr);
  psVar2 = c_str__C8BString2(&_sXButt);
  psVar3 = c_str__C13StringBuffer2(&szReplace.field0_0x0);
  SubstituteStringAll__FPCUsN20R8BString2(psVar1,psVar2,psVar3,outStr);
  erase__13StringBuffer2(&szReplace.field0_0x0);
  appendChar__13StringBuffer2Us(&szReplace.field0_0x0,4);
  psVar1 = c_str__C8BString2(outStr);
  psVar2 = c_str__C8BString2(&_sTriButt);
  psVar3 = c_str__C13StringBuffer2(&szReplace.field0_0x0);
  SubstituteStringAll__FPCUsN20R8BString2(psVar1,psVar2,psVar3,outStr);
  erase__13StringBuffer2(&szReplace.field0_0x0);
  appendChar__13StringBuffer2Us(&szReplace.field0_0x0,5);
  psVar1 = c_str__C8BString2(outStr);
  psVar2 = c_str__C8BString2(&_sSqrButt);
  psVar3 = c_str__C13StringBuffer2(&szReplace.field0_0x0);
  SubstituteStringAll__FPCUsN20R8BString2(psVar1,psVar2,psVar3,outStr);
  erase__13StringBuffer2(&szReplace.field0_0x0);
  appendChar__13StringBuffer2Us(&szReplace.field0_0x0,6);
  psVar1 = c_str__C8BString2(outStr);
  psVar2 = c_str__C8BString2(&_sOButt);
  psVar3 = c_str__C13StringBuffer2(&szReplace.field0_0x0);
  SubstituteStringAll__FPCUsN20R8BString2(psVar1,psVar2,psVar3,outStr);
  erase__13StringBuffer2(&szReplace.field0_0x0);
  appendChar__13StringBuffer2Us(&szReplace.field0_0x0,7);
  psVar1 = c_str__C8BString2(outStr);
  psVar2 = c_str__C8BString2(&_sL1Butt);
  psVar3 = c_str__C13StringBuffer2(&szReplace.field0_0x0);
  SubstituteStringAll__FPCUsN20R8BString2(psVar1,psVar2,psVar3,outStr);
  erase__13StringBuffer2(&szReplace.field0_0x0);
  appendChar__13StringBuffer2Us(&szReplace.field0_0x0,9);
  psVar1 = c_str__C8BString2(outStr);
  psVar2 = c_str__C8BString2(&_sL2Butt);
  psVar3 = c_str__C13StringBuffer2(&szReplace.field0_0x0);
  SubstituteStringAll__FPCUsN20R8BString2(psVar1,psVar2,psVar3,outStr);
  erase__13StringBuffer2(&szReplace.field0_0x0);
  appendChar__13StringBuffer2Us(&szReplace.field0_0x0,8);
  psVar1 = c_str__C8BString2(outStr);
  psVar2 = c_str__C8BString2(&_sR1Butt);
  psVar3 = c_str__C13StringBuffer2(&szReplace.field0_0x0);
  SubstituteStringAll__FPCUsN20R8BString2(psVar1,psVar2,psVar3,outStr);
  erase__13StringBuffer2(&szReplace.field0_0x0);
  appendChar__13StringBuffer2Us(&szReplace.field0_0x0,0xe);
  psVar1 = c_str__C8BString2(outStr);
  psVar2 = c_str__C8BString2(&_sR2Butt);
  psVar3 = c_str__C13StringBuffer2(&szReplace.field0_0x0);
  SubstituteStringAll__FPCUsN20R8BString2(psVar1,psVar2,psVar3,outStr);
  ___8BString2(&origstring,2);
  return;
}

void ReplaceButtonPrompts(c16 *instr, StringBufW255 &outStr) {
	StringBufW255 origstring;
	StackString2<16> szReplace;
	c16 *str;
	
  short *psVar1;
  short *psVar2;
  short *psVar3;
  StackString2_256_ origstring;
  StackString2_16_ szReplace;
  
                    /* inlined from ../MSrc/StringBuffer2.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/StringBuffer2.h */
  __13StringBuffer2PUsUi(&origstring.field0_0x0,(short *)((uint)&origstring | 8),0x100);
  append__13StringBuffer2PCUsi(&origstring.field0_0x0,instr,-1);
                    /* end of inlined section */
  erase__13StringBuffer2(&outStr->field0_0x0);
  append__13StringBuffer2RC13StringBuffer2i(&outStr->field0_0x0,&origstring.field0_0x0,-1);
                    /* inlined from ../MSrc/StringBuffer2.h */
  __13StringBuffer2PUsUi(&szReplace.field0_0x0,szReplace.fChars,0x10);
                    /* end of inlined section */
  erase__13StringBuffer2(&szReplace.field0_0x0);
  appendChar__13StringBuffer2Us(&szReplace.field0_0x0,3);
  psVar1 = c_str__C13StringBuffer2(&outStr->field0_0x0);
  psVar2 = c_str__C8BString2(&_sXButt);
  psVar3 = c_str__C13StringBuffer2(&szReplace.field0_0x0);
  SubstituteStringAll__FPCUsN20Rt12StackString21Ui256(psVar1,psVar2,psVar3,outStr);
  erase__13StringBuffer2(&szReplace.field0_0x0);
  appendChar__13StringBuffer2Us(&szReplace.field0_0x0,4);
  psVar1 = c_str__C13StringBuffer2(&outStr->field0_0x0);
  psVar2 = c_str__C8BString2(&_sTriButt);
  psVar3 = c_str__C13StringBuffer2(&szReplace.field0_0x0);
  SubstituteStringAll__FPCUsN20Rt12StackString21Ui256(psVar1,psVar2,psVar3,outStr);
  erase__13StringBuffer2(&szReplace.field0_0x0);
  appendChar__13StringBuffer2Us(&szReplace.field0_0x0,5);
  psVar1 = c_str__C13StringBuffer2(&outStr->field0_0x0);
  psVar2 = c_str__C8BString2(&_sSqrButt);
  psVar3 = c_str__C13StringBuffer2(&szReplace.field0_0x0);
  SubstituteStringAll__FPCUsN20Rt12StackString21Ui256(psVar1,psVar2,psVar3,outStr);
  erase__13StringBuffer2(&szReplace.field0_0x0);
  appendChar__13StringBuffer2Us(&szReplace.field0_0x0,6);
  psVar1 = c_str__C13StringBuffer2(&outStr->field0_0x0);
  psVar2 = c_str__C8BString2(&_sOButt);
  psVar3 = c_str__C13StringBuffer2(&szReplace.field0_0x0);
  SubstituteStringAll__FPCUsN20Rt12StackString21Ui256(psVar1,psVar2,psVar3,outStr);
  erase__13StringBuffer2(&szReplace.field0_0x0);
  appendChar__13StringBuffer2Us(&szReplace.field0_0x0,7);
  psVar1 = c_str__C13StringBuffer2(&outStr->field0_0x0);
  psVar2 = c_str__C8BString2(&_sL1Butt);
  psVar3 = c_str__C13StringBuffer2(&szReplace.field0_0x0);
  SubstituteStringAll__FPCUsN20Rt12StackString21Ui256(psVar1,psVar2,psVar3,outStr);
  erase__13StringBuffer2(&szReplace.field0_0x0);
  appendChar__13StringBuffer2Us(&szReplace.field0_0x0,9);
  psVar1 = c_str__C13StringBuffer2(&outStr->field0_0x0);
  psVar2 = c_str__C8BString2(&_sL2Butt);
  psVar3 = c_str__C13StringBuffer2(&szReplace.field0_0x0);
  SubstituteStringAll__FPCUsN20Rt12StackString21Ui256(psVar1,psVar2,psVar3,outStr);
  erase__13StringBuffer2(&szReplace.field0_0x0);
  appendChar__13StringBuffer2Us(&szReplace.field0_0x0,8);
  psVar1 = c_str__C13StringBuffer2(&outStr->field0_0x0);
  psVar2 = c_str__C8BString2(&_sR1Butt);
  psVar3 = c_str__C13StringBuffer2(&szReplace.field0_0x0);
  SubstituteStringAll__FPCUsN20Rt12StackString21Ui256(psVar1,psVar2,psVar3,outStr);
  erase__13StringBuffer2(&szReplace.field0_0x0);
  appendChar__13StringBuffer2Us(&szReplace.field0_0x0,0xe);
  psVar1 = c_str__C13StringBuffer2(&outStr->field0_0x0);
  psVar2 = c_str__C8BString2(&_sR2Butt);
  psVar3 = c_str__C13StringBuffer2(&szReplace.field0_0x0);
  SubstituteStringAll__FPCUsN20Rt12StackString21Ui256(psVar1,psVar2,psVar3,outStr);
  return;
}
