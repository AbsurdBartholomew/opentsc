// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_SCRIPT_E_RSCRIPT_H
#define C__EOR_SRC2_ENGINE_SCRIPT_E_RSCRIPT_H

typedef TRedBlackTree<EInstance *,EScriptContext *> EScriptContextMap;
typedef TNodeList<EScriptData *> EScriptDataList;

struct TArray<EScriptCommand> : private EArray {
	TArray();
	TArray();
	TArray();
	TArray();
	TArray(TArray<EScriptCommand>*, int, void);
	EScriptCommand& operator[]();
	EScriptCommand& operator[]();
	EScriptCommand& operator[]();
	EScriptCommand& operator[]();
	TArray<EScriptCommand>& operator=();
	EScriptCommand* operator EScriptCommand *();
	EScriptCommand* operator EScriptCommand *();
	void SetGrowBy(TArray<EScriptCommand>*, int, void);
	int GetSize();
	void SetSize();
	void FreeUnusedBufferSpace();
	int Search();
	bool IsEmpty();
	void Empty();
	void RemoveAll();
	void Insert();
	void Insert();
	void Add();
	void Add();
	void Add();
	void Remove();
	void Delete();
	void SafeDelete();
	void DeleteAll();
	void SafeDeleteAll();
	void FreeAll();
};

struct ERScript : EResource {
	static ETypeInfo m_typeInfo;
protected:
	EScriptContextMap m_suspendedContexts;
	EScriptDataList m_staticDataList;
	TArray<EScriptCommand> m_commands;
	TArray<EString> m_debugStrings;
	int m_nRunning;
	
public:
	ERScript& operator=();
	ERScript();
	static ERScript* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	ERScript* CreateCopy();
	static void* operator new(/* parameters unknown */);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	ERScript();
	/* vtable[6] */ virtual ERScript(ERScript*, int, void);
	/* vtable[7] */ virtual void Read(EStream &s);
	/* vtable[8] */ virtual void Write(EStream &s);
	/* vtable[10] */ virtual void Reload(EStream &s);
protected:
	void InitStaticData();
	void DeallocateStaticData();
};

extern ETypeInfo *gpTypeInfo_ERScript;
extern __vtbl_ptr_type ERScript virtual table[13];
extern ETypeInfo ERScript::m_typeInfo;

EStream& operator<<(EStream &s, ERScript *pD);
EStream& operator>>(EStream &s, ERScript *&pD);
void ERScript::~ERScript(int __in_chrg);
EStream& EStream & operator<<<EScriptData *>(EStream &s, TNodeList<EScriptData *> &d);
EStream& EStream & operator>><EScriptData *>(EStream &s, TNodeList<EScriptData *> &d);
void global constructors keyed to gpTypeInfo_ERScript();

#endif // C__EOR_SRC2_ENGINE_SCRIPT_E_RSCRIPT_H
