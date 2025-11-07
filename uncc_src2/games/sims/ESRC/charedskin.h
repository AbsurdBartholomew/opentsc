// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_CHAREDSKIN_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_CHAREDSKIN_H

struct ECharedSkin {
protected:
	ERRleTexture *m_pSkinShdr;
	ERRleTexture *m_pShirtOneShdr;
	ERRleTexture *m_pShirtTwoShdr;
	ERRleTexture *m_pPantsOneShdr;
	ERRleTexture *m_pPantsTwoShdr;
	ERRleTexture *m_pShoeShdr;
	ERRleTexture *m_pFaceShdr;
	ERRleTexture *m_pEyeShdr;
	ERRleTexture *m_pEyeWhiteShdr;
	ERRleTexture *m_pFacialHairShdr;
	ERRleTexture *m_pHairHatShdr;
	ERRleTexture *m_pHairHatTwoShdr;
	ERRleTexture *m_pLipstickShdr;
	ERRleTexture *m_pEyeshadowShdr;
	EShader *m_pCustomShdr;
	ETexture *m_pCustomTexture;
	EVec3 m_vEye;
	EVec3 m_vCameraTarget;
	unsigned int m_nOriginalPalette[13][256];
	signed char m_nColorOffset[13];
	signed char m_nOldHueOffset[13];
	static EHeap m_MyHeap;
	
public:
	ECharedSkin& operator=();
	ECharedSkin();
	ECharedSkin();
	ECharedSkin(ECharedSkin*, int, void);
	void Update();
	void Init();
	void Cleanup();
	void ResetColors();
	void SetShader(u8 nLayer, u32 nShaderID);
	void NextColor(u8 nBodyPart);
	void PreviousColor(u8 nBodyPart);
	ETexture* GetTexture();
	void StoreColorOffsets();
	void RestoreColorOffsets();
	void ApplyColorOffsets(bool bIsAdult, bool bIsMale);
	void GetColorOffsets(CustomCharacter *pCharacter);
	void SetColorOffsets(CustomCharacter *pCharacter);
	void GetSkin(ETexture *pPalTexture);
	EShader* GetShader();
protected:
	void StorePalette(ERRleTexture *pShdr, int nPaletteIndex);
	void RestorePalette(ERRleTexture *pShdr, int nPaletteIndex);
	u32 HSLtoRGB(EVec3 vHSL);
	void RGBtoHSL(u32 rgb, EVec3 *vHSL);
	static void* DefaultAlloc(/* parameters unknown */);
	static void DefaultFree(/* parameters unknown */);
	u32 DeterminePixelColor(u32 nOriginalColor, u32 nNewColor, u8 *pOutputRGB);
	void SmurfClothes(ERRleTexture *pTempTexture, int nPaletteIndex);
	void SmurfHair(ERRleTexture *pTempTexture, int nPaletteIndex);
};

extern EHeap ECharedSkin::m_MyHeap;
extern float _huecheat;
extern float _satcheat;
extern float _lumcheat;

void global constructors keyed to ECharedSkin::m_MyHeap();

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_CHAREDSKIN_H
