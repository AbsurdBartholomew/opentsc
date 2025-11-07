// STATUS: NOT STARTED

#include "e_allocbucket.h"

TGrowPool<EAllocBucketNode> EAllocBucketNode::m_bucketNodePool = {
	/* base class 0 = */ {
		/* .m_pFreeObjHead = */ NULL,
		/* .m_pSegHead = */ NULL,
		/* .m_blockSize = */ 0
	}
};

EAllocBucket _allocBucket = {
	/* base class 0 = */ {
		/* .$vf1727 = */ NULL
	},
	/* .m_pHashTable = */ {
		/* [0] = */ NULL,
		/* [1] = */ NULL,
		/* [2] = */ NULL,
		/* [3] = */ NULL,
		/* [4] = */ NULL,
		/* [5] = */ NULL,
		/* [6] = */ NULL,
		/* [7] = */ NULL,
		/* [8] = */ NULL,
		/* [9] = */ NULL,
		/* [10] = */ NULL,
		/* [11] = */ NULL,
		/* [12] = */ NULL,
		/* [13] = */ NULL,
		/* [14] = */ NULL,
		/* [15] = */ NULL,
		/* [16] = */ NULL,
		/* [17] = */ NULL,
		/* [18] = */ NULL,
		/* [19] = */ NULL,
		/* [20] = */ NULL,
		/* [21] = */ NULL,
		/* [22] = */ NULL,
		/* [23] = */ NULL,
		/* [24] = */ NULL,
		/* [25] = */ NULL,
		/* [26] = */ NULL,
		/* [27] = */ NULL,
		/* [28] = */ NULL,
		/* [29] = */ NULL,
		/* [30] = */ NULL,
		/* [31] = */ NULL,
		/* [32] = */ NULL,
		/* [33] = */ NULL,
		/* [34] = */ NULL,
		/* [35] = */ NULL,
		/* [36] = */ NULL,
		/* [37] = */ NULL,
		/* [38] = */ NULL,
		/* [39] = */ NULL,
		/* [40] = */ NULL,
		/* [41] = */ NULL,
		/* [42] = */ NULL,
		/* [43] = */ NULL,
		/* [44] = */ NULL,
		/* [45] = */ NULL,
		/* [46] = */ NULL,
		/* [47] = */ NULL,
		/* [48] = */ NULL,
		/* [49] = */ NULL,
		/* [50] = */ NULL,
		/* [51] = */ NULL,
		/* [52] = */ NULL
	},
	/* .m_mutex = */ {
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
	}
};

__vtbl_ptr_type EAllocBucket virtual table[5] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EAllocBucket::~EAllocBucket,
		/* .__delta2 = */ -12216
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobalManagerClient::ManagedStartup,
		/* .__delta2 = */ 22312
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EAllocBucket::ManagedShutdown,
		/* .__delta2 = */ -12088
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EGlobalManagerClient virtual table[5] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobalManagerClient::~EGlobalManagerClient,
		/* .__delta2 = */ 22192
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobalManagerClient::ManagedStartup,
		/* .__delta2 = */ 22312
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobalManagerClient::ManagedShutdown,
		/* .__delta2 = */ 22320
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

EAllocBucket* EAllocBucket::EAllocBucket() {
	EGlobalManagerClient *this;
	
                    /* inlined from /eor/src2/common/util/e_globalmanagerclient.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/util/e_globalmanagerclient.h */
  (this->field0_0x0).__vtable = (EGlobalManagerClient__vtable *)_vt_20EGlobalManagerClient;
  Register__14EGlobalManagerP20EGlobalManagerClienti(&this->field0_0x0,1);
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (EGlobalManagerClient__vtable *)_vt_12EAllocBucket;
  __6EMutex(&this->m_mutex);
  memset(this->m_pHashTable,0,0xd4);
  return this;
}

void EAllocBucket::~EAllocBucket(int __in_chrg) {
	EGlobalManagerClient *this;
	EGlobalManagerClient *this;
	int __in_chrg;
	void *pAddress;
	
  bool bVar1;
  
                    /* inlined from /eor/src2/common/util/e_globalmanagerclient.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/util/e_globalmanagerclient.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/util/e_globalmanagerclient.h */
  bVar1 = __14EGlobalManager_m_shutdownComplete == 0;
  (this->field0_0x0).__vtable = (EGlobalManagerClient__vtable *)_vt_12EAllocBucket;
  if (bVar1) {
    Shutdown__14EGlobalManager();
  }
                    /* end of inlined section */
  ___6EMutex(&this->m_mutex,2);
                    /* inlined from /eor/src2/common/util/e_globalmanagerclient.h */
  (this->field0_0x0).__vtable = (EGlobalManagerClient__vtable *)_vt_20EGlobalManagerClient;
  Shutdown__20EGlobalManagerClient(&this->field0_0x0);
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}

