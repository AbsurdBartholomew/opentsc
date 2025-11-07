// STATUS: NOT STARTED

#include "e_binaryman.h"

EBinaryManager _binaryman = {
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
};

__vtbl_ptr_type EBinaryManager virtual table[7] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EBinaryManager::~EBinaryManager,
		/* .__delta2 = */ -13672
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
		/* .__pfn = */ &EBinaryManager::AllocateAndLoadResource,
		/* .__delta2 = */ -13856
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

EResource* EBinaryManager::AllocateAndLoadResource(EFile *pFile, u32 uLength) {
	ERBinary *pRBinary;
	
  ERBinary *pEVar1;
  
  pEVar1 = (ERBinary *)__builtin_new(0x1c);
  pEVar1 = __8ERBinary(pEVar1);
  Load__8ERBinaryP5EFileUi(pEVar1,pFile,uLength);
  return &pEVar1->field0_0x0;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___16EResourceManager(&_binaryman.field0_0x0,2);
    }
    else {
                    /* inlined from c:/eor/src2/engine/binary/e_binaryman.h */
      __16EResourceManager(&_binaryman.field0_0x0);
                    /* end of inlined section */
      _binaryman.field0_0x0.__vtable = (EResourceManager__vtable *)_vt_14EBinaryManager;
    }
  }
  return;
}

void EBinaryManager::~EBinaryManager(int __in_chrg) {
  ___16EResourceManager(&this->field0_0x0,__in_chrg);
  return;
}

ERBinary* EBinaryManager::AddRef(u32 id, EFile *pSourceFile, int seekIfLoaded) {
  ERBinary *pEVar1;
  
  pEVar1 = (ERBinary *)
           AddRef__16EResourceManagerUiP5EFilei(&this->field0_0x0,id,pSourceFile,seekIfLoaded);
  return pEVar1;
}

ERBinary* EBinaryManager::AddRef(char *szName, EFile *pSourceFile, int seekIfLoaded) {
  ERBinary *pEVar1;
  
  pEVar1 = (ERBinary *)
           AddRef__16EResourceManagerPCcP5EFilei(&this->field0_0x0,szName,pSourceFile,seekIfLoaded);
  return pEVar1;
}

void global constructors keyed to _binaryman() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to _binaryman() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}
