// STATUS: NOT STARTED

#include "e_ps2audiosampleman.h"

struct TGrowPool2<SPUBlock,64> : private __TGrowPool2Impl {
private:
	SUBBLOCK *m_pBlockList;
	SUBNODE *m_pFreeNodeList;
	
public:
	TGrowPool2<SPUBlock,64>& operator=();
	TGrowPool2();
	TGrowPool2();
	TGrowPool2(TGrowPool2<SPUBlock,64>*, int, void);
	SPUBlock* Alloc();
	void Dealloc();
	void Reset();
private:
	void addBlock();
};

struct SPUBlock {
	SPUBlock *pLower;
	SPUBlock *pUpper;
	SPUBlock *pPrevFree;
	SPUBlock *pNextFree;
	u32 uAddr;
private:
	static TGrowPool2<SPUBlock,64> m_pool;
	
public:
	SPUBlock& operator=();
	SPUBlock();
	SPUBlock();
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	u32 GetSize();
	void Print();
	bool isFreeBlock();
};

EPS2AudioSampleManager _ps2audiosampleman = {
	/* base class 0 = */ {
		/* base class 0 = */ {
			/* .m_dataMutex = */ {
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
			/* .m_resourceMap = */ {
				/* base class 0 = */ {
					/* .m_list = */ {
						/* .m_pHead = */ NULL,
						/* .m_pTail = */ NULL
					},
					/* .m_pRoot = */ NULL
				}
			},
			/* .m_dataType = */ {
				/* .m_p = */ NULL
			},
			/* .m_path = */ {
				/* .m_p = */ NULL
			},
			/* .m_initialized = */ false,
			/* .m_pIndex = */ NULL,
			/* .m_pArchiveFile = */ NULL,
			/* .m_bSeqAccess = */ false,
			/* .m_pLast = */ NULL,
			/* .m_pNext = */ NULL,
			/* .$vf1914 = */ NULL
		}
	},
	/* .m_pBlockList = */ NULL,
	/* .m_pFreeList = */ NULL,
	/* .m_bLoopedList = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0,
		/* [4] = */ 0,
		/* [5] = */ 0,
		/* [6] = */ 0,
		/* [7] = */ 0,
		/* [8] = */ 0,
		/* [9] = */ 0,
		/* [10] = */ 0,
		/* [11] = */ 0,
		/* [12] = */ 0,
		/* [13] = */ 0,
		/* [14] = */ 0,
		/* [15] = */ 0,
		/* [16] = */ 0,
		/* [17] = */ 0,
		/* [18] = */ 0,
		/* [19] = */ 0,
		/* [20] = */ 0,
		/* [21] = */ 0,
		/* [22] = */ 0,
		/* [23] = */ 0,
		/* [24] = */ 0,
		/* [25] = */ 0,
		/* [26] = */ 0,
		/* [27] = */ 0,
		/* [28] = */ 0,
		/* [29] = */ 0,
		/* [30] = */ 0,
		/* [31] = */ 0
	},
	/* .m_loopedListWriter = */ 0,
	/* .m_loopedListReader = */ 0
};

TGrowPool2<SPUBlock,64> SPUBlock::m_pool = {
	/* base class 0 = */ {
	},
	/* .m_pBlockList = */ NULL,
	/* .m_pFreeNodeList = */ NULL
};

__vtbl_ptr_type EPS2AudioSampleManager virtual table[10] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPS2AudioSampleManager::~EPS2AudioSampleManager,
		/* .__delta2 = */ 30480
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPS2AudioSampleManager::Init,
		/* .__delta2 = */ 30568
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPS2AudioSampleManager::Shutdown,
		/* .__delta2 = */ 30656
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPS2AudioSampleManager::AllocateAndLoadResource,
		/* .__delta2 = */ 31296
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResourceManager::AllocateAndLoadResource,
		/* .__delta2 = */ 17888
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPS2AudioSampleManager::AddRef,
		/* .__delta2 = */ 30720
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPS2AudioSampleManager::AddRefAsync,
		/* .__delta2 = */ 30960
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPS2AudioSampleManager::GetRefAsync,
		/* .__delta2 = */ 31192
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EAudioSampleManager virtual table[10] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EAudioSampleManager::~EAudioSampleManager,
		/* .__delta2 = */ 30280
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResourceManager::Init,
		/* .__delta2 = */ 13824
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
		/* .__pfn = */ &EResourceManager::AllocateAndLoadResource,
		/* .__delta2 = */ 17928
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResourceManager::AllocateAndLoadResource,
		/* .__delta2 = */ 17888
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

