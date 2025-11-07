// STATUS: NOT STARTED

#include "e_scripteventfuns.h"

void sfnSendEvent(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  uint *puVar1;
  uint *puVar2;
  
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  puVar1 = GetParam__11ESDResourceP14EScriptContext(pContext);
  puVar2 = GetParam__11ESDResourceP14EScriptContext(pContext);
                    /* end of inlined section */
  SendEvent__13EEventManagerUiUif(&_eventman,*puVar1,*puVar2,0.0);
  return;
}

void sfnSendSelfEvent(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  uint *puVar1;
  
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  puVar1 = GetParam__11ESDResourceP14EScriptContext(pContext);
                    /* end of inlined section */
  SendEvent__13EEventManagerUiP9EInstancef(&_eventman,*puVar1,pContext->m_pInstance,0.0);
  return;
}

void sfnSendDelayedEvent(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  uint *puVar1;
  uint *puVar2;
  float *pfVar3;
  
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  puVar1 = GetParam__11ESDResourceP14EScriptContext(pContext);
  puVar2 = GetParam__11ESDResourceP14EScriptContext(pContext);
  pfVar3 = GetParam__8ESDFloatP14EScriptContext(pContext);
                    /* end of inlined section */
  SendEvent__13EEventManagerUiUif(&_eventman,*puVar1,*puVar2,*pfVar3);
  return;
}

void sfnSendDelayedSelfEvent(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  EInstance *pInstance;
  uint *puVar1;
  float *pfVar2;
  
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  puVar1 = GetParam__11ESDResourceP14EScriptContext(pContext);
  pInstance = pContext->m_pInstance;
  pfVar2 = GetParam__8ESDFloatP14EScriptContext(pContext);
                    /* end of inlined section */
  SendEvent__13EEventManagerUiP9EInstancef(&_eventman,*puVar1,pInstance,*pfVar2);
  return;
}

void sfnAddListener(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  puVar1 = GetParam__11ESDResourceP14EScriptContext(pContext);
  puVar2 = GetParam__11ESDResourceP14EScriptContext(pContext);
  puVar3 = GetParam__11ESDResourceP14EScriptContext(pContext);
  puVar4 = GetParam__11ESDResourceP14EScriptContext(pContext);
                    /* end of inlined section */
  AddListener__13EEventManagerUiUiUiUi(&_eventman,*puVar1,*puVar2,*puVar3,*puVar4);
  return;
}

void sfnRemoveListener(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  puVar1 = GetParam__11ESDResourceP14EScriptContext(pContext);
  puVar2 = GetParam__11ESDResourceP14EScriptContext(pContext);
  puVar3 = GetParam__11ESDResourceP14EScriptContext(pContext);
  puVar4 = GetParam__11ESDResourceP14EScriptContext(pContext);
                    /* end of inlined section */
  RemoveListener__13EEventManagerUiUiUiUi(&_eventman,*puVar1,*puVar2,*puVar3,*puVar4);
  return;
}
