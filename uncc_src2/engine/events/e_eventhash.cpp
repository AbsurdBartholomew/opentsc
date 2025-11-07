// STATUS: NOT STARTED

#include "e_eventhash.h"

EEventHash* EEventHash::EEventHash(int tableDepth) {
  InitTable__10EEventHashi(this,tableDepth);
  return this;
}

void EEventHash::~EEventHash(int __in_chrg) {
	void *pAddress;
	
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

void EEventHash::ClearAll() {
  DeleteEntries__10EEventHash(this);
  _memmanFree__FPv(this->m_table);
  this->m_table = (EListenerInfo **)0x0;
  return;
}

unsigned int EEventHash::AddListener(u32 senderId, u32 eventId, EHCallbackFn pFnCallback, u32 callbackParam) {
	EListenerInfo *pNewListener;
	u32 hash;
	EEventHash *this;
	u32 eventId;
	u32 instanceId;
	EEventHash *this;
	u32 senderId;
	u32 eventId;
	EHCallbackFn pFnCallback;
	u32 callbackParam;
	
  uint uVar1;
  EListenerInfo *pNewListener;
  
                    /* inlined from c:/eor/src2/engine/events/e_eventhash.h */
                    /* inlined from c:/eor/src2/engine/events/e_eventhash.h */
  uVar1 = this->m_tableRows;
                    /* inlined from c:/eor/src2/engine/events/e_eventhash.h */
                    /* end of inlined section */
  pNewListener = (EListenerInfo *)
                 FindListener__10EEventHashUiUiPFUii_vUi
                           (this,senderId,eventId,pFnCallback,callbackParam);
  if (pNewListener == (EListenerInfo *)0x0) {
                    /* inlined from c:/eor/src2/engine/events/e_eventhash.h */
    pNewListener = (EListenerInfo *)_allocBucketAlloc__FUiUi(0x2c,0x2c);
    pNewListener->key = eventId ^ senderId;
    pNewListener->senderId = senderId;
    pNewListener->eventId = eventId;
    pNewListener->pFnCallback = pFnCallback;
    pNewListener->callbackParam = callbackParam;
    pNewListener->referenceCount = 0;
    pNewListener->listenerHandle = 0;
    pNewListener->scriptId = 0;
    pNewListener->pScript = (ERScript *)0x0;
                    /* end of inlined section */
    pNewListener->pListeningInstance = (EInstance *)0x0;
    if (pNewListener == (EListenerInfo *)0x0) {
      return 0;
    }
  }
  InsertListener__10EEventHashPQ210EEventHash13EListenerInfoUi
            (this,pNewListener,(eventId ^ senderId) & uVar1 - 1);
  return (uint)pNewListener;
}

unsigned int EEventHash::AddListener(u32 senderId, u32 eventId, u32 listenerId, u32 scriptId) {
	EListenerInfo *pNewListener;
	u32 hash;
	EEventHash *this;
	u32 eventId;
	u32 instanceId;
	EEventHash *this;
	u32 senderId;
	u32 eventId;
	u32 listenerHandle;
	u32 scriptId;
	
  uint uVar1;
  EListenerInfo *pNewListener;
  
                    /* inlined from c:/eor/src2/engine/events/e_eventhash.h */
                    /* inlined from c:/eor/src2/engine/events/e_eventhash.h */
  uVar1 = this->m_tableRows;
                    /* inlined from c:/eor/src2/engine/events/e_eventhash.h */
                    /* end of inlined section */
  pNewListener = (EListenerInfo *)
                 FindListener__10EEventHashUiUiUiUi(this,senderId,eventId,listenerId,scriptId);
  if (pNewListener == (EListenerInfo *)0x0) {
                    /* inlined from c:/eor/src2/engine/events/e_eventhash.h */
    pNewListener = (EListenerInfo *)_allocBucketAlloc__FUiUi(0x2c,0x2c);
    pNewListener->key = eventId ^ senderId;
    pNewListener->senderId = senderId;
    pNewListener->eventId = eventId;
    pNewListener->listenerHandle = listenerId;
    pNewListener->scriptId = scriptId;
    pNewListener->pScript = (ERScript *)0x0;
    pNewListener->pFnCallback = (undefined1 *)0x0;
    pNewListener->callbackParam = 0;
    pNewListener->referenceCount = 0;
                    /* end of inlined section */
    pNewListener->pListeningInstance = (EInstance *)0x0;
    if (pNewListener == (EListenerInfo *)0x0) {
      return 0;
    }
  }
  InsertListener__10EEventHashPQ210EEventHash13EListenerInfoUi
            (this,pNewListener,(eventId ^ senderId) & uVar1 - 1);
  return (uint)pNewListener;
}

bool EEventHash::RemoveListener(EHListenerHandle listenerHandle) {
	bool bFoundNode;
	EListenerInfo *pCurrentListener;
	EListenerInfo *pPreviousListener;
	EEventHash *this;
	u32 key;
	
  EListenerInfo *pEVar1;
  EListenerInfo *pPreviousListener;
  
                    /* inlined from c:/eor/src2/engine/events/e_eventhash.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/events/e_eventhash.h */
                    /* end of inlined section */
  pPreviousListener = (EListenerInfo *)0x0;
  pEVar1 = this->m_table[*(uint *)(listenerHandle + 4) & this->m_tableRows - 1];
  while( true ) {
    if (pEVar1 == (EListenerInfo *)0x0) {
      return false;
    }
    if (pEVar1 == (EListenerInfo *)listenerHandle) break;
    pPreviousListener = pEVar1;
    pEVar1 = pEVar1->pListNext;
  }
  DeleteListener__10EEventHashPQ210EEventHash13EListenerInfoT1
            (this,pPreviousListener,(EListenerInfo *)listenerHandle);
  return true;
}

bool EEventHash::RemoveListener(u32 senderId, u32 eventId, EHCallbackFn pFnCallback, u32 callbackParam) {
	bool bFoundListener;
	EHListenerHandle removedListenerHandle;
	
  bool bVar1;
  uint listenerHandle;
  
  listenerHandle =
       FindListener__10EEventHashUiUiPFUii_vUi(this,senderId,eventId,pFnCallback,callbackParam);
  bVar1 = false;
  if (listenerHandle != 0) {
    bVar1 = RemoveListener__10EEventHashUi(this,listenerHandle);
  }
  return bVar1;
}

bool EEventHash::RemoveListener(u32 senderId, u32 eventId, u32 listenerHandle, u32 scriptId) {
	bool bFoundListener;
	EHListenerHandle removedListenerHandle;
	
  bool bVar1;
  uint listenerHandle_00;
  
  listenerHandle_00 =
       FindListener__10EEventHashUiUiUiUi(this,senderId,eventId,listenerHandle,scriptId);
  bVar1 = false;
  if (listenerHandle_00 != 0) {
    bVar1 = RemoveListener__10EEventHashUi(this,listenerHandle_00);
  }
  return bVar1;
}

void EEventHash::FireEvent(u32 eventId, EInstance *pSendingInstance) {
	u32 key;
	EEventHash *this;
	u32 eventId;
	u32 instanceId;
	EEventHash *this;
	u32 key;
	EEventHash *this;
	u32 eventId;
	EEventHash *this;
	u32 key;
	
  if (pSendingInstance != (EInstance *)0x0) {
                    /* inlined from c:/eor/src2/engine/events/e_eventhash.h */
                    /* inlined from c:/eor/src2/engine/events/e_eventhash.h */
                    /* inlined from c:/eor/src2/engine/events/e_eventhash.h */
                    /* end of inlined section */
    ResolveEvents__C10EEventHashUiUiUi
              (this,eventId,pSendingInstance->m_instanceId,
               (eventId ^ pSendingInstance->m_instanceId) & this->m_tableRows - 1);
  }
                    /* inlined from c:/eor/src2/engine/events/e_eventhash.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/events/e_eventhash.h */
                    /* end of inlined section */
  ResolveEvents__C10EEventHashUiUiUi(this,eventId,0,eventId & this->m_tableRows - 1);
  return;
}

void EEventHash::ResolveEvents(u32 eventId, u32 senderId, u32 hash) {
	EListenerInfo *pCurrentListener;
	
  uint uVar1;
  code *pcVar2;
  EListenerInfo *pEVar3;
  
  pEVar3 = this->m_table[hash];
  if (pEVar3 == (EListenerInfo *)0x0) {
    return;
  }
  uVar1 = pEVar3->eventId;
  do {
    if (uVar1 == eventId) {
      if (pEVar3->senderId == 0) {
        pcVar2 = (code *)pEVar3->pFnCallback;
      }
      else {
        if (pEVar3->senderId != senderId) {
          pEVar3 = pEVar3->pListNext;
          goto LAB_0030ec18;
        }
        pcVar2 = (code *)pEVar3->pFnCallback;
      }
      if (pcVar2 == (code *)0x0) {
        Run__13EScriptEngineP8ERScriptP9EInstanceP13EScriptParams
                  (&_scriptEngine,pEVar3->pScript,pEVar3->pListeningInstance,(EScriptParams *)0x0);
        pEVar3 = pEVar3->pListNext;
      }
      else {
        (*pcVar2)(pEVar3->callbackParam,pEVar3->referenceCount);
        pEVar3 = pEVar3->pListNext;
      }
    }
    else {
      pEVar3 = pEVar3->pListNext;
    }
LAB_0030ec18:
    if (pEVar3 == (EListenerInfo *)0x0) {
      return;
    }
    uVar1 = pEVar3->eventId;
  } while( true );
}

EHListenerHandle EEventHash::FindListener(u32 senderId, u32 eventId, EHCallbackFn pFnCallback, u32 callbackParam) {
	u32 key;
	EHListenerHandle nListenerHandle;
	EListenerInfo *pCurrentListener;
	EEventHash *this;
	u32 eventId;
	u32 instanceId;
	EEventHash *this;
	u32 key;
	
  EListenerInfo *pEVar1;
  
                    /* inlined from c:/eor/src2/engine/events/e_eventhash.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/events/e_eventhash.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/events/e_eventhash.h */
                    /* end of inlined section */
  pEVar1 = this->m_table[(eventId ^ senderId) & this->m_tableRows - 1];
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            if (pEVar1 == (EListenerInfo *)0x0) {
              return 0;
            }
            if (pEVar1->key == (eventId ^ senderId)) break;
            pEVar1 = pEVar1->pListNext;
          }
          if (pEVar1->senderId == senderId) break;
          pEVar1 = pEVar1->pListNext;
        }
        if (pEVar1->eventId == eventId) break;
        pEVar1 = pEVar1->pListNext;
      }
      if (pEVar1->pFnCallback == pFnCallback) break;
      pEVar1 = pEVar1->pListNext;
    }
    if (pEVar1->callbackParam == callbackParam) break;
    pEVar1 = pEVar1->pListNext;
  }
  return (uint)pEVar1;
}

