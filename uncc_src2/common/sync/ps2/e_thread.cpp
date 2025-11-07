// STATUS: NOT STARTED

#include "e_thread.h"

struct TLinkedList<EThread,20,24> {
protected:
	EThread *m_pHead;
	EThread *m_pTail;
	
public:
	TLinkedList<EThread,20,24>& operator=();
	TLinkedList();
	TLinkedList();
	static EThread*& Last(/* parameters unknown */);
	static EThread*& Next(/* parameters unknown */);
	void Init();
	void RemoveAll();
	EThread* Head();
	EThread* Tail();
	bool IsEmpty();
	void AddHead();
	void AddTail();
	void AddHead();
	void AddTail();
	void InsertBefore();
	void InsertAfter();
	void Remove();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	void SetHeadAndTail();
	int GetSize();
	int GetCount();
};

__vtbl_ptr_type EThread virtual table[4] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EThread::~EThread,
		/* .__delta2 = */ -10520
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

static TLinkedList<EThread,20,24> _threadList;

EThread* EThread::EThread() {
  this->__vtable = (EThread__vtable *)_vt_7EThread;
  this->m_threadId = -1;
  this->m_szName = "";
  this->m_pStack = (void *)0x0;
  this->m_stackSize = 0;
  *(undefined4 *)&this->m_stackAutoAllocated = 0;
  this->m_pLastThread = (EThread *)0x0;
  this->m_pNextThread = (EThread *)0x0;
  return this;
}

EThread* EThread::EThread(int priority, int stackSize, void *pStack) {
  this->m_threadId = -1;
  this->__vtable = (EThread__vtable *)_vt_7EThread;
  Create__7EThreadiiPv(this,priority,stackSize,pStack);
  return this;
}

