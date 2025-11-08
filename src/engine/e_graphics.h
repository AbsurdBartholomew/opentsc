/******************
 * OpenTSC Header *
 * Replace me     *
******************/
#pragma once

#include "engine/e_rc.h"
#include "common/types.h"
#include "common/math/e_vec3.h"
#include "common/math/e_mat4.h"
#include "engine/e_dl.h"

struct ETextureDef {
	//FnAllocAlign pfnAllocAlign;
	//FnFree pfnFree;
	u32 flags;
	float mipMapShift;
	u16 xsize;
	u16 ysize;
	u16 paletteSize;
	u16 mipMapLevels;
	u8 imageFormat;
	u8 paletteFormat;
	u8 bitsPerImagePixel;
	u8 bitsPerPaletteEntry;
};

enum RCMode {
	RC_IMMEDIATE = 0,
	RC_RETAINED = 1
};

enum ECoordinateSystem {
	E_COORDSYS_XRIGHT_YFORWARD_ZUP = 0,
	E_COORDSYS_XRIGHT_YUP_ZBACK = 1
};

class EGraphics // : EGlobalManagerClient
{
protected:
	bool m_insideBeginEnd;
	bool m_initialized;
	bool m_frameBufferClear;
	bool m_displayTiming;
	int m_xscreen;
	int m_yscreen;
	int m_xoffset;
	int m_yoffset;
	int m_frameBufferFormat;
	int m_zBufferFormat;
	int m_nRenderSurfaces;
	int m_nTextures;
	int m_nShaders;
	int m_nRenderContexts;
	EMat4 m_mNormalMap;
	EVec3 m_backgroundColor;
	//EMutex m_allocMutex;
	EDL *m_pDeselectTextureDL;
	//ERFont *m_pFont;
	ECoordinateSystem m_coordSys;
	ERC *m_pRCImmediate;
	EVec2 m_vLTInd;
};