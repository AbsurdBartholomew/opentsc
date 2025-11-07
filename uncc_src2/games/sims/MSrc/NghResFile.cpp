// STATUS: NOT STARTED

#include "NghResFile.h"

struct TableRef {
	u32 uOffset;
	u32 uNumEntries;
};

struct NghResFileHeader {
	u32 uSize;
	u32 uDataSize;
	u32 uVersion;
	u32 uChecksum;
	TableRef neighborhood;
	TableRef house[8];
	TableRef character;
};

struct NghResFileWriteInfo {
	NghResFileWriteInfo *pNext;
	HandleNode *handle;
	u16 resIndex;
	
	NghResFileWriteInfo& operator=();
	NghResFileWriteInfo();
	NghResFileWriteInfo();
	NghResFileWriteInfo(NghResFileWriteInfo*, int, void);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
};

struct TGrowPool<NghResFileWriteInfo> : EGrowPool {
	TGrowPool<NghResFileWriteInfo>& operator=();
	TGrowPool();
	TGrowPool(TGrowPool<NghResFileWriteInfo>*, int, void);
	TGrowPool();
	NghResFileWriteInfo* Alloc();
	void Free();
protected:
	void Free();
};

static int _NghResFileWriteInfoInstanceCount = 0;

static int _NghIndex[4] = {
	/* [0] = */ 1313292872,
	/* [1] = */ 1312969299,
	/* [2] = */ 1413567572,
	/* [3] = */ 1178684745
};

static int _HouseIndex[6] = {
	/* [0] = */ 1397312841,
	/* [1] = */ 1213158739,
	/* [2] = */ 1098019449,
	/* [3] = */ 1868720756,
	/* [4] = */ 1331849805,
	/* [5] = */ 1146441040
};

static int _UserIndex[2] = {
	/* [0] = */ 1433625970,
	/* [1] = */ 1953000802
};

__vtbl_ptr_type NghResFile virtual table[38] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NghResFile::~NghResFile,
		/* .__delta2 = */ -25760
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &iResFile::_dyncastimpl,
		/* .__delta2 = */ -13824
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NghResFile::Create,
		/* .__delta2 = */ -25592
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NghResFile::Delete,
		/* .__delta2 = */ -25560
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NghResFile::Open,
		/* .__delta2 = */ -25552
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NghResFile::CloseForReopen,
		/* .__delta2 = */ -25544
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NghResFile::Reopen,
		/* .__delta2 = */ -25536
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NghResFile::Close,
		/* .__delta2 = */ -25528
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NghResFile::Update,
		/* .__delta2 = */ -25520
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NghResFile::Writable,
		/* .__delta2 = */ -25512
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NghResFile::GetFileName,
		/* .__delta2 = */ -25504
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NghResFile::ValidFile,
		/* .__delta2 = */ -25496
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NghResFile::CountTypes,
		/* .__delta2 = */ -25488
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NghResFile::GetIndType,
		/* .__delta2 = */ -25480
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NghResFile::Count,
		/* .__delta2 = */ -25472
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NghResFile::GetByID,
		/* .__delta2 = */ -25392
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NghResFile::GetByName,
		/* .__delta2 = */ -25304
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NghResFile::GetByIndex,
		/* .__delta2 = */ -25296
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &iResFile::GetByIDAndLanguage,
		/* .__delta2 = */ -13912
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NghResFile::GetName,
		/* .__delta2 = */ -25184
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NghResFile::GetResType,
		/* .__delta2 = */ -25176
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NghResFile::GetID,
		/* .__delta2 = */ -25168
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NghResFile::GetIndex,
		/* .__delta2 = */ -25152
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &iResFile::GetLanguage,
		/* .__delta2 = */ -14104
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NghResFile::FindUniqueName,
		/* .__delta2 = */ -25144
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NghResFile::FindUniqueID,
		/* .__delta2 = */ -25136
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NghResFile::Detach,
		/* .__delta2 = */ -25128
	},
	/* [28] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NghResFile::Load,
		/* .__delta2 = */ -25120
	},
	/* [29] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NghResFile::IsLittleEndian,
		/* .__delta2 = */ -25112
	},
	/* [30] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NghResFile::SetID,
		/* .__delta2 = */ -25104
	},
	/* [31] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NghResFile::Add,
		/* .__delta2 = */ -25096
	},
	/* [32] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &iResFile::AddWithLanguage,
		/* .__delta2 = */ -14056
	},
	/* [33] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NghResFile::Write,
		/* .__delta2 = */ -24640
	},
	/* [34] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NghResFile::Remove,
		/* .__delta2 = */ -24632
	},
	/* [35] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NghResFile::SetInfo,
		/* .__delta2 = */ -24624
	},
	/* [36] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &iResFile::GetString,
		/* .__delta2 = */ -14592
	},
	/* [37] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

static TGrowPool<NghResFileWriteInfo> *_pNghResFileWriteInfoAllocator;

void* NghResFileWriteInfo::operator new(unsigned int size) {
	int blockSize;
	TGrowPool<NghResFileWriteInfo> *this;
	EGrowPool *this;
	void *p;
	
  EGrowPool *this;
  void **ppvVar1;
  
  _NghResFileWriteInfoInstanceCount = _NghResFileWriteInfoInstanceCount + 1;
  if (_NghResFileWriteInfoInstanceCount == 1) {
    this = (EGrowPool *)__builtin_new(0xc);
                    /* inlined from /eor/src2/common/datastruc/e_growpool.h */
    __9EGrowPool(this);
    _pNghResFileWriteInfoAllocator = (TGrowPool_NghResFileWriteInfo_ *)this;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_growpool.h */
    this->m_blockSize = 0xc;
  }
                    /* inlined from /eor/src2/common/datastruc/e_growpool.h */
  ppvVar1 = (void **)(_pNghResFileWriteInfoAllocator->field0_0x0).m_pFreeObjHead;
  if (ppvVar1 == (void **)0x0) {
    ppvVar1 = (void **)AllocNewSeg__9EGrowPool(&_pNghResFileWriteInfoAllocator->field0_0x0);
  }
  else {
    (_pNghResFileWriteInfoAllocator->field0_0x0).m_pFreeObjHead = *ppvVar1;
  }
                    /* end of inlined section */
  return ppvVar1;
}

void NghResFileWriteInfo::operator delete(void *ptr) {
	TGrowPool<NghResFileWriteInfo> *this;
	NghResFileWriteInfo *p;
	void *p;
	EGrowPool *this;
	
  TGrowPool_NghResFileWriteInfo_ *pTVar1;
  
  pTVar1 = _pNghResFileWriteInfoAllocator;
                    /* inlined from /eor/src2/common/datastruc/e_growpool.h */
  if (ptr != (void *)0x0) {
    *(void **)ptr = (_pNghResFileWriteInfoAllocator->field0_0x0).m_pFreeObjHead;
    (pTVar1->field0_0x0).m_pFreeObjHead = ptr;
  }
                    /* end of inlined section */
  _NghResFileWriteInfoInstanceCount = _NghResFileWriteInfoInstanceCount + -1;
  if (_NghResFileWriteInfoInstanceCount == 0) {
    if (_pNghResFileWriteInfoAllocator != (TGrowPool_NghResFileWriteInfo_ *)0x0) {
      ___9EGrowPool(&_pNghResFileWriteInfoAllocator->field0_0x0,3);
    }
    _pNghResFileWriteInfoAllocator = (TGrowPool_NghResFileWriteInfo_ *)0x0;
  }
  return;
}

u32 getCurrentbuildVerNum(int w, int x, int y, int z) {
  return w << 0x18 | x << 0x10 | y << 8 | z / 100;
}

int getNghIndex(s32 resType) {
	int i;
	
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = _NghIndex;
  do {
    if (resType == *piVar2) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 4);
  return -1;
}

int getHouseIndex(s32 resType) {
	int i;
	
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = _HouseIndex;
  do {
    if (resType == *piVar2) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 6);
  return -1;
}

int getUserIndex(s32 resType) {
	int i;
	
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = _UserIndex;
  do {
    if (resType == *piVar2) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 2);
  return -1;
}

