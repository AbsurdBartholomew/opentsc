// STATUS: NOT STARTED

#include "e_string2.h"

struct TArray<EString2> : private EArray {
	TArray();
	TArray();
	TArray();
	TArray();
	TArray(TArray<EString2>*, int, void);
	EString2& operator[]();
	EString2& operator[]();
	EString2& operator[]();
	EString2& operator[]();
	TArray<EString2>& operator=();
	EString2* operator EString2 *();
	EString2* operator EString2 *();
	void SetGrowBy(TArray<EString2>*, int, void);
	int GetSize();
	void SetSize();
	void FreeUnusedBufferSpace();
	int Search();
	bool IsEmpty();
	void Empty();
	void RemoveAll();
	void Insert();
	void Insert();
	void Add();
	void Add();
	void Add();
	void Remove();
	void Delete();
	void SafeDelete();
	void DeleteAll();
	void SafeDeleteAll();
	void FreeAll();
};

short unsigned int _estring2Null[1] = {
	/* [0] = */ 0
};

short unsigned int _estring2Error[8] = {
	/* [0] = */ 60,
	/* [1] = */ 101,
	/* [2] = */ 114,
	/* [3] = */ 114,
	/* [4] = */ 111,
	/* [5] = */ 114,
	/* [6] = */ 62,
	/* [7] = */ 0
};

EString2* EString2::EString2(u16 c) {
	short unsigned int szBuffer[2];
	
  short szBuffer [2];
  
  szBuffer[1] = 0;
  szBuffer[0] = c;
  MakeCopy__8EString2PCUs(this,szBuffer);
  return this;
}

EString2* EString2::EString2(u16 *szSource1, u16 *szSource2) {
	int len1;
	int len2;
	int len;
	u16 *pData;
	
  int iVar1;
  int iVar2;
  short *pDest;
  
  iVar1 = StrLenU16__8EString2PCUs(szSource1);
  iVar2 = StrLenU16__8EString2PCUs(szSource2);
  if (iVar1 + iVar2 == 0) {
    SetToNull__8EString2(this);
  }
  else {
    pDest = (short *)_memmanAlloc__FUiUi((iVar1 + iVar2 + 1) * 2,4);
    if (pDest == (short *)0x0) {
      SetToError__8EString2(this);
    }
    else {
      memcpy(pDest,szSource1,iVar1 * 2);
      memcpy(pDest + iVar1,szSource2,(iVar2 + 1) * 2);
      this->m_p = pDest;
    }
  }
  return this;
}

EString2& EString2::Convert(double value) {
  EString2 *pEVar1;
  
  pEVar1 = Convert__8EString2f(this,(float)(double)value);
  return pEVar1;
}

int EString2::StrLenU16(u16 *szSource) {
	int count;
	u16 *pChar;
	
  short sVar1;
  int iVar2;
  
  if (szSource == (short *)0x0) {
    return 0;
  }
  iVar2 = 0;
  sVar1 = *szSource;
  while (sVar1 != 0) {
    szSource = szSource + 1;
    iVar2 = iVar2 + 1;
    sVar1 = *szSource;
  }
  return iVar2;
}

void EString2::SetToNull() {
  this->m_p = _estring2Null;
  return;
}

void EString2::SetToError() {
  this->m_p = _estring2Error;
  return;
}

void EString2::Deallocate(u16 *p) {
  if ((p != _estring2Null) && (p != _estring2Error)) {
    _memmanFree__FPv(p);
  }
  return;
}

int EString2::Tokenize(u16 sep, TArray<EString2> &tokens) {
	int sindex;
	int stcount;
	int sizeT;
	EString2 token;
	EString2 *this;
	TArray<EString2> *this;
	TArray<EString2> *this;
	EArray *this;
	TArray<EString2> *this;
	TArray<EString2> *this;
	
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_retaddr;
  EString2 token;
  EString2 local_b0 [4];
  int sindex;
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
  
  local_20 = (undefined4)unaff_s7;
  uStack_1c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_60 = (undefined4)unaff_s3;
  uStack_5c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s1;
  uStack_7c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s6;
  uStack_2c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_40 = (undefined4)unaff_s5;
  uStack_3c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_50 = (undefined4)unaff_s4;
  uStack_4c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s2;
  uStack_6c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s0;
  uStack_8c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from c:/eor/src2/common/datastruc/e_string2.h */
                    /* end of inlined section */
  if (*this->m_p == 0) {
    iVar2 = 0;
  }
  else {
    sindex = 0;
    iVar1 = StrLenU16__8EString2PCUs(this->m_p);
                    /* inlined from c:/eor/src2/common/datastruc/e_string2.h */
    SetToNull__8EString2(&token);
                    /* end of inlined section */
    iVar3 = 0;
    do {
      iVar2 = iVar3;
      GetNextToken__8EString2RiiUs(local_b0,(int *)this,(int)&sindex,(short)iVar1);
                    /* inlined from c:/eor/src2/common/datastruc/e_string2.h */
      __as__8EString2PCUs(&token,local_b0[0].m_p);
      Deallocate__8EString2PUs(local_b0,local_b0[0].m_p);
      iVar3 = (tokens->field0_0x0).m_size;
      Insert__6EArrayii(&tokens->field0_0x0,iVar3,1);
      iVar3 = iVar3 * 4;
      SetToNull__8EString2((EString2 *)((int)(tokens->field0_0x0).m_p + iVar3));
      __as__8EString2PCUs((EString2 *)((int)(tokens->field0_0x0).m_p + iVar3),token.m_p);
                    /* end of inlined section */
      iVar3 = iVar2 + 1;
    } while (token.m_p != (short *)0x0);
                    /* inlined from c:/eor/src2/common/datastruc/e_string2.h */
    Deallocate__8EString2PUs(&token,(short *)0x0);
                    /* end of inlined section */
  }
  return iVar2;
}