static float cPi = 3.14159274f;
static double cdPi = 3.1415927410125732;
static float cGravity = 32.2f;
static u32 cScratchPadBase = 0;
static u32 cScratchPadSize = 16384;
EAudioSampleManager *_pAudiosampleman = NULL;

EAudioSampleManager* EAudioSampleManager::EAudioSampleManager() {
  __16EResourceManager(&this->field0_0x0);
  (this->field0_0x0).__vtable = (EResourceManager__vtable *)_vt_19EAudioSampleManager;
  _pAudiosampleman = this;
  return this;
}

void EAudioSampleManager::~EAudioSampleManager(int __in_chrg) {
  (this->field0_0x0).__vtable = (EResourceManager__vtable *)_vt_19EAudioSampleManager;
  ___16EResourceManager(&this->field0_0x0,__in_chrg);
  return;
}

EPS2AudioSampleManager* EPS2AudioSampleManager::EPS2AudioSampleManager() {
  __19EAudioSampleManager(&this->field0_0x0);
  (this->field0_0x0).field0_0x0.__vtable = (EResourceManager__vtable *)_vt_22EPS2AudioSampleManager;
  *(undefined4 *)&(this->field0_0x0).field0_0x0.m_bSeqAccess = 1;
  this->m_pFreeList = (SPUBlock *)0x0;
  this->m_pBlockList = (SPUBlock *)0x0;
  this->m_loopedListReader = 0;
  this->m_loopedListWriter = 0;
  return this;
}

void EPS2AudioSampleManager::~EPS2AudioSampleManager(int __in_chrg) {
  (this->field0_0x0).field0_0x0.__vtable = (EResourceManager__vtable *)_vt_22EPS2AudioSampleManager;
  ___19EAudioSampleManager(&this->field0_0x0,__in_chrg);
  return;
}

void EPS2AudioSampleManager::Init(char *szDataType) {
  heapInit__22EPS2AudioSampleManager(this);
  Init__16EResourceManagerPCc((EResourceManager *)this,szDataType);
  return;
}

void EPS2AudioSampleManager::Shutdown() {
  Shutdown__16EResourceManager((EResourceManager *)this);
  return;
}

ERSampledata* EPS2AudioSampleManager::AddRef(u32 id, bool bLoopedSample) {
	EAutoMutex mutex;
	
  bool bVar1;
  int iVar2;
  ERSampledata *pEVar3;
  int iVar4;
  EAutoMutex mutex;
  
  bVar1 = IsLoaded__16EResourceManagerUi((EResourceManager *)this,id);
  if (!bVar1) {
    __10EAutoMutexR6EMutex(&mutex,(EMutex *)this);
    this->m_bLoopedList[this->m_loopedListWriter] = bLoopedSample;
    iVar2 = this->m_loopedListWriter + 1;
    iVar4 = iVar2;
    if (iVar2 < 0) {
      iVar4 = this->m_loopedListWriter + 0x20;
    }
    this->m_loopedListWriter = iVar2 + (iVar4 >> 5) * -0x20;
    ___10EAutoMutex(&mutex,2);
  }
  pEVar3 = (ERSampledata *)
           AddRef__16EResourceManagerUiP5EFilei((EResourceManager *)this,id,(EFile *)0x0,0);
  return pEVar3;
}

