// STATUS: NOT STARTED

#include "e_eventmanager.h"

EEventManager _eventman = {
	/* .m_pListenerTable = */ NULL,
	/* .m_pQueueHead = */ NULL,
	/* .m_eventCount = */ 0,
	/* .m_pLevel = */ NULL
};

void EEventManager::Init(u32 tableDepth) {
  EEventHash *pEVar1;
  
  pEVar1 = (EEventHash *)__builtin_new(0x20);
  pEVar1 = __10EEventHashi(pEVar1,tableDepth);
  this->m_pListenerTable = pEVar1;
  return;
}

void EEventManager::Shutdown() {
  ClearAll__10EEventHash(this->m_pListenerTable);
  if (this->m_pListenerTable == (EEventHash *)0x0) {
    this->m_pListenerTable = (EEventHash *)0x0;
  }
  else {
    ___10EEventHash(this->m_pListenerTable,3);
    this->m_pListenerTable = (EEventHash *)0x0;
  }
  return;
}

bool EEventManager::ListenerTableExists() {
  return this->m_pListenerTable != (EEventHash *)0x0;
}

bool EEventManager::SendEvent(u32 eventId, EInstance *pInstance, float delay) {
	bool bSuccess;
	u32 eventId;
	EInstance *pSendingInstance;
	float delay;
	
  EEventInfo *pEVar1;
  EEventInfo *pEVar2;
  bool bVar3;
  
  bVar3 = false;
                    /* inlined from c:/eor/src2/engine/events/e_eventmanager.h */
                    /* inlined from c:/eor/src2/engine/events/e_eventmanager.h */
  pEVar2 = (EEventInfo *)_allocBucketAlloc__FUiUi(0x14,0x14);
  pEVar2->eventId = eventId;
  pEVar2->pSendingInstance = pInstance;
                    /* end of inlined section */
  pEVar2->delay = delay;
  if (pEVar2 != (EEventInfo *)0x0) {
    pEVar1 = this->m_pQueueHead;
    pEVar2->pListPrev = (EEventInfo *)0x0;
    pEVar2->pListNext = pEVar1;
    if (this->m_pQueueHead != (EEventInfo *)0x0) {
      this->m_pQueueHead->pListPrev = pEVar2;
    }
    bVar3 = true;
    this->m_pQueueHead = pEVar2;
    this->m_eventCount = this->m_eventCount + 1;
  }
  return bVar3;
}

bool EEventManager::SendEvent(u32 eventId, u32 instanceId, float delay) {
  bool bVar1;
  EInstance *pInstance;
  
  pInstance = FindInstance__7ERLevelUi(this->m_pLevel,instanceId);
  bVar1 = SendEvent__13EEventManagerUiP9EInstancef(this,eventId,pInstance,delay);
  return bVar1;
}

bool EEventManager::SendEvent(char *event, u32 instanceId, float delay) {
	u32 eventId;
	
  bool bVar1;
  uint eventId;
  EInstance *pInstance;
  
  eventId = ComputeSymbol__9EChecksumPCc(event);
  pInstance = FindInstance__7ERLevelUi(this->m_pLevel,instanceId);
  bVar1 = SendEvent__13EEventManagerUiP9EInstancef(this,eventId,pInstance,delay);
  return bVar1;
}

bool EEventManager::SendEvent(char *szEvent, char *szInstance, float delay) {
	u32 eventId;
	
  bool bVar1;
  uint eventId;
  uint id;
  EInstance *pInstance;
  
  eventId = ComputeSymbol__9EChecksumPCc(szEvent);
  id = ComputeSymbol__9EChecksumPCc(szInstance);
  pInstance = FindInstance__7ERLevelUi(this->m_pLevel,id);
  bVar1 = SendEvent__13EEventManagerUiP9EInstancef(this,eventId,pInstance,delay);
  return bVar1;
}