void EAllocBucket::ManagedShutdown() {
	int h;
	EAllocBucketNode *pNode;
	EAllocBucketNode *pNext;
	EAllocBucketNode *this;
	void *p;
	EAllocBucketNode *p;
	void *p;
	
  void **ppvVar1;
  void **ppvVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0;
  while( true ) {
    iVar4 = iVar4 + 1;
    ppvVar1 = *(void ***)((int)this->m_pHashTable + iVar3);
    while (ppvVar2 = ppvVar1, ppvVar2 != (void **)0x0) {
      ppvVar1 = (void **)ppvVar2[1];
      if (ppvVar2 != (void **)0x0) {
        ___9EGrowPool((EGrowPool *)(ppvVar2 + 2),2);
                    /* inlined from c:/eor/src2/common/datastruc/e_growpool.h */
        *ppvVar2 = _16EAllocBucketNode_m_bucketNodePool.field0_0x0.m_pFreeObjHead;
        _16EAllocBucketNode_m_bucketNodePool.field0_0x0.m_pFreeObjHead = ppvVar2;
      }
    }
    if (0x34 < iVar4) break;
    iVar3 = iVar4 * 4;
  }
  return;
}

void* EAllocBucket::Alloc(u32 size, u32 hashKey) {
	EAllocBucketNode *&pHeadNode;
	EAllocBucketNode *pNode;
	EGlobalManagerClient *this;
	EMutex *this;
	void *p;
	EGrowPool *this;
	void *p;
	
  ESyncObject__vtable *pEVar1;
  EAllocBucketNode *pEVar2;
  void **ppvVar3;
  uint uVar4;
  EAllocBucketNode **ppEVar5;
  
                    /* inlined from /eor/src2/common/util/e_globalmanagerclient.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/util/e_globalmanagerclient.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/util/e_globalmanagerclient.h */
  if (__14EGlobalManager_m_startupComplete == 0) {
    Startup__14EGlobalManager();
  }
  pEVar1 = (this->m_mutex).field0_0x0.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
  (**(code **)(pEVar1 + 1))
            ((int)&(this->m_mutex).field0_0x0.__vtable + (int)*(short *)&pEVar1->Release,
             0xffffffffffffffff);
                    /* end of inlined section */
  ppEVar5 = this->m_pHashTable + hashKey;
  pEVar2 = *ppEVar5;
  do {
    if (pEVar2 == (EAllocBucketNode *)0x0) {
LAB_0032d208:
      if (_16EAllocBucketNode_m_bucketNodePool.field0_0x0.m_pFreeObjHead == (void *)0x0) {
        pEVar2 = (EAllocBucketNode *)
                 AllocNewSeg__9EGrowPool(&_16EAllocBucketNode_m_bucketNodePool.field0_0x0);
      }
      else {
                    /* WARNING: Load size is inaccurate */
        pEVar2 = (EAllocBucketNode *)_16EAllocBucketNode_m_bucketNodePool.field0_0x0.m_pFreeObjHead;
        _16EAllocBucketNode_m_bucketNodePool.field0_0x0.m_pFreeObjHead =
             *_16EAllocBucketNode_m_bucketNodePool.field0_0x0.m_pFreeObjHead;
      }
                    /* inlined from c:/eor/src2/common/datastruc/e_allocbucket.h */
      __9EGrowPool(&pEVar2->m_elementPool);
                    /* end of inlined section */
      ppvVar3 = (void **)0x0;
      if (pEVar2 != (EAllocBucketNode *)0x0) {
                    /* inlined from c:/eor/src2/common/datastruc/e_growpool.h */
        uVar4 = 4;
        if (3 < (int)size) {
          uVar4 = size;
        }
        (pEVar2->m_elementPool).m_blockSize = uVar4;
                    /* end of inlined section */
        pEVar2->m_elementSize = size;
        pEVar2->m_pNext = *ppEVar5;
        *ppEVar5 = pEVar2;
                    /* inlined from c:/eor/src2/common/datastruc/e_growpool.h */
        ppvVar3 = (void **)(pEVar2->m_elementPool).m_pFreeObjHead;
LAB_0032d26c:
        if (ppvVar3 == (void **)0x0) {
          ppvVar3 = (void **)AllocNewSeg__9EGrowPool(&pEVar2->m_elementPool);
        }
        else {
          (pEVar2->m_elementPool).m_pFreeObjHead = *ppvVar3;
        }
        pEVar1 = (this->m_mutex).field0_0x0.__vtable;
        (*(code *)pEVar1[1].Acquire)
                  ((int)&(this->m_mutex).field0_0x0.__vtable + (int)*(short *)&pEVar1[1].ESyncObject
                  );
                    /* end of inlined section */
      }
      return ppvVar3;
    }
    if (size == pEVar2->m_elementSize) {
      if (pEVar2 != (EAllocBucketNode *)0x0) {
        ppvVar3 = (void **)(pEVar2->m_elementPool).m_pFreeObjHead;
        goto LAB_0032d26c;
      }
      goto LAB_0032d208;
    }
    pEVar2 = pEVar2->m_pNext;
  } while( true );
}

