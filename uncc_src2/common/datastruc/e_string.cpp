// STATUS: NOT STARTED

#include "e_string.h"

char _estringNull[1] = {
	/* [0] = */ 0
};

char _estringError[8] = {
	/* [0] = */ 60,
	/* [1] = */ 101,
	/* [2] = */ 114,
	/* [3] = */ 114,
	/* [4] = */ 111,
	/* [5] = */ 114,
	/* [6] = */ 62,
	/* [7] = */ 0
};

EString* EString::EString(char c) {
	char szBuffer[2];
	
  char szBuffer [2];
  
  szBuffer[1] = '\0';
  szBuffer[0] = c;
  MakeCopy__7EStringPCc(this,szBuffer);
  return this;
}

EString* EString::EString(char *szSource1, char *szSource2) {
	int len1;
	int len2;
	int len;
	char *pData;
	
  char *pDest;
  size_t sVar1;
  size_t sVar2;
  int iVar3;
  uint nBytes;
  
  sVar1 = strlen(szSource1);
  sVar2 = strlen(szSource2);
  nBytes = (uint)sVar1;
  iVar3 = nBytes + (int)sVar2;
  if (iVar3 == 0) {
    SetToNull__7EString(this);
  }
  else {
    pDest = (char *)_memmanAlloc__FUiUi(iVar3 + 1,4);
    if (pDest == (char *)0x0) {
      SetToError__7EString(this);
    }
    else {
      memcpy(pDest,szSource1,nBytes);
      memcpy(pDest + nBytes,szSource2,(int)sVar2 + 1);
      this->m_p = pDest;
    }
  }
  return this;
}

void EString::SetToNull() {
  this->m_p = _estringNull;
  return;
}

void EString::SetToError() {
  this->m_p = _estringError;
  return;
}

void EString::Deallocate(char *p) {
  if ((p != _estringNull) && (p != _estringError)) {
    _memmanFree__FPv(p);
  }
  return;
}

int EString::Tokenize(char sep, TArray<EString> &tokens) {
	int sindex;
	int stcount;
	int sizeT;
	EString token;
	EString *this;
	TArray<EString> *this;
	TArray<EString> *this;
	EArray *this;
	TArray<EString> *this;
	TArray<EString> *this;
	
  int iVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  EString token;
  EString local_c0 [4];
  int sindex;
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
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
                    /* end of inlined section */
  if (*this->m_p == '\0') {
    iVar2 = 0;
  }
  else {
    sindex = 0;
    sVar3 = strlen(this->m_p);
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
    SetToNull__7EString(&token);
                    /* end of inlined section */
    iVar4 = 0;
    do {
      iVar2 = iVar4;
      GetNextToken__7EStringRiic(local_c0,(int *)this,(int)&sindex,(char)sVar3);
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
      __as__7EStringPCc(&token,local_c0[0].m_p);
      Deallocate__7EStringPc(local_c0,local_c0[0].m_p);
      iVar4 = (tokens->field0_0x0).m_size;
      Insert__6EArrayii(&tokens->field0_0x0,iVar4,1);
      iVar4 = iVar4 * 4;
      SetToNull__7EString((EString *)((int)(tokens->field0_0x0).m_p + iVar4));
      __as__7EStringPCc((EString *)((int)(tokens->field0_0x0).m_p + iVar4),token.m_p);
      iVar1 = Compare__C7EStringPCc(&token,"");
                    /* end of inlined section */
      iVar4 = iVar2 + 1;
    } while (iVar1 != 0);
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
    Deallocate__7EStringPc(&token,token.m_p);
                    /* end of inlined section */
  }
  return iVar2;
}

