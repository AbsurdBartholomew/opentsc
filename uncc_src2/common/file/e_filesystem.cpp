// STATUS: NOT STARTED

#include "e_filesystem.h"

struct TRedBlackTree<EFile::AccessMode,EFileSystem::AMLevelCreator *> : ERedBlackTree {
	TRedBlackTree<EFile::AccessMode,EFileSystem::AMLevelCreator *>& operator=();
	TRedBlackTree();
	TRedBlackTree();
	TRedBlackTree(TRedBlackTree<EFile::AccessMode,EFileSystem::AMLevelCreator *>*, int, void);
	AMLevelCreator* operator[]();
	AMLevelCreator*& operator[]();
	RBIterator Insert();
	RBIterator Find();
	RBIterator FindFirst();
	RBIterator FindNext();
	bool Remove();
	void Remove();
	bool Delete();
	void Delete();
	RBIterator SetValue();
	void SetValue();
	void SetValues();
	static AccessMode GetKey(/* parameters unknown */);
	static AMLevelCreator* GetValue(/* parameters unknown */);
	void DeleteAll();
	void SafeDeleteAll();
};

struct TRedBlackTree<EFile::IOMode,EFileSystem::IOMLevelCreater *> : ERedBlackTree {
	TRedBlackTree<EFile::IOMode,EFileSystem::IOMLevelCreater *>& operator=();
	TRedBlackTree();
	TRedBlackTree();
	TRedBlackTree(TRedBlackTree<EFile::IOMode,EFileSystem::IOMLevelCreater *>*, int, void);
	IOMLevelCreater* operator[]();
	IOMLevelCreater*& operator[]();
	RBIterator Insert();
	RBIterator Find();
	RBIterator FindFirst();
	RBIterator FindNext();
	bool Remove();
	void Remove();
	bool Delete();
	void Delete();
	RBIterator SetValue();
	void SetValue();
	void SetValues();
	static IOMode GetKey(/* parameters unknown */);
	static IOMLevelCreater* GetValue(/* parameters unknown */);
	void DeleteAll();
	void SafeDeleteAll();
};

struct TStringRedBlackTree<EFile * (*)(EFile *, const char *, const char *, EFile::DeviceType, EFile::AccessMode)> : EStringRedBlackTree {
	TStringRedBlackTree<EFile * (*)(EFile *, const char *, const char *, EFile::DeviceType, EFile::AccessMode)>& operator=();
	TStringRedBlackTree();
	TStringRedBlackTree();
	TStringRedBlackTree(TStringRedBlackTree<EFile * (*)(EFile *, const char *, const char *, EFile::DeviceType, EFile::AccessMode)>*, int, void);
	IFileObjCreatorCB operator[]();
	IFileObjCreatorCB& operator[]();
	SRBIterator Insert();
	SRBIterator Find();
	SRBIterator FindFirst();
	SRBIterator FindNext();
	bool Remove();
	void Remove();
	bool Delete();
	void Delete();
	SRBIterator SetValue();
	static void SetValue(/* parameters unknown */);
	void SetValues();
	static IFileObjCreatorCB GetValue(/* parameters unknown */);
	void DeleteAll();
	void SafeDeleteAll();
};

EPs2FileSystem _eorFileSys = {
	/* base class 0 = */ {
		/* base class 0 = */ {
			/* .$vf1727 = */ NULL
		},
		/* .m_dbCreators = */ {
			/* base class 0 = */ {
				/* .m_list = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				},
				/* .m_pRoot = */ NULL
			}
		},
		/* .m_pfnDefaultCreator = */ NULL,
		/* .m_eDefaultDeviceType = */ DT_DEFAULT,
		/* .m_initialized = */ false
	},
	/* .m_pszHostIPAddress = */ {
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
		/* [15] = */ 0
	}
};

