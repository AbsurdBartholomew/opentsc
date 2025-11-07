// STATUS: NOT STARTED

#include "e_ps2texture.h"

EVramEntry *EPs2Texture::m_pGrayPalEntry4bit = NULL;
EVramEntry *EPs2Texture::m_pGrayPalEntry8bit = NULL;
void *EPs2Texture::m_pGrayPal4bit = NULL;
void *EPs2Texture::m_pGrayPal8bit = NULL;

EMutex EPs2Texture::m_lockMutex = {
	/* base class 0 = */ {
		/* .$vf1686 = */ NULL
	},
	/* .m_sema = */ {
		/* base class 0 = */ {
			/* .$vf1686 = */ NULL
		},
		/* .m_id = */ 0,
		/* .m_maxCount = */ 0,
		/* .m_waits = */ 0,
		/* .m_count = */ 0
	}
};

static int _k = 0;

__vtbl_ptr_type EPs2Texture virtual table[15] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Texture::~EPs2Texture,
		/* .__delta2 = */ 10872
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Texture::Lock,
		/* .__delta2 = */ 22920
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Texture::Unlock,
		/* .__delta2 = */ 24128
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Texture::Invalidate,
		/* .__delta2 = */ 29472
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Texture::UpdateBegin,
		/* .__delta2 = */ 27056
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Texture::UpdateMipLevel,
		/* .__delta2 = */ 27208
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Texture::UpdatePalette,
		/* .__delta2 = */ 27696
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Texture::UpdateEnd,
		/* .__delta2 = */ 27752
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Texture::Create,
		/* .__delta2 = */ 13184
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Texture::Test1,
		/* .__delta2 = */ 28512
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ETexture::Validate,
		/* .__delta2 = */ 3248
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Texture::Select,
		/* .__delta2 = */ 26864
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Texture::GetPaddedSize,
		/* .__delta2 = */ 11504
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

static float cPi = 3.14159274f;
static double cdPi = 3.1415927410125732;
static float cGravity = 32.2f;
static u32 cScratchPadBase = 0;
static u32 cScratchPadSize = 16384;
static EPs2GeometryEngineData *_pGE = 0x1100c000;

