// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_SCRIPT_DATA_E_SCRIPTDATA_H
#define C__EOR_SRC2_ENGINE_SCRIPT_DATA_E_SCRIPTDATA_H

struct EScriptData : EStorable {
	static ETypeInfo m_typeInfo;
protected:
	int m_nRefs;
	
public:
	EScriptData& operator=();
	EScriptData();
	static EScriptData* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	EScriptData* CreateCopy();
	EScriptData();
	/* vtable[6] */ virtual EScriptData(EScriptData*, int, void);
	/* vtable[9] */ virtual char* GetName();
	/* vtable[10] */ virtual char GetTypeChar();
	/* vtable[11] */ virtual void Print();
	/* vtable[12] */ virtual bool Test();
	void AddRef();
	void DelRef();
	int GetRefCount();
	/* vtable[7] */ virtual void Read(EStream &s);
	/* vtable[8] */ virtual void Write(EStream &s);
};

extern ETypeInfo *gpTypeInfo_EScriptData;
extern __vtbl_ptr_type EScriptData virtual table[14];
extern __vtbl_ptr_type EStorable virtual table[10];
extern ETypeInfo EScriptData::m_typeInfo;

EStream& operator<<(EStream &s, EScriptData *pD);
EStream& operator>>(EStream &s, EScriptData *&pD);
void EScriptData::~EScriptData(int __in_chrg);
void EStorable::~EStorable(int __in_chrg);
void global constructors keyed to gpTypeInfo_EScriptData();

#endif // C__EOR_SRC2_ENGINE_SCRIPT_DATA_E_SCRIPTDATA_H