static void deleteList(NghResFileWriteInfo *pList) {
	NghResFileWriteInfo *pNode;
	NghResFileWriteInfo *this;
	HandleNode *mem;
	
  NghResFileWriteInfo *pNVar1;
  HandleNode *pAddress;
  
  if (pList != (NghResFileWriteInfo *)0x0) {
    do {
      pNVar1 = pList->pNext;
      if (pList != (NghResFileWriteInfo *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
        pAddress = pList->handle;
        if (pAddress != (HandleNode *)0x0) {
          if (*(int *)&pAddress->owned != 0) {
            free(pAddress->ptr);
          }
          free(pAddress);
        }
                    /* end of inlined section */
        __dl__19NghResFileWriteInfoPv(pList);
      }
      pList = pNVar1;
    } while (pNVar1 != (NghResFileWriteInfo *)0x0);
  }
  return;
}

static u32 calculateDataSizeForList(NghResFileWriteInfo *pList, int &iNumEntries) {
	NghResFileWriteInfo *pNode;
	u32 result;
	int iCount;
	
  uint uVar1;
  HandleNode *pHVar2;
  int iVar3;
  
  uVar1 = 0;
  iVar3 = 0;
  if (pList != (NghResFileWriteInfo *)0x0) {
    pHVar2 = pList->handle;
    while( true ) {
      pList = pList->pNext;
      if (pHVar2 != (HandleNode *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
                    /* end of inlined section */
        iVar3 = iVar3 + 1;
        uVar1 = (uVar1 + 3 & 0xfffffffc) + pHVar2->allocSize;
      }
      if (pList == (NghResFileWriteInfo *)0x0) break;
      pHVar2 = pList->handle;
    }
  }
  *iNumEntries = iVar3;
  return uVar1;
}

NghResFile* NghResFile::NghResFile() {
  __8iResFile(&this->field0_0x0);
  this->m_uCurrentHouse = 0;
  this->m_pLastGetByIndexNode = (NghResFileWriteInfo *)0x0;
  (this->field0_0x0).__vtable = (iResFile__0_3211__vtable *)_vt_10NghResFile;
  init__10NghResFile(this);
  return this;
}

void NghResFile::~NghResFile(int __in_chrg) {
	int i;
	
  NghResFileWriteInfo **pAddress;
  NghResFileWriteInfo ***pppNVar1;
  int iVar2;
  
  (this->field0_0x0).__vtable = (iResFile__0_3211__vtable *)_vt_10NghResFile;
  reset__10NghResFile(this);
  if (this->m_ppNghWriteInfo == (NghResFileWriteInfo **)0x0) {
    pAddress = this->m_ppUserWriteInfo;
  }
  else {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this->m_ppNghWriteInfo);
                    /* end of inlined section */
    pAddress = this->m_ppUserWriteInfo;
  }
  pppNVar1 = this->m_ppHouseWriteInfo;
  if (pAddress != (NghResFileWriteInfo **)0x0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(pAddress);
  }
                    /* end of inlined section */
  iVar2 = 7;
  do {
    iVar2 = iVar2 + -1;
    if (*pppNVar1 != (NghResFileWriteInfo **)0x0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
      _memmanFree__FPv(*pppNVar1);
    }
                    /* end of inlined section */
    pppNVar1 = pppNVar1 + 1;
  } while (-1 < iVar2);
  ___8iResFile(&this->field0_0x0,__in_chrg);
  return;
}

ErrType NghResFile::Create(StringBuffer &path) {
  reset__10NghResFile(this);
  return 0;
}

ErrType NghResFile::Delete(StringBuffer &path) {
  return 0;
}

ErrType NghResFile::Open(StringBuffer &path) {
  return 0;
}

ErrType NghResFile::CloseForReopen() {
  return 0;
}

ErrType NghResFile::Reopen() {
  return 0;
}

ErrType NghResFile::Close() {
  return 0;
}

void NghResFile::Update() {
  return;
}

bool NghResFile::Writable() {
  return false;
}

void NghResFile::GetFileName(StringBuffer &name) {
  return;
}

bool NghResFile::ValidFile() {
  return true;
}

SInt16 NghResFile::CountTypes() {
  return 0;
}

SInt32 NghResFile::GetIndType(SInt16 index) {
  return 0;
}

SInt16 NghResFile::Count(SInt32 type) {
	NghResFileWriteInfo *pNode;
	Sint32 result;
	
  NghResFileWriteInfo *pNVar1;
  NghResFileWriteInfo **ppNVar2;
  ushort uVar3;
  
  ppNVar2 = findListByResType__10NghResFileUi(this,type);
  uVar3 = 0;
  for (pNVar1 = *ppNVar2; pNVar1 != (NghResFileWriteInfo *)0x0; pNVar1 = pNVar1->pNext) {
    uVar3 = uVar3 + 1;
  }
  return uVar3;
}

HandleNode* NghResFile::GetByID(SInt32 type, SInt16 id, SwizzleProc Swizzler) {
	NghResFileWriteInfo *pNode;
	
  ushort uVar1;
  NghResFileWriteInfo **ppNVar2;
  HandleNode *pHVar3;
  NghResFileWriteInfo *pNVar4;
  
  ppNVar2 = findListByResType__10NghResFileUi(this,type);
  pNVar4 = *ppNVar2;
  pHVar3 = (HandleNode *)0x0;
  if (pNVar4 != (NghResFileWriteInfo *)0x0) {
    uVar1 = pNVar4->resIndex;
    while ((uint)uVar1 != (int)(short)id) {
      pNVar4 = pNVar4->pNext;
      if (pNVar4 == (NghResFileWriteInfo *)0x0) {
        return (HandleNode *)0x0;
      }
      uVar1 = pNVar4->resIndex;
    }
    pHVar3 = pNVar4->handle;
  }
  return pHVar3;
}

HandleNode* NghResFile::GetByName(SInt32 type, StringBuffer &name, SwizzleProc Swizzler) {
  return (HandleNode *)0x0;
}

HandleNode* NghResFile::GetByIndex(SInt32 type, SInt16 index, SwizzleProc Swizzler) {
	NghResFileWriteInfo *pNode;
	Sint16 count;
	
  bool bVar1;
  NghResFileWriteInfo **ppNVar2;
  int iVar3;
  NghResFileWriteInfo *pNVar4;
  int iVar5;
  
  ppNVar2 = findListByResType__10NghResFileUi(this,type);
  pNVar4 = *ppNVar2;
  iVar3 = 1;
  if (pNVar4 != (NghResFileWriteInfo *)0x0) {
    iVar5 = 0x20000;
    do {
      bVar1 = iVar3 == (short)index;
      iVar3 = iVar5 >> 0x10;
      if (bVar1) {
        this->m_pLastGetByIndexNode = pNVar4;
        return pNVar4->handle;
      }
      pNVar4 = pNVar4->pNext;
      iVar5 = iVar5 + 0x10000;
    } while (pNVar4 != (NghResFileWriteInfo *)0x0);
  }
  return (HandleNode *)0x0;
}

void NghResFile::GetName(HandleNode *res, StringBuffer &name) {
  return;
}

SInt32 NghResFile::GetResType(HandleNode *res) {
  return 0;
}

void NghResFile::GetID(HandleNode *res, SInt16 *id) {
  *id = this->m_pLastGetByIndexNode->resIndex;
  return;
}

void NghResFile::GetIndex(HandleNode *res, SInt16 *index) {
  return;
}

void NghResFile::FindUniqueName(SInt32 resType, StringBuffer &name) {
  return;
}

SInt16 NghResFile::FindUniqueID(SInt32 rType) {
  return 0;
}

void NghResFile::Detach(HandleNode *res) {
  return;
}

void NghResFile::Load(HandleNode *res) {
  return;
}

bool NghResFile::IsLittleEndian(HandleNode *res) {
  return true;
}

void NghResFile::SetID(HandleNode *res, SInt16 id) {
  return;
}

void NghResFile::Add(HandleNode *theHandle, SInt32 rType, SInt16 rID, StringBuffer &rName, bool littleEndian) {
	NghResFileWriteInfo **ppList;
	NghResFileWriteInfo *pNode;
	NghResFileWriteInfo *pPrev;
	HandleNode *mem;
	HandleNode *mem;
	HandleNode *mem;
	HandleNode *mem;
	NghResFileWriteInfo *this;
	HandleNode *mem;
	HandleNode *mem;
	
  HandleNode *pHVar1;
  NghResFileWriteInfo **ppNVar2;
  uint uVar3;
  NghResFileWriteInfo *pNVar4;
  NghResFileWriteInfo *pNVar5;
  
  ppNVar2 = findListByResType__10NghResFileUi(this,rType);
  pNVar5 = (NghResFileWriteInfo *)0x0;
  pNVar4 = *ppNVar2;
  do {
    if (pNVar4 == (NghResFileWriteInfo *)0x0) {
LAB_00249e5c:
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
      uVar3 = 0;
      if (theHandle != (HandleNode *)0x0) {
        uVar3 = theHandle->allocSize;
      }
                    /* end of inlined section */
      if (uVar3 == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
        if (theHandle != (HandleNode *)0x0) {
          if (*(int *)&theHandle->owned != 0) {
            free(theHandle->ptr);
          }
          free(theHandle);
                    /* end of inlined section */
        }
      }
      else {
        if (pNVar5 == (NghResFileWriteInfo *)0x0) {
          pNVar4 = (NghResFileWriteInfo *)__nw__19NghResFileWriteInfoUi(0xc);
          pNVar4->pNext = (NghResFileWriteInfo *)0x0;
          pNVar4->handle = (HandleNode *)0x0;
          pNVar4->resIndex = 0;
          *ppNVar2 = pNVar4;
        }
        else {
          pNVar4 = (NghResFileWriteInfo *)__nw__19NghResFileWriteInfoUi(0xc);
          pNVar4->pNext = (NghResFileWriteInfo *)0x0;
          pNVar4->handle = (HandleNode *)0x0;
          pNVar4->resIndex = 0;
          pNVar5->pNext = pNVar4;
        }
        pNVar4->handle = theHandle;
        pNVar4->resIndex = rID;
      }
      return;
    }
    if ((uint)(ushort)pNVar4->resIndex == (int)(short)rID) {
      if (pNVar4 != (NghResFileWriteInfo *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
        uVar3 = 0;
        if (theHandle != (HandleNode *)0x0) {
          uVar3 = theHandle->allocSize;
        }
                    /* end of inlined section */
        if (uVar3 != 0) {
          pHVar1 = pNVar4->handle;
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
          if (pHVar1 == (HandleNode *)0x0) {
            pNVar4->handle = theHandle;
            return;
          }
          if (*(int *)&pHVar1->owned != 0) {
            free(pHVar1->ptr);
          }
          free(pHVar1);
                    /* end of inlined section */
          pNVar4->handle = theHandle;
          return;
        }
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
        if (theHandle != (HandleNode *)0x0) {
          if (*(int *)&theHandle->owned != 0) {
            free(theHandle->ptr);
          }
          free(theHandle);
        }
                    /* end of inlined section */
        if (pNVar5 == (NghResFileWriteInfo *)0x0) {
          *ppNVar2 = pNVar4->pNext;
        }
        else {
          pNVar5->pNext = pNVar4->pNext;
        }
        if (pNVar4 == (NghResFileWriteInfo *)0x0) {
          return;
        }
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
        pHVar1 = pNVar4->handle;
        if (pHVar1 != (HandleNode *)0x0) {
          if (*(int *)&pHVar1->owned != 0) {
            free(pHVar1->ptr);
          }
          free(pHVar1);
        }
                    /* end of inlined section */
        __dl__19NghResFileWriteInfoPv(pNVar4);
        return;
      }
      goto LAB_00249e5c;
    }
    pNVar5 = pNVar4;
    pNVar4 = pNVar4->pNext;
  } while( true );
}

void NghResFile::Write(HandleNode *res) {
  return;
}

void NghResFile::Remove(HandleNode *res) {
  return;
}

void NghResFile::SetInfo(HandleNode *res, SInt16 id, StringBuffer &name, char language) {
  return;
}

void NghResFile::SetCurrentHouse(u32 uCurrentHouse) {
  this->m_uCurrentHouse = uCurrentHouse - 1;
  return;
}

void NghResFile::FlushHouseData() {
	int iHouse;
	int i;
	
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = this->m_uCurrentHouse;
  iVar2 = 0;
  do {
    iVar3 = iVar2 + 1;
    deleteList__FP19NghResFileWriteInfo(this->m_ppHouseWriteInfo[uVar1][iVar2]);
    this->m_ppHouseWriteInfo[uVar1][iVar2] = (NghResFileWriteInfo *)0x0;
    iVar2 = iVar3;
  } while (iVar3 < 6);
  return;
}

void NghResFile::FlushCharacterData() {
	int i;
	
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    deleteList__FP19NghResFileWriteInfo(this->m_ppUserWriteInfo[iVar1]);
    this->m_ppUserWriteInfo[iVar1] = (NghResFileWriteInfo *)0x0;
    iVar1 = iVar2;
  } while (iVar2 < 2);
  return;
}

void NghResFile::FlushNeighborData() {
	int i;
	
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    deleteList__FP19NghResFileWriteInfo(this->m_ppNghWriteInfo[iVar1]);
    this->m_ppNghWriteInfo[iVar1] = (NghResFileWriteInfo *)0x0;
    iVar1 = iVar2;
  } while (iVar2 < 4);
  return;
}

