// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_SCRIPT_DATA_E_SDFLOAT_H
#define C__EOR_SRC2_ENGINE_SCRIPT_DATA_E_SDFLOAT_H

struct ESDFloat : EScriptData {
	static ETypeInfo m_typeInfo;
	f32 m_f;
	
	ESDFloat& operator=();
	ESDFloat();
	static ESDFloat* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	ESDFloat* CreateCopy();
	static void* operator new(/* parameters unknown */);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	ESDFloat();
	/* vtable[6] */ virtual ESDFloat(ESDFloat*, int, void);
	static float& GetParam(/* parameters unknown */);
	static float& GetReturn(/* parameters unknown */);
	/* vtable[9] */ virtual char* GetName();
	/* vtable[10] */ virtual char GetTypeChar();
	/* vtable[11] */ virtual void Print();
	/* vtable[12] */ virtual bool Test();
	/* vtable[7] */ virtual void Read(EStream &s);
	/* vtable[8] */ virtual void Write(EStream &s);
};

extern ETypeInfo *gpTypeInfo_ESDFloat;
extern __vtbl_ptr_type ESDFloat virtual table[14];
extern ETypeInfo ESDFloat::m_typeInfo;

EStream& operator<<(EStream &s, ESDFloat *pD);
EStream& operator>>(EStream &s, ESDFloat *&pD);
void ESDFloat::~ESDFloat(int __in_chrg);
void global constructors keyed to gpTypeInfo_ESDFloat();

#endif // C__EOR_SRC2_ENGINE_SCRIPT_DATA_E_SDFLOAT_H