ERSampledata* EPS2AudioSampleManager::AddRefAsync(u32 id, bool bLoopedSample) {
	EAutoMutex mutex;
	
  bool bVar1;
  int iVar2;
  ERSampledata *pEVar3;
  int iVar4;
  EAutoMutex mutex;
  
  bVar1 = IsLoaded__16EResourceManagerUi((EResourceManager *)this,id);
  if (!bVar1) {
    __10EAutoMutexR6EMutex(&mutex,(EMutex *)this);
    this->m_bLoopedList[this->m_loopedListWriter] = bLoopedSample;
    iVar2 = this->m_loopedListWriter + 1;
    iVar4 = iVar2;
    if (iVar2 < 0) {
      iVar4 = this->m_loopedListWriter + 0x20;
    }
    this->m_loopedListWriter = iVar2 + (iVar4 >> 5) * -0x20;
    ___10EAutoMutex(&mutex,2);
  }
  pEVar3 = (ERSampledata *)AddRefAsync__16EResourceManagerUi((EResourceManager *)this,id);
  return pEVar3;
}

ERSampledata* EPS2AudioSampleManager::GetRefAsync(u32 id, bool bWait) {
  ERSampledata *pEVar1;
  
  pEVar1 = (ERSampledata *)GetRefAsync__16EResourceManagerUib((EResourceManager *)this,id,bWait);
  return pEVar1;
}

EResource* EPS2AudioSampleManager::AllocateAndLoadResource(EFile *pFile, u32 uLength) {
	ERSampledata *result;
	u32 uAddr;
	bool bLoopingSample;
	EAutoMutex mutex;
	
  bool bLoopedSample;
  uint uLoadAddr;
  int iVar1;
  ERSampledata *pEVar2;
  VAGheader *pVVar3;
  long lVar4;
  int iVar5;
  ERSampledata *result;
  uint uAddr;
  bool bLoopingSample;
  EAutoMutex mutex;
  
  uLoadAddr = heapAlloc__22EPS2AudioSampleManagerUi(this,uLength - 0x40);
  bLoopedSample = false;
  if (pFile == (this->field0_0x0).field0_0x0.m_pArchiveFile) {
    __10EAutoMutexR6EMutex(&mutex,(EMutex *)this);
    bLoopedSample = this->m_bLoopedList[this->m_loopedListReader] != '\0';
    iVar1 = this->m_loopedListReader + 1;
    iVar5 = iVar1;
    if (iVar1 < 0) {
      iVar5 = this->m_loopedListReader + 0x20;
    }
    this->m_loopedListReader = iVar1 + (iVar5 >> 5) * -0x20;
    ___10EAutoMutex(&mutex,2);
  }
  if (uLoadAddr == 0) {
    pEVar2 = (ERSampledata *)__nw__12ERSampledataUi(0x18);
    result = __12ERSampledata(pEVar2);
    pVVar3 = (VAGheader *)__nw__9VAGheaderUi(0x40);
    result->m_pHeader = pVVar3;
    result->m_pHeader->ssa = 0x5000;
    result->m_pHeader->ADSR1 = 0xf;
    result->m_pHeader->ADSR2 = 0x1fc0;
    result->m_pHeader->volL = 0x3fff;
    result->m_pHeader->volR = 0x3fff;
    result->m_pHeader->pitch = 0x1000;
    strcpy(result->m_pHeader->name,"OUT OF MEM");
    __as__7EStringPCc(&(result->field0_0x0).m_name,result->m_pHeader->name);
    (*(code *)pFile->__vtable->GetAccessMode)
              ((int)&pFile->__vtable + (int)*(short *)&pFile->__vtable->GetIOMode,uLength,1);
  }
  else {
    pEVar2 = (ERSampledata *)__nw__12ERSampledataUi(0x18);
    result = __12ERSampledata(pEVar2);
    Load__12ERSampledataP5EFile(result,pFile);
    result->m_pHeader->ssa = uLoadAddr;
    if ((result->m_pHeader->ADSR1 == 0) && (result->m_pHeader->ADSR2 == 0)) {
      result->m_pHeader->ADSR1 = 0xf;
      result->m_pHeader->ADSR2 = 0x1fc0;
    }
    if ((result->m_pHeader->volL == 0) && (result->m_pHeader->volR == 0)) {
      result->m_pHeader->volL = 0x3fff;
      result->m_pHeader->volR = 0x3fff;
    }
    if (result->m_pHeader->pitch == 0) {
      if (result->m_pHeader->fs == 0) {
        result->m_pHeader->pitch = 0x1000;
      }
      else {
        pVVar3 = result->m_pHeader;
        lVar4 = __divdi3((ulong)result->m_pHeader->fs << 0xc,48000);
        pVVar3->pitch = (short)lVar4;
      }
    }
    readStream__22EPS2AudioSampleManagerP5EFileiUib
              (this,pFile,uLength - 0x40,uLoadAddr,bLoopedSample);
  }
  return &result->field0_0x0;
}