void NghResFile::init() {
	int i;
	int j;
	
  NghResFileWriteInfo **ppNVar1;
  int iVar2;
  NghResFileWriteInfo ***pppNVar3;
  int iVar4;
  int iVar5;
  NghResFileWriteInfo ***pppNVar6;
  
                    /* inlined from /eor/src2/common/e_standard_heap.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/e_standard_heap.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/e_standard_heap.h */
  ppNVar1 = (NghResFileWriteInfo **)_memmanAlloc__FUiUi(0x10,4);
                    /* end of inlined section */
  this->m_ppNghWriteInfo = ppNVar1;
  iVar5 = 0;
  do {
    iVar4 = iVar5 + 1;
    this->m_ppNghWriteInfo[iVar5] = (NghResFileWriteInfo *)0x0;
    iVar5 = iVar4;
  } while (iVar4 < 4);
  pppNVar6 = this->m_ppHouseWriteInfo;
  iVar5 = 0;
  pppNVar3 = pppNVar6;
  do {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    ppNVar1 = (NghResFileWriteInfo **)_memmanAlloc__FUiUi(0x18,4);
                    /* end of inlined section */
    *pppNVar6 = ppNVar1;
    iVar4 = 0;
    do {
      iVar2 = iVar4 + 1;
      (*pppNVar3)[iVar4] = (NghResFileWriteInfo *)0x0;
      iVar4 = iVar2;
    } while (iVar2 < 6);
    iVar5 = iVar5 + 1;
    pppNVar3 = pppNVar3 + 1;
    pppNVar6 = pppNVar6 + 1;
  } while (iVar5 < 8);
                    /* inlined from /eor/src2/common/e_standard_heap.h */
  ppNVar1 = (NghResFileWriteInfo **)_memmanAlloc__FUiUi(8,4);
                    /* end of inlined section */
  this->m_ppUserWriteInfo = ppNVar1;
  iVar5 = 0;
  do {
    iVar4 = iVar5 + 1;
    this->m_ppUserWriteInfo[iVar5] = (NghResFileWriteInfo *)0x0;
    iVar5 = iVar4;
  } while (iVar4 < 2);
  return;
}

