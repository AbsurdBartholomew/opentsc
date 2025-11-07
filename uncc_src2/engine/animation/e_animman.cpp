// STATUS: NOT STARTED

#include "e_animman.h"

EAnimManager _animman = {
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

__vtbl_ptr_type EAnimManager virtual table[7] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EAnimManager::~EAnimManager,
		/* .__delta2 = */ -11344
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
		/* .__pfn = */ &EAnimManager::AllocateAndLoadResource,
		/* .__delta2 = */ -11512
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

EResource* EAnimManager::AllocateAndLoadResource(EStream &s) {
	ERAnim *pRAnim;
	
  ERAnim *pEVar1;
  
  pEVar1 = (ERAnim *)__builtin_new(0x90);
  pEVar1 = __6ERAnim(pEVar1);
  Load__6ERAnimR7EStream(pEVar1,s);
  return &pEVar1->field0_0x0;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___16EResourceManager(&_animman.field0_0x0,2);
    }
    else {
                    /* inlined from c:/eor/src2/engine/animation/e_animman.h */
      __16EResourceManager(&_animman.field0_0x0);
                    /* end of inlined section */
      _animman.field0_0x0.__vtable = (EResourceManager__vtable *)_vt_12EAnimManager;
    }
  }
  return;
}

void EAnimManager::~EAnimManager(int __in_chrg) {
  ___16EResourceManager(&this->field0_0x0,__in_chrg);
  return;
}

ERAnim* EAnimManager::AddRef(u32 id, EFile *pSourceFile, int seekIfLoaded) {
  ERAnim *pEVar1;
  
  pEVar1 = (ERAnim *)
           AddRef__16EResourceManagerUiP5EFilei(&this->field0_0x0,id,pSourceFile,seekIfLoaded);
  return pEVar1;
}

ERAnim* EAnimManager::AddRef(char *szName, EFile *pSourceFile, int seekIfLoaded) {
  ERAnim *pEVar1;
  
  pEVar1 = (ERAnim *)
           AddRef__16EResourceManagerPCcP5EFilei(&this->field0_0x0,szName,pSourceFile,seekIfLoaded);
  return pEVar1;
}

void global constructors keyed to _animman() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to _animman() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}