int EString2::GetLine(FILE *stream) {
	int cChars;
	int nread;
	short unsigned int szTmp[1024];
	u16 c;
	
  uint uVar1;
  short *psVar2;
  undefined8 unaff_s0;
  int iVar3;
  int iVar4;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_retaddr;
  short szTmp [1024];
  short c;
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
  
  psVar2 = szTmp;
  local_20 = (undefined4)unaff_s7;
  uStack_1c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_30 = (undefined4)unaff_s6;
  uStack_2c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_40 = (undefined4)unaff_s5;
  uStack_3c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_50 = (undefined4)unaff_s4;
  uStack_4c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_60 = (undefined4)unaff_s3;
  uStack_5c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_70 = (undefined4)unaff_s2;
  uStack_6c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_80 = (undefined4)unaff_s1;
  uStack_7c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_90 = (undefined4)unaff_s0;
  uStack_8c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  iVar3 = 0;
  while( true ) {
    iVar4 = iVar3;
    uVar1 = fread(&c,1,1,stream);
    if ((uVar1 == 0) || (c == 10)) break;
    *psVar2 = c;
    psVar2 = psVar2 + 1;
    iVar3 = iVar4 + 1;
    if (uVar1 != 1) {
LAB_0031970c:
      iVar3 = iVar4 + 1;
      if (iVar3 < 2) {
        psVar2 = this->m_p;
        iVar4 = iVar3;
      }
      else if (szTmp[iVar4 + -1] == 0xd) {
        szTmp[iVar4 + -1] = -0x3398;
        psVar2 = this->m_p;
      }
      else {
        psVar2 = this->m_p;
        iVar4 = iVar3;
      }
      Deallocate__8EString2PUs(this,psVar2);
      MakeCopy__8EString2PCUs(this,szTmp);
      return iVar4 + -1;
    }
  }
  *psVar2 = -0x3398;
  goto LAB_0031970c;
}

void EString2::MakeCopyFromChars(char *szSource) {
	int len;
	u16 *pData;
	int i;
	
  short *psVar1;
  size_t sVar2;
  int iVar3;
  long lVar4;
  short *psVar5;
  
  if (szSource == (char *)0x0) {
    sVar2 = 0;
  }
  else {
    sVar2 = strlen(szSource);
  }
  if (sVar2 == 0) {
    SetToNull__8EString2(this);
  }
  else {
    psVar1 = (short *)_memmanAlloc__FUiUi(((int)sVar2 + 1) * 2,4);
    lVar4 = 0;
    if (psVar1 == (short *)0x0) {
      SetToError__8EString2(this);
    }
    else {
      psVar5 = psVar1;
      if (0 < (long)sVar2) {
        do {
          iVar3 = (int)lVar4;
          lVar4 = (long)(iVar3 + 1);
          *psVar5 = (short)szSource[iVar3];
          psVar5 = psVar5 + 1;
        } while (lVar4 < (long)sVar2);
      }
      psVar1[(int)sVar2] = 0;
      this->m_p = psVar1;
    }
  }
  return;
}

EString2* EString2::EString2(char c) {
	short unsigned int szBuffer[2];
	
  short szBuffer [2];
  
  szBuffer[0] = (short)c;
  szBuffer[1] = 0;
  MakeCopy__8EString2PCUs(this,szBuffer);
  return this;
}