void NghResFile::reset() {
	int i;
	int j;
	
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = 0;
  do {
    iVar3 = iVar1 + 1;
    deleteList__FP19NghResFileWriteInfo(this->m_ppNghWriteInfo[iVar1]);
    this->m_ppNghWriteInfo[iVar1] = (NghResFileWriteInfo *)0x0;
    iVar1 = iVar3;
  } while (iVar3 < 4);
  iVar1 = 0;
  do {
    iVar3 = iVar1 + 1;
    deleteList__FP19NghResFileWriteInfo(this->m_ppUserWriteInfo[iVar1]);
    this->m_ppUserWriteInfo[iVar1] = (NghResFileWriteInfo *)0x0;
    iVar1 = iVar3;
  } while (iVar3 < 2);
  iVar3 = 0;
  iVar1 = 0;
  while( true ) {
    iVar3 = iVar3 + 1;
    piVar4 = (int *)((int)this->m_ppHouseWriteInfo + iVar1);
    iVar1 = 0;
    do {
      iVar2 = iVar1 * 4;
      iVar1 = iVar1 + 1;
      deleteList__FP19NghResFileWriteInfo(*(NghResFileWriteInfo **)(iVar2 + *piVar4));
      *(undefined4 *)(iVar2 + *piVar4) = 0;
    } while (iVar1 < 6);
    if (7 < iVar3) break;
    iVar1 = iVar3 * 4;
  }
  this->m_uCurrentHouse = 0;
  return;
}

NghResFileWriteInfo** NghResFile::findListByResType(u32 type) {
	NghResFileWriteInfo **result;
	int index;
	
  int iVar1;
  NghResFileWriteInfo **ppNVar2;
  
  iVar1 = getNghIndex__Fi(type);
  if (iVar1 < 0) {
    iVar1 = getHouseIndex__Fi(type);
    if (-1 < iVar1) {
      return this->m_ppHouseWriteInfo[this->m_uCurrentHouse] + iVar1;
    }
    iVar1 = getUserIndex__Fi(type);
    if (iVar1 < 0) {
      return (NghResFileWriteInfo **)0x0;
    }
    ppNVar2 = this->m_ppUserWriteInfo;
  }
  else {
    ppNVar2 = this->m_ppNghWriteInfo;
  }
  return ppNVar2 + iVar1;
}

