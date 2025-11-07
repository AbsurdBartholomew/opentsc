// STATUS: NOT STARTED

#include "StringBuffer2.h"

typedef c16 charT;

static void localConvertToWide(c16 *out, __wchar_t *in) {
  short sVar1;
  int iVar2;
  
  iVar2 = *in;
  while (iVar2 != 0) {
    sVar1 = *(short *)in;
    in = in + 1;
    *out = sVar1;
    out = out + 1;
    iVar2 = *in;
  }
  *out = 0;
  return;
}

static void localConvertToWide(c16 *out, char *in) {
  byte bVar1;
  
  bVar1 = *in;
  while (bVar1 != 0) {
    bVar1 = *in;
    in = (char *)((byte *)in + 1);
    *out = (ushort)bVar1;
    out = (short *)((ushort *)out + 1);
    bVar1 = *in;
  }
  *out = 0;
  return;
}

StringBuffer2* StringBuffer2::StringBuffer2(c16 *mem, unsigned int capacity) {
  this->fMem = mem;
  this->fCapacity = capacity;
  erase__13StringBuffer2(this);
  return this;
}

int StringBuffer2::capacity() {
  return this->fCapacity;
}

int StringBuffer2::length() {
  uint uVar1;
  
  uVar1 = wcslen__FPCUs(this->fMem);
  return uVar1;
}

void StringBuffer2::erase() {
  *this->fMem = 0;
  return;
}

void StringBuffer2::append(c16 *str, int len) {
	int myLen;
	int i;
	int srcLen;
	
  short sVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  uint uVar7;
  
  if (str != (short *)0x0) {
    if (len < 0) {
      len = wcslen__FPCUs(str);
    }
    else {
      uVar5 = 0;
      if ((len < 1) || (*str == 0)) {
LAB_00207664:
        bVar2 = (int)uVar5 < len;
      }
      else {
        uVar5 = 1;
        psVar6 = str;
        while( true ) {
          bVar2 = (int)uVar5 < len;
          psVar6 = psVar6 + 1;
          if (!bVar2) break;
          if (*psVar6 == 0) goto LAB_00207664;
          uVar5 = uVar5 + 1;
        }
      }
      if (bVar2) {
        len = uVar5;
      }
    }
    iVar3 = length__C13StringBuffer2(this);
    iVar4 = capacity__C13StringBuffer2(this);
    if (iVar4 <= len + iVar3) {
      iVar4 = capacity__C13StringBuffer2(this);
      len = (iVar4 - iVar3) - 1;
    }
    uVar5 = 0;
    if (0 < len) {
      iVar4 = iVar3 << 1;
      uVar7 = len;
      do {
        uVar7 = uVar7 - 1;
        sVar1 = *str;
        str = str + 1;
        *(short *)(iVar4 + (int)this->fMem) = sVar1;
        iVar4 = iVar4 + 2;
        uVar5 = len;
      } while (uVar7 != 0);
    }
    this->fMem[iVar3 + uVar5] = 0;
  }
  return;
}

short unsigned int* StringBuffer2::c_str() {
  return this->fMem;
}

short unsigned int* StringBuffer2::buffer() {
  return this->fMem;
}

void StringBuffer2::copy(c16 *str) {
  erase__13StringBuffer2(this);
  append__13StringBuffer2PCUsi(this,str,-1);
  return;
}

void StringBuffer2::copy(StringBuffer2 &other) {
  erase__13StringBuffer2(this);
  append__13StringBuffer2RC13StringBuffer2i(this,other,-1);
  return;
}

void StringBuffer2::append(StringBuffer2 &other, int len) {
  short *str;
  
  str = c_str__C13StringBuffer2(other);
  append__13StringBuffer2PCUsi(this,str,len);
  return;
}

int StringBuffer2::compare(StringBuffer2 &other) {
  short *s1;
  short *s2;
  int iVar1;
  
  s1 = c_str__C13StringBuffer2(this);
  s2 = c_str__C13StringBuffer2(other);
  iVar1 = wcscmp__FPCUsT0(s1,s2);
  return iVar1;
}

