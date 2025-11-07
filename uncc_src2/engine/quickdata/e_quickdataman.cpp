// STATUS: NOT STARTED

#include "e_quickdataman.h"

EQuickdataManager _quickdataman = {
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
	},
	/* .m_iLanguage = */ 0
};

__vtbl_ptr_type EQuickdataManager virtual table[7] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EQuickdataManager::~EQuickdataManager,
		/* .__delta2 = */ 14984
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
		/* .__pfn = */ &EQuickdataManager::AllocateAndLoadResource,
		/* .__delta2 = */ 14720
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

EResource* EQuickdataManager::AllocateAndLoadResource(EFile *pFile, u32 uLength) {
	ERQuickdata *pRQuickdata;
	u32 uOffs;
	
  ERQuickdata *pEVar1;
  int iVar2;
  
                    /* inlined from c:/eor/src2/engine/quickdata/e_rquickdata.h */
  pEVar1 = (ERQuickdata *)_memmanAlloc__FUiUi(0x1c,4);
                    /* end of inlined section */
  pEVar1 = __11ERQuickdata(pEVar1);
  iVar2 = (*(code *)pFile->__vtable->GetDrive)
                    ((int)&pFile->__vtable + (int)*(short *)&pFile->__vtable->GetDeviceType);
  Load__11ERQuickdataP5EFilei(pEVar1,pFile,this->m_iLanguage);
  (*(code *)pFile->__vtable->GetAccessMode)
            ((int)&pFile->__vtable + (int)*(short *)&pFile->__vtable->GetIOMode,iVar2 + uLength,0);
  return &pEVar1->field0_0x0;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___16EResourceManager(&_quickdataman.field0_0x0,2);
    }
    else {
                    /* inlined from c:/eor/src2/engine/quickdata/e_quickdataman.h */
      __16EResourceManager(&_quickdataman.field0_0x0);
      _quickdataman.m_iLanguage = 0;
                    /* end of inlined section */
      _quickdataman.field0_0x0.__vtable = (EResourceManager__vtable *)_vt_17EQuickdataManager;
    }
  }
  return;
}

void EQuickdataManager::~EQuickdataManager(int __in_chrg) {
  ___16EResourceManager(&this->field0_0x0,__in_chrg);
  return;
}

ERQuickdata* EQuickdataManager::AddRef(u32 id, EFile *pSourceFile, int seekIfLoaded) {
  ERQuickdata *pEVar1;
  
  pEVar1 = (ERQuickdata *)
           AddRef__16EResourceManagerUiP5EFilei(&this->field0_0x0,id,pSourceFile,seekIfLoaded);
  return pEVar1;
}

ERQuickdata* EQuickdataManager::AddRef(char *szName, EFile *pSourceFile, int seekIfLoaded) {
  ERQuickdata *pEVar1;
  
  pEVar1 = (ERQuickdata *)
           AddRef__16EResourceManagerPCcP5EFilei(&this->field0_0x0,szName,pSourceFile,seekIfLoaded);
  return pEVar1;
}

EQuickdataManager* EQuickdataManager::EQuickdataManager() {
  __16EResourceManager(&this->field0_0x0);
  this->m_iLanguage = 0;
  (this->field0_0x0).__vtable = (EResourceManager__vtable *)_vt_17EQuickdataManager;
  return this;
}

int EQuickdataManager::GetCurrentLanguage() {
  return this->m_iLanguage;
}

void EQuickdataManager::SetCurrentLanguage(int iLanguage) {
  this->m_iLanguage = iLanguage;
  return;
}

void global constructors keyed to _quickdataman() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to _quickdataman() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}