__vtbl_ptr_type EFileSystem virtual table[8] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EFileSystem::~EFileSystem,
		/* .__delta2 = */ -28624
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
		/* .__pfn = */ &EFileSystem::ManagedShutdown,
		/* .__delta2 = */ -28496
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EFileSystem::Create,
		/* .__delta2 = */ -27968
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EFileSystem::Destroy,
		/* .__delta2 = */ -27616
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EFileSystem::Init,
		/* .__delta2 = */ -27552
	},
	/* [7] = */ {
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

EFileSystem* EFileSystem::EFileSystem() {
	EGlobalManagerClient *this;
	
                    /* inlined from /eor/src2/common/util/e_globalmanagerclient.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/util/e_globalmanagerclient.h */
  (this->field0_0x0).__vtable = (EGlobalManagerClient__vtable *)_vt_20EGlobalManagerClient;
  Register__14EGlobalManagerP20EGlobalManagerClienti(&this->field0_0x0,3);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  (this->field0_0x0).__vtable = (EGlobalManagerClient__vtable *)_vt_11EFileSystem;
  __13ERedBlackTree(&(this->m_dbCreators).field0_0x0);
                    /* end of inlined section */
  *(undefined4 *)&this->m_initialized = 0;
  return this;
}

void EFileSystem::~EFileSystem(int __in_chrg) {
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
  (this->field0_0x0).__vtable = (EGlobalManagerClient__vtable *)_vt_11EFileSystem;
  if (bVar1) {
    Shutdown__14EGlobalManager();
  }
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  RemoveAll__13ERedBlackTree(&(this->m_dbCreators).field0_0x0);
  (this->field0_0x0).__vtable = (EGlobalManagerClient__vtable *)_vt_20EGlobalManagerClient;
  Shutdown__20EGlobalManagerClient(&this->field0_0x0);
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}

void EFileSystem::ManagedShutdown() {
	RBIterator iType;
	RBIterator i;
	RBIterator i;
	RBIterator iMode;
	RBIterator i;
	RBIterator i;
	
  void *pAddress;
  ERedBlackTree *pEVar1;
  void *pAddress_00;
  int iVar2;
  void *pAddress_01;
  EStringRedBlackTree *this_00;
  int iVar3;
  ERedBlackTreeNode *pEVar4;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar4 = (this->m_dbCreators).field0_0x0.m_list.m_pHead;
                    /* end of inlined section */
  if (pEVar4 != (ERedBlackTreeNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    pAddress = (void *)pEVar4->value;
    while( true ) {
      if (*(int **)((int)pAddress + 4) != (int *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
        iVar3 = **(int **)((int)pAddress + 4);
                    /* end of inlined section */
        if (iVar3 == 0) {
          pEVar1 = *(ERedBlackTree **)((int)pAddress + 4);
        }
        else {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
          pAddress_00 = *(void **)(iVar3 + 0x1c);
          while( true ) {
            if (*(int **)((int)pAddress_00 + 4) != (int *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
              iVar2 = **(int **)((int)pAddress_00 + 4);
                    /* end of inlined section */
              if (iVar2 == 0) {
                pEVar1 = *(ERedBlackTree **)((int)pAddress_00 + 4);
              }
              else {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
                pAddress_01 = *(void **)(iVar2 + 0x1c);
                while( true ) {
                  this_00 = *(EStringRedBlackTree **)((int)pAddress_01 + 4);
                  if (this_00 != (EStringRedBlackTree *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_stringredblacktree.h */
                    RemoveAll__19EStringRedBlackTree(this_00);
                    _memmanFree__FPv(this_00);
                  }
                    /* inlined from e_standard_heap.h */
                  _memmanFree__FPv(pAddress_01);
                    /* end of inlined section */
                  if (iVar2 == 0) break;
                  pAddress_01 = *(void **)(iVar2 + 0x1c);
                }
                pEVar1 = *(ERedBlackTree **)((int)pAddress_00 + 4);
              }
              if (pEVar1 != (ERedBlackTree *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
                RemoveAll__13ERedBlackTree(pEVar1);
                _memmanFree__FPv(pEVar1);
              }
            }
                    /* inlined from e_standard_heap.h */
            _memmanFree__FPv(pAddress_00);
            iVar3 = *(int *)(iVar3 + 0x10);
                    /* end of inlined section */
            if (iVar3 == 0) break;
            pAddress_00 = *(void **)(iVar3 + 0x1c);
          }
          pEVar1 = *(ERedBlackTree **)((int)pAddress + 4);
        }
        if (pEVar1 != (ERedBlackTree *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
          RemoveAll__13ERedBlackTree(pEVar1);
          _memmanFree__FPv(pEVar1);
        }
      }
                    /* inlined from e_standard_heap.h */
      _memmanFree__FPv(pAddress);
      pEVar4 = pEVar4->pNext;
                    /* end of inlined section */
      if (pEVar4 == (ERedBlackTreeNode *)0x0) break;
      pAddress = (void *)pEVar4->value;
    }
  }
  RemoveAll__13ERedBlackTree(&(this->m_dbCreators).field0_0x0);
  return;
}

IFileObjCreatorCB EFileSystem::FindCreator(DeviceType eDevice, AccessMode eAccess, IOMode eMode, char *pszExt) {
	IFileObjCreatorCB pfnCreator;
	RBValue v;
	AccessMode key;
	RBValue v;
	IOMode key;
	RBValue v;
	char *key;
	
  undefined1 *puVar1;
  undefined4 *puVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  puVar1 = Find__C13ERedBlackTreeUiPUi(&(this->m_dbCreators).field0_0x0,eDevice,(uint *)0x0);
                    /* end of inlined section */
  if (puVar1 == (undefined1 *)0x0) {
    return (undefined1 *)0x0;
  }
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  puVar2 = *(undefined4 **)(puVar1 + 0x1c);
                    /* end of inlined section */
  if ((ERedBlackTree *)puVar2[1] != (ERedBlackTree *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    puVar1 = Find__C13ERedBlackTreeUiPUi((ERedBlackTree *)puVar2[1],eAccess,(uint *)0x0);
                    /* end of inlined section */
    if (puVar1 == (undefined1 *)0x0) {
      return (undefined1 *)*puVar2;
    }
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    puVar2 = *(undefined4 **)(puVar1 + 0x1c);
                    /* end of inlined section */
    if ((ERedBlackTree *)puVar2[1] != (ERedBlackTree *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
      puVar1 = Find__C13ERedBlackTreeUiPUi((ERedBlackTree *)puVar2[1],eMode,(uint *)0x0);
                    /* end of inlined section */
      if (puVar1 == (undefined1 *)0x0) {
        return (undefined1 *)*puVar2;
      }
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
      puVar2 = *(undefined4 **)(puVar1 + 0x1c);
                    /* end of inlined section */
      if ((EStringRedBlackTree *)puVar2[1] != (EStringRedBlackTree *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_stringredblacktree.h */
        puVar1 = Find__C19EStringRedBlackTreePCcPUi
                           ((EStringRedBlackTree *)puVar2[1],pszExt,(uint *)0x0);
                    /* end of inlined section */
        if (puVar1 == (undefined1 *)0x0) {
          return (undefined1 *)*puVar2;
        }
                    /* end of inlined section */
        return *(undefined1 **)(puVar1 + 0x18);
      }
    }
  }
  return (undefined1 *)*puVar2;
}

bool EFileSystem::Create(EFile *&pFile, char *pszFileName, char *pszMode, DeviceType eDevice, AccessMode eAccess) {
	bool bResult;
	IFileObjCreatorCB pfnCreator;
	EString strFileName;
	IOMode eMode;
	char *szSource;
	
  EGlobalManagerClient__vtable *pEVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  bool bVar5;
  IOMode eMode_00;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_retaddr;
  EString strFileName;
  EString local_b0 [4];
  IOMode eMode;
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
  
  local_20 = (undefined4)unaff_s7;
  uStack_1c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_30 = (undefined4)unaff_s6;
  uStack_2c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_40 = (undefined4)unaff_s5;
  uStack_3c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_50 = (undefined4)unaff_s4;
  uStack_4c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_60 = (undefined4)unaff_s3;
  uStack_5c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_70 = (undefined4)unaff_s2;
  uStack_6c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_80 = (undefined4)unaff_s1;
  uStack_7c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_90 = (undefined4)unaff_s0;
  uStack_8c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if (*(int *)&this->m_initialized == 0) {
    pEVar1 = (this->field0_0x0).__vtable;
    (*(code *)pEVar1[3].EGlobalManagerClient)
              ((int)&(this->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 3),0);
  }
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
  MakeCopy__7EStringPCc(&strFileName,pszFileName);
                    /* end of inlined section */
  bVar5 = false;
  bVar2 = ParseMode__11EFileSystemPCcRQ25EFile6IOMode(this,pszMode,&eMode);
  if (bVar2) {
    if (eDevice == DT_DEFAULT) {
      eDevice = this->m_eDefaultDeviceType;
    }
    eMode_00 = eMode & ~IOM_APPEND;
    eMode = eMode_00;
    ExtractExtension__C7EString(local_b0);
    pcVar3 = (code *)FindCreator__C11EFileSystemQ25EFile10DeviceTypeQ25EFile10AccessModeQ25EFile6IOModePCc
                               (this,eDevice,eAccess,eMode_00,local_b0[0].m_p);
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
    Deallocate__7EStringPc(local_b0,local_b0[0].m_p);
                    /* end of inlined section */
    *pFile = (EFile *)0x0;
    if (pcVar3 == (code *)0x0) {
      lVar4 = (*(code *)this->m_pfnDefaultCreator)(0,pszFileName,pszMode,eDevice,eAccess);
      *pFile = (EFile *)lVar4;
    }
    else {
      lVar4 = (*pcVar3)(0,pszFileName,pszMode,eDevice,eAccess);
      *pFile = (EFile *)lVar4;
    }
    bVar5 = lVar4 != 0;
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
  }
  Deallocate__7EStringPc(&strFileName,strFileName.m_p);
                    /* end of inlined section */
  return bVar5;
}

void EFileSystem::Destroy(EFile *&pFile) {
  EFile__vtable *pEVar1;
  
  pEVar1 = (*pFile)->__vtable;
  (*(code *)pEVar1[1].Destroy)((int)&(*pFile)->__vtable + (int)*(short *)&pEVar1[1].GetSystemHandle)
  ;
  *pFile = (EFile *)0x0;
  return;
}

bool EFileSystem::Init(DeviceType eDefaultType) {
	EGlobalManagerClient *this;
	
  bool bVar1;
  
  if (*(int *)&this->m_initialized == 0) {
                    /* inlined from /eor/src2/common/util/e_globalmanagerclient.h */
    if (__14EGlobalManager_m_startupComplete == 0) {
      Startup__14EGlobalManager();
                    /* end of inlined section */
    }
    bVar1 = true;
    this->m_eDefaultDeviceType = eDefaultType;
    *(undefined4 *)&this->m_initialized = 1;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

DeviceType EFileSystem::GetDefaultType() {
  return this->m_eDefaultDeviceType;
}

void EFileSystem::SetDefaultObject(IFileObjCreatorCB pfnCreator) {
  this->m_pfnDefaultCreator = pfnCreator;
  return;
}

bool EFileSystem::RegisterFileObject(DeviceType eDevice, AccessMode eAccess, IOMode eMode, char *pszExt, IFileObjCreatorCB pfnCreator) {
	TRedBlackTree<EFile::DeviceType,EFileSystem::DTLevelCreator *> *this;
	DeviceType key;
	RBValue v;
	AccessMode key;
	IOMode key;
	char *key;
	
  undefined1 *puVar1;
  ERedBlackTree *pEVar2;
  EStringRedBlackTree *this_00;
  undefined4 *puVar3;
  
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  puVar1 = Find__C13ERedBlackTreeUiPUi(&(this->m_dbCreators).field0_0x0,eDevice,(uint *)0x0);
                    /* end of inlined section */
  if (puVar1 == (undefined1 *)0x0) {
    RegisterDTLevel__11EFileSystemRt13TRedBlackTree2ZQ25EFile10DeviceTypeZPQ211EFileSystem14DTLevelCreatorPFP5EFilePCcPCcQ25EFile10DeviceTypeQ25EFile10AccessMode_P5EFileQ25EFile10DeviceTypeQ25EFile10AccessModeQ25EFile6IOModePCc
              (this,&this->m_dbCreators,pfnCreator,eDevice,eAccess,eMode,pszExt);
    return true;
  }
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  puVar3 = *(undefined4 **)(puVar1 + 0x1c);
                    /* end of inlined section */
                    /* end of inlined section */
  if (eAccess == AM_UNSPECIFIED) {
LAB_003295cc:
    *puVar3 = pfnCreator;
  }
  else {
    if ((ERedBlackTree *)puVar3[1] == (ERedBlackTree *)0x0) {
      pEVar2 = (ERedBlackTree *)__builtin_new(0xc);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
      __13ERedBlackTree(pEVar2);
                    /* end of inlined section */
      puVar3[1] = pEVar2;
    }
    else {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
      puVar1 = Find__C13ERedBlackTreeUiPUi((ERedBlackTree *)puVar3[1],eAccess,(uint *)0x0);
                    /* end of inlined section */
      if (puVar1 != (undefined1 *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
        puVar3 = *(undefined4 **)(puVar1 + 0x1c);
                    /* end of inlined section */
        if (eMode == IOM_UNSPECIFIED) {
          *puVar3 = pfnCreator;
          return true;
        }
        if ((ERedBlackTree *)puVar3[1] == (ERedBlackTree *)0x0) {
          pEVar2 = (ERedBlackTree *)__builtin_new(0xc);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
          __13ERedBlackTree(pEVar2);
                    /* end of inlined section */
          puVar3[1] = pEVar2;
LAB_00329640:
          RegisterIOMLevel__11EFileSystemRt13TRedBlackTree2ZQ25EFile6IOModeZPQ211EFileSystem15IOMLevelCreaterPFP5EFilePCcPCcQ25EFile10DeviceTypeQ25EFile10AccessMode_P5EFileQ25EFile6IOModePCc
                    (this,(TRedBlackTree_EFile__IOMode_EFileSystem__IOMLevelCreater___ *)pEVar2,
                     pfnCreator,eMode,pszExt);
          return true;
        }
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
        puVar1 = Find__C13ERedBlackTreeUiPUi((ERedBlackTree *)puVar3[1],eMode,(uint *)0x0);
                    /* end of inlined section */
        if (puVar1 == (undefined1 *)0x0) {
          pEVar2 = (ERedBlackTree *)puVar3[1];
          goto LAB_00329640;
        }
                    /* end of inlined section */
        puVar3 = *(undefined4 **)(puVar1 + 0x1c);
        if (pszExt != (char *)0x0) {
          if ((EStringRedBlackTree *)puVar3[1] == (EStringRedBlackTree *)0x0) {
            this_00 = (EStringRedBlackTree *)__builtin_new(0xc);
                    /* inlined from /eor/src2/common/datastruc/e_stringredblacktree.h */
            __19EStringRedBlackTree(this_00);
                    /* end of inlined section */
            puVar3[1] = this_00;
          }
          else {
                    /* inlined from /eor/src2/common/datastruc/e_stringredblacktree.h */
            puVar1 = Find__C19EStringRedBlackTreePCcPUi
                               ((EStringRedBlackTree *)puVar3[1],pszExt,(uint *)0x0);
                    /* end of inlined section */
            if (puVar1 == (undefined1 *)0x0) {
              this_00 = (EStringRedBlackTree *)puVar3[1];
            }
            else {
                    /* inlined from /eor/src2/common/datastruc/e_stringredblacktree.h */
              Remove__19EStringRedBlackTreeP18SRBIteratorPtrType
                        ((EStringRedBlackTree *)puVar3[1],puVar1);
                    /* end of inlined section */
              this_00 = (EStringRedBlackTree *)puVar3[1];
            }
          }
          RegisterFTLevel__11EFileSystemRt19TStringRedBlackTree1ZPFP5EFilePCcPCcQ25EFile10DeviceTypeQ25EFile10AccessMode_P5EFilePFP5EFilePCcPCcQ25EFile10DeviceTypeQ25EFile10AccessMode_P5EFilePCc
                    (this,(TStringRedBlackTree_EFile_______EFile____const_char____const_char____EFile__DeviceType__EFile__AccessMode__
                           *)this_00,pfnCreator,pszExt);
          return true;
        }
        goto LAB_003295cc;
      }
      pEVar2 = (ERedBlackTree *)puVar3[1];
    }
    RegisterAMLevel__11EFileSystemRt13TRedBlackTree2ZQ25EFile10AccessModeZPQ211EFileSystem14AMLevelCreatorPFP5EFilePCcPCcQ25EFile10DeviceTypeQ25EFile10AccessMode_P5EFileQ25EFile10AccessModeQ25EFile6IOModePCc
              (this,(TRedBlackTree_EFile__AccessMode_EFileSystem__AMLevelCreator___ *)pEVar2,
               pfnCreator,eAccess,eMode,pszExt);
  }
  return true;
}

void EFileSystem::RegisterDTLevel(TRedBlackTree<EFile::DeviceType,EFileSystem::DTLevelCreator *> &mapDeviceType, IFileObjCreatorCB pfnCreator, DeviceType eDevice, AccessMode eAccess, IOMode eMode, char *pszExt) {
	DTLevelCreator *pDTCreator;
	TRedBlackTree<EFile::DeviceType,EFileSystem::DTLevelCreator *> *this;
	DeviceType key;
	
  undefined4 *value;
  ERedBlackTree *this_00;
  
  value = (undefined4 *)__builtin_new(8);
  if (eAccess == AM_UNSPECIFIED) {
    *value = pfnCreator;
    value[1] = 0;
  }
  else {
    *value = 0;
    this_00 = (ERedBlackTree *)__builtin_new(0xc);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    __13ERedBlackTree(this_00);
                    /* end of inlined section */
    value[1] = this_00;
    RegisterAMLevel__11EFileSystemRt13TRedBlackTree2ZQ25EFile10AccessModeZPQ211EFileSystem14AMLevelCreatorPFP5EFilePCcPCcQ25EFile10DeviceTypeQ25EFile10AccessMode_P5EFileQ25EFile10AccessModeQ25EFile6IOModePCc
              (this,(TRedBlackTree_EFile__AccessMode_EFileSystem__AMLevelCreator___ *)this_00,
               pfnCreator,eAccess,eMode,pszExt);
  }
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  Insert__13ERedBlackTreeUiUib(&mapDeviceType->field0_0x0,eDevice,(uint)value,false);
  return;
}

void EFileSystem::RegisterAMLevel(TRedBlackTree<EFile::AccessMode,EFileSystem::AMLevelCreator *> &mapAccessMode, IFileObjCreatorCB pfnCreator, AccessMode eAccess, IOMode eMode, char *pszExt) {
	AMLevelCreator *pAMCreator;
	TRedBlackTree<EFile::AccessMode,EFileSystem::AMLevelCreator *> *this;
	AccessMode key;
	
  undefined4 *value;
  ERedBlackTree *this_00;
  
  value = (undefined4 *)__builtin_new(8);
  if (eMode == IOM_UNSPECIFIED) {
    *value = pfnCreator;
    value[1] = 0;
  }
  else {
    *value = 0;
    this_00 = (ERedBlackTree *)__builtin_new(0xc);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    __13ERedBlackTree(this_00);
                    /* end of inlined section */
    value[1] = this_00;
    RegisterIOMLevel__11EFileSystemRt13TRedBlackTree2ZQ25EFile6IOModeZPQ211EFileSystem15IOMLevelCreaterPFP5EFilePCcPCcQ25EFile10DeviceTypeQ25EFile10AccessMode_P5EFileQ25EFile6IOModePCc
              (this,(TRedBlackTree_EFile__IOMode_EFileSystem__IOMLevelCreater___ *)this_00,
               pfnCreator,eMode,pszExt);
  }
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  Insert__13ERedBlackTreeUiUib(&mapAccessMode->field0_0x0,eAccess,(uint)value,false);
  return;
}

void EFileSystem::RegisterIOMLevel(TRedBlackTree<EFile::IOMode,EFileSystem::IOMLevelCreater *> &mapIOMode, IFileObjCreatorCB pfnCreator, IOMode eMode, char *pszExt) {
	IOMLevelCreater *pIOMCreator;
	TRedBlackTree<EFile::IOMode,EFileSystem::IOMLevelCreater *> *this;
	IOMode key;
	
  undefined4 *value;
  EStringRedBlackTree *this_00;
  
  value = (undefined4 *)__builtin_new(8);
  if (pszExt == (char *)0x0) {
    *value = pfnCreator;
    value[1] = 0;
  }
  else {
    *value = 0;
    this_00 = (EStringRedBlackTree *)__builtin_new(0xc);
                    /* inlined from /eor/src2/common/datastruc/e_stringredblacktree.h */
    __19EStringRedBlackTree(this_00);
                    /* end of inlined section */
    value[1] = this_00;
    RegisterFTLevel__11EFileSystemRt19TStringRedBlackTree1ZPFP5EFilePCcPCcQ25EFile10DeviceTypeQ25EFile10AccessMode_P5EFilePFP5EFilePCcPCcQ25EFile10DeviceTypeQ25EFile10AccessMode_P5EFilePCc
              (this,(TStringRedBlackTree_EFile_______EFile____const_char____const_char____EFile__DeviceType__EFile__AccessMode__
                     *)this_00,pfnCreator,pszExt);
  }
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  Insert__13ERedBlackTreeUiUib(&mapIOMode->field0_0x0,eMode,(uint)value,false);
  return;
}

void EFileSystem::RegisterFTLevel(TStringRedBlackTree<EFile * (*)(EFile *, const char *, const char *, EFile::DeviceType, EFile::AccessMode)> &mapFileType, IFileObjCreatorCB pfnCreator, char *pszExt) {
                    /* inlined from /eor/src2/common/datastruc/e_stringredblacktree.h */
  Insert__19EStringRedBlackTreePCcUib(&mapFileType->field0_0x0,pszExt,(uint)pfnCreator,false);
  return;
}

bool EFileSystem::ParseMode(char *pszMode, IOMode &eMode) {
  int iVar1;
  
  iVar1 = strcmp(pszMode,"r");
  if ((iVar1 == 0) || (iVar1 = strcmp(pszMode,"rb"), iVar1 == 0)) {
    *eMode = IOM_READ;
  }
  else {
    iVar1 = strcmp(pszMode,"r+");
    if ((((iVar1 == 0) || (iVar1 = strcmp(pszMode,"r+b"), iVar1 == 0)) ||
        (iVar1 = strcmp(pszMode,"w+"), iVar1 == 0)) || (iVar1 = strcmp(pszMode,"w+b"), iVar1 == 0))
    {
      *eMode = IOM_READ_WRITE;
    }
    else {
      iVar1 = strcmp(pszMode,"w");
      if ((iVar1 == 0) || (iVar1 = strcmp(pszMode,"wb"), iVar1 == 0)) {
        *eMode = IOM_WRITE;
      }
      else {
        iVar1 = strcmp(pszMode,"a");
        if ((iVar1 == 0) || (iVar1 = strcmp(pszMode,"ab"), iVar1 == 0)) {
          *eMode = IOM_WRITE_APPEND;
        }
        else {
          iVar1 = strcmp(pszMode,"a+");
          if ((iVar1 != 0) && (iVar1 = strcmp(pszMode,"a+b"), iVar1 != 0)) {
            return false;
          }
          *eMode = IOM_READ_WRITE_APPEND;
        }
      }
    }
  }
  return true;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___14EPs2FileSystem(&_eorFileSys,2);
    }
    else {
      __14EPs2FileSystem(&_eorFileSys);
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

void global constructors keyed to _eorFileSys() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to _eorFileSys() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}