EHListenerHandle EEventHash::FindListener(u32 senderId, u32 eventId, u32 listenerHandle, u32 scriptId) {
	u32 key;
	EHListenerHandle nListenerHandle;
	EListenerInfo *pCurrentListener;
	EEventHash *this;
	u32 eventId;
	u32 instanceId;
	EEventHash *this;
	u32 key;
	
  EListenerInfo *pEVar1;
  
                    /* inlined from c:/eor/src2/engine/events/e_eventhash.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/events/e_eventhash.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/events/e_eventhash.h */
                    /* end of inlined section */
  pEVar1 = this->m_table[(eventId ^ senderId) & this->m_tableRows - 1];
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            if (pEVar1 == (EListenerInfo *)0x0) {
              return 0;
            }
            if (pEVar1->key == (eventId ^ senderId)) break;
            pEVar1 = pEVar1->pListNext;
          }
          if (pEVar1->senderId == senderId) break;
          pEVar1 = pEVar1->pListNext;
        }
        if (pEVar1->eventId == eventId) break;
        pEVar1 = pEVar1->pListNext;
      }
      if (pEVar1->listenerHandle == listenerHandle) break;
      pEVar1 = pEVar1->pListNext;
    }
    if (pEVar1->scriptId == scriptId) break;
    pEVar1 = pEVar1->pListNext;
  }
  return (uint)pEVar1;
}

