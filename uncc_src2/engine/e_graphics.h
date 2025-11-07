// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_E_GRAPHICS_H
#define C__EOR_SRC2_ENGINE_E_GRAPHICS_H

struct ETextureDef {
	FnAllocAlign pfnAllocAlign;
	FnFree pfnFree;
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

struct EViewport {
	EVec4 vScale;
	EVec4 vOffset;
};

enum RCMode {
	RC_IMMEDIATE = 0,
	RC_RETAINED = 1
};

enum ECoordinateSystem {
	E_COORDSYS_XRIGHT_YFORWARD_ZUP = 0,
	E_COORDSYS_XRIGHT_YUP_ZBACK = 1
};

struct EGraphics : EGlobalManagerClient {
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
	EMutex m_allocMutex;
	EDL *m_pDeselectTextureDL;
	ERFont *m_pFont;
	ECoordinateSystem m_coordSys;
	ERC *m_pRCImmediate;
	EVec2 m_vLTInd;
	
public:
	EGraphics& operator=();
	EGraphics();
	EGraphics();
	/* vtable[1] */ virtual EGraphics(EGraphics*, int, void);
	/* vtable[4] */ virtual bool Init();
	/* vtable[5] */ virtual void BeginFrame();
	/* vtable[6] */ virtual void EndFrame();
	/* vtable[7] */ virtual void Flush();
	/* vtable[8] */ virtual void SetBackgroundColor(EVec3 &color, bool clear);
	/* vtable[9] */ virtual void SetVideoMode(int xsize, int ysize, int frameBufferFormat, int zBufferFormat);
	/* vtable[10] */ virtual void GetOutputRect(EFloatRect &rcOut);
	/* vtable[11] */ virtual void GetScissorRect(EFloatRect *prScissor, EFloatRect &rClipOut, EFloatRect &rOut);
	/* vtable[12] */ virtual ERC* Open(RCMode mode);
	/* vtable[13] */ virtual EDL* Close(ERC *pRC);
	void Execute(EDL *pDL, bool deallocate);
	/* vtable[14] */ virtual void Destroy(EMovie *pMovie);
	/* vtable[15] */ virtual ETexture* CreateTexture(ETextureDef &tsd);
	/* vtable[16] */ virtual void Destroy();
	/* vtable[17] */ virtual ERenderSurface* CreateRenderSurface(ERenderSurfaceDef &rsd);
	/* vtable[18] */ virtual void Destroy();
	/* vtable[19] */ virtual EMovie* CreateMovie();
	/* vtable[20] */ virtual void Destroy();
	/* vtable[21] */ virtual int GetLargestAvailableTextureMemoryBlock();
	/* vtable[22] */ virtual EShader* CreateShader(EShaderDef &sd);
	/* vtable[23] */ virtual void Destroy();
	/* vtable[24] */ virtual float GetFarZVal();
	/* vtable[25] */ virtual float GetNearZVal();
	ECoordinateSystem GetCoordinateSystem();
	void SetCoordinateSystem(ECoordinateSystem coordSys);
	void ComputeViewport(EViewport &vp, EFloatRect &rect);
	/* vtable[26] */ virtual float GetScreenAspect();
	int GetScreenXSize();
	int GetScreenYSize();
	void SetScreenXOffset(int xoffset);
	void SetScreenYOffset(int yoffset);
	int GetScreenXOffset();
	int GetScreenYOffset();
	/* vtable[27] */ virtual int GetMaxTextureXSize();
	/* vtable[28] */ virtual int GetMaxTextureYSize();
	EMat4* GetNormalMapMatrix();
	ERFont* GetSystemFont();
	void DisplayTiming(bool enable, EVec2 &vLTind);
	/* vtable[29] */ virtual void GetScreenShot();
	void DeselectTextures();
	/* vtable[30] */ virtual void DiscardAllVram();
protected:
	/* vtable[31] */ virtual void DoSwapBuffer(int nFrame);
	/* vtable[32] */ virtual void DoSetupFrameBuffer(int nFrame);
	/* vtable[2] */ virtual bool ManagedStartup();
	/* vtable[3] */ virtual void ManagedShutdown();
	/* vtable[33] */ virtual void SelectFrameBuffer(int which);
	EDL* AllocDisplayList();
	void DeallocateDL(EDL *pDL);
	/* vtable[34] */ virtual EDL* AllocDL();
	/* vtable[35] */ virtual void FreeDL(EDL *pDL);
	/* vtable[36] */ virtual ERC* AllocRC();
	/* vtable[37] */ virtual void FreeRC(ERC *pRC);
	/* vtable[38] */ virtual ETexture* AllocTexture();
	/* vtable[39] */ virtual void FreeTexture();
	/* vtable[40] */ virtual EShader* AllocShader();
	/* vtable[41] */ virtual void FreeShader();
	/* vtable[42] */ virtual ERenderSurface* AllocRenderSurface();
	/* vtable[43] */ virtual void FreeRenderSurface();
	/* vtable[44] */ virtual EMovie* AllocMovie();
	/* vtable[45] */ virtual void FreeMovie();
	/* vtable[46] */ virtual void SetUpNormalMapMatrix();
	void DrawTiming();
	void LoadSystemFont();
};

struct ERenderSurfaceDef {
	int xsize;
	int ysize;
	u32 flags;
	EVec3 bgColor;
	int format;
};

extern __vtbl_ptr_type EGraphics virtual table[48];
extern __vtbl_ptr_type EGlobalManagerClient virtual table[5];

void EGraphics::~EGraphics(int __in_chrg);
void EGlobalManagerClient::~EGlobalManagerClient(int __in_chrg);

#endif // C__EOR_SRC2_ENGINE_E_GRAPHICS_H
