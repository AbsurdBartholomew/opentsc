// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_SCRIPT_E_SCRIPTENGINE_H
#define C__EOR_SRC2_ENGINE_SCRIPT_E_SCRIPTENGINE_H

typedef TRedBlackTree<unsigned int,EScriptData *> EScriptGlobalMap;
typedef TRedBlackTree<unsigned int,unsigned int> EScriptBreakpointSet;
typedef TRedBlackTree<EInstance *,ERScript *> EInstanceToScriptMap;

struct EScriptEngine {
protected:
	ETypeInfo *m_pDataTypes[256];
	EScriptFunDef *m_funTables[32];
	int m_funTableSizes[32];
	int m_nFunTables;
	EInstanceToScriptMap m_instanceToScriptMap;
	EScriptGlobalMap m_globalMap;
	EScriptBreakpointSet m_breakpointSet;
	bool m_stopped;
	bool m_initialized;
	
public:
	EScriptEngine& operator=();
	EScriptEngine();
	EScriptEngine();
	EScriptEngine(EScriptEngine*, int, void);
	bool Init();
	void Run(ERScript *pScript, EInstance *pInstance, EScriptParams *pParams);
	void RegisterFunctionTable(EScriptFunDef *pTable);
	EScriptData* AllocateData(char type);
	EScriptFunDef* GetFunction(u32 id);
	EScriptData* GetGlobal(char type, u32 id);
	void Break();
	void SetBreakpoint(char *szScriptName, bool set);
	void SetBreakpoint();
	void ClearAllBreakpoints();
	void DebugResume();
	void EnableDebugText(bool enable);
	void InstanceDestructing(EInstance *pInstance);
	void ScriptDestructing(ERScript *pScript);
protected:
	void RegisterDataTypes();
	void DeallocateGlobalData();
	void RemoveFromInstanceToScriptMap(EInstance *pInstance, ERScript *pScript);
};

extern EScriptFunDef _scriptParticleFunTable[6];
extern EScriptEngine _scriptEngine;
extern bool _scriptDebug;
extern bool _scriptVariableDebug;
extern bool _scriptDebugTool;

void EScriptEngine::~EScriptEngine(int __in_chrg);
void global constructors keyed to _scriptParticleFunTable();
void global destructors keyed to _scriptParticleFunTable();

#endif // C__EOR_SRC2_ENGINE_SCRIPT_E_SCRIPTENGINE_H
