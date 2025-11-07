// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_SHADER_E_RSHADER_H
#define C__EOR_SRC2_ENGINE_SHADER_E_RSHADER_H

struct TNodeList<ERTexture *> : ENodeList {
	TNodeList(TNodeList<ERTexture *>*, int, void);
	TNodeList();
	TNodeList();
	static ERTexture* GetData(/* parameters unknown */);
	NLIterator AddHead();
	NLIterator AddTail();
	void AddHead();
	void AddTail();
	NLIterator InsertBefore();
	NLIterator InsertAfter();
	void Remove();
	NLIterator Search();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	TNodeList<ERTexture *>& operator=();
	void MoveContents();
};

struct ERShader : EResource {
	static ETypeInfo m_typeInfo;
	EShader *m_pShader;
	TNodeList<ERTexture *> m_rtextureList;
	
	ERShader& operator=();
	ERShader();
	static ERShader* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	ERShader* CreateCopy();
	static void* operator new(/* parameters unknown */);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	ERShader();
	/* vtable[6] */ virtual ERShader(ERShader*, int, void);
	void Load(EStream &s);
	int GetGeometryPassCount();
	void Select(ERC *prc, int geometryPass);
	void SelectForShadowMask(ERC *prc);
	void Attach(EShader *pShader, TNodeList<ERTexture *> *pRTextureList);
	EShader* GetShader();
	/* vtable[10] */ virtual void Reload(EStream &s);
protected:
	void Deallocate();
	void DoLoad(EStream &s, EShaderDef &sd);
};

extern ETypeInfo *gpTypeInfo_ERShader;
extern __vtbl_ptr_type ERShader virtual table[13];
extern ETypeInfo ERShader::m_typeInfo;

EStream& operator<<(EStream &s, ERShader *pD);
EStream& operator>>(EStream &s, ERShader *&pD);
void ERShader::~ERShader(int __in_chrg);
void global constructors keyed to gpTypeInfo_ERShader();

#endif // C__EOR_SRC2_ENGINE_SHADER_E_RSHADER_H
