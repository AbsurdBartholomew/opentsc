// STATUS: NOT STARTED

#include "e_ps2scheduler.h"

EPs2Scheduler _ps2sched = {
	/* base class 0 = */ {
		/* base class 0 = */ {
			/* .m_threadId = */ 0,
			/* .m_pStack = */ NULL,
			/* .m_stackSize = */ 0,
			/* .m_stackAutoAllocated = */ false,
			/* .m_szName = */ NULL,
			/* .m_pLastThread = */ NULL,
			/* .m_pNextThread = */ NULL,
			/* .$vf897 = */ NULL
		}
	},
	/* .m_commandQueue = */ {
		/* .m_inSema = */ {
			/* base class 0 = */ {
				/* .$vf1686 = */ NULL
			},
			/* .m_id = */ 0,
			/* .m_maxCount = */ 0,
			/* .m_waits = */ 0,
			/* .m_count = */ 0
		},
		/* .m_outSema = */ {
			/* base class 0 = */ {
				/* .$vf1686 = */ NULL
			},
			/* .m_id = */ 0,
			/* .m_maxCount = */ 0,
			/* .m_waits = */ 0,
			/* .m_count = */ 0
		},
		/* .m_cIn = */ 0,
		/* .m_cOut = */ 0,
		/* .m_size = */ 0,
		/* .m_pMsgs = */ NULL,
		/* .m_autoAllocated = */ false
	},
	/* .m_pendingQueue = */ {
		/* .m_pHead = */ NULL,
		/* .m_pTail = */ NULL
	},
	/* .m_commandPool = */ {
		/* base class 0 = */ {
			/* .m_pFreeObjHead = */ NULL,
			/* .m_pSegHead = */ NULL,
			/* .m_blockSize = */ 0
		}
	},
	/* .m_commandPoolMutex = */ {
		/* base class 0 = */ {
			/* .$vf1686 = */ NULL
		},
		/* .m_sema = */ {
			/* base class 0 = */ {
				/* .$vf1686 = */ NULL
			},
			/* .m_id = */ 0,
			/* .m_maxCount = */ 0,
			/* .m_waits = */ 0,
			/* .m_count = */ 0
		}
	},
	/* .m_vblankStartHandler = */ {
		/* .m_id = */ 0,
		/* .m_cause = */ 0
	},
	/* .m_vblankEndHandler = */ {
		/* .m_id = */ 0,
		/* .m_cause = */ 0
	},
	/* .m_nTextureLoadsRunning = */ 0,
	/* .m_nRendersRunning = */ 0,
	/* .m_nRetraces = */ 0,
	/* .m_nMinRetraces = */ 0,
	/* .m_nLastRetraces = */ 0,
	/* .m_currentFrameBuffer = */ 0,
	/* .m_pSwapPending = */ NULL,
	/* .m_insideVBlank = */ false
};

EScheduler *_pSched = NULL;

__vtbl_ptr_type EPs2Scheduler virtual table[13] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Scheduler::~EPs2Scheduler,
		/* .__delta2 = */ -8912
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Scheduler::Main,
		/* .__delta2 = */ -8600
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Scheduler::Init,
		/* .__delta2 = */ -8768
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Scheduler::QueueSetupFrameBuffer,
		/* .__delta2 = */ -7920
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Scheduler::QueueDisplayList,
		/* .__delta2 = */ -7840
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Scheduler::QueueSwapBuffer,
		/* .__delta2 = */ -7696
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Scheduler::QueueCompletionEvent,
		/* .__delta2 = */ -7608
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Scheduler::Flush,
		/* .__delta2 = */ -7536
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Scheduler::TextureLoadsComplete,
		/* .__delta2 = */ -7408
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Scheduler::RenderingComplete,
		/* .__delta2 = */ -7336
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Scheduler::GetLastRetraceCount,
		/* .__delta2 = */ -5824
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EScheduler virtual table[13] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EScheduler::~EScheduler,
		/* .__delta2 = */ -5752
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EThread::Main,
		/* .__delta2 = */ -8968
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

