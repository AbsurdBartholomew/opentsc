// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_RESOURCE_E_RESOURCE_H
#define C__EOR_SRC2_ENGINE_RESOURCE_E_RESOURCE_H

struct EResource : EStorable {
	static ETypeInfo m_typeInfo;
	EString m_name;
protected:
	EResourceManager *m_pManager;
	u32 m_resId;
	s32 m_nRefs;
	
public:
	EResource& operator=();
	EResource();
	static EResource* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	EResource* CreateCopy();
	EResource();
	/* vtable[6] */ virtual EResource(EResource*, int, void);
	/* vtable[7] */ virtual void Read(EStream &s);
	/* vtable[8] */ virtual void Write(EStream &s);
	void DelRef();
	void AddRef();
	u32 GetResId();
	/* vtable[9] */ virtual void Init();
	/* vtable[10] */ virtual void Reload(EStream &s);
	/* vtable[11] */ virtual void Reload();
};

extern ETypeInfo *gpTypeInfo_EResource;
extern __vtbl_ptr_type EResource virtual table[13];
extern __vtbl_ptr_type EStorable virtual table[10];
extern ETypeInfo EResource::m_typeInfo;

EStream& operator<<(EStream &s, EResource *pD);
EStream& operator>>(EStream &s, EResource *&pD);
void EResource::~EResource(int __in_chrg);
void EStorable::~EStorable(int __in_chrg);
void global constructors keyed to gpTypeInfo_EResource();

#endif // C__EOR_SRC2_ENGINE_RESOURCE_E_RESOURCE_H