void EPS2AudioSampleManager::OnDelRef(ERSampledata *pSample) {
  if (pSample->m_pHeader->ssa != 0x5000) {
    heapFree__22EPS2AudioSampleManagerUi(this,pSample->m_pHeader->ssa);
  }
  pSample->m_pHeader->ssa = 0;
  return;
}

int EPS2AudioSampleManager::readStream(EFile *pFile, int size, u32 uLoadAddr, bool bLoopedSample) {
	EFSRead desc;
	ESleep sleeper;
	int result;
	int retcode;
	
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_dc;
  EFSRead desc;
  ESleep sleeper;
  int result;
  int retcode;
  
  __6ESleep(&sleeper);
  desc.field0_0x0.size = 0x28;
  desc.field0_0x0._8_8_ = CONCAT71(desc.field0_0x0._9_7_,10);
  desc.field0_0x0._8_8_ = desc.field0_0x0._8_8_ & 0xffffffffffc0ffff | 0x20000;
  uVar1 = (*(code *)pFile->__vtable->GetDrive)
                    ((int)&pFile->__vtable + (int)*(short *)&pFile->__vtable->GetDeviceType);
  desc.field0_0x0._8_8_ = desc.field0_0x0._8_8_ & 0xffffffff | (ulong)uVar1 << 0x20;
  desc.flags = 0;
  desc.field0_0x0.id =
       (*(code *)pFile->__vtable[1].GetExt)
                 ((int)&pFile->__vtable + (int)*(short *)&pFile->__vtable[1].GetName);
  iVar3 = size;
  if (size < 0) {
    iVar3 = size + 0xfff;
  }
  desc.numBytes = size + (iVar3 >> 0xc) * -0x1000;
  if ((desc.numBytes == 0) && (size != 0)) {
    desc.numBytes = 0x1000;
  }
  local_dc = size;
  if (bLoopedSample) {
    desc.flags = desc.flags | 6;
    local_dc = size - 0x40;
    uVar1 = local_dc;
    if ((int)local_dc < 0) {
      uVar1 = size + 0xfbf;
    }
    desc.numBytes = local_dc + ((int)uVar1 >> 0xc) * -0x1000;
    if ((desc.numBytes == 0) && (local_dc != 0)) {
      desc.numBytes = 0x1000;
    }
  }
  if (desc.numBytes == local_dc) {
    desc.flags = desc.flags | 8;
  }
  result = 0;
  desc.addr = (void *)uLoadAddr;
  if (desc.numBytes != 0) {
    do {
      iVar3 = ReadStream__16EPs2IOPInterfaceRC7EFSRead(&_ps2IOPInterface,&desc);
      if (iVar3 < 1) {
        if (-1 < iVar3) break;
        Sleep__6ESleepUi(&sleeper,10);
      }
      else {
        result = result + iVar3;
        desc.addr = (void *)((int)desc.addr + iVar3);
        desc.field0_0x0._8_8_ =
             desc.field0_0x0._8_8_ & 0xffffffff | (ulong)(desc.field0_0x0.pos + iVar3) << 0x20;
        iVar2 = local_dc - result;
        iVar3 = iVar2;
        if (iVar2 < 0) {
          iVar3 = iVar2 + 0xfff;
        }
        desc.numBytes = iVar2 + (iVar3 >> 0xc) * -0x1000;
        if (desc.numBytes == 0) {
          desc.numBytes = 0x1000;
        }
        if (bLoopedSample) {
          desc.flags = desc.flags & 0xfffffff9 | 2;
        }
        if (desc.numBytes == local_dc - result) {
          desc.flags = desc.flags | 8;
        }
      }
    } while (result < (int)local_dc);
  }
  if (bLoopedSample) {
    result = result + 0x40;
  }
  (*(code *)pFile->__vtable->GetAccessMode)
            ((int)&pFile->__vtable + (int)*(short *)&pFile->__vtable->GetIOMode,result,1);
  ___6ESleep(&sleeper,2);
  return result;
}

