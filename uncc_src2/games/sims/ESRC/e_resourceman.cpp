// STATUS: NOT STARTED

#include "e_resourceman.h"

enum EFileIODevice {
	E_FIO_DEVICE_DEFAULT = 0,
	E_FIO_DEVICE_HOST = 1,
	E_FIO_DEVICE_DVD = 2,
	E_FIO_DEVICE_USB_ETHERNET = 3
};

enum EFileIOSeek {
	E_FIO_SEEK_SET = 0,
	E_FIO_SEEK_CUR = 1,
	E_FIO_SEEK_END = 2
};

enum EFileIOStream {
	E_FIO_STREAM_RANDOM = 0,
	E_FIO_STREAM_SEQ = 1
};

bool EResourceManager::m_bTraceEnabled = false;

__vtbl_ptr_type EResourceManager virtual table[7] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResourceManager::~EResourceManager,
		/* .__delta2 = */ 13584
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
		/* .__pfn = */ &EResourceManager::Shutdown,
		/* .__delta2 = */ 13704
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

EResourceManager* EResourceManager::EResourceManager() {
  this->__vtable = (EResourceManager__vtable *)_vt_16EResourceManager;
  __6EMutex(&this->m_dataMutex);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  __13ERedBlackTree(&(this->m_resourceMap).field0_0x0);
  SetToNull__7EString(&this->m_dataType);
  SetToNull__7EString(&this->m_path);
                    /* end of inlined section */
  *(undefined4 *)&this->m_initialized = 0;
  this->m_pArchiveFile = (EFile *)0x0;
  this->m_pIndex = (uint *)0x0;
  *(undefined4 *)&this->m_bSeqAccess = 0;
  return this;
}

