/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#pragma once

#include "engine/resource/e_resource.h"
#include "common/storage/e_typeinfo.h"
#include "common/storage/e_filestream.h"

class ERRleTexture : public EResource {
	static ETypeInfo m_typeInfo;
protected:
	u8 *m_nImageBuf;
	u32 *m_nPalette;
	u8 m_nMode;
	u8 m_nRunCount;
	u8 m_nRunLength;
	u32 m_nRunValue;
	u32 m_nImageBufIndex;
	u32 m_nNumCompressedBytes;
	bool m_bFrontHalf;
	bool m_bFourBitImage;
	
public:
	ERRleTexture();
    virtual ~ERRleTexture();
    
	static ERRleTexture* New();
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion();
	static ETypeInfo* RegisterType(u16 version);
	ERRleTexture* CreateCopy();
	void Load(EStream &s);
	void RestartDecompression();
	u32 GetNextPixel();
	u32* GetPalette();
	u32 GetPaletteSize();
protected:
	u8 GetFourBitNum();
	u8 GetEightBitNum();
	u32 GetNextFourBitPixel();
	u32 GetNextEightBitPixel();
};