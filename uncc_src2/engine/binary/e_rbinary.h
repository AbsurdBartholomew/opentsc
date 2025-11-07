// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_BINARY_E_RBINARY_H
#define C__EOR_SRC2_ENGINE_BINARY_E_RBINARY_H

struct ERBinary : EResource {
	static ETypeInfo m_typeInfo;
protected:
	void *m_pData;
	u32 m_size;
	
public:
	ERBinary& operator=();
	ERBinary();
	static ERBinary* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	ERBinary* CreateCopy();
	ERBinary();
	/* vtable[6] */ virtual ERBinary(ERBinary*, int, void);
	void* GetData();
	u32 GetSize();
	void Load(EFile *pFile, u32 uLength);
	/* vtable[7] */ virtual void Read(EStream &s);
	/* vtable[8] */ virtual void Write(EStream &s);
protected:
	void Deallocate();
};

extern ETypeInfo *gpTypeInfo_ERBinary;
extern __vtbl_ptr_type ERBinary virtual table[13];
extern ETypeInfo ERBinary::m_typeInfo;

EStream& operator<<(EStream &s, ERBinary *pD);
EStream& operator>>(EStream &s, ERBinary *&pD);
void ERBinary::~ERBinary(int __in_chrg);
void global constructors keyed to gpTypeInfo_ERBinary();

#endif // C__EOR_SRC2_ENGINE_BINARY_E_RBINARY_H
