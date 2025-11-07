// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_PS2_E_PS2RENDERSURFACE_H
#define C__EOR_SRC2_ENGINE_PS2_E_PS2RENDERSURFACE_H

typedef struct {
	sceGsDispEnv disp[2];
	sceGifTag giftag0;
	sceGsDrawEnv1 draw01;
	sceGsDrawEnv2 draw02;
	sceGsClear clear0;
	sceGifTag giftag1;
	sceGsDrawEnv1 draw11;
	sceGsDrawEnv2 draw12;
	sceGsClear clear1;
} sceGsDBuffDc;

struct EPs2RenderSurface : ERenderSurface {
protected:
	EVramEntry *m_pFbufVramEntry;
	EVramEntry *m_pZbufVramEntry;
	EPs2Texture *m_pTexture;
	unsigned char m_clearColor[4];
	int m_hwFbufFormat;
	int m_hwZbufFormat;
	sceGsDBuffDc m_dl;
	int m_nqw;
	
public:
	EPs2RenderSurface& operator=();
	EPs2RenderSurface();
protected:
	EPs2RenderSurface();
	/* vtable[1] */ virtual EPs2RenderSurface(EPs2RenderSurface*, int, void);
public:
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	/* vtable[2] */ virtual bool Create(ERenderSurfaceDef &rsd);
	/* vtable[3] */ virtual void GetOutputRect(EFloatRect &rect);
	/* vtable[4] */ virtual void SetBackgroundColor(EVec3 &color);
	/* vtable[5] */ virtual void SetFlags(u32 flags);
	/* vtable[9] */ virtual ETexture* GetTexture();
	/* vtable[7] */ virtual void GetImageData(void *pImageBuffer);
	/* vtable[8] */ virtual bool CopyToTexture(ETexture *destTexture);
protected:
	/* vtable[10] */ virtual void Select();
	void SetupVRAM();
	void BuildDlist();
	bool SetSize(int xsize, int ysize, int format);
	void Deallocate();
	void FreeVram();
};

extern __vtbl_ptr_type EPs2RenderSurface virtual table[12];

void EPs2RenderSurface::~EPs2RenderSurface(int __in_chrg);

#endif // C__EOR_SRC2_ENGINE_PS2_E_PS2RENDERSURFACE_H
