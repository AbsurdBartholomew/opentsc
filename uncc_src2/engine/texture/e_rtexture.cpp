// STATUS: NOT STARTED

#include "e_rtexture.h"

ETypeInfo *gpTypeInfo_ERTexture = NULL;

__vtbl_ptr_type ERTexture virtual table[13] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERTexture::SafeDelete,
		/* .__delta2 = */ -30640
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERTexture::GetTypeInfo,
		/* .__delta2 = */ -30584
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERTexture::GetTypeName,
		/* .__delta2 = */ -30568
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERTexture::GetTypeKey,
		/* .__delta2 = */ -30552
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERTexture::GetTypeVersion,
		/* .__delta2 = */ -30536
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERTexture::~ERTexture,
		/* .__delta2 = */ -31976
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
		/* .__pfn = */ &ERTexture::Reload,
		/* .__delta2 = */ -31752
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

ETypeInfo ERTexture::m_typeInfo;

EStream& operator<<(EStream &s, ERTexture *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, ERTexture *&pD) {
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
  *pD = (ERTexture *)pStorable;
  return s;
}

ERTexture* ERTexture::ERTexture() {
  __9EResource(&this->field0_0x0);
  this->m_pTexture = (ETexture *)0x0;
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_9ERTexture;
  return this;
}

void ERTexture::~ERTexture(int __in_chrg) {
	void *p;
	
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_9ERTexture;
  Deallocate__9ERTexture(this);
  ___9EResource(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/engine/texture/e_rtexture.h */
    _allocBucketFree__FPvUiUi(this,0x18,0x18);
  }
                    /* end of inlined section */
  return;
}

void ERTexture::Attach(ETexture *pTexture) {
  Deallocate__9ERTexture(this);
  this->m_pTexture = pTexture;
  return;
}

void ERTexture::Deallocate() {
  EGlobalManagerClient__vtable *pEVar1;
  
  pEVar1 = (_pGfx->field0_0x0).__vtable;
  (*(code *)pEVar1[8].EGlobalManagerClient)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 8),this->m_pTexture);
  this->m_pTexture = (ETexture *)0x0;
  return;
}

void ERTexture::Reload(EStream &s) {
  Load__9ERTextureR7EStream(this,s);
  return;
}