EPs2Scheduler* EPs2Scheduler::EPs2Scheduler() {
	EScheduler *this;
	TGrowPool<ESchedCommand> *this;
	int blockSize;
	EGrowPool *this;
	
                    /* inlined from e_scheduler.h */
  __7EThread((EThread *)this);
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.__vtable = (EThread__vtable *)_vt_13EPs2Scheduler;
  __9EMsgQueue(&this->m_commandQueue);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_pendingQueue).m_pTail = (ESchedCommand *)0x0;
  (this->m_pendingQueue).m_pHead = (ESchedCommand *)0x0;
  __9EGrowPool(&(this->m_commandPool).field0_0x0);
                    /* end of inlined section */
  (this->m_commandPool).field0_0x0.m_blockSize = 0x18;
  __6EMutex(&this->m_commandPoolMutex);
  __17EInterruptHandler(&this->m_vblankStartHandler);
  __17EInterruptHandler(&this->m_vblankEndHandler);
  _pSched = &this->field0_0x0;
  this->m_nLastRetraces = 1;
  this->m_nRetraces = 0;
  this->m_nRendersRunning = 0;
  this->m_nTextureLoadsRunning = 0;
  this->m_nMinRetraces = 1;
  *(undefined4 *)&this->m_insideVBlank = 0;
  this->m_pSwapPending = (ESchedCommand *)0x0;
  this->m_currentFrameBuffer = 0;
  return this;
}

void EPs2Scheduler::~EPs2Scheduler(int __in_chrg) {
	EScheduler *this;
	int __in_chrg;
	
  (this->field0_0x0).field0_0x0.__vtable = (EThread__vtable *)_vt_13EPs2Scheduler;
  ___17EInterruptHandler(&this->m_vblankEndHandler,2);
  ___17EInterruptHandler(&this->m_vblankStartHandler,2);
  ___6EMutex(&this->m_commandPoolMutex,2);
  ___9EGrowPool(&(this->m_commandPool).field0_0x0,2);
  ___9EMsgQueue(&this->m_commandQueue,2);
                    /* inlined from e_scheduler.h */
  (this->field0_0x0).field0_0x0.__vtable = (EThread__vtable *)_vt_10EScheduler;
  ___7EThread((EThread *)this,__in_chrg);
  return;
}

