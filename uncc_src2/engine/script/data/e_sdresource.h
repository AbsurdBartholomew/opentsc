// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_SCRIPT_DATA_E_SDRESOURCE_H
#define C__EOR_SRC2_ENGINE_SCRIPT_DATA_E_SDRESOURCE_H

struct ESDResource : EScriptData {
	static ETypeInfo m_typeInfo;
	u32 m_r;
	
	ESDResource& operator=();
	ESDResource();
	static ESDResource* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	ESDResource* CreateCopy();
	static void* operator new(/* parameters unknown */);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	ESDResource();
	/* vtable[6] */ virtual ESDResource(ESDResource*, int, void);
	static u32& GetParam(/* parameters unknown */);
	static u32& GetReturn(/* parameters unknown */);
	/* vtable[9] */ virtual char* GetName();
	/* vtable[10] */ virtual char GetTypeChar();
	/* vtable[11] */ virtual void Print();
	/* vtable[12] */ virtual bool Test();
	/* vtable[7] */ virtual void Read(EStream &s);
	/* vtable[8] */ virtual void Write(EStream &s);
};

extern ETypeInfo *gpTypeInfo_ESDResource;
extern __vtbl_ptr_type ESDResource virtual table[14];
extern ETypeInfo ESDResource::m_typeInfo;

EStream& operator<<(EStream &s, ESDResource *pD);
EStream& operator>>(EStream &s, ESDResource *&pD);
void ESDResource::~ESDResource(int __in_chrg);
void global constructors keyed to gpTypeInfo_ESDResource();

#endif // C__EOR_SRC2_ENGINE_SCRIPT_DATA_E_SDRESOURCE_H
