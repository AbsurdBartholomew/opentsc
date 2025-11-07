// STATUS: NOT STARTED

#include "StringBuffer.h"

static void localConvertToASCII(char *out, c16 *in) {
  char cVar1;
  short sVar2;
  
  sVar2 = *in;
  while (sVar2 != 0) {
    cVar1 = *(char *)in;
    in = in + 1;
    *out = cVar1;
    out = out + 1;
    sVar2 = *in;
  }
  *out = '\0';
  return;
}

StringBuffer* StringBuffer::StringBuffer(char *mem, unsigned int capacity) {
  this->fMem = mem;
  this->fCapacity = capacity;
  erase__12StringBuffer(this);
  return this;
}

int StringBuffer::capacity() {
  return this->fCapacity;
}

int StringBuffer::length() {
  size_t sVar1;
  
  sVar1 = strlen(this->fMem);
  return (int)sVar1;
}

void StringBuffer::erase() {
  *this->fMem = '\0';
  return;
}

void StringBuffer::append(char *str, int len) {
	int myLen;
	int i;
	int srcLen;
	
  bool bVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  size_t sVar5;
  int iVar6;
  long lVar7;
  
  sVar4 = (size_t)len;
  if (str == (char *)0x0) {
    return;
  }
  if ((long)sVar4 < 0) {
    sVar4 = strlen(str);
    goto LAB_00207fec;
  }
  sVar5 = 0;
  if ((long)sVar4 < 1) {
LAB_00207fe4:
    bVar1 = (long)sVar5 < (long)sVar4;
  }
  else {
    bVar1 = 0 < (long)sVar4;
    if (*str != '\0') {
      iVar2 = 1;
      while( true ) {
        sVar5 = (size_t)iVar2;
        if (((long)sVar4 <= (long)sVar5) || (str[iVar2] == '\0')) break;
        iVar2 = iVar2 + 1;
      }
      goto LAB_00207fe4;
    }
  }
  if (bVar1) {
    sVar4 = sVar5;
  }
LAB_00207fec:
  iVar2 = length__C12StringBuffer(this);
  iVar3 = capacity__C12StringBuffer(this);
  if (iVar3 <= (int)sVar4 + iVar2) {
    iVar3 = capacity__C12StringBuffer(this);
    sVar4 = (size_t)((iVar3 - iVar2) + -1);
  }
  lVar7 = 0;
  iVar3 = 0;
  if (0 < (long)sVar4) {
    do {
      iVar6 = (int)lVar7;
      iVar3 = iVar6 + 1;
      lVar7 = (long)iVar3;
      this->fMem[iVar2 + iVar6] = str[iVar6];
    } while (lVar7 < (long)sVar4);
  }
  this->fMem[iVar2 + iVar3] = '\0';
  return;
}

char* StringBuffer::c_str() {
  return this->fMem;
}

char* StringBuffer::buffer() {
  return this->fMem;
}

void StringBuffer::copy(char *str) {
  erase__12StringBuffer(this);
  append__12StringBufferPCci(this,str,-1);
  return;
}

void StringBuffer::copy(StringBuffer &other) {
  erase__12StringBuffer(this);
  append__12StringBufferRC12StringBufferi(this,other,-1);
  return;
}

void StringBuffer::append(StringBuffer &other, int len) {
  char *str;
  
  str = c_str__C12StringBuffer(other);
  append__12StringBufferPCci(this,str,len);
  return;
}

int StringBuffer::compare(StringBuffer &other) {
  char *__s1;
  char *__s2;
  int iVar1;
  
  __s1 = c_str__C12StringBuffer(this);
  __s2 = c_str__C12StringBuffer(other);
  iVar1 = strcmp(__s1,__s2);
  return iVar1;
}

int StringBuffer::compareNoCase(StringBuffer &other) {
  char *s2;
  int iVar1;
  
  s2 = c_str__C12StringBuffer(other);
  iVar1 = length__C12StringBuffer(other);
  iVar1 = compareNoCase__C12StringBufferPCci(this,s2,iVar1);
  return iVar1;
}

