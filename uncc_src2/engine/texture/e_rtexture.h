// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_TEXTURE_E_RTEXTURE_H
#define C__EOR_SRC2_ENGINE_TEXTURE_E_RTEXTURE_H

struct ERTexture : EResource {
	static ETypeInfo m_typeInfo;
	ETexture *m_pTexture;
	
	ERTexture& operator=();
	ERTexture();
	static ERTexture* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	ERTexture* CreateCopy();
	static void* operator new(/* parameters unknown */);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	ERTexture();
	/* vtable[6] */ virtual ERTexture(ERTexture*, int, void);
	void Load(EStream &s);
	void Select(ERC *prc, int renderPass);
	void Attach(ETexture *pTexture);
	/* vtable[10] */ virtual void Reload(EStream &s);
protected:
	void Deallocate();
};

extern ETypeInfo *gpTypeInfo_ERTexture;
extern __vtbl_ptr_type ERTexture virtual table[13];
extern ETypeInfo ERTexture::m_typeInfo;

EStream& operator<<(EStream &s, ERTexture *pD);
EStream& operator>>(EStream &s, ERTexture *&pD);
void ERTexture::~ERTexture(int __in_chrg);
void global constructors keyed to gpTypeInfo_ERTexture();

#endif // C__EOR_SRC2_ENGINE_TEXTURE_E_RTEXTURE_H
