// STATUS: NOT STARTED

#include "e_rrletexture.h"

ETypeInfo *gpTypeInfo_ERRleTexture = NULL;

__vtbl_ptr_type ERRleTexture virtual table[13] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERRleTexture::SafeDelete,
		/* .__delta2 = */ 20392
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERRleTexture::GetTypeInfo,
		/* .__delta2 = */ 20448
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERRleTexture::GetTypeName,
		/* .__delta2 = */ 20464
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERRleTexture::GetTypeKey,
		/* .__delta2 = */ 20480
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERRleTexture::GetTypeVersion,
		/* .__delta2 = */ 20496
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERRleTexture::~ERRleTexture,
		/* .__delta2 = */ 18656
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResource::Read,
		/* .__delta2 = */ 9848
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResource::Write,
		/* .__delta2 = */ 9808
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResource::Init,
		/* .__delta2 = */ 10728
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResource::Reload,
		/* .__delta2 = */ 10736
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResource::Reload,
		/* .__delta2 = */ 10048
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ETypeInfo ERRleTexture::m_typeInfo;

EStream& operator<<(EStream &s, ERRleTexture *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, ERRleTexture *&pD) {
	EStorable *pStorable;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  EStorable *pStorable;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  __rs__FR7EStreamRP9EStorable(s,&pStorable);
  *pD = (ERRleTexture *)pStorable;
  return s;
}

ERRleTexture* ERRleTexture::ERRleTexture() {
  __9EResource(&this->field0_0x0);
  this->m_nImageBuf = (uchar *)0x0;
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_12ERRleTexture;
  this->m_nPalette = (uint *)0x0;
  return this;
}

void ERRleTexture::~ERRleTexture(int __in_chrg) {
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_12ERRleTexture;
  if (this->m_nImageBuf != (uchar *)0x0) {
    _memmanFree__FPv(this->m_nImageBuf);
    this->m_nImageBuf = (uchar *)0x0;
  }
  if (this->m_nPalette != (uint *)0x0) {
    _memmanFree__FPv(this->m_nPalette);
    this->m_nPalette = (uint *)0x0;
  }
  ___9EResource(&this->field0_0x0,__in_chrg);
  return;
}

void ERRleTexture::Load(EStream &s) {
	u32 i;
	u8 nTemp8;
	u32 nTemp32;
	EStream &s;
	EStream &s;
	EStream &s;
	EStream &s;
	EStream &s;
	
  uchar uVar1;
  uint *puVar2;
  uchar *puVar3;
  EStream__vtable *pEVar4;
  undefined8 unaff_s0;
  uint uVar5;
  uint uVar6;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  uchar nTemp8;
  uint nTemp32;
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
  
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* end of inlined section */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s4;
  uStack_1c = (undefined4)((ulong)unaff_s4 >> 0x20);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&nTemp8,1);
                    /* end of inlined section */
  if (nTemp8 == '\x10') {
    *(undefined4 *)&this->m_bFourBitImage = 1;
    if (this->m_nPalette == (uint *)0x0) {
      puVar2 = (uint *)_memmanAlloc__FUiUi(0x40,4);
      this->m_nPalette = puVar2;
    }
    uVar5 = 0;
    do {
                    /* inlined from /eor/src2/common/storage/e_storage.h */
      (*(code *)s->__vtable[1].GetPos)
                (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&nTemp32,4);
                    /* end of inlined section */
      uVar6 = uVar5 + 1;
      this->m_nPalette[uVar5] = nTemp32;
      uVar5 = uVar6;
    } while (uVar6 < 0x10);
    pEVar4 = s->__vtable;
  }
  else {
    *(undefined4 *)&this->m_bFourBitImage = 0;
    if (this->m_nPalette == (uint *)0x0) {
      puVar2 = (uint *)_memmanAlloc__FUiUi(0x400,4);
      this->m_nPalette = puVar2;
    }
    uVar5 = 0;
    do {
                    /* inlined from /eor/src2/common/storage/e_storage.h */
      (*(code *)s->__vtable[1].GetPos)
                (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&nTemp32,4);
                    /* end of inlined section */
      uVar6 = uVar5 + 1;
      this->m_nPalette[uVar5] = nTemp32;
      uVar5 = uVar6;
    } while (uVar6 < 0x100);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
    pEVar4 = s->__vtable;
  }
  (*(code *)pEVar4[1].GetPos)
            (&s->m_streamingStructure + *(short *)&pEVar4[1].EStream,&this->m_nNumCompressedBytes,4)
  ;
                    /* end of inlined section */
  if (this->m_nImageBuf == (uchar *)0x0) {
    puVar3 = (uchar *)_memmanAlloc__FUiUi(this->m_nNumCompressedBytes,4);
    this->m_nImageBuf = puVar3;
    uVar5 = this->m_nNumCompressedBytes;
  }
  else {
    uVar5 = this->m_nNumCompressedBytes;
  }
  uVar6 = 0;
  if (uVar5 != 0) {
                    /* inlined from /eor/src2/common/storage/e_storage.h */
    pEVar4 = s->__vtable;
    while( true ) {
      (*(code *)pEVar4[1].GetPos)(&s->m_streamingStructure + *(short *)&pEVar4[1].EStream,&nTemp8,1)
      ;
                    /* end of inlined section */
      this->m_nImageBuf[uVar6] = nTemp8;
      uVar6 = uVar6 + 1;
      if (this->m_nNumCompressedBytes <= uVar6) break;
      pEVar4 = s->__vtable;
    }
  }
  this->m_nRunCount = '\0';
  *(undefined4 *)&this->m_bFrontHalf = 1;
  this->m_nImageBufIndex = 0;
  uVar1 = GetEightBitNum__12ERRleTexture(this);
  this->m_nRunLength = uVar1;
  if (((int)(char)uVar1 & 0xffU) >> 7 == 0) {
    this->m_nMode = '\0';
    if (*(int *)&this->m_bFourBitImage == 0) {
      uVar1 = GetEightBitNum__12ERRleTexture(this);
      puVar2 = this->m_nPalette;
    }
    else {
      uVar1 = GetFourBitNum__12ERRleTexture(this);
      puVar2 = this->m_nPalette;
    }
    this->m_nRunValue = puVar2[(char)uVar1];
  }
  else {
    this->m_nMode = '\x01';
    this->m_nRunLength = -uVar1;
  }
  return;
}