int StringBuffer::compareNoCase(char *s2, int s2_len) {
	char *s1;
	int len1;
	int len;
	int i;
	char c1;
	char c2;
	int diff;
	
  char cVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  pcVar3 = c_str__C12StringBuffer(this);
  iVar4 = length__C12StringBuffer(this);
  iVar8 = s2_len;
  if (iVar4 <= s2_len) {
    iVar8 = iVar4;
  }
  iVar7 = 0;
  if (0 < iVar8) {
    do {
      cVar1 = *pcVar3;
      iVar6 = (int)cVar1;
      cVar2 = *s2;
      iVar5 = (int)cVar2;
      if ((int)cVar1 - 0x41U < 0x1a) {
        iVar6 = (cVar1 + 0x20) * 0x1000000 >> 0x18;
      }
      if ((int)cVar2 - 0x41U < 0x1a) {
        iVar5 = (cVar2 + 0x20) * 0x1000000 >> 0x18;
      }
      if (iVar6 - iVar5 != 0) {
        return iVar6 - iVar5;
      }
      iVar7 = iVar7 + 1;
      s2 = s2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (iVar7 < iVar8);
  }
  return iVar4 - s2_len;
}

char StringBuffer::charAt(int pos) {
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  if (pos < 0) {
    cVar1 = '\0';
  }
  else {
    iVar2 = length__C12StringBuffer(this);
    if (pos < iVar2) {
      pcVar3 = c_str__C12StringBuffer(this);
      cVar1 = pcVar3[pos];
    }
    else {
      cVar1 = '\0';
    }
  }
  return cVar1;
}

void StringBuffer::toLower() {
	int len;
	int i;
	
  byte bVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  iVar2 = length__C12StringBuffer(this);
  iVar4 = 0;
  if (0 < iVar2) {
    pcVar3 = this->fMem;
    while( true ) {
      bVar1 = pcVar3[iVar4];
      if (bVar1 - 0x41 < 0x1a) {
        pcVar3[iVar4] = bVar1 + 0x20;
      }
      iVar4 = iVar4 + 1;
      if (iVar2 <= iVar4) break;
      pcVar3 = this->fMem;
    }
  }
  return;
}

void StringBuffer::appendChar(char c) {
	char str[2];
	
  char str [2];
  
  str[1] = '\0';
  str[0] = c;
  append__12StringBufferPCci(this,str,-1);
  return;
}

void StringBuffer::appendNum(int num) {
	char numStr[32];
	
  char numStr [32];
  
  sprintf(numStr,"%d");
  append__12StringBufferPCci(this,numStr,-1);
  return;
}

void StringBuffer::appendNum(int num, int width) {
	char numStr[32];
	char fmtStr[32];
	
  char numStr [32];
  char fmtStr [32];
  
  sprintf(fmtStr,"%%0%dd");
  sprintf(numStr,fmtStr);
  append__12StringBufferPCci(this,numStr,-1);
  return;
}

int StringBuffer::find(char *str, int startPos) {
	int len;
	int max;
	int i;
	bool found;
	int j;
	
  bool bVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  char *pcVar5;
  long lVar6;
  
  sVar4 = strlen(str);
  iVar3 = length__C12StringBuffer(this);
  iVar3 = (iVar3 - (int)sVar4) + 1;
  if (startPos < iVar3) {
    do {
      bVar1 = true;
      pcVar5 = str;
      for (lVar6 = 0; lVar6 < (long)sVar4; lVar6 = (long)((int)lVar6 + 1)) {
        cVar2 = charAt__C12StringBufferi(this,startPos + (int)lVar6);
        if (cVar2 != *pcVar5) {
          bVar1 = false;
          break;
        }
        pcVar5 = pcVar5 + 1;
      }
      if (bVar1) {
        return startPos;
      }
      startPos = startPos + 1;
    } while (startPos < iVar3);
  }
  return -1;
}

int StringBuffer::findNoCase(char *str, int startPos) {
	int len;
	int max;
	int i;
	bool found;
	int j;
	char c1;
	char c2;
	
  char cVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  size_t sVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  
  sVar5 = strlen(str);
  iVar4 = length__C12StringBuffer(this);
  iVar4 = (iVar4 - (int)sVar5) + 1;
  if (startPos < iVar4) {
    do {
      bVar2 = true;
      lVar8 = 0;
      pcVar9 = str;
      if (0 < (long)sVar5) {
        do {
          cVar3 = charAt__C12StringBufferi(this,startPos + (int)lVar8);
          lVar7 = (long)cVar3;
          cVar1 = *pcVar9;
          lVar6 = (long)cVar1;
          if (((int)cVar3 - 0x41U & 0xff) < 0x1a) {
            lVar7 = (long)((cVar3 + 0x20) * 0x1000000 >> 0x18);
          }
          if ((int)cVar1 - 0x41U < 0x1a) {
            lVar6 = (long)((cVar1 + 0x20) * 0x1000000 >> 0x18);
          }
          lVar8 = (long)((int)lVar8 + 1);
          if (lVar7 != lVar6) {
            bVar2 = false;
            break;
          }
          pcVar9 = pcVar9 + 1;
        } while (lVar8 < (long)sVar5);
      }
      if (bVar2) {
        return startPos;
      }
      startPos = startPos + 1;
    } while (startPos < iVar4);
  }
  return -1;
}

void StringBuffer::assignDebug(c16 *str) {
  uint uVar1;
  char *out;
  
  uVar1 = wcslen__FPCUs(str);
                    /* inlined from /eor/src2/common/e_standard_heap.h */
  out = (char *)_memmanAlloc__FUiUi(uVar1 + 1,4);
                    /* end of inlined section */
  localConvertToASCII__FPcPCUs(out,str);
  copy__12StringBufferPCc(this,out);
  if (out != (char *)0x0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(out);
                    /* end of inlined section */
  }
  return;
}