EPs2Texture* EPs2Texture::EPs2Texture() {
  int iVar1;
  TNodeList_EPs2Shader___ *this_00;
  
  __8ETexture(&this->field0_0x0);
  (this->field0_0x0).__vtable = (ETexture__vtable *)_vt_11EPs2Texture;
  this_00 = this->m_parentShaders;
  iVar1 = 1;
  do {
    __t9TNodeList1ZP10EPs2Shader(this_00);
    this_00 = this_00 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  this->m_pImg = (void *)0x0;
  this->m_pPal = (void *)0x0;
  this->m_pDlists[1] = (void *)0x0;
  this->m_pDlists[0] = (void *)0x0;
  this->m_pVramEntry = (EVramEntry *)0x0;
  this->m_pPaletteVramEntry = (EVramEntry *)0x0;
  this->m_pLoadDLs = (uint16 *)0x0;
  this->m_pLoadPalDL = (uint16 *)0x0;
  this->m_needsLoading = 1;
  this->m_nImgBytes = 0;
  this->m_nRAMBytes = 0;
  (this->m_txtPatch).pThis = &this->m_txtPatch;
  SetLocks__11EPs2Textureib(this,0,true);
  return this;
}

void EPs2Texture::~EPs2Texture(int __in_chrg) {
  TNodeList_EPs2Shader___ *this_00;
  
  (this->field0_0x0).__vtable = (ETexture__vtable *)_vt_11EPs2Texture;
  Deallocate__11EPs2Texture(this);
  if (this != (EPs2Texture *)0xfffffd54) {
    this_00 = (TNodeList_EPs2Shader___ *)&this->field_0x2bc;
    while (this->m_parentShaders != this_00) {
      this_00 = this_00 + -1;
      ___t9TNodeList1ZP10EPs2Shader(this_00,0);
    }
  }
  ___8ETexture(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
    __dl__11EPs2TexturePv(this);
  }
  return;
}

void EPs2Texture::Deallocate() {
  AcquireVramMutex__12EPs2Graphics(&_ps2gfx);
  if (this->m_pVramEntry != (EVramEntry *)0x0) {
    DeallocateVram__12EPs2GraphicsP10EVramEntryb(&_ps2gfx,this->m_pVramEntry,false);
  }
  if (this->m_pPaletteVramEntry != (EVramEntry *)0x0) {
    DeallocateVram__12EPs2GraphicsP10EVramEntryb(&_ps2gfx,this->m_pPaletteVramEntry,false);
  }
  ReleaseVramMutex__12EPs2Graphics(&_ps2gfx);
  if ((this->field0_0x0).m_textureDef.pfnFree == (undefined1 *)0x0) {
    _memmanFree__FPv(this->m_pPal);
    _memmanFree__FPv(this->m_pImg);
    _memmanFree__FPv(this->m_pDlists[0]);
    _memmanFree__FPv(this->m_pDlists[1]);
    _memmanFree__FPv(this->m_pLoadDLs);
  }
  else {
    (*(code *)(this->field0_0x0).m_textureDef.pfnFree)(this->m_pPal);
    (*(code *)(this->field0_0x0).m_textureDef.pfnFree)(this->m_pImg);
    (*(code *)(this->field0_0x0).m_textureDef.pfnFree)(this->m_pDlists[0]);
    (*(code *)(this->field0_0x0).m_textureDef.pfnFree)(this->m_pDlists[1]);
    (*(code *)(this->field0_0x0).m_textureDef.pfnFree)(this->m_pLoadDLs);
  }
  this->m_pPal = (void *)0x0;
  this->m_pImg = (void *)0x0;
  this->m_pDlists[1] = (void *)0x0;
  this->m_pDlists[0] = (void *)0x0;
  this->m_pLoadDLs = (uint16 *)0x0;
  this->m_pLoadPalDL = (uint16 *)0x0;
  this->m_needsLoading = 1;
  this->m_nRAMBytes = 0;
  this->m_nImgBytes = 0;
  SetLocks__11EPs2Textureib(this,0,true);
  return;
}

bool EPs2Texture::GetPaddedSize(int *x, int *y, int bpp) {
	int oldX;
	int oldY;
	int pageWidth;
	int pageHeight;
	int x1;
	int y1;
	int x2;
	int y2;
	
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int oldX;
  int oldY;
  int pageWidth;
  int pageHeight;
  int x1;
  int y1;
  int x2;
  int y2;
  
  if (bpp == 8) {
    if (*x < 8) {
      *x = 8;
    }
  }
  else if (bpp < 9) {
    if ((bpp == 4) && (*x < 0x10)) {
      *x = 0x10;
    }
  }
  else if (bpp == 0x10) {
    if (*x < 8) {
      *x = 8;
    }
  }
  else if ((bpp == 0x20) && (*x < 4)) {
    *x = 4;
  }
  iVar1 = *x;
  iVar2 = *y;
  if (iVar1 != iVar2) {
    if (iVar1 == iVar2 << 1) {
      return true;
    }
    if (bpp == 8) {
      pageWidth = 0x80;
      pageHeight = 0x40;
    }
    else if (bpp < 9) {
      if (bpp != 4) {
        return true;
      }
      pageWidth = 0x80;
      pageHeight = 0x80;
    }
    else if (bpp == 0x10) {
      pageWidth = 0x80;
      pageHeight = 0x40;
    }
    else {
      if (bpp != 0x20) {
        return true;
      }
      pageWidth = 0x40;
      pageHeight = 0x20;
    }
    if ((iVar1 < pageWidth) || (iVar2 < pageHeight)) {
      iVar4 = iVar2;
      if (iVar2 < iVar1) {
        iVar4 = iVar1;
      }
      if (pageWidth < iVar1) {
        pageWidth = iVar1;
      }
      if (pageHeight < iVar2) {
        pageHeight = iVar2;
      }
      if (iVar4 * iVar4 < pageWidth * pageHeight) {
        *x = iVar4;
        *y = iVar4;
      }
      else {
        *x = pageWidth;
        *y = pageHeight;
      }
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    return bVar3;
  }
  return true;
}

bool EPs2Texture::GetPaddedSizeVRAM(int *x, int *y, int bpp) {
	int oldX;
	int oldY;
	int pageWidth;
	int pageHeight;
	int x1;
	int y1;
	int x2;
	int y2;
	
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int oldX;
  int oldY;
  int pageWidth;
  int pageHeight;
  int x1;
  int y1;
  int x2;
  int y2;
  
  if (bpp == 8) {
    if (*x < 0x40) {
      *x = 0x40;
    }
  }
  else if (bpp < 9) {
    if ((bpp == 4) && (*x < 0x80)) {
      *x = 0x80;
    }
  }
  else if (bpp == 0x10) {
    if (*x < 0x40) {
      *x = 0x40;
    }
  }
  else if ((bpp == 0x20) && (*x < 0x20)) {
    *x = 0x20;
  }
  iVar1 = *x;
  iVar2 = *y;
  if (iVar1 != iVar2) {
    if (iVar1 == iVar2 << 1) {
      return true;
    }
    if (bpp == 8) {
      pageWidth = 0x80;
      pageHeight = 0x40;
    }
    else if (bpp < 9) {
      if (bpp != 4) {
        return true;
      }
      pageWidth = 0x80;
      pageHeight = 0x80;
    }
    else if (bpp == 0x10) {
      pageWidth = 0x80;
      pageHeight = 0x40;
    }
    else {
      if (bpp != 0x20) {
        return true;
      }
      pageWidth = 0x40;
      pageHeight = 0x20;
    }
    if ((iVar1 < pageWidth) || (iVar2 < pageHeight)) {
      iVar4 = iVar2;
      if (iVar2 < iVar1) {
        iVar4 = iVar1;
      }
      if (pageWidth < iVar1) {
        pageWidth = iVar1;
      }
      if (pageHeight < iVar2) {
        pageHeight = iVar2;
      }
      if (iVar4 * iVar4 < pageWidth * pageHeight) {
        *x = iVar4;
        *y = iVar4;
      }
      else {
        *x = pageWidth;
        *y = pageHeight;
      }
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    return bVar3;
  }
  return true;
}

bool EPs2Texture::Create(ETextureDef &td) {
	int newX;
	int newY;
	int nImages;
	int xSize;
	int ySize;
	int totalVRAMBytes;
	int i;
	int totalNumBytes;
	int nPalBytes;
	int paddedX;
	int paddedY;
	int bytesPerRow;
	int nBytes;
	int paddedX;
	int paddedY;
	int bytesPerRow;
	int nBytes;
	int cs;
	NLIterator curShader;
	EPs2Shader *pShader;
	
  ETexture__vtable *pEVar1;
  int iVar2;
  bool bVar3;
  short sVar4;
  void *pvVar5;
  int iVar6;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  int newX;
  int newY;
  int nImages;
  int xSize;
  int ySize;
  int totalVRAMBytes;
  int i;
  int bytesPerRow;
  int paddedY;
  int paddedX;
  int totalNumBytes;
  int nPalBytes;
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
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  Deallocate__11EPs2Texture(this);
  bVar3 = Create__8ETextureRC11ETextureDef(&this->field0_0x0,td);
  if (bVar3) {
    if ((this->field0_0x0).m_textureDef.imageFormat == '\x02') {
      if ((this->field0_0x0).m_textureDef.bitsPerImagePixel == '\x04') {
        sVar4 = 0x10;
      }
      else {
        sVar4 = 0x100;
      }
      (this->field0_0x0).m_textureDef.paletteSize = sVar4;
      (this->field0_0x0).m_textureDef.bitsPerPaletteEntry = ' ';
      (this->field0_0x0).m_textureDef.paletteFormat = '\x02';
    }
    newX = (int)(ushort)(this->field0_0x0).m_textureDef.xsize;
    newY = (int)(ushort)(this->field0_0x0).m_textureDef.ysize;
    pEVar1 = (this->field0_0x0).__vtable;
    (*(code *)pEVar1[2].ETexture)
              ((int)this->m_pDlists + *(short *)(pEVar1 + 2) + -0x48,&newX,&newY,
               (this->field0_0x0).m_textureDef.bitsPerImagePixel);
    switch((this->field0_0x0).m_textureDef.bitsPerImagePixel) {
    case '\x04':
      break;
    default:
      return false;
    case '\b':
      break;
    case '\x10':
      break;
    case '\x18':
      break;
    case ' ':
    }
    if ((ushort)(this->field0_0x0).m_textureDef.mipMapLevels < 2) {
      nImages = 1;
    }
    else {
      nImages = (int)(ushort)(this->field0_0x0).m_textureDef.mipMapLevels;
    }
    xSize = (int)(ushort)(this->field0_0x0).m_textureDef.xsize;
    ySize = (int)(ushort)(this->field0_0x0).m_textureDef.ysize;
    totalVRAMBytes = 0;
    for (i = 0; i < nImages; i = i + 1) {
      bytesPerRow = xSize;
      paddedY = ySize;
      GetPaddedSizeVRAM__11EPs2TexturePiT1i
                (this,&bytesPerRow,&paddedY,(uint)(this->field0_0x0).m_textureDef.bitsPerImagePixel)
      ;
      iVar2 = (uint)(this->field0_0x0).m_textureDef.bitsPerImagePixel * bytesPerRow;
      iVar6 = iVar2 + 7;
      if (iVar6 < 0) {
        iVar6 = iVar2 + 0xe;
      }
      paddedX = iVar6 >> 3;
      totalNumBytes = paddedY * paddedX;
      if (totalNumBytes < 0x2000) {
        totalNumBytes = 0x2000;
      }
      totalVRAMBytes = totalVRAMBytes + totalNumBytes;
      this->m_loads[i].vramEnd = totalVRAMBytes;
      this->m_loads[i].vramNBytes = totalNumBytes;
      this->m_loads[i].vramXSize = (short)bytesPerRow;
      this->m_loads[i].vramYSize = (short)paddedY;
      this->m_loads[i].mipLevel = (uchar)i;
      xSize = xSize >> 1;
      ySize = ySize >> 1;
    }
    this->m_nVRAMBytes = totalVRAMBytes;
    xSize = (int)(ushort)(this->field0_0x0).m_textureDef.xsize;
    ySize = (int)(ushort)(this->field0_0x0).m_textureDef.ysize;
    totalNumBytes = 0;
    for (i = 0; i < nImages; i = i + 1) {
      paddedX = xSize;
      paddedY = ySize;
      pEVar1 = (this->field0_0x0).__vtable;
      (*(code *)pEVar1[2].ETexture)
                ((int)this->m_pDlists + *(short *)(pEVar1 + 2) + -0x48,&paddedX,&paddedY,
                 (this->field0_0x0).m_textureDef.bitsPerImagePixel);
      iVar2 = (uint)(this->field0_0x0).m_textureDef.bitsPerImagePixel * paddedX;
      iVar6 = iVar2 + 7;
      if (iVar6 < 0) {
        iVar6 = iVar2 + 0xe;
      }
      bytesPerRow = iVar6 >> 3;
      nPalBytes = paddedY * bytesPerRow;
      totalNumBytes = totalNumBytes + nPalBytes;
      this->m_loads[i].ramEnd = totalNumBytes;
      this->m_loads[i].ramNBytes = nPalBytes;
      this->m_loads[i].ramXSize = (short)paddedX;
      this->m_loads[i].ramYSize = (short)paddedY;
      *(undefined4 *)(this->m_LoadIndexedAs32Bit + i * 4) = 0;
      if (((((this->field0_0x0).m_textureDef.bitsPerImagePixel == '\b') &&
           ((td->flags & 0x800) == 0)) && (0x7f < (ushort)this->m_loads[i].ramXSize)) &&
         (0x3f < (ushort)this->m_loads[i].ramYSize)) {
        *(undefined4 *)(this->m_LoadIndexedAs32Bit + i * 4) = 1;
      }
      xSize = xSize >> 1;
      ySize = ySize >> 1;
    }
    if ((totalNumBytes != 0) && (((this->field0_0x0).m_textureDef.flags & 0x100) == 0)) {
      if ((this->field0_0x0).m_textureDef.pfnAllocAlign == (undefined1 *)0x0) {
        pvVar5 = _memmanAlloc__FUiUi(totalNumBytes,0x80);
        this->m_pImg = pvVar5;
      }
      else {
        pvVar5 = (void *)(*(code *)(this->field0_0x0).m_textureDef.pfnAllocAlign)
                                   (totalNumBytes,0x80);
        this->m_pImg = pvVar5;
      }
      if (this->m_pImg == (void *)0x0) {
        return false;
      }
      memset(this->m_pImg,0,(long)totalNumBytes);
    }
    this->m_pPal = (void *)0x0;
    nPalBytes = 0;
    if (((this->field0_0x0).m_textureDef.imageFormat != '\x02') &&
       (nPalBytes = (int)((uint)(ushort)(this->field0_0x0).m_textureDef.paletteSize *
                         (uint)(this->field0_0x0).m_textureDef.bitsPerPaletteEntry) >> 3,
       nPalBytes != 0)) {
      if ((this->field0_0x0).m_textureDef.pfnAllocAlign == (undefined1 *)0x0) {
        pvVar5 = _memmanAlloc__FUiUi(nPalBytes,0x80);
        this->m_pPal = pvVar5;
      }
      else {
        pvVar5 = (void *)(*(code *)(this->field0_0x0).m_textureDef.pfnAllocAlign)(nPalBytes,0x80);
        this->m_pPal = pvVar5;
      }
      if (this->m_pPal == (void *)0x0) {
        return false;
      }
      memset(this->m_pPal,0,(long)nPalBytes);
    }
    BuildDlist__11EPs2Textureiiiiif(this,0,1,0,1,0xff,(this->field0_0x0).m_textureDef.mipMapShift);
    this->m_nImgBytes = totalNumBytes;
    this->m_nRAMBytes = totalNumBytes + nPalBytes;
    for (paddedX = 0; paddedX < 2; paddedX = paddedX + 1) {
      for (paddedY = (int)Head__C9ENodeList(&this->m_parentShaders[paddedX].field0_0x0);
          paddedY != 0; paddedY = (int)Next__9ENodeListP17NLIteratorPtrType((undefined1 *)paddedY))
      {
        bytesPerRow = (int)GetData__t9TNodeList1ZP10EPs2ShaderP17NLIteratorPtrType
                                     ((undefined1 *)paddedY);
        TextureChanged__10EPs2Shader((EPs2Shader *)bytesPerRow);
      }
    }
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

bool EPs2Texture::Init() {
	u8 *palBytes;
	int i;
	
  bool bVar1;
  void *pvVar2;
  int iVar3;
  uchar *palBytes;
  int i;
  
  pvVar2 = _memmanAlloc__FUiUi(0x40,0x80);
  _11EPs2Texture_m_pGrayPal4bit = pvVar2;
  if (pvVar2 == (void *)0x0) {
    bVar1 = false;
  }
  else {
    for (i = 0; i < 0x40; i = i + 1) {
      iVar3 = i;
      if (i < 0) {
        iVar3 = i + 3;
      }
      *(char *)((int)pvVar2 + i) = (char)(iVar3 >> 2);
    }
    pvVar2 = _memmanAlloc__FUiUi(0x400,0x80);
    _11EPs2Texture_m_pGrayPal8bit = pvVar2;
    if (pvVar2 == (void *)0x0) {
      bVar1 = false;
    }
    else {
      for (i = 0; i < 0x400; i = i + 1) {
        iVar3 = i;
        if (i < 0) {
          iVar3 = i + 3;
        }
        *(char *)((int)pvVar2 + i) = (char)(iVar3 >> 2);
      }
      InterleavePalette__11EPs2TexturePv(_11EPs2Texture_m_pGrayPal8bit);
      bVar1 = true;
    }
  }
  return bVar1;
}

int EPs2Texture::GetPs2ImageFormat() {
  byte bVar1;
  uchar uVar2;
  int iVar3;
  
  switch((this->field0_0x0).m_textureDef.imageFormat) {
  case '\0':
    uVar2 = (this->field0_0x0).m_textureDef.bitsPerImagePixel;
    if (uVar2 == '\x04') {
      iVar3 = 0x14;
    }
    else if (uVar2 == '\b') {
      iVar3 = 0x13;
    }
    else {
      iVar3 = 0;
    }
    break;
  case '\x01':
    bVar1 = (this->field0_0x0).m_textureDef.bitsPerImagePixel;
    if (bVar1 == 0x18) {
      iVar3 = 1;
    }
    else {
      if (bVar1 < 0x19) {
        if (bVar1 == 0x10) {
          return 10;
        }
      }
      else if (bVar1 == 0x20) {
        return 0;
      }
      iVar3 = 0;
    }
    break;
  case '\x02':
    uVar2 = (this->field0_0x0).m_textureDef.bitsPerImagePixel;
    if (uVar2 == '\x04') {
      iVar3 = 0x14;
    }
    else if (uVar2 == '\b') {
      iVar3 = 0x13;
    }
    else {
      iVar3 = 0;
    }
    break;
  default:
    iVar3 = 0;
    break;
  case '\x04':
    iVar3 = 2;
    break;
  case '\x05':
    iVar3 = 0x31;
  }
  return iVar3;
}

int EPs2Texture::GetPs2ClutStorageFormat() {
  uchar uVar1;
  int iVar2;
  
  switch((this->field0_0x0).m_textureDef.paletteFormat) {
  case '\0':
    iVar2 = 0;
    break;
  default:
    iVar2 = 0;
    break;
  case '\x02':
    uVar1 = (this->field0_0x0).m_textureDef.bitsPerPaletteEntry;
    if (uVar1 == '\x10') {
      iVar2 = 2;
    }
    else if (uVar1 == ' ') {
      iVar2 = 0;
    }
    else {
      iVar2 = 0;
    }
  }
  return iVar2;
}

int EPs2Texture::GetClutLoadBufControl() {
  return (uint)((this->field0_0x0).m_textureDef.paletteFormat != '\0');
}

void EPs2Texture::PostProcessImageData() {
	bool hasSwizzledTextures;
	int i;
	u8 *pCopyImg;
	u8 *pImg;
	int i;
	EPs2TextureLoadData *pLoad;
	u8 *pEnd;
	
  bool bVar1;
  EPs2TextureLoadData *pEVar2;
  uchar *puVar3;
  bool hasSwizzledTextures;
  int local_4c;
  uchar *pCopyImg;
  uchar *pImg;
  int i;
  EPs2TextureLoadData *pLoad;
  uchar *pEnd;
  
  bVar1 = false;
  for (local_4c = 0; local_4c < (int)(uint)(ushort)this->m_nLoads; local_4c = local_4c + 1) {
    if (*(int *)(this->m_LoadIndexedAs32Bit + local_4c * 4) != 0) {
      bVar1 = true;
    }
  }
  if (bVar1) {
    if ((this->field0_0x0).m_textureDef.pfnAllocAlign == (undefined1 *)0x0) {
      pCopyImg = (uchar *)_memmanAlloc__FUiUi(this->m_nImgBytes,4);
    }
    else {
      pCopyImg = (uchar *)(*(code *)(this->field0_0x0).m_textureDef.pfnAllocAlign)
                                    (this->m_nImgBytes,0x10);
    }
    pImg = (uchar *)this->m_pImg;
    for (i = 0; i < (int)(uint)(ushort)this->m_nLoads; i = i + 1) {
      if (*(int *)(this->m_LoadIndexedAs32Bit + i * 4) != 0) {
        pEVar2 = this->m_loads + i;
        memcpy(pCopyImg,pImg,pEVar2->ramNBytes);
        if ((this->field0_0x0).m_textureDef.bitsPerImagePixel == '\b') {
          Conv8to32__FiiPUcT2((uint)(ushort)pEVar2->ramXSize,(uint)(ushort)pEVar2->ramYSize,pCopyImg
                              ,pImg);
        }
        else {
          Conv4to32__FiiPUcT2((uint)(ushort)pEVar2->ramXSize,(uint)(ushort)pEVar2->ramYSize,pCopyImg
                              ,pImg);
        }
        puVar3 = (uchar *)((int)this->m_pImg + pEVar2->ramEnd);
        SyncDCache(pImg,puVar3);
        pImg = puVar3;
      }
    }
    if ((this->field0_0x0).m_textureDef.pfnFree == (undefined1 *)0x0) {
      _memmanFree__FPv(pCopyImg);
    }
    else {
      (*(code *)(this->field0_0x0).m_textureDef.pfnFree)(pCopyImg);
    }
  }
  if ((((this->field0_0x0).m_textureDef.bitsPerImagePixel == '\b') &&
      ((this->field0_0x0).m_textureDef.imageFormat == '\0')) &&
     ((this->field0_0x0).m_textureDef.bitsPerPaletteEntry == ' ')) {
    InterleavePalette__11EPs2TexturePv(this->m_pPal);
  }
  return;
}

void EPs2Texture::InterleavePalette(void *pPal) {
	u32 *pal;
	int i;
	int j;
	u32 temp;
	
  undefined4 uVar1;
  uint *pal;
  int i;
  int j;
  uint temp;
  
  for (i = 0; i < 0x100; i = i + 0x20) {
    for (j = 0; j < 8; j = j + 1) {
      uVar1 = *(undefined4 *)((int)pPal + (i + j) * 4 + 0x20);
      *(undefined4 *)((int)pPal + (i + j) * 4 + 0x20) =
           *(undefined4 *)((int)pPal + (i + j) * 4 + 0x40);
      *(undefined4 *)((int)pPal + (i + j) * 4 + 0x40) = uVar1;
    }
  }
  SyncDCache(pPal,(int)pPal + 0x400);
  return;
}

void FillLoadDL__FPUxR12sceGifPacketiiiiiiiPvbN210_(u128 *pLoadDL, sceGifPacket &gifPkt, int format, int bitsPerTexel, int padXSize, int padYSize, int xSize, int ySize, int nqw, void *pImg, bool first, bool last, bool loadIndexedAs32Bit) {
	int bufWidth;
	u64 eop;
	u64 reg;
	
  int iVar1;
  undefined3 in_stack_00000011;
  undefined3 in_stack_00000019;
  undefined3 in_stack_00000021;
  int local_58;
  int local_54;
  int local_50;
  int local_48;
  int bufWidth;
  ulong eop;
  ulong reg;
  
  local_58 = format;
  local_54 = bitsPerTexel;
  local_50 = padXSize;
  local_48 = xSize;
  if ((_loadIndexedAs32Bit != 0) && (bitsPerTexel == 8)) {
    local_48 = xSize / 2;
    local_50 = padXSize / 2;
    local_54 = 0x20;
    local_58 = 0;
  }
  iVar1 = local_50 + 0x3f;
  if (iVar1 < 0) {
    iVar1 = local_50 + 0x7e;
  }
  bufWidth = iVar1 >> 6;
  if ((local_54 == 8) && (bufWidth < 2)) {
    bufWidth = 2;
  }
  if (_last == 0) {
    reg = 0x7f;
  }
  else {
    reg = 0x60;
  }
  eop = (ulong)(_last != 0);
  if (_first != 0) {
    sceGifPkInit(gifPkt,pLoadDL);
    sceGifPkReset(gifPkt);
  }
  sceGifPkCnt(gifPkt,0,0,0);
  sceGifPkAddGsData(gifPkt,0x1000000000000005);
  sceGifPkAddGsData(gifPkt,0xe);
  sceGifPkAddGsData(gifPkt,0);
  sceGifPkAddGsData(gifPkt,0x3f);
  sceGifPkAddGsData(gifPkt,(long)bufWidth << 0x30 | (long)local_58 << 0x38);
  sceGifPkAddGsData(gifPkt,0x50);
  sceGifPkAddGsData(gifPkt,0);
  sceGifPkAddGsData(gifPkt,0x51);
  sceGifPkAddGsData(gifPkt,(long)local_48 | (long)ySize << 0x20);
  sceGifPkAddGsData(gifPkt,0x52);
  sceGifPkAddGsData(gifPkt,0);
  sceGifPkAddGsData(gifPkt,0x53);
  sceGifPkCnt(gifPkt,0,0,0);
  sceGifPkAddGsData(gifPkt,(long)nqw | 0x800000000000000);
  sceGifPkRef(gifPkt,pImg,nqw,0,0,0);
  if (_last == 0) {
    sceGifPkCnt(gifPkt,0,0,0);
  }
  else {
    sceGifPkEnd(gifPkt,0,0,0);
  }
  sceGifPkAddGsData(gifPkt,eop << 0xf | 0x1000000000000002);
  sceGifPkAddGsData(gifPkt,0xe);
  sceGifPkAddGsData(gifPkt,0);
  sceGifPkAddGsData(gifPkt,0x3f);
  sceGifPkAddGsData(gifPkt,0);
  sceGifPkAddGsData(gifPkt,reg);
  if (_last != 0) {
    sceGifPkTerminate(gifPkt);
  }
  FlushCache(0);
  return;
}

void EPs2Texture::BuildLoadDlist(short int ps2ImageFormat) {
	int hasPalette;
	int dlSize;
	int i;
	u32 startRAMAddr;
	sceGifPacket gifPkt;
	EPs2TextureLoadData *pLoad;
	bool first;
	bool last;
	short int palx;
	short int paly;
	int nqw;
	void *pPal;
	
  bool last;
  int iVar1;
  uint16 *puVar2;
  EPs2TextureLoadData *pEVar3;
  int hasPalette;
  int dlSize;
  int i;
  uint startRAMAddr;
  sceGifPacket__223_1192 gifPkt;
  EPs2TextureLoadData *pLoad;
  void *pPal;
  int nqw;
  ushort palx;
  ushort paly;
  
  if (this->m_pImg != (void *)0x0) {
    hasPalette = (int)((this->field0_0x0).m_textureDef.paletteFormat != '\0');
    if ((this->field0_0x0).m_textureDef.mipMapLevels == 0) {
      this->m_nLoads = 1;
    }
    else {
      this->m_nLoads = (this->field0_0x0).m_textureDef.mipMapLevels;
    }
    iVar1 = (uint)(ushort)this->m_nLoads + hasPalette;
    if ((this->field0_0x0).m_textureDef.pfnAllocAlign == (undefined1 *)0x0) {
      puVar2 = (uint16 *)_memmanAlloc__FUiUi(iVar1 * 0xe0,0x10);
      this->m_pLoadDLs = puVar2;
    }
    else {
      puVar2 = (uint16 *)(*(code *)(this->field0_0x0).m_textureDef.pfnAllocAlign)(iVar1 * 0xe0,0x10)
      ;
      this->m_pLoadDLs = puVar2;
    }
    for (i = 0; i < (int)(uint)(ushort)this->m_nLoads; i = i + 1) {
      this->m_loads[i].pDL = this->m_pLoadDLs + i * 0xe;
    }
    startRAMAddr = (uint)this->m_pImg;
    for (i = 0; i < (int)(uint)(ushort)this->m_nLoads; i = i + 1) {
      pEVar3 = this->m_loads + i;
      last = false;
      if ((i == (ushort)this->m_nLoads - 1) && (hasPalette == 0)) {
        last = true;
      }
      FillLoadDL__FPUxR12sceGifPacketiiiiiiiPvbN210_
                (pEVar3->pDL,&gifPkt,(int)(short)ps2ImageFormat,
                 (uint)(this->field0_0x0).m_textureDef.bitsPerImagePixel,
                 (uint)(ushort)pEVar3->vramXSize,(uint)(ushort)pEVar3->vramYSize,
                 (uint)(ushort)pEVar3->ramXSize,(uint)(ushort)pEVar3->ramYSize,
                 pEVar3->ramNBytes >> 4,(void *)startRAMAddr,i == 0,last,
                 SUB41(*(undefined4 *)(this->m_LoadIndexedAs32Bit + i * 4),0));
      startRAMAddr = (int)this->m_pImg + pEVar3->ramEnd;
    }
    if (hasPalette == 0) {
      this->m_pLoadPalDL = (uint16 *)0x0;
    }
    else {
      this->m_pLoadPalDL = this->m_loads[(ushort)this->m_nLoads - 1].pDL + 0xe;
      if ((this->field0_0x0).m_textureDef.bitsPerImagePixel == '\b') {
        paly = 0x10;
        palx = 0x10;
      }
      else {
        palx = 8;
        paly = 2;
      }
      if ((this->field0_0x0).m_textureDef.imageFormat == '\x02') {
        if ((this->field0_0x0).m_textureDef.bitsPerImagePixel == '\x04') {
          pPal = _11EPs2Texture_m_pGrayPal4bit;
        }
        else {
          pPal = _11EPs2Texture_m_pGrayPal8bit;
        }
      }
      else {
        pPal = this->m_pPal;
      }
      FillLoadDL__FPUxR12sceGifPacketiiiiiiiPvbN210_
                (this->m_pLoadPalDL,&gifPkt,0,0x20,(int)(short)palx,(int)(short)paly,
                 (int)(short)palx,(int)(short)paly,
                 (int)((int)(short)palx * (int)(short)paly *
                      (uint)((this->field0_0x0).m_textureDef.bitsPerPaletteEntry >> 3)) >> 4,pPal,
                 false,true,SUB41(*(undefined4 *)this->m_LoadIndexedAs32Bit,0));
    }
  }
  return;
}

void EPs2Texture::BuildDlist(int blendA, int blendB, int blendC, int blendD, int blendFix, float mipShift) {
	int ps2ImageFormat;
	int ps2ClutStorageFormat;
	int ps2ClutLoadBufCntrl;
	int bufwidth;
	long unsigned int regs[32];
	sceGsTex0 tex0;
	sceGsTex1 tex1;
	sceGsClamp clamp;
	sceGsAlpha alpha;
	sceGsPabe pabe;
	int nBytes;
	sceGifTag *pGifTag;
	u64 *pRegs;
	int nqw;
	int vuDst;
	EVif vif;
	sceGsMiptbp1 mip1;
	sceGsMiptbp2 mip2;
	int xSize;
	int i;
	
  ushort uVar1;
  ulong *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined local_260;
  int ps2ImageFormat;
  int ps2ClutStorageFormat;
  int ps2ClutLoadBufCntrl;
  int bufwidth;
  ulong regs [32];
  sceGsTex0__258_939 tex0;
  sceGsTex1__258_946 tex1;
  sceGsClamp__258_778 clamp;
  sceGsAlpha__258_764 alpha;
  sceGsMiptbp1__258_855 mip1;
  sceGsMiptbp2__258_862 mip2;
  int xSize;
  sceGifTag__258_699 *pGifTag;
  ulong *pRegs;
  int nqw;
  int vuDst;
  EVif vif;
  int i;
  
  uVar3 = GetPs2ImageFormat__11EPs2Texture(this);
  uVar4 = GetPs2ClutStorageFormat__11EPs2Texture(this);
  iVar5 = GetClutLoadBufControl__11EPs2Texture(this);
  ps2ImageFormat._0_2_ = (ushort)uVar3;
  BuildLoadDlist__11EPs2Textures(this,(ushort)ps2ImageFormat);
  bufwidth = (int)((ushort)(this->field0_0x0).m_textureDef.xsize + 0x3f) >> 6;
  if (((uint)bufwidth < 2) && ((this->field0_0x0).m_textureDef.bitsPerImagePixel == '\b')) {
    bufwidth = 2;
  }
  this->m_dlSize = 0;
  uVar1 = this->m_dlSize;
  this->m_dlSize = uVar1 + 1;
  regs[uVar1] = 0;
  uVar1 = this->m_dlSize;
  this->m_dlSize = uVar1 + 1;
  regs[uVar1] = 0x3f;
  uVar6 = log2down__Fi((uint)(ushort)(this->field0_0x0).m_textureDef.xsize);
  uVar7 = log2down__Fi((uint)(ushort)(this->field0_0x0).m_textureDef.ysize);
  tex0 = (sceGsTex0__258_939)
         ((ulong)tex0 & 0x400000000 | (long)(int)(bufwidth & 0x3f) << 0xe |
          (long)(int)(uVar3 & 0x3f) << 0x14 | (long)(int)(uVar6 & 0xf) << 0x1a |
          (long)(int)(uVar7 & 0xf) << 0x1e | 0x400000000 | (long)(int)(uVar4 & 0xf) << 0x33 |
         (long)iVar5 << 0x3d);
  uVar1 = this->m_dlSize;
  this->m_dlSize = uVar1 + 1;
  *(sceGsTex0__258_939 *)(regs + uVar1) = tex0;
  uVar1 = this->m_dlSize;
  this->m_dlSize = uVar1 + 1;
  regs[uVar1] = 6;
  (this->m_txtPatch).tex0 = (sceGsTex0__208_2889)tex0;
  uVar9 = (ulong)(int)((ushort)(this->field0_0x0).m_textureDef.mipMapLevels - 1);
  if ((long)uVar9 < 0) {
    uVar9 = 0;
  }
  uVar9 = (uVar9 & 7) << 2;
  if (((this->field0_0x0).m_textureDef.flags & 0x400) == 0) {
    tex1 = (sceGsTex1__258_946)((ulong)tex1 & 0xfffffffffffffe22 | uVar9 | 0x120);
  }
  else {
    tex1 = (sceGsTex1__258_946)((ulong)tex1 & 0xfffffffffffffe22 | uVar9 | 0x160);
  }
  uVar1 = this->m_dlSize;
  this->m_dlSize = uVar1 + 1;
  regs[uVar1] = (ulong)tex1 & 0xfffff000ffe7fdff |
                (long)(int)((int)(mipShift * 16.0) & 0xfff) << 0x20;
  uVar1 = this->m_dlSize;
  this->m_dlSize = uVar1 + 1;
  regs[uVar1] = 0x14;
  if (((this->field0_0x0).m_textureDef.flags & 1) == 0) {
    clamp = (sceGsClamp__258_778)
            ((ulong)clamp & 0xfffffffc0000000c | 1 |
            (long)(int)((ushort)(this->field0_0x0).m_textureDef.xsize - 1 & 0x3ff) << 0xe);
  }
  else {
    clamp = (sceGsClamp__258_778)((ulong)clamp & 0xfffffffc0000000c);
  }
  if (((this->field0_0x0).m_textureDef.flags & 2) == 0) {
    clamp = (sceGsClamp__258_778)
            ((ulong)clamp & 0xfffff003fffffff3 | 4 |
            (long)(int)((ushort)(this->field0_0x0).m_textureDef.ysize - 1 & 0x3ff) << 0x22);
  }
  else {
    clamp = (sceGsClamp__258_778)((ulong)clamp & 0xfffff003fffffff3);
  }
  uVar1 = this->m_dlSize;
  this->m_dlSize = uVar1 + 1;
  *(sceGsClamp__258_778 *)(regs + uVar1) = clamp;
  uVar1 = this->m_dlSize;
  this->m_dlSize = uVar1 + 1;
  regs[uVar1] = 8;
  local_260 = (undefined)blendFix;
  alpha._0_5_ = CONCAT14(local_260,
                         SUB84(alpha,0) & 0xffffff00 | blendA & 3U |
                         (uint)((long)(int)(blendB & 3) << 2) | (uint)((long)(int)(blendC & 3) << 4)
                         | (uint)((long)(int)(blendD & 3) << 6));
  alpha = (sceGsAlpha__258_764)((ulong)alpha & 0xffffff0000000000 | (ulong)alpha._0_5_);
  uVar1 = this->m_dlSize;
  this->m_dlSize = uVar1 + 1;
  *(sceGsAlpha__258_764 *)(regs + uVar1) = alpha;
  uVar1 = this->m_dlSize;
  this->m_dlSize = uVar1 + 1;
  regs[uVar1] = 0x42;
  if ((this->field0_0x0).m_textureDef.mipMapLevels != 0) {
    uVar3 = (uint)((ushort)(this->field0_0x0).m_textureDef.xsize >> 6);
    uVar9 = (ulong)((int)uVar3 >> 1);
    if (uVar9 == 0) {
      uVar9 = 1;
    }
    uVar10 = (ulong)((int)uVar3 >> 2);
    if (uVar10 == 0) {
      uVar10 = 1;
    }
    uVar11 = (ulong)((int)uVar3 >> 3);
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    lVar12 = (long)((int)uVar3 >> 4);
    if (lVar12 == 0) {
      lVar12 = 1;
    }
    lVar13 = (long)((int)uVar3 >> 5);
    if (lVar13 == 0) {
      lVar13 = 1;
    }
    lVar14 = (long)((int)uVar3 >> 6);
    if (lVar14 == 0) {
      lVar14 = 1;
    }
    mip2 = (sceGsMiptbp2__258_862)
           ((ulong)mip2 & 0xf03fff03fff03fff | lVar12 << 0xe | lVar13 << 0x22 | lVar14 << 0x36);
    uVar1 = this->m_dlSize;
    this->m_dlSize = uVar1 + 1;
    regs[uVar1] = (ulong)mip1 & 0xf03fff03fff03fff | (uVar9 & 0x3f) << 0xe | (uVar10 & 0x3f) << 0x22
                  | (uVar11 & 0x3f) << 0x36;
    uVar1 = this->m_dlSize;
    this->m_dlSize = uVar1 + 1;
    regs[uVar1] = 0x34;
    uVar1 = this->m_dlSize;
    this->m_dlSize = uVar1 + 1;
    *(sceGsMiptbp2__258_862 *)(regs + uVar1) = mip2;
    uVar1 = this->m_dlSize;
    this->m_dlSize = uVar1 + 1;
    regs[uVar1] = 0x36;
  }
  uVar1 = this->m_dlSize;
  this->m_dlSize = uVar1 + 1;
  regs[uVar1] = (ulong)mip2 & 0xfffffffffffffffe;
  uVar1 = this->m_dlSize;
  this->m_dlSize = uVar1 + 1;
  regs[uVar1] = 0x49;
  uVar1 = this->m_dlSize;
  this->m_dlSize = uVar1 + 1;
  regs[uVar1] = 0;
  uVar1 = this->m_dlSize;
  this->m_dlSize = uVar1 + 1;
  regs[uVar1] = 0x60;
  this->m_dlSize = this->m_dlSize + 2;
  uVar3 = (uint)(ushort)this->m_dlSize * 8;
  if ((this->field0_0x0).m_textureDef.pfnAllocAlign == (undefined1 *)0x0) {
    pvVar8 = _memmanAlloc__FUiUi(uVar3,0x10);
    this->m_pDlists[0] = pvVar8;
    pvVar8 = _memmanAlloc__FUiUi(uVar3,0x10);
    this->m_pDlists[1] = pvVar8;
  }
  else {
    pvVar8 = (void *)(*(code *)(this->field0_0x0).m_textureDef.pfnAllocAlign)(uVar3,0x10);
    this->m_pDlists[0] = pvVar8;
    pvVar8 = (void *)(*(code *)(this->field0_0x0).m_textureDef.pfnAllocAlign)(uVar3,0x10);
    this->m_pDlists[1] = pvVar8;
  }
  this->m_dlSize = (ushort)this->m_dlSize >> 1;
  puVar2 = (ulong *)this->m_pDlists[0];
  *(undefined4 *)puVar2 = 0;
  *(undefined4 *)((int)puVar2 + 4) = 0;
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined4 *)((int)puVar2 + 0xc) = 0;
  *puVar2 = *puVar2 & 0xffffffffffff8000 | (long)(int)((ushort)this->m_dlSize - 1 & 0x7fff);
  *puVar2 = *puVar2 | 0x8000;
  *puVar2 = *puVar2 & 0xfffffffffffffff | 0x1000000000000000;
  puVar2[1] = puVar2[1] & 0xfffffffffffffff0 | 0xe;
  memcpy((void *)((int)this->m_pDlists[0] + 0x10),regs,uVar3 - 0x10);
  memcpy(this->m_pDlists[1],this->m_pDlists[0],uVar3);
  pvVar8 = this->m_pDlists[1];
  *(long *)((int)pvVar8 + 0x28) = *(long *)((int)pvVar8 + 0x28) + 1;
  *(long *)((int)pvVar8 + 0x38) = *(long *)((int)pvVar8 + 0x38) + 1;
  *(long *)((int)pvVar8 + 0x48) = *(long *)((int)pvVar8 + 0x48) + 1;
  *(long *)((int)pvVar8 + 0x58) = *(long *)((int)pvVar8 + 0x58) + 1;
  if ((this->field0_0x0).m_textureDef.mipMapLevels != 0) {
    *(long *)((int)pvVar8 + 0x68) = *(long *)((int)pvVar8 + 0x68) + 1;
    *(long *)((int)pvVar8 + 0x78) = *(long *)((int)pvVar8 + 0x78) + 1;
  }
  iVar5 = (int)(((ushort)this->m_dlSize - 1) * 0x10) >> 4;
  __4EVif(&vif);
  for (i = 0; i < 2; i = i + 1) {
    Begin__4EVifPvi(&vif,this->m_selectDMA[i],0x60);
    ResetInputBuffer__4EVU1P4EVif(&_vu1,&vif);
    AddDmaTag__4EVifUiPvi(&vif,1,(void *)0x0,0);
    AddVifTag__4EVifUi(&vif,0x13000000);
    AddVifTag__4EVifUi(&vif,0);
    AddDmaTag__4EVifUiPvi(&vif,3,this->m_pDlists[i],iVar5);
    AddVifTag__4EVifUi(&vif,0);
    AddVifTag__4EVifUi(&vif,iVar5 << 0x10 | 0x6c0080eb);
    AddDmaTag__4EVifUiPvi(&vif,1,(void *)0x0,0);
    AddVifTag__4EVifUi(&vif,pvu1DisplayList >> 3 | 0x15000000);
    AddVifTag__4EVifUi(&vif,pvu1SendInterrupt >> 3 | 0x15000000);
    AddDmaTag__4EVifUiPvi(&vif,6,(void *)0x0,0);
    AddVifTag__4EVifUi(&vif,0);
    AddVifTag__4EVifUi(&vif,0);
    End__4EVif(&vif);
  }
  FlushCache(0);
  ___4EVif(&vif,2);
  return;
}

void EPs2Texture::DiscardCallback(u32 param) {
  *(undefined4 *)param = 0;
  return;
}

bool EPs2Texture::Lock() {
	EVramEntry **ppPalVramEntry;
	void *pPal;
	bool needsLoading;
	int vramSize;
	EVramAllocParams vap;
	int paletteVramSize;
	EVramAllocParams vap;
	
  bool bVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  EVramEntry *pEVar5;
  EVramEntry **ppPalVramEntry;
  void *pPal;
  bool needsLoading;
  int vramSize;
  EVramAllocParams vap;
  
  if (this->m_pImg == (void *)0x0) {
    ChangeLocks__11EPs2Texturei(this,1);
  }
  else {
    AcquireVramMutex__12EPs2Graphics(&_ps2gfx);
    if (this->m_pVramEntry != (EVramEntry *)0x0) {
      LockVram__12EPs2GraphicsP10EVramEntryb(&_ps2gfx,this->m_pVramEntry,false);
    }
    if ((this->field0_0x0).m_textureDef.imageFormat == '\x02') {
      if ((this->field0_0x0).m_textureDef.bitsPerImagePixel == '\x04') {
        ppPalVramEntry = &_11EPs2Texture_m_pGrayPalEntry4bit;
        pPal = _11EPs2Texture_m_pGrayPal4bit;
      }
      else {
        ppPalVramEntry = &_11EPs2Texture_m_pGrayPalEntry8bit;
        pPal = _11EPs2Texture_m_pGrayPal8bit;
      }
    }
    else {
      ppPalVramEntry = &this->m_pPaletteVramEntry;
      pPal = this->m_pPal;
    }
    if (*ppPalVramEntry != (EVramEntry *)0x0) {
      LockVram__12EPs2GraphicsP10EVramEntryb(&_ps2gfx,*ppPalVramEntry,false);
    }
    ReleaseVramMutex__12EPs2Graphics(&_ps2gfx);
    sVar3 = this->m_needsLoading;
    bVar1 = this->m_pVramEntry == (EVramEntry *)0x0;
    if (bVar1) {
      vap.size = this->m_nVRAMBytes + 0xff & 0xffffff00;
      __16EVramAllocParams(&vap);
      vap.pfnCallback = DiscardCallback__11EPs2TextureUi;
      vap.callbackParam = (uint)&this->m_pVramEntry;
      vap._12_4_ = 1;
      pEVar5 = AllocateAndLockVram__12EPs2GraphicsRC16EVramAllocParams(&_ps2gfx,&vap);
      this->m_pVramEntry = pEVar5;
    }
    bVar1 = bVar1 || sVar3 != 0;
    if ((pPal != (void *)0x0) && (*ppPalVramEntry == (EVramEntry *)0x0)) {
      uVar4 = (this->field0_0x0).m_textureDef.paletteSize;
      bVar2 = (this->field0_0x0).m_textureDef.bitsPerPaletteEntry;
      __16EVramAllocParams(&vap);
      vap.pfnCallback = DiscardCallback__11EPs2TextureUi;
      vap.callbackParam = (uint)ppPalVramEntry;
      vap._12_4_ = 1;
      vap.size = ((int)((uint)uVar4 * (uint)bVar2) >> 3) + 0xffU & 0xffffff00;
      pEVar5 = AllocateAndLockVram__12EPs2GraphicsRC16EVramAllocParams(&_ps2gfx,&vap);
      *ppPalVramEntry = pEVar5;
      bVar1 = true;
    }
    if (bVar1) {
      LoadToVRAM__11EPs2Texture(this);
    }
    ChangeLocks__11EPs2Texturei(this,1);
  }
  return true;
}

void EPs2Texture::ChangeLocks(int nAdd) {
	int newLocks;
	
  int newLocks;
  
  Acquire__6EMutexUi(&_11EPs2Texture_m_lockMutex,0xffffffff);
  SetLocks__11EPs2Textureib(this,(this->m_txtPatch).nLocks + nAdd,false);
  Release__6EMutex(&_11EPs2Texture_m_lockMutex);
  return;
}

void EPs2Texture::SetLocks(int newLocks, bool useMutex) {
	int *pNLocks;
	int *pNLocksUncached;
	int i;
	NLIterator curShader;
	EPs2Shader *pShader;
	
  int *piVar1;
  EPs2Shader *this_00;
  int *pNLocks;
  int *pNLocksUncached;
  int i;
  undefined1 *curShader;
  EPs2Shader *pShader;
  
  if (useMutex) {
    Acquire__6EMutexUi(&_11EPs2Texture_m_lockMutex,0xffffffff);
  }
  piVar1 = &(this->m_txtPatch).nLocks;
  *piVar1 = newLocks;
  *(int *)((uint)piVar1 | 0x20000000) = newLocks;
  for (i = 0; i < 2; i = i + 1) {
    for (curShader = Head__C9ENodeList(&this->m_parentShaders[i].field0_0x0);
        curShader != (undefined1 *)0x0; curShader = Next__9ENodeListP17NLIteratorPtrType(curShader))
    {
      this_00 = GetData__t9TNodeList1ZP10EPs2ShaderP17NLIteratorPtrType(curShader);
      UpdateLocks__10EPs2Shaderii(this_00,newLocks,i);
    }
  }
  if (useMutex) {
    Release__6EMutex(&_11EPs2Texture_m_lockMutex);
  }
  return;
}

void EPs2Texture::Unlock() {
	EVramEntry *pPalVramEntry;
	void *pPal;
	
  EVramEntry *pPalVramEntry;
  void *pPal;
  
  if (this->m_pImg == (void *)0x0) {
    ChangeLocks__11EPs2Texturei(this,-1);
  }
  else {
    ChangeLocks__11EPs2Texturei(this,-1);
    UnlockVram__12EPs2GraphicsP10EVramEntry(&_ps2gfx,this->m_pVramEntry);
    if ((this->field0_0x0).m_textureDef.imageFormat == '\x02') {
      if ((this->field0_0x0).m_textureDef.bitsPerImagePixel == '\x04') {
        pPalVramEntry = _11EPs2Texture_m_pGrayPalEntry4bit;
        pPal = _11EPs2Texture_m_pGrayPal4bit;
      }
      else {
        pPalVramEntry = _11EPs2Texture_m_pGrayPalEntry8bit;
        pPal = _11EPs2Texture_m_pGrayPal8bit;
      }
    }
    else {
      pPalVramEntry = this->m_pPaletteVramEntry;
      pPal = this->m_pPal;
    }
    if (pPal != (void *)0x0) {
      UnlockVram__12EPs2GraphicsP10EVramEntry(&_ps2gfx,pPalVramEntry);
    }
  }
  return;
}

void EPs2Texture::SetMipStartAddr(void *pDL, int level, u32 vramAddr) {
	sceGsMiptbp1 *pMip11;
	sceGsMiptbp1 *pMip11Uncached;
	sceGsMiptbp2 *pMip21;
	sceGsMiptbp2 *pMip21Uncached;
	
  ulong *puVar1;
  ulong *puVar2;
  sceGsMiptbp2__258_862 *pMip21Uncached;
  sceGsMiptbp2__258_862 *pMip21;
  
  if (level < 4) {
    puVar2 = (ulong *)((int)pDL + 0x60);
    puVar1 = (ulong *)((uint)puVar2 | 0x20000000);
    if (level == 1) {
      *puVar1 = *puVar1 & 0xffffffffffffc000 | (ulong)vramAddr & 0x3fff;
      *puVar2 = *puVar2 & 0xffffffffffffc000 | (ulong)vramAddr & 0x3fff;
    }
    else if (level == 2) {
      *puVar1 = *puVar1 & 0xfffffffc000fffff | ((ulong)vramAddr & 0x3fff) << 0x14;
      *puVar2 = *puVar2 & 0xfffffffc000fffff | ((ulong)vramAddr & 0x3fff) << 0x14;
    }
    else if (level == 3) {
      *puVar1 = *puVar1 & 0xffc000ffffffffff | ((ulong)vramAddr & 0x3fff) << 0x28;
      *puVar2 = *puVar2 & 0xffc000ffffffffff | ((ulong)vramAddr & 0x3fff) << 0x28;
    }
  }
  else {
    puVar2 = (ulong *)((int)this->m_pDlists[0] + 0x70);
    puVar1 = (ulong *)((uint)puVar2 | 0x20000000);
    if (level == 4) {
      *puVar1 = *puVar1 & 0xffffffffffffc000 | (ulong)vramAddr & 0x3fff;
      *puVar2 = *puVar2 & 0xffffffffffffc000 | (ulong)vramAddr & 0x3fff;
    }
    else if (level == 5) {
      *puVar1 = *puVar1 & 0xfffffffc000fffff | ((ulong)vramAddr & 0x3fff) << 0x14;
      *puVar2 = *puVar2 & 0xfffffffc000fffff | ((ulong)vramAddr & 0x3fff) << 0x14;
    }
    else if (level == 6) {
      *puVar1 = *puVar1 & 0xffc000ffffffffff | ((ulong)vramAddr & 0x3fff) << 0x28;
      *puVar2 = *puVar2 & 0xffc000ffffffffff | ((ulong)vramAddr & 0x3fff) << 0x28;
    }
  }
  return;
}

void EPs2Texture::PatchSetupDL(void *pDL, u32 vramAddr, u32 palVramAddr, sceGsTex0 *pTex0) {
	sceGsTex0 *pTex0DL;
	sceGsTex0 *pTex0UncachedDL;
	sceGsTex0 *pTex0Uncached;
	int startAddr;
	int i;
	EPs2TextureLoadData *pLoad;
	
  int iVar1;
  sceGsTex0__258_939 *psVar2;
  int startAddr;
  sceGsTex0__258_939 *pTex0UncachedDL;
  EPs2TextureLoadData *pLoad;
  
  if ((this->field0_0x0).m_textureDef.mipMapLevels != 0) {
    startAddr = vramAddr;
    for (pTex0UncachedDL = (sceGsTex0__258_939 *)0x0;
        (int)pTex0UncachedDL < (int)(uint)(ushort)this->m_nLoads;
        pTex0UncachedDL = (sceGsTex0__258_939 *)&pTex0UncachedDL->field_0x1) {
      if (this->m_loads[(int)pTex0UncachedDL].mipLevel != '\0') {
        SetMipStartAddr__11EPs2TexturePviUi
                  (this,pDL,(uint)this->m_loads[(int)pTex0UncachedDL].mipLevel,startAddr);
      }
      iVar1 = this->m_loads[(int)pTex0UncachedDL].vramEnd;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0xff;
      }
      startAddr = vramAddr + (iVar1 >> 8);
    }
  }
  psVar2 = (sceGsTex0__258_939 *)((int)pDL + 0x20);
  *psVar2 = (sceGsTex0__258_939)((ulong)*psVar2 & 0xffffffffffffc000 | (ulong)vramAddr & 0x3fff);
  *psVar2 = (sceGsTex0__258_939)
            ((ulong)*psVar2 & 0xfff8001fffffffff | ((ulong)palVramAddr & 0x3fff) << 0x25);
  *(sceGsTex0__258_939 *)((uint)psVar2 | 0x20000000) = *psVar2;
  *(sceGsTex0__258_939 *)((uint)pTex0 | 0x20000000) = *psVar2;
  *pTex0 = *(sceGsTex0__258_939 *)((uint)pTex0 | 0x20000000);
  return;
}

void EPs2Texture::LoadToVRAM() {
	u32 vramAddr;
	u32 palVramAddr;
	EVramEntry *pPalVramEntry;
	void *pPal;
	int i;
	int addr;
	int dlSize;
	NLIterator curShader;
	EPs2Shader *pShader;
	void *pSelectDL;
	EPs2TextureLoadData *pLoad;
	sceGsBitbltbuf *pBBCached;
	sceGsBitbltbuf *pBBUncached;
	sceGsBitbltbuf *pBBCached;
	sceGsBitbltbuf *pBBUncached;
	
  uint vramAddr_00;
  EPs2Shader *pEVar1;
  ulong *puVar2;
  uint16 *puVar3;
  int iVar4;
  uint vramAddr;
  uint palVramAddr;
  EVramEntry *pPalVramEntry;
  void *pPal;
  int i;
  EPs2TextureLoadData *pLoad;
  EPs2Shader *pShader;
  int addr;
  sceGsBitbltbuf__258_771 *pBBUncached;
  sceGsBitbltbuf__258_771 *pBBCached;
  
  this->m_needsLoading = 0;
  if (this->m_pImg != (void *)0x0) {
    StartLoadTimer__17EPs2TextureLoader(&_ps2texload);
    vramAddr_00 = this->m_pVramEntry->address >> 8;
    palVramAddr = 0;
    if ((this->field0_0x0).m_textureDef.imageFormat == '\x02') {
      if ((this->field0_0x0).m_textureDef.bitsPerImagePixel == '\x04') {
        pPalVramEntry = _11EPs2Texture_m_pGrayPalEntry4bit;
        pPal = _11EPs2Texture_m_pGrayPal4bit;
      }
      else {
        pPalVramEntry = _11EPs2Texture_m_pGrayPalEntry8bit;
        pPal = _11EPs2Texture_m_pGrayPal8bit;
      }
    }
    else {
      pPalVramEntry = this->m_pPaletteVramEntry;
      pPal = this->m_pPal;
    }
    if (pPal != (void *)0x0) {
      palVramAddr = pPalVramEntry->address >> 8;
    }
    PatchSetupDL__11EPs2TexturePvUiUiP9sceGsTex0
              (this,this->m_pDlists[0],vramAddr_00,palVramAddr,
               (sceGsTex0__258_939 *)&this->m_txtPatch);
    PatchSetupDL__11EPs2TexturePvUiUiP9sceGsTex0
              (this,this->m_pDlists[1],vramAddr_00,palVramAddr,
               (sceGsTex0__258_939 *)&this->m_txtPatch);
    for (i = 0; i < 2; i = i + 1) {
      for (pLoad = (EPs2TextureLoadData *)Head__C9ENodeList(&this->m_parentShaders[i].field0_0x0);
          pLoad != (EPs2TextureLoadData *)0x0;
          pLoad = (EPs2TextureLoadData *)Next__9ENodeListP17NLIteratorPtrType((undefined1 *)pLoad))
      {
        pEVar1 = GetData__t9TNodeList1ZP10EPs2ShaderP17NLIteratorPtrType((undefined1 *)pLoad);
        if (pEVar1->m_pTextureSelectDLs[i] != (void *)0x0) {
          PatchSetupDL__11EPs2TexturePvUiUiP9sceGsTex0
                    (this,pEVar1->m_pTextureSelectDLs[i],vramAddr_00,palVramAddr,
                     (sceGsTex0__258_939 *)(pEVar1->m_txtPatches + i));
        }
      }
    }
    pShader = (EPs2Shader *)0x0;
    addr = vramAddr_00;
    for (i = 0; i < (int)(uint)(ushort)this->m_nLoads; i = i + 1) {
      puVar2 = (ulong *)((uint)(this->m_loads[i].pDL + 3) | 0x20000000);
      puVar3 = this->m_loads[i].pDL + 3;
      *puVar2 = *puVar2 & 0xffffc000ffffffff | (long)(int)(addr & 0x3fff) << 0x20;
      *(ulong *)puVar3 = *(ulong *)puVar3 & 0xffffc000ffffffff | (long)(int)(addr & 0x3fff) << 0x20;
      pShader = (EPs2Shader *)((int)&(pShader->field0_0x0).m_sd.sortValue + 2);
      iVar4 = this->m_loads[i].vramEnd;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xff;
      }
      addr = vramAddr_00 + (iVar4 >> 8);
      _ps2rend.m_nVramLoadBytes = _ps2rend.m_nVramLoadBytes + this->m_loads[i].vramNBytes;
    }
    if (this->m_pLoadPalDL != (uint16 *)0x0) {
      puVar2 = (ulong *)((uint)(this->m_pLoadPalDL + 3) | 0x20000000);
      puVar3 = this->m_pLoadPalDL;
      *puVar2 = *puVar2 & 0xffffc000ffffffff | ((ulong)palVramAddr & 0x3fff) << 0x20;
      *(ulong *)(puVar3 + 3) =
           *(ulong *)(puVar3 + 3) & 0xffffc000ffffffff | ((ulong)palVramAddr & 0x3fff) << 0x20;
      pShader = (EPs2Shader *)((int)&(pShader->field0_0x0).m_sd.sortValue + 2);
    }
    SendGSDisplayList__12EPs2GraphicsPvii(&_ps2gfx,this->m_loads[0].pDL,(int)pShader,1);
    StopLoadTimer__17EPs2TextureLoader(&_ps2texload);
  }
  return;
}

void EPs2Texture::Select(int renderPass) {
	EVif vif;
	
  EVif vif;
  
  __4EVif(&vif);
  Begin__4EVifPvi(&vif,this->m_selectDMA[renderPass],0x60);
  Send__4EVif(&vif);
  ___4EVif(&vif,2);
  return;
}

bool EPs2Texture::UpdateBegin(ETextureUpdateType updateType) {
  this->m_updateType = updateType;
  if ((((this->field0_0x0).m_textureDef.bitsPerImagePixel == '\b') &&
      ((this->field0_0x0).m_textureDef.imageFormat == '\0')) &&
     ((this->field0_0x0).m_textureDef.bitsPerPaletteEntry == ' ')) {
    InterleavePalette__11EPs2TexturePv(this->m_pPal);
  }
  return true;
}

void* EPs2Texture::UpdateMipLevel(int mipLevel, int &pitchX, int &pitchY) {
	void *pImageOut;
	int i;
	int i;
	
  short sVar1;
  ETexture__vtable *pEVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  void *pImageOut;
  int i;
  
  pImageOut = this->m_pImg;
  if (mipLevel != 0) {
    for (i = 0; i < (int)(uint)(ushort)this->m_nLoads; i = i + 1) {
      if ((int)(uint)this->m_loads[i].mipLevel < mipLevel) {
        pImageOut = (void *)((int)this->m_pImg + this->m_loads[i].ramEnd);
      }
    }
  }
  uVar4 = GetXSize__8ETexture(&this->field0_0x0);
  *pitchX = uVar4;
  uVar4 = GetYSize__8ETexture(&this->field0_0x0);
  *pitchY = uVar4;
  for (i = 0; i < mipLevel; i = i + 1) {
    *pitchX = *pitchX >> 1;
    *pitchY = *pitchY >> 1;
  }
  pEVar2 = (this->field0_0x0).__vtable;
  sVar1 = *(short *)(pEVar2 + 2);
  uVar4 = GetBitsPerImagePixel__8ETexture(&this->field0_0x0);
  (*(code *)pEVar2[2].ETexture)((int)this->m_pDlists + sVar1 + -0x48,pitchX,pitchY,uVar4);
  iVar3 = (uint)(this->field0_0x0).m_textureDef.bitsPerImagePixel * *pitchX;
  iVar5 = iVar3 + 7;
  if (iVar5 < 0) {
    iVar5 = iVar3 + 0xe;
  }
  *pitchX = iVar5 >> 3;
  return pImageOut;
}

void* EPs2Texture::UpdatePalette() {
  return this->m_pPal;
}

void EPs2Texture::UpdateEnd() {
  ETexture__vtable *pEVar1;
  
  if ((((this->field0_0x0).m_textureDef.bitsPerImagePixel == '\b') &&
      ((this->field0_0x0).m_textureDef.imageFormat == '\0')) &&
     ((this->field0_0x0).m_textureDef.bitsPerPaletteEntry == ' ')) {
    if ((this->m_updateType == E_TEXUPDATE_PALETTE) || (this->m_updateType == E_TEXUPDATE_READONLY))
    {
      InterleavePalette__11EPs2TexturePv(this->m_pPal);
    }
    else {
      PostProcessImageData__11EPs2Texture(this);
    }
  }
  else if (this->m_updateType != E_TEXUPDATE_READONLY) {
    PostProcessImageData__11EPs2Texture(this);
  }
  FlushCache(0);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1->Create)((int)this->m_pDlists + *(short *)&pEVar1->UpdateEnd + -0x48);
  return;
}

void EPs2Texture::OverrideVRAM(ERC *prc, u32 vramAddr, int format) {
	EVec4 *buf;
	sceGifTag *pGifTag;
	sceGsTex0 *pTex01;
	
  ushort uVar1;
  void *pvVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  EVec4 *buf;
  sceGifTag__258_699 *pGifTag;
  sceGsTex0__258_939 *pTex01;
  
  puVar4 = (ulong *)Alloc__3ERCUii(prc,0x50,0x10);
  pvVar2 = this->m_pDlists[0];
  uVar3 = *(undefined8 *)((int)pvVar2 + 0x10);
  uVar6 = *(undefined4 *)((int)pvVar2 + 0x18);
  uVar7 = *(undefined4 *)((int)pvVar2 + 0x1c);
  *(int *)(puVar4 + 2) = (int)uVar3;
  *(int *)((int)puVar4 + 0x14) = (int)((ulong)uVar3 >> 0x20);
  *(undefined4 *)(puVar4 + 3) = uVar6;
  *(undefined4 *)((int)puVar4 + 0x1c) = uVar7;
  pvVar2 = this->m_pDlists[0];
  uVar3 = *(undefined8 *)((int)pvVar2 + 0x20);
  uVar6 = *(undefined4 *)((int)pvVar2 + 0x28);
  uVar7 = *(undefined4 *)((int)pvVar2 + 0x2c);
  *(int *)(puVar4 + 4) = (int)uVar3;
  *(int *)((int)puVar4 + 0x24) = (int)((ulong)uVar3 >> 0x20);
  *(undefined4 *)(puVar4 + 5) = uVar6;
  *(undefined4 *)((int)puVar4 + 0x2c) = uVar7;
  pvVar2 = this->m_pDlists[0];
  uVar3 = *(undefined8 *)((int)pvVar2 + 0x10);
  uVar6 = *(undefined4 *)((int)pvVar2 + 0x18);
  uVar7 = *(undefined4 *)((int)pvVar2 + 0x1c);
  *(int *)(puVar4 + 6) = (int)uVar3;
  *(int *)((int)puVar4 + 0x34) = (int)((ulong)uVar3 >> 0x20);
  *(undefined4 *)(puVar4 + 7) = uVar6;
  *(undefined4 *)((int)puVar4 + 0x3c) = uVar7;
  uVar1 = this->m_dlSize;
  pvVar2 = this->m_pDlists[0];
  uVar3 = *(undefined8 *)((int)pvVar2 + (uint)uVar1 * 0x10 + -0x10);
  uVar6 = *(undefined4 *)((int)pvVar2 + (uint)uVar1 * 0x10 + -8);
  uVar7 = *(undefined4 *)((int)pvVar2 + (uint)uVar1 * 0x10 + -4);
  *(int *)(puVar4 + 8) = (int)uVar3;
  *(int *)((int)puVar4 + 0x44) = (int)((ulong)uVar3 >> 0x20);
  *(undefined4 *)(puVar4 + 9) = uVar6;
  *(undefined4 *)((int)puVar4 + 0x4c) = uVar7;
  *(undefined4 *)puVar4 = 0;
  *(undefined4 *)((int)puVar4 + 4) = 0;
  *(undefined4 *)(puVar4 + 1) = 0;
  *(undefined4 *)((int)puVar4 + 0xc) = 0;
  *puVar4 = *puVar4 & 0xffffffffffff8000 | 4;
  *puVar4 = *puVar4 | 0x8000;
  *puVar4 = *puVar4 & 0xfffffffffffffff | 0x1000000000000000;
  puVar4[1] = puVar4[1] & 0xfffffffffffffff0 | 0xe;
  puVar5 = puVar4 + 4;
  *puVar5 = *puVar5 & 0xffffffffffffc000 | (ulong)vramAddr & 0x3fff;
  if (-1 < format) {
    *puVar5 = *puVar5 & 0xfffffffffc0fffff | (long)(int)(format & 0x3f) << 0x14;
  }
  (*(code *)prc->__vtable[1].ModelMatrices)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].Scissor,puVar4,5);
  return;
}