void ERRleTexture::RestartDecompression() {
  uchar uVar1;
  uint *puVar2;
  
  this->m_nRunCount = '\0';
  *(undefined4 *)&this->m_bFrontHalf = 1;
  this->m_nImageBufIndex = 0;
  uVar1 = GetEightBitNum__12ERRleTexture(this);
  this->m_nRunLength = uVar1;
  if (((int)(char)uVar1 & 0xffU) >> 7 == 0) {
    this->m_nMode = '\0';
    if (*(int *)&this->m_bFourBitImage == 0) {
      uVar1 = GetEightBitNum__12ERRleTexture(this);
      puVar2 = this->m_nPalette;
    }
    else {
      uVar1 = GetFourBitNum__12ERRleTexture(this);
      puVar2 = this->m_nPalette;
    }
    this->m_nRunValue = puVar2[(char)uVar1];
  }
  else {
    this->m_nMode = '\x01';
    this->m_nRunLength = -uVar1;
  }
  return;
}

u32 ERRleTexture::GetNextPixel() {
  uint uVar1;
  
  if (*(int *)&this->m_bFourBitImage == 0) {
    uVar1 = GetNextEightBitPixel__12ERRleTexture(this);
  }
  else {
    uVar1 = GetNextFourBitPixel__12ERRleTexture(this);
  }
  return uVar1;
}

u32 ERRleTexture::GetNextFourBitPixel() {
	u32 nRetVal;
	
  byte bVar1;
  uchar uVar2;
  uint uVar3;
  uint uVar4;
  
  if (this->m_nMode == '\x01') {
    uVar2 = GetFourBitNum__12ERRleTexture(this);
    bVar1 = this->m_nRunCount + 1;
    uVar4 = this->m_nPalette[(char)uVar2];
    this->m_nRunCount = bVar1;
    if (bVar1 < this->m_nRunLength) {
      return uVar4;
    }
    this->m_nRunCount = '\0';
    uVar2 = GetEightBitNum__12ERRleTexture(this);
    this->m_nRunLength = uVar2;
    uVar2 = GetFourBitNum__12ERRleTexture(this);
    uVar3 = this->m_nPalette[(char)uVar2];
    this->m_nMode = '\0';
  }
  else {
    bVar1 = this->m_nRunCount + 1;
    uVar4 = this->m_nRunValue;
    this->m_nRunCount = bVar1;
    if (bVar1 < this->m_nRunLength) {
      return uVar4;
    }
    this->m_nRunCount = '\0';
    uVar2 = GetEightBitNum__12ERRleTexture(this);
    this->m_nRunLength = uVar2;
    if (((int)(char)uVar2 & 0xffU) >> 7 != 0) {
      this->m_nMode = '\x01';
      this->m_nRunLength = -uVar2;
      return uVar4;
    }
    this->m_nMode = '\0';
    uVar2 = GetFourBitNum__12ERRleTexture(this);
    uVar3 = this->m_nPalette[(char)uVar2];
  }
  this->m_nRunValue = uVar3;
  return uVar4;
}