void EResourceManager::~EResourceManager(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (EResourceManager__vtable *)_vt_16EResourceManager;
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
  Deallocate__7EStringPc(&this->m_path,(this->m_path).m_p);
  Deallocate__7EStringPc(&this->m_dataType,(this->m_dataType).m_p);
  RemoveAll__13ERedBlackTree(&(this->m_resourceMap).field0_0x0);
                    /* end of inlined section */
  ___6EMutex(&this->m_dataMutex,2);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void EResourceManager::Shutdown() {
	ERedBlackTree *this;
	TLinkedList<ERedBlackTreeNode,12,16> *this;
	
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  if ((this->m_resourceMap).field0_0x0.m_list.m_pHead != (ERedBlackTreeNode *)0x0) {
    PrintLoadedResources__16EResourceManager(this);
  }
  RemoveAll__13ERedBlackTree(&(this->m_resourceMap).field0_0x0);
  if (_pResLoader != (EResourceLoader *)0x0) {
    (*(code *)_pResLoader->__vtable[1].Init)
              ((int)&_pResLoader->__vtable +
               (int)*(short *)&_pResLoader->__vtable[1].EResourceLoader,this);
  }
  CloseArchiveFile__16EResourceManager(this);
  *(undefined4 *)&this->m_initialized = 0;
  return;
}

void EResourceManager::Init(char *szDataType) {
  uint *puVar1;
  
  __as__7EStringPCc(&this->m_dataType,szDataType);
  CalcPath__16EResourceManager(this);
  puVar1 = (uint *)(**(code **)(_pResLoader->__vtable + 1))
                             ((int)&_pResLoader->__vtable +
                              (int)*(short *)&_pResLoader->__vtable->PrintAllLoadedResources,this);
  this->m_pIndex = puVar1;
  *(undefined4 *)&this->m_initialized = 1;
  return;
}

void EResourceManager::CalcPath() {
	EString m_pathPrefix;
	EString *this;
	
  int iVar1;
  EString *this_00;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  EString m_pathPrefix;
  EString local_50 [4];
  EString local_40 [4];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
  this_00 = &this->m_path;
  __as__7EStringPCc(this_00,(this->m_dataType).m_p);
                    /* end of inlined section */
  iVar1 = GetLength__C7EString(this_00);
  if (8 < iVar1) {
    Left__C7EStringi(&m_pathPrefix,(int)this_00);
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
    __as__7EStringPCc(this_00,m_pathPrefix.m_p);
    Deallocate__7EStringPc(&m_pathPrefix,m_pathPrefix.m_p);
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
  }
  MakeCopy__7EStringPCc(&m_pathPrefix,"\\data\\");
  __7EStringPCcT1(local_40,m_pathPrefix.m_p,(this->m_path).m_p);
  __7EStringPCcT1(local_50,local_40[0].m_p,".arc");
  __as__7EStringPCc(this_00,local_50[0].m_p);
  Deallocate__7EStringPc(local_50,local_50[0].m_p);
  Deallocate__7EStringPc(local_40,local_40[0].m_p);
                    /* end of inlined section */
  MakeUpper__7EString(this_00);
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
  Deallocate__7EStringPc(&m_pathPrefix,m_pathPrefix.m_p);
  return;
}

void EResourceManager::OpenArchiveFile() {
	EFile *pArchiveFile;
	
  EFile *pEVar1;
  int iVar2;
  
                    /* end of inlined section */
  Acquire__6EMutexUi(&this->m_dataMutex,0xffffffff);
  pEVar1 = this->m_pArchiveFile;
  Release__6EMutex(&this->m_dataMutex);
  if (pEVar1 == (EFile *)0x0) {
                    /* end of inlined section */
    iVar2 = *(int *)&this->m_bSeqAccess;
    while ((Create__11EFileSystemRP5EFilePCcT2Q25EFile10DeviceTypeQ25EFile10AccessMode
                      (&_eorFileSys.field0_0x0,&this->m_pArchiveFile,(this->m_path).m_p,"rb",
                       DT_DEFAULT,(uint)(iVar2 != 0)), this->m_pArchiveFile == (EFile *)0x0 &&
           ((*(code *)_pResLoader->__vtable[1].OpenFiles)
                      ((int)&_pResLoader->__vtable +
                       (int)*(short *)&_pResLoader->__vtable[1].NewDataFiles),
           this->m_pArchiveFile == (EFile *)0x0))) {
      iVar2 = *(int *)&this->m_bSeqAccess;
    }
  }
  return;
}

void EResourceManager::CloseArchiveFile() {
	EFile *pArchiveFile;
	
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  EFile *pArchiveFile;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s0;
  uStack_1c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  Acquire__6EMutexUi(&this->m_dataMutex,0xffffffff);
  pArchiveFile = this->m_pArchiveFile;
  this->m_pArchiveFile = (EFile *)0x0;
  Release__6EMutex(&this->m_dataMutex);
  if (pArchiveFile != (EFile *)0x0) {
    Destroy__11EFileSystemRP5EFile(&_eorFileSys.field0_0x0,&pArchiveFile);
  }
  return;
}

int EResourceManager::BinarySearch(u32 searchKey, u32 *keys, int count) {
	int left;
	int right;
	int mid;
	
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (count == 0) {
    return -1;
  }
  iVar2 = count + -1;
  iVar3 = 0;
  iVar1 = iVar2;
  if (0 < iVar2) {
    while( true ) {
      iVar1 = iVar1 >> 1;
      if (keys[iVar1] < searchKey) {
        iVar3 = iVar1 + 1;
        iVar1 = iVar2;
      }
      iVar2 = iVar1;
      if (iVar2 <= iVar3) break;
      iVar1 = iVar3 + iVar2;
    }
  }
  iVar1 = -1;
  if (keys[iVar3] == searchKey) {
    iVar1 = iVar3;
  }
  return iVar1;
}

bool EResourceManager::LookupId(u32 id, u32 &posOut, u32 &lengthOut) {
	EAutoMutex mutex;
	int count;
	int pos;
	EMutex &mutex;
	int dataPos;
	
  ESyncObject__vtable *pEVar1;
  uint count;
  int iVar2;
  int iVar3;
  EAutoMutex mutex;
  
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar1 = (this->m_dataMutex).field0_0x0.__vtable;
  (**(code **)(pEVar1 + 1))
            ((int)&(this->m_dataMutex).field0_0x0.__vtable + (int)*(short *)&pEVar1->Release,
             0xffffffffffffffff);
                    /* end of inlined section */
  count = *this->m_pIndex;
  iVar2 = BinarySearch__16EResourceManagerUiPUii(id,this->m_pIndex + 1,count);
  if (iVar2 == -1) {
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
    pEVar1 = (this->m_dataMutex).field0_0x0.__vtable;
    (*(code *)pEVar1[1].Acquire)
              ((int)&(this->m_dataMutex).field0_0x0.__vtable + (int)*(short *)&pEVar1[1].ESyncObject
              );
                    /* end of inlined section */
  }
  else {
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
    iVar3 = count + iVar2 * 2 + 1;
    *posOut = this->m_pIndex[iVar3];
    *lengthOut = this->m_pIndex[iVar3 + 1];
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
    pEVar1 = (this->m_dataMutex).field0_0x0.__vtable;
    (*(code *)pEVar1[1].Acquire)
              ((int)&(this->m_dataMutex).field0_0x0.__vtable + (int)*(short *)&pEVar1[1].ESyncObject
              );
                    /* end of inlined section */
  }
  return iVar2 != -1;
}

void EResourceManager::PrintLoadedResources() {
	EAutoMutex mutex;
	EMutex &mutex;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	
  int iVar1;
  ERedBlackTreeNode *pEVar2;
  ESyncObject__vtable *pEVar3;
  EAutoMutex mutex;
  
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar3 = (this->m_dataMutex).field0_0x0.__vtable;
  (**(code **)(pEVar3 + 1))
            ((int)&(this->m_dataMutex).field0_0x0.__vtable + (int)*(short *)&pEVar3->Release,
             0xffffffffffffffff);
                    /* end of inlined section */
  iVar1 = GetSize__C13ERedBlackTree(&(this->m_resourceMap).field0_0x0);
  if (iVar1 != 0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    pEVar2 = (this->m_resourceMap).field0_0x0.m_list.m_pHead;
                    /* end of inlined section */
    if (pEVar2 == (ERedBlackTreeNode *)0x0) {
      pEVar3 = (this->m_dataMutex).field0_0x0.__vtable;
      goto LAB_00133a2c;
    }
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    for (pEVar2 = pEVar2->pNext; pEVar2 != (ERedBlackTreeNode *)0x0; pEVar2 = pEVar2->pNext) {
    }
  }
  pEVar3 = (this->m_dataMutex).field0_0x0.__vtable;
LAB_00133a2c:
  (*(code *)pEVar3[1].Acquire)
            ((int)&(this->m_dataMutex).field0_0x0.__vtable + (int)*(short *)&pEVar3[1].ESyncObject);
  return;
}

u32 EResourceManager::GetFirstLoadedId() {
	EAutoMutex mutex;
	u32 id;
	EMutex &mutex;
	
  ESyncObject__vtable *pEVar1;
  ERedBlackTreeNode *pEVar2;
  uint uVar3;
  EAutoMutex mutex;
  
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar1 = (this->m_dataMutex).field0_0x0.__vtable;
  (**(code **)(pEVar1 + 1))
            ((int)&(this->m_dataMutex).field0_0x0.__vtable + (int)*(short *)&pEVar1->Release,
             0xffffffffffffffff);
  pEVar2 = (this->m_resourceMap).field0_0x0.m_list.m_pHead;
                    /* end of inlined section */
  uVar3 = 0;
  if (pEVar2 != (ERedBlackTreeNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    uVar3 = pEVar2->key;
  }
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar1 = (this->m_dataMutex).field0_0x0.__vtable;
  (*(code *)pEVar1[1].Acquire)
            ((int)&(this->m_dataMutex).field0_0x0.__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
                    /* end of inlined section */
  return uVar3;
}

u32 EResourceManager::GetNextLoadedId(u32 prevId) {
	EAutoMutex mutex;
	EMutex &mutex;
	u32 key;
	
  uint uVar1;
  undefined1 *puVar2;
  ESyncObject__vtable *pEVar3;
  EAutoMutex mutex;
  
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar3 = (this->m_dataMutex).field0_0x0.__vtable;
  (**(code **)(pEVar3 + 1))
            ((int)&(this->m_dataMutex).field0_0x0.__vtable + (int)*(short *)&pEVar3->Release,
             0xffffffffffffffff);
  puVar2 = Find__C13ERedBlackTreeUiPUi(&(this->m_resourceMap).field0_0x0,prevId,(uint *)0x0);
                    /* end of inlined section */
  if (puVar2 == (undefined1 *)0x0) {
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
    pEVar3 = (this->m_dataMutex).field0_0x0.__vtable;
  }
  else {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
    pEVar3 = (this->m_dataMutex).field0_0x0.__vtable;
    if (*(int *)(puVar2 + 0x10) != 0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
      uVar1 = *(uint *)(*(int *)(puVar2 + 0x10) + 0x18);
      (*(code *)pEVar3[1].Acquire)
                ((int)&(this->m_dataMutex).field0_0x0.__vtable +
                 (int)*(short *)&pEVar3[1].ESyncObject);
      return uVar1;
                    /* end of inlined section */
    }
  }
  (*(code *)pEVar3[1].Acquire)
            ((int)&(this->m_dataMutex).field0_0x0.__vtable + (int)*(short *)&pEVar3[1].ESyncObject);
                    /* end of inlined section */
  return 0;
}

EResource* EResourceManager::GetRef(u32 id) {
	EResource *pResource;
	EAutoMutex mutex;
	EMutex &mutex;
	u32 key;
	
  ESyncObject__vtable *pEVar1;
  undefined1 *puVar2;
  EAutoMutex mutex;
  EResource *pResource;
  
  if (id == 0) {
    pResource = (EResource *)0x0;
  }
  else {
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
    pEVar1 = (this->m_dataMutex).field0_0x0.__vtable;
    mutex.m_mutex = &this->m_dataMutex;
    (**(code **)(pEVar1 + 1))
              ((int)&(this->m_dataMutex).field0_0x0.__vtable + (int)*(short *)&pEVar1->Release,
               0xffffffffffffffff);
    puVar2 = Find__C13ERedBlackTreeUiPUi
                       (&(this->m_resourceMap).field0_0x0,id,(uint *)((uint)&mutex | 4));
                    /* end of inlined section */
    if (puVar2 == (undefined1 *)0x0) {
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
      pEVar1 = ((mutex.m_mutex)->field0_0x0).__vtable;
      (*(code *)pEVar1[1].Acquire)
                ((int)&((mutex.m_mutex)->field0_0x0).__vtable +
                 (int)*(short *)&pEVar1[1].ESyncObject);
      pResource = (EResource *)0x0;
                    /* end of inlined section */
    }
    else {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
      pEVar1 = ((mutex.m_mutex)->field0_0x0).__vtable;
      (*(code *)pEVar1[1].Acquire)
                ((int)&((mutex.m_mutex)->field0_0x0).__vtable +
                 (int)*(short *)&pEVar1[1].ESyncObject);
                    /* end of inlined section */
    }
  }
  return pResource;
}

EResource* EResourceManager::GetRef(char *szName) {
	u32 id;
	
  bool bVar1;
  uint id;
  EResource *pEVar2;
  
                    /* end of inlined section */
  id = CalcId__16EResourceManagerPCc(szName);
  bVar1 = IsValid__16EResourceManagerUi(this,id);
  if (bVar1) {
    pEVar2 = GetRef__16EResourceManagerUi(this,id);
  }
  else {
    pEVar2 = (EResource *)0x0;
  }
  return pEVar2;
}

EResource* EResourceManager::GetRefAsync(u32 id, bool bWait) {
	EResource *result;
	
  EResource *pEVar1;
  
  pEVar1 = GetRef__16EResourceManagerUi(this,id);
  if ((pEVar1 == (EResource *)0x0) && (bWait)) {
    (*(code *)_pResLoader->__vtable->CloseAllArchiveFiles)
              ((int)&_pResLoader->__vtable + (int)*(short *)&_pResLoader->__vtable->OpenFiles);
    pEVar1 = GetRef__16EResourceManagerUi(this,id);
  }
  return pEVar1;
}

EResource* EResourceManager::addRef(u32 id, EFile *pSourceFile, int seekIfLoaded, bool bWait) {
	EResource *pResource;
	bool bInMutex;
	TRedBlackTree<unsigned int,EResource *> *this;
	u32 key;
	EFile *pUseFile;
	u32 pos;
	u32 length;
	u32 startOffset;
	u32 testPos;
	u32 testLength;
	u32 key;
	EResource *pAlreadyThere;
	u32 key;
	
  EStorable__vtable *pEVar1;
  bool bVar2;
  bool bVar3;
  undefined1 *puVar4;
  uint uVar5;
  long lVar6;
  TRedBlackTree_unsigned_int_EResource___ *this_00;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  EResource *pResource;
  uint testPos;
  uint testLength;
  uint pos;
  uint length;
  EResource *pAlreadyThere;
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
  
  local_30 = (undefined4)unaff_s5;
  uStack_2c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_50 = (undefined4)unaff_s3;
  uStack_4c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_60 = (undefined4)unaff_s2;
  uStack_5c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_70 = (undefined4)unaff_s1;
  uStack_6c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s6;
  uStack_1c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_40 = (undefined4)unaff_s4;
  uStack_3c = (undefined4)((ulong)unaff_s4 >> 0x20);
  if (id == 0) {
    return (EResource *)0x0;
  }
  pResource = (EResource *)0x0;
  Acquire__6EMutexUi(&this->m_dataMutex,0xffffffff);
  bVar2 = true;
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  this_00 = &this->m_resourceMap;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  puVar4 = Find__C13ERedBlackTreeUiPUi(&this_00->field0_0x0,id,(uint *)&pResource);
                    /* end of inlined section */
  if (puVar4 != (undefined1 *)0x0) {
    pResource->m_nRefs = pResource->m_nRefs + 1;
    if (seekIfLoaded != 0) {
      (*(code *)pSourceFile->__vtable->GetAccessMode)
                ((int)&pSourceFile->__vtable + (int)*(short *)&pSourceFile->__vtable->GetIOMode,
                 seekIfLoaded,1);
    }
    goto LAB_00133f20;
  }
  bVar2 = false;
  pos = 0;
  length = seekIfLoaded;
  Release__6EMutex(&this->m_dataMutex);
  if (pSourceFile == (EFile *)0x0) {
    bVar3 = LookupId__16EResourceManagerUiRUiT2(this,id,(uint *)((uint)&pResource | 0xc),&length);
    if (!bVar3) goto LAB_00133f20;
    if (this->m_pArchiveFile == (EFile *)0x0) {
      OpenArchiveFile__16EResourceManager(this);
      pSourceFile = this->m_pArchiveFile;
      uVar5 = pos;
    }
    else {
      pSourceFile = this->m_pArchiveFile;
      uVar5 = pos;
    }
  }
  else {
    uVar5 = (*(code *)pSourceFile->__vtable->GetDrive)
                      ((int)&pSourceFile->__vtable +
                       (int)*(short *)&pSourceFile->__vtable->GetDeviceType);
    LookupId__16EResourceManagerUiRUiT2
              (this,id,(uint *)((uint)&pResource | 4),(uint *)((uint)&pResource | 8));
  }
  lVar6 = (*(code *)_pResLoader->__vtable[1].TerminateThread)
                    ((int)&_pResLoader->__vtable + (int)*(short *)&_pResLoader->__vtable[1].Shutdown
                     ,this,id,pSourceFile,uVar5,length,bWait);
  pResource = (EResource *)lVar6;
  if (lVar6 == 0) {
    if (!bWait) goto LAB_00133f20;
    if (this == &_pAudiosampleman->field0_0x0) {
      (*(code *)pSourceFile->__vtable->GetAccessMode)
                ((int)&pSourceFile->__vtable + (int)*(short *)&pSourceFile->__vtable->GetIOMode,
                 uVar5 + length,0);
    }
    if (pResource == (EResource *)0x0) goto LAB_00133f20;
  }
  Acquire__6EMutexUi(&this->m_dataMutex,0xffffffff);
  bVar2 = true;
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
  pResource->m_pManager = this;
  pResource->m_resId = id;
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  puVar4 = Insert__13ERedBlackTreeUiUib(&this_00->field0_0x0,id,(uint)pResource,false);
                    /* end of inlined section */
  if (puVar4 == (undefined1 *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    Find__C13ERedBlackTreeUiPUi(&this_00->field0_0x0,id,(uint *)&pAlreadyThere);
                    /* end of inlined section */
    pResource->m_nRefs = pResource->m_nRefs + 1;
  }
  else {
    Release__6EMutex(&this->m_dataMutex);
    bVar2 = false;
    pEVar1 = (pResource->field0_0x0).__vtable;
    (*(code *)pEVar1[2].SafeDelete)
              ((int)&(pResource->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 2));
  }
LAB_00133f20:
  if (bVar2) {
    Release__6EMutex(&this->m_dataMutex);
  }
  return pResource;
}

void EResourceManager::AddResource(EResource *pResource, u32 id) {
	EAutoMutex mutex;
	EMutex &mutex;
	u32 key;
	
  ESyncObject__vtable *pEVar1;
  EStorable__vtable *pEVar2;
  EAutoMutex mutex;
  
  if (pResource != (EResource *)0x0) {
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
    pEVar1 = (this->m_dataMutex).field0_0x0.__vtable;
    (**(code **)(pEVar1 + 1))
              ((int)&(this->m_dataMutex).field0_0x0.__vtable + (int)*(short *)&pEVar1->Release,
               0xffffffffffffffff);
                    /* end of inlined section */
    pResource->m_pManager = this;
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
    pResource->m_resId = id;
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    Insert__13ERedBlackTreeUiUib(&(this->m_resourceMap).field0_0x0,id,(uint)pResource,false);
    pEVar1 = (this->m_dataMutex).field0_0x0.__vtable;
    (*(code *)pEVar1[1].Acquire)
              ((int)&(this->m_dataMutex).field0_0x0.__vtable + (int)*(short *)&pEVar1[1].ESyncObject
              );
  }
                    /* end of inlined section */
  pEVar2 = (pResource->field0_0x0).__vtable;
  (*(code *)pEVar2[2].SafeDelete)
            ((int)&(pResource->field0_0x0).__vtable + (int)*(short *)(pEVar2 + 2));
  return;
}

EResource* EResourceManager::AddRef(u32 id, EFile *pSourceFile, int seekIfLoaded) {
  EResource *pEVar1;
  
  pEVar1 = addRef__16EResourceManagerUiP5EFileib(this,id,pSourceFile,seekIfLoaded,true);
  return pEVar1;
}

EResource* EResourceManager::AddRef(char *szName, EFile *pSourceFile, int seekIfLoaded) {
	u32 id;
	
  bool bVar1;
  uint id;
  EResource *pEVar2;
  
  id = CalcId__16EResourceManagerPCc(szName);
  bVar1 = IsValid__16EResourceManagerUi(this,id);
  if (bVar1) {
    pEVar2 = addRef__16EResourceManagerUiP5EFileib(this,id,pSourceFile,seekIfLoaded,true);
  }
  else {
    pEVar2 = (EResource *)0x0;
  }
  return pEVar2;
}

EResource* EResourceManager::AddRefAsync(u32 id) {
  EResource *pEVar1;
  
  pEVar1 = addRef__16EResourceManagerUiP5EFileib(this,id,(EFile *)0x0,0,false);
  return pEVar1;
}

void EResourceManager::GetIds(u32 *&idsOut, int &idCountOut) {
  *idCountOut = *this->m_pIndex;
  *idsOut = this->m_pIndex + 1;
  return;
}

void EResourceManager::Reload(u32 id) {
	EResource *pResource;
	EAutoMutex mutex;
	EMutex &mutex;
	u32 key;
	u32 pos;
	u32 length;
	
  ESyncObject__vtable *pEVar1;
  EAutoMutex mutex;
  EResource *pResource;
  uint pos;
  uint length;
  
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar1 = (this->m_dataMutex).field0_0x0.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  mutex.m_mutex = &this->m_dataMutex;
  (**(code **)(pEVar1 + 1))
            ((int)&(this->m_dataMutex).field0_0x0.__vtable + (int)*(short *)&pEVar1->Release,
             0xffffffffffffffff);
  Find__C13ERedBlackTreeUiPUi(&(this->m_resourceMap).field0_0x0,id,(uint *)((uint)&mutex | 4));
  pEVar1 = ((mutex.m_mutex)->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Acquire)
            ((int)&((mutex.m_mutex)->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
                    /* end of inlined section */
  return;
}

void EResourceManager::Reload(char *szName) {
  uint id;
  
  id = CalcId__16EResourceManagerPCc(szName);
  Reload__16EResourceManagerUi(this,id);
  return;
}

void EResourceManager::AddRef(EResource *pResource) {
	EAutoMutex mutex;
	EMutex &mutex;
	
  ESyncObject__vtable *pEVar1;
  EAutoMutex mutex;
  
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar1 = (this->m_dataMutex).field0_0x0.__vtable;
  (**(code **)(pEVar1 + 1))
            ((int)&(this->m_dataMutex).field0_0x0.__vtable + (int)*(short *)&pEVar1->Release,
             0xffffffffffffffff);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
  pResource->m_nRefs = pResource->m_nRefs + 1;
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar1 = (this->m_dataMutex).field0_0x0.__vtable;
  (*(code *)pEVar1[1].Acquire)
            ((int)&(this->m_dataMutex).field0_0x0.__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
  return;
}

void EResourceManager::DelRef(u32 id) {
	EResource *pResource;
	EAutoMutex mutex;
	EMutex &mutex;
	u32 key;
	
  ESyncObject__vtable *pEVar1;
  EAutoMutex mutex;
  EResource *pResource;
  
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar1 = (this->m_dataMutex).field0_0x0.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  mutex.m_mutex = &this->m_dataMutex;
  (**(code **)(pEVar1 + 1))
            ((int)&(this->m_dataMutex).field0_0x0.__vtable + (int)*(short *)&pEVar1->Release,
             0xffffffffffffffff);
  Find__C13ERedBlackTreeUiPUi(&(this->m_resourceMap).field0_0x0,id,(uint *)((uint)&mutex | 4));
  pEVar1 = ((mutex.m_mutex)->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Acquire)
            ((int)&((mutex.m_mutex)->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
                    /* end of inlined section */
  DelRef__16EResourceManagerP9EResource(this,(EResource *)0x0);
  return;
}

void EResourceManager::DelRef(char *szName) {
  uint id;
  
  id = CalcId__16EResourceManagerPCc(szName);
  DelRef__16EResourceManagerUi(this,id);
  return;
}

void EResourceManager::DelRef(EResource *pResource) {
  EStorable__vtable *pEVar1;
  int iVar2;
  
  Acquire__6EMutexUi(&this->m_dataMutex,0xffffffff);
  iVar2 = pResource->m_nRefs + -1;
  pResource->m_nRefs = iVar2;
  if (iVar2 == 0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    Remove__13ERedBlackTreeUi(&(this->m_resourceMap).field0_0x0,pResource->m_resId);
                    /* end of inlined section */
    Release__6EMutex(&this->m_dataMutex);
    pEVar1 = (pResource->field0_0x0).__vtable;
    (*(code *)pEVar1->GetTypeName)
              ((int)&(pResource->field0_0x0).__vtable + (int)*(short *)&pEVar1->GetTypeInfo);
  }
  else {
    Release__6EMutex(&this->m_dataMutex);
  }
  return;
}

u32 EResourceManager::GetSize(char *szName) {
  uint uVar1;
  
  uVar1 = CalcId__16EResourceManagerPCc(szName);
  uVar1 = GetSize__16EResourceManagerUi(this,uVar1);
  return uVar1;
}

u32 EResourceManager::GetSize(u32 id) {
	u32 pos;
	u32 length;
	
  bool bVar1;
  undefined8 unaff_retaddr;
  uint pos;
  uint length;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  bVar1 = LookupId__16EResourceManagerUiRUiT2(this,id,&pos,(uint *)((uint)&pos | 4));
  if (!bVar1) {
    length = 0;
  }
  return length;
}

bool EResourceManager::IsValid(u32 id) {
	u32 pos;
	u32 length;
	
  bool bVar1;
  undefined8 unaff_retaddr;
  uint pos;
  uint length;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  bVar1 = LookupId__16EResourceManagerUiRUiT2(this,id,&pos,(uint *)((uint)&pos | 4));
  return bVar1;
}

bool EResourceManager::IsValid(char *szName) {
  bool bVar1;
  uint id;
  
  id = CalcId__16EResourceManagerPCc(szName);
  bVar1 = IsValid__16EResourceManagerUi(this,id);
  return bVar1;
}

bool EResourceManager::IsLoaded(u32 id) {
	EAutoMutex mutex;
	EMutex &mutex;
	u32 key;
	
  ESyncObject__vtable *pEVar1;
  undefined1 *puVar2;
  EAutoMutex mutex;
  
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar1 = (this->m_dataMutex).field0_0x0.__vtable;
  (**(code **)(pEVar1 + 1))
            ((int)&(this->m_dataMutex).field0_0x0.__vtable + (int)*(short *)&pEVar1->Release,
             0xffffffffffffffff);
  puVar2 = Find__C13ERedBlackTreeUiPUi(&(this->m_resourceMap).field0_0x0,id,(uint *)0x0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar1 = (this->m_dataMutex).field0_0x0.__vtable;
  (*(code *)pEVar1[1].Acquire)
            ((int)&(this->m_dataMutex).field0_0x0.__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
                    /* end of inlined section */
  return puVar2 != (undefined1 *)0x0;
}

bool EResourceManager::IsLoaded(char *szName) {
  bool bVar1;
  uint id;
  
  id = CalcId__16EResourceManagerPCc(szName);
  bVar1 = IsLoaded__16EResourceManagerUi(this,id);
  return bVar1;
}

void EResourceManager::ResourceDestructing(EResource *pResource) {
	EAutoMutex mutex;
	EMutex &mutex;
	TRedBlackTree<unsigned int,EResource *> *this;
	
  ESyncObject__vtable *pEVar1;
  undefined1 *i;
  EAutoMutex mutex;
  
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar1 = (this->m_dataMutex).field0_0x0.__vtable;
  (**(code **)(pEVar1 + 1))
            ((int)&(this->m_dataMutex).field0_0x0.__vtable + (int)*(short *)&pEVar1->Release,
             0xffffffffffffffff);
  i = Find__C13ERedBlackTreeUiPUi(&(this->m_resourceMap).field0_0x0,pResource->m_resId,(uint *)0x0);
                    /* end of inlined section */
  if (i != (undefined1 *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    Remove__13ERedBlackTreeP17RBIteratorPtrType(&(this->m_resourceMap).field0_0x0,i);
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  }
  pEVar1 = (this->m_dataMutex).field0_0x0.__vtable;
  (*(code *)pEVar1[1].Acquire)
            ((int)&(this->m_dataMutex).field0_0x0.__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
  return;
}

EResource* EResourceManager::AllocateAndLoadResource(EStream &s) {
	EResource *pResource;
	
  undefined8 unaff_retaddr;
  EResource *pResource;
  undefined4 local_10;
  undefined4 uStack_c;
  
                    /* end of inlined section */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  __rs__FR7EStreamRP9EResource(s,&pResource);
  return pResource;
}

EResource* EResourceManager::AllocateAndLoadResource(EFile *pFile, u32 uLength) {
	EFileStream s;
	
  int pos;
  EResource *pEVar1;
  EFileStream s;
  
  __11EFileStream(&s);
  pos = (*(code *)pFile->__vtable->GetDrive)
                  ((int)&pFile->__vtable + (int)*(short *)&pFile->__vtable->GetDeviceType);
  Attach__11EFileStreamP5EFile15FSReadWriteModeib(&s,pFile,FS_READ,pos,false);
  pEVar1 = (EResource *)
           (*(code *)this->__vtable[1].AllocateAndLoadResource)
                     ((int)&(this->m_dataMutex).field0_0x0.__vtable +
                      (int)*(short *)&this->__vtable[1].AllocateAndLoadResource,&s);
  ___11EFileStream(&s,2);
  return pEVar1;
}

u32 EResourceManager::CalcId(char *szName) {
  uint uVar1;
  
  uVar1 = ComputeSymbol__9EChecksumPCc(szName);
  return uVar1;
}

void EResourceManager::SetTraceState(bool bEnabled) {
  __16EResourceManager_m_bTraceEnabled = (int)bEnabled;
  return;
}

bool EResourceManager::GetTraceState() {
  return SUB41(__16EResourceManager_m_bTraceEnabled,0);
}

bool EResourceManager::LookupId(EResourceManager *pManager, u32 id, u32 &posOut, u32 &lengthOut) {
  bool bVar1;
  
  bVar1 = LookupId__16EResourceManagerUiRUiT2(pManager,id,posOut,lengthOut);
  return bVar1;
}
