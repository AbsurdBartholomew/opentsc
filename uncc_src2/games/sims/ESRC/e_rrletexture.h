// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_E_RRLETEXTURE_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_E_RRLETEXTURE_H

struct ERRleTexture : EResource {
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
	ERRleTexture& operator=();
	ERRleTexture();
	static ERRleTexture* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	ERRleTexture* CreateCopy();
	ERRleTexture();
	/* vtable[6] */ virtual ERRleTexture(ERRleTexture*, int, void);
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

extern ETypeInfo *gpTypeInfo_ERRleTexture;
extern __vtbl_ptr_type ERRleTexture virtual table[13];
extern ETypeInfo ERRleTexture::m_typeInfo;

EStream& operator<<(EStream &s, ERRleTexture *pD);
EStream& operator>>(EStream &s, ERRleTexture *&pD);
void ERRleTexture::~ERRleTexture(int __in_chrg);
void global constructors keyed to gpTypeInfo_ERRleTexture();

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_E_RRLETEXTURE_H
