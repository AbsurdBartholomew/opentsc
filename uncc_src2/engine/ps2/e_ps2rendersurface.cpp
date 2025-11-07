// STATUS: NOT STARTED

#include "e_ps2rendersurface.h"

__vtbl_ptr_type EPs2RenderSurface virtual table[12] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RenderSurface::~EPs2RenderSurface,
		/* .__delta2 = */ -5584
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RenderSurface::Create,
		/* .__delta2 = */ -5488
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RenderSurface::GetOutputRect,
		/* .__delta2 = */ -4192
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RenderSurface::SetBackgroundColor,
		/* .__delta2 = */ -4992
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RenderSurface::SetFlags,
		/* .__delta2 = */ -5312
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERenderSurface::GetFlags,
		/* .__delta2 = */ 31088
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RenderSurface::GetImageData,
		/* .__delta2 = */ -3664
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RenderSurface::CopyToTexture,
		/* .__delta2 = */ -3592
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RenderSurface::GetTexture,
		/* .__delta2 = */ -3360
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RenderSurface::Select,
		/* .__delta2 = */ -4072
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

EPs2RenderSurface* EPs2RenderSurface::EPs2RenderSurface() {
  __14ERenderSurface(&this->field0_0x0);
  this->m_pFbufVramEntry = (EVramEntry *)0x0;
  (this->field0_0x0).__vtable = (ERenderSurface__vtable *)_vt_17EPs2RenderSurface;
  this->m_pZbufVramEntry = (EVramEntry *)0x0;
  this->m_pTexture = (EPs2Texture *)0x0;
  return this;
}

