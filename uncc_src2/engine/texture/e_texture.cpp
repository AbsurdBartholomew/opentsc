// STATUS: NOT STARTED

#include "e_texture.h"

__vtbl_ptr_type ETexture virtual table[14] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ETexture::~ETexture,
		/* .__delta2 = */ 3120
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ETexture::Lock,
		/* .__delta2 = */ 3320
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ETexture::Unlock,
		/* .__delta2 = */ 3328
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ETexture::Invalidate,
		/* .__delta2 = */ 3336
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ETexture::UpdateMipLevel,
		/* .__delta2 = */ 3344
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ETexture::UpdatePalette,
		/* .__delta2 = */ 3352
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ETexture::Create,
		/* .__delta2 = */ 3184
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ETexture::Test1,
		/* .__delta2 = */ 3360
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
		/* .__pfn = */ &ETexture::Select,
		/* .__delta2 = */ 3392
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ETexture* ETexture::ETexture() {
	ETextureDef *this;
	
                    /* inlined from c:/eor/src2/engine/texture/e_texturedef.h */
                    /* end of inlined section */
  this->__vtable = (ETexture__vtable *)_vt_8ETexture;
                    /* inlined from c:/eor/src2/engine/texture/e_texturedef.h */
  (this->m_textureDef).xsize = 0x40;
  (this->m_textureDef).imageFormat = '\x01';
  (this->m_textureDef).bitsPerImagePixel = ' ';
                    /* end of inlined section */
  this->m_validsig = 0x900dbeef;
                    /* inlined from c:/eor/src2/engine/texture/e_texturedef.h */
  (this->m_textureDef).pfnAllocAlign = (undefined1 *)0x0;
  (this->m_textureDef).pfnFree = (undefined1 *)0x0;
  (this->m_textureDef).flags = 0;
  (this->m_textureDef).ysize = 0x40;
  (this->m_textureDef).paletteFormat = '\0';
  (this->m_textureDef).bitsPerPaletteEntry = '\0';
  (this->m_textureDef).paletteSize = 0;
  (this->m_textureDef).mipMapLevels = 0;
  (this->m_textureDef).mipMapShift = 0.0;
  return this;
}

void ETexture::~ETexture(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (ETexture__vtable *)_vt_8ETexture;
  this->m_validsig = 0xdeadbeef;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

bool ETexture::Create(ETextureDef &td) {
  undefined *puVar1;
  uint *puVar2;
  short *psVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  ulong *puVar7;
  ulong in_v1;
  ulong uVar8;
  ulong in_a2;
  ulong uVar9;
  ulong in_a3;
  ulong uVar10;
  
  puVar1 = (undefined *)((int)&td->pfnFree + 3);
  uVar4 = (uint)puVar1 & 7;
  uVar5 = (uint)td & 7;
  uVar8 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
          in_v1 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
          *(ulong *)((int)td - uVar5) >> uVar5 * 8;
  puVar1 = (undefined *)((int)&td->mipMapShift + 3);
  uVar4 = (uint)puVar1 & 7;
  uVar5 = (uint)&td->flags & 7;
  uVar9 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
          in_a2 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
          *(ulong *)((int)&td->flags - uVar5) >> uVar5 * 8;
  puVar1 = (undefined *)((int)&td->mipMapLevels + 1);
  uVar4 = (uint)puVar1 & 7;
  uVar5 = (uint)&td->xsize & 7;
  uVar10 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
           in_a3 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
           *(ulong *)((int)&td->xsize - uVar5) >> uVar5 * 8;
  uVar6 = *(undefined4 *)&td->imageFormat;
  puVar1 = (undefined *)((int)&(this->m_textureDef).pfnFree + 3);
  uVar4 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar4);
  *puVar7 = *puVar7 & -1L << (uVar4 + 1) * 8 | uVar8 >> (7 - uVar4) * 8;
  uVar4 = (uint)this & 7;
  *(ulong *)((int)this - uVar4) =
       uVar8 << uVar4 * 8 | *(ulong *)((int)this - uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  puVar1 = (undefined *)((int)&(this->m_textureDef).mipMapShift + 3);
  uVar4 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar4);
  *puVar7 = *puVar7 & -1L << (uVar4 + 1) * 8 | uVar9 >> (7 - uVar4) * 8;
  puVar2 = &(this->m_textureDef).flags;
  uVar4 = (uint)puVar2 & 7;
  puVar7 = (ulong *)((int)puVar2 - uVar4);
  *puVar7 = uVar9 << uVar4 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  puVar1 = (undefined *)((int)&(this->m_textureDef).mipMapLevels + 1);
  uVar4 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar4);
  *puVar7 = *puVar7 & -1L << (uVar4 + 1) * 8 | uVar10 >> (7 - uVar4) * 8;
  psVar3 = &(this->m_textureDef).xsize;
  uVar4 = (uint)psVar3 & 7;
  puVar7 = (ulong *)((int)psVar3 - uVar4);
  *puVar7 = uVar10 << uVar4 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  *(undefined4 *)&(this->m_textureDef).imageFormat = uVar6;
  return true;
}

void ETexture::Validate() {
  return;
}

u32 ETexture::GetImageFormat() {
  return (uint)(this->m_textureDef).imageFormat;
}

u32 ETexture::GetBitsPerImagePixel() {
  return (uint)(this->m_textureDef).bitsPerImagePixel;
}

u32 ETexture::GetXSize() {
  return (uint)(ushort)(this->m_textureDef).xsize;
}

u32 ETexture::GetYSize() {
  return (uint)(ushort)(this->m_textureDef).ysize;
}

u32 ETexture::GetPaletteFormat() {
  return (uint)(this->m_textureDef).paletteFormat;
}

u32 ETexture::GetBitsPerPaletteEntry() {
  return (uint)(this->m_textureDef).bitsPerPaletteEntry;
}

u32 ETexture::GetPaletteSize() {
  return (uint)(ushort)(this->m_textureDef).paletteSize;
}

u32 ETexture::GetFlags() {
  return (this->m_textureDef).flags;
}

bool ETexture::Lock() {
  return true;
}

void ETexture::Unlock() {
  return;
}

void ETexture::Invalidate() {
  return;
}

void* ETexture::UpdateMipLevel(int mipLevel, int &pitchX, int &pitchY) {
  return (void *)0x0;
}

void* ETexture::UpdatePalette() {
  return (void *)0x0;
}

void ETexture::Test1(int i0, int i1, int i2, int i3) {
  printf("base test\n");
  return;
}

void ETexture::Select(int renderPass) {
  return;
}
