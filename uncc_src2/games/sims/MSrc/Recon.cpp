// STATUS: NOT STARTED

#include "Recon.h"

struct Precision {
private:
	int fBitCount;
	SInt32 fMask;
	
public:
	Precision& operator=();
	Precision();
	Precision();
	Precision();
	SInt32 GetMask();
	int GetBitCount();
	bool Fits();
	void SignExtend();
};

struct Scheme {
private:
	Precision precsn[4];
	
public:
	Scheme& operator=();
	Scheme();
	Scheme();
	int GetSize();
	Precision* GetPrecision();
};

static FILE *dumpFile = NULL;

__vtbl_ptr_type ReconObject virtual table[5] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ReconObject::~ReconObject,
		/* .__delta2 = */ 21456
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ReconObject::DoStream,
		/* .__delta2 = */ 21504
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ReconObject::GetType,
		/* .__delta2 = */ 21512
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

static Scheme scheme8;
static Scheme scheme16;
static Scheme scheme32;
static Scheme schemeVer1;

void SetReconDumpFile(char *fname) {
  if (dumpFile != (__sFILE__432_30 *)0x0) {
    fclose(dumpFile);
    dumpFile = (__sFILE__432_30 *)0x0;
  }
  if (fname != (char *)0x0) {
    dumpFile = fopen(fname,"w");
  }
  return;
}

ReconBuffer* ReconBuffer::ReconBuffer(void *data, SInt32 size, Mode mode, Boolean swizzle) {
  this->fData = data;
  this->fSize = size;
  this->fMode = mode;
  this->fSwizzle = swizzle;
  this->fPosition = 0;
  *(undefined4 *)&this->fUsesStringTable = 0;
  *(undefined4 *)&this->fCmprsOn = 0;
  this->fStrings = (StringSet *)0x0;
  this->fLastStringIndex = 0;
  this->fNextMask = 0;
  this->fMarkPos = 0;
  return this;
}

ReconBuffer* ReconBuffer::ReconBuffer() {
  this->fData = (void *)0x0;
  this->fMode = kCounting;
  this->fSize = 0;
  this->fPosition = 0;
  this->fSwizzle = 0;
  *(undefined4 *)&this->fUsesStringTable = 0;
  *(undefined4 *)&this->fCmprsOn = 0;
  this->fStrings = (StringSet *)0x0;
  this->fLastStringIndex = 0;
  this->fNextMask = 0;
  this->fMarkPos = 0;
  return this;
}