void EAllocBucket::Free(void *pAddress, u32 size, u32 hashKey) {
	EAllocBucketNode *pNode;
	EMutex *this;
	void *p;
	
  EAllocBucketNode *pEVar1;
  ESyncObject__vtable *pEVar2;
  
  if (pAddress != (void *)0x0) {
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
    pEVar2 = (this->m_mutex).field0_0x0.__vtable;
    (**(code **)(pEVar2 + 1))
              ((int)&(this->m_mutex).field0_0x0.__vtable + (int)*(short *)&pEVar2->Release,
               0xffffffffffffffff);
                    /* end of inlined section */
    for (pEVar1 = this->m_pHashTable[hashKey];
        (pEVar1 != (EAllocBucketNode *)0x0 && (size != pEVar1->m_elementSize));
        pEVar1 = pEVar1->m_pNext) {
    }
                    /* inlined from c:/eor/src2/common/datastruc/e_growpool.h */
    if (pAddress == (void *)0x0) {
      pEVar2 = (this->m_mutex).field0_0x0.__vtable;
    }
    else {
      *(void **)pAddress = (pEVar1->m_elementPool).m_pFreeObjHead;
      (pEVar1->m_elementPool).m_pFreeObjHead = pAddress;
      pEVar2 = (this->m_mutex).field0_0x0.__vtable;
    }
    (*(code *)pEVar2[1].Acquire)
              ((int)&(this->m_mutex).field0_0x0.__vtable + (int)*(short *)&pEVar2[1].ESyncObject);
  }
                    /* end of inlined section */
  return;
}

void EAllocBucket::FreeUnusedSegments() {
	EGlobalManagerClient *this;
	EMutex *this;
	int h;
	EAllocBucketNode *pNode;
	
  ESyncObject__vtable *pEVar1;
  int iVar2;
  int iVar3;
  
                    /* inlined from /eor/src2/common/util/e_globalmanagerclient.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/util/e_globalmanagerclient.h */
  if (__14EGlobalManager_m_startupComplete == 0) {
    Startup__14EGlobalManager();
  }
  pEVar1 = (this->m_mutex).field0_0x0.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
  (**(code **)(pEVar1 + 1))
            ((int)&(this->m_mutex).field0_0x0.__vtable + (int)*(short *)&pEVar1->Release,
             0xffffffffffffffff);
                    /* end of inlined section */
  iVar3 = 0;
  iVar2 = 0;
  do {
    iVar3 = iVar3 + 1;
    for (iVar2 = *(int *)((int)this->m_pHashTable + iVar2); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4))
    {
      FreeUnusedSegments__9EGrowPool((EGrowPool *)(iVar2 + 8));
    }
    iVar2 = iVar3 * 4;
  } while (iVar3 < 0x35);
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
  pEVar1 = (this->m_mutex).field0_0x0.__vtable;
  (*(code *)pEVar1[1].Acquire)
            ((int)&(this->m_mutex).field0_0x0.__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
  return;
}

void* _allocBucketAlloc(u32 size, u32 hashKey) {
  void *pvVar1;
  
                    /* end of inlined section */
  pvVar1 = Alloc__12EAllocBucketUiUi(&_allocBucket,size,hashKey);
  return pvVar1;
}

void _allocBucketFree(void *pAddress, u32 size, u32 hashKey) {
  Free__12EAllocBucketPvUiUi(&_allocBucket,pAddress,size,hashKey);
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
	int blockSize;
	
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___12EAllocBucket(&_allocBucket,2);
      ___9EGrowPool(&_16EAllocBucketNode_m_bucketNodePool.field0_0x0,2);
    }
    else {
                    /* inlined from c:/eor/src2/common/datastruc/e_growpool.h */
      __9EGrowPool(&_16EAllocBucketNode_m_bucketNodePool.field0_0x0);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/datastruc/e_growpool.h */
      _16EAllocBucketNode_m_bucketNodePool.field0_0x0.m_blockSize = 0x14;
                    /* end of inlined section */
      __12EAllocBucket(&_allocBucket);
    }
  }
  return;
}

void EGlobalManagerClient::~EGlobalManagerClient(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (EGlobalManagerClient__vtable *)_vt_20EGlobalManagerClient;
  Shutdown__20EGlobalManagerClient(this);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void EGlobalManagerClient::Shutdown() {
  if (__14EGlobalManager_m_shutdownComplete == 0) {
    Shutdown__14EGlobalManager();
  }
  return;
}

bool EGlobalManagerClient::ManagedStartup() {
  return true;
}

void EGlobalManagerClient::ManagedShutdown() {
  return;
}

void* EAllocBucket::Alloc(u32 size) {
  void *pvVar1;
  
  pvVar1 = Alloc__12EAllocBucketUiUi(this,size,(int)size % 0x35);
  return pvVar1;
}

void EAllocBucket::Free(void *pAddress, u32 size) {
  Free__12EAllocBucketPvUiUi(this,pAddress,size,(int)size % 0x35);
  return;
}

void global constructors keyed to EAllocBucketNode::m_bucketNodePool() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to EAllocBucketNode::m_bucketNodePool() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}