void EPs2Texture::Test1(int i0, int i1, int i2, int i3) {
	sceGsTex1 *pTex1;
	sceGsTex1 *pTex1Uncached;
	
  ulong *puVar1;
  sceGsTex1__258_946 *pTex1;
  sceGsTex1__258_946 *pTex1Uncached;
  
  puVar1 = (ulong *)((int)this->m_pDlists[0] + 0x30);
  *puVar1 = *puVar1 & 0xfffff000ffffffff | (long)(int)((_k & 0xffU) << 4) << 0x20;
  *(ulong *)((uint)puVar1 | 0x20000000) =
       *(ulong *)((uint)puVar1 | 0x20000000) & 0xfffff000ffffffff |
       (long)(int)((_k & 0xffU) << 4) << 0x20;
  return;
}

void EPs2Texture::AddParentShader(EPs2Shader *pShader, int renderPass) {
  AddTail__t9TNodeList1ZP10EPs2ShaderP10EPs2Shader(this->m_parentShaders + renderPass,pShader);
  return;
}

void EPs2Texture::RemoveParentShader(EPs2Shader *pShader, int renderPass) {
	NLIterator i;
	
  undefined1 *i_00;
  undefined1 *i;
  
  i_00 = Search__Ct9TNodeList1ZP10EPs2ShaderP10EPs2Shader
                   (this->m_parentShaders + renderPass,pShader);
  Remove__t9TNodeList1ZP10EPs2ShaderP17NLIteratorPtrType(this->m_parentShaders + renderPass,i_00);
  return;
}