int EString::GetLine(FILE *stream) {
	int cChars;
	int nread;
	char szTmp[1024];
	char c;
	
  uint uVar1;
  char *p;
  int iVar2;
  int iVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  char local_481;
  char szTmp [1024];
  char c;
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
  
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  iVar2 = 0;
  while( true ) {
    iVar3 = iVar2;
    uVar1 = fread(&c,1,1,stream);
    if ((uVar1 == 0) || (c == '\n')) break;
    szTmp[iVar3] = c;
    iVar2 = iVar3 + 1;
    if (uVar1 != 1) {
LAB_0031af28:
      iVar2 = iVar3 + 1;
      if (iVar2 < 2) {
        p = this->m_p;
        iVar3 = iVar2;
      }
      else if (szTmp[iVar3 + -1] == '\r') {
        szTmp[iVar3 + -1] = '\0';
        p = this->m_p;
      }
      else {
        p = this->m_p;
        iVar3 = iVar2;
      }
      Deallocate__7EStringPc(this,p);
      MakeCopy__7EStringPCc(this,szTmp);
      return iVar3 + -1;
    }
  }
  szTmp[iVar3] = '\0';
  goto LAB_0031af28;
}

EString EString::GetNextToken(int &sindex, int sizeT, char separator) {
	char *pData;
	int iStart;
	int cSize;
	char szTmp[1024];
	EString *this;
	EString *this;
	EString *this;
	EString *this;
	
  char cVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  char in_t0_lo;
  long lVar5;
  int iVar6;
  uint nBytes;
  char szTmp [1024];
  
  lVar5 = (long)(int)in_t0_lo;
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
                    /* end of inlined section */
  if (((*(char *)*sindex != '\0') && (lVar5 != 0)) &&
     (pcVar4 = (char *)*sindex + *(int *)sizeT, (long)*(int *)sizeT < (long)separator)) {
    do {
                    /* end of inlined section */
      lVar3 = (long)*pcVar4;
      if ((lVar3 != lVar5) || (lVar5 == 0)) goto LAB_0031b008;
      *(int *)sizeT = *(int *)sizeT + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    lVar3 = (long)*pcVar4;
LAB_0031b008:
    iVar2 = *(int *)sizeT;
    if (lVar3 != 0) {
      while( true ) {
        if (*pcVar4 == lVar5) {
          iVar6 = *(int *)sizeT;
          goto LAB_0031b058;
        }
        if ((long)*pcVar4 == 0) break;
        *(int *)sizeT = *(int *)sizeT + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        if (cVar1 == '\0') {
          iVar6 = *(int *)sizeT;
LAB_0031b058:
          nBytes = iVar6 - iVar2;
          memcpy(szTmp,(void *)(*sindex + iVar2),nBytes);
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
                    /* end of inlined section */
          szTmp[nBytes] = '\0';
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
          MakeCopy__7EStringPCc(this,szTmp);
          return (EString)(char *)this;
                    /* end of inlined section */
        }
      }
      iVar6 = *(int *)sizeT;
      goto LAB_0031b058;
    }
  }
  MakeCopy__7EStringPCc(this,"");
  return (EString)(char *)this;
                    /* end of inlined section */
}

void EString::MakeCopy(char *szSource) {
	int len;
	int allocSize;
	char *pData;
	
  char *pDest;
  size_t sVar1;
  uint size;
  
  if (szSource == (char *)0x0) {
    sVar1 = 0;
  }
  else {
    sVar1 = strlen(szSource);
  }
  size = (int)sVar1 + 1;
  if (sVar1 == 0) {
    SetToNull__7EString(this);
  }
  else {
    pDest = (char *)_memmanAlloc__FUiUi(size,4);
    if (pDest == (char *)0x0) {
      SetToError__7EString(this);
    }
    else {
      memcpy(pDest,szSource,size);
      this->m_p = pDest;
    }
  }
  return;
}

EString& EString::operator=(char *szSource) {
	char *pOld;
	
  char *p;
  
  p = this->m_p;
  MakeCopy__7EStringPCc(this,szSource);
  Deallocate__7EStringPc(this,p);
  return this;
}

int EString::GetLength() {
  size_t sVar1;
  
  sVar1 = strlen(this->m_p);
  return (int)sVar1;
}

EString& EString::MakeUpper() {
	char *c;
	
  byte *pbVar1;
  
  for (pbVar1 = (byte *)this->m_p; *pbVar1 != 0; pbVar1 = pbVar1 + 1) {
    if (*pbVar1 - 0x61 < 0x1a) {
      *pbVar1 = *pbVar1 - 0x20;
    }
  }
  return this;
}

EString& EString::MakeLower() {
	char *c;
	
  byte *pbVar1;
  
  for (pbVar1 = (byte *)this->m_p; *pbVar1 != 0; pbVar1 = pbVar1 + 1) {
    if (*pbVar1 - 0x41 < 0x1a) {
      *pbVar1 = *pbVar1 + 0x20;
    }
  }
  return this;
}

bool EString::Allocate(int size, bool SetToErrorStringIfFailed) {
	int oldSize;
	char *pNew;
	
  int iVar1;
  char *pDest;
  
  if (size == 0) {
    Empty__7EString(this);
  }
  else {
    iVar1 = GetLength__C7EString(this);
    if (iVar1 < size) {
      pDest = (char *)_memmanAlloc__FUiUi(size + 1,4);
      if (pDest == (char *)0x0) {
        if (SetToErrorStringIfFailed) {
          Deallocate__7EStringPc(this,this->m_p);
          SetToError__7EString(this);
          return false;
        }
        return false;
      }
      memcpy(pDest,this->m_p,iVar1 + 1);
      Deallocate__7EStringPc(this,this->m_p);
      this->m_p = pDest;
    }
  }
  return true;
}

void EString::Empty() {
  Deallocate__7EStringPc(this,this->m_p);
  SetToNull__7EString(this);
  return;
}

int EString::Compare(char *szOther) {
	char *a;
	char *b;
	
  char *pcVar1;
  char cVar2;
  
  pcVar1 = this->m_p;
  do {
    cVar2 = *pcVar1;
    while( true ) {
      if (cVar2 < *szOther) {
        return -1;
      }
      pcVar1 = pcVar1 + 1;
      if (*szOther < cVar2) {
        return 1;
      }
      szOther = szOther + 1;
      if (*pcVar1 != '\0') break;
      if (*szOther == '\0') {
        return 0;
      }
      cVar2 = *pcVar1;
    }
  } while( true );
}

int EString::CompareNoCase(char *szOther) {
	char *a;
	char *b;
	char au;
	char bu;
	
  char cVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  
  pcVar3 = this->m_p;
  do {
    cVar1 = *pcVar3;
    while( true ) {
      lVar4 = (long)cVar1;
      if ((int)cVar1 - 0x61U < 0x1a) {
        lVar4 = (long)((cVar1 + -0x20) * 0x1000000 >> 0x18);
      }
      cVar1 = *szOther;
      lVar2 = (long)cVar1;
      if ((int)cVar1 - 0x61U < 0x1a) {
        lVar2 = (long)((cVar1 + -0x20) * 0x1000000 >> 0x18);
      }
      if (lVar4 < lVar2) {
        return -1;
      }
      pcVar3 = pcVar3 + 1;
      if (lVar2 < lVar4) {
        return 1;
      }
      szOther = szOther + 1;
      if (*pcVar3 != '\0') break;
      if (*szOther == '\0') {
        return 0;
      }
      cVar1 = *pcVar3;
    }
  } while( true );
}

int EString::CompareSymbol(char *szOther) {
	char *a;
	char *b;
	char au;
	char bu;
	
  char cVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  pcVar3 = this->m_p;
LAB_0031b3f0:
  cVar1 = *pcVar3;
  do {
    lVar6 = (long)cVar1;
    iVar4 = (int)cVar1;
    if (iVar4 - 0x61U < 0x1a) {
      lVar6 = (long)((iVar4 + -0x20) * 0x1000000 >> 0x18);
LAB_0031b43c:
      cVar1 = *szOther;
    }
    else {
      if (0x19 < (iVar4 - 0x41U & 0xff)) {
        lVar5 = 0x5f;
        if (lVar6 == 0) {
          lVar5 = lVar6;
        }
        if (9 < (iVar4 - 0x30U & 0xff)) {
          lVar6 = lVar5;
        }
        goto LAB_0031b43c;
      }
      cVar1 = *szOther;
    }
    lVar5 = (long)cVar1;
    iVar4 = (int)cVar1;
    if (iVar4 - 0x61U < 0x1a) {
      lVar5 = (long)((iVar4 + -0x20) * 0x1000000 >> 0x18);
    }
    else if (0x19 < (iVar4 - 0x41U & 0xff)) {
      lVar2 = 0x5f;
      if (lVar5 == 0) {
        lVar2 = lVar5;
      }
      if (9 < (iVar4 - 0x30U & 0xff)) {
        lVar5 = lVar2;
      }
    }
    if (lVar6 < lVar5) {
      return -1;
    }
    pcVar3 = pcVar3 + 1;
    if (lVar5 < lVar6) {
      return 1;
    }
    szOther = szOther + 1;
    if (*pcVar3 != '\0') goto LAB_0031b3f0;
    if (*szOther == '\0') {
      return 0;
    }
    cVar1 = *pcVar3;
  } while( true );
}

EString EString::Mid(int pos) {
	EString *this;
	
  int in_a2_lo;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
  MakeCopy__7EStringPCc(this,(char *)(*(int *)pos + in_a2_lo));
                    /* end of inlined section */
  return (EString)(char *)this;
}

EString EString::Left(int count) {
	EString t;
	int pos;
	EString *this;
	
  char *pcVar1;
  int in_a2_lo;
  EString t;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
  pcVar1 = __opPc__C7EString((EString *)count);
  MakeCopy__7EStringPCc(&t,pcVar1);
  t.m_p[in_a2_lo] = '\0';
  pcVar1 = __opPc__C7EString(&t);
  MakeCopy__7EStringPCc(this,pcVar1);
  Deallocate__7EStringPc(&t,t.m_p);
                    /* end of inlined section */
  return (EString)(char *)this;
}

EString EString::Right(int count) {
	EString *this;
	
  int iVar1;
  int in_a2_lo;
  
  iVar1 = GetLength__C7EString((EString *)count);
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
  MakeCopy__7EStringPCc(this,(char *)(*(int *)count + (iVar1 - in_a2_lo)));
                    /* end of inlined section */
  return (EString)(char *)this;
}

EString& EString::operator+=(char *sz) {
	EString t;
	EString *this;
	char *sz;
	EString *this;
	EString *this;
	
  EString t;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
  __7EStringPCcT1(&t,this->m_p,sz);
  __as__7EStringPCc(this,t.m_p);
  Deallocate__7EStringPc(&t,t.m_p);
                    /* end of inlined section */
  return this;
}

EString EString::operator+(char c) {
	char cb[2];
	
  char cb [2];
  
  cb[1] = '\0';
  __7EStringPCcT1(this,*(char **)(int)c,cb);
  return (EString)(char *)this;
}

EString& EString::operator+=(char c) {
	EString t;
	EString *this;
	
  EString t;
  
  __pl__C7EStringc(&t,(char)this);
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
  __as__7EStringPCc(this,t.m_p);
  Deallocate__7EStringPc(&t,t.m_p);
                    /* end of inlined section */
  return this;
}

int EString::Find(char c) {
	int i;
	char *pc;
	
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = this->m_p;
  iVar3 = 0;
  while( true ) {
    cVar1 = *pcVar2;
    if (*pcVar2 == '\0') {
      return -1;
    }
    pcVar2 = pcVar2 + 1;
    if (cVar1 == c) break;
    iVar3 = iVar3 + 1;
  }
  return iVar3;
}

int EString::Find(char *szString) {
	int searchLen;
	int last;
	int i;
	bool match;
	int j;
	
  bool bVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  int iVar5;
  
  sVar3 = strlen(szString);
  iVar2 = GetLength__C7EString(this);
  iVar2 = iVar2 - (int)sVar3;
  iVar5 = 0;
  if (-1 < iVar2) {
    do {
      bVar1 = true;
      if (0 < (long)sVar3) {
        if (this->m_p[iVar5] == *szString) {
          for (iVar4 = 1; (long)iVar4 < (long)sVar3; iVar4 = iVar4 + 1) {
            if (this->m_p[iVar5 + iVar4] != szString[iVar4]) {
              bVar1 = false;
              break;
            }
          }
        }
        else {
          bVar1 = false;
        }
      }
      if (bVar1) {
        return iVar5;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 <= iVar2);
  }
  return -1;
}

bool EString::Replace(char *szOldString, char *szNewString) {
	int pos;
	char *sz;
	EString *this;
	
  int iVar1;
  size_t sVar2;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  EString local_90 [4];
  EString local_80 [4];
  EString local_70 [4];
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
  
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_20 = (undefined4)unaff_s4;
  uStack_1c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  iVar1 = Find__C7EStringPCc(this,szOldString);
  if (iVar1 != -1) {
    Left__C7EStringi(local_70,(int)this);
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
    __7EStringPCcT1(local_80,local_70[0].m_p,szNewString);
                    /* end of inlined section */
    sVar2 = strlen(szOldString);
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
    __7EStringPCcT1(local_90,local_80[0].m_p,this->m_p + iVar1 + (int)sVar2);
    __as__7EStringPCc(this,local_90[0].m_p);
    Deallocate__7EStringPc(local_90,local_90[0].m_p);
    Deallocate__7EStringPc(local_80,local_80[0].m_p);
    Deallocate__7EStringPc(local_70,local_70[0].m_p);
                    /* end of inlined section */
  }
  return iVar1 != -1;
}

int EString::FindReverse(char c) {
	int i;
	char *pc;
	
  int iVar1;
  char *pcVar2;
  
  iVar1 = GetLength__C7EString(this);
  iVar1 = iVar1 + -1;
  pcVar2 = this->m_p + iVar1;
  while( true ) {
    if (iVar1 < 0) {
      return -1;
    }
    if ((long)*pcVar2 == (long)(int)c) break;
    iVar1 = iVar1 + -1;
    pcVar2 = pcVar2 + -1;
  }
  return iVar1;
}

EString& EString::Convert(float value) {
	char buffer[40];
	
  char buffer [40];
  
  sprintf(buffer,"%f");
  __as__7EStringPCc(this,buffer);
  return this;
}

EString& EString::Convert(int value) {
	char buffer[40];
	
  char buffer [40];
  
  sprintf(buffer,"%d");
  __as__7EStringPCc(this,buffer);
  return this;
}

void EString::Replace(char oldChar, char newChar) {
	char *szThis;
	
  char cVar1;
  char cVar2;
  char *pcVar3;
  
  pcVar3 = this->m_p;
  cVar2 = *pcVar3;
  cVar1 = *pcVar3;
  while (cVar1 != '\0') {
    if (cVar2 == oldChar) {
      *pcVar3 = newChar;
    }
    pcVar3 = pcVar3 + 1;
    cVar2 = *pcVar3;
    cVar1 = *pcVar3;
  }
  return;
}

void EString::Remove(char c) {
	EString temp;
	char *szTemp;
	char *szThis;
	EString &sSource;
	EString *this;
	
  char cVar1;
  char *pcVar2;
  EString EVar3;
  EString temp;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
  pcVar2 = __opPc__C7EString(this);
  MakeCopy__7EStringPCc(&temp,pcVar2);
                    /* end of inlined section */
  pcVar2 = this->m_p;
  EVar3 = temp;
                    /* end of inlined section */
  while (cVar1 = *pcVar2, *pcVar2 != '\0') {
    pcVar2 = pcVar2 + 1;
    if (cVar1 != c) {
      *EVar3.m_p = cVar1;
      EVar3.m_p = EVar3.m_p + 1;
    }
  }
  *EVar3.m_p = '\0';
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
  __as__7EStringPCc(this,temp.m_p);
  Deallocate__7EStringPc(&temp,temp.m_p);
  return;
}

EString operator+(char c, EString &s) {
	char cb[2];
	
  char **in_a2_lo;
  char cb [2];
  
  cb[0] = (char)s;
  cb[1] = '\0';
  __7EStringPCcT1((EString *)(int)c,cb,*in_a2_lo);
  return (char *)(int)c;
}

EStream& operator<<(EStream &s, EString &d) {
  WriteString__7EStreamPCc(s,d->m_p);
  return s;
}

EStream& operator>>(EStream &s, EString &d) {
	char szBuffer[1024];
	
  char szBuffer [1024];
  
  ReadString__7EStreamPci(s,szBuffer,0x400);
  __as__7EStringPCc(d,szBuffer);
  return s;
}

void EString::FixTrailingSlash() {
	int len;
	EString *this;
	
  int iVar1;
  
  iVar1 = GetLength__C7EString(this);
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
                    /* end of inlined section */
  if ((iVar1 != 0) && (this->m_p[iVar1 + -1] != '\\')) {
    __apl__7EStringc(this,'\\');
  }
  return;
}

void EString::RemoveTrailingSlash() {
	int len;
	EString *this;
	
  int iVar1;
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  EString local_30 [4];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s0;
  uStack_1c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  iVar1 = GetLength__C7EString(this);
  if ((3 < iVar1) && (this->m_p[iVar1 + -1] == '\\')) {
    Left__C7EStringi(local_30,(int)this);
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
    __as__7EStringPCc(this,local_30[0].m_p);
    Deallocate__7EStringPc(local_30,local_30[0].m_p);
                    /* end of inlined section */
  }
  return;
}

EString EString::ExtractFilename() {
	int slashPos;
	int colenPos;
	EString *this;
	EString &sSource;
	
  int iVar1;
  int iVar2;
  char *szSource;
  EString *in_a1_lo;
  
  iVar1 = FindReverse__C7EStringc(in_a1_lo,'\\');
  iVar2 = FindReverse__C7EStringc(in_a1_lo,':');
  if ((iVar1 == -1) && (iVar2 == -1)) {
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
    szSource = __opPc__C7EString(in_a1_lo);
    MakeCopy__7EStringPCc(this,szSource);
                    /* end of inlined section */
  }
  else {
    Mid__C7EStringi(this,(int)in_a1_lo);
  }
  return (EString)(char *)this;
}

EString EString::ExtractRoot() {
	EString pathname;
	int dotPos;
	int slashPos;
	int colenPos;
	EString *this;
	
  char *pcVar1;
  int iVar2;
  int iVar3;
  EString *in_a1_lo;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  EString pathname;
  EString local_50 [4];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  pcVar1 = __opPc__C7EString(in_a1_lo);
  MakeCopy__7EStringPCc(&pathname,pcVar1);
                    /* end of inlined section */
  iVar2 = FindReverse__C7EStringc(&pathname,'.');
  if (iVar2 != -1) {
    Left__C7EStringi(local_50,(int)&pathname);
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
    __as__7EStringPCc(&pathname,local_50[0].m_p);
    Deallocate__7EStringPc(local_50,local_50[0].m_p);
  }
                    /* end of inlined section */
  iVar2 = FindReverse__C7EStringc(&pathname,'\\');
  iVar3 = FindReverse__C7EStringc(&pathname,':');
  if ((iVar2 == -1) && (iVar3 == -1)) {
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
    pcVar1 = __opPc__C7EString(&pathname);
    MakeCopy__7EStringPCc(this,pcVar1);
    Deallocate__7EStringPc(&pathname,pathname.m_p);
                    /* end of inlined section */
  }
  else {
    Mid__C7EStringi(this,(int)&pathname);
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
    Deallocate__7EStringPc(&pathname,pathname.m_p);
                    /* end of inlined section */
  }
  return (EString)(char *)this;
}

EString EString::ExtractDirectory() {
	int slashPos;
	int colenPos;
	EString *this;
	
  int iVar1;
  EString *in_a1_lo;
  
  iVar1 = FindReverse__C7EStringc(in_a1_lo,'\\');
  if (iVar1 == -1) {
    iVar1 = FindReverse__C7EStringc(in_a1_lo,':');
    if (iVar1 == -1) {
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
      MakeCopy__7EStringPCc(this,".\\");
                    /* end of inlined section */
    }
    else {
      Left__C7EStringi(this,(int)in_a1_lo);
    }
  }
  else {
    Left__C7EStringi(this,(int)in_a1_lo);
  }
  return (EString)(char *)this;
}

EString EString::ExtractExtension() {
	int dotPos;
	int slashPos;
	EString *this;
	
  int iVar1;
  int iVar2;
  EString *in_a1_lo;
  
  iVar1 = FindReverse__C7EStringc(in_a1_lo,'.');
  iVar2 = FindReverse__C7EStringc(in_a1_lo,'\\');
  if ((iVar1 == -1) || (iVar1 < iVar2)) {
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
    MakeCopy__7EStringPCc(this,"");
                    /* end of inlined section */
  }
  else {
    Mid__C7EStringi(this,(int)in_a1_lo);
  }
  return (EString)(char *)this;
}

EString& EString::MakeLegalFilename() {
	char *p;
	
  char cVar1;
  char *pcVar2;
  
  pcVar2 = this->m_p;
LAB_0031bec8:
  do {
    cVar1 = *pcVar2;
    while (cVar1 != ':') {
      if (':' < cVar1) {
        if (cVar1 < '@') {
          if ('=' < cVar1) {
            *pcVar2 = '_';
            goto LAB_0031bf5c;
          }
          if (cVar1 == '<') {
            *pcVar2 = '_';
            goto LAB_0031bf5c;
          }
          pcVar2 = pcVar2 + 1;
          goto LAB_0031bec8;
        }
        if (cVar1 == '\\') {
          *pcVar2 = '_';
          goto LAB_0031bf5c;
        }
        if (cVar1 == '|') {
          *pcVar2 = '_';
          goto LAB_0031bf5c;
        }
        pcVar2 = pcVar2 + 1;
        goto LAB_0031bec8;
      }
      if ('#' < cVar1) {
        if (cVar1 == '*') {
          *pcVar2 = '_';
          goto LAB_0031bf5c;
        }
        if (cVar1 == '/') {
          *pcVar2 = '_';
          goto LAB_0031bf5c;
        }
        pcVar2 = pcVar2 + 1;
        goto LAB_0031bec8;
      }
      if ('!' < cVar1) {
        *pcVar2 = '_';
        goto LAB_0031bf5c;
      }
      pcVar2 = pcVar2 + 1;
      if (cVar1 == '\0') {
        return this;
      }
      cVar1 = *pcVar2;
    }
    *pcVar2 = '_';
LAB_0031bf5c:
    pcVar2 = pcVar2 + 1;
  } while( true );
}

bool EString::GetEnv(char *szVarName) {
	char *szEnv;
	
  char *szSource;
  
  szSource = getenv(szVarName);
  if (szSource != (char *)0x0) {
    __as__7EStringPCc(this,szSource);
  }
  else {
    Empty__7EString(this);
  }
  return szSource != (char *)0x0;
}

EString& EString::Convert(double value) {
  EString *pEVar1;
  
  pEVar1 = Convert__7EStringf(this,(float)(double)value);
  return pEVar1;
}

char* EString::operator char *() {
  return this->m_p;
}