bool NghResFile::readFromMemoryBlock(void *pMemoryBlock, u32 blockSize) {
	u32 uNumEntries;
	u32 uEntryOffset;
	u32 i;
	u32 *pTableResArray;
	u32 *pStartOffsetArray;
	u32 *pChunkLengthArray;
	u16 *pResIndexArray;
	ResourceName empty;
	u32 uDataSize;
	u32 uChecksum;
	u32 numEntries;
	u32 numEntries;
	u32 numEntries;
	u32 numEntries;
	u32 numEntries;
	u32 numEntries;
	u32 numEntries;
	u32 numEntries;
	u32 numEntries;
	u32 numEntries;
	SInt32 type;
	u32 uStartOffset;
	u32 uChunkLength;
	u16 resIndex;
	SInt32 size;
	HandleNode *ptr;
	u32 j;
	u32 numEntries;
	u32 numEntries;
	u32 numEntries;
	u32 numEntries;
	u32 numEntries;
	u32 numEntries;
	u32 numEntries;
	u32 numEntries;
	u32 numEntries;
	u32 numEntries;
	SInt32 type;
	u32 uStartOffset;
	u32 uChunkLength;
	u16 resIndex;
	SInt32 size;
	HandleNode *ptr;
	u32 numEntries;
	u32 numEntries;
	u32 numEntries;
	u32 numEntries;
	u32 numEntries;
	u32 numEntries;
	u32 numEntries;
	u32 numEntries;
	u32 numEntries;
	u32 numEntries;
	SInt32 type;
	u32 uStartOffset;
	u32 uChunkLength;
	u16 resIndex;
	SInt32 size;
	HandleNode *ptr;
	
  undefined2 uVar1;
  uint size;
  iResFile__0_3211__vtable *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  void *pvVar7;
  undefined4 uVar8;
  uint *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  uint *puVar12;
  uint uVar13;
  StackString_64_ empty;
  uint numEntries;
  int type;
  
                    /* WARNING: Load size is inaccurate */
  if (((*pMemoryBlock == 0x60) && (*(uint *)((int)pMemoryBlock + 4) <= blockSize)) &&
     ((*(int *)((int)pMemoryBlock + 8) == 1 ||
      (uVar3 = getCurrentbuildVerNum__Fiiii(1,0xb,10,0x12d),
      *(uint *)((int)pMemoryBlock + 8) == uVar3)))) {
    uVar3 = *(uint *)((int)pMemoryBlock + 0xc);
    *(undefined4 *)((int)pMemoryBlock + 0xc) = 0;
    uVar4 = Compute__9EChecksumPCvi(pMemoryBlock,*(int *)((int)pMemoryBlock + 4));
    iVar5 = -4;
    if (uVar3 == uVar4) {
      iVar5 = 1;
    }
                    /* end of inlined section */
    *(uint *)((int)pMemoryBlock + 0xc) = uVar3;
    if (iVar5 == 1) {
      uVar4 = 0;
      reset__10NghResFile(this);
                    /* inlined from c:/eor/src2/games/sims/MSrc/stringbuffer.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/stringbuffer.h */
                    /* end of inlined section */
      uVar3 = *(uint *)((int)pMemoryBlock + 0x14);
                    /* inlined from c:/eor/src2/games/sims/MSrc/stringbuffer.h */
                    /* end of inlined section */
      puVar11 = (undefined4 *)((int)pMemoryBlock + *(int *)((int)pMemoryBlock + 0x10));
      piVar10 = puVar11 + uVar3;
      puVar9 = (uint *)(piVar10 + uVar3);
      puVar12 = puVar9 + uVar3;
                    /* inlined from c:/eor/src2/games/sims/MSrc/stringbuffer.h */
      __12StringBufferPcUi(&empty.field0_0x0,(char *)((uint)&empty | 8),0x40);
                    /* end of inlined section */
      if (uVar3 != 0) {
        uVar8 = *puVar11;
        while( true ) {
                    /* end of inlined section */
          uVar13 = *puVar9;
          puVar11 = puVar11 + 1;
          puVar9 = puVar9 + 1;
          iVar5 = *piVar10;
          uVar1 = *(undefined2 *)puVar12;
          piVar10 = piVar10 + 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
          puVar6 = (uint *)malloc(0xc);
                    /* end of inlined section */
          puVar12 = (uint *)((int)puVar12 + 2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
          *puVar6 = uVar13;
          if (uVar13 == 0) {
            pvVar7 = (void *)0x0;
                    /* end of inlined section */
          }
          else {
            pvVar7 = malloc(uVar13);
          }
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
          puVar6[1] = (uint)pvVar7;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
          puVar6[2] = 1;
                    /* end of inlined section */
          uVar4 = uVar4 + 1;
          memcpy(pvVar7,(void *)((int)pMemoryBlock + iVar5),uVar13);
          piVar2 = (this->field0_0x0).__vtable;
          (*(code *)piVar2[1].FindUniqueID)
                    ((int)this->m_ppHouseWriteInfo + *(short *)&piVar2[1].FindUniqueName + -0x18,
                     puVar6,uVar8,uVar1,&empty,1);
          if (uVar3 <= uVar4) break;
          uVar8 = *puVar11;
        }
      }
      uVar3 = 0;
      do {
        iVar5 = uVar3 * 8;
        uVar3 = uVar3 + 1;
        uVar13 = 0;
        uVar4 = *(uint *)((int)pMemoryBlock + iVar5 + 0x1c);
        puVar11 = (undefined4 *)((int)pMemoryBlock + *(int *)((int)pMemoryBlock + iVar5 + 0x18));
        SetCurrentHouse__10NghResFileUi(this,uVar3);
        piVar10 = puVar11 + uVar4;
        puVar9 = (uint *)(piVar10 + uVar4);
        puVar12 = puVar9 + uVar4;
        if (uVar4 != 0) {
          uVar8 = *puVar11;
          while( true ) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
                    /* end of inlined section */
            size = *puVar9;
            puVar11 = puVar11 + 1;
            puVar9 = puVar9 + 1;
            iVar5 = *piVar10;
            uVar1 = *(undefined2 *)puVar12;
            piVar10 = piVar10 + 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
            puVar6 = (uint *)malloc(0xc);
                    /* end of inlined section */
            puVar12 = (uint *)((int)puVar12 + 2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
            *puVar6 = size;
            if (size == 0) {
              pvVar7 = (void *)0x0;
                    /* end of inlined section */
            }
            else {
              pvVar7 = malloc(size);
            }
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
            puVar6[1] = (uint)pvVar7;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
            puVar6[2] = 1;
                    /* end of inlined section */
            uVar13 = uVar13 + 1;
            memcpy(pvVar7,(void *)((int)pMemoryBlock + iVar5),size);
            piVar2 = (this->field0_0x0).__vtable;
            (*(code *)piVar2[1].FindUniqueID)
                      ((int)this->m_ppHouseWriteInfo + *(short *)&piVar2[1].FindUniqueName + -0x18,
                       puVar6,uVar8,uVar1,&empty,1);
            if (uVar4 <= uVar13) break;
            uVar8 = *puVar11;
          }
        }
      } while (uVar3 < 8);
      uVar4 = 0;
      uVar3 = *(uint *)((int)pMemoryBlock + 0x5c);
      puVar11 = (undefined4 *)((int)pMemoryBlock + *(int *)((int)pMemoryBlock + 0x58));
      piVar10 = puVar11 + uVar3;
      puVar9 = (uint *)(piVar10 + uVar3);
      puVar12 = puVar9 + uVar3;
      if (uVar3 != 0) {
        uVar8 = *puVar11;
        while( true ) {
                    /* end of inlined section */
          uVar13 = *puVar9;
          puVar11 = puVar11 + 1;
          puVar9 = puVar9 + 1;
          iVar5 = *piVar10;
          uVar1 = *(undefined2 *)puVar12;
          piVar10 = piVar10 + 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
          puVar6 = (uint *)malloc(0xc);
                    /* end of inlined section */
          puVar12 = (uint *)((int)puVar12 + 2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
          *puVar6 = uVar13;
          if (uVar13 == 0) {
            pvVar7 = (void *)0x0;
                    /* end of inlined section */
          }
          else {
            pvVar7 = malloc(uVar13);
          }
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
          puVar6[1] = (uint)pvVar7;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
          puVar6[2] = 1;
                    /* end of inlined section */
          uVar4 = uVar4 + 1;
          memcpy(pvVar7,(void *)((int)pMemoryBlock + iVar5),uVar13);
          piVar2 = (this->field0_0x0).__vtable;
          (*(code *)piVar2[1].FindUniqueID)
                    ((int)this->m_ppHouseWriteInfo + *(short *)&piVar2[1].FindUniqueName + -0x18,
                     puVar6,uVar8,uVar1,&empty,1);
          if (uVar3 <= uVar4) break;
          uVar8 = *puVar11;
        }
      }
      return true;
    }
  }
  return false;
}

bool NghResFile::writeToMemoryBlock(void *&pMemoryBlock, u32 &blockSize) {
	u32 dataSize;
	NghResFileHeader *pHeader;
	unsigned int uHouseSize[8];
	unsigned int uHouseEntries[8];
	u32 uUserSize;
	u32 uUserEntries;
	u32 uNghSize;
	u32 uNghEntries;
	int i;
	int iNumEntries;
	u32 uAllocSize;
	u32 uEntryOffset;
	u32 uDataOffset;
	u32 *pTableResArray;
	u32 *pStartOffsetArray;
	u32 *pChunkLengthArray;
	u16 *pResIndexArray;
	int j;
	u32 numEntries;
	u32 numEntries;
	u32 numEntries;
	u32 numEntries;
	u32 numEntries;
	u32 numEntries;
	u32 numEntries;
	u32 numEntries;
	u32 numEntries;
	u32 numEntries;
	NghResFileWriteInfo *pNode;
	HandleNode *mem;
	HandleNode *mem;
	int j;
	u32 numEntries;
	u32 numEntries;
	NghResFileWriteInfo *pNode;
	HandleNode *mem;
	HandleNode *mem;
	u32 numEntries;
	u32 numEntries;
	u32 numEntries;
	u32 numEntries;
	u32 numEntries;
	u32 numEntries;
	u32 numEntries;
	u32 numEntries;
	u32 numEntries;
	u32 numEntries;
	NghResFileWriteInfo *pNode;
	HandleNode *mem;
	HandleNode *mem;
	NghResFileHeader *pInData;
	u32 uDataSize;
	
  int iVar1;
  uint uVar2;
  undefined4 *pData;
  uint uVar3;
  HandleNode *pHVar4;
  NghResFileWriteInfo **ppNVar5;
  long lVar6;
  int *piVar7;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  NghResFileWriteInfo *pNVar13;
  undefined8 unaff_s0;
  uint *puVar14;
  undefined8 unaff_s1;
  uint *puVar15;
  undefined8 unaff_s2;
  NghResFileWriteInfo ***pppNVar16;
  uint *puVar17;
  undefined8 unaff_s3;
  short *psVar18;
  uint *puVar19;
  undefined8 unaff_s4;
  undefined4 *puVar20;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  int iVar21;
  int iVar22;
  int *piVar23;
  undefined8 unaff_s7;
  uint uVar24;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  ulong in_hi;
  ulong uVar25;
  uint uHouseSize [8];
  uint uHouseEntries [8];
  int iNumEntries;
  NghResFile__0_845 *local_14c;
  void **local_148;
  uint *local_144;
  uint uUserEntries;
  uint uNghEntries;
  uint uAllocSize;
  uint *local_134;
  int local_130;
  int local_12c;
  int local_128;
  NghResFileWriteInfo ***local_124;
  int *local_120;
  uint *local_11c;
  undefined4 *local_110;
  undefined4 uStack_10c;
  undefined4 *local_100;
  undefined4 uStack_fc;
  undefined4 local_f0;
  undefined4 uStack_ec;
  int local_e0;
  undefined4 uStack_dc;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_80;
  undefined4 uStack_7c;
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
  long lVar8;
  
  puVar17 = uHouseSize;
  puVar14 = uHouseSize;
  puVar19 = uHouseSize;
  puVar15 = uHouseEntries;
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  uVar24 = 0;
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  uVar3 = 0;
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  iVar21 = 7;
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  uUserEntries = 0;
  uNghEntries = 0;
  local_14c = this;
  local_148 = pMemoryBlock;
  local_144 = blockSize;
  local_134 = puVar15;
  do {
    *puVar17 = 0;
    iVar21 = iVar21 + -1;
    *puVar15 = 0;
    puVar17 = puVar17 + 1;
    puVar15 = puVar15 + 1;
  } while (-1 < iVar21);
  local_124 = local_14c->m_ppHouseWriteInfo;
  iVar21 = 0;
  do {
    iVar22 = iVar21 + 1;
    uVar2 = calculateDataSizeForList__FP19NghResFileWriteInfoRi
                      (local_14c->m_ppNghWriteInfo[iVar21],&iNumEntries);
    uVar3 = uVar3 + uVar2 + 3 & 0xfffffffc;
    uNghEntries = uNghEntries + iNumEntries;
    iVar21 = iVar22;
  } while (iVar22 < 4);
  local_128 = uNghEntries * 4;
  puVar17 = local_134 + 8;
  puVar15 = local_134;
  pppNVar16 = local_124;
  do {
    iVar21 = 0;
    do {
      iVar22 = iVar21 + 1;
      uVar2 = calculateDataSizeForList__FP19NghResFileWriteInfoRi((*pppNVar16)[iVar21],&iNumEntries)
      ;
      *puVar14 = *puVar14 + uVar2 + 3 & 0xfffffffc;
      *puVar15 = *puVar15 + iNumEntries;
      iVar21 = iVar22;
    } while (iVar22 < 6);
    puVar15 = puVar15 + 1;
    pppNVar16 = pppNVar16 + 1;
    puVar14 = puVar14 + 1;
  } while ((int)puVar15 < (int)puVar17);
  iVar21 = 0;
  do {
    iVar22 = iVar21 + 1;
    uVar2 = calculateDataSizeForList__FP19NghResFileWriteInfoRi
                      (local_14c->m_ppUserWriteInfo[iVar21],&iNumEntries);
    uVar24 = uVar24 + uVar2 + 3 & 0xfffffffc;
    uUserEntries = uUserEntries + iNumEntries;
    iVar21 = iVar22;
  } while (iVar22 < 2);
  uVar25 = in_hi & 0xffffffff00000000 | (ulong)(uint)((int)(uNghEntries * 0xe) >> 0x1f);
  local_12c = uUserEntries * 4;
  iVar22 = 7;
  iVar21 = uNghEntries * 0xe + 0x60;
  puVar15 = local_134;
  do {
    iVar22 = iVar22 + -1;
    lVar8 = ((long)(iVar21 + 3) & 0xfffffffffffffffcU | uVar25) + (long)(int)(*puVar15 * 0xe);
    iVar21 = (int)lVar8;
    uVar2 = (uint)((ulong)lVar8 >> 0x20);
    uVar25 = (ulong)(int)uVar2;
    puVar15 = puVar15 + 1;
  } while (-1 < iVar22);
  iVar22 = 7;
  uVar2 = (iVar21 + 3U & 0xfffffffc | uVar2) + uUserEntries * 0xe + 3 & 0xfffffffc;
  iVar21 = uVar2 + uVar3;
  do {
    iVar1 = *puVar19;
    puVar19 = (uint *)((int *)puVar19 + 1);
    iVar22 = iVar22 + -1;
    iVar21 = (iVar21 + 3U & 0xfffffffc) + iVar1;
  } while (-1 < iVar22);
  iVar21 = (iVar21 + 3U & 0xfffffffc) + uVar24;
  uAllocSize = iVar21 + 0xfffU & 0xfffff000;
  local_e0 = 0x60;
  uStack_dc = 0;
  iVar22 = 0;
  (*(code *)_5Globs_pEORGlobals->__vtable[1].CreateWardrobe)
            ((int)_5Globs_pEORGlobals->_pSelectedSims +
             *(short *)&_5Globs_pEORGlobals->__vtable[1].SetCam + -0x24);
  pData = (undefined4 *)
          AllocateScratchMemory__5GlobsPCvPCci
                    (local_14c,"c:/eor/src2/games/sims/MSrc/NghResFile.cpp",0x398);
  local_11c = pData + 7;
  local_120 = pData + 6;
  pData[1] = iVar21;
  *pData = 0x60;
  uVar3 = getCurrentbuildVerNum__Fiiii(1,0xb,10,0x12d);
  puVar20 = pData + 0x18;
  pData[2] = uVar3;
  puVar17 = (uint *)((int)puVar20 + local_128);
  puVar15 = (uint *)((int)puVar17 + local_128);
  pData[3] = 0;
  psVar18 = (short *)((int)puVar15 + local_128);
  pData[5] = uNghEntries;
  piVar7 = _NghIndex;
  uVar25 = CONCAT44(uStack_dc,local_e0);
  pData[4] = local_e0;
  do {
    lVar8 = (long)(int)piVar7;
    pNVar13 = local_14c->m_ppNghWriteInfo[iVar22];
    lVar10 = lVar8;
    if (pNVar13 != (NghResFileWriteInfo *)0x0) {
      pHVar4 = pNVar13->handle;
      while( true ) {
        if (pHVar4 != (HandleNode *)0x0) {
          local_110 = (undefined4 *)lVar8;
          uVar2 = uVar2 + 3 & 0xfffffffc;
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
          uVar3 = 0;
                    /* end of inlined section */
          *puVar20 = *local_110;
          *puVar17 = uVar2;
          puVar20 = puVar20 + 1;
          puVar17 = puVar17 + 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
          pHVar4 = pNVar13->handle;
          if (pHVar4 != (HandleNode *)0x0) {
            uVar3 = pHVar4->allocSize;
          }
                    /* end of inlined section */
          uStack_10c = (undefined4)((ulong)lVar8 >> 0x20);
          local_100 = (undefined4 *)lVar10;
          uStack_fc = (undefined4)((ulong)lVar10 >> 0x20);
          local_e0 = (int)uVar25;
          uStack_dc = (undefined4)(uVar25 >> 0x20);
          memcpy((void *)((int)pData + uVar2),pHVar4->ptr,uVar3);
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
          pHVar4 = pNVar13->handle;
          uVar3 = 0;
          lVar8 = CONCAT44(uStack_10c,local_110);
          lVar10 = CONCAT44(uStack_fc,local_100);
          if (pHVar4 != (HandleNode *)0x0) {
            uVar3 = pHVar4->allocSize;
          }
                    /* end of inlined section */
          uVar2 = uVar2 + uVar3;
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
          uVar3 = 0;
          if (pHVar4 != (HandleNode *)0x0) {
            uVar3 = pHVar4->allocSize;
          }
                    /* end of inlined section */
          *puVar15 = uVar3;
          uVar25 = (ulong)(local_e0 + 0xe);
          puVar15 = puVar15 + 1;
          *psVar18 = pNVar13->resIndex;
          psVar18 = psVar18 + 1;
        }
        pNVar13 = pNVar13->pNext;
        if (pNVar13 == (NghResFileWriteInfo *)0x0) break;
        pHVar4 = pNVar13->handle;
      }
    }
    iVar22 = iVar22 + 1;
    piVar7 = (int *)((int)lVar10 + 4);
  } while (iVar22 < 4);
  iVar21 = 0;
  puVar15 = local_134;
  pppNVar16 = local_124;
  puVar17 = local_11c;
  piVar7 = local_120;
  do {
    lVar12 = (long)(int)piVar7;
    lVar11 = (long)(int)puVar17;
    lVar10 = (long)(int)pppNVar16;
    lVar8 = (long)(int)puVar15;
    uVar25 = (long)((int)uVar25 + 3) & 0xfffffffffffffffc;
    *puVar17 = *puVar15;
    *piVar7 = (int)uVar25;
    puVar20 = (undefined4 *)((int)pData + (int)uVar25);
    lVar6 = 0;
    uVar3 = *puVar15;
    puVar17 = puVar20 + uVar3;
    puVar15 = puVar17 + uVar3;
    puVar19 = puVar15 + uVar3;
    ppNVar5 = *pppNVar16;
    while( true ) {
      iVar22 = (int)lVar6;
      pNVar13 = ppNVar5[iVar22];
      lVar6 = (long)(iVar22 + 1);
      if (pNVar13 != (NghResFileWriteInfo *)0x0) {
        lVar9 = (long)(int)(_HouseIndex + iVar22);
        pHVar4 = pNVar13->handle;
        while( true ) {
          if (pHVar4 != (HandleNode *)0x0) {
            local_100 = (undefined4 *)lVar9;
            uVar2 = uVar2 + 3 & 0xfffffffc;
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
            uVar3 = 0;
                    /* end of inlined section */
            *puVar20 = *local_100;
            *puVar17 = uVar2;
            puVar20 = puVar20 + 1;
            puVar17 = puVar17 + 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
            pHVar4 = pNVar13->handle;
            if (pHVar4 != (HandleNode *)0x0) {
              uVar3 = pHVar4->allocSize;
            }
                    /* end of inlined section */
            local_110 = (undefined4 *)lVar8;
            uStack_10c = (undefined4)((ulong)lVar8 >> 0x20);
            uStack_fc = (undefined4)((ulong)lVar9 >> 0x20);
            local_f0 = (undefined4)lVar10;
            uStack_ec = (undefined4)((ulong)lVar10 >> 0x20);
            local_e0 = (int)uVar25;
            uStack_dc = (undefined4)(uVar25 >> 0x20);
            local_d0 = (undefined4)lVar6;
            uStack_cc = (undefined4)((ulong)lVar6 >> 0x20);
            local_c0 = (undefined4)lVar11;
            uStack_bc = (undefined4)((ulong)lVar11 >> 0x20);
            local_b0 = (undefined4)lVar12;
            uStack_ac = (undefined4)((ulong)lVar12 >> 0x20);
            memcpy((void *)((int)pData + uVar2),pHVar4->ptr,uVar3);
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
            pHVar4 = pNVar13->handle;
            uVar3 = 0;
            lVar8 = CONCAT44(uStack_10c,local_110);
            lVar9 = CONCAT44(uStack_fc,local_100);
            lVar10 = CONCAT44(uStack_ec,local_f0);
            lVar6 = CONCAT44(uStack_cc,local_d0);
            lVar11 = CONCAT44(uStack_bc,local_c0);
            lVar12 = CONCAT44(uStack_ac,local_b0);
            if (pHVar4 != (HandleNode *)0x0) {
              uVar3 = pHVar4->allocSize;
            }
                    /* end of inlined section */
            uVar2 = uVar2 + uVar3;
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
            uVar3 = 0;
            if (pHVar4 != (HandleNode *)0x0) {
              uVar3 = pHVar4->allocSize;
            }
                    /* end of inlined section */
            *puVar15 = uVar3;
            uVar25 = (ulong)(local_e0 + 0xe);
            puVar15 = puVar15 + 1;
            *(short *)puVar19 = pNVar13->resIndex;
            puVar19 = (uint *)((int)puVar19 + 2);
          }
          pNVar13 = pNVar13->pNext;
          if (pNVar13 == (NghResFileWriteInfo *)0x0) break;
          pHVar4 = pNVar13->handle;
        }
      }
      if (5 < lVar6) break;
      ppNVar5 = (NghResFileWriteInfo **)*(int *)lVar10;
    }
    iVar21 = iVar21 + 1;
    pppNVar16 = (NghResFileWriteInfo ***)((int *)lVar10 + 1);
    piVar7 = (int *)((int)lVar12 + 8);
    puVar17 = (uint *)((int)lVar11 + 8);
    puVar15 = (uint *)((int)lVar8 + 4);
  } while (iVar21 < 8);
  uVar3 = (int)uVar25 + 3U & 0xfffffffc;
  pData[0x17] = uUserEntries;
  pData[0x16] = uVar3;
  piVar7 = (int *)((int)pData + uVar3);
  local_130 = 0;
  puVar17 = (uint *)((int)piVar7 + local_12c);
  puVar15 = (uint *)((int)puVar17 + local_12c);
  psVar18 = (short *)((int)puVar15 + local_12c);
  do {
    pNVar13 = local_14c->m_ppUserWriteInfo[local_130];
    iVar21 = local_130 + 1;
    if (pNVar13 != (NghResFileWriteInfo *)0x0) {
      piVar23 = _UserIndex + local_130;
      pHVar4 = pNVar13->handle;
      local_130 = local_130 + 1;
      while( true ) {
        if (pHVar4 != (HandleNode *)0x0) {
          uVar2 = uVar2 + 3 & 0xfffffffc;
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
          uVar3 = 0;
                    /* end of inlined section */
          *piVar7 = *piVar23;
          *puVar17 = uVar2;
          piVar7 = piVar7 + 1;
          puVar17 = puVar17 + 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
          pHVar4 = pNVar13->handle;
          if (pHVar4 != (HandleNode *)0x0) {
            uVar3 = pHVar4->allocSize;
          }
                    /* end of inlined section */
          memcpy((void *)((int)pData + uVar2),pHVar4->ptr,uVar3);
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
          pHVar4 = pNVar13->handle;
          uVar3 = 0;
          if (pHVar4 != (HandleNode *)0x0) {
            uVar3 = pHVar4->allocSize;
          }
                    /* end of inlined section */
          uVar2 = uVar2 + uVar3;
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
          uVar3 = 0;
          if (pHVar4 != (HandleNode *)0x0) {
            uVar3 = pHVar4->allocSize;
          }
                    /* end of inlined section */
          *puVar15 = uVar3;
          puVar15 = puVar15 + 1;
          *psVar18 = pNVar13->resIndex;
          psVar18 = psVar18 + 1;
        }
        pNVar13 = pNVar13->pNext;
        iVar21 = local_130;
        if (pNVar13 == (NghResFileWriteInfo *)0x0) break;
        pHVar4 = pNVar13->handle;
      }
    }
    local_130 = iVar21;
  } while (local_130 < 2);
                    /* inlined from
                       c:/eor/src2/games/sims/MSrc/../../../engine/memorycard/e_memorycard.h */
  pData[3] = 0;
  uVar3 = Compute__9EChecksumPCvi(pData,pData[1]);
  pData[3] = uVar3;
                    /* end of inlined section */
  *local_148 = pData;
  *local_144 = uAllocSize;
  return true;
}

ErrType NghResFile::WriteToFile(char *fileName) {
	FileName nghName;
	FILE *pFile;
	char *str;
	void *pMemoryBlock;
	u32 blockSize;
	
  char *path;
  __sFILE__432_30 *stream;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  StackString_260_ nghName;
  StringBuffer SStack_150;
  char acStack_148 [264];
  void *pMemoryBlock;
  uint blockSize;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/stringbuffer.h */
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/stringbuffer.h */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  __12StringBufferPcUi(&nghName.field0_0x0,(char *)((uint)&nghName | 8),0x104);
  __12StringBufferPcUi(&SStack_150,acStack_148,0x104);
  append__12StringBufferPCci(&SStack_150,fileName,-1);
  copy__12StringBufferRC12StringBuffer(&nghName.field0_0x0,&SStack_150);
                    /* end of inlined section */
  path = c_str__C12StringBuffer(&nghName.field0_0x0);
  stream = fopen(path,"wb");
  if (stream != (__sFILE__432_30 *)0x0) {
    writeToMemoryBlock__10NghResFileRPvRUi(this,&pMemoryBlock,&blockSize);
    fwrite(pMemoryBlock,blockSize,1,stream);
    FreeScratchMemory__5GlobsPCv(this);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    (*(code *)_5Globs_pEORGlobals->__vtable[1].CreateUnlockDialog)
              ((int)_5Globs_pEORGlobals->_pSelectedSims +
               *(short *)&_5Globs_pEORGlobals->__vtable[1].CreateVanityMirror + -0x24);
    fclose(stream);
  }
  return 0;
}

ErrType NghResFile::ReadFromFile(char *fileName) {
	FileName nghName;
	FILE *pFile;
	bool bReadFromBlockOk;
	char *str;
	ESleep sleeper;
	u32 fileSize;
	void *pMemoryBlock;
	
  bool bVar1;
  char *pcVar2;
  __sFILE__432_30 *stream;
  void *ptr;
  int iVar3;
  long lVar4;
  uint size;
  StackString_260_ nghName;
  ESleep sleeper;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/stringbuffer.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/stringbuffer.h */
  __12StringBufferPcUi(&nghName.field0_0x0,(char *)((uint)&nghName | 8),0x104);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/stringbuffer.h */
  __12StringBufferPcUi((StringBuffer *)&sleeper,(char *)&sleeper.m_semaphore.m_maxCount,0x104);
  append__12StringBufferPCci((StringBuffer *)&sleeper,fileName,-1);
  copy__12StringBufferRC12StringBuffer(&nghName.field0_0x0,(StringBuffer *)&sleeper);
                    /* end of inlined section */
  pcVar2 = c_str__C12StringBuffer(&nghName.field0_0x0);
  stream = fopen(pcVar2,"rb");
  if (stream == (__sFILE__432_30 *)0x0) {
    __6ESleep(&sleeper);
    do {
      Sleep__6ESleepUi(&sleeper,10);
      pcVar2 = c_str__C12StringBuffer(&nghName.field0_0x0);
      stream = fopen(pcVar2,"rb");
    } while (stream == (__sFILE__432_30 *)0x0);
    ___6ESleep(&sleeper,2);
  }
  bVar1 = false;
  if (stream != (__sFILE__432_30 *)0x0) {
    fseek(stream,0,2);
    lVar4 = ftell(stream);
    fseek(stream,0,0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    size = (uint)lVar4;
    if (0x100000 < (uint)lVar4) {
      size = 0x100000;
    }
    (*(code *)_5Globs_pEORGlobals->__vtable[1].CreateWardrobe)
              ((int)_5Globs_pEORGlobals->_pSelectedSims +
               *(short *)&_5Globs_pEORGlobals->__vtable[1].SetCam + -0x24);
    ptr = AllocateScratchMemory__5GlobsPCvPCci
                    (this,"c:/eor/src2/games/sims/MSrc/NghResFile.cpp",0x49a);
    fread(ptr,size,1,stream);
    bVar1 = readFromMemoryBlock__10NghResFilePvUi(this,ptr,size);
    FreeScratchMemory__5GlobsPCv(this);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    (*(code *)_5Globs_pEORGlobals->__vtable[1].CreateUnlockDialog)
              ((int)_5Globs_pEORGlobals->_pSelectedSims +
               *(short *)&_5Globs_pEORGlobals->__vtable[1].CreateVanityMirror + -0x24);
    fclose(stream);
  }
  iVar3 = -1;
  if (bVar1 != false) {
    iVar3 = 0;
  }
  return iVar3;
}

ErrType NghResFile::WriteToMemoryCard(char *fileName) {
	void *pMemoryBlock;
	u32 blockSize;
	c16 *SimSaveString;
	c16 *szNghName;
	short unsigned int string[33];
	int LineBreak;
	short unsigned int finalstring[33];
	EMC_OpStatus ErrReturn;
	
  int iVar1;
  short *in;
  short *in_00;
  uint LineBreak;
  long lVar2;
  char *pRef;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  short string [33];
  short finalstring [33];
  void *pMemoryBlock;
  uint blockSize;
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
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
  local_20 = (undefined4)unaff_s3;
  uStack_1c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
                    /* end of inlined section */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  (*(code *)_5Globs_pEORGlobals->__vtable[1].CreateWardrobe)
            ((int)_5Globs_pEORGlobals->_pSelectedSims +
             *(short *)&_5Globs_pEORGlobals->__vtable[1].SetCam + -0x24);
  writeToMemoryBlock__10NghResFileRPvRUi(this,&pMemoryBlock,&blockSize);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  iVar1 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                    ((int)&_5Globs_pNeighborhood->__vtable +
                     (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
  if (*(short *)(iVar1 + 0x2e6) == 1) {
                    /* end of inlined section */
    pRef = "ps2_browser_savegame_story_text";
  }
  else {
                    /* end of inlined section */
    pRef = "ps2_browser_savegame_text";
  }
  in = GetMemCardUIString__7EGlobalPCc(_5Globs_pEORGlobals,pRef);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  in_00 = (short *)(*(code *)_5Globs_pNeighborhood->__vtable->SetFilename)
                             ((int)&_5Globs_pNeighborhood->__vtable +
                              (int)*(short *)&_5Globs_pNeighborhood->__vtable->LevelComplete);
  wcsncpy__FPUsPCUsUi(string,in,0x10);
  string[16] = 0;
  LineBreak = wcslen__FPCUs(string);
  wcsncpy__FPUsPCUsUi(string + LineBreak,in_00,0x21 - LineBreak);
  string[32] = 0;
  ConvertUnicodeToShiftJIS__7EGlobalPCUsPUsUi(_5Globs_pEORGlobals,string,finalstring,0x42);
  SetBrowserText__11EPS2MemCard12EMC_SaveTypePUsUi(&_ps2memcard,EMC_TYPE_2,finalstring,LineBreak);
  lVar2 = (*(code *)_pMemoryCard->__vtable->DeleteDataA)
                    ((int)&_pMemoryCard->__vtable +
                     (int)*(short *)&_pMemoryCard->__vtable->SaveDataA,fileName,0,0x100000,
                     pMemoryBlock);
  FreeScratchMemory__5GlobsPCv(this);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pEORGlobals->__vtable[1].CreateUnlockDialog)
            ((int)_5Globs_pEORGlobals->_pSelectedSims +
             *(short *)&_5Globs_pEORGlobals->__vtable[1].CreateVanityMirror + -0x24);
  iVar1 = -1;
  if (lVar2 == 1) {
    iVar1 = 0;
  }
  return iVar1;
}

ErrType NghResFile::ReadFromMemoryCard(char *fileName) {
	void *pMemoryBlock;
	EMC_OpStatus ErrReturn;
	bool bReadFromBlockOk;
	
  bool bVar1;
  void *pMemoryBlock;
  int iVar2;
  long lVar3;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  bVar1 = false;
  (*(code *)_5Globs_pEORGlobals->__vtable[1].CreateWardrobe)
            ((int)_5Globs_pEORGlobals->_pSelectedSims +
             *(short *)&_5Globs_pEORGlobals->__vtable[1].SetCam + -0x24);
  pMemoryBlock = AllocateScratchMemory__5GlobsPCvPCci
                           (this,"c:/eor/src2/games/sims/MSrc/NghResFile.cpp",0x4de);
  lVar3 = (*(code *)_pMemoryCard->__vtable->LoadDataA)
                    ((int)&_pMemoryCard->__vtable +
                     (int)*(short *)&_pMemoryCard->__vtable->UnFormatCardS,fileName,0,0x100000,
                     pMemoryBlock);
  if (lVar3 == 1) {
    bVar1 = readFromMemoryBlock__10NghResFilePvUi(this,pMemoryBlock,0x100000);
  }
  FreeScratchMemory__5GlobsPCv(this);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pEORGlobals->__vtable[1].CreateUnlockDialog)
            ((int)_5Globs_pEORGlobals->_pSelectedSims +
             *(short *)&_5Globs_pEORGlobals->__vtable[1].CreateVanityMirror + -0x24);
  iVar2 = -1;
  if ((lVar3 == 1) && (iVar2 = 0, bVar1 == false)) {
    iVar2 = -1;
  }
  return iVar2;
}

void NghResFile::CopyHouse(int dstHouseNum, NghResFile &srcFile, int srcHouseNum) {
	int i;
	ResourceName dummy;
	NghResFileWriteInfo *pNode;
	HandleNode *mem;
	HandleNode *ptr;
	
  HandleNode *pHVar1;
  NghResFileWriteInfo **ppNVar2;
  iResFile__0_3211__vtable *piVar3;
  HandleNode *pHVar4;
  uint uVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  NghResFileWriteInfo *pNVar9;
  StackString_64_ dummy;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/stringbuffer.h */
  __12StringBufferPcUi(&dummy.field0_0x0,(char *)((uint)&dummy | 8),0x40);
                    /* end of inlined section */
  iVar7 = 0;
  do {
    iVar8 = iVar7 + 1;
    deleteList__FP19NghResFileWriteInfo(this->m_ppHouseWriteInfo[dstHouseNum + -1][iVar7]);
    this->m_ppHouseWriteInfo[dstHouseNum + -1][iVar7] = (NghResFileWriteInfo *)0x0;
    iVar7 = iVar8;
  } while (iVar8 < 6);
  ppNVar2 = srcFile->m_ppHouseWriteInfo[srcHouseNum + -1];
  iVar7 = 0;
  while( true ) {
    pNVar9 = ppNVar2[iVar7];
    if (pNVar9 != (NghResFileWriteInfo *)0x0) {
      piVar3 = (this->field0_0x0).__vtable;
      while( true ) {
        (*(code *)piVar3[1].FindUniqueID)
                  ((int)this->m_ppHouseWriteInfo + *(short *)&piVar3[1].FindUniqueName + -0x18,
                   pNVar9->handle,_HouseIndex[iVar7],pNVar9->resIndex,&dummy,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
        pHVar1 = pNVar9->handle;
        pHVar4 = (HandleNode *)malloc(0xc);
        uVar5 = 0;
        pvVar6 = (void *)0x0;
        if (pHVar1 != (HandleNode *)0x0) {
          uVar5 = pHVar1->allocSize;
        }
        pHVar4->allocSize = uVar5;
        if (pHVar1 != (HandleNode *)0x0) {
          pvVar6 = pHVar1->ptr;
        }
        pHVar4->ptr = pvVar6;
        *(undefined4 *)&pHVar4->owned = 0;
                    /* end of inlined section */
        pNVar9->handle = pHVar4;
        pNVar9 = pNVar9->pNext;
        if (pNVar9 == (NghResFileWriteInfo *)0x0) break;
        piVar3 = (this->field0_0x0).__vtable;
      }
    }
    if (5 < iVar7 + 1) break;
    ppNVar2 = srcFile->m_ppHouseWriteInfo[srcHouseNum + -1];
    iVar7 = iVar7 + 1;
  }
  return;
}

bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2) {
  char cVar1;
  char cVar2;
  
  do {
    if ((first1 == last1) || (first2 == last2)) {
      return first1 == last1 && first2 != last2;
    }
    cVar1 = *first1;
    cVar2 = *first2;
    if (cVar1 < cVar2) {
      return true;
    }
    first1 = first1 + 1;
    first2 = first2 + 1;
  } while (cVar1 <= cVar2);
  return false;
}
