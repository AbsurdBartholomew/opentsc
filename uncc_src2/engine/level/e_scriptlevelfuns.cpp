// STATUS: NOT STARTED

#include "e_scriptlevelfuns.h"

void sfnLevelShow(EScriptContext *pContext) {
	TNodeList<EInstance *> *pReceivers;
	NLIterator i;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	
  TNodeList_EInstance___ *pTVar1;
  uint uVar2;
  ENodeListNode *pEVar3;
  
  pTVar1 = (pContext->m_scriptParams).pReceiverList;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  if ((pTVar1 != (TNodeList_EInstance___ *)0x0) &&
     (pEVar3 = (pTVar1->field0_0x0).m_l.m_pHead, pEVar3 != (ENodeListNode *)0x0)) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    uVar2 = pEVar3->data;
    while( true ) {
      *(uint *)(uVar2 + 0x14) = *(uint *)(uVar2 + 0x14) | 0xf;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar3 = pEVar3->pNext;
                    /* end of inlined section */
      if (pEVar3 == (ENodeListNode *)0x0) break;
      uVar2 = pEVar3->data;
    }
  }
  return;
}

void sfnLevelHide(EScriptContext *pContext) {
	TNodeList<EInstance *> *pReceivers;
	NLIterator i;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	
  TNodeList_EInstance___ *pTVar1;
  uint uVar2;
  ENodeListNode *pEVar3;
  
  pTVar1 = (pContext->m_scriptParams).pReceiverList;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  if ((pTVar1 != (TNodeList_EInstance___ *)0x0) &&
     (pEVar3 = (pTVar1->field0_0x0).m_l.m_pHead, pEVar3 != (ENodeListNode *)0x0)) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    uVar2 = pEVar3->data;
    while( true ) {
      *(uint *)(uVar2 + 0x14) = *(uint *)(uVar2 + 0x14) & 0xfffffff0;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar3 = pEVar3->pNext;
                    /* end of inlined section */
      if (pEVar3 == (ENodeListNode *)0x0) break;
      uVar2 = pEVar3->data;
    }
  }
  return;
}

void sfnLevelShowInst(EScriptContext *pContext) {
  EInstance *pEVar1;
  EInstance **ppEVar2;
  
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  ppEVar2 = GetParam__10ESDPointerP14EScriptContext(pContext);
                    /* end of inlined section */
  pEVar1 = *ppEVar2;
  if (pEVar1 != (EInstance *)0x0) {
    pEVar1->m_instanceFlags = pEVar1->m_instanceFlags | 0xf;
  }
  return;
}

void sfnLevelHideInst(EScriptContext *pContext) {
  EInstance *pEVar1;
  EInstance **ppEVar2;
  
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  ppEVar2 = GetParam__10ESDPointerP14EScriptContext(pContext);
                    /* end of inlined section */
  pEVar1 = *ppEVar2;
  if (pEVar1 != (EInstance *)0x0) {
    pEVar1->m_instanceFlags = pEVar1->m_instanceFlags & 0xfffffff0;
  }
  return;
}

void sfnLevelShowSelf(EScriptContext *pContext) {
  EInstance *pEVar1;
  
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  pEVar1 = pContext->m_pInstance;
                    /* end of inlined section */
  if (pEVar1 != (EInstance *)0x0) {
    pEVar1->m_instanceFlags = pEVar1->m_instanceFlags | 0xf;
  }
  return;
}

void sfnLevelHideSelf(EScriptContext *pContext) {
  EInstance *pEVar1;
  
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  pEVar1 = pContext->m_pInstance;
                    /* end of inlined section */
  if (pEVar1 != (EInstance *)0x0) {
    pEVar1->m_instanceFlags = pEVar1->m_instanceFlags & 0xfffffff0;
  }
  return;
}

void sfnLevelIsVisible(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  uint *puVar1;
  
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  puVar1 = (uint *)GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  if (pContext->m_pInstance == (EInstance *)0x0) {
    *puVar1 = 0;
  }
  else {
    *puVar1 = (uint)((pContext->m_pInstance->m_instanceFlags & 0xf) != 0);
  }
  return;
}

void sfnLevelIsInstVisible(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  EInstance **ppEVar1;
  uint *puVar2;
  
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  ppEVar1 = GetParam__10ESDPointerP14EScriptContext(pContext);
  puVar2 = (uint *)GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
                    /* end of inlined section */
  if (*ppEVar1 == (EInstance *)0x0) {
    *puVar2 = 0;
  }
  else {
    *puVar2 = (uint)(((*ppEVar1)->m_instanceFlags & 0xf) != 0);
  }
  return;
}