void EPS2AudioSampleManager::heapInit() {
	SPUBlock *first;
	SPUBlock *middle;
	SPUBlock *last;
	
  SPUBlock *pSVar1;
  SPUBlock *pSVar2;
  SPUBlock *pSVar3;
  SPUBlock *first;
  SPUBlock *middle;
  SPUBlock *last;
  
  pSVar1 = (SPUBlock *)__nw__8SPUBlockUi(0x14);
  this->m_pBlockList = pSVar1;
  pSVar2 = (SPUBlock *)__nw__8SPUBlockUi(0x14);
  this->m_pFreeList = pSVar2;
  pSVar3 = (SPUBlock *)__nw__8SPUBlockUi(0x14);
  pSVar1->pLower = (SPUBlock *)0x0;
  pSVar1->pUpper = pSVar2;
  pSVar1->pNextFree = (SPUBlock *)0x0;
  pSVar1->pPrevFree = (SPUBlock *)0x0;
  pSVar1->uAddr = 0x5000;
  pSVar2->pLower = pSVar1;
  pSVar2->pUpper = pSVar3;
  pSVar2->pNextFree = (SPUBlock *)0x0;
  pSVar2->pPrevFree = (SPUBlock *)0x0;
  pSVar2->uAddr = 0x5040;
  pSVar3->pLower = pSVar2;
  pSVar3->pUpper = (SPUBlock *)0x0;
  pSVar3->pNextFree = (SPUBlock *)0x0;
  pSVar3->pPrevFree = (SPUBlock *)0x0;
  pSVar3->uAddr = 0x200000;
  return;
}

u32 EPS2AudioSampleManager::heapAlloc(u32 size) {
	EAutoMutex mutex;
	u32 result;
	SPUBlock *node;
	u32 bsize;
	s32 diff;
	SPUBlock *newblock;
	
  uint uVar1;
  int iVar2;
  SPUBlock *pSVar3;
  EAutoMutex mutex;
  uint result;
  SPUBlock *node;
  uint bsize;
  int diff;
  SPUBlock *newblock;
  
  __10EAutoMutexR6EMutex(&mutex,(EMutex *)this);
  result = 0;
  node = this->m_pFreeList;
  do {
    if (node == (SPUBlock *)0x0) {
LAB_00298484:
      ___10EAutoMutex(&mutex,2);
      return result;
    }
    uVar1 = GetSize__8SPUBlock(node);
    iVar2 = uVar1 - size;
    if (-1 < iVar2) {
      if (iVar2 == 0) {
        if (node->pPrevFree == (SPUBlock *)0x0) {
          this->m_pFreeList = node->pNextFree;
        }
        else {
          node->pPrevFree->pNextFree = node->pNextFree;
        }
        if (node->pNextFree != (SPUBlock *)0x0) {
          node->pNextFree->pPrevFree = node->pPrevFree;
        }
        node->pNextFree = (SPUBlock *)0x0;
        node->pPrevFree = (SPUBlock *)0x0;
        result = node->uAddr;
      }
      else {
        pSVar3 = (SPUBlock *)__nw__8SPUBlockUi(0x14);
        pSVar3->pLower = node;
        pSVar3->pUpper = node->pUpper;
        pSVar3->pNextFree = (SPUBlock *)0x0;
        pSVar3->pPrevFree = (SPUBlock *)0x0;
        pSVar3->uAddr = node->uAddr + iVar2;
        node->pUpper->pLower = pSVar3;
        node->pUpper = pSVar3;
        heapResortSmaller__22EPS2AudioSampleManagerP8SPUBlock(this,node);
        result = pSVar3->uAddr;
      }
      goto LAB_00298484;
    }
    node = node->pNextFree;
  } while( true );
}