void EEventManager::Update() {
	EEventInfo *pCurrent;
	EEventInfo *pNext;
	
  EEventInfo *pEVar1;
  EEventInfo *pCurrentEvent;
  float fVar2;
  
  pCurrentEvent = this->m_pQueueHead;
  if (pCurrentEvent != (EEventInfo *)0x0) {
    fVar2 = pCurrentEvent->delay;
    while( true ) {
      pEVar1 = pCurrentEvent->pListNext;
      fVar2 = fVar2 - _dt;
      pCurrentEvent->delay = fVar2;
      if (fVar2 <= 0.0) {
        FireEvent__C10EEventHashUiP9EInstance
                  (this->m_pListenerTable,pCurrentEvent->eventId,pCurrentEvent->pSendingInstance);
        DeleteEvent__13EEventManagerPQ213EEventManager10EEventInfo(this,pCurrentEvent);
      }
      if (pEVar1 == (EEventInfo *)0x0) break;
      fVar2 = pEVar1->delay;
      pCurrentEvent = pEVar1;
    }
  }
  return;
}

void EEventManager::RemoveEvents(u32 eventId, u32 instanceId) {
	EEventInfo *pCurrent;
	EEventInfo *pNext;
	
  EEventInfo *pEVar1;
  uint uVar2;
  EEventInfo *pCurrentEvent;
  
  pCurrentEvent = this->m_pQueueHead;
  if (pCurrentEvent != (EEventInfo *)0x0) {
    uVar2 = pCurrentEvent->eventId;
    while( true ) {
      pEVar1 = pCurrentEvent->pListNext;
      if ((uVar2 == eventId) && (pCurrentEvent->pSendingInstance->m_instanceId == instanceId)) {
        DeleteEvent__13EEventManagerPQ213EEventManager10EEventInfo(this,pCurrentEvent);
      }
      if (pEVar1 == (EEventInfo *)0x0) break;
      uVar2 = pEVar1->eventId;
      pCurrentEvent = pEVar1;
    }
  }
  return;
}

void EEventManager::RemoveAllEvents() {
	EEventInfo *pCurrent;
	EEventInfo *pNext;
	
  EEventInfo *pEVar1;
  EEventInfo *pCurrentEvent;
  
  pCurrentEvent = this->m_pQueueHead;
  while (pCurrentEvent != (EEventInfo *)0x0) {
    pEVar1 = pCurrentEvent->pListNext;
    DeleteEvent__13EEventManagerPQ213EEventManager10EEventInfo(this,pCurrentEvent);
    pCurrentEvent = pEVar1;
  }
  return;
}

EHListenerHandle EEventManager::AddListener(u32 senderId, u32 eventId, EHCallbackFn pFnCallback, u32 callbackParam) {
  uint uVar1;
  
  uVar1 = AddListener__10EEventHashUiUiPFUii_vUi
                    (this->m_pListenerTable,senderId,eventId,pFnCallback,callbackParam);
  return uVar1;
}

EHListenerHandle EEventManager::AddListener(u32 senderId, u32 eventId, u32 listenerId, u32 scriptId) {
  uint uVar1;
  
  uVar1 = AddListener__10EEventHashUiUiUiUi
                    (this->m_pListenerTable,senderId,eventId,listenerId,scriptId);
  return uVar1;
}

EHListenerHandle EEventManager::AddListener(char *szSender, char *szEvent, EHCallbackFn pFnCallback, u32 callbackParam) {
	u32 senderId;
	
  uint uVar1;
  uint eventId;
  
  uVar1 = ComputeSymbol__9EChecksumPCc(szSender);
  eventId = ComputeSymbol__9EChecksumPCc(szEvent);
  uVar1 = AddListener__10EEventHashUiUiPFUii_vUi
                    (this->m_pListenerTable,uVar1,eventId,pFnCallback,callbackParam);
  return uVar1;
}

EHListenerHandle EEventManager::AddListener(char *szSender, char *szEvent, u32 listenerHandle, u32 scriptId) {
	u32 senderId;
	
  uint uVar1;
  uint eventId;
  
  uVar1 = ComputeSymbol__9EChecksumPCc(szSender);
  eventId = ComputeSymbol__9EChecksumPCc(szEvent);
  uVar1 = AddListener__10EEventHashUiUiUiUi
                    (this->m_pListenerTable,uVar1,eventId,listenerHandle,scriptId);
  return uVar1;
}