int StringBuffer2::compareNoCase(StringBuffer2 &other) {
  short *s2;
  int iVar1;
  
  s2 = c_str__C13StringBuffer2(other);
  iVar1 = length__C13StringBuffer2(other);
  iVar1 = compareNoCase__C13StringBuffer2PCUsi(this,s2,iVar1);
  return iVar1;
}

int StringBuffer2::compareNoCase(c16 *s2, int s2_len) {
	c16 *s1;
	int len1;
	int len;
	int i;
	c16 c1;
	c16 c2;
	int diff;
	
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  puVar3 = (ushort *)c_str__C13StringBuffer2(this);
  iVar4 = length__C13StringBuffer2(this);
  iVar8 = s2_len;
  if (iVar4 <= s2_len) {
    iVar8 = iVar4;
  }
  iVar7 = 0;
  if (0 < iVar8) {
    do {
      uVar1 = *puVar3;
      uVar6 = (uint)uVar1;
      uVar2 = *s2;
      uVar5 = (uint)uVar2;
      if (uVar1 - 0x41 < 0x1a) {
        uVar6 = uVar1 + 0x20 & 0xffff;
      }
      if (uVar2 - 0x41 < 0x1a) {
        uVar5 = uVar2 + 0x20 & 0xffff;
      }
      if (uVar6 - uVar5 != 0) {
        return uVar6 - uVar5;
      }
      iVar7 = iVar7 + 1;
      s2 = (short *)((ushort *)s2 + 1);
      puVar3 = puVar3 + 1;
    } while (iVar7 < iVar8);
  }
  return iVar4 - s2_len;
}

short unsigned int StringBuffer2::charAt(int pos) {
  short sVar1;
  int iVar2;
  short *psVar3;
  
  if (pos < 0) {
    sVar1 = 0;
  }
  else {
    iVar2 = length__C13StringBuffer2(this);
    if (pos < iVar2) {
      psVar3 = c_str__C13StringBuffer2(this);
      sVar1 = psVar3[pos];
    }
    else {
      sVar1 = 0;
    }
  }
  return sVar1;
}

short unsigned int* StringBuffer2::AddrAt(int pos) {
  int iVar1;
  short *psVar2;
  
  if (pos < 0) {
    psVar2 = (short *)0x0;
  }
  else {
    iVar1 = length__C13StringBuffer2(this);
    if (pos < iVar1) {
      psVar2 = c_str__C13StringBuffer2(this);
      psVar2 = psVar2 + pos;
    }
    else {
      psVar2 = (short *)0x0;
    }
  }
  return psVar2;
}

void StringBuffer2::toLower() {
	int len;
	int i;
	
  ushort uVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  
  iVar2 = length__C13StringBuffer2(this);
  iVar4 = 0;
  if (0 < iVar2) {
    psVar3 = this->fMem;
    while( true ) {
      uVar1 = psVar3[iVar4];
      if (uVar1 - 0x41 < 0x1a) {
        psVar3[iVar4] = uVar1 + 0x20;
      }
      iVar4 = iVar4 + 1;
      if (iVar2 <= iVar4) break;
      psVar3 = this->fMem;
    }
  }
  return;
}

void StringBuffer2::appendChar(c16 c) {
	short unsigned int str[2];
	
  short str [2];
  
  str[1] = 0;
  str[0] = c;
  append__13StringBuffer2PCUsi(this,str,-1);
  return;
}

void StringBuffer2::appendNum(int num) {
	char numStr[32];
	short unsigned int numStr2[32];
	
  char numStr [32];
  short numStr2 [32];
  
  sprintf(numStr,"%d");
  localConvertToWide__FPUsPCc(numStr2,numStr);
  append__13StringBuffer2PCUsi(this,numStr2,-1);
  return;
}

