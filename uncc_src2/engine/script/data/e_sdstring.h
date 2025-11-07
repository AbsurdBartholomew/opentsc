// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_SCRIPT_DATA_E_SDSTRING_H
#define C__EOR_SRC2_ENGINE_SCRIPT_DATA_E_SDSTRING_H

struct ESDString : EScriptData {
	static ETypeInfo m_typeInfo;
	EString m_s;
	
	ESDString& operator=();
	ESDString();
	static ESDString* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	ESDString* CreateCopy();
	static void* operator new(/* parameters unknown */);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	ESDString();
	/* vtable[6] */ virtual ESDString(ESDString*, int, void);
	static EString& GetParam(/* parameters unknown */);
	static EString& GetReturn(/* parameters unknown */);
	/* vtable[9] */ virtual char* GetName();
	/* vtable[10] */ virtual char GetTypeChar();
	/* vtable[11] */ virtual void Print();
	/* vtable[12] */ virtual bool Test();
	/* vtable[7] */ virtual void Read(EStream &s);
	/* vtable[8] */ virtual void Write(EStream &s);
};

extern ETypeInfo *gpTypeInfo_ESDString;
extern __vtbl_ptr_type ESDString virtual table[14];
extern ETypeInfo ESDString::m_typeInfo;

EStream& operator<<(EStream &s, ESDString *pD);
EStream& operator>>(EStream &s, ESDString *&pD);
void ESDString::~ESDString(int __in_chrg);
void global constructors keyed to gpTypeInfo_ESDString();

#endif // C__EOR_SRC2_ENGINE_SCRIPT_DATA_E_SDSTRING_H