u32 ERRleTexture::GetNextEightBitPixel() {
	u32 nRetVal;
	
  byte bVar1;
  uchar uVar2;
  uint uVar3;
  
  if (this->m_nMode == '\x01') {
    uVar2 = GetEightBitNum__12ERRleTexture(this);
    bVar1 = this->m_nRunCount + 1;
    uVar3 = this->m_nPalette[(char)uVar2];
    this->m_nRunCount = bVar1;
    if (bVar1 < this->m_nRunLength) {
      return uVar3;
    }
    this->m_nRunCount = '\0';
    uVar2 = GetEightBitNum__12ERRleTexture(this);
    this->m_nRunLength = uVar2;
    if (((int)(char)uVar2 & 0xffU) >> 7 == 0) {
      this->m_nMode = '\0';
      goto LAB_00134e48;
    }
  }
  else {
    bVar1 = this->m_nRunCount + 1;
    uVar3 = this->m_nRunValue;
    this->m_nRunCount = bVar1;
    if (bVar1 < this->m_nRunLength) {
      return uVar3;
    }
    this->m_nRunCount = '\0';
    uVar2 = GetEightBitNum__12ERRleTexture(this);
    this->m_nRunLength = uVar2;
    if (((int)(char)uVar2 & 0xffU) >> 7 == 0) {
      this->m_nMode = '\0';
LAB_00134e48:
      uVar2 = GetEightBitNum__12ERRleTexture(this);
      this->m_nRunValue = this->m_nPalette[(char)uVar2];
      return uVar3;
    }
  }
  this->m_nMode = '\x01';
  this->m_nRunLength = -uVar2;
  return uVar3;
}

u8 ERRleTexture::GetFourBitNum() {
	u8 nRetVal;
	
  byte bVar1;
  uint uVar2;
  
  uVar2 = this->m_nImageBufIndex;
  if (*(int *)&this->m_bFrontHalf != 0) {
    bVar1 = this->m_nImageBuf[uVar2];
    *(undefined4 *)&this->m_bFrontHalf = 0;
    return bVar1 >> 4;
  }
  bVar1 = this->m_nImageBuf[uVar2];
  this->m_nImageBufIndex = uVar2 + 1;
  *(undefined4 *)&this->m_bFrontHalf = 1;
  return bVar1 & 0xf;
}

u8 ERRleTexture::GetEightBitNum() {
	u8 nRetVal;
	
  uint uVar1;
  byte bVar2;
  
  uVar1 = this->m_nImageBufIndex;
  if (*(int *)&this->m_bFrontHalf == 0) {
    bVar2 = this->m_nImageBuf[uVar1];
    this->m_nImageBufIndex = uVar1 + 1;
    bVar2 = (byte)((bVar2 & 0xf) << 4) | this->m_nImageBuf[uVar1 + 1] >> 4;
  }
  else {
    bVar2 = this->m_nImageBuf[uVar1];
    this->m_nImageBufIndex = uVar1 + 1;
  }
  return bVar2;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/games/sims/ESrc/e_rrletexture.h */
    gpTypeInfo_ERRleTexture =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_12ERRleTexture_m_typeInfo,New__12ERRleTexture,0,"ERRleTexture",
                    &_9EResource_m_typeInfo);
                    /* end of inlined section */
  }
  return;
}

ERRleTexture* ERRleTexture::New() {
  ERRleTexture *pEVar1;
  
  pEVar1 = (ERRleTexture *)__builtin_new(0x34);
  pEVar1 = __12ERRleTexture(pEVar1);
  return pEVar1;
}

void ERRleTexture::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (ERRleTexture *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)&(this->field0_0x0).field0_0x0.__vtable + (int)*(short *)&pEVar1[1].GetTypeName,
               3);
  }
  return;
}

ETypeInfo* ERRleTexture::GetTypeInfo() {
  return &_12ERRleTexture_m_typeInfo;
}

char* ERRleTexture::GetTypeName() {
  return _12ERRleTexture_m_typeInfo.m_name;
}

u32 ERRleTexture::GetTypeKey() {
  return _12ERRleTexture_m_typeInfo.m_key;
}

u16 ERRleTexture::GetTypeVersion() {
  return _12ERRleTexture_m_typeInfo.m_version;
}

u16 ERRleTexture::GetReadVersion() {
  return _12ERRleTexture_m_typeInfo.m_readVersion;
}

ETypeInfo* ERRleTexture::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_12ERRleTexture_m_typeInfo,New__12ERRleTexture,version,"ERRleTexture",
                      &_9EResource_m_typeInfo);
  return pEVar1;
}

ERRleTexture* ERRleTexture::CreateCopy() {
  ERRleTexture *pEVar1;
  
  pEVar1 = (ERRleTexture *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

u32* ERRleTexture::GetPalette() {
  return this->m_nPalette;
}

u32 ERRleTexture::GetPaletteSize() {
  uint uVar1;
  
  uVar1 = 0x10;
  if (*(int *)&this->m_bFourBitImage == 0) {
    uVar1 = 0x100;
  }
  return uVar1;
}

void global constructors keyed to gpTypeInfo_ERRleTexture() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