void EPS2AudioSampleManager::heapResortSmaller(SPUBlock *node) {
	u32 nodeSize;
	SPUBlock *prev;
	
  SPUBlock *pSVar1;
  uint uVar2;
  uint uVar3;
  uint nodeSize;
  SPUBlock *prev;
  
  uVar2 = GetSize__8SPUBlock(node);
  prev = node->pPrevFree;
  if (prev != (SPUBlock *)0x0) {
    do {
      uVar3 = GetSize__8SPUBlock(prev);
      if (uVar3 <= uVar2) {
        if (prev == node->pPrevFree) {
          return;
        }
        pSVar1 = node->pNextFree;
        node->pPrevFree->pNextFree = pSVar1;
        if (pSVar1 != (SPUBlock *)0x0) {
          node->pNextFree->pPrevFree = node->pPrevFree;
        }
        node->pPrevFree = prev;
        node->pNextFree = prev->pNextFree;
        prev->pNextFree = node;
        node->pNextFree->pPrevFree = node;
        return;
      }
      prev = prev->pPrevFree;
    } while (prev != (SPUBlock *)0x0);
    pSVar1 = node->pNextFree;
    node->pPrevFree->pNextFree = pSVar1;
    if (pSVar1 != (SPUBlock *)0x0) {
      node->pNextFree->pPrevFree = node->pPrevFree;
    }
    node->pPrevFree = (SPUBlock *)0x0;
    pSVar1 = this->m_pFreeList;
    node->pNextFree = pSVar1;
    if (pSVar1 != (SPUBlock *)0x0) {
      this->m_pFreeList->pPrevFree = node;
    }
    this->m_pFreeList = node;
  }
  return;
}

void EPS2AudioSampleManager::heapResortLarger(SPUBlock *node) {
	u32 nodeSize;
	SPUBlock *next;
	SPUBlock *last;
	
  SPUBlock *pSVar1;
  uint uVar2;
  uint uVar3;
  uint nodeSize;
  SPUBlock *next;
  SPUBlock *last;
  
  uVar2 = GetSize__8SPUBlock(node);
  pSVar1 = node->pNextFree;
  if (node->pNextFree != (SPUBlock *)0x0) {
    do {
      next = pSVar1;
      uVar3 = GetSize__8SPUBlock(next);
      if (uVar2 <= uVar3) {
        if (next == node->pNextFree) {
          return;
        }
        if (node->pPrevFree == (SPUBlock *)0x0) {
          this->m_pFreeList = node->pNextFree;
        }
        else {
          node->pPrevFree->pNextFree = node->pNextFree;
        }
        if (node->pNextFree != (SPUBlock *)0x0) {
          node->pNextFree->pPrevFree = node->pPrevFree;
        }
        node->pNextFree = next;
        node->pPrevFree = next->pPrevFree;
        next->pPrevFree = node;
        node->pPrevFree->pNextFree = node;
        return;
      }
      pSVar1 = next->pNextFree;
    } while (next->pNextFree != (SPUBlock *)0x0);
    if (node->pPrevFree == (SPUBlock *)0x0) {
      this->m_pFreeList = node->pNextFree;
    }
    else {
      node->pPrevFree->pNextFree = node->pNextFree;
    }
    node->pNextFree->pPrevFree = node->pPrevFree;
    next->pNextFree = node;
    node->pNextFree = (SPUBlock *)0x0;
    node->pPrevFree = next;
  }
  return;
}

SPUBlock* EPS2AudioSampleManager::heapFindBlock(u32 uAddr) {
	SPUBlock *result;
	
  SPUBlock *result;
  
  for (result = this->m_pBlockList; (result != (SPUBlock *)0x0 && (result->uAddr != uAddr));
      result = result->pUpper) {
  }
  return result;
}

bool EPS2AudioSampleManager::heapIsFreeBlock(SPUBlock *node) {
  bool bVar1;
  
  bVar1 = false;
  if (((node->pNextFree != (SPUBlock *)0x0) || (node->pPrevFree != (SPUBlock *)0x0)) ||
     (node == this->m_pFreeList)) {
    bVar1 = true;
  }
  return bVar1;
}