EHListenerHandle EEventManager::AddListener(char *szSender, char *szEvent, char *szListener, char *szScript) {
	u32 senderId;
	u32 eventId;
	u32 listenerId;
	
  uint uVar1;
  uint eventId;
  uint listenerId;
  uint scriptId;
  
  uVar1 = ComputeSymbol__9EChecksumPCc(szSender);
  eventId = ComputeSymbol__9EChecksumPCc(szEvent);
  listenerId = ComputeSymbol__9EChecksumPCc(szListener);
  scriptId = ComputeSymbol__9EChecksumPCc(szScript);
  uVar1 = AddListener__10EEventHashUiUiUiUi
                    (this->m_pListenerTable,uVar1,eventId,listenerId,scriptId);
  return uVar1;
}

EHListenerHandle EEventManager::AddListener(char *szSender, u32 eventId, u32 listenerHandle, u32 scriptId) {
  uint uVar1;
  
  uVar1 = ComputeSymbol__9EChecksumPCc(szSender);
  uVar1 = AddListener__10EEventHashUiUiUiUi
                    (this->m_pListenerTable,uVar1,eventId,listenerHandle,scriptId);
  return uVar1;
}

EHListenerHandle EEventManager::AddListener(u32 senderId, char *szEvent, u32 listenerId, u32 scriptId) {
  uint uVar1;
  
  uVar1 = ComputeSymbol__9EChecksumPCc(szEvent);
  uVar1 = AddListener__10EEventHashUiUiUiUi
                    (this->m_pListenerTable,senderId,uVar1,listenerId,scriptId);
  return uVar1;
}

bool EEventManager::RemoveListener(EHListenerHandle listenerHandle) {
  bool bVar1;
  
  bVar1 = RemoveListener__10EEventHashUi(this->m_pListenerTable,listenerHandle);
  return bVar1;
}

bool EEventManager::RemoveListener(u32 senderId, u32 eventId, EHCallbackFn pFnCallback, u32 callbackParam) {
  bool bVar1;
  
  bVar1 = RemoveListener__10EEventHashUiUiPFUii_vUi
                    (this->m_pListenerTable,senderId,eventId,pFnCallback,callbackParam);
  return bVar1;
}

bool EEventManager::RemoveListener(u32 senderId, u32 eventId, u32 listenerHandle, u32 scriptId) {
  bool bVar1;
  
  bVar1 = RemoveListener__10EEventHashUiUiUiUi
                    (this->m_pListenerTable,senderId,eventId,listenerHandle,scriptId);
  return bVar1;
}

void EEventManager::DeleteEvent(EEventInfo *pCurrentEvent) {
	void *p;
	
  EEventInfo *pEVar1;
  
  if (pCurrentEvent == this->m_pQueueHead) {
    this->m_pQueueHead = pCurrentEvent->pListNext;
    pEVar1 = pCurrentEvent->pListPrev;
  }
  else {
    pEVar1 = pCurrentEvent->pListPrev;
  }
  if (pEVar1 == (EEventInfo *)0x0) {
    pEVar1 = pCurrentEvent->pListNext;
  }
  else {
    pEVar1->pListNext = pCurrentEvent->pListNext;
    pEVar1 = pCurrentEvent->pListNext;
  }
  if (pEVar1 != (EEventInfo *)0x0) {
    pEVar1->pListPrev = pCurrentEvent->pListPrev;
  }
                    /* inlined from c:/eor/src2/engine/events/e_eventmanager.h */
  _allocBucketFree__FPvUiUi(pCurrentEvent,0x14,0x14);
                    /* end of inlined section */
  this->m_eventCount = this->m_eventCount + -1;
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/engine/events/e_eventmanager.h */
    _eventman.m_pListenerTable = (EEventHash *)0x0;
    _eventman.m_pLevel = (ERLevel *)0x0;
    _eventman.m_pQueueHead = (EEventInfo *)0x0;
  }
                    /* end of inlined section */
  return;
}

void global constructors keyed to _eventman() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to _eventman() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}