void EPs2RenderSurface::~EPs2RenderSurface(int __in_chrg) {
	void *p;
	
  (this->field0_0x0).__vtable = (ERenderSurface__vtable *)_vt_17EPs2RenderSurface;
  Deallocate__17EPs2RenderSurface(this);
  ___14ERenderSurface(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2rendersurface.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

bool EPs2RenderSurface::Create(ERenderSurfaceDef &rsd) {
	int bpp;
	
  int rsFormat;
  ERenderSurface__vtable *pEVar1;
  bool bVar2;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  int bpp;
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
  rsFormat = rsd->format;
  (this->field0_0x0).m_format = rsFormat;
  GetPs2FBufferFormat__12EPs2GraphicsiRiT2(&_ps2gfx,rsFormat,&this->m_hwFbufFormat,&bpp);
  pEVar1 = (this->field0_0x0).__vtable;
  this->m_hwZbufFormat = 0x31;
  (**(code **)(pEVar1 + 1))(this->m_clearColor + *(short *)&pEVar1->Select + -0x20,rsd->flags);
  bVar2 = SetSize__17EPs2RenderSurfaceiii(this,rsd->xsize,rsd->ysize,rsd->format);
  if (bVar2) {
    pEVar1 = (this->field0_0x0).__vtable;
    (*(code *)pEVar1->GetTexture)
              (this->m_clearColor + *(short *)&pEVar1->CopyToTexture + -0x20,&rsd->bgColor);
    BuildDlist__17EPs2RenderSurface(this);
  }
  return bVar2;
}

void EPs2RenderSurface::SetFlags(u32 flags) {
	u32 oldFlagsZB;
	ERenderSurface *this;
	u32 flags;
	
  uint uVar1;
  EPs2Texture *pEVar2;
  
  uVar1 = (this->field0_0x0).m_flags;
  pEVar2 = this->m_pTexture;
  (this->field0_0x0).m_flags = flags;
  if ((pEVar2 != (EPs2Texture *)0x0) && ((flags & 1) != (uVar1 & 1))) {
    SetupVRAM__17EPs2RenderSurface(this);
    BuildDlist__17EPs2RenderSurface(this);
  }
  return;
}

void EPs2RenderSurface::FreeVram() {
	EVramManager *this;
	EMutex *this;
	
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
  (**(code **)(_ps2gfx.m_vram.m_mutex.field0_0x0.__vtable + 1))
            (*(short *)&(_ps2gfx.m_vram.m_mutex.field0_0x0.__vtable)->Release + 0x3908a0,
             0xffffffffffffffff);
                    /* end of inlined section */
  if (this->m_pFbufVramEntry != (EVramEntry *)0x0) {
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2graphics.h */
    Deallocate__12EVramManagerP10EVramEntryb(&_ps2gfx.m_vram,this->m_pFbufVramEntry,false);
                    /* end of inlined section */
    this->m_pFbufVramEntry = (EVramEntry *)0x0;
  }
  if (this->m_pZbufVramEntry != (EVramEntry *)0x0) {
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2graphics.h */
    Deallocate__12EVramManagerP10EVramEntryb(&_ps2gfx.m_vram,this->m_pZbufVramEntry,false);
                    /* end of inlined section */
    this->m_pZbufVramEntry = (EVramEntry *)0x0;
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2graphics.h */
  }
  (*(code *)_ps2gfx.m_vram.m_mutex.field0_0x0.__vtable[1].Acquire)
            (*(short *)&_ps2gfx.m_vram.m_mutex.field0_0x0.__vtable[1].ESyncObject + 0x3908a0);
  return;
}

void EPs2RenderSurface::Deallocate() {
  EPs2Texture *pEVar1;
  ETexture__vtable *pEVar2;
  
                    /* end of inlined section */
  pEVar1 = this->m_pTexture;
  if (pEVar1 != (EPs2Texture *)0x0) {
    pEVar2 = (pEVar1->field0_0x0).__vtable;
    (*(code *)pEVar2->Unlock)((int)pEVar1->m_pDlists + *(short *)&pEVar2->Lock + -0x48,3);
  }
  this->m_pTexture = (EPs2Texture *)0x0;
  FreeVram__17EPs2RenderSurface(this);
  return;
}

void EPs2RenderSurface::SetBackgroundColor(EVec3 &color) {
	unsigned char vals[3];
	int c;
	
  uchar uVar1;
  uchar uVar2;
  uchar *puVar3;
  uchar *puVar4;
  int iVar5;
  uchar vals [3];
  
  ToU8s__C5EVec3PUc(color,vals);
  iVar5 = 0;
  do {
    puVar3 = vals + iVar5;
    puVar4 = this->m_clearColor + iVar5;
    iVar5 = iVar5 + 1;
    *puVar4 = *puVar3;
  } while (iVar5 < 3);
  uVar1 = this->m_clearColor[0];
  uVar2 = this->m_clearColor[1];
  this->m_clearColor[3] = 0xff;
  (this->m_dl).clear0.rgbaq.field_0x2 = this->m_clearColor[2];
  *(uchar *)&(this->m_dl).clear0.rgbaq = uVar1;
  (this->m_dl).clear0.rgbaq.field_0x1 = uVar2;
  FlushCache(0);
  return;
}

void EPs2RenderSurface::SetupVRAM() {
	int bytesPerPixel;
	int vramSize;
	EVramAllocParams vap;
	u32 addr;
	u64 *p64;
	sceGsTex0 *pTex01;
	
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  EVramEntry *pEVar4;
  int iVar5;
  ulong uVar6;
  EVramAllocParams vap;
  
  FreeVram__17EPs2RenderSurface(this);
  iVar5 = 4;
  if ((this->field0_0x0).m_format == 0) {
    iVar5 = 2;
  }
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2graphics.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2graphics.h */
                    /* end of inlined section */
  vap._12_4_ = 1;
                    /* inlined from e_vramman.h */
  vap.callbackParam = 0;
                    /* end of inlined section */
  vap.size = iVar5 * (this->field0_0x0).m_xsize * (this->field0_0x0).m_ysize;
  vap.pfnCallback = (undefined1 *)0x0;
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2graphics.h */
  pEVar4 = AllocateAndLock__12EVramManagerRC16EVramAllocParams(&_ps2gfx.m_vram,&vap);
                    /* end of inlined section */
  uVar1 = (this->field0_0x0).m_flags;
  this->m_pFbufVramEntry = pEVar4;
  if ((uVar1 & 1) != 0) {
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2graphics.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2graphics.h */
                    /* end of inlined section */
    vap.size = (this->field0_0x0).m_xsize * (this->field0_0x0).m_ysize * 4;
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2graphics.h */
    pEVar4 = AllocateAndLock__12EVramManagerRC16EVramAllocParams(&_ps2gfx.m_vram,&vap);
                    /* end of inlined section */
    this->m_pZbufVramEntry = pEVar4;
  }
  pvVar2 = this->m_pTexture->m_pDlists[0];
  uVar6 = (long)(int)(this->m_pFbufVramEntry->address >> 8) & 0x3fff;
  *(ulong *)((int)pvVar2 + 0x20) =
       *(ulong *)((int)pvVar2 + 0x20) & 0xffffffe7ffffc000 | 0x800000000 | uVar6;
  pvVar3 = this->m_pTexture->m_pDlists[1];
  *(ulong *)((int)pvVar3 + 0x20) =
       *(ulong *)((int)pvVar3 + 0x20) & 0xffffffe7ffffc000 | 0x800000000 | uVar6;
  UpdatePatch__11EPs2TextureP9sceGsTex0(this->m_pTexture,(sceGsTex0__258_939 *)((int)pvVar2 + 0x20))
  ;
  FlushCache(0);
  return;
}

bool EPs2RenderSurface::SetSize(int xsize, int ysize, int format) {
	ETextureDef td;
	
  ETexture__vtable *pEVar1;
  bool bVar2;
  EPs2Texture *pEVar3;
  long lVar4;
  ETextureDef td;
  
  bVar2 = SetSize__14ERenderSurfaceiii(&this->field0_0x0,xsize,ysize,format);
  if (bVar2) {
    pEVar3 = this->m_pTexture;
    if (pEVar3 != (EPs2Texture *)0x0) {
      pEVar1 = (pEVar3->field0_0x0).__vtable;
      (*(code *)pEVar1->Unlock)((int)pEVar3->m_pDlists + *(short *)&pEVar1->Lock + -0x48,3);
    }
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2texture.h */
    pEVar3 = (EPs2Texture *)_allocBucketAlloc__FUiUi(0x2c0,0xf);
                    /* end of inlined section */
    pEVar3 = __11EPs2Texture(pEVar3);
    this->m_pTexture = pEVar3;
    if (pEVar3 != (EPs2Texture *)0x0) {
                    /* inlined from /eor/src2/engine/texture/e_texturedef.h */
                    /* end of inlined section */
      td.imageFormat = '\x01';
                    /* inlined from /eor/src2/engine/texture/e_texturedef.h */
      td.pfnAllocAlign = (undefined1 *)0x0;
      td.pfnFree = (undefined1 *)0x0;
      td.mipMapLevels = 0;
                    /* end of inlined section */
      td.mipMapShift = 0.0;
      if (format == 0) {
        td.bitsPerImagePixel = '\x10';
      }
      else {
        td.bitsPerImagePixel = ' ';
      }
      td.xsize = (short)xsize;
      td.ysize = (short)ysize;
      td.bitsPerPaletteEntry = '\0';
      td.paletteFormat = '\0';
      td.paletteSize = 0;
      if (((this->field0_0x0).m_flags & 4) == 0) {
        td.flags = 0x100;
      }
      else {
        td.flags = 0;
      }
      pEVar1 = (this->m_pTexture->field0_0x0).__vtable;
      lVar4 = (*(code *)pEVar1[1].UpdateMipLevel)
                        ((int)this->m_pTexture->m_pDlists + *(short *)&pEVar1[1].UpdateBegin + -0x48
                         ,&td);
      if (lVar4 != 0) {
        SetupVRAM__17EPs2RenderSurface(this);
        BuildDlist__17EPs2RenderSurface(this);
        return true;
      }
      pEVar3 = this->m_pTexture;
      if (pEVar3 != (EPs2Texture *)0x0) {
        pEVar1 = (pEVar3->field0_0x0).__vtable;
        (*(code *)pEVar1->Unlock)((int)pEVar3->m_pDlists + *(short *)&pEVar1->Lock + -0x48,3);
      }
      this->m_pTexture = (EPs2Texture *)0x0;
    }
  }
  return false;
}

void EPs2RenderSurface::GetOutputRect(EFloatRect &rect) {
  rect->left = (float)((this->field0_0x0).m_xsize * -8 + 0x8000);
  rect->top = (float)((this->field0_0x0).m_ysize * -8 + 0x8000);
  rect->right = (float)((this->field0_0x0).m_xsize * 8 + 0x8000);
  rect->bottom = (float)((this->field0_0x0).m_ysize * 8 + 0x8000);
  return;
}

void EPs2RenderSurface::Select() {
	EDisplayDL *pDL;
	
  sceGifTag__92_778 *pDL;
  
  pDL = &(this->m_dl).giftag0;
  SendGSDisplayList__12EPs2GraphicsPvii(&_ps2gfx,pDL,this->m_nqw,0);
  LastDisplayDL__12EPs2GraphicsP10EDisplayDL(&_ps2gfx,(EDisplayDL *)pDL);
  return;
}

void EPs2RenderSurface::BuildDlist() {
	int zMode;
	int clearMode;
	u32 pFbuf;
	u32 pZbuf;
	u128 *pEnd;
	
  uchar uVar1;
  uchar uVar2;
  uchar uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  sceGsClear__92_1137 *psVar8;
  ulong uVar9;
  sceGsZbuf__92_1109 sVar10;
  sceGsZbuf__92_1109 sVar11;
  ulong uVar12;
  
  uVar12 = 0;
  uVar4 = (this->field0_0x0).m_flags;
  uVar5 = this->m_pFbufVramEntry->address;
  uVar6 = uVar4 & 1;
  if (uVar6 != 0) {
    uVar12 = (ulong)(int)(this->m_pZbufVramEntry->address >> 0xd);
  }
  sceGsSetDefDBuffDc(&this->m_dl,*(undefined2 *)&this->m_hwFbufFormat,
                     *(undefined2 *)&(this->field0_0x0).m_xsize,
                     *(undefined2 *)&(this->field0_0x0).m_ysize,(uVar6 << 0x11) >> 0x10,
                     *(undefined2 *)&this->m_hwZbufFormat,(uVar4 & 2) != 0);
  uVar9 = (long)(int)(uVar5 >> 0xd) & 0x1ff;
  sVar10 = (this->m_dl).draw01.zbuf1;
  sVar11 = (this->m_dl).draw02.zbuf2;
  uVar1 = this->m_clearColor[0];
  psVar8 = &(this->m_dl).clear0;
  if (((this->field0_0x0).m_flags & 3) != 0) {
    psVar8 = (sceGsClear__92_1137 *)&(this->m_dl).giftag1;
  }
  uVar2 = this->m_clearColor[1];
  uVar3 = this->m_clearColor[2];
  (this->m_dl).draw01.frame1 =
       (sceGsFrame__92_913)((ulong)(this->m_dl).draw01.frame1 & 0xfffffffffffffe00 | uVar9);
  (this->m_dl).draw02.frame2 =
       (sceGsFrame__92_913)((ulong)(this->m_dl).draw02.frame2 & 0xfffffffffffffe00 | uVar9);
  (this->m_dl).draw01.zbuf1 =
       (sceGsZbuf__92_1109)((ulong)sVar10 & 0xfffffffffffffe00 | uVar12 & 0x1ff);
  (this->m_dl).draw02.zbuf2 =
       (sceGsZbuf__92_1109)((ulong)sVar11 & 0xfffffffffffffe00 | uVar12 & 0x1ff);
  *(uchar *)&(this->m_dl).clear0.rgbaq = uVar1;
  (this->m_dl).clear0.rgbaq.field_0x1 = uVar2;
  iVar7 = (int)psVar8 + (-0x70 - (int)this) >> 4;
  (this->m_dl).clear0.rgbaq.field_0x2 = uVar3;
  psVar8->testa = (sceGsTest__92_1011)0x100;
  psVar8->testaaddr = 0x60;
  this->m_nqw = iVar7;
  *(ulong *)&(this->m_dl).giftag0 =
       *(ulong *)&(this->m_dl).giftag0 & 0xffffffffffff8000 | (long)(iVar7 + -1) & 0x7fffU;
  FlushCache(0);
  return;
}

void EPs2RenderSurface::GetImageData(void *pImageBuffer) {
  StoreTextureVIF1__12EPs2GraphicsPUxssssss
            (&_ps2gfx,(uint16 *)pImageBuffer,(ushort)(this->m_pFbufVramEntry->address >> 8),
             *(ushort *)&this->m_hwFbufFormat,0,0,*(ushort *)&(this->field0_0x0).m_xsize,
             *(ushort *)&(this->field0_0x0).m_ysize);
  return;
}

bool EPs2RenderSurface::CopyToTexture(ETexture *destTexture) {
	int pitchX;
	int pitchY;
	
  short sVar1;
  ERenderSurface__vtable *pEVar2;
  undefined8 uVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  int pitchX;
  int pitchY;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  (*(code *)destTexture->__vtable->Validate)
            ((int)&(destTexture->m_textureDef).pfnAllocAlign +
             (int)*(short *)&destTexture->__vtable->Test1,2);
  pEVar2 = (this->field0_0x0).__vtable;
  sVar1 = *(short *)&pEVar2[1].GetOutputRect;
  uVar3 = (**(code **)(destTexture->__vtable + 1))
                    ((int)&(destTexture->m_textureDef).pfnAllocAlign +
                     (int)*(short *)&destTexture->__vtable->Select,0,&pitchX,(uint)&pitchX | 4);
  (*(code *)pEVar2[1].SetBackgroundColor)(this->m_clearColor + sVar1 + -0x20,uVar3);
  (*(code *)destTexture->__vtable[1].Invalidate)
            ((int)&(destTexture->m_textureDef).pfnAllocAlign +
             (int)*(short *)&destTexture->__vtable[1].Unlock);
  return true;
}

void* EPs2RenderSurface::operator new(unsigned int size) {
  void *pvVar1;
  
  pvVar1 = _memmanAlloc__FUiUi(size,0x10);
  return pvVar1;
}

void EPs2RenderSurface::operator delete(void *p) {
  _memmanFree__FPv(p);
  return;
}

ETexture* EPs2RenderSurface::GetTexture() {
  return &this->m_pTexture->field0_0x0;
}
