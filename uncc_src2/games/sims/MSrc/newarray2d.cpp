// STATUS: NOT STARTED

#include "newarray2d.h"

_c2DArray *_c2DArray::sArrayList = NULL;
void* (*_c2DArray::m_pfnAlloc)(/* parameters unknown */) = NULL;
void (*_c2DArray::m_pfnFree)(/* parameters unknown */) = NULL;
static SwizzleProc sCurEntrySwizzle;

ErrType _c2DArray::ReadFromDisk(iResFile *pFile, SInt32 type, SInt16 id, SwizzleProc SwizzleEntry) {
	HandleNode *tmphandle;
	MPtr data;
	ReconBuffer rb;
	HandleNode *mem;
	SInt16 xsize;
	SInt16 ysize;
	void *dataStart;
	UInt32 dataSize;
	HandleNode *mem;
	
  short sVar1;
  short sVar2;
  short sVar3;
  short *data;
  uint nBytes;
  bool bVar4;
  int iVar5;
  long lVar6;
  HandleNode *res;
  ReconBuffer rb;
  
  sCurEntrySwizzle = SwizzleEntry;
  lVar6 = (*(code *)pFile->__vtable->Write)
                    ((int)&pFile->fNextFile + (int)*(short *)&pFile->__vtable->AddWithLanguage,type,
                     id,0x24b728);
  if (lVar6 == 0) {
    iVar5 = GetError__8iResFile(pFile);
  }
  else {
    res = (HandleNode *)lVar6;
    data = (short *)res->ptr;
                    /* end of inlined section */
    sVar1 = *data;
    if (sVar1 == 0) {
                    /* end of inlined section */
      __11ReconBufferPviQ211ReconBuffer4ModeUs(&rb,data,res->allocSize,kReading,0);
      DoStream__9_c2DArrayP11ReconBufferb(this,&rb,false);
      ___11ReconBuffer(&rb,2);
      iVar5 = 0;
    }
    else {
      sVar2 = data[1];
      sVar3 = data[2];
      this->fEntrySize = (int)sVar1;
      bVar4 = SetSize__9_c2DArrayii(this,(int)sVar2,(int)sVar3);
      if (bVar4) {
        nBytes = (int)sVar1 * (int)sVar2 * (int)sVar3;
        if (nBytes != 0) {
          memcpy(*this->fData,data + sVar2 * 2 + 4,nBytes);
        }
        Release__8iResFilePQ26Memory10HandleNode(pFile,res);
        iVar5 = 0;
      }
      else {
        iVar5 = -1;
      }
    }
  }
  return iVar5;
}

void _c2DArray::Swizzle(void *arraydata, SInt32 size) {
  return;
}

_c2DArray* _c2DArray::_c2DArray(Int entrySize, Int xSize, Int ySize, BString &name) {
  __7BString(&this->fName);
  this->fEntrySize = entrySize;
  this->fData = (void **)0x0;
  this->fxSize = -1;
  this->fySize = -1;
  AddArray__9_c2DArrayP9_c2DArray(this);
  SetName__9_c2DArrayRC7BString(this,name);
  SetSize__9_c2DArrayii(this,xSize,ySize);
  ClearBytes__9_c2DArraySc(this,'\0');
  return this;
}

