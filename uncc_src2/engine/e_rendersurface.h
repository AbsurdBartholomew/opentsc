// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_E_RENDERSURFACE_H
#define C__EOR_SRC2_ENGINE_E_RENDERSURFACE_H

struct ERenderSurface {
protected:
	int m_xsize;
	int m_ysize;
	u32 m_flags;
	int m_format;
public:
	__vtbl_ptr_type *$vf2121;
	
	ERenderSurface& operator=();
	ERenderSurface();
protected:
	ERenderSurface();
	/* vtable[1] */ virtual ERenderSurface(ERenderSurface*, int, void);
public:
	/* vtable[2] */ virtual bool Create();
	/* vtable[3] */ virtual void GetOutputRect(EFloatRect &rect);
	/* vtable[4] */ virtual void SetBackgroundColor();
	/* vtable[5] */ virtual void SetFlags(u32 flags);
	/* vtable[6] */ virtual u32 GetFlags();
	/* vtable[7] */ virtual void GetImageData();
	/* vtable[8] */ virtual bool CopyToTexture();
	/* vtable[9] */ virtual ETexture* GetTexture();
protected:
	/* vtable[10] */ virtual void Select();
	bool SetSize(int xsize, int ysize, int format);
};

extern __vtbl_ptr_type ERenderSurface virtual table[12];

void ERenderSurface::~ERenderSurface(int __in_chrg);

#endif // C__EOR_SRC2_ENGINE_E_RENDERSURFACE_H
