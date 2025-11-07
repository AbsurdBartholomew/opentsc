// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_SCRIPT_DATA_E_SDPOINTER_H
#define C__EOR_SRC2_ENGINE_SCRIPT_DATA_E_SDPOINTER_H

struct ESDPointer : EScriptData {
	static ETypeInfo m_typeInfo;
	EInstance *m_p;
	
	ESDPointer& operator=();
	ESDPointer();
	static ESDPointer* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	ESDPointer* CreateCopy();
	static void* operator new(/* parameters unknown */);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	ESDPointer();
	/* vtable[6] */ virtual ESDPointer(ESDPointer*, int, void);
	static EInstance*& GetParam(/* parameters unknown */);
	static EInstance*& GetReturn(/* parameters unknown */);
	/* vtable[9] */ virtual char* GetName();
	/* vtable[10] */ virtual char GetTypeChar();
	/* vtable[11] */ virtual void Print();
	/* vtable[12] */ virtual bool Test();
	/* vtable[7] */ virtual void Read(EStream &s);
	/* vtable[8] */ virtual void Write(EStream &s);
};

extern ETypeInfo *gpTypeInfo_ESDPointer;
extern __vtbl_ptr_type ESDPointer virtual table[14];
extern ETypeInfo ESDPointer::m_typeInfo;

EStream& operator<<(EStream &s, ESDPointer *pD);
EStream& operator>>(EStream &s, ESDPointer *&pD);
void ESDPointer::~ESDPointer(int __in_chrg);
void global constructors keyed to gpTypeInfo_ESDPointer();

#endif // C__EOR_SRC2_ENGINE_SCRIPT_DATA_E_SDPOINTER_H