void _c2DArray::~_c2DArray(int __in_chrg) {
	void *pAddress;
	
  if (this->fData != (void **)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
    (*(code *)_9_c2DArray_m_pfnFree)();
  }
  RemoveArray__9_c2DArrayP9_c2DArray(this);
  this->fData = (void **)0x0;
  this->fEntrySize = 0;
  this->fxSize = -1;
  this->fySize = -1;
  ___7BString(&this->fName,2);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void _c2DArray::AddArray(_c2DArray *a) {
  a->fNextArray = _9_c2DArray_sArrayList;
  _9_c2DArray_sArrayList = a;
  return;
}

void _c2DArray::RemoveArray(_c2DArray *a) {
	_c2DArray **srch;
	
  _c2DArray *p_Var1;
  _c2DArray *p_Var2;
  
  p_Var2 = (_c2DArray *)&_9_c2DArray_sArrayList;
  if (_9_c2DArray_sArrayList != (_c2DArray *)0x0) {
    do {
      p_Var1 = p_Var2->fNextArray;
      if (p_Var1 == a) {
        p_Var2->fNextArray = p_Var1->fNextArray;
        return;
      }
      p_Var2 = p_Var1;
    } while (p_Var1->fNextArray != (_c2DArray *)0x0);
  }
  return;
}

ErrType _c2DArray::WriteToDisk(iResFile *pFile, SInt32 rType, SInt16 id, bool enableCompression) {
	SInt32 size;
	ReconBuffer rb2;
	ResourceName resName;
	ErrType err;
	SInt32 size;
	HandleNode *ptr;
	UInt32 cpSize;
	void *newMem;
	
  uint *pAddress;
  void *pvVar1;
  char *str;
  int iVar2;
  uint uVar3;
  ReconBuffer rb2;
  StackString_64_ resName;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
  uVar3 = this->fxSize * this->fySize * this->fEntrySize + 0x40;
  pAddress = (uint *)malloc(0xc);
  *pAddress = uVar3;
  if (uVar3 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = malloc(uVar3);
  }
  pAddress[1] = (uint)pvVar1;
                    /* end of inlined section */
  pAddress[2] = 1;
  if (pAddress == (uint *)0x0) {
    iVar2 = -200;
  }
  else {
                    /* end of inlined section */
    __11ReconBufferPviQ211ReconBuffer4ModeUs(&rb2,pvVar1,uVar3,kWriting,0);
    DoStream__9_c2DArrayP11ReconBufferb(this,&rb2,enableCompression);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Recon.h */
    pvVar1 = (void *)0x0;
    if (rb2.fPosition != 0) {
      pvVar1 = malloc(rb2.fPosition);
    }
    uVar3 = *pAddress;
    if ((uint)rb2.fPosition < *pAddress) {
      uVar3 = rb2.fPosition;
    }
    memcpy(pvVar1,(void *)pAddress[1],uVar3);
    if (pAddress[2] != 0) {
      free((void *)pAddress[1]);
    }
    *pAddress = rb2.fPosition;
    pAddress[1] = (uint)pvVar1;
    pAddress[2] = 1;
    __12StringBufferPcUi(&resName.field0_0x0,resName.fChars,0x40);
                    /* end of inlined section */
    str = c_str__C7BString(&this->fName);
    copy__12StringBufferPCc(&resName.field0_0x0,str);
    (*(code *)pFile->__vtable[1].FindUniqueID)
              ((int)&pFile->fNextFile + (int)*(short *)&pFile->__vtable[1].FindUniqueName,pAddress,
               rType,id,&resName,1);
    iVar2 = GetError__8iResFile(pFile);
    if (iVar2 == 0) {
      (*(code *)pFile->__vtable[1].SetID)
                ((int)&pFile->fNextFile + (int)*(short *)&pFile->__vtable[1].IsLittleEndian,pAddress
                );
      iVar2 = GetError__8iResFile(pFile);
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
      if (pAddress != (uint *)0x0) {
        if (pAddress[2] != 0) {
          free((void *)pAddress[1]);
        }
        free(pAddress);
                    /* end of inlined section */
      }
    }
    ___11ReconBuffer(&rb2,2);
  }
  return iVar2;
}

void _c2DArray::ClearBytes(SInt8 zeropad) {
  if ((0 < this->fxSize) && (0 < this->fySize)) {
    memset(*this->fData,(int)zeropad,(long)(this->fxSize * this->fySize * this->fEntrySize));
  }
  return;
}

bool _c2DArray::SetSize(Int newxSize, Int newySize) {
	int count;
	
  void **ppvVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  if (newySize == this->fySize) {
    if (newxSize != this->fxSize) {
      ppvVar1 = this->fData;
      goto LAB_0024bb34;
    }
    if (this->fData != (void **)0x0) {
      return true;
    }
LAB_0024bb48:
    this->fySize = newySize;
  }
  else {
    ppvVar1 = this->fData;
LAB_0024bb34:
    if (ppvVar1 != (void **)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
      (*(code *)_9_c2DArray_m_pfnFree)();
      goto LAB_0024bb48;
    }
    this->fySize = newySize;
  }
  this->fxSize = newxSize;
  if ((newxSize < 1) || (newySize < 1)) {
    this->fData = (void **)0x0;
    return true;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
  lVar3 = (*(code *)_9_c2DArray_m_pfnAlloc)(newxSize * newySize * this->fEntrySize + newxSize * 4);
  ppvVar1 = (void **)lVar3;
  this->fData = ppvVar1;
  if (lVar3 != 0) {
    *ppvVar1 = ppvVar1 + this->fxSize;
    if (this->fxSize < 2) {
      ppvVar1 = this->fData;
      goto LAB_0024bbe8;
    }
    iVar2 = this->fEntrySize;
    iVar4 = 1;
    while( true ) {
      this->fData[iVar4] = (void *)((int)(this->fData + iVar4)[-1] + this->fySize * iVar2);
      if (this->fxSize <= iVar4 + 1) break;
      iVar2 = this->fEntrySize;
      iVar4 = iVar4 + 1;
    }
  }
  ppvVar1 = this->fData;
LAB_0024bbe8:
  return ppvVar1 != (void **)0x0;
}

void _c2DArray::DoStream(ReconBuffer *r, bool compressionEnabledForWriting) {
	SInt16 placeHolder;
	SInt16 version;
	Int compressed;
	signed char *current;
	signed char *end;
	ReconBuffer *this;
	ReconBuffer *this;
	signed char *test;
	int repCnt;
	Int size;
	bool isRepeatRun;
	SInt16 token;
	ReconBuffer *this;
	SInt8 dummy;
	SInt16 token;
	bool isRepeatRun;
	UInt16 size;
	int i;
	ReconBuffer *this;
	SInt8 dummy;
	
  bool bVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  undefined8 unaff_s0;
  char *value;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  char *pcVar7;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  ushort placeHolder;
  ushort version;
  ushort local_8c;
  char local_8a [2];
  ushort token;
  char dummy;
  int compressed;
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
  
  local_50 = (undefined4)unaff_s3;
  uStack_4c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_70 = (undefined4)unaff_s1;
  uStack_6c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s6;
  uStack_1c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_30 = (undefined4)unaff_s5;
  uStack_2c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_40 = (undefined4)unaff_s4;
  uStack_3c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_60 = (undefined4)unaff_s2;
  uStack_5c = (undefined4)((ulong)unaff_s2 >> 0x20);
  placeHolder = 0;
  Recon16__11ReconBufferPsi(r,&placeHolder,1);
  version = 0;
  Recon16__11ReconBufferPsi(r,(ushort *)((uint)&placeHolder | 2),1);
  ReconInt__11ReconBufferPii(r,&this->fxSize,1);
  ReconInt__11ReconBufferPii(r,&this->fySize,1);
  ReconInt__11ReconBufferPii(r,&this->fEntrySize,1);
  compressed = (int)compressionEnabledForWriting;
  ReconInt__11ReconBufferPii(r,(int *)((uint)&placeHolder | 0xc),1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Recon.h */
                    /* end of inlined section */
  if (r->fMode == kReading) {
    bVar1 = SetSize__9_c2DArrayii(this,this->fxSize,this->fySize);
    if (!bVar1) {
      return;
    }
    iVar4 = this->fEntrySize;
  }
  else {
    iVar4 = this->fEntrySize;
  }
  value = (char *)*this->fData;
  pcVar7 = (char *)((int)this->fData[this->fxSize + -1] + this->fySize * iVar4);
  if (compressed == 0) {
    Recon8__11ReconBufferPSci(r,value,(int)pcVar7 - (int)value);
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Recon.h */
                    /* end of inlined section */
    bVar1 = value < pcVar7;
    if (r->fMode == kWriting) {
      while (bVar1) {
        uVar3 = 0;
        pcVar5 = value;
        if (bVar1) {
          do {
            uVar3 = 1;
            if (pcVar5 + 1 < pcVar7) {
              bVar1 = true;
              if (pcVar5[1] == *pcVar5) {
                for (pcVar2 = pcVar5 + 2;
                    (uVar3 = uVar3 + 1, pcVar2 < pcVar7 && (*pcVar2 == pcVar5[1]));
                    pcVar2 = pcVar2 + 1) {
                }
                goto LAB_0024bd84;
              }
            }
            else {
LAB_0024bd84:
              bVar1 = (int)uVar3 < 8;
            }
          } while ((bVar1) && (pcVar5 = pcVar5 + uVar3, pcVar5 < pcVar7));
        }
        bVar1 = pcVar5 != value;
        uVar6 = (int)pcVar5 - (int)value;
        if (!bVar1) {
          uVar6 = uVar3;
        }
        if (0x7fff < (int)uVar6) {
          uVar6 = 0x7fff;
        }
        uVar3 = uVar6;
        if (!bVar1) {
          uVar3 = uVar6 | 0x8000;
        }
        local_8c = (ushort)uVar3;
        Recon16__11ReconBufferPsi(r,&local_8c,1);
        if (bVar1) {
          Recon8__11ReconBufferPSci(r,value,uVar6);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Recon.h */
          uVar3 = r->fPosition;
        }
        else {
          Recon8__11ReconBufferPSci(r,value,1);
          uVar3 = r->fPosition;
        }
                    /* end of inlined section */
        if ((uVar3 & 1) != 0) {
          local_8a[0] = '\0';
          Recon8__11ReconBufferPSci(r,local_8a,1);
        }
        value = value + uVar6;
        bVar1 = value < pcVar7;
      }
    }
    else {
      while (bVar1) {
        Recon16__11ReconBufferPsi(r,&token,1);
        uVar3 = token & 0x7fff;
        if ((short)token < 0) {
          Recon8__11ReconBufferPSci(r,value,1);
          iVar4 = 1;
          if (uVar3 < 2) {
            uVar6 = r->fPosition;
          }
          else {
            do {
              pcVar5 = value + iVar4;
              iVar4 = iVar4 + 1;
              *pcVar5 = *value;
            } while (iVar4 < (int)uVar3);
            uVar6 = r->fPosition;
          }
        }
        else {
          Recon8__11ReconBufferPSci(r,value,uVar3);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Recon.h */
          uVar6 = r->fPosition;
        }
                    /* end of inlined section */
        value = value + uVar3;
        if ((uVar6 & 1) != 0) {
          Recon8__11ReconBufferPSci(r,&dummy,1);
        }
        bVar1 = value < pcVar7;
      }
    }
  }
  return;
}

void _c2DArray::CopyFrom(BString &fromName) {
  _c2DArray *src;
  
  src = GetArray__9_c2DArrayRC7BString(fromName);
  CopyFrom__9_c2DArrayP9_c2DArray(this,src);
  return;
}

void _c2DArray::CopyFrom(_c2DArray *src) {
	SInt32 howmuch;
	
  size_t __n;
  
  if ((((src != (_c2DArray *)0x0) && (src->fEntrySize == this->fEntrySize)) &&
      (this->fxSize == src->fxSize)) &&
     ((this->fySize == src->fySize &&
      (__n = (size_t)(this->fxSize * this->fySize * src->fEntrySize), 0 < (long)__n)))) {
    memmove(*this->fData,*src->fData,__n);
  }
  return;
}

void _c2DArray::CopyTo(_c2DArray *dest) {
  CopyFrom__9_c2DArrayP9_c2DArray(dest,this);
  return;
}

void _c2DArray::CopyTo(BString &toName) {
  _c2DArray *dest;
  
  dest = GetArray__9_c2DArrayRC7BString(toName);
  CopyTo__9_c2DArrayP9_c2DArray(this,dest);
  return;
}

_c2DArray* _c2DArray::GetArray(BString &name) {
	_c2DArray *srch;
	
  _c2DArray *p_Var1;
  _c2DArray **pp_Var2;
  bool bVar3;
  
  p_Var1 = _9_c2DArray_sArrayList;
  if (_9_c2DArray_sArrayList != (_c2DArray *)0x0) {
    do {
      bVar3 = __eq__C7BStringRC7BString(&p_Var1->fName,name);
      if (bVar3) {
        return p_Var1;
      }
      pp_Var2 = &p_Var1->fNextArray;
      p_Var1 = *pp_Var2;
    } while (*pp_Var2 != (_c2DArray *)0x0);
  }
  return (_c2DArray *)0x0;
}

void _c2DArray::SetName(BString &name) {
	int cnt;
	Boolean found;
	char appendedName[512];
	
  bool bVar1;
  uint uVar2;
  _c2DArray *p_Var3;
  BString *this_00;
  char appendedName [512];
  
  this_00 = &this->fName;
  RemoveArray__9_c2DArrayP9_c2DArray(this);
  __as__7BStringRC7BString(this_00,name);
  while( true ) {
    uVar2 = length__C7BString(this_00);
    bVar1 = true;
    if (uVar2 != 0) {
      p_Var3 = GetArray__9_c2DArrayRC7BString(this_00);
      bVar1 = p_Var3 != (_c2DArray *)0x0;
    }
    if (!bVar1) break;
    c_str__C7BString(name);
    sprintf(appendedName,"%s%d");
    __as__7BStringPCc(&this->fName,appendedName);
  }
  AddArray__9_c2DArrayP9_c2DArray(this);
  return;
}
