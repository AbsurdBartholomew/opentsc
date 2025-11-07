// STATUS: NOT STARTED

#include "e_msgqueue.h"

EMsgQueue* EMsgQueue::EMsgQueue() {
  __10ESemaphore(&this->m_inSema);
  __10ESemaphore(&this->m_outSema);
  this->m_size = 0;
  *(undefined4 *)&this->m_autoAllocated = 0;
  return this;
}

EMsgQueue* EMsgQueue::EMsgQueue(int size, u32 *pBuffer) {
  __10ESemaphore(&this->m_inSema);
  __10ESemaphore(&this->m_outSema);
  this->m_size = 0;
  Create__9EMsgQueueiPUi(this,size,pBuffer);
  return this;
}

void EMsgQueue::~EMsgQueue(int __in_chrg) {
	void *pAddress;
	
  if (this->m_size != 0) {
    Destroy__9EMsgQueue(this);
  }
  ___10ESemaphore(&this->m_outSema,2);
  ___10ESemaphore(&this->m_inSema,2);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

bool EMsgQueue::Create(int size, u32 *pBuffer) {
	bool inRet;
	bool outRet;
	
  bool bVar1;
  bool bVar2;
  uint *puVar3;
  int iVar4;
  
  if (pBuffer == (uint *)0x0) {
    puVar3 = (uint *)_memmanAlloc__FUiUi(size << 2,4);
    this->m_pMsgs = puVar3;
    *(undefined4 *)&this->m_autoAllocated = 1;
  }
  else {
    this->m_pMsgs = pBuffer;
    *(undefined4 *)&this->m_autoAllocated = 0;
  }
  bVar1 = Create__10ESemaphoreii(&this->m_inSema,size,size);
  bVar2 = Create__10ESemaphoreii(&this->m_outSema,size,0);
  if (this->m_pMsgs == (uint *)0x0) {
    iVar4 = *(int *)&this->m_autoAllocated;
  }
  else if (bVar1) {
    if (bVar2) {
      this->m_size = size;
      this->m_cOut = 0;
      this->m_cIn = 0;
      return true;
    }
    iVar4 = *(int *)&this->m_autoAllocated;
  }
  else {
    iVar4 = *(int *)&this->m_autoAllocated;
  }
  if (iVar4 != 0) {
    _memmanFree__FPv(this->m_pMsgs);
    *(undefined4 *)&this->m_autoAllocated = 0;
  }
  if (bVar1) {
    Destroy__10ESemaphore(&this->m_inSema);
  }
  if (bVar2) {
    Destroy__10ESemaphore(&this->m_outSema);
  }
  return false;
}

void EMsgQueue::Destroy() {
  this->m_size = 0;
  Destroy__10ESemaphore(&this->m_inSema);
  Destroy__10ESemaphore(&this->m_outSema);
  if (*(int *)&this->m_autoAllocated != 0) {
    _memmanFree__FPv(this->m_pMsgs);
    *(undefined4 *)&this->m_autoAllocated = 0;
  }
  return;
}

bool EMsgQueue::Send(u32 msg, bool block) {
  bool bVar1;
  uint nTimeout;
  
  nTimeout = 0;
  if (block) {
    nTimeout = 0xffffffff;
  }
  bVar1 = Acquire__10ESemaphoreUi(&this->m_inSema,nTimeout);
  if (bVar1) {
    DIntr();
    this->m_pMsgs[this->m_cIn] = msg;
    if (this->m_size == 0) {
      trap(7);
    }
    this->m_cIn = (this->m_cIn + 1) % this->m_size;
    EIntr();
    Release__10ESemaphore(&this->m_outSema);
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

bool EMsgQueue::SendFront(u32 msg, bool block) {
  int iVar1;
  bool bVar2;
  uint nTimeout;
  
  nTimeout = 0;
  if (block) {
    nTimeout = 0xffffffff;
  }
  bVar2 = Acquire__10ESemaphoreUi(&this->m_inSema,nTimeout);
  if (bVar2) {
    DIntr();
    iVar1 = this->m_size;
    if (iVar1 == 0) {
      trap(7);
    }
    iVar1 = (this->m_cOut + iVar1 + -1) % iVar1;
    this->m_cOut = iVar1;
    this->m_pMsgs[iVar1] = msg;
    EIntr();
    Release__10ESemaphore(&this->m_outSema);
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

bool EMsgQueue::Receive(u32 *pMsgOut, bool block) {
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint nTimeout;
  
  nTimeout = 0;
  if (block) {
    nTimeout = 0xffffffff;
  }
  bVar1 = Acquire__10ESemaphoreUi(&this->m_outSema,nTimeout);
  bVar2 = false;
  if (bVar1) {
    DIntr();
    iVar3 = this->m_cOut;
    if (pMsgOut != (uint *)0x0) {
      *pMsgOut = this->m_pMsgs[iVar3];
      iVar3 = this->m_cOut;
    }
    if (this->m_size == 0) {
      trap(7);
    }
    this->m_cOut = (iVar3 + 1) % this->m_size;
    EIntr();
    Release__10ESemaphore(&this->m_inSema);
    bVar2 = true;
  }
  return bVar2;
}

bool EMsgQueue::iSend(u32 msg) {
  bool bVar1;
  
  bVar1 = iAcquire__10ESemaphore(&this->m_inSema);
  if (bVar1) {
    this->m_pMsgs[this->m_cIn] = msg;
    if (this->m_size == 0) {
      trap(7);
    }
    this->m_cIn = (this->m_cIn + 1) % this->m_size;
    iRelease__10ESemaphore(&this->m_outSema);
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

bool EMsgQueue::iSendFront(u32 msg) {
  int iVar1;
  bool bVar2;
  
  bVar2 = iAcquire__10ESemaphore(&this->m_inSema);
  if (bVar2) {
    iVar1 = this->m_size;
    if (iVar1 == 0) {
      trap(7);
    }
    iVar1 = (this->m_cOut + iVar1 + -1) % iVar1;
    this->m_cOut = iVar1;
    this->m_pMsgs[iVar1] = msg;
    iRelease__10ESemaphore(&this->m_outSema);
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

bool EMsgQueue::iReceive(u32 *pMsgOut) {
  bool bVar1;
  bool bVar2;
  int iVar3;
  
  bVar1 = iAcquire__10ESemaphore(&this->m_outSema);
  bVar2 = false;
  if (bVar1) {
    if (pMsgOut == (uint *)0x0) {
      iVar3 = this->m_cOut;
    }
    else {
      *pMsgOut = this->m_pMsgs[this->m_cOut];
      iVar3 = this->m_cOut;
    }
    if (this->m_size == 0) {
      trap(7);
    }
    this->m_cOut = (iVar3 + 1) % this->m_size;
    iRelease__10ESemaphore(&this->m_inSema);
    bVar2 = true;
  }
  return bVar2;
}

int EMsgQueue::GetCount() {
	int in;
	int out;
	
  int iVar1;
  
  iVar1 = this->m_cIn;
  if (iVar1 < this->m_cOut) {
    iVar1 = iVar1 + this->m_size;
  }
  return iVar1 - this->m_cOut;
}

void EMsgQueue::Empty() {
  bool bVar1;
  
  do {
    bVar1 = Receive__9EMsgQueuePUib(this,(uint *)0x0,false);
  } while (bVar1);
  return;
}