void EPS2AudioSampleManager::heapFree(u32 uAddr) {
	EAutoMutex mutex;
	SPUBlock *node;
	SPUBlock *upper;
	SPUBlock *lower;
	
  SPUBlock *pSVar1;
  bool bVar2;
  EAutoMutex mutex;
  SPUBlock *node;
  SPUBlock *lower;
  
  __10EAutoMutexR6EMutex(&mutex,(EMutex *)this);
  node = heapFindBlock__C22EPS2AudioSampleManagerUi(this,uAddr);
  bVar2 = heapIsFreeBlock__C22EPS2AudioSampleManagerPC8SPUBlock(this,node->pUpper);
  if (bVar2) {
    pSVar1 = node->pUpper;
    node->pUpper = pSVar1->pUpper;
    pSVar1->pUpper->pLower = node;
    if (pSVar1->pPrevFree == (SPUBlock *)0x0) {
      this->m_pFreeList = pSVar1->pNextFree;
    }
    else {
      pSVar1->pPrevFree->pNextFree = pSVar1->pNextFree;
    }
    if (pSVar1->pNextFree != (SPUBlock *)0x0) {
      pSVar1->pNextFree->pPrevFree = pSVar1->pPrevFree;
    }
    __dl__8SPUBlockPv(pSVar1);
  }
  bVar2 = heapIsFreeBlock__C22EPS2AudioSampleManagerPC8SPUBlock(this,node->pLower);
  if (bVar2) {
    pSVar1 = node->pLower;
    pSVar1->pUpper = node->pUpper;
    node->pUpper->pLower = pSVar1;
    __dl__8SPUBlockPv(node);
    node = pSVar1;
  }
  else {
    pSVar1 = this->m_pFreeList;
    node->pNextFree = pSVar1;
    if (pSVar1 != (SPUBlock *)0x0) {
      node->pNextFree->pPrevFree = node;
    }
    this->m_pFreeList = node;
  }
  heapResortLarger__22EPS2AudioSampleManagerP8SPUBlock(this,node);
  ___10EAutoMutex(&mutex,2);
  return;
}

bool EPS2AudioSampleManager::heapWalk(bool bPrint) {
	SPUBlock *node;
	
  SPUBlock *pSVar1;
  bool bVar2;
  uint uVar3;
  SPUBlock *node;
  
  node = this->m_pBlockList->pUpper;
  do {
    if (bPrint) {
      Print__8SPUBlock(node);
    }
    if (((node->pUpper->pLower != node) || (node->pLower->pUpper != node)) ||
       (uVar3 = GetSize__8SPUBlock(node), uVar3 == 0)) goto LAB_00298d64;
    bVar2 = isFreeBlock__C8SPUBlock(node);
    if (bVar2) {
      if (node->pPrevFree == (SPUBlock *)0x0) {
        pSVar1 = this->m_pFreeList;
      }
      else {
        pSVar1 = node->pPrevFree->pNextFree;
      }
      if ((node != pSVar1) ||
         ((node->pNextFree != (SPUBlock *)0x0 && (node->pNextFree->pPrevFree != node))))
      goto LAB_00298d64;
    }
    node = node->pUpper;
  } while (node->pUpper != (SPUBlock *)0x0);
  node = this->m_pFreeList;
  if ((node == (SPUBlock *)0x0) || (node->pPrevFree == (SPUBlock *)0x0)) {
    for (; node != (SPUBlock *)0x0; node = node->pNextFree) {
      if (bPrint) {
        Print__8SPUBlock(node);
      }
      if (((node->pPrevFree != (SPUBlock *)0x0) && (node->pPrevFree->pNextFree != node)) ||
         ((node->pNextFree != (SPUBlock *)0x0 && (node->pNextFree->pPrevFree != node))))
      goto LAB_00298d64;
    }
    bVar2 = true;
  }
  else {
LAB_00298d64:
    bVar2 = false;
  }
  return bVar2;
}

TGrowPool2<SPUBlock,64>* TGrowPool2<SPUBlock, 64>::TGrowPool2() {
  this->m_pBlockList = (SUBBLOCK *)0x0;
  this->m_pFreeNodeList = (SUBNODE *)0x0;
  return this;
}

void TGrowPool2<SPUBlock, 64>::Reset() {
	SUBBLOCK *node;
	
  SUBBLOCK *node;
  
  node = this->m_pBlockList;
  while (node != (SUBBLOCK *)0x0) {
    this->m_pBlockList = node->pNext;
    _memmanFree__FPv(node);
    node = this->m_pBlockList;
  }
  this->m_pFreeNodeList = (SUBNODE *)0x0;
  return;
}