bool EPs2Scheduler::Init() {
	EThread *this;
	
  bool bVar1;
  bool bVar2;
  EMsgQueue *this_00;
  
  this_00 = &this->m_commandQueue;
  bVar1 = Create__9EMsgQueueiPUi(this_00,0x800,(uint *)0x0);
  if (bVar1) {
    Create__17EInterruptHandlerR9EMsgQueuei(&this->m_vblankStartHandler,this_00,0x20000002);
    Create__17EInterruptHandlerR9EMsgQueuei(&this->m_vblankEndHandler,this_00,0x20000003);
                    /* inlined from /eor/src2/common/sync/e_thread.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_thread.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_thread.h */
    (this->field0_0x0).field0_0x0.m_szName = "Scheduler";
                    /* end of inlined section */
    bVar2 = Create__7EThreadiiPv((EThread *)this,0x5c,0x4000,(void *)0x0);
    bVar1 = false;
    if (bVar2) {
      Start__7EThread((EThread *)this);
      bVar1 = true;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

void EPs2Scheduler::Main() {
	u32 msg;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  uint msg;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  do {
    Receive__9EMsgQueuePUib(&this->m_commandQueue,&msg,true);
    if (msg == 0x20000002) {
      VBlankStartInterrupt__13EPs2Scheduler(this);
    }
    else if (msg == 0x20000003) {
      VBlankEndInterrupt__13EPs2Scheduler(this);
    }
    else {
      Command__13EPs2SchedulerP13ESchedCommand(this,(ESchedCommand *)msg);
    }
    Update__13EPs2Scheduler(this);
  } while( true );
}

void EPs2Scheduler::Command(ESchedCommand *pCmd) {
	TLinkedList<ESchedCommand,16,20> *this;
	ESchedCommand *pNewNode;
	ESchedCommand *pNode;
	void *pNode;
	TLinkedList<ESchedCommand,16,20> *this;
	ESchedCommand *pNewNode;
	ESchedCommand *pNode;
	void *pNode;
	TLinkedList<ESchedCommand,16,20> *this;
	ESchedCommand *pNewNode;
	ESchedCommand *pNode;
	void *pNode;
	
  ESchedCommand *pEVar1;
  
  switch(pCmd->command) {
  case 1:
    if ((pCmd->flags & 4) == 0) {
      Queue__17EPs2TextureLoaderP13ESchedCommand(&_ps2texload,pCmd);
      this->m_nTextureLoadsRunning = this->m_nTextureLoadsRunning + 1;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    }
    break;
  case 2:
  case 3:
  case 5:
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    pCmd->pLast = (this->m_pendingQueue).m_pTail;
    pEVar1 = (this->m_pendingQueue).m_pTail;
    if (pEVar1 == (ESchedCommand *)0x0) {
      (this->m_pendingQueue).m_pHead = pCmd;
    }
    else {
      pEVar1->pNext = pCmd;
    }
    goto LAB_002fdfbc;
  case 4:
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2textureloader.h */
    Queue__17EPs2TextureLoaderP13ESchedCommand(&_ps2texload,(ESchedCommand *)0x0);
                    /* end of inlined section */
    break;
  case 6:
  case 7:
    ProcessingCompleteCommand__13EPs2SchedulerP13ESchedCommand(this,pCmd);
    return;
  default:
    return;
  }
  pCmd->pLast = (this->m_pendingQueue).m_pTail;
  pEVar1 = (this->m_pendingQueue).m_pTail;
  if (pEVar1 == (ESchedCommand *)0x0) {
                    /* end of inlined section */
    (this->m_pendingQueue).m_pHead = pCmd;
  }
  else {
    pEVar1->pNext = pCmd;
  }
LAB_002fdfbc:
  pCmd->pNext = (ESchedCommand *)0x0;
                    /* end of inlined section */
  (this->m_pendingQueue).m_pTail = pCmd;
  return;
}

ESchedCommand* EPs2Scheduler::AllocSchedCommand() {
	EMutex *this;
	TGrowPool<ESchedCommand> *this;
	EGrowPool *this;
	void *p;
	EMutex *this;
	
  ESyncObject__vtable *pEVar1;
  ESchedCommand *pEVar2;
  
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
  pEVar1 = (this->m_commandPoolMutex).field0_0x0.__vtable;
  (**(code **)(pEVar1 + 1))
            ((int)&(this->m_commandPoolMutex).field0_0x0.__vtable + (int)*(short *)&pEVar1->Release,
             0xffffffffffffffff);
  pEVar2 = (ESchedCommand *)(this->m_commandPool).field0_0x0.m_pFreeObjHead;
  if (pEVar2 == (ESchedCommand *)0x0) {
    pEVar2 = (ESchedCommand *)AllocNewSeg__9EGrowPool(&(this->m_commandPool).field0_0x0);
  }
  else {
    (this->m_commandPool).field0_0x0.m_pFreeObjHead = (void *)pEVar2->command;
  }
  pEVar1 = (this->m_commandPoolMutex).field0_0x0.__vtable;
  (*(code *)pEVar1[1].Acquire)
            ((int)&(this->m_commandPoolMutex).field0_0x0.__vtable +
             (int)*(short *)&pEVar1[1].ESyncObject);
                    /* end of inlined section */
  return pEVar2;
}

void EPs2Scheduler::FreeSchedCommand(ESchedCommand *p) {
	EMutex *this;
	ESchedCommand *p;
	void *p;
	
  ESyncObject__vtable *pEVar1;
  
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
  pEVar1 = (this->m_commandPoolMutex).field0_0x0.__vtable;
  (**(code **)(pEVar1 + 1))
            ((int)&(this->m_commandPoolMutex).field0_0x0.__vtable + (int)*(short *)&pEVar1->Release,
             0xffffffffffffffff);
  if (p == (ESchedCommand *)0x0) {
    pEVar1 = (this->m_commandPoolMutex).field0_0x0.__vtable;
  }
  else {
    p->command = (uint)(this->m_commandPool).field0_0x0.m_pFreeObjHead;
    (this->m_commandPool).field0_0x0.m_pFreeObjHead = p;
    pEVar1 = (this->m_commandPoolMutex).field0_0x0.__vtable;
  }
  (*(code *)pEVar1[1].Acquire)
            ((int)&(this->m_commandPoolMutex).field0_0x0.__vtable +
             (int)*(short *)&pEVar1[1].ESyncObject);
  return;
}

void EPs2Scheduler::SendCommand(ESchedCommand *pCmd) {
  Send__9EMsgQueueUib(&this->m_commandQueue,(uint)pCmd,true);
  return;
}

void EPs2Scheduler::QueueSetupFrameBuffer(int nFrame) {
	ESchedCommand *pCmd;
	
  ESchedCommand *pCmd;
  
  pCmd = AllocSchedCommand__13EPs2Scheduler(this);
  pCmd->data = nFrame;
  pCmd->command = 2;
  this->m_currentFrameBuffer = nFrame;
  SendCommand__13EPs2SchedulerP13ESchedCommand(this,pCmd);
  return;
}

void EPs2Scheduler::QueueDisplayList(EDL *pDL, bool deallocate) {
	ESchedCommand *pCmd;
	
  uint uVar1;
  ESchedCommand *pCmd;
  
  FlushCache(0);
  pCmd = AllocSchedCommand__13EPs2Scheduler(this);
  pCmd->data = (uint)pDL;
  pCmd->command = 1;
  uVar1 = this->m_currentFrameBuffer;
  pCmd->flags = uVar1;
  if (deallocate) {
    pCmd->flags = uVar1 | 0x10;
  }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  if ((pDL->m_textureRefs).field0_0x0.m_l.m_pHead == (ENodeListNode *)0x0) {
    pCmd->flags = pCmd->flags | 4;
  }
  SendCommand__13EPs2SchedulerP13ESchedCommand(this,pCmd);
  return;
}

void EPs2Scheduler::QueueSwapBuffer(int nFrame, int minRetraces) {
	ESchedCommand *pCmd;
	
  ESchedCommand *pCmd;
  
  pCmd = AllocSchedCommand__13EPs2Scheduler(this);
  pCmd->data = nFrame;
  pCmd->data2 = minRetraces;
  pCmd->command = 3;
  SendCommand__13EPs2SchedulerP13ESchedCommand(this,pCmd);
  return;
}

void EPs2Scheduler::QueueCompletionEvent(EEvent &event) {
	ESchedCommand *pCmd;
	
  ESchedCommand *pCmd;
  
  pCmd = AllocSchedCommand__13EPs2Scheduler(this);
  pCmd->data = (uint)event;
  pCmd->command = 4;
  SendCommand__13EPs2SchedulerP13ESchedCommand(this,pCmd);
  return;
}

void EPs2Scheduler::Flush() {
	EEvent flushEvent;
	ESchedCommand *pCmd;
	
  ESchedCommand *pCmd;
  EEvent flushEvent;
  
                    /* inlined from /eor/src2/common/sync/e_event.h */
  __10ESemaphore((ESemaphore *)&flushEvent);
  Create__10ESemaphoreii((ESemaphore *)&flushEvent,1,0);
                    /* end of inlined section */
  pCmd = AllocSchedCommand__13EPs2Scheduler(this);
  pCmd->data = (uint)&flushEvent;
  pCmd->command = 5;
  SendCommand__13EPs2SchedulerP13ESchedCommand(this,pCmd);
                    /* inlined from /eor/src2/common/sync/e_event.h */
  Acquire__10ESemaphoreUi((ESemaphore *)&flushEvent,0xffffffff);
  Destroy__10ESemaphore((ESemaphore *)&flushEvent);
  ___10ESemaphore((ESemaphore *)&flushEvent,2);
  return;
}

void EPs2Scheduler::TextureLoadsComplete(ESchedCommand *pCmd) {
	ESchedCommand *pNewCmd;
	
  ESchedCommand *pCmd_00;
  
  pCmd_00 = AllocSchedCommand__13EPs2Scheduler(this);
  pCmd_00->data = (uint)pCmd;
  pCmd_00->command = 6;
  SendCommand__13EPs2SchedulerP13ESchedCommand(this,pCmd_00);
  return;
}

void EPs2Scheduler::RenderingComplete(ESchedCommand *pCmd) {
	ESchedCommand *pNewCmd;
	
  ESchedCommand *pCmd_00;
  
  pCmd_00 = AllocSchedCommand__13EPs2Scheduler(this);
  pCmd_00->data = (uint)pCmd;
  pCmd_00->command = 7;
  SendCommand__13EPs2SchedulerP13ESchedCommand(this,pCmd_00);
  return;
}

void EPs2Scheduler::VBlankStartInterrupt() {
  *(undefined4 *)&this->m_insideVBlank = 1;
  this->m_nRetraces = this->m_nRetraces + 1;
  return;
}

void EPs2Scheduler::VBlankEndInterrupt() {
  *(undefined4 *)&this->m_insideVBlank = 0;
  return;
}

void EPs2Scheduler::ProcessingCompleteCommand(ESchedCommand *pCmd) {
	ESchedCommand *pOCmd;
	
  ESchedCommand *p;
  
  p = (ESchedCommand *)pCmd->data;
  if (pCmd->command == 6) {
    p->flags = p->flags | 4;
    this->m_nTextureLoadsRunning = this->m_nTextureLoadsRunning + -1;
  }
  else {
    p->flags = p->flags | 8;
    this->m_nRendersRunning = this->m_nRendersRunning + -1;
  }
  if ((p->flags & 0xc) == 0xc) {
    if ((p->flags & 0x10) != 0) {
      DeallocateDL__9EGraphicsP3EDL(_pGfx,(EDL *)p->data);
    }
    FreeSchedCommand__13EPs2SchedulerP13ESchedCommand(this,p);
  }
  FreeSchedCommand__13EPs2SchedulerP13ESchedCommand(this,pCmd);
  return;
}

bool EPs2Scheduler::DoFlush(ESchedCommand *pCmd) {
	TLinkedList<ESchedCommand,16,20> *this;
	ESchedCommand *pNode;
	void *pNode;
	ESchedCommand *pNode;
	void *pNode;
	void *pNode;
	ESchedCommand *pNode;
	void *pNode;
	ESchedCommand *pNode;
	ESchedCommand *pNode;
	
  bool bVar1;
  
  if ((this->m_nTextureLoadsRunning == 0) && (this->m_nRendersRunning == 0)) {
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2renderer.h */
    Release__10ESemaphore((ESemaphore *)pCmd->data);
    if ((this->m_pendingQueue).m_pHead == pCmd) {
      (this->m_pendingQueue).m_pHead = pCmd->pNext;
    }
    else {
      pCmd->pLast->pNext = pCmd->pNext;
    }
    if ((this->m_pendingQueue).m_pTail == pCmd) {
      (this->m_pendingQueue).m_pTail = pCmd->pLast;
    }
    else {
      pCmd->pNext->pLast = pCmd->pLast;
    }
                    /* end of inlined section */
    FreeSchedCommand__13EPs2SchedulerP13ESchedCommand(this,pCmd);
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

bool EPs2Scheduler::DoCompletionEvent(ESchedCommand *pCmd) {
	TLinkedList<ESchedCommand,16,20> *this;
	ESchedCommand *pNode;
	void *pNode;
	ESchedCommand *pNode;
	void *pNode;
	void *pNode;
	ESchedCommand *pNode;
	void *pNode;
	ESchedCommand *pNode;
	ESchedCommand *pNode;
	
  bool bVar1;
  
  if (this->m_nRendersRunning == 0) {
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2renderer.h */
    Queue__12EPs2RendererP13ESchedCommand(&_ps2rend,(ESchedCommand *)0x0);
    Release__10ESemaphore((ESemaphore *)pCmd->data);
    if ((this->m_pendingQueue).m_pHead == pCmd) {
      (this->m_pendingQueue).m_pHead = pCmd->pNext;
    }
    else {
      pCmd->pLast->pNext = pCmd->pNext;
    }
    if ((this->m_pendingQueue).m_pTail == pCmd) {
      (this->m_pendingQueue).m_pTail = pCmd->pLast;
    }
    else {
      pCmd->pNext->pLast = pCmd->pLast;
    }
                    /* end of inlined section */
    FreeSchedCommand__13EPs2SchedulerP13ESchedCommand(this,pCmd);
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

bool EPs2Scheduler::DoDisplayList(ESchedCommand *pCmd) {
	TLinkedList<ESchedCommand,16,20> *this;
	ESchedCommand *pNode;
	void *pNode;
	ESchedCommand *pNode;
	void *pNode;
	void *pNode;
	ESchedCommand *pNode;
	void *pNode;
	ESchedCommand *pNode;
	ESchedCommand *pNode;
	
  ESchedCommand *pEVar1;
  
  Queue__12EPs2RendererP13ESchedCommand(&_ps2rend,pCmd);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (this->m_pendingQueue).m_pHead;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  this->m_nRendersRunning = this->m_nRendersRunning + 1;
  if (pEVar1 == pCmd) {
    (this->m_pendingQueue).m_pHead = pCmd->pNext;
  }
  else {
    pCmd->pLast->pNext = pCmd->pNext;
  }
  if ((this->m_pendingQueue).m_pTail == pCmd) {
    (this->m_pendingQueue).m_pTail = pCmd->pLast;
  }
  else {
    pCmd->pNext->pLast = pCmd->pLast;
  }
                    /* end of inlined section */
  return true;
}

bool EPs2Scheduler::DoSwapBuffer(ESchedCommand *pCmd) {
	TLinkedList<ESchedCommand,16,20> *this;
	ESchedCommand *pNode;
	void *pNode;
	ESchedCommand *pNode;
	void *pNode;
	void *pNode;
	ESchedCommand *pNode;
	void *pNode;
	ESchedCommand *pNode;
	ESchedCommand *pNode;
	
  ESchedCommand *pEVar1;
  int iVar2;
  
  if ((this->m_nRendersRunning == 0) && (this->m_pSwapPending == (ESchedCommand *)0x0)) {
    pEVar1 = (this->m_pendingQueue).m_pHead;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    this->m_pSwapPending = pCmd;
    if (pEVar1 == pCmd) {
      (this->m_pendingQueue).m_pHead = pCmd->pNext;
    }
    else {
      pCmd->pLast->pNext = pCmd->pNext;
    }
    if ((this->m_pendingQueue).m_pTail == pCmd) {
      (this->m_pendingQueue).m_pTail = pCmd->pLast;
    }
    else {
      pCmd->pNext->pLast = pCmd->pLast;
    }
                    /* end of inlined section */
    this->m_nMinRetraces = pCmd->data2;
    if (*(int *)&this->m_insideVBlank == 0) {
      iVar2 = this->m_nRetraces + 1;
    }
    else {
      iVar2 = this->m_nRetraces;
    }
    this->m_nLastRetraces = iVar2;
    return true;
  }
  return false;
}

bool EPs2Scheduler::DoSetupFrameBuffer(ESchedCommand *pCmd) {
	TLinkedList<ESchedCommand,16,20> *this;
	ESchedCommand *pNode;
	void *pNode;
	ESchedCommand *pNode;
	void *pNode;
	void *pNode;
	ESchedCommand *pNode;
	void *pNode;
	ESchedCommand *pNode;
	ESchedCommand *pNode;
	
  EGlobalManagerClient__vtable *pEVar1;
  bool bVar2;
  
  if ((this->m_nRendersRunning == 0) && (this->m_pSwapPending == (ESchedCommand *)0x0)) {
    pEVar1 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar1[0x10].EGlobalManagerClient)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 0x10),pCmd->data);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    if ((this->m_pendingQueue).m_pHead == pCmd) {
      (this->m_pendingQueue).m_pHead = pCmd->pNext;
    }
    else {
      pCmd->pLast->pNext = pCmd->pNext;
    }
    if ((this->m_pendingQueue).m_pTail == pCmd) {
      (this->m_pendingQueue).m_pTail = pCmd->pLast;
    }
    else {
      pCmd->pNext->pLast = pCmd->pLast;
    }
                    /* end of inlined section */
    FreeSchedCommand__13EPs2SchedulerP13ESchedCommand(this,pCmd);
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

void EPs2Scheduler::UpdateCommandQueue() {
	bool keepProcessing;
	ESchedCommand *pCmd;
	
  bool bVar1;
  ESchedCommand *pCmd;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  if ((this->m_pendingQueue).m_pHead != (ESchedCommand *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    pCmd = (this->m_pendingQueue).m_pHead;
    while( true ) {
                    /* end of inlined section */
      switch(pCmd->command) {
      case 1:
        bVar1 = DoDisplayList__13EPs2SchedulerP13ESchedCommand(this,pCmd);
        break;
      case 2:
        bVar1 = DoSetupFrameBuffer__13EPs2SchedulerP13ESchedCommand(this,pCmd);
        break;
      case 3:
        bVar1 = DoSwapBuffer__13EPs2SchedulerP13ESchedCommand(this,pCmd);
        break;
      case 4:
        bVar1 = DoCompletionEvent__13EPs2SchedulerP13ESchedCommand(this,pCmd);
        break;
      case 5:
        bVar1 = DoFlush__13EPs2SchedulerP13ESchedCommand(this,pCmd);
        break;
      default:
        bVar1 = true;
      }
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
      if ((bVar1 == false) || ((this->m_pendingQueue).m_pHead == (ESchedCommand *)0x0)) break;
      pCmd = (this->m_pendingQueue).m_pHead;
    }
  }
  return;
}

bool EPs2Scheduler::OkayToSwap() {
  bool bVar1;
  
  bVar1 = false;
  if ((this->m_pSwapPending != (ESchedCommand *)0x0) && (*(int *)&this->m_insideVBlank != 0)) {
    bVar1 = this->m_nMinRetraces <= this->m_nRetraces;
  }
  return bVar1;
}

void EPs2Scheduler::UpdateSwap() {
  EGlobalManagerClient__vtable *pEVar1;
  bool bVar2;
  
  bVar2 = OkayToSwap__13EPs2Scheduler(this);
  if (bVar2) {
    pEVar1 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar1[0xf].ManagedShutdown)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[0xf].ManagedStartup,
               this->m_pSwapPending->data);
    FreeSchedCommand__13EPs2SchedulerP13ESchedCommand(this,this->m_pSwapPending);
    this->m_pSwapPending = (ESchedCommand *)0x0;
    this->m_nRetraces = 0;
    UpdateCommandQueue__13EPs2Scheduler(this);
  }
  return;
}

void EPs2Scheduler::Update() {
  UpdateCommandQueue__13EPs2Scheduler(this);
  UpdateSwap__13EPs2Scheduler(this);
  return;
}

int EPs2Scheduler::GetLastRetraceCount() {
  return this->m_nLastRetraces;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___13EPs2Scheduler(&_ps2sched,2);
    }
    else {
      __13EPs2Scheduler(&_ps2sched);
    }
  }
  return;
}

void EScheduler::~EScheduler(int __in_chrg) {
  (this->field0_0x0).__vtable = (EThread__vtable *)_vt_10EScheduler;
  ___7EThread(&this->field0_0x0,__in_chrg);
  return;
}

void global constructors keyed to _ps2sched() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to _ps2sched() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}