void EPs2Texture::UpdatePatch(sceGsTex0 *pTex0) {
	sceGsTex0 *pCached;
	sceGsTex0 *pUncached;
	
  sceGsTex0__208_2889 *psVar1;
  sceGsTex0__258_939 *pCached;
  sceGsTex0__258_939 *pUncached;
  
  psVar1 = (sceGsTex0__208_2889 *)((uint)&this->m_txtPatch | 0x20000000);
  *psVar1 = *(sceGsTex0__208_2889 *)pTex0;
  (this->m_txtPatch).tex0 = *psVar1;
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___6EMutex(&_11EPs2Texture_m_lockMutex,2);
    }
    else {
      __6EMutex(&_11EPs2Texture_m_lockMutex);
    }
  }
  return;
}

void __builtin_vec_delete(void *pAddress) {
  _memmanFree__FPv(pAddress);
  return;
}

NLIterator ENodeList::Next(NLIterator i) {
  ENodeListNode **ppEVar1;
  
  ppEVar1 = Next__t11TLinkedList3Z13ENodeListNodeUi4Ui8Pv(i);
  return (undefined1 *)*ppEVar1;
}

NLIterator ENodeList::Head() {
  ENodeListNode *pEVar1;
  
  pEVar1 = Head__Ct11TLinkedList3Z13ENodeListNodeUi4Ui8(&this->m_l);
  return (undefined1 *)pEVar1;
}