void EEventHash::DeleteListener(EListenerInfo *pPreviousListener, EListenerInfo *pRemovedListener) {
	EEventHash *this;
	u32 key;
	void *p;
	
  int iVar1;
  
  this->m_entryCount = this->m_entryCount - 1;
  iVar1 = pRemovedListener->referenceCount + -1;
  pRemovedListener->referenceCount = iVar1;
  if (iVar1 == 0) {
    if (pPreviousListener == (EListenerInfo *)0x0) {
                    /* inlined from c:/eor/src2/engine/events/e_eventhash.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/events/e_eventhash.h */
                    /* end of inlined section */
      this->m_table[pRemovedListener->key & this->m_tableRows - 1] = pRemovedListener->pListNext;
    }
    else {
      pPreviousListener->pListNext = pRemovedListener->pListNext;
    }
                    /* inlined from c:/eor/src2/engine/events/e_eventhash.h */
    _allocBucketFree__FPvUiUi(pRemovedListener,0x2c,0x2c);
                    /* end of inlined section */
    this->m_uniqueEntryCount = this->m_uniqueEntryCount - 1;
  }
  return;
}

void EEventHash::InsertListener(EListenerInfo *pNewListener, u32 hash) {
	EListenerInfo *pRowHead;
	ERScript *pScript;
	ERScript *pScript;
	EScriptRefInfo *pNext;
	
  EScriptRefInfo *pEVar1;
  ERScript *pEVar2;
  EInstance *pEVar3;
  EScriptRefInfo *pEVar4;
  int iVar5;
  
  iVar5 = pNewListener->referenceCount;
  if (iVar5 == 0) {
    pNewListener->pListNext = this->m_table[hash];
    this->m_table[hash] = pNewListener;
    this->m_uniqueEntryCount = this->m_uniqueEntryCount + 1;
    if (pNewListener->pFnCallback == (undefined1 *)0x0) {
                    /* inlined from /eor/src2/engine/script/e_scriptman.h */
      pEVar2 = (ERScript *)
               AddRef__16EResourceManagerUiP5EFilei
                         (&_scriptman.field0_0x0,pNewListener->scriptId,(EFile *)0x0,0);
                    /* end of inlined section */
      pNewListener->pScript = pEVar2;
      if (pNewListener->listenerHandle != 0) {
        pEVar3 = FindInstance__7ERLevelUi(this->m_pLevel,pNewListener->listenerHandle);
        pNewListener->pListeningInstance = pEVar3;
      }
                    /* inlined from c:/eor/src2/engine/events/e_eventhash.h */
      pEVar4 = (EScriptRefInfo *)_allocBucketAlloc__FUiUi(0xc,0xc);
      pEVar1 = this->m_scriptRefHead;
      pEVar4->pScript = pEVar2;
      pEVar4->pListPrev = (EScriptRefInfo *)0x0;
      pEVar4->pListNext = pEVar1;
      if (pEVar1 != (EScriptRefInfo *)0x0) {
        pEVar1->pListPrev = pEVar4;
      }
                    /* end of inlined section */
      this->m_scriptRefHead = pEVar4;
      this->m_scriptRefs = this->m_scriptRefs + 1;
      iVar5 = pNewListener->referenceCount;
    }
    else {
      iVar5 = pNewListener->referenceCount;
    }
  }
  pNewListener->referenceCount = iVar5 + 1;
  this->m_entryCount = this->m_entryCount + 1;
  return;
}