EString2 EString2::GetNextToken(int &sindex, int sizeT, u16 separator) {
	u16 *pData;
	int iStart;
	int cSize;
	short unsigned int szTmp[1024];
	EString2 *this;
	EString2 *this;
	EString2 *this;
	EString2 *this;
	
  int iVar1;
  short sVar2;
  short *psVar3;
  short in_t0_lo;
  int iVar4;
  uint nBytes;
  short szTmp [1024];
  
                    /* inlined from c:/eor/src2/common/datastruc/e_string2.h */
                    /* end of inlined section */
  if (((*(short *)*sindex == 0) || (in_t0_lo == 0)) || ((long)separator <= (long)*(int *)sizeT)) {
    MakeCopyFromChars__8EString2PCc(this,"");
                    /* end of inlined section */
  }
  else {
    psVar3 = (short *)*sindex + *(int *)sizeT;
    do {
      sVar2 = *psVar3;
      if ((sVar2 != in_t0_lo) || (in_t0_lo == 0)) goto LAB_00319928;
      *(int *)sizeT = *(int *)sizeT + 1;
      sVar2 = *psVar3;
      psVar3 = psVar3 + 1;
    } while (sVar2 != 0);
    sVar2 = *psVar3;
LAB_00319928:
    iVar1 = *(int *)sizeT;
    if (sVar2 == 0) {
                    /* inlined from c:/eor/src2/common/datastruc/e_string2.h */
      MakeCopyFromChars__8EString2PCc(this,"");
                    /* end of inlined section */
    }
    else {
      do {
        if (*psVar3 == in_t0_lo) {
          iVar4 = *(int *)sizeT;
          goto LAB_00319978;
        }
        if (*psVar3 == 0) {
          iVar4 = *(int *)sizeT;
          goto LAB_00319978;
        }
        *(int *)sizeT = *(int *)sizeT + 1;
        sVar2 = *psVar3;
        psVar3 = psVar3 + 1;
      } while (sVar2 != 0);
      iVar4 = *(int *)sizeT;
LAB_00319978:
      nBytes = iVar4 - iVar1;
      memcpy(szTmp,(void *)(*sindex + iVar1 * 2),nBytes);
                    /* inlined from c:/eor/src2/common/datastruc/e_string2.h */
                    /* end of inlined section */
      szTmp[nBytes] = -0x3398;
                    /* inlined from c:/eor/src2/common/datastruc/e_string2.h */
      MakeCopy__8EString2PCUs(this,szTmp);
                    /* end of inlined section */
    }
  }
  return (EString2)(short *)this;
}

void EString2::MakeCopy(u16 *szSource) {
	int len;
	u16 *pData;
	
  int iVar1;
  short *pDest;
  uint size;
  
  if (szSource == (short *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = StrLenU16__8EString2PCUs(szSource);
  }
  if (iVar1 == 0) {
    SetToNull__8EString2(this);
  }
  else {
    size = (iVar1 + 1) * 2;
    pDest = (short *)_memmanAlloc__FUiUi(size,4);
    if (pDest == (short *)0x0) {
      SetToError__8EString2(this);
    }
    else {
      memcpy(pDest,szSource,size);
      this->m_p = pDest;
    }
  }
  return;
}

EString2& EString2::operator=(u16 *szSource) {
	u16 *pOld;
	
  short *p;
  
  p = this->m_p;
  MakeCopy__8EString2PCUs(this,szSource);
  Deallocate__8EString2PUs(this,p);
  return this;
}

EString2& EString2::operator=(char *szSource) {
	u16 *pOld;
	
  short *p;
  
  p = this->m_p;
  MakeCopyFromChars__8EString2PCc(this,szSource);
  Deallocate__8EString2PUs(this,p);
  return this;
}

EString2& EString2::operator=(u16 c) {
	short unsigned int tmp[2];
	u16 *pOld;
	
  short *p;
  short tmp [2];
  
  tmp[1] = 0;
  p = this->m_p;
  tmp[0] = c;
  MakeCopy__8EString2PCUs(this,tmp);
  Deallocate__8EString2PUs(this,p);
  return this;
}

EString2& EString2::operator=(char c) {
	short unsigned int tmp[2];
	u16 *pOld;
	
  short *p;
  short tmp [2];
  
  tmp[0] = (short)c;
  tmp[1] = 0;
  p = this->m_p;
  MakeCopy__8EString2PCUs(this,tmp);
  Deallocate__8EString2PUs(this,p);
  return this;
}

int EString2::GetLength() {
  int iVar1;
  
  iVar1 = StrLenU16__8EString2PCUs(this->m_p);
  return iVar1;
}

EString2& EString2::MakeUpper() {
	u16 *c;
	
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)this->m_p;
  uVar1 = *puVar2;
  while (uVar1 != 0) {
    if (uVar1 - 0x61 < 0x1a) {
      *puVar2 = uVar1 - 0x20;
    }
    puVar2 = puVar2 + 1;
    uVar1 = *puVar2;
  }
  return this;
}