void TGrowPool2<SPUBlock, 64>::~TGrowPool2(int __in_chrg) {
  Reset__t10TGrowPool22Z8SPUBlocki64(this);
  if ((__in_chrg & 1U) != 0) {
    __builtin_delete(this);
  }
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___t10TGrowPool22Z8SPUBlocki64(&_8SPUBlock_m_pool,2);
      ___22EPS2AudioSampleManager(&_ps2audiosampleman,2);
    }
    else {
      __22EPS2AudioSampleManager(&_ps2audiosampleman);
      __t10TGrowPool22Z8SPUBlocki64(&_8SPUBlock_m_pool);
    }
  }
  return;
}

void __builtin_delete(void *pAddress) {
  _memmanFree__FPv(pAddress);
  return;
}

EAutoMutex* EAutoMutex::EAutoMutex(EMutex &mutex) {
  ESyncObject__vtable *pEVar1;
  
  this->m_mutex = mutex;
  pEVar1 = (mutex->field0_0x0).__vtable;
  (**(code **)(pEVar1 + 1))
            ((int)&(mutex->field0_0x0).__vtable + (int)*(short *)&pEVar1->Release,0xffffffffffffffff
            );
  return this;
}

void EAutoMutex::~EAutoMutex(int __in_chrg) {
  ESyncObject__vtable *pEVar1;
  
  pEVar1 = (this->m_mutex->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Acquire)
            ((int)&(this->m_mutex->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
  if ((__in_chrg & 1U) != 0) {
    __builtin_delete(this);
  }
  return;
}

void* SPUBlock::operator new(unsigned int size) {
  SPUBlock *pSVar1;
  
  pSVar1 = Alloc__t10TGrowPool22Z8SPUBlocki64(&_8SPUBlock_m_pool);
  return pSVar1;
}

void SPUBlock::operator delete(void *ptr) {
  Dealloc__t10TGrowPool22Z8SPUBlocki64P8SPUBlock(&_8SPUBlock_m_pool,(SPUBlock *)ptr);
  return;
}

u32 SPUBlock::GetSize() {
  return this->pUpper->uAddr - this->uAddr;
}

void SPUBlock::Print() {
  return;
}

bool SPUBlock::isFreeBlock() {
  bool bVar1;
  
  bVar1 = heapIsFreeBlock__C22EPS2AudioSampleManagerPC8SPUBlock(&_ps2audiosampleman,this);
  return bVar1;
}

SPUBlock* TGrowPool2<SPUBlock, 64>::Alloc() {
	SUBNODE *result;
	
  SUBNODE *result;
  
  result = this->m_pFreeNodeList;
  if (result == (SUBNODE *)0x0) {
    addBlock__t10TGrowPool22Z8SPUBlocki64(this);
    result = this->m_pFreeNodeList;
  }
  this->m_pFreeNodeList = this->m_pFreeNodeList->pNext;
  return (SPUBlock *)result;
}

void TGrowPool2<SPUBlock, 64>::Dealloc(SPUBlock *_node) {
	SUBNODE *node;
	
  SUBNODE *node;
  
  _node->pLower = (SPUBlock *)this->m_pFreeNodeList;
  this->m_pFreeNodeList = (SUBNODE *)_node;
  return;
}

void TGrowPool2<SPUBlock, 64>::addBlock() {
	int trueSize;
	SUBBLOCK *node;
	SUBNODE *pSubNode;
	int i;
	
  SUBBLOCK *pSVar1;
  int trueSize;
  SUBBLOCK *node;
  SUBNODE *pSubNode;
  int i;
  
  pSVar1 = (SUBBLOCK *)_memmanAlloc__FUiUi(0x504,4);
  pSVar1->pNext = this->m_pBlockList;
  this->m_pBlockList = pSVar1;
  pSubNode = (SUBNODE *)(pSVar1 + 1);
  for (i = 0; i < 0x3f; i = i + 1) {
    pSubNode->pNext = pSubNode + 5;
    pSubNode = pSubNode->pNext;
  }
  pSubNode->pNext = this->m_pFreeNodeList;
  this->m_pFreeNodeList = (SUBNODE *)(pSVar1 + 1);
  return;
}

void global constructors keyed to _ps2audiosampleman() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to _ps2audiosampleman() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}