void EEventHash::InitTable(int tableDepth) {
  uint uVar1;
  EListenerInfo **ppEVar2;
  
  uVar1 = 1 << (tableDepth & 0x1fU);
  this->m_entryCount = 0;
  this->m_uniqueEntryCount = 0;
  this->m_scriptRefs = 0;
  this->m_scriptRefHead = (EScriptRefInfo *)0x0;
  this->m_pLevel = (ERLevel *)0x0;
  this->m_tableDepth = tableDepth;
  this->m_tableRows = uVar1;
  ppEVar2 = (EListenerInfo **)_memmanAlloc__FUiUi(uVar1 << 2,4);
  this->m_table = ppEVar2;
  ClearTable__10EEventHash(this);
  return;
}

void EEventHash::ClearTable() {
  memset(this->m_table,0,(long)(int)(this->m_tableRows << 2));
  return;
}

void EEventHash::DeleteEntries() {
	EScriptRefInfo *pCurrentScriptRef;
	u32 i;
	EListenerInfo *pCurrent;
	EListenerInfo *pNext;
	EScriptRefInfo *pNext;
	void *p;
	
  EListenerInfo *pEVar1;
  EScriptRefInfo *pEVar2;
  int iVar3;
  EListenerInfo **ppEVar4;
  ERScript *this_00;
  EListenerInfo *pRemovedListener;
  EScriptRefInfo *pAddress;
  uint uVar5;
  
  uVar5 = 0;
  if (this->m_tableRows != 0) {
    ppEVar4 = this->m_table;
    while( true ) {
      pRemovedListener = ppEVar4[uVar5];
      uVar5 = uVar5 + 1;
      if (pRemovedListener != (EListenerInfo *)0x0) {
        iVar3 = pRemovedListener->referenceCount;
        while( true ) {
          pEVar1 = pRemovedListener->pListNext;
          while (0 < iVar3) {
            DeleteListener__10EEventHashPQ210EEventHash13EListenerInfoT1
                      (this,(EListenerInfo *)0x0,pRemovedListener);
            iVar3 = pRemovedListener->referenceCount;
          }
          if (pEVar1 == (EListenerInfo *)0x0) break;
          iVar3 = pEVar1->referenceCount;
          pRemovedListener = pEVar1;
        }
      }
      if (this->m_tableRows <= uVar5) break;
      ppEVar4 = this->m_table;
    }
  }
  pAddress = this->m_scriptRefHead;
  if (pAddress == (EScriptRefInfo *)0x0) {
    this->m_scriptRefHead = (EScriptRefInfo *)0x0;
  }
  else {
    this_00 = pAddress->pScript;
    while( true ) {
      pEVar2 = pAddress->pListNext;
      DelRef__9EResource(&this_00->field0_0x0);
                    /* inlined from c:/eor/src2/engine/events/e_eventhash.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/events/e_eventhash.h */
      this->m_scriptRefs = this->m_scriptRefs - 1;
      _allocBucketFree__FPvUiUi(pAddress,0x2c,0x2c);
                    /* end of inlined section */
      if (pEVar2 == (EScriptRefInfo *)0x0) break;
      this_00 = pEVar2->pScript;
      pAddress = pEVar2;
    }
    this->m_scriptRefHead = (EScriptRefInfo *)0x0;
  }
  return;
}
