// STATUS: NOT STARTED

#include "e_resloader.h"

struct EFolder {
protected:
	void *m_pData;
	void *m_pBase;
	
public:
	EFolder& operator=();
	EFolder();
	EFolder();
	EFolder();
	EFolder();
	void SetData(void *pData);
	void SetData();
	void* operator[]();
	u32 Size();
	bool IsValid();
	u32 GetBlockOffset(int nBlock);
	int GetCount();
	void* GetData();
	int GetDataSize();
	void* GetBase();
	static int GetHeaderSize(/* parameters unknown */);
	static int GetIndexSize(/* parameters unknown */);
	int GetIndexSize();
	void SetBlockCount();
	void SetBlockOffsetAndSize();
	void SetFirstSize();
};

struct EResLoadCmd {
	EResourceManager *pManager;
	u32 id;
	EFile *pSourceFile;
	u32 uStartOffset;
	u32 uLength;
	EResource *pResource;
	bool bWait;
	
	EResLoadCmd& operator=();
	EResLoadCmd();
	EResLoadCmd();
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
};

struct TLinkedList<EResourceManager,60,64> {
protected:
	EResourceManager *m_pHead;
	EResourceManager *m_pTail;
	
public:
	TLinkedList<EResourceManager,60,64>& operator=();
	TLinkedList();
	TLinkedList();
	static EResourceManager*& Last(/* parameters unknown */);
	static EResourceManager*& Next(/* parameters unknown */);
	void Init();
	void RemoveAll();
	EResourceManager* Head();
	EResourceManager* Tail();
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

struct TFixedPool<EResLoadCmd,16> : EFixedPool {
protected:
	unsigned int m_buffer[112];
	
public:
	TFixedPool<EResLoadCmd,16>& operator=();
	TFixedPool();
	TFixedPool(TFixedPool<EResLoadCmd,16>*, int, void);
	TFixedPool();
	EResLoadCmd* Alloc();
	void Free();
protected:
	void Free();
};

struct EResourceLoaderImpl : EResourceLoader, private EThread {
	static bool m_bLowPriority;
	TLinkedList<EResourceManager,60,64> m_resManList;
	bool m_bInitialized;
	void *m_pGlobalIndex;
	EMutex m_dataMutex;
	EMutex m_flushMutex;
	TFixedPool<EResLoadCmd,16> m_cmdAllocPool;
	EMsgQueue m_commandQueue;
	