void ERTexture::Load(EStream &s) {
	u32 signature;
	ETextureDef td;
	int nImages;
	int xSize;
	int ySize;
	int pitchX;
	int pitchY;
	EStream &s;
	EStream &s;
	int i;
	u32 pImage;
	int bytesToReadForImageRow;
	int paddedBytesPerRow;
	int y;
	
  EGlobalManagerClient__vtable *pEVar1;
  ETexture__vtable *pEVar2;
  ETexture *pEVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  EStream__vtable *pEVar7;
  EString *d;
  int iVar8;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  uint uVar9;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  uint uVar10;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  int iVar11;
  undefined8 unaff_s6;
  uint uVar12;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  ETextureDef td;
  uint signature;
  int pitchX;
  int pitchY;
  ERTexture *local_b4;
  int nImages;
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
  
                    /* inlined from /eor/src2/common/storage/e_storage.h */
                    /* end of inlined section */
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  d = &(this->field0_0x0).m_name;
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_b4 = this;
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&signature,4);
                    /* end of inlined section */
  __rs__FR7EStreamR7EString(s,d);
  Empty__7EString(d);
                    /* inlined from /eor/src2/engine/texture/e_texturedef.h */
  td.xsize = 0x40;
  td.imageFormat = '\x01';
  td.pfnAllocAlign = (undefined1 *)0x0;
  td.pfnFree = (undefined1 *)0x0;
  td.flags = 0;
  td.ysize = 0x40;
  td.paletteFormat = '\0';
  td.bitsPerPaletteEntry = '\0';
  td.paletteSize = 0;
  td.mipMapLevels = 0;
  td.mipMapShift = 0.0;
  td.bitsPerImagePixel = ' ';
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&td.imageFormat,1);
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&td.bitsPerImagePixel,1);
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&td.xsize,2);
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&td.ysize,2);
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&td.paletteFormat,1);
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&td.bitsPerPaletteEntry,1)
  ;
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&td.paletteSize,2);
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&td.flags,4);
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&td.mipMapLevels,2);
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&td.mipMapShift,4);
                    /* end of inlined section */
  pEVar3 = local_b4->m_pTexture;
  if (pEVar3 == (ETexture *)0x0) {
    pEVar1 = (_pGfx->field0_0x0).__vtable;
    pEVar3 = (ETexture *)
             (*(code *)pEVar1[7].ManagedShutdown)
                       ((int)&(_pGfx->field0_0x0).__vtable +
                        (int)*(short *)&pEVar1[7].ManagedStartup,&td);
    local_b4->m_pTexture = pEVar3;
  }
  else {
    (*(code *)pEVar3->__vtable[1].UpdateMipLevel)
              ((int)&(pEVar3->m_textureDef).pfnAllocAlign +
               (int)*(short *)&pEVar3->__vtable[1].UpdateBegin);
  }
  pEVar2 = local_b4->m_pTexture->__vtable;
  uVar10 = (uint)(ushort)td.xsize;
  uVar9 = (uint)(ushort)td.ysize;
  nImages = 1;
  if (1 < (ushort)td.mipMapLevels) {
    nImages = (uint)(ushort)td.mipMapLevels;
  }
  (*(code *)pEVar2->Validate)
            ((int)&(local_b4->m_pTexture->m_textureDef).pfnAllocAlign +
             (int)*(short *)&pEVar2->Test1,2);
  iVar8 = 0;
  if (nImages != 0) {
    do {
      iVar11 = iVar8 + 1;
      uVar12 = (int)uVar9 >> 1;
      pEVar2 = local_b4->m_pTexture->__vtable;
      iVar4 = (**(code **)(pEVar2 + 1))
                        ((int)&(local_b4->m_pTexture->m_textureDef).pfnAllocAlign +
                         (int)*(short *)&pEVar2->Select,iVar8,&pitchX,&pitchY);
      iVar8 = pitchX;
      uVar5 = (uint)td.bitsPerImagePixel;
      if (uVar9 != 0) {
        pEVar7 = s->__vtable;
        while( true ) {
          uVar9 = uVar9 - 1;
          (*(code *)pEVar7[1].GetPos)
                    (&s->m_streamingStructure + *(short *)&pEVar7[1].EStream,iVar4,
                     (int)(uVar10 * uVar5 + 7) >> 3);
          if (uVar9 == 0) break;
          pEVar7 = s->__vtable;
          iVar4 = iVar4 + iVar8;
        }
      }
      uVar10 = (int)uVar10 >> 1;
      uVar9 = uVar12;
      iVar8 = iVar11;
    } while (iVar11 < nImages);
  }
  if (td.paletteFormat != '\0') {
    pEVar2 = local_b4->m_pTexture->__vtable;
    uVar6 = (*(code *)pEVar2[1].Lock)
                      ((int)&(local_b4->m_pTexture->m_textureDef).pfnAllocAlign +
                       (int)*(short *)&pEVar2[1].ETexture);
    uVar9 = (uint)(ushort)td.paletteSize * (uint)td.bitsPerPaletteEntry + 7;
    uVar10 = (uint)(ushort)td.paletteSize * (uint)td.bitsPerPaletteEntry + 0xe;
    if (-1 < (int)uVar9) {
      uVar10 = uVar9;
    }
    (*(code *)s->__vtable[1].GetPos)
              (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,uVar6,uVar10 >> 3);
  }
  pEVar2 = local_b4->m_pTexture->__vtable;
  (*(code *)pEVar2[1].Invalidate)
            ((int)&(local_b4->m_pTexture->m_textureDef).pfnAllocAlign +
             (int)*(short *)&pEVar2[1].Unlock);
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/engine/texture/e_rtexture.h */
    gpTypeInfo_ERTexture =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_9ERTexture_m_typeInfo,New__9ERTexture,0,"ERTexture",&_9EResource_m_typeInfo);
                    /* end of inlined section */
  }
  return;
}

ERTexture* ERTexture::New() {
  ERTexture *pEVar1;
  
  pEVar1 = (ERTexture *)__nw__9ERTextureUi(0x18);
  pEVar1 = __9ERTexture(pEVar1);
  return pEVar1;
}

void ERTexture::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (ERTexture *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)&(this->field0_0x0).field0_0x0.__vtable + (int)*(short *)&pEVar1[1].GetTypeName,
               3);
  }
  return;
}

ETypeInfo* ERTexture::GetTypeInfo() {
  return &_9ERTexture_m_typeInfo;
}

char* ERTexture::GetTypeName() {
  return _9ERTexture_m_typeInfo.m_name;
}

u32 ERTexture::GetTypeKey() {
  return _9ERTexture_m_typeInfo.m_key;
}

u16 ERTexture::GetTypeVersion() {
  return _9ERTexture_m_typeInfo.m_version;
}

u16 ERTexture::GetReadVersion() {
  return _9ERTexture_m_typeInfo.m_readVersion;
}

ETypeInfo* ERTexture::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_9ERTexture_m_typeInfo,New__9ERTexture,version,"ERTexture",
                      &_9EResource_m_typeInfo);
  return pEVar1;
}

ERTexture* ERTexture::CreateCopy() {
  ERTexture *pEVar1;
  
  pEVar1 = (ERTexture *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

void* ERTexture::operator new(unsigned int size) {
  void *pvVar1;
  
  pvVar1 = _allocBucketAlloc__FUiUi(0x18,0x18);
  return pvVar1;
}

void* ERTexture::operator new(void *p) {
  void *in_a1_lo;
  
  return in_a1_lo;
}

void ERTexture::operator delete(void *p) {
  _allocBucketFree__FPvUiUi(p,0x18,0x18);
  return;
}

void ERTexture::Select(ERC *prc, int renderPass) {
  (*(code *)prc->__vtable->Init)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->LoadMPG,this->m_pTexture,renderPass);
  return;
}

void global constructors keyed to gpTypeInfo_ERTexture() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