EString2& EString2::MakeLower() {
	u16 *c;
	
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)this->m_p;
  uVar1 = *puVar2;
  while (uVar1 != 0) {
    if (uVar1 - 0x41 < 0x1a) {
      *puVar2 = uVar1 + 0x20;
    }
    puVar2 = puVar2 + 1;
    uVar1 = *puVar2;
  }
  return this;
}

bool EString2::Allocate(int size, bool SetToErrorStringIfFailed) {
	int oldSize;
	u16 *pNew;
	
  int iVar1;
  short *pDest;
  
  if (size == 0) {
    Empty__8EString2(this);
  }
  else {
    iVar1 = GetLength__C8EString2(this);
    if (iVar1 < size) {
      pDest = (short *)_memmanAlloc__FUiUi((size + 1) * 2,4);
      if (pDest == (short *)0x0) {
        if (SetToErrorStringIfFailed) {
          Deallocate__8EString2PUs(this,this->m_p);
          SetToError__8EString2(this);
          return false;
        }
        return false;
      }
      memcpy(pDest,this->m_p,(iVar1 + 1) * 2);
      Deallocate__8EString2PUs(this,this->m_p);
      this->m_p = pDest;
    }
  }
  return true;
}

void EString2::Empty() {
  Deallocate__8EString2PUs(this,this->m_p);
  SetToNull__8EString2(this);
  return;
}

int EString2::Compare(u16 *szOther) {
	u16 *a;
	u16 *b;
	
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)this->m_p;
  do {
    uVar1 = *puVar2;
    while( true ) {
      if (uVar1 < (ushort)*szOther) {
        return -1;
      }
      puVar2 = puVar2 + 1;
      if ((ushort)*szOther < uVar1) {
        return 1;
      }
      szOther = (short *)((ushort *)szOther + 1);
      if (*puVar2 != 0) break;
      if (*szOther == 0) {
        return 0;
      }
      uVar1 = *puVar2;
    }
  } while( true );
}

int EString2::Compare(char *szOther) {
	u16 *a;
	char *b;
	
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)this->m_p;
  do {
    uVar1 = *puVar2;
    while( true ) {
      if ((long)(ulong)uVar1 < (long)*szOther) {
        return -1;
      }
      puVar2 = puVar2 + 1;
      if ((long)*szOther < (long)(ulong)uVar1) {
        return 1;
      }
      szOther = szOther + 1;
      if (*puVar2 != 0) break;
      if (*szOther == '\0') {
        return 0;
      }
      uVar1 = *puVar2;
    }
  } while( true );
}

EString EString2::GetEString() {
	EString temp;
	int len;
	int i;
	int pos;
	EString *this;
	
  int size;
  short *psVar1;
  char *pcVar2;
  EString2 *in_a1_lo;
  int iVar3;
  EString temp;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
  SetToNull__7EString(&temp);
                    /* end of inlined section */
  size = GetLength__C8EString2(in_a1_lo);
  Allocate__7EStringib(&temp,size,false);
  iVar3 = 0;
  if (0 < size + 1) {
    do {
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
                    /* end of inlined section */
      psVar1 = in_a1_lo->m_p + iVar3;
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
      pcVar2 = temp.m_p + iVar3;
                    /* end of inlined section */
      iVar3 = iVar3 + 1;
      *pcVar2 = *(char *)psVar1;
    } while (iVar3 < size + 1);
  }
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
  pcVar2 = __opPc__C7EString(&temp);
  MakeCopy__7EStringPCc((EString *)this,pcVar2);
  Deallocate__7EStringPc(&temp,temp.m_p);
                    /* end of inlined section */
  return (EString)(char *)this;
}

int EString2::CompareNoCase(u16 *szOther) {
	u16 *a;
	u16 *b;
	u16 au;
	u16 bu;
	
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  uint uVar4;
  
  puVar3 = (ushort *)this->m_p;
  do {
    uVar1 = *puVar3;
    while( true ) {
      uVar4 = (uint)uVar1;
      if (uVar4 - 0x61 < 0x1a) {
        uVar4 = uVar4 + 0xffe0 & 0xffff;
      }
      uVar2 = (uint)(ushort)*szOther;
      if (uVar2 - 0x61 < 0x1a) {
        uVar2 = uVar2 + 0xffe0 & 0xffff;
      }
      if (uVar4 < uVar2) {
        return -1;
      }
      puVar3 = puVar3 + 1;
      if (uVar2 < uVar4) {
        return 1;
      }
      szOther = (short *)((ushort *)szOther + 1);
      if (*puVar3 != 0) break;
      if (*szOther == 0) {
        return 0;
      }
      uVar1 = *puVar3;
    }
  } while( true );
}

