// STATUS: NOT STARTED

#include "e_datasetman.h"

EDatasetManager _datasetman = {
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
	/* .m_fLoadProgress = */ 0.f
};

__vtbl_ptr_type EDatasetManager virtual table[7] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EDatasetManager::~EDatasetManager,
		/* .__delta2 = */ -28200
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
		/* .__pfn = */ &EDatasetManager::AllocateAndLoadResource,
		/* .__delta2 = */ -28408
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

EResource* EDatasetManager::AllocateAndLoadResource(EFile *pFile, u32 uLength) {
	ERDataset *pRDataset;
	
  ERDataset *pEVar1;
  
  pEVar1 = (ERDataset *)__builtin_new(0x1c);
  pEVar1 = __9ERDataset(pEVar1);
  Load__9ERDatasetP5EFileUi(pEVar1,pFile,uLength);
  return &pEVar1->field0_0x0;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___16EResourceManager(&_datasetman.field0_0x0,2);
    }
    else {
                    /* inlined from c:/eor/src2/engine/dataset/e_datasetman.h */
      __16EResourceManager(&_datasetman.field0_0x0);
      _datasetman.m_fLoadProgress = -1.0;
      _datasetman.field0_0x0.__vtable = (EResourceManager__vtable *)_vt_15EDatasetManager;
                    /* end of inlined section */
      _datasetman.field0_0x0._56_4_ = 1;
    }
  }
  return;
}

void EDatasetManager::~EDatasetManager(int __in_chrg) {
  ___16EResourceManager(&this->field0_0x0,__in_chrg);
  return;
}

EDatasetManager* EDatasetManager::EDatasetManager() {
  __16EResourceManager(&this->field0_0x0);
  (this->field0_0x0).__vtable = (EResourceManager__vtable *)_vt_15EDatasetManager;
  *(undefined4 *)&(this->field0_0x0).m_bSeqAccess = 1;
  this->m_fLoadProgress = -1.0;
  return this;
}

ERDataset* EDatasetManager::AddRef(u32 id, EFile *pSourceStream, int seekIfLoaded) {
  ERDataset *pEVar1;
  
  pEVar1 = (ERDataset *)AddRef__16EResourceManagerUiP5EFilei(&this->field0_0x0,id,(EFile *)0x0,0);
  return pEVar1;
}

ERDataset* EDatasetManager::AddRef(char *szName, EFile *pSourceStream, int seekIfLoaded) {
  ERDataset *pEVar1;
  
  pEVar1 = (ERDataset *)
           AddRef__16EResourceManagerPCcP5EFilei(&this->field0_0x0,szName,(EFile *)0x0,0);
  return pEVar1;
}

ERDataset* EDatasetManager::AddRefAsync(u32 id) {
  ERDataset *pEVar1;
  
  pEVar1 = (ERDataset *)AddRefAsync__16EResourceManagerUi(&this->field0_0x0,id);
  return pEVar1;
}

ERDataset* EDatasetManager::GetRefAsync(u32 id, bool bWait) {
  ERDataset *pEVar1;
  
  pEVar1 = (ERDataset *)GetRefAsync__16EResourceManagerUib(&this->field0_0x0,id,bWait);
  return pEVar1;
}

float EDatasetManager::GetLoadProgress() {
  return this->m_fLoadProgress;
}

void EDatasetManager::SetLoadProgress(float progress) {
  this->m_fLoadProgress = progress;
  return;
}

void global constructors keyed to _datasetman() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to _datasetman() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}
