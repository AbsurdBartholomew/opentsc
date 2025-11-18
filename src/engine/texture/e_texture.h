/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#pragma once
#include "common/types.h"
#include "engine/e_graphics.h"

class ETexture {
protected:
	ETextureDef m_textureDef;
	u32 m_validsig;
public:	
	ETexture();

	u32 GetImageFormat();
	u32 GetBitsPerImagePixel();
	u32 GetXSize();
	u32 GetYSize();
	u32 GetPaletteFormat();
	u32 GetBitsPerPaletteEntry();
	u32 GetPaletteSize();
	u32 GetFlags();
	/* vtable[2] */ virtual bool Lock();
	/* vtable[3] */ virtual void Unlock();
	/* vtable[4] */ virtual void Invalidate();
	/* vtable[5] */ virtual bool UpdateBegin();
	/* vtable[6] */ virtual void* UpdateMipLevel(int mipLevel, int &pitchX, int &pitchY);
	/* vtable[7] */ virtual void* UpdatePalette();
	/* vtable[8] */ virtual void UpdateEnd();
	/* vtable[9] */ virtual bool Create(ETextureDef &td);
	/* vtable[10] */ virtual void Test1(int i0, int i1, int i2, int i3);
	/* vtable[11] */ virtual void Validate();
protected:
	/* vtable[12] */ virtual void Select(int renderPass);
};