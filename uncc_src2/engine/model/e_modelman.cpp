// STATUS: NOT STARTED

#include "e_modelman.h"

EModelManager _modelman = {
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
	/* .m_nTrisLoaded = */ 0,
	/* .m_nStripsLoaded = */ 0
};

__vtbl_ptr_type EModelManager virtual table[7] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EModelManager::~EModelManager,
		/* .__delta2 = */ 29240
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
		/* .__pfn = */ &EModelManager::AllocateAndLoadResource,
		/* .__delta2 = */ 29048
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

EResource* EModelManager::AllocateAndLoadResource(EStream &s) {
	ERModel *pRModel;
	
  ERModel *pEVar1;
  
  ResetLoadCounters__13EModelManager(this);
  pEVar1 = (ERModel *)__builtin_new(0x68);
  pEVar1 = __7ERModel(pEVar1);
  __rs__FR7EStreamR9EStorable(s,(EStorable *)pEVar1);
  Empty__7EString(&(pEVar1->field0_0x0).m_name);
  return &pEVar1->field0_0x0;
}

void EModelManager::ResetLoadCounters() {
  this->m_nStripsLoaded = 0;
  this->m_nTrisLoaded = 0;
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___16EResourceManager(&_modelman.field0_0x0,2);
    }
    else {
                    /* inlined from c:/eor/src2/engine/model/e_modelman.h */
      __16EResourceManager(&_modelman.field0_0x0);
                    /* end of inlined section */
      _modelman.field0_0x0.__vtable = (EResourceManager__vtable *)_vt_13EModelManager;
    }
  }
  return;
}

void EModelManager::~EModelManager(int __in_chrg) {
  ___16EResourceManager(&this->field0_0x0,__in_chrg);
  return;
}

ERModel* EModelManager::AddRef(u32 id, EFile *pSourceFile, int seekIfLoaded) {
  ERModel *pEVar1;
  
  pEVar1 = (ERModel *)
           AddRef__16EResourceManagerUiP5EFilei(&this->field0_0x0,id,pSourceFile,seekIfLoaded);
  return pEVar1;
}

ERModel* EModelManager::AddRef(char *szName, EFile *pSourceFile, int seekIfLoaded) {
  ERModel *pEVar1;
  
  pEVar1 = (ERModel *)
           AddRef__16EResourceManagerPCcP5EFilei(&this->field0_0x0,szName,pSourceFile,seekIfLoaded);
  return pEVar1;
}

void EModelManager::TrisLoaded(int nTris) {
  this->m_nTrisLoaded = this->m_nTrisLoaded + nTris;
  return;
}

void EModelManager::StripsLoaded(int nStrips) {
  this->m_nStripsLoaded = this->m_nStripsLoaded + nStrips;
  return;
}

void global constructors keyed to _modelman() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to _modelman() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}
