// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_SCRIPT_DATA_E_SDMATRIX_H
#define C__EOR_SRC2_ENGINE_SCRIPT_DATA_E_SDMATRIX_H

struct ESDMatrix : EScriptData {
	static ETypeInfo m_typeInfo;
	EMat4 m_m;
	
	ESDMatrix& operator=();
	ESDMatrix();
	static ESDMatrix* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	ESDMatrix* CreateCopy();
	static void* operator new(/* parameters unknown */);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	ESDMatrix();
	/* vtable[6] */ virtual ESDMatrix(ESDMatrix*, int, void);
	static EMat4& GetParam(/* parameters unknown */);
	static EMat4& GetReturn(/* parameters unknown */);
	/* vtable[9] */ virtual char* GetName();
	/* vtable[10] */ virtual char GetTypeChar();
	/* vtable[11] */ virtual void Print();
	/* vtable[7] */ virtual void Read(EStream &s);
	/* vtable[8] */ virtual void Write(EStream &s);
};

extern ETypeInfo *gpTypeInfo_ESDMatrix;
extern __vtbl_ptr_type ESDMatrix virtual table[14];
extern ETypeInfo ESDMatrix::m_typeInfo;

EStream& operator<<(EStream &s, ESDMatrix *pD);
EStream& operator>>(EStream &s, ESDMatrix *&pD);
void ESDMatrix::~ESDMatrix(int __in_chrg);
void global constructors keyed to gpTypeInfo_ESDMatrix();

#endif // C__EOR_SRC2_ENGINE_SCRIPT_DATA_E_SDMATRIX_H