	EResourceLoaderImpl& operator=();
	EResourceLoaderImpl();
	EResourceLoaderImpl();
	/* vtable[1] */ virtual EResourceLoaderImpl(EResourceLoaderImpl*, int, void);
	/* vtable[2] */ virtual void Init();
	/* vtable[3] */ virtual void Shutdown();
	/* vtable[4] */ virtual void TerminateThread();
	/* vtable[5] */ virtual void Update();
	/* vtable[6] */ virtual void Flush();
	/* vtable[7] */ virtual u32* AddManager(EResourceManager *pManager);
	/* vtable[8] */ virtual void RemoveManager(EResourceManager *pManager);
	/* vtable[9] */ virtual EResource* Load(EResourceManager *pManager, u32 id, EFile *pSourceFile, u32 uStartOffset, u32 uLength, bool bWait);
	/* vtable[10] */ virtual EResourceManager* FindResourceManager(char *szDataType);
	/* vtable[11] */ virtual void NewDataFiles();
	/* vtable[12] */ virtual void OpenFiles();
	/* vtable[13] */ virtual void CloseAllArchiveFiles();
	/* vtable[14] */ virtual void PrintAllLoadedResources();
	/* vtable[2] */ virtual void Main();
	void deallocateGlobalIndex();
	void allocateGlobalIndex();
	u32* getIndexPointer(EString &dataType);
	int getCommandCount();
	void sendCommand(EResLoadCmd *pCmd);
	static void _tAlarmCallback(/* parameters unknown */);
};

bool EResourceLoaderImpl::m_bLowPriority = false;

__vtbl_ptr_type EResourceLoaderImpl::EThread virtual table[4] = {
	/* [0] = */ {
		/* .__delta = */ -4,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ -4,
		/* .__index = */ 0,
		/* .__pfn = */ &EResourceLoaderImpl::~EResourceLoaderImpl,
		/* .__delta2 = */ 11112
	},
	/* [2] = */ {
		/* .__delta = */ -4,
		/* .__index = */ 0,
		/* .__pfn = */ &EResourceLoaderImpl::Main,
		/* .__delta2 = */ 14136
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EResourceLoaderImpl virtual table[16] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResourceLoaderImpl::~EResourceLoaderImpl,
		/* .__delta2 = */ 11112
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResourceLoaderImpl::Init,
		/* .__delta2 = */ 11384
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResourceLoaderImpl::Shutdown,
		/* .__delta2 = */ 11256
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResourceLoaderImpl::TerminateThread,
		/* .__delta2 = */ 11344
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResourceLoaderImpl::Update,
		/* .__delta2 = */ 11520
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResourceLoaderImpl::Flush,
		/* .__delta2 = */ 11784
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResourceLoaderImpl::AddManager,
		/* .__delta2 = */ 11904
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResourceLoaderImpl::RemoveManager,
		/* .__delta2 = */ 11968
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResourceLoaderImpl::Load,
		/* .__delta2 = */ 12168
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResourceLoaderImpl::FindResourceManager,
		/* .__delta2 = */ 12784
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResourceLoaderImpl::NewDataFiles,
		/* .__delta2 = */ 12600
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResourceLoaderImpl::OpenFiles,
		/* .__delta2 = */ 12968
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResourceLoaderImpl::CloseAllArchiveFiles,
		/* .__delta2 = */ 13120
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResourceLoaderImpl::PrintAllLoadedResources,
		/* .__delta2 = */ 13280
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EResourceLoader virtual table[16] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResourceLoader::~EResourceLoader,
		/* .__delta2 = */ 10800
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
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
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

static EResourceLoaderImpl _resLoader;
EResourceLoader *_pResLoader = NULL;

EResourceLoader* EResourceLoader::EResourceLoader() {
  this->__vtable = (EResourceLoader__vtable *)_vt_15EResourceLoader;
  return this;
}

void EResourceLoader::~EResourceLoader(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (EResourceLoader__vtable *)_vt_15EResourceLoader;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

void EResourceLoaderImpl::_tAlarmCallback(int iAlarmID, u_short time, void *arg) {
  __19EResourceLoaderImpl_m_bLowPriority = __19EResourceLoaderImpl_m_bLowPriority ^ 1;
  if (__19EResourceLoaderImpl_m_bLowPriority == 0) {
    iChangeThreadPriority(*(undefined4 *)((int)arg + 4),0x61);
  }
  else {
    iChangeThreadPriority(*(undefined4 *)((int)arg + 4),99);
  }
  iSetAlarm(0xa0,0x2b2a60,arg);
  return;
}

EResourceLoaderImpl* EResourceLoaderImpl::EResourceLoaderImpl() {
	TFixedPool<EResLoadCmd,16> *this;
	
  __15EResourceLoader(&this->field0_0x0);
                    /* inlined from /eor/src2/common/datastruc/e_fixedpool.h */
                    /* end of inlined section */
  __7EThread((EThread *)&this->field_0x4);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_resManList).m_pTail = (EResourceManager *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_resManList).m_pHead = (EResourceManager *)0x0;
                    /* end of inlined section */
  *(__vtbl_ptr_type **)&this->field_0x20 = _vt_19EResourceLoaderImpl_7EThread;
  (this->field0_0x0).__vtable = (EResourceLoader__vtable *)_vt_19EResourceLoaderImpl;
  __6EMutex(&this->m_dataMutex);
  __6EMutex(&this->m_flushMutex);
                    /* inlined from /eor/src2/common/datastruc/e_fixedpool.h */
  __10EFixedPool(&(this->m_cmdAllocPool).field0_0x0);
  Init__10EFixedPooliiPv
            (&(this->m_cmdAllocPool).field0_0x0,0x1c,0x10,(this->m_cmdAllocPool).m_buffer);
                    /* end of inlined section */
  __9EMsgQueue(&this->m_commandQueue);
  *(undefined4 *)&this->m_bInitialized = 0;
  this->m_pGlobalIndex = (void *)0x0;
  _pResLoader = &this->field0_0x0;
  return this;
}

void EResourceLoaderImpl::~EResourceLoaderImpl(int __in_chrg) {
  *(__vtbl_ptr_type **)&this->field_0x20 = _vt_19EResourceLoaderImpl_7EThread;
  (this->field0_0x0).__vtable = (EResourceLoader__vtable *)_vt_19EResourceLoaderImpl;
  ___9EMsgQueue(&this->m_commandQueue,2);
  ___10EFixedPool(&(this->m_cmdAllocPool).field0_0x0,2);
  ___6EMutex(&this->m_flushMutex,2);
  ___6EMutex(&this->m_dataMutex,2);
  ___7EThread((EThread *)&this->field_0x4,0);
  ___15EResourceLoader(&this->field0_0x0,__in_chrg);
  return;
}

void EResourceLoaderImpl::Shutdown() {
  EResourceLoader__vtable *pEVar1;
  
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1->CloseAllArchiveFiles)
            ((int)(this->m_cmdAllocPool).m_buffer + *(short *)&pEVar1->OpenFiles + -0x80);
  Stop__7EThread((EThread *)&this->field_0x4);
  Destroy__9EMsgQueue(&this->m_commandQueue);
  _memmanFree__FPv(this->m_pGlobalIndex);
  *(undefined4 *)&this->m_bInitialized = 0;
  _pResLoader = (EResourceLoader *)0x0;
  return;
}

void EResourceLoaderImpl::TerminateThread() {
  Send__9EMsgQueueUib(&this->m_commandQueue,2,true);
  return;
}

void EResourceLoaderImpl::Init() {
	EThread *this;
	
  allocateGlobalIndex__19EResourceLoaderImpl(this);
                    /* inlined from /eor/src2/common/sync/e_thread.h */
                    /* end of inlined section */
  Create__9EMsgQueueiPUi(&this->m_commandQueue,0x20,(uint *)0x0);
                    /* inlined from /eor/src2/common/sync/e_thread.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_thread.h */
                    /* end of inlined section */
                    /* end of inlined section */
  *(char **)&this->field_0x14 = "Resource Loader";
  Create__7EThreadiiPv((EThread *)&this->field_0x4,0x61,0x8000,(void *)0x0);
  Start__7EThread((EThread *)&this->field_0x4);
  SetAlarm(0xa0,0x2b2a60,this);
  *(undefined4 *)&this->m_bInitialized = 1;
  return;
}

void EResourceLoaderImpl::Update() {
  return;
}

int EResourceLoaderImpl::getCommandCount() {
	EAutoMutex mutex;
	EMutex &mutex;
	
  ESyncObject__vtable *pEVar1;
  int iVar2;
  EMutex *pEVar3;
  EAutoMutex mutex;
  
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar3 = &this->m_dataMutex;
  pEVar1 = (this->m_dataMutex).field0_0x0.__vtable;
  (**(code **)(pEVar1 + 1))
            ((int)&(pEVar3->field0_0x0).__vtable + (int)*(short *)&pEVar1->Release,
             0xffffffffffffffff);
                    /* end of inlined section */
  iVar2 = GetCount__9EMsgQueue(&this->m_commandQueue);
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar1 = (pEVar3->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Acquire)
            ((int)&(pEVar3->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
                    /* end of inlined section */
  return iVar2;
}

void EResourceLoaderImpl::sendCommand(EResLoadCmd *pCmd) {
	EAutoMutex mutex;
	EMutex &mutex;
	
  ESyncObject__vtable *pEVar1;
  EMutex *pEVar2;
  EAutoMutex mutex;
  
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar1 = (this->m_dataMutex).field0_0x0.__vtable;
  pEVar2 = &this->m_dataMutex;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  (**(code **)(pEVar1 + 1))
            ((int)&(pEVar2->field0_0x0).__vtable + (int)*(short *)&pEVar1->Release,
             0xffffffffffffffff);
                    /* end of inlined section */
  Send__9EMsgQueueUib(&this->m_commandQueue,(uint)pCmd,false);
  Send__9EMsgQueueUib(&this->m_commandQueue,1,false);
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar1 = (pEVar2->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Acquire)
            ((int)&(pEVar2->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
  return;
}

void EResourceLoaderImpl::Flush() {
	EAutoMutex fmutex2;
	EMutex &mutex;
	
  ESyncObject__vtable *pEVar1;
  int iVar2;
  EMutex *pEVar3;
  EAutoMutex fmutex2;
  
  pEVar3 = &this->m_flushMutex;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
  while (iVar2 = getCommandCount__19EResourceLoaderImpl(this), iVar2 != 0) {
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
    pEVar1 = (this->m_flushMutex).field0_0x0.__vtable;
    (**(code **)(pEVar1 + 1))
              ((int)&(pEVar3->field0_0x0).__vtable + (int)*(short *)&pEVar1->Release,
               0xffffffffffffffff);
    pEVar1 = (pEVar3->field0_0x0).__vtable;
    (*(code *)pEVar1[1].Acquire)
              ((int)&(pEVar3->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
  }
  return;
}

u32* EResourceLoaderImpl::AddManager(EResourceManager *pManager) {
	TLinkedList<EResourceManager,60,64> *this;
	EResourceManager *pNewNode;
	EResourceManager *pNode;
	void *pNode;
	
  EResourceManager *pEVar1;
  uint *puVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pManager->m_pLast = (this->m_resManList).m_pTail;
  pEVar1 = (this->m_resManList).m_pTail;
  if (pEVar1 == (EResourceManager *)0x0) {
    (this->m_resManList).m_pHead = pManager;
  }
  else {
    pEVar1->m_pNext = pManager;
  }
  pManager->m_pNext = (EResourceManager *)0x0;
  (this->m_resManList).m_pTail = pManager;
                    /* end of inlined section */
  puVar2 = getIndexPointer__19EResourceLoaderImplRC7EString(this,&pManager->m_dataType);
  return puVar2;
}

void EResourceLoaderImpl::RemoveManager(EResourceManager *pManager) {
	EAutoMutex mutex;
	EMutex &mutex;
	TLinkedList<EResourceManager,60,64> *this;
	EResourceManager *pNode;
	void *pNode;
	EResourceManager *pNode;
	void *pNode;
	void *pNode;
	EResourceManager *pNode;
	void *pNode;
	EResourceManager *pNode;
	EResourceManager *pNode;
	
  EResourceLoader__vtable *pEVar1;
  ESyncObject__vtable *pEVar2;
  EMutex *pEVar3;
  EAutoMutex mutex;
  
  if (*(int *)&this->m_bInitialized != 0) {
    pEVar1 = (this->field0_0x0).__vtable;
    (*(code *)pEVar1->CloseAllArchiveFiles)
              ((int)(this->m_cmdAllocPool).m_buffer + *(short *)&pEVar1->OpenFiles + -0x80);
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
    pEVar2 = (this->m_dataMutex).field0_0x0.__vtable;
    pEVar3 = &this->m_dataMutex;
    (**(code **)(pEVar2 + 1))
              ((int)&(pEVar3->field0_0x0).__vtable + (int)*(short *)&pEVar2->Release,
               0xffffffffffffffff);
    if ((this->m_resManList).m_pHead == pManager) {
      (this->m_resManList).m_pHead = pManager->m_pNext;
    }
    else {
      pManager->m_pLast->m_pNext = pManager->m_pNext;
    }
    if ((this->m_resManList).m_pTail == pManager) {
      (this->m_resManList).m_pTail = pManager->m_pLast;
    }
    else {
      pManager->m_pNext->m_pLast = pManager->m_pLast;
    }
    pEVar2 = (pEVar3->field0_0x0).__vtable;
    (*(code *)pEVar2[1].Acquire)
              ((int)&(pEVar3->field0_0x0).__vtable + (int)*(short *)&pEVar2[1].ESyncObject);
  }
                    /* end of inlined section */
  return;
}

EResource* EResourceLoaderImpl::Load(EResourceManager *pManager, u32 id, EFile *pSourceFile, u32 uStartOffset, u32 uLength, bool bWait) {
	EResource *result;
	EResLoadCmd *pCmd;
	void *p;
	void *p;
	void *ptr;
	EResLoadCmd *p;
	void *p;
	
  EResourceLoader__vtable *pEVar1;
  void *pCmd;
  bool bVar2;
  EResource *pEVar3;
  EMutex *this_00;
  
  bVar2 = IsCallingThread__7EThread((EThread *)&this->field_0x4);
  if (bVar2) {
    (*(code *)pSourceFile->__vtable->GetAccessMode)
              ((int)&pSourceFile->__vtable + (int)*(short *)&pSourceFile->__vtable->GetIOMode,
               uStartOffset,0);
    pEVar3 = (EResource *)
             (*(code *)pManager->__vtable[1].Shutdown)
                       ((int)&(pManager->m_dataMutex).field0_0x0.__vtable +
                        (int)*(short *)&pManager->__vtable[1].Init,pSourceFile,uLength);
  }
  else {
    this_00 = &this->m_dataMutex;
                    /* end of inlined section */
    Acquire__6EMutexUi(this_00,0xffffffff);
                    /* inlined from /eor/src2/common/datastruc/e_fixedpool.h */
                    /* end of inlined section */
    while( true ) {
      pCmd = _resLoader.m_cmdAllocPool.field0_0x0.m_pFreeObjHead;
      if (_resLoader.m_cmdAllocPool.field0_0x0.m_pFreeObjHead != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
        _resLoader.m_cmdAllocPool.field0_0x0.m_pFreeObjHead =
             *_resLoader.m_cmdAllocPool.field0_0x0.m_pFreeObjHead;
      }
                    /* end of inlined section */
      Release__6EMutex(this_00);
      if (pCmd != (void *)0x0) break;
      pEVar1 = (this->field0_0x0).__vtable;
      (*(code *)pEVar1->CloseAllArchiveFiles)
                ((int)(this->m_cmdAllocPool).m_buffer + *(short *)&pEVar1->OpenFiles + -0x80);
      Acquire__6EMutexUi(this_00,0xffffffff);
                    /* inlined from /eor/src2/common/datastruc/e_fixedpool.h */
    }
    *(EResourceManager **)pCmd = pManager;
    *(EFile **)((int)pCmd + 8) = pSourceFile;
    *(uint *)((int)pCmd + 0xc) = uStartOffset;
    *(uint *)((int)pCmd + 4) = id;
    *(int *)((int)pCmd + 0x18) = (int)bWait;
    *(uint *)((int)pCmd + 0x10) = uLength;
    *(undefined4 *)((int)pCmd + 0x14) = 0;
    sendCommand__19EResourceLoaderImplP11EResLoadCmd(this,(EResLoadCmd *)pCmd);
    pEVar3 = (EResource *)0x0;
    if (bWait) {
      pEVar1 = (this->field0_0x0).__vtable;
      (*(code *)pEVar1->CloseAllArchiveFiles)
                ((int)(this->m_cmdAllocPool).m_buffer + *(short *)&pEVar1->OpenFiles + -0x80);
      pEVar3 = *(EResource **)((int)pCmd + 0x14);
      Acquire__6EMutexUi(this_00,0xffffffff);
                    /* inlined from /eor/src2/common/datastruc/e_fixedpool.h */
      if (pCmd != (void *)0x0) {
        *(void **)pCmd = _resLoader.m_cmdAllocPool.field0_0x0.m_pFreeObjHead;
        _resLoader.m_cmdAllocPool.field0_0x0.m_pFreeObjHead = pCmd;
      }
                    /* end of inlined section */
      Release__6EMutex(this_00);
    }
  }
  return pEVar3;
}

void EResourceLoaderImpl::NewDataFiles() {
	EAutoMutex fmutex2;
	EResourceManager *pManager;
	EMutex &mutex;
	void *pNode;
	
  EResourceLoader__vtable *pEVar1;
  ESyncObject__vtable *pEVar2;
  EResourceManager *this_00;
  EMutex *pEVar3;
  EAutoMutex fmutex2;
  
  if (*(int *)&this->m_bInitialized != 0) {
    pEVar1 = (this->field0_0x0).__vtable;
    (*(code *)pEVar1->CloseAllArchiveFiles)
              ((int)(this->m_cmdAllocPool).m_buffer + *(short *)&pEVar1->OpenFiles + -0x80);
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
    pEVar2 = (this->m_dataMutex).field0_0x0.__vtable;
    pEVar3 = &this->m_dataMutex;
    (**(code **)(pEVar2 + 1))
              ((int)&(pEVar3->field0_0x0).__vtable + (int)*(short *)&pEVar2->Release,
               0xffffffffffffffff);
                    /* end of inlined section */
    for (this_00 = (this->m_resManList).m_pHead; this_00 != (EResourceManager *)0x0;
        this_00 = this_00->m_pNext) {
      CloseArchiveFile__16EResourceManager(this_00);
    }
    allocateGlobalIndex__19EResourceLoaderImpl(this);
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
    pEVar2 = (pEVar3->field0_0x0).__vtable;
    (*(code *)pEVar2[1].Acquire)
              ((int)&(pEVar3->field0_0x0).__vtable + (int)*(short *)&pEVar2[1].ESyncObject);
                    /* end of inlined section */
  }
  return;
}

EResourceManager* EResourceLoaderImpl::FindResourceManager(char *szDataType) {
	EAutoMutex fmutex2;
	EResourceManager *pManager;
	EMutex &mutex;
	void *pNode;
	
  ESyncObject__vtable *pEVar1;
  EResourceManager *pEVar2;
  int iVar3;
  EMutex *pEVar4;
  EAutoMutex fmutex2;
  
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar4 = &this->m_dataMutex;
  pEVar1 = (this->m_dataMutex).field0_0x0.__vtable;
  (**(code **)(pEVar1 + 1))
            ((int)&(pEVar4->field0_0x0).__vtable + (int)*(short *)&pEVar1->Release,
             0xffffffffffffffff);
  pEVar2 = (this->m_resManList).m_pHead;
  while( true ) {
                    /* end of inlined section */
    if (pEVar2 == (EResourceManager *)0x0) {
      pEVar1 = (pEVar4->field0_0x0).__vtable;
      (*(code *)pEVar1[1].Acquire)
                ((int)&(pEVar4->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
                    /* end of inlined section */
      return (EResourceManager *)0x0;
    }
    iVar3 = CompareNoCase__C7EStringPCc(&pEVar2->m_dataType,szDataType);
    if (iVar3 == 0) break;
    pEVar2 = pEVar2->m_pNext;
  }
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar1 = (pEVar4->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Acquire)
            ((int)&(pEVar4->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
  return pEVar2;
                    /* end of inlined section */
}

void EResourceLoaderImpl::OpenFiles() {
	EAutoMutex fmutex2;
	EResourceManager *pManager;
	EMutex &mutex;
	void *pNode;
	
  EResourceLoader__vtable *pEVar1;
  ESyncObject__vtable *pEVar2;
  EResourceManager *this_00;
  EMutex *pEVar3;
  EAutoMutex fmutex2;
  
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1->CloseAllArchiveFiles)
            ((int)(this->m_cmdAllocPool).m_buffer + *(short *)&pEVar1->OpenFiles + -0x80);
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar2 = (this->m_dataMutex).field0_0x0.__vtable;
  pEVar3 = &this->m_dataMutex;
  (**(code **)(pEVar2 + 1))
            ((int)&(pEVar3->field0_0x0).__vtable + (int)*(short *)&pEVar2->Release,
             0xffffffffffffffff);
                    /* end of inlined section */
  for (this_00 = (this->m_resManList).m_pHead; this_00 != (EResourceManager *)0x0;
      this_00 = this_00->m_pNext) {
    OpenArchiveFile__16EResourceManager(this_00);
  }
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar2 = (pEVar3->field0_0x0).__vtable;
  (*(code *)pEVar2[1].Acquire)
            ((int)&(pEVar3->field0_0x0).__vtable + (int)*(short *)&pEVar2[1].ESyncObject);
  return;
}

void EResourceLoaderImpl::CloseAllArchiveFiles() {
	EAutoMutex fmutex2;
	EResourceManager *pManager;
	EMutex &mutex;
	void *pNode;
	
  EResourceLoader__vtable *pEVar1;
  ESyncObject__vtable *pEVar2;
  int iVar3;
  EMutex *pEVar4;
  EResourceManager *this_00;
  EAutoMutex fmutex2;
  
                    /* end of inlined section */
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1->CloseAllArchiveFiles)
            ((int)(this->m_cmdAllocPool).m_buffer + *(short *)&pEVar1->OpenFiles + -0x80);
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar2 = (this->m_dataMutex).field0_0x0.__vtable;
  pEVar4 = &this->m_dataMutex;
  (**(code **)(pEVar2 + 1))
            ((int)&(pEVar4->field0_0x0).__vtable + (int)*(short *)&pEVar2->Release,
             0xffffffffffffffff);
  this_00 = (this->m_resManList).m_pHead;
                    /* end of inlined section */
  if (this_00 != (EResourceManager *)0x0) {
    iVar3 = *(int *)&this_00->m_bSeqAccess;
    while( true ) {
      if (iVar3 == 0) {
        CloseArchiveFile__16EResourceManager(this_00);
                    /* end of inlined section */
        this_00 = this_00->m_pNext;
      }
      else {
        this_00 = this_00->m_pNext;
      }
      if (this_00 == (EResourceManager *)0x0) break;
      iVar3 = *(int *)&this_00->m_bSeqAccess;
    }
  }
  pEVar2 = (pEVar4->field0_0x0).__vtable;
  (*(code *)pEVar2[1].Acquire)
            ((int)&(pEVar4->field0_0x0).__vtable + (int)*(short *)&pEVar2[1].ESyncObject);
  return;
}

void EResourceLoaderImpl::PrintAllLoadedResources() {
	EAutoMutex fmutex2;
	EResourceManager *pManager;
	EMutex &mutex;
	void *pNode;
	
  EResourceLoader__vtable *pEVar1;
  ESyncObject__vtable *pEVar2;
  EResourceManager *this_00;
  EMutex *pEVar3;
  EAutoMutex fmutex2;
  
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1->CloseAllArchiveFiles)
            ((int)(this->m_cmdAllocPool).m_buffer + *(short *)&pEVar1->OpenFiles + -0x80);
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar2 = (this->m_dataMutex).field0_0x0.__vtable;
  pEVar3 = &this->m_dataMutex;
  (**(code **)(pEVar2 + 1))
            ((int)&(pEVar3->field0_0x0).__vtable + (int)*(short *)&pEVar2->Release,
             0xffffffffffffffff);
                    /* end of inlined section */
  for (this_00 = (this->m_resManList).m_pHead; this_00 != (EResourceManager *)0x0;
      this_00 = this_00->m_pNext) {
    PrintLoadedResources__16EResourceManager(this_00);
  }
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar2 = (pEVar3->field0_0x0).__vtable;
  (*(code *)pEVar2[1].Acquire)
            ((int)&(pEVar3->field0_0x0).__vtable + (int)*(short *)&pEVar2[1].ESyncObject);
  return;
}

void EResourceLoaderImpl::deallocateGlobalIndex() {
	EResourceManager *pManager;
	void *pNode;
	
  EResourceManager *pEVar1;
  
                    /* end of inlined section */
  _memmanFree__FPv(this->m_pGlobalIndex);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (this->m_resManList).m_pHead;
                    /* end of inlined section */
  this->m_pGlobalIndex = (void *)0x0;
  if (pEVar1 != (EResourceManager *)0x0) {
    pEVar1->m_pIndex = (uint *)0x0;
    while (pEVar1 = pEVar1->m_pNext, pEVar1 != (EResourceManager *)0x0) {
      pEVar1->m_pIndex = (uint *)0x0;
    }
  }
  return;
}

void EResourceLoaderImpl::allocateGlobalIndex() {
	EString indexPath;
	EFile *pFile;
	unsigned char indexBuffer[256];
	EFolder folder;
	EResourceManager *pManager;
	s32 count;
	s32 count;
	u32 offset;
	void *pNode;
	
  uint size;
  EResourceManager *pEVar1;
  void *pDest;
  uint *puVar2;
  int iVar3;
  uint nBytes;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  EString indexPath;
  uchar indexBuffer [256];
  EFolder folder;
  EFile *pFile;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if (this->m_pGlobalIndex != (void *)0x0) {
    deallocateGlobalIndex__19EResourceLoaderImpl(this);
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
  }
  MakeCopy__7EStringPCc(&indexPath,"\\data\\");
                    /* end of inlined section */
  __apl__7EStringPCc(&indexPath,"index.ind");
  MakeUpper__7EString(&indexPath);
                    /* end of inlined section */
  do {
    Create__11EFileSystemRP5EFilePCcT2Q25EFile10DeviceTypeQ25EFile10AccessMode
              (&_eorFileSys.field0_0x0,&pFile,indexPath.m_p,"rb",DT_DEFAULT,AM_RANDOM_ACCESS);
  } while (pFile == (EFile *)0x0);
  Empty__7EString(&indexPath);
                    /* inlined from /eor/src2/common/datastruc/e_folder.h */
  SetData__7EFolderPv(&folder,indexBuffer);
                    /* end of inlined section */
  (*(code *)pFile->__vtable->Tell)
            ((int)&pFile->__vtable + (int)*(short *)&pFile->__vtable->Seek,indexBuffer,4);
                    /* inlined from /eor/src2/common/datastruc/e_folder.h */
                    /* end of inlined section */
                    /* WARNING: Load size is inaccurate */
                    /* inlined from /eor/src2/common/datastruc/e_folder.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_folder.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_folder.h */
  iVar3 = (*folder.m_pData + 1) * 4;
                    /* end of inlined section */
                    /* end of inlined section */
  nBytes = iVar3 + 4;
  (*(code *)pFile->__vtable->Tell)
            ((int)&pFile->__vtable + (int)*(short *)&pFile->__vtable->Seek,indexBuffer + 4,iVar3);
                    /* inlined from /eor/src2/common/datastruc/e_folder.h */
                    /* end of inlined section */
                    /* WARNING: Load size is inaccurate */
                    /* inlined from /eor/src2/common/datastruc/e_folder.h */
  size = *(uint *)((int)folder.m_pData + *folder.m_pData * 4 + 4);
                    /* end of inlined section */
  pDest = _memmanAlloc__FUiUi(size,4);
  this->m_pGlobalIndex = pDest;
  memcpy(pDest,indexBuffer,nBytes);
  (*(code *)pFile->__vtable->Tell)
            ((int)&pFile->__vtable + (int)*(short *)&pFile->__vtable->Seek,
             (int)this->m_pGlobalIndex + nBytes,size - nBytes);
  Destroy__11EFileSystemRP5EFile(&_eorFileSys.field0_0x0,&pFile);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  for (pEVar1 = (this->m_resManList).m_pHead; pEVar1 != (EResourceManager *)0x0;
      pEVar1 = pEVar1->m_pNext) {
    puVar2 = getIndexPointer__19EResourceLoaderImplRC7EString(this,&pEVar1->m_dataType);
    pEVar1->m_pIndex = puVar2;
  }
  Deallocate__7EStringPc(&indexPath,indexPath.m_p);
  return;
}

u32* EResourceLoaderImpl::getIndexPointer(EString &dataType) {
	EFolder f;
	int n;
	int i;
	int nBlock;
	
  int iVar1;
  uint uVar2;
  int iVar3;
  int nBlock;
  EFolder f;
  
  if (this->m_pGlobalIndex != (void *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_folder.h */
    SetData__7EFolderPv(&f,this->m_pGlobalIndex);
                    /* WARNING: Load size is inaccurate */
    iVar1 = *f.m_pData;
                    /* end of inlined section */
    nBlock = 0;
    if (0 < iVar1) {
      do {
        uVar2 = GetBlockOffset__C7EFolderi(&f,nBlock);
                    /* end of inlined section */
        iVar3 = CompareNoCase__C7EStringPCc(dataType,(char *)((int)f.m_pBase + uVar2));
        if (iVar3 == 0) {
                    /* inlined from /eor/src2/common/datastruc/e_folder.h */
          uVar2 = GetBlockOffset__C7EFolderi(&f,nBlock + 1);
                    /* end of inlined section */
          return (uint *)((int)f.m_pBase + uVar2);
        }
        nBlock = nBlock + 2;
      } while (nBlock < iVar1);
    }
  }
  return (uint *)0x0;
}

void EResourceLoaderImpl::Main() {
	u32 msg;
	EAutoMutex fmutex2;
	EResLoadCmd *pCmd;
	EMutex &mutex;
	EAutoMutex mutex;
	EMutex &mutex;
	void *ptr;
	EResLoadCmd *p;
	void *p;
	
  ESyncObject__vtable *pEVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  EResource *pResource;
  undefined4 uVar5;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  EMutex *pEVar6;
  undefined8 unaff_s2;
  EMutex *pEVar7;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  EAutoMutex fmutex2;
  EAutoMutex mutex;
  uint msg;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_20 = (undefined4)unaff_s4;
  uStack_1c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  pEVar7 = &this->m_flushMutex;
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  pEVar6 = &this->m_dataMutex;
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  do {
    do {
      Receive__9EMsgQueuePUib(&this->m_commandQueue,&msg,true);
    } while (msg == 1);
    if (msg == 2) {
      return;
    }
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
    pEVar1 = (this->m_flushMutex).field0_0x0.__vtable;
    (**(code **)(pEVar1 + 1))
              ((int)&(pEVar7->field0_0x0).__vtable + (int)*(short *)&pEVar1->Release,
               0xffffffffffffffff);
    uVar4 = msg;
                    /* end of inlined section */
    pvVar2 = (void *)msg;
    pResource = GetRef__16EResourceManagerUi(*(EResourceManager **)msg,*(uint *)(msg + 4));
    *(EResource **)(uVar4 + 0x14) = pResource;
    if (pResource == (EResource *)0x0) {
      iVar3 = **(int **)(uVar4 + 8);
      (**(code **)(iVar3 + 0x24))
                ((int)*(int **)(uVar4 + 8) + (int)*(short *)(iVar3 + 0x20),
                 *(undefined4 *)(uVar4 + 0xc),0);
      iVar3 = *(int *)(*(int *)uVar4 + 0x44);
      uVar5 = (**(code **)(iVar3 + 0x24))
                        (*(int *)uVar4 + (int)*(short *)(iVar3 + 0x20),*(undefined4 *)(uVar4 + 8),
                         *(undefined4 *)(uVar4 + 0x10));
      *(undefined4 *)(uVar4 + 0x14) = uVar5;
LAB_002b382c:
      if (*(int *)(uVar4 + 0x18) == 0) {
        if (*(EResource **)(uVar4 + 0x14) != (EResource *)0x0) {
          AddResource__16EResourceManagerP9EResourceUi
                    (*(EResourceManager **)uVar4,*(EResource **)(uVar4 + 0x14),*(uint *)(uVar4 + 4))
          ;
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
        }
        pEVar1 = (this->m_dataMutex).field0_0x0.__vtable;
        (**(code **)(pEVar1 + 1))
                  ((int)&(pEVar6->field0_0x0).__vtable + (int)*(short *)&pEVar1->Release,
                   0xffffffffffffffff);
        if (uVar4 != 0) {
          *(void **)uVar4 = _resLoader.m_cmdAllocPool.field0_0x0.m_pFreeObjHead;
          _resLoader.m_cmdAllocPool.field0_0x0.m_pFreeObjHead = pvVar2;
        }
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
        pEVar1 = (pEVar6->field0_0x0).__vtable;
        (*(code *)pEVar1[1].Acquire)
                  ((int)&(pEVar6->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
      }
    }
    else if (*(int *)(uVar4 + 0x18) == 0) {
      AddRef__16EResourceManagerP9EResource(*(EResourceManager **)uVar4,pResource);
      *(undefined4 *)(uVar4 + 0x14) = 0;
      goto LAB_002b382c;
    }
    pEVar1 = (pEVar7->field0_0x0).__vtable;
    (*(code *)pEVar1[1].Acquire)
              ((int)&(pEVar7->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
                    /* end of inlined section */
  } while( true );
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___19EResourceLoaderImpl(&_resLoader,2);
    }
    else {
      __19EResourceLoaderImpl(&_resLoader);
    }
  }
  return;
}

void EFolder::SetData(void *pData) {
  this->m_pData = pData;
  this->m_pBase = pData;
  return;
}

u32 EFolder::GetBlockOffset(int nBlock) {
  return *(uint *)((int)this->m_pData + nBlock * 4 + 4);
}

void global constructors keyed to EResourceLoader::EResourceLoader() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to EResourceLoader::EResourceLoader() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}