void EThread::~EThread(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (EThread__vtable *)_vt_7EThread;
  if (-1 < this->m_threadId) {
    Destroy__7EThread(this);
  }
  DeallocateStack__7EThread(this);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void EThread::DeallocateStack() {
  if (*(int *)&this->m_stackAutoAllocated == 0) {
    this->m_stackSize = 0;
  }
  else {
    _memmanFree__FPv(this->m_pStack);
    *(undefined4 *)&this->m_stackAutoAllocated = 0;
    this->m_stackSize = 0;
  }
  this->m_pStack = (void *)0x0;
  return;
}

bool EThread::Create(int priority, int stackSize, void *pStack) {
	ThreadParam param;
	int id;
	EThread *pNewNode;
	EThread *pNode;
	void *pNode;
	
  EThread *pEVar1;
  void *pvVar2;
  long lVar3;
  ThreadParam param;
  
  DeallocateStack__7EThread(this);
  this->m_stackSize = stackSize;
  if (pStack == (void *)0x0) {
    pvVar2 = _memmanAlloc__FUiUi(stackSize,0x40);
    this->m_pStack = pvVar2;
    if (pvVar2 == (void *)0x0) {
      return false;
    }
    *(undefined4 *)&this->m_stackAutoAllocated = 1;
  }
  else {
    this->m_pStack = pStack;
    *(undefined4 *)&this->m_stackAutoAllocated = 0;
  }
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  this->m_pLastThread = _threadList.m_pTail;
  pEVar1 = this;
  if (_threadList.m_pTail != (EThread *)0x0) {
    (_threadList.m_pTail)->m_pNextThread = this;
    pEVar1 = _threadList.m_pHead;
  }
  _threadList.m_pHead = pEVar1;
  this->m_pNextThread = (EThread *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  param.stack = this->m_pStack;
  param.stackSize = this->m_stackSize;
  param.entry = ThreadEntryPoint__7EThreadPv;
  param.gpReg = _pScratchMemory + 0x3a88;
  _threadList.m_pTail = this;
  param.initPriority = priority;
  param.option = (uint)this;
  lVar3 = CreateThread(&param);
  if (lVar3 < 0) {
    DeallocateStack__7EThread(this);
  }
  else {
    this->m_threadId = (int)lVar3;
  }
  return lVar3 >= 0;
}

void EThread::ThreadEntryPoint(void *pThis) {
  (**(code **)(*(int *)((int)pThis + 0x1c) + 0x14))
            ((int)pThis + (int)*(short *)(*(int *)((int)pThis + 0x1c) + 0x10));
  return;
}

void EThread::Attach(int id) {
	EThread *pNewNode;
	EThread *pNode;
	void *pNode;
	
  EThread *pEVar1;
  void *pvVar2;
  int iVar3;
  
  DeallocateStack__7EThread(this);
  this->m_threadId = id;
  pvVar2 = GetStack__7EThread(this);
  this->m_pStack = pvVar2;
  iVar3 = GetStackSize__7EThread(this);
  this->m_stackSize = iVar3;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  this->m_pLastThread = _threadList.m_pTail;
  pEVar1 = this;
  if (_threadList.m_pTail != (EThread *)0x0) {
    (_threadList.m_pTail)->m_pNextThread = this;
    pEVar1 = _threadList.m_pHead;
  }
  _threadList.m_pHead = pEVar1;
  this->m_pNextThread = (EThread *)0x0;
  _threadList.m_pTail = this;
  return;
}

void EThread::AttachToCallingThread() {
  int id;
  
  id = GetCurrentThreadId__7EThread();
  Attach__7EThreadi(this,id);
  return;
}

void EThread::Destroy() {
	EThread *pNode;
	void *pNode;
	EThread *pNode;
	void *pNode;
	void *pNode;
	EThread *pNode;
	void *pNode;
	EThread *pNode;
	EThread *pNode;
	
  bool bVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  if (_threadList.m_pHead == this) {
    _threadList.m_pHead = this->m_pNextThread;
  }
  else {
    this->m_pLastThread->m_pNextThread = this->m_pNextThread;
  }
  if (_threadList.m_pTail == this) {
    _threadList.m_pTail = this->m_pLastThread;
  }
  else {
    this->m_pNextThread->m_pLastThread = this->m_pLastThread;
  }
                    /* end of inlined section */
  bVar1 = IsCallingThread__7EThread(this);
  if (bVar1) {
    this->m_threadId = -1;
    ExitDeleteThread();
  }
  else {
    TerminateThread(this->m_threadId);
    DeleteThread(this->m_threadId);
    this->m_threadId = -1;
    DeallocateStack__7EThread(this);
  }
  return;
}

void EThread::Start() {
	ThreadParam param;
	
  ThreadParam param;
  
  ReferThreadStatus(this->m_threadId,&param);
  switch(param.status) {
  case 4:
    WakeupThread(this->m_threadId);
    break;
  case 8:
    ResumeThread(this->m_threadId);
    break;
  case 0xc:
    WakeupThread(this->m_threadId);
    ResumeThread(this->m_threadId);
    break;
  case 0x10:
    StartThread(this->m_threadId,this);
  }
  return;
}

void EThread::Stop() {
  bool bVar1;
  
  bVar1 = IsCallingThread__7EThread(this);
  if (bVar1) {
    SleepThread();
  }
  else {
    SuspendThread(this->m_threadId);
  }
  return;
}

void EThread::SetPriority(int priority) {
  ChangeThreadPriority(this->m_threadId,priority);
  return;
}

int EThread::GetPriority() {
	ThreadParam param;
	
  ThreadParam param;
  
  ReferThreadStatus(this->m_threadId,&param);
  return param.currentPriority;
}

bool EThread::IsCallingThread() {
  int iVar1;
  
  iVar1 = GetCurrentThreadId__7EThread();
  return this->m_threadId == iVar1;
}

EThread* EThread::GetThreadObject(int id) {
	ThreadParam param;
	EThread *pThread;
	EThread *pListThread;
	void *pNode;
	
  EThread *pEVar1;
  EThread *pEVar2;
  ThreadParam param;
  
  ReferThreadStatus(id,&param);
  pEVar2 = (EThread *)param.option;
  pEVar1 = _threadList.m_pHead;
  if (param.option == 0) {
                    /* end of inlined section */
    for (; (pEVar2 = (EThread *)param.option, pEVar1 != (EThread *)0x0 &&
           (pEVar2 = pEVar1, pEVar1->m_threadId != id)); pEVar1 = pEVar1->m_pNextThread) {
    }
  }
  return pEVar2;
}

EThread* EThread::GetCallingThreadObject() {
  int id;
  EThread *pEVar1;
  
  id = GetCurrentThreadId__7EThread();
  pEVar1 = GetThreadObject__7EThreadi(id);
  return pEVar1;
}

void* EThread::GetStack() {
	ThreadParam param;
	
  ThreadParam param;
  
  ReferThreadStatus(this->m_threadId,&param);
  return param.stack;
}

int EThread::GetStackSize() {
	ThreadParam param;
	
  ThreadParam param;
  
  ReferThreadStatus(this->m_threadId,&param);
  return param.stackSize;
}

void EThread::PrintAllThreads() {
  return;
}

bool EThread::IsStackPtr(void *p) {
  EThread *pEVar1;
  
  pEVar1 = GetThreadFromStackPtr__7EThreadPCv(p);
  return pEVar1 != (EThread *)0x0;
}

EThread* EThread::GetThreadFromStackPtr(void *p) {
	EThread *pThread;
	void *pNode;
	
  EThread *pEVar1;
  void *pvVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  if ((p != (void *)0x0) && (_threadList.m_pHead != (EThread *)0x0)) {
    pvVar2 = (_threadList.m_pHead)->m_pStack;
    pEVar1 = _threadList.m_pHead;
    while( true ) {
      if (p < pvVar2) {
        pEVar1 = pEVar1->m_pNextThread;
      }
      else {
        if (p < (void *)((int)pvVar2 + pEVar1->m_stackSize)) {
          return pEVar1;
        }
        pEVar1 = pEVar1->m_pNextThread;
      }
                    /* end of inlined section */
      if (pEVar1 == (EThread *)0x0) break;
      pvVar2 = pEVar1->m_pStack;
    }
  }
  return (EThread *)0x0;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    _threadList.m_pHead = (EThread *)0x0;
    _threadList.m_pTail = (EThread *)0x0;
  }
                    /* end of inlined section */
  return;
}

void EThread::SetThreadName(char *szName) {
  this->m_szName = szName;
  return;
}

char* EThread::GetThreadName() {
  return this->m_szName;
}

void EThread::Main() {
  return;
}

int EThread::GetCurrentThreadId() {
  int iVar1;
  
  iVar1 = GetThreadId();
  return iVar1;
}

void global constructors keyed to EThread::EThread() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