void ReconBuffer::~ReconBuffer(int __in_chrg) {
	ReconBuffer *this;
	void *pAddress;
	
  StringSet *pSVar1;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Recon.h */
                    /* end of inlined section */
  if (this->fMode == kWriting) {
    pSVar1 = this->fStrings;
    if (pSVar1 != (StringSet *)0x0) {
      (*(code *)pSVar1->__vtable[1].LoadRes)
                ((int)&pSVar1->__vtable + (int)*(short *)&pSVar1->__vtable[1].SetLocInfo);
    }
  }
  DestroyInstance__9StringSetP9StringSet(this->fStrings);
  this->fStrings = (StringSet *)0x0;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

void ReconBuffer::UseStringTable(iResFile *file, ResType type, SInt16 id) {
	ReconBuffer *this;
	ReconBuffer *this;
	
  StringSet__vtable *pSVar1;
  StringSet *pSVar2;
  
  *(undefined4 *)&this->fUsesStringTable = 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Recon.h */
                    /* end of inlined section */
  if (this->fMode != kCounting) {
    pSVar2 = CreateInstance__9StringSet();
    this->fStrings = pSVar2;
    (*(code *)pSVar2->__vtable[1].GetLocString)
              ((int)&pSVar2->__vtable + (int)*(short *)&pSVar2->__vtable[1].GetString,file,id,type,0
               ,0xffffffffffffffff);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Recon.h */
                    /* end of inlined section */
    if (this->fMode == kReading) {
      pSVar1 = this->fStrings->__vtable;
      (*(code *)pSVar1[1].SetInfo)
                ((int)&this->fStrings->__vtable + (int)*(short *)&pSVar1[1].SetName,0,1);
    }
  }
  return;
}

void ReconBuffer::EnableCompression() {
  *(undefined4 *)&this->fCmprsOn = 1;
  return;
}

void ReconBuffer::ReconCmprInt(SInt32 *value, Scheme *sch) {
	SInt32 nonZero;
	SInt32 size;
	Scheme *this;
	SInt32 intVal;
	SInt32 intVal;
	Precision *this;
	SInt32 tmp;
	SInt32 intVal;
	SInt32 tmp;
	SInt32 intVal;
	SInt32 tmp;
	SInt32 intVal;
	SInt32 tmp;
	Scheme *this;
	int size;
	SInt32 nonZero;
	SInt32 size;
	Scheme *this;
	int size;
	SInt32 *value;
	
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  uint local_60;
  int local_5c;
  int nonZero;
  int size;
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
  
  local_20 = (undefined4)unaff_s3;
  uStack_1c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if (this->fMode + ~kReading < 2) {
    local_60 = (uint)(*value != 0);
    ReconBits__11ReconBufferiPi(this,1,(int *)&local_60);
    if (local_60 != 0) {
      uVar4 = *value;
      uVar1 = sch->precsn[0].fMask;
      uVar3 = uVar4 & uVar1;
      bVar2 = false;
      if ((uVar3 == uVar1) || (uVar3 == 0)) {
        bVar2 = true;
      }
      if (bVar2) {
        local_5c = 0;
      }
      else {
        uVar1 = sch->precsn[1].fMask;
        uVar3 = uVar4 & uVar1;
        bVar2 = false;
        if ((uVar3 == uVar1) || (uVar3 == 0)) {
          bVar2 = true;
        }
        local_5c = 1;
        if (!bVar2) {
          uVar1 = sch->precsn[2].fMask;
          uVar3 = uVar4 & uVar1;
          bVar2 = false;
          if ((uVar3 == uVar1) || (uVar3 == 0)) {
            bVar2 = true;
          }
          local_5c = 2;
          if (!bVar2) {
            uVar1 = sch->precsn[3].fMask;
            uVar4 = uVar4 & uVar1;
            bVar2 = false;
            if ((uVar4 == uVar1) || (uVar4 == 0)) {
              bVar2 = true;
            }
            local_5c = 4;
            if (bVar2) {
              local_5c = 3;
            }
          }
        }
      }
      ReconBits__11ReconBufferiPi(this,2,(int *)((uint)&local_60 | 4));
      ReconBits__11ReconBufferiPi(this,sch->precsn[local_5c].fBitCount,value);
    }
  }
  else {
    ReconBits__11ReconBufferiPi(this,1,(int *)((uint)&local_60 | 8));
    if (nonZero == 0) {
      *value = 0;
    }
    else {
      ReconBits__11ReconBufferiPi(this,2,(int *)((uint)&local_60 | 0xc));
      ReconBits__11ReconBufferiPi(this,sch->precsn[size].fBitCount,value);
      uVar4 = sch->precsn[size].fMask;
      if ((*value & uVar4) != 0) {
        *value = *value | uVar4;
      }
    }
  }
  return;
}

void ReconBuffer::ReconBits(Int bitCount, SInt32 *bitVal) {
	UInt8 *dest;
	UInt32 mask;
	UInt32 destMask;
	UInt8 *src;
	UInt32 mask;
	UInt32 srcMask;
	
  byte bVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  
  if ((dumpFile != (__sFILE__432_30 *)0x0) && (this->fMode != kReading)) {
    fprintf(dumpFile,"bit %d, %d at %d:%d\n");
  }
  if (this->fMode == kCounting) {
    if (7 < bitCount) {
      iVar4 = this->fPosition;
      do {
        bitCount = bitCount + -8;
        iVar4 = iVar4 + 1;
      } while (7 < bitCount);
      this->fPosition = iVar4;
    }
    while (0 < bitCount) {
      iVar4 = this->fNextMask;
      bitCount = bitCount + -1;
      if (iVar4 == 0) {
        this->fNextMask = 0x80;
        this->fPosition = this->fPosition + 1;
        iVar4 = this->fNextMask;
      }
      this->fNextMask = iVar4 / 2;
    }
    return;
  }
  iVar4 = this->fPosition;
  if (this->fMode == kWriting) {
    uVar5 = 1 << (bitCount - 1U & 0x1f);
    uVar7 = this->fNextMask;
    pbVar6 = (byte *)((int)this->fData + iVar4 + -1);
    if (uVar5 != 0) {
      do {
        if (uVar7 == 0) {
          pbVar6 = pbVar6 + 1;
          uVar7 = 0x80;
          *pbVar6 = 0;
          uVar2 = *bitVal;
        }
        else {
          uVar2 = *bitVal;
        }
        uVar2 = uVar2 & uVar5;
        uVar5 = uVar5 >> 1;
        if (uVar2 != 0) {
          *pbVar6 = *pbVar6 | (byte)uVar7;
        }
        uVar7 = uVar7 >> 1;
      } while (uVar5 != 0);
      pvVar3 = this->fData;
      goto LAB_0021416c;
    }
  }
  else {
    pvVar3 = this->fData;
    uVar7 = this->fNextMask;
    *bitVal = 0;
    pbVar6 = (byte *)((int)pvVar3 + iVar4 + -1);
    for (uVar5 = 1 << (bitCount - 1U & 0x1f); uVar5 != 0; uVar5 = uVar5 >> 1) {
      if (uVar7 == 0) {
        pbVar6 = pbVar6 + 1;
        uVar7 = 0x80;
        bVar1 = *pbVar6;
      }
      else {
        bVar1 = *pbVar6;
      }
      if ((bVar1 & uVar7) != 0) {
        *bitVal = *bitVal | uVar5;
      }
      uVar7 = uVar7 >> 1;
    }
  }
  pvVar3 = this->fData;
LAB_0021416c:
  this->fNextMask = uVar7;
  this->fPosition = (int)(pbVar6 + (1 - (int)pvVar3));
  return;
}

void ReconBuffer::PadBits() {
  this->fNextMask = 0;
  return;
}

void ReconBuffer::Recon8(SInt8 *value, Int numelems) {
	char *src;
	char *dest;
	SInt32 intVal;
	SInt32 intVal;
	
  bool bVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  int local_60;
  int intVal;
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
  
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s3;
  uStack_1c = (undefined4)((ulong)unaff_s3 >> 0x20);
  if (*(int *)&this->fCmprsOn == 0) {
    if (this->fMode == kCounting) {
      this->fPosition = this->fPosition + numelems;
    }
    else {
      if (this->fMode == kReading) {
        pcVar3 = value;
        value = (char *)((int)this->fData + this->fPosition);
      }
      else {
        pcVar3 = (char *)((int)this->fData + this->fPosition);
      }
      iVar4 = numelems + -1;
      if (0 < numelems) {
        do {
          cVar2 = *value;
          value = value + 1;
          *pcVar3 = cVar2;
          pcVar3 = pcVar3 + 1;
          bVar1 = 0 < iVar4;
          this->fPosition = this->fPosition + 1;
          iVar4 = iVar4 + -1;
        } while (bVar1);
      }
    }
  }
  else if (this->fMode + ~kReading < 2) {
    iVar4 = numelems + -1;
    if (0 < numelems) {
      do {
        local_60 = (int)*value;
        value = value + 1;
        ReconCmprInt__11ReconBufferPiP6Scheme(this,&local_60,&scheme8);
        bVar1 = 0 < iVar4;
        iVar4 = iVar4 + -1;
      } while (bVar1);
    }
  }
  else {
    iVar4 = numelems + -1;
    if (0 < numelems) {
      do {
        ReconCmprInt__11ReconBufferPiP6Scheme(this,&intVal,&scheme8);
        *value = (char)intVal;
        bVar1 = 0 < iVar4;
        value = value + 1;
        iVar4 = iVar4 + -1;
      } while (bVar1);
    }
  }
  return;
}

void ReconBuffer::ReconBool(bool *value) {
	SInt8 byte;
	
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  char byte;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s0;
  uStack_1c = (undefined4)((ulong)unaff_s0 >> 0x20);
  byte = (char)*(undefined4 *)value;
  Recon8__11ReconBufferPSci(this,&byte,1);
  *(uint *)value = (uint)(byte != '\0');
  return;
}

void ReconBuffer::Recon16(SInt16 *value, Int numelems) {
	char *src;
	char *dest;
	SInt32 intVal;
	SInt32 intVal;
	
  bool bVar1;
  ushort *puVar2;
  int iVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  int local_60;
  int intVal;
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
  
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s3;
  uStack_1c = (undefined4)((ulong)unaff_s3 >> 0x20);
  if (*(int *)&this->fCmprsOn == 0) {
    if (this->fMode == kCounting) {
      this->fPosition = this->fPosition + numelems * 2;
    }
    else {
      if (this->fMode == kReading) {
        puVar2 = value;
        value = (ushort *)((int)this->fData + this->fPosition);
      }
      else {
        puVar2 = (ushort *)((int)this->fData + this->fPosition);
      }
      iVar3 = numelems + -1;
      if (0 < numelems) {
        do {
          if (this->fSwizzle == 0) {
            *puVar2 = *value;
          }
          else {
            *(undefined *)puVar2 = *(undefined *)((int)value + 1);
            *(undefined *)((int)puVar2 + 1) = *(undefined *)value;
          }
          value = value + 1;
          puVar2 = puVar2 + 1;
          bVar1 = 0 < iVar3;
          this->fPosition = this->fPosition + 2;
          iVar3 = iVar3 + -1;
        } while (bVar1);
      }
    }
  }
  else if (this->fMode + ~kReading < 2) {
    iVar3 = numelems + -1;
    if (0 < numelems) {
      do {
        local_60 = (int)(short)*value;
        value = value + 1;
        ReconCmprInt__11ReconBufferPiP6Scheme(this,&local_60,&scheme16);
        bVar1 = 0 < iVar3;
        iVar3 = iVar3 + -1;
      } while (bVar1);
    }
  }
  else {
    iVar3 = numelems + -1;
    if (0 < numelems) {
      do {
        ReconCmprInt__11ReconBufferPiP6Scheme(this,&intVal,&scheme16);
        *value = (ushort)intVal;
        bVar1 = 0 < iVar3;
        value = value + 1;
        iVar3 = iVar3 + -1;
      } while (bVar1);
    }
  }
  return;
}

void ReconBuffer::ReconInt(Int *value, Int numelems) {
  Recon32__11ReconBufferPii(this,value,numelems);
  return;
}

void ReconBuffer::Recon32(SInt32 *value, Int numelems) {
	char *src;
	char *dest;
	SInt32 intVal;
	SInt32 intVal;
	
  bool bVar1;
  int *pSource;
  undefined8 unaff_s0;
  int *pDest;
  undefined8 unaff_s1;
  int iVar2;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  int local_60;
  int intVal;
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
  
  local_20 = (undefined4)unaff_s3;
  uStack_1c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  if (*(int *)&this->fCmprsOn == 0) {
    if (this->fMode == kCounting) {
      this->fPosition = this->fPosition + numelems * 4;
    }
    else {
      if (this->fMode == kReading) {
        pSource = (int *)((int)this->fData + this->fPosition);
        pDest = value;
      }
      else {
        pDest = (int *)((int)this->fData + this->fPosition);
        pSource = value;
      }
      iVar2 = numelems + -1;
      if (0 < numelems) {
        do {
          if (this->fSwizzle == 0) {
            memcpy(pDest,pSource,4);
          }
          else {
            *(undefined *)pDest = *(undefined *)((int)pSource + 3);
            *(undefined *)((int)pDest + 1) = *(undefined *)((int)pSource + 2);
            *(undefined *)((int)pDest + 2) = *(undefined *)((int)pSource + 1);
            *(undefined *)((int)pDest + 3) = *(undefined *)pSource;
          }
          pSource = pSource + 1;
          pDest = pDest + 1;
          bVar1 = 0 < iVar2;
          this->fPosition = this->fPosition + 4;
          iVar2 = iVar2 + -1;
        } while (bVar1);
      }
    }
  }
  else if (this->fMode + ~kReading < 2) {
    iVar2 = numelems + -1;
    if (0 < numelems) {
      do {
        local_60 = *value;
        value = value + 1;
        ReconCmprInt__11ReconBufferPiP6Scheme(this,&local_60,&scheme32);
        bVar1 = 0 < iVar2;
        iVar2 = iVar2 + -1;
      } while (bVar1);
    }
  }
  else {
    iVar2 = numelems + -1;
    if (0 < numelems) {
      do {
        ReconCmprInt__11ReconBufferPiP6Scheme(this,&intVal,&scheme32);
        *value = intVal;
        bVar1 = 0 < iVar2;
        value = value + 1;
        iVar2 = iVar2 + -1;
      } while (bVar1);
    }
  }
  return;
}

void ReconBuffer::ReconFloat(float *value, Int numelems) {
	char *src;
	char *dest;
	SInt32 intVal;
	SInt32 intVal;
	
  bool bVar1;
  int iVar2;
  undefined8 unaff_s0;
  float *pSource;
  undefined8 unaff_s1;
  float *pDest;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  float local_60;
  int intVal;
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
  
  local_20 = (undefined4)unaff_s3;
  uStack_1c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  if (*(int *)&this->fCmprsOn == 0) {
    if (this->fMode == kCounting) {
      this->fPosition = this->fPosition + numelems * 4;
    }
    else {
      if (this->fMode == kReading) {
        pSource = (float *)((int)this->fData + this->fPosition);
        pDest = value;
      }
      else {
        pDest = (float *)((int)this->fData + this->fPosition);
        pSource = value;
      }
      iVar2 = numelems + -1;
      if (0 < numelems) {
        do {
          memcpy(pDest,pSource,4);
          pDest = pDest + 1;
          bVar1 = 0 < iVar2;
          this->fPosition = this->fPosition + 4;
          pSource = pSource + 1;
          iVar2 = iVar2 + -1;
        } while (bVar1);
      }
    }
  }
  else if (this->fMode + ~kReading < 2) {
    iVar2 = numelems + -1;
    if (0 < numelems) {
      do {
        local_60 = *value;
        value = value + 1;
        ReconCmprInt__11ReconBufferPiP6Scheme(this,(int *)&local_60,&scheme32);
        bVar1 = 0 < iVar2;
        iVar2 = iVar2 + -1;
      } while (bVar1);
    }
  }
  else {
    iVar2 = numelems + -1;
    if (0 < numelems) {
      do {
        ReconCmprInt__11ReconBufferPiP6Scheme(this,&intVal,&scheme32);
        *value = (float)intVal;
        bVar1 = 0 < iVar2;
        value = value + 1;
        iVar2 = iVar2 + -1;
      } while (bVar1);
    }
  }
  return;
}

void ReconBuffer::ReconMark() {
	SInt32 *lastMark;
	
  int iVar1;
  Mode__6_4959 MVar2;
  void *pDest;
  
  if (*(int *)&this->fCmprsOn == 0) {
    MVar2 = this->fMode;
  }
  else {
    PadBits__11ReconBuffer(this);
    MVar2 = this->fMode;
  }
  if (MVar2 != kCounting) {
    if (MVar2 == kWriting) {
      if (this->fMarkPos == 0) {
LAB_0021482c:
        iVar1 = this->fPosition;
      }
      else {
        pDest = (void *)((int)this->fData + this->fMarkPos);
        memcpy(pDest,&this->fPosition,4);
        if (this->fSwizzle != 0) {
          Swizzle4__FPv(pDest);
          goto LAB_0021482c;
        }
        iVar1 = this->fPosition;
      }
      this->fMarkPos = iVar1;
      memset((void *)((int)this->fData + iVar1),0,4);
      iVar1 = this->fPosition;
      goto LAB_00214880;
    }
    memcpy(&this->fMarkPos,(void *)((int)this->fData + this->fPosition),4);
    if (this->fSwizzle == 0) {
      iVar1 = this->fPosition;
      goto LAB_00214880;
    }
    Swizzle4__FPv(&this->fMarkPos);
  }
  iVar1 = this->fPosition;
LAB_00214880:
  this->fPosition = iVar1 + 4;
  return;
}

void ReconBuffer::ReadToNextMark() {
  Mode__6_4959 MVar1;
  
  if (*(int *)&this->fCmprsOn == 0) {
    MVar1 = this->fMode;
  }
  else {
    PadBits__11ReconBuffer(this);
    MVar1 = this->fMode;
  }
  if (MVar1 == kReading) {
    this->fPosition = this->fMarkPos;
  }
  return;
}

void ReconBuffer::ReconString(BString &str) {
  short sVar1;
  StringSet *pSVar2;
  StringSet__vtable *pSVar3;
  void *pvVar4;
  char *pcVar5;
  uint uVar6;
  long lVar7;
  Mode__6_4959 MVar8;
  int iVar9;
  
  if (*(int *)&this->fUsesStringTable == 0) {
    if (*(int *)&this->fCmprsOn == 0) {
      MVar8 = this->fMode;
    }
    else {
      PadBits__11ReconBuffer(this);
      MVar8 = this->fMode;
    }
    if (MVar8 != kCounting) {
      if (MVar8 == kReading) {
        __as__7BStringPCc(str,(char *)((int)this->fData + this->fPosition));
      }
      else if (MVar8 == kWriting) {
        pvVar4 = this->fData;
        iVar9 = this->fPosition;
        pcVar5 = c_str__C7BString(str);
        strcpy((char *)((int)pvVar4 + iVar9),pcVar5);
      }
    }
    uVar6 = length__C7BString(str);
    uVar6 = this->fPosition + 1 + uVar6;
    this->fPosition = uVar6;
    if ((uVar6 & 1) != 0) {
      this->fPosition = uVar6 + 1;
    }
  }
  else {
    iVar9 = this->fLastStringIndex + 1;
    this->fLastStringIndex = iVar9;
    if (this->fMode != kCounting) {
      if (this->fMode == kWriting) {
        pSVar2 = this->fStrings;
        pSVar3 = pSVar2->__vtable;
        sVar1 = *(short *)&pSVar3->SetInfo;
        pcVar5 = c_str__C7BString(str);
        (*(code *)pSVar3->SetLocInfo)
                  ((int)&pSVar2->__vtable + (int)sVar1,iVar9,pcVar5,0xffffffffffffffff);
      }
      else {
        pSVar3 = this->fStrings->__vtable;
        lVar7 = (*(code *)pSVar3->RemoveString)
                          ((int)&this->fStrings->__vtable + (int)*(short *)&pSVar3->InsertString,
                           iVar9,0xffffffffffffffff);
        if (lVar7 == 0) {
          lVar7 = 0x3b88b0;
        }
        __as__7BStringPCc(str,(char *)lVar7);
      }
    }
  }
  return;
}

void ReconBuffer::ReconString(BString2 &str) {
	c16 *out;
	c16 *out;
	
  short sVar1;
  StringSet *pSVar2;
  StringSet__vtable *pSVar3;
  Mode__6_4959 MVar4;
  short *psVar5;
  uint uVar6;
  long lVar7;
  undefined2 *puVar8;
  int iVar9;
  
  if (*(int *)&this->fUsesStringTable != 0) {
    iVar9 = this->fLastStringIndex + 1;
    this->fLastStringIndex = iVar9;
    if (this->fMode == kCounting) {
      return;
    }
    if (this->fMode != kWriting) {
      pSVar3 = this->fStrings->__vtable;
      lVar7 = (*(code *)pSVar3->RemoveString)
                        ((int)&this->fStrings->__vtable + (int)*(short *)&pSVar3->InsertString,iVar9
                         ,0xffffffffffffffff);
      if (lVar7 == 0) {
        lVar7 = 0x3b88b0;
      }
      assignDebug__8BString2PCc(str,(char *)lVar7);
      return;
    }
    pSVar2 = this->fStrings;
    pSVar3 = pSVar2->__vtable;
    sVar1 = *(short *)&pSVar3->LoadRes;
    psVar5 = c_str__C8BString2(str);
    (*(code *)pSVar3->LoadLocRes)
              ((int)&pSVar2->__vtable + (int)sVar1,iVar9,psVar5,0xffffffffffffffff);
    return;
  }
  if (*(int *)&this->fCmprsOn == 0) {
    uVar6 = this->fPosition;
  }
  else {
    PadBits__11ReconBuffer(this);
    uVar6 = this->fPosition;
  }
  if ((uVar6 & 1) != 0) {
    this->fPosition = uVar6 + 1 & 0xfffffffe;
  }
  MVar4 = this->fMode;
  if (MVar4 == kCounting) {
LAB_00214c18:
    uVar6 = length__C8BString2(str);
    iVar9 = this->fPosition;
    uVar6 = (uVar6 + 2) * 2;
  }
  else {
    if (MVar4 != kReading) {
      uVar6 = this->fPosition;
      if (MVar4 != kWriting) goto LAB_00214c38;
      if ((uVar6 & 1) != 0) {
        this->fPosition = uVar6 + 1;
      }
      puVar8 = (undefined2 *)((int)this->fData + this->fPosition);
      *puVar8 = 0xfffe;
      psVar5 = c_str__C8BString2(str);
      wcscpy__FPUsPCUs(puVar8 + 1,psVar5);
      goto LAB_00214c18;
    }
    psVar5 = (short *)((int)this->fData + this->fPosition);
    if (((uint)psVar5 & 1) == 0) {
      if (*psVar5 == -2) {
        __as__8BString2PCUs(str,psVar5 + 1);
        goto LAB_00214c18;
      }
      if (*psVar5 == -0x101) {
        uVar6 = this->fPosition;
        goto LAB_00214c38;
      }
    }
    assignDebug__8BString2PCc(str,(char *)((int)this->fData + this->fPosition));
    uVar6 = length__C8BString2(str);
    iVar9 = this->fPosition + 1;
  }
  this->fPosition = iVar9 + uVar6;
  uVar6 = this->fPosition;
LAB_00214c38:
  if ((uVar6 & 1) != 0) {
    this->fPosition = uVar6 + 1;
  }
  return;
}

void ReconBuffer::ReconString(StringBuffer &str) {
  short sVar1;
  StringSet *pSVar2;
  StringSet__vtable *pSVar3;
  void *pvVar4;
  char *pcVar5;
  Mode__6_4959 MVar6;
  uint uVar7;
  int iVar8;
  
  if (*(int *)&this->fUsesStringTable == 0) {
    if (*(int *)&this->fCmprsOn == 0) {
      MVar6 = this->fMode;
    }
    else {
      PadBits__11ReconBuffer(this);
      MVar6 = this->fMode;
    }
    if (MVar6 != kCounting) {
      if (MVar6 == kReading) {
        copy__12StringBufferPCc(str,(char *)((int)this->fData + this->fPosition));
      }
      else if (MVar6 == kWriting) {
        pvVar4 = this->fData;
        iVar8 = this->fPosition;
        pcVar5 = c_str__C12StringBuffer(str);
        strcpy((char *)((int)pvVar4 + iVar8),pcVar5);
      }
    }
    iVar8 = length__C12StringBuffer(str);
    uVar7 = this->fPosition + 1 + iVar8;
    this->fPosition = uVar7;
    if ((uVar7 & 1) != 0) {
      this->fPosition = uVar7 + 1;
    }
  }
  else {
    iVar8 = this->fLastStringIndex + 1;
    this->fLastStringIndex = iVar8;
    if (this->fMode != kCounting) {
      if (this->fMode == kWriting) {
        pSVar2 = this->fStrings;
        pSVar3 = pSVar2->__vtable;
        sVar1 = *(short *)&pSVar3->SetInfo;
        pcVar5 = c_str__C12StringBuffer(str);
        (*(code *)pSVar3->SetLocInfo)
                  ((int)&pSVar2->__vtable + (int)sVar1,iVar8,pcVar5,0xffffffffffffffff);
      }
      else {
        pSVar3 = this->fStrings->__vtable;
        pcVar5 = (char *)(*(code *)pSVar3->RemoveString)
                                   ((int)&this->fStrings->__vtable +
                                    (int)*(short *)&pSVar3->InsertString,iVar8,0xffffffffffffffff);
        copy__12StringBufferPCc(str,pcVar5);
      }
    }
  }
  return;
}

void ReconBuffer::ReconString(StringBuffer2 &str) {
	c16 *out;
	c16 *out;
	
  short sVar1;
  StringSet *pSVar2;
  StringSet__vtable *pSVar3;
  Mode__6_4959 MVar4;
  short *psVar5;
  char *str_00;
  int iVar6;
  uint uVar7;
  undefined2 *puVar8;
  int iVar9;
  
  if (*(int *)&this->fUsesStringTable != 0) {
    iVar9 = this->fLastStringIndex + 1;
    this->fLastStringIndex = iVar9;
    if (this->fMode == kCounting) {
      return;
    }
    if (this->fMode != kWriting) {
      pSVar3 = this->fStrings->__vtable;
      str_00 = (char *)(*(code *)pSVar3->RemoveString)
                                 ((int)&this->fStrings->__vtable +
                                  (int)*(short *)&pSVar3->InsertString,iVar9,0xffffffffffffffff);
      assignDebug__13StringBuffer2PCc(str,str_00);
      return;
    }
    pSVar2 = this->fStrings;
    pSVar3 = pSVar2->__vtable;
    sVar1 = *(short *)&pSVar3->LoadRes;
    psVar5 = c_str__C13StringBuffer2(str);
    (*(code *)pSVar3->LoadLocRes)
              ((int)&pSVar2->__vtable + (int)sVar1,iVar9,psVar5,0xffffffffffffffff);
    return;
  }
  if (*(int *)&this->fCmprsOn == 0) {
    uVar7 = this->fPosition;
  }
  else {
    PadBits__11ReconBuffer(this);
    uVar7 = this->fPosition;
  }
  if ((uVar7 & 1) != 0) {
    this->fPosition = uVar7 + 1 & 0xfffffffe;
  }
  MVar4 = this->fMode;
  if (MVar4 == kCounting) {
LAB_00214f58:
    iVar6 = length__C13StringBuffer2(str);
    iVar9 = this->fPosition;
    iVar6 = (iVar6 + 2) * 2;
  }
  else {
    if (MVar4 != kReading) {
      if (MVar4 != kWriting) {
        uVar7 = this->fPosition;
        goto LAB_00214f78;
      }
      puVar8 = (undefined2 *)((int)this->fData + this->fPosition);
      *puVar8 = 0xfffe;
      psVar5 = c_str__C13StringBuffer2(str);
      wcscpy__FPUsPCUs(puVar8 + 1,psVar5);
      goto LAB_00214f58;
    }
    psVar5 = (short *)((int)this->fData + this->fPosition);
    if (*psVar5 == -2) {
      copy__13StringBuffer2PCUs(str,psVar5 + 1);
      goto LAB_00214f58;
    }
    if (*psVar5 == -0x101) {
      uVar7 = this->fPosition;
      goto LAB_00214f78;
    }
    assignDebug__13StringBuffer2PCc(str,(char *)psVar5);
    iVar6 = length__C13StringBuffer2(str);
    iVar9 = this->fPosition + 1;
  }
  this->fPosition = iVar9 + iVar6;
  uVar7 = this->fPosition;
LAB_00214f78:
  if ((uVar7 & 1) != 0) {
    this->fPosition = uVar7 + 1;
  }
  return;
}

HandleNode* ReconBuilder::Compact(ReconObject *recon, SInt32 version) {
	SInt32 size;
	ReconBuffer rb2;
	ReconBuffer rb;
	SInt32 size;
	HandleNode *ptr;
	
  HandleNode *pHVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint size;
  ReconBuffer rb2;
  
  __11ReconBuffer(&rb2);
  (*(code *)recon->__vtable[1].ReconObject)
            ((int)&recon->__vtable + (int)*(short *)(recon->__vtable + 1),&rb2,version);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Recon.h */
                    /* end of inlined section */
  ___11ReconBuffer(&rb2,2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
  size = rb2.fPosition + 0xc;
  pHVar1 = (HandleNode *)malloc(0xc);
  pHVar1->allocSize = size;
  if (size == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = (undefined *)malloc(size);
  }
  pHVar1->ptr = puVar2;
                    /* end of inlined section */
  *(undefined4 *)&pHVar1->owned = 1;
  if (pHVar1 == (HandleNode *)0x0) {
    pHVar1 = (HandleNode *)0x0;
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(int *)(puVar2 + 4) = version;
    uVar3 = (*(code *)recon->__vtable[1].GetType)
                      ((int)&recon->__vtable + (int)*(short *)&recon->__vtable[1].DoStream);
    *(undefined4 *)(puVar2 + 8) = uVar3;
    __11ReconBufferPviQ211ReconBuffer4ModeUs(&rb2,puVar2 + 0xc,rb2.fPosition,kWriting,0);
    (*(code *)recon->__vtable[1].ReconObject)
              ((int)&recon->__vtable + (int)*(short *)(recon->__vtable + 1),&rb2,version);
    ___11ReconBuffer(&rb2,2);
  }
  return pHVar1;
}

ErrType ReconBuilder::Compact(ReconObject *recon, SInt32 version, iResFile *pFile, SInt16 id) {
	HandleNode *res;
	ResourceName empty;
	ErrType err;
	HandleNode *mem;
	
  short sVar1;
  iResFile__6_5027__vtable *piVar2;
  HandleNode *pAddress;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  StackString_64_ empty;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
  __12StringBufferPcUi(&empty.field0_0x0,(char *)((uint)&empty | 8),0x40);
                    /* end of inlined section */
  pAddress = Compact__12ReconBuilderP11ReconObjecti(this,recon,version);
  if (pAddress == (HandleNode *)0x0) {
    iVar3 = -1;
  }
  else {
    piVar2 = pFile->__vtable;
    sVar1 = *(short *)&piVar2[1].FindUniqueName;
    uVar5 = (*(code *)recon->__vtable[1].GetType)
                      ((int)&recon->__vtable + (int)*(short *)&recon->__vtable[1].DoStream);
    (*(code *)piVar2[1].FindUniqueID)
              ((int)&pFile->fNextFile + (int)sVar1,pAddress,uVar5,id,&empty,1);
    iVar3 = GetError__8iResFile((iResFile__0_3211 *)pFile);
    if (iVar3 == 0) {
      (*(code *)pFile->__vtable[1].SetID)
                ((int)&pFile->fNextFile + (int)*(short *)&pFile->__vtable[1].IsLittleEndian,pAddress
                );
      iVar4 = GetError__8iResFile((iResFile__0_3211 *)pFile);
      iVar3 = 0;
      if (iVar4 != 0) {
        (*(code *)pFile->__vtable[1].AddWithLanguage)
                  ((int)&pFile->fNextFile + (int)*(short *)&pFile->__vtable[1].Add,pAddress);
        iVar3 = iVar4;
      }
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
      if (*(int *)&pAddress->owned != 0) {
        free(pAddress->ptr);
      }
      free(pAddress);
                    /* end of inlined section */
    }
  }
  return iVar3;
}

ErrType ReconBuilder::Reconstitute(ReconObject *recon, iResFile *pFile, SInt16 id, SInt32 *version) {
	HandleNode *res;
	
  short sVar1;
  iResFile__6_5027__vtable *piVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  
  piVar2 = pFile->__vtable;
  sVar1 = *(short *)&piVar2->AddWithLanguage;
  uVar4 = (*(code *)recon->__vtable[1].GetType)
                    ((int)&recon->__vtable + (int)*(short *)&recon->__vtable[1].DoStream);
  lVar5 = (*(code *)piVar2->Write)((int)&pFile->fNextFile + (int)sVar1,uVar4,id,0x215398);
  if (lVar5 == 0) {
    iVar3 = GetError__8iResFile((iResFile__0_3211 *)pFile);
  }
  else {
    Reconstitute__12ReconBuilderP11ReconObjectPQ26Memory10HandleNodePi
              (this,recon,(HandleNode *)lVar5,version);
    iVar3 = 0;
  }
  return iVar3;
}

void ReconBuilder::Reconstitute(ReconObject *recon, HandleNode *hmem, SInt32 *version) {
	MPtr data;
	ReconBuffer rb;
	HandleNode *mem;
	HandleNode *mem;
	
  char *pcVar1;
  uint size;
  ReconObject__vtable *pRVar2;
  ReconBuffer rb;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
  size = 0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
  pcVar1 = (char *)hmem->ptr;
  if (hmem != (HandleNode *)0x0) {
    size = hmem->allocSize;
  }
                    /* end of inlined section */
  __11ReconBufferPviQ211ReconBuffer4ModeUs(&rb,pcVar1 + 0xc,size,kReading,(short)*pcVar1);
  if (version == (int *)0x0) {
    pRVar2 = recon->__vtable;
  }
  else {
    *version = *(int *)(pcVar1 + 4);
    pRVar2 = recon->__vtable;
  }
  (*(code *)pRVar2[1].ReconObject)
            ((int)&recon->__vtable + (int)*(short *)(pRVar2 + 1),&rb,*(undefined4 *)(pcVar1 + 4));
  ___11ReconBuffer(&rb,2);
  return;
}

void ReconBuilder::Swizzle(void *recon, SInt32 size) {
  *(undefined *)recon = 1;
  Swizzle4__FPv((void *)((int)recon + 4));
  Swizzle4__FPv((void *)((int)recon + 8));
  return;
}

void ReconObject::~ReconObject(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (ReconObject__vtable *)_vt_11ReconObject;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

void ReconObject::DoStream(ReconBuffer *r, SInt32 version) {
  return;
}

SInt32 ReconObject::GetType() {
  return 0x52636f6e;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  bool bVar1;
  int iVar2;
  
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
    iVar2 = 2;
    do {
      bVar1 = iVar2 != -1;
      iVar2 = iVar2 + -1;
    } while (bVar1);
    scheme8.precsn[0] = (Precision)0xfffffffe00000002;
    scheme8.precsn[1] = (Precision)0xfffffff800000004;
    scheme8.precsn[2] = (Precision)0xffffffe000000006;
    scheme8.precsn[3] = (Precision)0xffffff8000000008;
    iVar2 = 2;
    do {
      bVar1 = iVar2 != -1;
      iVar2 = iVar2 + -1;
    } while (bVar1);
    scheme16.precsn[0] = (Precision)0xfffffff000000005;
    scheme16.precsn[1] = (Precision)0xffffff8000000008;
    scheme16.precsn[2] = (Precision)0xfffff0000000000d;
    scheme16.precsn[3] = (Precision)0xffff800000000010;
    iVar2 = 2;
    do {
      bVar1 = iVar2 != -1;
      iVar2 = iVar2 + -1;
    } while (bVar1);
    scheme32.precsn[0] = (Precision)0xffffffe000000006;
    scheme32.precsn[1] = (Precision)0xfffffc000000000b;
    scheme32.precsn[2] = (Precision)0xfff0000000000015;
    scheme32.precsn[3] = (Precision)0x8000000000000020;
    iVar2 = 2;
    do {
      bVar1 = iVar2 != -1;
      iVar2 = iVar2 + -1;
    } while (bVar1);
    schemeVer1.precsn[0] = (Precision)0xfffffffe00000002;
    schemeVer1.precsn[1] = (Precision)0xfffff0000000000d;
    schemeVer1.precsn[2] = (Precision)0xfff0000000000015;
    schemeVer1.precsn[3] = (Precision)0x8000000000000020;
  }
  return;
}

void global constructors keyed to SetReconDumpFile() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
