// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_SCRIPT_E_SCRIPTCONTEXT_H
#define C__EOR_SRC2_ENGINE_SCRIPT_E_SCRIPTCONTEXT_H

struct EScriptParams {
	EInstance *pCauseInst;
	TNodeList<EInstance *> *pReceiverList;
	EVec3 vPos;
	EVec3 vNormal;
};

enum EScriptCommandType {
	SC_EXIT = 0,
	SC_PUSH_REF = 1,
	SC_PUSH_ALLOC = 2,
	SC_PUSH_REF_GLOBAL_1 = 3,
	SC_PUSH_REF_GLOBAL_2 = 4,
	SC_POP = 5,
	SC_TEST = 6,
	SC_GOTO = 7,
	SC_FUNCTION = 8,
	SC_DEBUG = 9,
	SC_DEBUG_VARS_1 = 10,
	SC_DEBUG_VARS_2 = 11,
	SC_BREAK = 12,
	SC_COUNT = 13
};

struct EScriptCommand {
	EScriptCommandType command;
	u32 data : 28;
};

struct EScriptContext : EStorable {
	static ETypeInfo m_typeInfo;
	int m_commandPos;
	int m_stackPos;
	ERScript *m_pScript;
	EInstance *m_pInstance;
	bool m_suspended;
	bool m_startSuspend;
	bool m_keepSuspending;
	bool m_testResult;
	u32 m_suspendParam1;
	u32 m_suspendParam2;
	char *m_szDebugString;
	EScriptData *m_pStackData[256];
	EScriptParams m_scriptParams;
	bool m_scriptParamsSet;
	static void (*m_commandTable[13])(/* parameters unknown */);
	
	EScriptContext& operator=();
	EScriptContext();
	static EScriptContext* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	EScriptContext* CreateCopy();
	static void* operator new(/* parameters unknown */);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	EScriptContext();
	/* vtable[6] */ virtual EScriptContext(EScriptContext*, int, void);
	bool Execute();
	bool Init(ERScript *pScript, EInstance *pInstance, EScriptParams *pParams);
	void Reinit(RBIterator suspendPos);
	float& GetFloatParam();
	int& GetIntParam();
	u32& GetResourceParam();
	EMat4& GetMatrixParam();
	EInstance*& GetPointerParam();
	EString& GetStringParam();
	EVec3& GetVectorParam();
	float& GetFloatReturn();
	int& GetIntReturn();
	u32& GetResourceReturn();
	EMat4& GetMatrixReturn();
	EInstance*& GetPointerReturn();
	EString& GetStringReturn();
	EVec3& GetVectorReturn();
	EScriptParams* GetScriptParams();
	bool WereScriptParamsSet();
	EInstance* GetInstance();
	EScriptData* PopParam();
	EScriptData* GetReturn();
	void Suspend(u32 suspendParam1, u32 suspendParam2);
	u32 GetSuspendParam1();
	u32 GetSuspendParam2();
	bool IsSuspended();
	/* vtable[7] */ virtual void Read(EStream &s);
	/* vtable[8] */ virtual void Write(EStream &s);
protected:
	void DeallocateStackData();
	void Push(EScriptData *pData);
	EScriptData* Pop(EScriptContext *pThis, EScriptCommand *pCmd);
	static void Exit(/* parameters unknown */);
	static void PushRef(/* parameters unknown */);
	static void PushAlloc(/* parameters unknown */);
	static void PushRefGlobal1(/* parameters unknown */);
	static void PushRefGlobal2(/* parameters unknown */);
	static void Pop(/* parameters unknown */);
	static void Test(/* parameters unknown */);
	static void Goto(/* parameters unknown */);
	static void Function(/* parameters unknown */);
	static void Debug(/* parameters unknown */);
	static void DebugVars1(/* parameters unknown */);
	static void DebugVars2(/* parameters unknown */);
	static void BreakInstruction(/* parameters unknown */);
};

extern void (*EScriptContext::m_commandTable[13])(/* parameters unknown */);
extern ETypeInfo *gpTypeInfo_EScriptContext;
extern __vtbl_ptr_type EScriptContext virtual table[10];
extern __vtbl_ptr_type EStorable virtual table[10];
extern ETypeInfo EScriptContext::m_typeInfo;

EStream& operator<<(EStream &s, EScriptContext *pD);
EStream& operator>>(EStream &s, EScriptContext *&pD);
void EScriptContext::~EScriptContext(int __in_chrg);
void EStorable::~EStorable(int __in_chrg);
void global constructors keyed to EScriptContext::m_commandTable();

#endif // C__EOR_SRC2_ENGINE_SCRIPT_E_SCRIPTCONTEXT_H