void TNodeList<EPs2Shader *>::~TNodeList(int __in_chrg) {
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2texture.cpp */
  ___9ENodeList(&this->field0_0x0,__in_chrg);
  return;
}

void EPs2Texture::Invalidate() {
  this->m_needsLoading = 1;
  return;
}

void* EPs2Texture::operator new() {
  void *pvVar1;
  
  pvVar1 = _allocBucketAlloc__FUiUi(0x2c0,0xf);
  return pvVar1;
}

void EPs2Texture::operator delete(void *p) {
  _allocBucketFree__FPvUiUi(p,0x2c0,0xf);
  return;
}

void EPs2Texture::AcquireLockMutex() {
  Acquire__6EMutexUi(&_11EPs2Texture_m_lockMutex,0xffffffff);
  return;
}

void EPs2Texture::ReleaseLockMutex() {
  Release__6EMutex(&_11EPs2Texture_m_lockMutex);
  return;
}

EVramAllocParams* EVramAllocParams::EVramAllocParams() {
  this->size = 0;
  this->pfnCallback = (undefined1 *)0x0;
  this->callbackParam = 0;
  *(undefined4 *)&this->block = 0;
  return this;
}

TNodeList<EPs2Shader *>* TNodeList<EPs2Shader *>::TNodeList() {
  __9ENodeList(&this->field0_0x0);
  return this;
}

