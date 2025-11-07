// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_PS2_E_PS2GRAPHICS_H
#define C__EOR_SRC2_ENGINE_PS2_E_PS2GRAPHICS_H

typedef struct {
	sceGsFrame frame2;
	u_long frame2addr;
	sceGsZbuf zbuf2;
	long int zbuf2addr;
	sceGsXyoffset xyoffset2;
	long int xyoffset2addr;
	sceGsScissor scissor2;
	long int scissor2addr;
	sceGsPrmodecont prmodecont;
	long int prmodecontaddr;
	sceGsColclamp colclamp;
	long int colclampaddr;
	sceGsDthe dthe;
	long int dtheaddr;
	sceGsTest test2;
	long int test2addr;
} sceGsDrawEnv2;

struct EDisplayDL {
	sceGifTag giftag;
	sceGsDrawEnv1 draw1;
	sceGsDrawEnv2 draw2;
	u64 signal;
	u64 sigAddr;
};

struct EClearDL {
	sceGifTag giftag;
	sceGsClear clear;
	u64 dither;
	u64 ditherAddr;
	u64 ditherMatrix;
	u64 ditherMatrixAddr;
	u64 signal;
	u64 sigAddr;
};

struct EPs2Graphics : EGraphics {
	EMotionBlur m_motionBlur;
protected:
	EDisplayDL m_displayDL[2];
	EDisplayDL m_ZBasFBDL;
	EDisplayDL *m_pLastDisplayDL;
	EClearDL m_clearDL;
	EVramManager m_vram;
	EVramEntry *m_pVramFrameBuffers;
	fsAABuff *m_pFFBuf;
	void *m_pLastZbuffer;
	int m_lastZbufFormat;
	gsDrawDecalSprite *m_pCopySprite;
	bool m_hires;
	bool m_motionBlurEnabled;
	bool m_viewingVramEnabled;
	long long unsigned int m_gsIntDl[2];
	float m_horizontalBlur;
	EInterruptHandler m_gsInterruptHandler;
	EEvent m_gsEvent;
	EMutex m_gsMutex;
	u32 m_xOffsetBase;
	u32 m_yOffsetBase;
	u32 m_xOffsetMult;
	
public:
	EPs2Graphics& operator=();
	EPs2Graphics();
	EPs2Graphics();
	/* vtable[1] */ virtual EPs2Graphics(EPs2Graphics*, int, void);
	/* vtable[4] */ virtual bool Init();
	/* vtable[9] */ virtual void SetVideoMode(int xsize, int ysize, int frameBufferFormat, int zBufferFormat);
	/* vtable[10] */ virtual void GetOutputRect(EFloatRect &rcOut);
	/* vtable[11] */ virtual void GetScissorRect(EFloatRect *prScissor, EFloatRect &rClipOut, EFloatRect &rOut);
	/* vtable[8] */ virtual void SetBackgroundColor(EVec3 &color, bool clear);
	void SendGSDisplayList(void *pDList, int size, int chain);
	/* vtable[24] */ virtual float GetFarZVal();
	/* vtable[25] */ virtual float GetNearZVal();
	/* vtable[26] */ virtual float GetScreenAspect();
	/* vtable[21] */ virtual int GetLargestAvailableTextureMemoryBlock();
	/* vtable[23] */ virtual void Destroy(EShader *pShader);
	/* vtable[30] */ virtual void DiscardAllVram();
	EVramEntry* AllocateAndLockVram(EVramAllocParams &param);
	void DeallocateVram(EVramEntry *pEntry, bool useMutex);
	void LockVram(EVramEntry *pEntry, bool useMutex);
	void UnlockVram(EVramEntry *pEntry);
	void AcquireVramMutex();
	void ReleaseVramMutex();
	void EnableMotionBlur(bool enable);
	void WaitGS();
	void WaitVU1();
	void DeviceToPixelCoordinates(EVec2 &vDeviceCoord, EFloatRect &rDeviceRect, EVec2 &vPixelOut);
	void AcquireGSMutex();
	void ReleaseGSMutex();
	/* vtable[29] */ virtual void GetScreenShot(char *szHostFileName);
protected:
	/* vtable[31] */ virtual void DoSwapBuffer(int nFrame);
	/* vtable[32] */ virtual void DoSetupFrameBuffer(int nFrame);
	/* vtable[33] */ virtual void SelectFrameBuffer(int which);
	u32 GetFrameBufferPointer();
	/* vtable[36] */ virtual ERC* AllocRC();
	/* vtable[37] */ virtual void FreeRC(ERC *pRC);
	/* vtable[38] */ virtual ETexture* AllocTexture();
	/* vtable[39] */ virtual void FreeTexture(ETexture *pTexture);
	/* vtable[40] */ virtual EShader* AllocShader();
	/* vtable[41] */ virtual void FreeShader(EShader *pShader);
	/* vtable[42] */ virtual ERenderSurface* AllocRenderSurface();
	/* vtable[43] */ virtual void FreeRenderSurface(ERenderSurface *pSurf);
	/* vtable[44] */ virtual EMovie* AllocMovie();
	/* vtable[45] */ virtual void FreeMovie(EMovie *pMovie);
	void WriteScreenOffset();
	void Ps2InitVideo(bool fullReset);
	void GetPs2FBufferFormat(int rsFormat, int &ps2Format, int &bytesPerPixel);
	void GetPs2ZBufferFormat(int zbFormat, int &ps2Format, int &bytesPerPixel);
	void FixGSDisplayListAddress(void *&pDList);
	void SendInitialDisplayList();
	void ClearVRAM(u32 rgba);
	void LastDisplayDL(EDisplayDL *pDL);
	void StoreTextureVIF1(u_long128 *base_addr, short int start_addr, short int pixel_mode, short int x, short int y, short int width, short int height);
};

extern EPs2Graphics _ps2gfx;
extern EGraphics *_pGfx;
extern int _ps2FrameBuffer;
extern __vtbl_ptr_type EPs2Graphics virtual table[48];

void EPs2Graphics::~EPs2Graphics(int __in_chrg);
void global constructors keyed to _ps2gfx();
void global destructors keyed to _ps2gfx();

#endif // C__EOR_SRC2_ENGINE_PS2_E_PS2GRAPHICS_H
