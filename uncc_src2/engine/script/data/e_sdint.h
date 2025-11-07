// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_SCRIPT_DATA_E_SDINT_H
#define C__EOR_SRC2_ENGINE_SCRIPT_DATA_E_SDINT_H

struct ESDInt : EScriptData {
	static ETypeInfo m_typeInfo;
	int m_i;
	
	ESDInt& operator=();
	ESDInt();
	static ESDInt* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	ESDInt* CreateCopy();
	static void* operator new(/* parameters unknown */);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	ESDInt();
	/* vtable[6] */ virtual ESDInt(ESDInt*, int, void);
	static int& GetParam(/* parameters unknown */);
	static int& GetReturn(/* parameters unknown */);
	/* vtable[9] */ virtual char* GetName();
	/* vtable[10] */ virtual char GetTypeChar();
	/* vtable[11] */ virtual void Print();
	/* vtable[12] */ virtual bool Test();
	/* vtable[7] */ virtual void Read(EStream &s);
	/* vtable[8] */ virtual void Write(EStream &s);
};

extern ETypeInfo *gpTypeInfo_ESDInt;
extern __vtbl_ptr_type ESDInt virtual table[14];
extern ETypeInfo ESDInt::m_typeInfo;

EStream& operator<<(EStream &s, ESDInt *pD);
EStream& operator>>(EStream &s, ESDInt *&pD);
void ESDInt::~ESDInt(int __in_chrg);
void global constructors keyed to gpTypeInfo_ESDInt();

#endif // C__EOR_SRC2_ENGINE_SCRIPT_DATA_E_SDINT_H