EString2 EString2::Mid(int pos) {
	EString2 *this;
	
  int in_a2_lo;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_string2.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/datastruc/e_string2.h */
  MakeCopy__8EString2PCUs(this,(short *)(in_a2_lo * 2 + *(int *)pos));
                    /* end of inlined section */
  return (EString2)(short *)this;
}

EString2 EString2::Left(int count) {
	EString2 t;
	int pos;
	EString2 *this;
	
  short *psVar1;
  int in_a2_lo;
  EString2 t;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_string2.h */
  psVar1 = __opPUs__C8EString2((EString2 *)count);
  MakeCopy__8EString2PCUs(&t,psVar1);
  t.m_p[in_a2_lo] = 0;
  psVar1 = __opPUs__C8EString2(&t);
  MakeCopy__8EString2PCUs(this,psVar1);
  Deallocate__8EString2PUs(&t,t.m_p);
                    /* end of inlined section */
  return (EString2)(short *)this;
}

EString2 EString2::Right(int count) {
	EString2 *this;
	
  int iVar1;
  int in_a2_lo;
  
  iVar1 = GetLength__C8EString2((EString2 *)count);
                    /* inlined from c:/eor/src2/common/datastruc/e_string2.h */
  MakeCopy__8EString2PCUs(this,(short *)((iVar1 - in_a2_lo) * 2 + *(int *)count));
                    /* end of inlined section */
  return (EString2)(short *)this;
}

EString2& EString2::operator+=(u16 *sz) {
	EString2 t;
	EString2 *this;
	u16 *sz;
	EString2 *this;
	EString2 *this;
	
  EString2 t;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_string2.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/datastruc/e_string2.h */
  __8EString2PCUsT1(&t,this->m_p,sz);
  __as__8EString2PCUs(this,t.m_p);
  Deallocate__8EString2PUs(&t,t.m_p);
                    /* end of inlined section */
  return this;
}

EString2 EString2::operator+(u16 c) {
	short unsigned int cb[2];
	
  short cb [2];
  
  cb[1] = 0;
  __8EString2PCUsT1(this,*(short **)(int)c,cb);
  return (EString2)(short *)this;
}

EString2& EString2::operator+=(u16 c) {
	EString2 t;
	EString2 *this;
	
  EString2 t;
  
  __pl__C8EString2Us(&t,(short)this);
                    /* inlined from c:/eor/src2/common/datastruc/e_string2.h */
  __as__8EString2PCUs(this,t.m_p);
  Deallocate__8EString2PUs(&t,t.m_p);
                    /* end of inlined section */
  return this;
}

EString2 EString2::operator+(char *sz) {
  short *szSource1;
  char *in_a2_lo;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  EString2 local_40 [4];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from c:/eor/src2/common/datastruc/e_string2.h */
  szSource1 = *(short **)sz;
  MakeCopyFromChars__8EString2PCc(local_40,in_a2_lo);
                    /* end of inlined section */
  __8EString2PCUsT1(this,szSource1,local_40[0].m_p);
                    /* inlined from c:/eor/src2/common/datastruc/e_string2.h */
  Deallocate__8EString2PUs(local_40,local_40[0].m_p);
                    /* end of inlined section */
  return (EString2)(short *)this;
}

EString2 EString2::operator+(EString &s) {
  short *szSource1;
  char **in_a2_lo;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  EString2 local_40 [4];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from c:/eor/src2/common/datastruc/e_string2.h */
  szSource1 = (short *)s->m_p;
  MakeCopyFromChars__8EString2PCc(local_40,*in_a2_lo);
                    /* end of inlined section */
  __8EString2PCUsT1(this,szSource1,local_40[0].m_p);
                    /* inlined from c:/eor/src2/common/datastruc/e_string2.h */
  Deallocate__8EString2PUs(local_40,local_40[0].m_p);
                    /* end of inlined section */
  return (EString2)(short *)this;
}

EString2 EString2::operator+(char c) {
	short unsigned int cb[2];
	
  char in_a2_lo;
  short cb [2];
  
  cb[0] = (short)in_a2_lo;
  cb[1] = 0;
  __8EString2PCUsT1(this,*(short **)(int)c,cb);
  return (EString2)(short *)this;
}

EString2& EString2::operator+=(EString &s) {
	EString2 *this;
	
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  EString2 local_30 [4];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s0;
  uStack_1c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  __pl__C8EString2RC7EString(local_30,(EString *)this);
                    /* inlined from c:/eor/src2/common/datastruc/e_string2.h */
  __as__8EString2PCUs(this,local_30[0].m_p);
  Deallocate__8EString2PUs(local_30,local_30[0].m_p);
                    /* end of inlined section */
  return this;
}