void StringBuffer2::appendNum(int num, int width) {
	char numStr[32];
	char fmtStr[32];
	short unsigned int numStr2[32];
	
  char numStr [32];
  char fmtStr [32];
  short numStr2 [32];
  
  sprintf(fmtStr,"%%0%dd");
  sprintf(numStr,fmtStr);
  localConvertToWide__FPUsPCc(numStr2,numStr);
  append__13StringBuffer2PCUsi(this,numStr2,-1);
  return;
}

int StringBuffer2::find(c16 *str, int startPos) {
	int len;
	int max;
	int i;
	bool found;
	int j;
	
  bool bVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  
  uVar3 = wcslen__FPCUs(str);
  iVar4 = length__C13StringBuffer2(this);
  iVar4 = (iVar4 - uVar3) + 1;
  if (startPos < iVar4) {
    do {
      bVar1 = true;
      puVar5 = (ushort *)str;
      for (iVar6 = 0; iVar6 < (int)uVar3; iVar6 = iVar6 + 1) {
        sVar2 = charAt__C13StringBuffer2i(this,startPos + iVar6);
        if ((long)sVar2 != (ulong)*puVar5) {
          bVar1 = false;
          break;
        }
        puVar5 = puVar5 + 1;
      }
      if (bVar1) {
        return startPos;
      }
      startPos = startPos + 1;
    } while (startPos < iVar4);
  }
  return -1;
}

int StringBuffer2::findNoCase(c16 *str, int startPos) {
	int len;
	int max;
	int i;
	bool found;
	int j;
	c16 c1;
	c16 c2;
	
  ushort uVar1;
  bool bVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  ushort *puVar9;
  
  uVar4 = wcslen__FPCUs(str);
  iVar5 = length__C13StringBuffer2(this);
  iVar5 = (iVar5 - uVar4) + 1;
  if (startPos < iVar5) {
    do {
      bVar2 = true;
      iVar8 = 0;
      puVar9 = (ushort *)str;
      if (0 < (int)uVar4) {
        do {
          sVar3 = charAt__C13StringBuffer2i(this,startPos + iVar8);
          uVar7 = (ulong)sVar3;
          uVar1 = *puVar9;
          uVar6 = (ulong)uVar1;
          if ((ushort)(sVar3 - 0x41U) < 0x1a) {
            uVar7 = (ulong)(ushort)(sVar3 + 0x20);
          }
          if (uVar1 - 0x41 < 0x1a) {
            uVar6 = (long)(int)(uVar1 + 0x20) & 0xffff;
          }
          iVar8 = iVar8 + 1;
          if (uVar7 != uVar6) {
            bVar2 = false;
            break;
          }
          puVar9 = puVar9 + 1;
        } while (iVar8 < (int)uVar4);
      }
      if (bVar2) {
        return startPos;
      }
      startPos = startPos + 1;
    } while (startPos < iVar5);
  }
  return -1;
}

void StringBuffer2::assignDebug(StringBuffer &other) {
  char *str;
  
  str = c_str__C12StringBuffer(other);
  assignDebug__13StringBuffer2PCc(this,str);
  return;
}

void StringBuffer2::assignDebug(char *str) {
  short *out;
  size_t sVar1;
  
  sVar1 = strlen(str);
                    /* inlined from /eor/src2/common/e_standard_heap.h */
  out = (short *)_memmanAlloc__FUiUi(((int)sVar1 + 1) * 2,4);
                    /* end of inlined section */
  localConvertToWide__FPUsPCc(out,str);
  copy__13StringBuffer2PCUs(this,out);
  if (out != (short *)0x0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(out);
                    /* end of inlined section */
  }
  return;
}

void StringBuffer2::append(__wchar_t *str, int len) {
  short *out;
  
  if (len == -1) {
    len = wcslen__FPCw(str);
  }
                    /* inlined from /eor/src2/common/e_standard_heap.h */
  out = (short *)_memmanAlloc__FUiUi((len + 1U) * 2,4);
                    /* end of inlined section */
  localConvertToWide__FPUsPCw(out,str);
  append__13StringBuffer2PCUsi(this,out,len);
  if (out != (short *)0x0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(out);
                    /* end of inlined section */
  }
  return;
}