EPs2Shader* TNodeList<EPs2Shader *>::GetData(NLIterator i) {
  EPs2Shader *pEVar1;
  
  pEVar1 = (EPs2Shader *)GetData__9ENodeListP17NLIteratorPtrType(i);
  return pEVar1;
}

NLIterator TNodeList<EPs2Shader *>::AddTail(EPs2Shader *data) {
  undefined1 *puVar1;
  
  puVar1 = AddTail__9ENodeListUi(&this->field0_0x0,(uint)data);
  return puVar1;
}

NLIterator TNodeList<EPs2Shader *>::Search(EPs2Shader *data) {
  undefined1 *puVar1;
  
  puVar1 = Search__C9ENodeListUi(&this->field0_0x0,(uint)data);
  return puVar1;
}

void TNodeList<EPs2Shader *>::Remove(NLIterator i) {
  Remove__9ENodeListP17NLIteratorPtrType(&this->field0_0x0,i);
  return;
}

ENodeList* ENodeList::ENodeList() {
  __t11TLinkedList3Z13ENodeListNodeUi4Ui8(&this->m_l);
  return this;
}

void ENodeList::~ENodeList(int __in_chrg) {
  RemoveAll__9ENodeList(this);
  if ((__in_chrg & 1U) != 0) {
    __builtin_delete(this);
  }
  return;
}

ENodeListNode*& TLinkedList<ENodeListNode, 4, 8>::Next(void *pNode) {
  return (ENodeListNode **)((int)pNode + 8);
}

NLData ENodeList::GetData(NLIterator i) {
  return *(uint *)i;
}

ENodeListNode* TLinkedList<ENodeListNode, 4, 8>::Head() {
  return this->m_pHead;
}

void __builtin_delete(void *pAddress) {
  _memmanFree__FPv(pAddress);
  return;
}

TLinkedList<ENodeListNode,4,8>* TLinkedList<ENodeListNode, 4, 8>::TLinkedList() {
  Init__t11TLinkedList3Z13ENodeListNodeUi4Ui8(this);
  return this;
}

void TLinkedList<ENodeListNode, 4, 8>::Init() {
  RemoveAll__t11TLinkedList3Z13ENodeListNodeUi4Ui8(this);
  return;
}

void TLinkedList<ENodeListNode, 4, 8>::RemoveAll() {
  this->m_pTail = (ENodeListNode *)0x0;
  this->m_pHead = (ENodeListNode *)0x0;
  return;
}

void global constructors keyed to EPs2Texture::m_pGrayPalEntry4bit() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to EPs2Texture::m_pGrayPalEntry4bit() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}
