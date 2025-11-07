// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_SCRIPT_E_SCRIPTMAN_H
#define C__EOR_SRC2_ENGINE_SCRIPT_E_SCRIPTMAN_H

struct EScriptManager : EResourceManager {
	EScriptManager& operator=();
	EScriptManager();
	EScriptManager();
	/* vtable[1] */ virtual EScriptManager(EScriptManager*, int, void);
	ERScript* AddRef();
	ERScript* AddRef();
};

extern EScriptManager _scriptman;
extern __vtbl_ptr_type EScriptManager virtual table[7];

void EScriptManager::~EScriptManager(int __in_chrg);
void global constructors keyed to _scriptman();
void global destructors keyed to _scriptman();

#endif // C__EOR_SRC2_ENGINE_SCRIPT_E_SCRIPTMAN_H