EString2& EString2::operator+=(char *sz) {
	EString2 *this;
	
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  EString2 local_30 [4];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s0;
  uStack_1c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  __pl__C8EString2PCc(local_30,(char *)this);
                    /* inlined from c:/eor/src2/common/datastruc/e_string2.h */
  __as__8EString2PCUs(this,local_30[0].m_p);
  Deallocate__8EString2PUs(local_30,local_30[0].m_p);
                    /* end of inlined section */
  return this;
}

EString2& EString2::operator+=(char c) {
	EString2 t;
	EString2 *this;
	
  EString2 t;
  
  __pl__C8EString2Us(&t,(short)this);
                    /* inlined from c:/eor/src2/common/datastruc/e_string2.h */
  __as__8EString2PCUs(this,t.m_p);
  Deallocate__8EString2PUs(&t,t.m_p);
                    /* end of inlined section */
  return this;
}

int EString2::Find(u16 c) {
	int i;
	u16 *pc;
	
  short sVar1;
  int iVar2;
  short *psVar3;
  
  psVar3 = this->m_p;
  sVar1 = *psVar3;
  iVar2 = 0;
  while( true ) {
    if (sVar1 == 0) {
      return -1;
    }
    psVar3 = psVar3 + 1;
    if (sVar1 == c) break;
    sVar1 = *psVar3;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

int EString2::Find(u16 *szString) {
	int searchLen;
	int last;
	int i;
	bool match;
	int j;
	
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = StrLenU16__8EString2PCUs(szString);
  iVar3 = GetLength__C8EString2(this);
  iVar5 = 0;
  if (-1 < iVar3 - iVar2) {
    do {
      bVar1 = true;
      if (0 < iVar2) {
        if (this->m_p[iVar5] == *szString) {
          for (iVar4 = 1; iVar4 < iVar2; iVar4 = iVar4 + 1) {
            if (this->m_p[iVar5 + iVar4] != szString[iVar4]) goto LAB_0031a3bc;
          }
        }
        else {
LAB_0031a3bc:
          bVar1 = false;
        }
      }
      if (bVar1) {
        return iVar5;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 <= iVar3 - iVar2);
  }
  return -1;
}

bool EString2::Replace(u16 *szOldString, u16 *szNewString) {
	int pos;
	u16 *sz;
	EString2 *this;
	
  int iVar1;
  int iVar2;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  EString2 local_90 [4];
  EString2 local_80 [4];
  EString2 local_70 [4];
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
  iVar1 = Find__C8EString2PCUs(this,szOldString);
  if (iVar1 != -1) {
    Left__C8EString2i(local_70,(int)this);
                    /* inlined from c:/eor/src2/common/datastruc/e_string2.h */
    __8EString2PCUsT1(local_80,local_70[0].m_p,szNewString);
                    /* end of inlined section */
    iVar2 = StrLenU16__8EString2PCUs(szOldString);
                    /* inlined from c:/eor/src2/common/datastruc/e_string2.h */
    __8EString2PCUsT1(local_90,local_80[0].m_p,this->m_p + iVar1 + iVar2);
    __as__8EString2PCUs(this,local_90[0].m_p);
    Deallocate__8EString2PUs(local_90,local_90[0].m_p);
    Deallocate__8EString2PUs(local_80,local_80[0].m_p);
    Deallocate__8EString2PUs(local_70,local_70[0].m_p);
                    /* end of inlined section */
  }
  return iVar1 != -1;
}

int EString2::FindReverse(u16 c) {
	int len;
	int i;
	u16 *pc;
	
  int iVar1;
  short *psVar2;
  
  iVar1 = GetLength__C8EString2(this);
  psVar2 = this->m_p + iVar1 + -1;
  while( true ) {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      return -1;
    }
    if (*psVar2 == c) break;
    psVar2 = psVar2 + -1;
  }
  return iVar1;
}

EString2& EString2::Convert(float value) {
	char buffer[40];
	
  char buffer [40];
  
  sprintf(buffer,"%f");
  __as__8EString2PCc(this,buffer);
  return this;
}

EString2& EString2::Convert(int value) {
	char buffer[40];
	
  char buffer [40];
  
  sprintf(buffer,"%d");
  __as__8EString2PCc(this,buffer);
  return this;
}

void EString2::Replace(u16 oldChar, u16 newChar) {
	u16 *szThis;
	
  short sVar1;
  short *psVar2;
  
  psVar2 = this->m_p;
  sVar1 = *psVar2;
  while (sVar1 != 0) {
    if (sVar1 == oldChar) {
      *psVar2 = newChar;
    }
    psVar2 = psVar2 + 1;
    sVar1 = *psVar2;
  }
  return;
}

void EString2::Remove(u16 c) {
	EString2 temp;
	u16 *szTemp;
	u16 *szThis;
	EString2 &sSource;
	EString2 *this;
	
  short sVar1;
  short *psVar2;
  EString2 EVar3;
  EString2 temp;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_string2.h */
  psVar2 = __opPUs__C8EString2(this);
  MakeCopy__8EString2PCUs(&temp,psVar2);
                    /* end of inlined section */
  psVar2 = this->m_p;
                    /* end of inlined section */
  sVar1 = *psVar2;
  EVar3 = temp;
  while (sVar1 != 0) {
    psVar2 = psVar2 + 1;
    if (sVar1 != c) {
      *EVar3.m_p = sVar1;
      EVar3.m_p = EVar3.m_p + 1;
    }
    sVar1 = *psVar2;
  }
  *EVar3.m_p = 0;
                    /* inlined from c:/eor/src2/common/datastruc/e_string2.h */
  __as__8EString2PCUs(this,temp.m_p);
  Deallocate__8EString2PUs(&temp,temp.m_p);
  return;
}

EString2 operator+(u16 c, EString2 &s) {
	short unsigned int cb[2];
	
  short **in_a2_lo;
  short cb [2];
  
  cb[0] = (short)s;
  cb[1] = 0;
  __8EString2PCUsT1((EString2 *)(int)c,cb,*in_a2_lo);
  return (short *)(int)c;
}

EStream& operator<<(EStream &s, EString2 &d) {
  WriteU16String__7EStreamPCUs(s,d->m_p);
  return s;
}

EStream& operator>>(EStream &s, EString2 &d) {
	short unsigned int szBuffer[1024];
	
  short szBuffer [1024];
  
  ReadU16String__7EStreamPUsi(s,szBuffer,0x400);
  __as__8EString2PCUs(d,szBuffer);
  return s;
}

void EString2::FixTrailingSlash() {
	int len;
	EString2 *this;
	int pos;
	
  int iVar1;
  
  iVar1 = GetLength__C8EString2(this);
                    /* inlined from c:/eor/src2/common/datastruc/e_string2.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/datastruc/e_string2.h */
                    /* end of inlined section */
  if ((iVar1 != 0) && (this->m_p[iVar1 + -1] != 0x5c)) {
    __apl__8EString2c(this,'\\');
  }
  return;
}

void EString2::RemoveTrailingSlash() {
	int len;
	EString2 *this;
	
  int iVar1;
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  EString2 local_30 [4];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s0;
  uStack_1c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  iVar1 = GetLength__C8EString2(this);
  if ((3 < iVar1) && (this->m_p[iVar1 + -1] == 0x5c)) {
    Left__C8EString2i(local_30,(int)this);
                    /* inlined from c:/eor/src2/common/datastruc/e_string2.h */
    __as__8EString2PCUs(this,local_30[0].m_p);
    Deallocate__8EString2PUs(local_30,local_30[0].m_p);
                    /* end of inlined section */
  }
  return;
}

EString2 EString2::ExtractFilename() {
	int slashPos;
	int colenPos;
	EString2 *this;
	EString2 &sSource;
	
  int iVar1;
  int iVar2;
  short *szSource;
  EString2 *in_a1_lo;
  
  iVar1 = FindReverse__C8EString2Us(in_a1_lo,0x5c);
  iVar2 = FindReverse__C8EString2Us(in_a1_lo,0x3a);
  if ((iVar1 == -1) && (iVar2 == -1)) {
                    /* inlined from c:/eor/src2/common/datastruc/e_string2.h */
    szSource = __opPUs__C8EString2(in_a1_lo);
    MakeCopy__8EString2PCUs(this,szSource);
                    /* end of inlined section */
  }
  else {
    Mid__C8EString2i(this,(int)in_a1_lo);
  }
  return (EString2)(short *)this;
}

EString2 EString2::ExtractRoot() {
	EString2 pathname;
	int dotPos;
	int slashPos;
	int colenPos;
	EString2 *this;
	
  short *psVar1;
  int iVar2;
  int iVar3;
  EString2 *in_a1_lo;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  EString2 pathname;
  EString2 local_50 [4];
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
                    /* inlined from c:/eor/src2/common/datastruc/e_string2.h */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  psVar1 = __opPUs__C8EString2(in_a1_lo);
  MakeCopy__8EString2PCUs(&pathname,psVar1);
                    /* end of inlined section */
  iVar2 = FindReverse__C8EString2Us(&pathname,0x2e);
  if (iVar2 != -1) {
    Left__C8EString2i(local_50,(int)&pathname);
                    /* inlined from c:/eor/src2/common/datastruc/e_string2.h */
    __as__8EString2PCUs(&pathname,local_50[0].m_p);
    Deallocate__8EString2PUs(local_50,local_50[0].m_p);
  }
                    /* end of inlined section */
  iVar2 = FindReverse__C8EString2Us(&pathname,0x5c);
  iVar3 = FindReverse__C8EString2Us(&pathname,0x3a);
  if ((iVar2 == -1) && (iVar3 == -1)) {
                    /* inlined from c:/eor/src2/common/datastruc/e_string2.h */
    psVar1 = __opPUs__C8EString2(&pathname);
    MakeCopy__8EString2PCUs(this,psVar1);
    Deallocate__8EString2PUs(&pathname,pathname.m_p);
                    /* end of inlined section */
  }
  else {
    Mid__C8EString2i(this,(int)&pathname);
                    /* inlined from c:/eor/src2/common/datastruc/e_string2.h */
    Deallocate__8EString2PUs(&pathname,pathname.m_p);
                    /* end of inlined section */
  }
  return (EString2)(short *)this;
}

EString2 EString2::ExtractDirectory() {
	int slashPos;
	int colenPos;
	EString2 *this;
	
  int iVar1;
  EString2 *in_a1_lo;
  
  iVar1 = FindReverse__C8EString2Us(in_a1_lo,0x5c);
  if (iVar1 == -1) {
    iVar1 = FindReverse__C8EString2Us(in_a1_lo,0x3a);
    if (iVar1 == -1) {
                    /* inlined from c:/eor/src2/common/datastruc/e_string2.h */
      MakeCopyFromChars__8EString2PCc(this,".\\");
                    /* end of inlined section */
    }
    else {
      Left__C8EString2i(this,(int)in_a1_lo);
    }
  }
  else {
    Left__C8EString2i(this,(int)in_a1_lo);
  }
  return (EString2)(short *)this;
}

EString2 EString2::ExtractExtension() {
	int dotPos;
	int slashPos;
	EString2 *this;
	
  int iVar1;
  int iVar2;
  EString2 *in_a1_lo;
  
  iVar1 = FindReverse__C8EString2Us(in_a1_lo,0x2e);
  iVar2 = FindReverse__C8EString2Us(in_a1_lo,0x5c);
  if ((iVar1 == -1) || (iVar1 < iVar2)) {
                    /* inlined from c:/eor/src2/common/datastruc/e_string2.h */
    MakeCopyFromChars__8EString2PCc(this,"");
                    /* end of inlined section */
  }
  else {
    Mid__C8EString2i(this,(int)in_a1_lo);
  }
  return (EString2)(short *)this;
}

EString2& EString2::MakeLegalFilename() {
	u16 *p;
	
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)this->m_p;
LAB_0031ab10:
  do {
    uVar1 = *puVar2;
    while( true ) {
      if (uVar1 == 0x3a) break;
      if (0x3a < uVar1) {
        if (uVar1 < 0x40) {
          if (0x3d < uVar1) {
            *puVar2 = 0x5f;
            goto LAB_0031aba4;
          }
          if (uVar1 == 0x3c) {
            *puVar2 = 0x5f;
            goto LAB_0031aba4;
          }
          puVar2 = puVar2 + 1;
          goto LAB_0031ab10;
        }
        if (uVar1 == 0x5c) {
          *puVar2 = 0x5f;
          goto LAB_0031aba4;
        }
        if (uVar1 == 0x7c) {
          *puVar2 = 0x5f;
          goto LAB_0031aba4;
        }
        puVar2 = puVar2 + 1;
        goto LAB_0031ab10;
      }
      if (0x23 < uVar1) {
        if (uVar1 == 0x2a) {
          *puVar2 = 0x5f;
          goto LAB_0031aba4;
        }
        if (uVar1 == 0x2f) {
          *puVar2 = 0x5f;
          goto LAB_0031aba4;
        }
        puVar2 = puVar2 + 1;
        goto LAB_0031ab10;
      }
      if (0x21 < uVar1) {
        *puVar2 = 0x5f;
        goto LAB_0031aba4;
      }
      puVar2 = puVar2 + 1;
      if (uVar1 == 0) {
        return this;
      }
      uVar1 = *puVar2;
    }
    *puVar2 = 0x5f;
LAB_0031aba4:
    puVar2 = puVar2 + 1;
  } while( true );
}

bool EString2::GetEnv(char *szVarName) {
	char *szEnv;
	
  char *szSource;
  
  szSource = getenv(szVarName);
  if (szSource != (char *)0x0) {
    __as__8EString2PCc(this,szSource);
  }
  else {
    Empty__8EString2(this);
  }
  return szSource != (char *)0x0;
}

char* EString::operator char *() {
  return this->m_p;
}

u16* EString2::operator unsigned short *() {
  return this->m_p;
}
