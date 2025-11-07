// STATUS: NOT STARTED

#include "e_interrupthandler.h"

EInterruptHandler* EInterruptHandler::EInterruptHandler() {
  this->m_id = -1;
  return this;
}

EInterruptHandler* EInterruptHandler::EInterruptHandler(EEvent &event, int cause) {
  this->m_id = -1;
  Create__17EInterruptHandlerR6EEventi(this,event,cause);
  return this;
}

EInterruptHandler* EInterruptHandler::EInterruptHandler(EMsgQueue &msgqueue, int cause) {
  this->m_id = -1;
  Create__17EInterruptHandlerR9EMsgQueuei(this,msgqueue,cause);
  return this;
}

EInterruptHandler* EInterruptHandler::EInterruptHandler(ESemaphore &semaphore, int cause) {
  this->m_id = -1;
  Create__17EInterruptHandlerR10ESemaphorei(this,semaphore,cause);
  return this;
}

void EInterruptHandler::~EInterruptHandler(int __in_chrg) {
	void *pAddress;
	
  if (-1 < this->m_id) {
    Destroy__17EInterruptHandler(this);
  }
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void EInterruptHandler::Create(EEvent &event, int cause) {
  if ((cause & 0x20000000U) == 0) {
    DoCreateDma__17EInterruptHandlerPviPFiPvPv_i
              (this,event,cause,EventHandler__17EInterruptHandleriPvT2);
  }
  else {
    DoCreateInt__17EInterruptHandlerPviPFiPvPv_i
              (this,event,cause,EventHandler__17EInterruptHandleriPvT2);
  }
  return;
}

void EInterruptHandler::Create(EMsgQueue &msgqueue, int cause) {
  if ((cause & 0x20000000U) == 0) {
    DoCreateDma__17EInterruptHandlerPviPFiPvPv_i
              (this,msgqueue,cause,MsgQueueHandlerDma__17EInterruptHandleriPvT2);
  }
  else {
    DoCreateInt__17EInterruptHandlerPviPFiPvPv_i
              (this,msgqueue,cause,MsgQueueHandlerInt__17EInterruptHandleriPvT2);
  }
  return;
}

void EInterruptHandler::Create(ESemaphore &semaphore, int cause) {
  if ((cause & 0x20000000U) == 0) {
    DoCreateDma__17EInterruptHandlerPviPFiPvPv_i
              (this,semaphore,cause,SemaphoreHandler__17EInterruptHandleriPvT2);
  }
  else {
    DoCreateInt__17EInterruptHandlerPviPFiPvPv_i
              (this,semaphore,cause,SemaphoreHandler__17EInterruptHandleriPvT2);
  }
  return;
}

void EInterruptHandler::DoCreateInt(void *pObject, int cause, int (*pfnHandler)(/* parameters unknown */)) {
	int osCause;
	
  int iVar1;
  
  iVar1 = AddIntcHandler2(cause & 0xdfffffffU,pfnHandler,0,pObject);
  this->m_id = iVar1;
  EnableIntc(cause & 0xdfffffffU);
  this->m_cause = cause;
  return;
}

void EInterruptHandler::DoCreateDma(void *pObject, int cause, int (*pfnHandler)(/* parameters unknown */)) {
	int osCause;
	
  int iVar1;
  
  iVar1 = AddDmacHandler2(cause & 0xbfffffffU,pfnHandler,0,pObject);
  this->m_id = iVar1;
  EnableDmac(cause & 0xbfffffffU);
  this->m_cause = cause;
  return;
}

void EInterruptHandler::Destroy() {
	int osCause;
	int previouslyEnabled;
	int osCause;
	int previouslyEnabled;
	
  long lVar1;
  long lVar2;
  uint uVar3;
  
  uVar3 = this->m_cause;
  if ((uVar3 & 0x20000000) == 0) {
    uVar3 = uVar3 & 0xbfffffff;
    lVar1 = DisableDmac(uVar3);
    lVar2 = RemoveDmacHandler(uVar3,this->m_id);
    if ((lVar2 != 0) && (lVar1 != 0)) {
      EnableDmac(uVar3);
    }
  }
  else {
    uVar3 = uVar3 & 0xdfffffff;
    lVar1 = DisableIntc(uVar3);
    lVar2 = RemoveIntcHandler(uVar3,this->m_id);
    if ((lVar2 != 0) && (lVar1 != 0)) {
      EnableIntc(uVar3);
    }
  }
  this->m_id = -1;
  return;
}

int EInterruptHandler::EventHandler(int ca, void *arg, void *addr) {
                    /* inlined from /eor/src2/common/sync/e_event.h */
  iRelease__10ESemaphore((ESemaphore *)arg);
                    /* end of inlined section */
  SYNC(0);
  EI();
  return 0;
}

int EInterruptHandler::MsgQueueHandlerInt(int ca, void *arg, void *addr) {
  iSend__9EMsgQueueUi((EMsgQueue *)arg,ca | 0x20000000);
  SYNC(0);
  EI();
  return 0;
}

int EInterruptHandler::MsgQueueHandlerDma(int ca, void *arg, void *addr) {
  iSend__9EMsgQueueUi((EMsgQueue *)arg,ca | 0x40000000);
  SYNC(0);
  EI();
  return 0;
}

int EInterruptHandler::SemaphoreHandler(int ca, void *arg, void *addr) {
  iRelease__10ESemaphore((ESemaphore *)arg);
  SYNC(0);
  EI();
  return 0;
}
